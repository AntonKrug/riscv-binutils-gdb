/* Opcode table for the TXVU.
   Copyright 1998 Free Software Foundation, Inc.

This file is part of GAS, the GNU Assembler, GDB, the GNU debugger, and
the GNU Binutils.

GAS/GDB is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GAS/GDB is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GAS or GDB; see the file COPYING.	If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* Type to denote a TXVU instruction (at least a 32 bit unsigned int).  */
typedef unsigned int TXVU_INSN;

/* Maximum number of operands an instruction can have.  */
#define TXVU_MAX_OPERANDS 8

struct txvu_opcode {
  char *mnemonic;
  /* The value stored is 128 + operand number.
     This allows ASCII chars to go here as well.  */
  unsigned char syntax[TXVU_MAX_OPERANDS];
  TXVU_INSN mask, value;	/* recognize insn if (op&mask)==value */
  int flags;			/* various flag bits */

/* Values for `flags'.  */

/* This insn is a conditional branch.  */
#define TXVU_OPCODE_COND_BRANCH 1

  /* These values are used to optimize assembly and disassembly.  Each insn is
     on a list of related insns (same first letter for assembly, same insn code
     for disassembly).  */
  /* FIXME: May wish to move this to separate table.  */
  struct txvu_opcode *next_asm;	/* Next instruction to try during assembly.  */
  struct txvu_opcode *next_dis;	/* Next instruction to try during disassembly.  */

  /* Macros to create the hash values for the lists.  */
#define TXVU_HASH_UPPER_OPCODE(string) \
  ((string)[0] >= 'a' && (string)[0] <= 'z' ? (string)[0] - 'a' : 26)
#define TXVU_HASH_LOWER_OPCODE(string) \
  ((string)[0] >= 'a' && (string)[0] <= 'z' ? (string)[0] - 'a' : 26)
#define TXVU_HASH_UPPER_ICODE(insn) \
  ((insn) & 0x3f)
#define TXVU_HASH_LOWER_ICODE(insn) \
  ((insn) & 0x3f)

  /* Macros to access `next_asm', `next_dis' so users needn't care about the
     underlying mechanism.  */
#define TXVU_OPCODE_NEXT_ASM(op) ((op)->next_asm)
#define TXVU_OPCODE_NEXT_DIS(op) ((op)->next_dis)
};

/* The operand table.  */

struct txvu_operand {
  /* The number of bits in the operand (may be unused for a modifier).  */
  unsigned char bits;

  /* How far the operand is left shifted in the instruction, or
     the modifier's flag bit (may be unused for a modifier).  */
  unsigned char shift;

  /* Various flag bits.  */
  int flags;

/* Values for `flags'.  */

/* This operand is a suffix to the opcode.  */
#define TXVU_OPERAND_SUFFIX 1

/* This operand is a relative branch displacement.  The disassembler
   prints these symbolically if possible.  */
#define TXVU_OPERAND_RELATIVE_BRANCH 2

/* This operand is an absolute branch address.  The disassembler
   prints these symbolically if possible.  */
#define TXVU_OPERAND_ABSOLUTE_BRANCH 4

/* This operand is an address.  The disassembler
   prints these symbolically if possible.  */
#define TXVU_OPERAND_ADDRESS 8

/* This operand is a long immediate value.  */
#define TXVU_OPERAND_LIMM 0x10

/* This operand takes signed values.  */
#define TXVU_OPERAND_SIGNED 0x20

/* This operand takes signed values, but also accepts a full positive
   range of values.  That is, if bits is 16, it takes any value from
   -0x8000 to 0xffff.  */
#define TXVU_OPERAND_SIGNOPT 0x40

/* This operand should be regarded as a negative number for the
   purposes of overflow checking (i.e., the normal most negative
   number is disallowed and one more than the normal most positive
   number is allowed).  This flag will only be set for a signed
   operand.  */
#define TXVU_OPERAND_NEGATIVE 0x80

/* This operand doesn't really exist.  The program uses these operands
   in special ways.  */
#define TXVU_OPERAND_FAKE 0x100

/* Modifier values.  */
/* A dot is required before a suffix.  Eg: .le  */
#define TXVU_MOD_DOT 0x1000

/* A normal register is allowed (not used, but here for completeness).  */
#define TXVU_MOD_REG 0x2000

/* An auxiliary register name is expected.  */
#define TXVU_MOD_AUXREG 0x4000

/* Sum of all TXVU_MOD_XXX bits.  */
#define TXVU_MOD_BITS 0x7000

/* Non-zero if the operand type is really a modifier.  */
#define TXVU_MOD_P(X) ((X) & TXVU_MOD_BITS)

  /* Parse function.  This is used by the assembler.
     If the operand cannot be parsed an error message is stored in ERRMSG,
     otherwise NULL is stored.  */
  long (*parse) PARAMS ((char **str, const char **errmsg));

  /* Insertion function.  This is used by the assembler.  To insert an
     operand value into an instruction, check this field.

     If it is NULL, execute
         i |= (p & ((1 << o->bits) - 1)) << o->shift;
     (I is the instruction which we are filling in, O is a pointer to
     this structure, and OP is the opcode value; this assumes twos
     complement arithmetic).

     If this field is not NULL, then simply call it with the
     instruction and the operand value.  It will return the new value
     of the instruction.  If the ERRMSG argument is not NULL, then if
     the operand value is illegal, *ERRMSG will be set to a warning
     string (the operand will be inserted in any case).  If the
     operand value is legal, *ERRMSG will be unchanged.

     REG is non-NULL when inserting a register value.  */

  TXVU_INSN (*insert) PARAMS ((TXVU_INSN insn,
			      const struct txvu_operand *operand, int mods,
			      long value, const char **errmsg));

  /* Extraction function.  This is used by the disassembler.  To
     extract this operand type from an instruction, check this field.

     If it is NULL, compute
         op = ((i) >> o->shift) & ((1 << o->bits) - 1);
	 if ((o->flags & TXVU_OPERAND_SIGNED) != 0
	     && (op & (1 << (o->bits - 1))) != 0)
	   op -= 1 << o->bits;
     (I is the instruction, O is a pointer to this structure, and OP
     is the result; this assumes twos complement arithmetic).

     If this field is not NULL, then simply call it with the
     instruction value.  It will return the value of the operand.  If
     the INVALID argument is not NULL, *INVALID will be set to
     non-zero if this operand type can not actually be extracted from
     this operand (i.e., the instruction does not match).  If the
     operand is valid, *INVALID will not be changed.

     INSN is a pointer to one or two `TXVU_INSN's.  The first element is
     the insn, the second is an immediate constant if present.
     FIXME: just thrown in here for now.
     */

  long (*extract) PARAMS ((TXVU_INSN insn,
			   const struct txvu_operand *operand,
			   int mods, int *pinvalid));

  /* Print function.  This is used by the disassembler.  */
  void (*print) PARAMS ((disassemble_info *info, TXVU_INSN insn,
			 long value));
};

/* Given an operand entry, return the table index.  */
#define TXVU_OPERAND_INDEX(op) ((op) - 128)

/* Positions and masks of various fields.  */
#define TXVU_SHIFT_DEST 21
#define TXVU_SHIFT_FTREG 16
#define TXVU_SHIFT_FSREG 11
#define TXVU_SHIFT_FDREG 6
#define TXVU_MASK_VFREG 31
#define TXVU_DEST_X 8
#define TXVU_DEST_Y 4
#define TXVU_DEST_Z 2
#define TXVU_DEST_W 1
#define TXVU_BC_X 0
#define TXVU_BC_Y 1
#define TXVU_BC_Z 2
#define TXVU_BC_W 3

extern const struct txvu_operand txvu_operands[];
extern const int txvu_operand_count;
extern /*const*/ struct txvu_opcode txvu_opcodes[];
extern const int txvu_opcodes_count;

/* Utility fns in txvu-opc.c.  */
void txvu_opcode_init_tables PARAMS ((int));
void txvu_opcode_init_parse PARAMS ((void));
void txvu_opcode_init_print PARAMS ((void));
const struct txvu_opcode *txvu_upper_opcode_lookup_asm PARAMS ((const char *));
const struct txvu_opcode *txvu_lower_opcode_lookup_asm PARAMS ((const char *));
const struct txvu_opcode *txvu_upper_opcode_lookup_dis PARAMS ((unsigned int));
const struct txvu_opcode *txvu_lower_opcode_lookup_dis PARAMS ((unsigned int));
