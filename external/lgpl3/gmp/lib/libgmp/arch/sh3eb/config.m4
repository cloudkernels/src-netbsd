dnl config.m4.  Generated automatically by configure.
changequote(<,>)
ifdef(<__CONFIG_M4_INCLUDED__>,,<

define(<WANT_ASSERT>,0)
define(<WANT_PROFILING>,<`no'>)
define(<M4WRAP_SPURIOUS>,<no>)
define(<TEXT>, <.text>)
define(<DATA>, <.data>)
define(<LABEL_SUFFIX>, <:>)
define(<GLOBL>, <.globl>)
define(<GLOBL_ATTR>, <>)
define(<GSYM_PREFIX>, <>)
define(<RODATA>, <	.section	.rodata>)
define(<TYPE>, <.type	$1,@$2>)
define(<SIZE>, <.size	$1,$2>)
define(<LSYM_PREFIX>, <.L>)
define(<W32>, <.long>)
define(<ALIGN_LOGARITHMIC>,<yes>)
define(<SIZEOF_UNSIGNED>,<4>)
define(<GMP_LIMB_BITS>,32)
define(<GMP_NAIL_BITS>,0)
define(<GMP_NUMB_BITS>,eval(GMP_LIMB_BITS-GMP_NAIL_BITS))
>)
changequote(`,')
ifdef(`__CONFIG_M4_INCLUDED__',,`
include(CONFIG_TOP_SRCDIR`/mpn/asm-defs.m4')
define_not_for_expansion(`HAVE_HOST_CPU_sh')
define_not_for_expansion(`HAVE_ABI_standard')
define_not_for_expansion(`HAVE_LIMB_BIG_ENDIAN')
define_not_for_expansion(`HAVE_DOUBLE_IEEE_BIG_ENDIAN')
')
define(`__CONFIG_M4_INCLUDED__')
