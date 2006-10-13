/*
 Copyright (c) 2006 Trevor Williams

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 See the GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along with this program;
 if not, write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/*!
 \file     enumerate.c
 \author   Trevor Williams  (trevorw@charter.net)
 \date     8/29/2006
*/

#include "defines.h"
#include "enumerate.h"
#include "util.h"
#include "vector.h"
#include "param.h"
#include "static.h"


/*!
 \param enum_sig  Pointer to signal in database that represents an enumeration value
 \param value     Pointer to static expression that contains the value to be assigned to the signal during elaboration
 \param funit     Pointer to functional unit that this enumeration value will be added to

 Allocates, initializes and adds a new enumerated item to the given functional unit.
*/
void enumerate_add_item( vsignal* enum_sig, static_expr* value, func_unit* funit ) {

  enum_item* ei;  /* Pointer to newly allocated enumeration item */

  /* Allocate and initialize the enumeration item */
  ei = (enum_item*)malloc_safe( sizeof( enum_item ), __FILE__, __LINE__ );
  ei->sig   = enum_sig;
  ei->value = value;
  ei->last  = FALSE;
  ei->next  = NULL;

  /* Add it to the current functional unit's enumeration list */
  if( funit->ei_head == NULL ) {
    funit->ei_head = funit->ei_tail = ei;
  } else {
    funit->ei_tail->next = ei;
    funit->ei_tail       = ei;
  }

}

/*!
 \param funit  Pointer to functional unit to close out enumerated list.

 Called after all enumerations have been parsed for this list.
*/
void enumerate_end_list( func_unit* funit ) {

  /* Make sure that we aren't calling this function when there is no existing enumerated list */
  assert( funit->ei_tail != NULL );

  /* Set the last bit of the tail enumerated item */
  funit->ei_tail->last = TRUE;

}

/*!
 \param inst  Pointer to functional unit instance to resolve all enumerated values

 Resolves all enumerated values for their value for the given instance.  This needs
 to be called during elaboration after all signals have been sized and parameters have
 been resolved.
*/
void enumerate_resolve( funit_inst* inst ) {

  enum_item* ei;            /* Pointer to current enumeration item in the given functional unit */
  int        last_value;    /* Value of last value for this enumeration */
  bool       first = TRUE;  /* Specifies if the current enumeration is the first */
  bool       is_signed;     /* Contains original value of signedness of signal */

  assert( inst != NULL );

  ei = inst->funit->ei_head;
  while( ei != NULL ) {

    assert( ei->sig->value != NULL );

    /* Store signedness */
    is_signed = ei->sig->value->suppl.part.is_signed;

    /* If no value was assigned, we need to assign one now */
    if( ei->value == NULL ) {

      if( first ) {
        vector_from_int( ei->sig->value, 0 );
      } else {
        vector_from_int( ei->sig->value, (last_value + 1) );
      }

    /* Otherwise, reduce the static_expr value to a number and assign it */
    } else {

      if( ei->value->exp == NULL ) {
        vector_from_int( ei->sig->value, ei->value->num );
      } else {
        param_expr_eval( ei->value->exp, inst );
        vector_set_value( ei->sig->value, ei->value->exp->value->value, VTYPE_VAL, ei->sig->value, 0, 0 );
      }

    }

    /* Put back the original signedness */
    ei->sig->value->suppl.part.is_signed = is_signed;
        
    /* Set the first value to indicate if the next value is the first in the list */
    first = ei->last;

    /* Set last_value to that of this this signal value */
    last_value = vector_to_int( ei->sig->value );

    ei = ei->next;

  }

}

/*!
 \param funit  Pointer to functional unit to remove enumeration list for

 Deallocates all memory associated with the enumeration list in the given functional unit
*/
void enumerate_dealloc_list( func_unit* funit ) {

  enum_item* tmp;  /* Temporary pointer to current link in list */

  while( funit->ei_head != NULL ) {

    tmp  = funit->ei_head;
    funit->ei_head = tmp->next;

    /* Deallocate static expression, if necessary */
    if( tmp->value != NULL ) {
      static_expr_dealloc( tmp->value, TRUE );
    }

    /* Deallocate ourself */
    free( tmp );

  }

  /* Set the tail pointer to NULL as well */
  funit->ei_tail = NULL;

}


/*
 $Log$
 Revision 1.5  2006/10/06 22:45:57  phase1geo
 Added support for the wait() statement.  Added wait1 diagnostic to regression
 suite to verify its behavior.  Also added missing GPL license note at the top
 of several *.h and *.c files that are somewhat new.

 Revision 1.4  2006/09/22 19:56:45  phase1geo
 Final set of fixes and regression updates per recent changes.  Full regression
 now passes.

 Revision 1.3  2006/09/21 22:44:20  phase1geo
 More updates to regressions for latest changes to support memories/multi-dimensional
 arrays.  We still have a handful of VCS diagnostics that are failing.  Checkpointing
 for now.

 Revision 1.2  2006/08/30 12:02:48  phase1geo
 Changing assertion in vcd.c that fails when the VCD file is improperly formatted
 to a user error message with a bit more meaning.  Fixing problem with signedness
 of enumeration resolution.  Added enum1.1 diagnostic to testsuite.

 Revision 1.1  2006/08/29 22:49:31  phase1geo
 Added enumeration support and partial support for typedefs.  Added enum1
 diagnostic to verify initial enumeration support.  Full regression has not
 been run at this point -- checkpointing.

*/

