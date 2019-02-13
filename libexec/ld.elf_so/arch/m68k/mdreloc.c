/*	$NetBSD: mdreloc.c,v 1.33 2017/08/10 19:03:26 joerg Exp $	*/

#include <sys/cdefs.h>
#ifndef lint
__RCSID("$NetBSD: mdreloc.c,v 1.33 2017/08/10 19:03:26 joerg Exp $");
#endif /* not lint */

#include <sys/types.h>

#include "debug.h"
#include "rtld.h"

void _rtld_bind_start(void);
void _rtld_relocate_nonplt_self(Elf_Dyn *, Elf_Addr);
caddr_t _rtld_bind(const Obj_Entry *, Elf_Word);
static inline int _rtld_relocate_plt_object(const Obj_Entry *,
    const Elf_Rela *, Elf_Addr *);


void
_rtld_setup_pltgot(const Obj_Entry *obj)
{
	obj->pltgot[1] = (Elf_Addr) obj;
	obj->pltgot[2] = (Elf_Addr) &_rtld_bind_start;
}

void
_rtld_relocate_nonplt_self(Elf_Dyn *dynp, Elf_Addr relocbase)
{
	const Elf_Rela *rela = 0, *relalim;
	Elf_Addr relasz = 0;
	Elf_Addr *where;

	for (; dynp->d_tag != DT_NULL; dynp++) {
		switch (dynp->d_tag) {
		case DT_RELA:
			rela = (const Elf_Rela *)(relocbase + dynp->d_un.d_ptr);
			break;
		case DT_RELASZ:
			relasz = dynp->d_un.d_val;
			break;
		}
	}
	relalim = (const Elf_Rela *)((const uint8_t *)rela + relasz);
	for (; rela < relalim; rela++) {
		where = (Elf_Addr *)(relocbase + rela->r_offset);
		*where += (Elf_Addr)relocbase;
	}
}

int
_rtld_relocate_nonplt_objects(Obj_Entry *obj)
{
	const Elf_Rela *rela;
	const Elf_Sym *def = NULL;
	const Obj_Entry *defobj = NULL;
	unsigned long last_symnum = ULONG_MAX;

	for (rela = obj->rela; rela < obj->relalim; rela++) {
		Elf_Addr        *where;
		Elf_Addr         tmp;
		unsigned long	 symnum;

		where = (Elf_Addr *)(obj->relocbase + rela->r_offset);

		switch (ELF_R_TYPE(rela->r_info)) {
		case R_TYPE(PC32):
		case R_TYPE(GOT32):
		case R_TYPE(32):
		case R_TYPE(GLOB_DAT):
		case R_TYPE(TLS_DTPMOD32):
		case R_TYPE(TLS_DTPREL32):
		case R_TYPE(TLS_TPREL32):
			symnum = ELF_R_SYM(rela->r_info);
			if (last_symnum != symnum) {
				last_symnum = symnum;
				def = _rtld_find_symdef(symnum, obj, &defobj,
				    false);
				if (def == NULL)
					return -1;
			}
			break;
		default:
			break;
		}

		switch (ELF_R_TYPE(rela->r_info)) {
		case R_TYPE(NONE):
			break;

#if 1 /* XXX should not occur */
		case R_TYPE(PC32):
			tmp = (Elf_Addr)(defobj->relocbase + def->st_value +
			    rela->r_addend) - (Elf_Addr)where;
			if (*where != tmp)
				*where = tmp;
			rdbg(("PC32 %s in %s --> %p in %s",
			    obj->strtab + obj->symtab[symnum].st_name,
			    obj->path, (void *)*where, defobj->path));
			break;

		case R_TYPE(GOT32):
#endif
		case R_TYPE(32):
		case R_TYPE(GLOB_DAT):
			tmp = (Elf_Addr)(defobj->relocbase + def->st_value +
			    rela->r_addend);
			if (*where != tmp)
				*where = tmp;
			rdbg(("32/GLOB_DAT %s in %s --> %p in %s",
			    obj->strtab + obj->symtab[symnum].st_name,
			    obj->path, (void *)*where, defobj->path));
			break;

		case R_TYPE(RELATIVE):
			*where += (Elf_Addr)obj->relocbase;
			rdbg(("RELATIVE in %s --> %p", obj->path,
			    (void *)*where));
			break;

		case R_TYPE(COPY):
			/*
			 * These are deferred until all other relocations have
			 * been done.  All we do here is make sure that the
			 * COPY relocation is not in a shared library.  They
			 * are allowed only in executable files.
			 */
			if (obj->isdynamic) {
				_rtld_error(
			"%s: Unexpected R_COPY relocation in shared library",
				    obj->path);
				return -1;
			}
			rdbg(("COPY (avoid in main)"));
			break;

		case R_TYPE(TLS_DTPMOD32):
			*where = (Elf_Addr)defobj->tlsindex;
			rdbg(("DTPMOD32 %s in %s --> %p in %s",
			    obj->strtab + obj->symtab[symnum].st_name,
			    obj->path, (void *)*where, defobj->path));
			break;

		case R_TYPE(TLS_DTPREL32):
			if (!defobj->tls_done && _rtld_tls_offset_allocate(obj))
				return -1;

			*where = (Elf_Addr)(def->st_value + rela->r_addend
			    - TLS_DTV_OFFSET);
			rdbg(("DTPREL32 %s in %s --> %p in %s",
			    obj->strtab + obj->symtab[symnum].st_name,
			    obj->path, (void *)*where, defobj->path));
			break;

		case R_TYPE(TLS_TPREL32):
			if (!defobj->tls_done && _rtld_tls_offset_allocate(obj))
				return -1;

			*where = (Elf_Addr)(def->st_value + rela->r_addend
			    + defobj->tlsoffset - TLS_TP_OFFSET);
			rdbg(("TPREL32 %s in %s --> %p in %s",
			    obj->strtab + obj->symtab[symnum].st_name,
			    obj->path, (void *)*where, defobj->path));
			break;

		default:
			rdbg(("sym = %lu, type = %lu, offset = %p, "
			    "addend = %p, contents = %p, symbol = %s",
			    (u_long)ELF_R_SYM(rela->r_info),
			    (u_long)ELF_R_TYPE(rela->r_info),
			    (void *)rela->r_offset, (void *)rela->r_addend,
			    (void *)*where,
			    obj->strtab + obj->symtab[symnum].st_name));
			_rtld_error("%s: Unsupported relocation type %ld "
			    "in non-PLT relocations",
			    obj->path, (u_long) ELF_R_TYPE(rela->r_info));
			return -1;
		}
	}
	return 0;
}

int
_rtld_relocate_plt_lazy(Obj_Entry *obj)
{
	const Elf_Rela *rela;

	if (!obj->relocbase)
		return 0;

	for (rela = obj->pltrela; rela < obj->pltrelalim; rela++) {
		Elf_Addr *where = (Elf_Addr *)(obj->relocbase + rela->r_offset);

		assert(ELF_R_TYPE(rela->r_info) == R_TYPE(JMP_SLOT));

		/* Just relocate the GOT slots pointing into the PLT */
		*where += (Elf_Addr)obj->relocbase;
		rdbg(("fixup !main in %s --> %p", obj->path, (void *)*where));
	}

	return 0;
}

static inline int
_rtld_relocate_plt_object(const Obj_Entry *obj, const Elf_Rela *rela,
    Elf_Addr *tp)
{
	Elf_Addr *where = (Elf_Addr *)(obj->relocbase + rela->r_offset);
	Elf_Addr new_value;
	const Elf_Sym  *def;
	const Obj_Entry *defobj;
	unsigned long info = rela->r_info;

	assert(ELF_R_TYPE(info) == R_TYPE(JMP_SLOT));

	def = _rtld_find_plt_symdef(ELF_R_SYM(info), obj, &defobj, tp != NULL);
	if (__predict_false(def == NULL))
		return -1;
	if (__predict_false(def == &_rtld_sym_zero))
		return 0;

	assert(rela->r_addend == 0);
	if (ELF_ST_TYPE(def->st_info) == STT_GNU_IFUNC) {
		if (tp == NULL)
			return 0;
		new_value = _rtld_resolve_ifunc(defobj, def);
	} else {
		new_value = (Elf_Addr)(defobj->relocbase + def->st_value +
		    rela->r_addend);
	}
	rdbg(("bind now/fixup in %s --> old=%p new=%p",
	    defobj->strtab + def->st_name, (void *)*where, (void *)new_value));
	if (*where != new_value)
		*where = new_value;

	if (tp)
		*tp = new_value - rela->r_addend;

	return 0;
}

caddr_t
_rtld_bind(const Obj_Entry *obj, Elf_Word reloff)
{
	const Elf_Rela *rela = (const Elf_Rela *)((const uint8_t *)obj->pltrela + reloff);
	Elf_Addr result;
	int err;

	result = 0;	/* XXX gcc */

	_rtld_shared_enter();
	err = _rtld_relocate_plt_object(obj, rela, &result);
	if (err)
		_rtld_die();
	_rtld_shared_exit();

	return (caddr_t)result;
}

int
_rtld_relocate_plt_objects(const Obj_Entry *obj)
{
	const Elf_Rela *rela;

	for (rela = obj->pltrela; rela < obj->pltrelalim; rela++)
		if (_rtld_relocate_plt_object(obj, rela, NULL) < 0)
			return -1;

	return 0;
}
