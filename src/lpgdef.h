/* $Id: lpgdef.h,v 1.2 1999/11/04 14:02:22 shields Exp $ */
/*
 This software is subject to the terms of the IBM Jikes Compiler
 License Agreement available at the following URL:
 http://www.ibm.com/research/jikes.
 Copyright (C) 1983, 1999, International Business Machines Corporation
 and others.  All Rights Reserved.
 You must accept the terms of that agreement to use this software.
*/
#ifndef lpgdef_INCLUDED
#define lpgdef_INCLUDED

enum {
      NT_OFFSET         = 19,
      BUFF_UBOUND       = 30,
      BUFF_SIZE         = 31,
      STACK_UBOUND      = 20,
      STACK_SIZE        = 21,
      SCOPE_UBOUND      = -1,
      SCOPE_SIZE        = 0,
      LA_STATE_OFFSET   = 392,
      MAX_LA            = 1,
      NUM_RULES         = 141,
      NUM_TERMINALS     = 19,
      NUM_NON_TERMINALS = 38,
      NUM_SYMBOLS       = 57,
      START_STATE       = 144,
      EOFT_SYMBOL       = 19,
      EOLT_SYMBOL       = 20,
      ACCEPT_ACTION     = 250,
      ERROR_ACTION      = 251
     };


#endif /* lpgdef_INCLUDED */
