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

#include "test_ni_accessor.nit.h"

/*
C implementation of test_ni_accessor::A::print_all

Imported methods signatures:
	char * String_to_cstring( String recv ) for string::String::to_cstring
	String A_r( A recv ) for test_ni_accessor::A::r
	String A_rw( A recv ) for test_ni_accessor::A::rw
*/
void A_print_all___impl( A recv )
{
	printf( "%s %s\n",
	        String_to_cstring( A_r( recv ) ),
	        String_to_cstring( A_rw( recv ) ) );
}

/*
C implementation of test_ni_accessor::A::modify

Imported methods signatures:
	String NativeString_to_s( char * str ) for string::NativeString::to_s
	void A_w__eq( A recv, String w ) for test_ni_accessor::A::w=
	void A_rw__eq( A recv, String rw ) for test_ni_accessor::A::rw=
*/
void A_modify___impl( A recv )
{
	A_w__assign( recv, NativeString_to_s( "w set from native" ) );
	A_rw__assign( recv, NativeString_to_s( "rw set from native" ) );
}

/*
C implementation of test_ni_accessor::B::print_and_modify

Imported methods signatures:
	String A_rw( A recv ) for test_ni_accessor::A::rw
	void A_rw__assign( A recv, String value ) for test_ni_accessor::A::rw=
	char * String_to_cstring( String recv ) for string::String::to_cstring
	String NativeString_to_s( char * str ) for string::NativeString::to_s
*/
void B_print_and_modify___impl( B recv, A a )
{
	printf( "%s\n", String_to_cstring( A_rw( a ) ) );
	A_rw__assign( a, NativeString_to_s( "set from native" ) );
	printf( "%s\n", String_to_cstring( A_rw( a ) ) );
}
