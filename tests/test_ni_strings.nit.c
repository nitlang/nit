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

#include "test_ni_strings.nit.h"


/*
C implementation of test_ni_strings::A::get_str_from_nstr

Imported methods signatures:
	String new_String_from_cstring( char * str ) for string::String::from_cstring
*/
String A_get_str_from_nstr___impl( A recv, char * nstr )
{
	return new_String_from_cstring( nstr );
}

/*
C implementation of test_ni_strings::A::get_str_from_nstr_with_len

Imported methods signatures:
	String new_String_with_native( char * nat, bigint size ) for string::String::with_native
	bigint NativeString_cstring_length( char * recv ) for string::NativeString::cstring_length
*/
String A_get_str_from_nstr_with_len___impl( A recv, char * nstr )
{
	return new_String_with_native( nstr, NativeString_cstring_length( nstr ) );
}

/*
C implementation of test_ni_strings::A::get_nstr_from_str

Imported methods signatures:
	char * String_to_cstring( String recv ) for string::String::to_cstring
*/
char * A_get_nstr_from_str___impl( A recv, String str )
{
	return String_to_cstring( str );
}


/*
C implementation of test_ni_strings::A::get_something

Imported methods signatures:
	String new_String_from_cstring( char * str ) for string::String::from_cstring
*/
String A_get_something___impl( A recv )
{
	return new_String_from_cstring( "something" );
}
