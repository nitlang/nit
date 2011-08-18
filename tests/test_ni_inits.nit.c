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

#include "test_ni_inits.nit.h"

/*
C implementation of test_ni_inits::A::with_b
*/
A new_A_with_b___impl(  )
{
	A a = malloc( sizeof(char) );
	*a = 'b';
	return a;
}

/*
C implementation of test_ni_inits::A::alloc
*/
A new_A_alloc___impl(  )
{
	A a = malloc( sizeof(char) );
	return a;
}

/*
C implementation of test_ni_inits::A::set
*/
void A_set___impl( A recv, char v )
{
	*recv = 'v';
}

/*
C implementation of test_ni_inits::A::(string::Object::to_s)

Imported methods signatures:
	String new_String_from_cstring( char * str ) for string::String::from_cstring
*/
String A_to_s___impl( A recv )
{
	char *str = malloc( 2 * sizeof(char) );
	str[0] = *recv;
	str[1] = 0;

	return new_String_from_cstring( str );
}
