#ifndef __ITER_H__
#define __ITER_H__

/*!
 \file     iter.h
 \author   Trevor Williams  (trevorw@charter.net)
 \date     10/24/2002
 \brief    Contains functions for dealing with iterators.
*/

#include "defines.h"


/*! \brief Resets the specified statement iterator at start point. */
void stmt_iter_reset( stmt_iter* si, stmt_link* start );

/*! \brief Moves to the next statement link. */
void stmt_iter_next( stmt_iter* si );

/*! \brief Reverses iterator flow and advances to next statement link. */
void stmt_iter_reverse( stmt_iter* si );

/*! \brief Sets specified iterator to start with statement head for ordering. */
void stmt_iter_find_head( stmt_iter* si, bool skip );

/*! \brief Sets current iterator to next statement in order. */
void stmt_iter_get_next_in_order( stmt_iter* si );

/*
 $Log$
 Revision 1.6  2005/01/10 23:03:39  phase1geo
 Added code to properly report race conditions.  Added code to remove statement blocks
 from module when race conditions are found.

 Revision 1.5  2002/12/07 17:46:53  phase1geo
 Fixing bug with handling memory declarations.  Added diagnostic to verify
 that memory declarations are handled properly.  Fixed bug with infinite
 looping in statement_connect function and optimized this part of the score
 command.  Added diagnostic to verify this fix (always9.v).  Fixed bug in
 report command with ordering of lines and combinational logic verbose output.
 This is now fixed correctly.

 Revision 1.4  2002/11/05 00:20:07  phase1geo
 Adding development documentation.  Fixing problem with combinational logic
 output in report command and updating full regression.

 Revision 1.3  2002/10/31 23:13:53  phase1geo
 Fixing C compatibility problems with cc and gcc.  Found a few possible problems
 with 64-bit vs. 32-bit compilation of the tool.  Fixed bug in parser that
 lead to bus errors.  Ran full regression in 64-bit mode without error.

 Revision 1.2  2002/10/29 19:57:50  phase1geo
 Fixing problems with beginning block comments within comments which are
 produced automatically by CVS.  Should fix warning messages from compiler.

 Revision 1.1  2002/10/25 13:43:49  phase1geo
 Adding statement iterators for moving in both directions in a list with a single
 pointer (two-way).  This allows us to reverse statement lists without additional
 memory and time (very efficient).  Full regression passes and TODO list items
 2 and 3 are completed.
*/

#endif

