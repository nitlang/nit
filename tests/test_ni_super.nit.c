/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "test_ni_super.nit.h"

/*
C implementation of super::B::(super::A::id)

Imported methods signatures:
	void new_String_from_cstring( char * str ) for string::String::from_cstring
	char * String_to_cstring( String recv ) for string::String::to_cstring
	String B_id___super( B recv ) to call super
*/
String B_id___impl( B recv )
{
	char *new_name;
	char *prefix = "B special ";
	char *super_name = String_to_cstring( B_id___super( recv ) );

	new_name = calloc( strlen( prefix )+strlen( super_name )+1, sizeof(char) );
	strcpy( new_name, prefix );
	strcpy( new_name+strlen( prefix ), super_name );
	new_name[ strlen( prefix )+strlen( super_name ) ] = '\0';

	return new_String_from_cstring( new_name );
}
