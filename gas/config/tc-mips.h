/* tc-mips.h -- header file for tc-mips.c.
   Copyright (C) 1993, 94, 95, 96, 97, 1999, 2000 Free Software Foundation, Inc.
   Contributed by the OSF and Ralph Campbell.
   Written by Keith Knowles and Ralph Campbell, working independently.
   Modified for ECOFF support by Ian Lance Taylor of Cygnus Support.

   This file is part of GAS.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to the Free
   Software Foundation, 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.  */

#ifndef TC_MIPS

#define TC_MIPS

#ifdef ANSI_PROTOTYPES
struct frag;
struct expressionS;
#endif

/* Default to big endian.  */
#ifndef TARGET_BYTES_BIG_ENDIAN
#define TARGET_BYTES_BIG_ENDIAN		1
#endif

#define TARGET_ARCH bfd_arch_mips

#define WORKING_DOT_WORD	1
#define OLD_FLOAT_READS
#define REPEAT_CONS_EXPRESSIONS
#define RELOC_EXPANSION_POSSIBLE
#define MAX_RELOC_EXPANSION 3
#define LOCAL_LABELS_FB 1

/* Maximum symbol offset that can be encoded in a BFD_RELOC_MIPS_GPREL
   relocation: */
#define MAX_GPREL_OFFSET (0x7FF4)

#define md_relax_frag(fragp, stretch) mips_relax_frag(fragp, stretch)
extern int mips_relax_frag PARAMS ((struct frag *, long));

#define md_undefined_symbol(name)	(0)
#define md_operand(x)

extern int mips_do_align PARAMS ((int, const char *, int, int));
#define md_do_align(n,fill,len,max,l) if (mips_do_align (n,fill,len,max)) goto l

/* We permit PC relative difference expressions when generating
   embedded PIC code.  */
#define DIFF_EXPR_OK

/* Tell assembler that we have an itbl_mips.h header file to include. */
#define HAVE_ITBL_CPU

/* The endianness of the target format may change based on command
   line arguments.  */
#define TARGET_FORMAT mips_target_format()
extern const char *mips_target_format PARAMS ((void));

struct mips_cl_insn
{
  unsigned long insn_opcode;
  const struct mips_opcode *insn_mo;
  /* The next two fields are used when generating mips16 code.  */
  boolean use_extend;
  unsigned short extend;
};

extern int tc_get_register PARAMS ((int frame));

#define tc_init_after_args() mips_init_after_args()
extern void mips_init_after_args PARAMS ((void));

#define md_parse_long_option(arg) mips_parse_long_option (arg)
extern int mips_parse_long_option PARAMS ((const char *));

#define tc_frob_label(sym) mips_define_label (sym)
extern void mips_define_label PARAMS ((symbolS *));

#define tc_frob_file_before_adjust() mips_frob_file_before_adjust ()
extern void mips_frob_file_before_adjust PARAMS ((void));

#define tc_frob_file() mips_frob_file ()
extern void mips_frob_file PARAMS ((void));

#if defined (OBJ_ELF) || defined (OBJ_MAYBE_ELF)
#define tc_frob_file_after_relocs mips_frob_file_after_relocs
extern void mips_frob_file_after_relocs PARAMS ((void));
#endif

#define TC_CONS_FIX_NEW cons_fix_new_mips
extern void cons_fix_new_mips
  PARAMS ((struct frag *, int, unsigned int, struct expressionS *));

#define tc_fix_adjustable(fixp) mips_fix_adjustable (fixp)
extern int mips_fix_adjustable PARAMS ((struct fix *));

/* When generating embedded PIC code we must keep PC relative
   relocations.  */
#define TC_FORCE_RELOCATION(fixp) mips_force_relocation (fixp)
extern int mips_force_relocation PARAMS ((struct fix *));

/* md_apply_fix sets fx_done correctly.  */
#define TC_HANDLE_FX_DONE 1

/* Register mask variables.  These are set by the MIPS assembly code
   and used by ECOFF and possibly other object file formats.  */
extern unsigned long mips_gprmask;
extern unsigned long mips_cprmask[4];

#if defined (OBJ_ELF) || defined (OBJ_MAYBE_ELF)

#define elf_tc_final_processing mips_elf_final_processing
extern void mips_elf_final_processing PARAMS ((void));

#define ELF_TC_SPECIAL_SECTIONS \
  { ".sdata",	SHT_PROGBITS,	SHF_ALLOC + SHF_WRITE + SHF_MIPS_GPREL	}, \
  { ".sbss",	SHT_NOBITS,	SHF_ALLOC + SHF_WRITE + SHF_MIPS_GPREL	}, \
  { ".lit4",	SHT_PROGBITS,	SHF_ALLOC + SHF_WRITE + SHF_MIPS_GPREL	}, \
  { ".lit8",	SHT_PROGBITS,	SHF_ALLOC + SHF_WRITE + SHF_MIPS_GPREL	}, \
  { ".ucode",	SHT_MIPS_UCODE,	0					}, \
  { ".mdebug",	SHT_MIPS_DEBUG,	0					},
/* Other special sections not generated by the assembler: .reginfo,
   .liblist, .conflict, .gptab, .got, .dynamic, .rel.dyn.  */

#endif

extern void md_mips_end PARAMS ((void));
#define md_end()	md_mips_end()

#define USE_GLOBAL_POINTER_OPT	(OUTPUT_FLAVOR == bfd_target_ecoff_flavour \
				 || OUTPUT_FLAVOR == bfd_target_coff_flavour \
				 || OUTPUT_FLAVOR == bfd_target_elf_flavour)

extern void mips_pop_insert PARAMS ((void));
#define md_pop_insert()		mips_pop_insert()

extern void mips_flush_pending_output PARAMS ((void));
#define md_flush_pending_output mips_flush_pending_output

extern void mips_enable_auto_align PARAMS ((void));
#define md_elf_section_change_hook()	mips_enable_auto_align()

#endif /* TC_MIPS */
