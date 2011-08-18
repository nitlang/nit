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

#include "test_ni_pointer.nit.h"

/*
C implementation of test_ni_pointer::A::init
*/
A new_A___impl(  )
{
	int* v = (int*)malloc( sizeof(int) );
	(*v) = 123;
	return (A)v;
}

/*
C implementation of test_ni_pointer::A::(string::Object::to_s)

Imported methods signatures:
	String new_String_from_cstring( char * str ) for string::String::from_cstring
*/
String A_to_s___impl( A recv )
{
	char* s = calloc( 256, sizeof(char) );
	sprintf( s, "%d", *((int*)recv) );
	return new_String_from_cstring( s );
}
