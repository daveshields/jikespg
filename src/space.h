/* $Id: space.h,v 1.2 1999/11/04 14:02:23 shields Exp $ */
/*
 This software is subject to the terms of the IBM Jikes Compiler
 License Agreement available at the following URL:
 http://www.ibm.com/research/jikes.
 Copyright (C) 1983, 1999, International Business Machines Corporation
 and others.  All Rights Reserved.
 You must accept the terms of that agreement to use this software.
*/
#ifndef SPACE_INCLUDED
#define SPACE_INCLUDED

struct new_state_type
{
    struct reduce_header_type reduce;
    short                     shift_number,
                              link,
                              thread,
                              image;
};

extern struct new_state_type *new_state_element;

extern short *shift_image,
             *real_shift_number;

extern int *term_state_index,
           *shift_check_index;

extern int shift_domain_count,
           num_terminal_states,
           check_size,
           term_check_size,
           term_action_size,
           shift_check_size;

#endif /* SPACE_INCLUDED */
