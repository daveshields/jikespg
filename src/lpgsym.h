/* $Id: lpgsym.h,v 1.2 1999/11/04 14:02:22 shields Exp $ */
/*
 This software is subject to the terms of the IBM Jikes Compiler
 License Agreement available at the following URL:
 http://www.ibm.com/research/jikes.
 Copyright (C) 1983, 1999, International Business Machines Corporation
 and others.  All Rights Reserved.
 You must accept the terms of that agreement to use this software.
*/
#ifndef lpgsym_INCLUDED
#define lpgsym_INCLUDED

enum {
      DEFINE_KEY_TK = 5,
      TERMINALS_KEY_TK = 9,
      ALIAS_KEY_TK = 10,
      START_KEY_TK = 11,
      RULES_KEY_TK = 12,
      NAMES_KEY_TK = 16,
      END_KEY_TK = 18,
      EQUIVALENCE_TK = 1,
      ARROW_TK = 2,
      OR_TK = 6,
      EMPTY_SYMBOL_TK = 7,
      ERROR_SYMBOL_TK = 8,
      EOL_SYMBOL_TK = 13,
      EOF_SYMBOL_TK = 14,
      MACRO_NAME_TK = 15,
      SYMBOL_TK = 3,
      BLOCK_TK = 4,
      HBLOCK_TK = 17,
      EOF_TK = 19
     };

#endif /* lpgsym_INCLUDED */
