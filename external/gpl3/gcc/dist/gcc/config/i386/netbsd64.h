/* Definitions of target machine for GCC,
   for x86-64/ELF NetBSD systems.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   Contributed by Wasabi Systems, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#define TARGET_OS_CPP_BUILTINS()		\
  do						\
    {						\
      NETBSD_OS_CPP_BUILTINS_ELF();		\
    }						\
  while (0)


/* Provide a LINK_SPEC appropriate for a NetBSD/x86-64 ELF target.  */

#undef LINK_SPEC
#define LINK_SPEC \
  "%{m32:-m elf_i386} \
   %{m64:-m elf_x86_64} \
   %(netbsd_link_spec)"

#define NETBSD_ENTRY_POINT "_start"


/* Provide a CPP_SPEC appropriate for NetBSD.  */

#undef CPP_SPEC
#define CPP_SPEC "%(netbsd_cpp_spec)"


/* Output assembler code to FILE to call the profiler.  */

#undef FUNCTION_PROFILER
#define FUNCTION_PROFILER(FILE, LABELNO)				\
{									\
  if (TARGET_64BIT && flag_pic)						\
    fprintf (FILE, "\tcall __mcount@PLT\n");				\
  else if (flag_pic)							\
    fprintf (FILE, "\tcall __mcount@PLT\n");				\
  else									\
    fprintf (FILE, "\tcall __mcount\n");				\
}

/* Preserve i386 psABI  */
#undef PREFERRED_STACK_BOUNDARY_DEFAULT
#define PREFERRED_STACK_BOUNDARY_DEFAULT \
  ((TARGET_64BIT || TARGET_SSE) ? 128 : 32)

#define HAVE_ENABLE_EXECUTE_STACK

#define IX86_MAYBE_NO_LIBGCC_TFMODE
