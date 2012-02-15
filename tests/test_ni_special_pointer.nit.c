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

#include "test_ni_special_pointer.nit.h"

/*
C implementation of test_ni_special_pointer::ExternInt::as_0
*/
ExternInt new_ExternInt_as_0___impl(  )
{
	ExternInt i0 = (int*)malloc( sizeof(int) );
	(*i0) = 0;
	return i0;
}

/*
C implementation of test_ni_special_pointer::ExternInt::as_1
*/
ExternInt new_ExternInt_as_1___impl(  )
{
	ExternInt i0 = (int*)malloc( sizeof(int) );
	(*i0) = 1;
	return i0;
}

/*
C implementation of test_ni_special_pointer::ExternInt::as_2
*/
ExternInt new_ExternInt_as_2___impl(  )
{
	ExternInt i0 = (int*)malloc( sizeof(int) );
	(*i0) = 2;
	return i0;
}

/*
C implementation of test_ni_special_pointer::ExternInt::(string::Object::to_s)

Imported methods signatures:
	String new_String_from_cstring( char * str ) for string::String::from_cstring
*/
String ExternInt_to_s___impl( ExternInt recv )
{
	int v = *recv;
	char *vs = (char*)calloc( 256, sizeof(char) );

	sprintf( vs, "%i", v );
	return new_String_from_cstring( vs );
}

/*
C implementation of test_ni_special_pointer::ExternInt::to_i
*/
bigint ExternInt_to_i___impl( ExternInt recv )
{
	return *recv;
}

/*
C implementation of test_ni_special_pointer::Int::to_extern_int
*/
ExternInt Int_to_extern_int___impl( bigint recv )
{
	ExternInt i = malloc( sizeof(int) );
	(*i) = recv;
	return i;
}
