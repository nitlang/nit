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

#include "test_ni_null.nit.h"

/*
C implementation of test_ni_null::A::is_int_null

Imported methods signatures:
	int Int_is_null( nullable_Int value ) to check if a nullable Int is a Int
	bigint bigint_as_not_null( nullable_Int value ) to cast from nullable Int to Int
*/
int A_is_int_null___impl( A recv, nullable_Int ni )
{
    return Int_is_null( ni );
}

/*
C implementation of test_ni_null::A::is_a_null

Imported methods signatures:
	int A_is_null( nullable_A value ) to check if a nullable A is a A
	A A_as_not_null( nullable_A value ) to cast from nullable A to A
*/
int A_is_a_null___impl( A recv, nullable_A na )
{
    return A_is_null( na );
}

/*
C implementation of test_ni_null::A::get_nullable_string

Imported methods signatures:
	String new_String_from_cstring( char * str ) for string::String::from_cstring
	nullable_String String_as_nullable( String value ) to cast from String to nullable String
*/
nullable_String A_get_nullable_string___impl( A recv, int get_nulled )
{
    if ( get_nulled )
    {
        return null_String();
    }
    else
    {
        return String_as_nullable( new_String_from_cstring( "something" ) );
    }
}
