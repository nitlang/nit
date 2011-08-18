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

#include "test_ni_cast_simple.nit.h"

/*
C implementation of test_ni_cast_simple::Object::s_to_o

Imported methods signatures:
	int String_is_a_Object( String value ) to check if a String is a Object
	Object String_as_Object( String value ) to cast from String to Object
*/
Object Object_s_to_o___impl( Object recv, String s )
{
    return String_as_Object( s );
}

/*
C implementation of test_ni_cast_simple::Object::n_to_nn

Imported methods signatures:
	nullable_String String_as_nullable( String value ) to cast from String to nullable String
*/
nullable_String Object_n_to_nn___impl( Object recv, String s )
{
    return String_as_nullable( s );
}

/*
C implementation of test_ni_cast_simple::Object::nn_to_n

Imported methods signatures:
	int String_is_null( nullable_String value ) to check if a nullable String is a String
	String nullable_String_as_not_null( nullable_String value ) to cast from nullable String to String
*/
String Object_nn_to_n___impl( Object recv, nullable_String s )
{
    return String_as_not_null( s );
}
