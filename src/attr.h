#ifndef __ATTR_H__
#define __ATTR_H__

/*!
 \file     attr.h
 \author   Trevor Williams  (trevorw@charter.net)
 \date     10/25/2003
 \brief    Contains functions for handling attributes.
*/

#include "defines.h"


/*! \brief Creates new attribute parameter based on specified values.
attr_param* attribute_create( char* name, expression* expr );

/*! \brief Parses and handles specified attribute parameter list. */
void attribute_parse( attr_param* ap, module* mod );

/*! \brief Deallocates entire attribute parameter list. */
void attribute_dealloc( attr_param* ap );


/*
 $Log$
*/

#endif
