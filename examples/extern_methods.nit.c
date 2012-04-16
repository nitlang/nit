/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "extern_methods.nit.h"

#include <math.h>

/*
C implementation of extern_methods::Int::fib
*/
bigint Int_fib___impl( bigint recv ) {
	if ( recv < 2 )
		return recv;
	else
		return Int_fib___impl( recv-1 ) + Int_fib___impl( recv-2 );
}

/*
C implementation of extern_methods::Int::sleep
*/
void Int_sleep___impl( bigint recv ) {
	sleep( recv );
}

/*
C implementation of extern_methods::Int::atan_with
*/
float Int_atan_with___impl( bigint recv, bigint x ) {
	return atan2( recv, x );
}

/*
C implementation of extern_methods::Int::foo

Imported methods signatures:
	bigint Int_fib( bigint recv ) for extern_methods::Int::fib
	bigint Int__plus( bigint recv, bigint i ) for kernel::Int::(kernel::Discrete::+)
	String Int_to_s( bigint recv ) for string::Int::(string::Object::to_s)
	char * String_to_cstring( String recv ) for string::String::to_cstring
*/
void Int_foo___impl( bigint recv ) {
	bigint recv_fib = Int_fib( recv );
	bigint recv_plus_fib = Int__plus( recv, recv_fib );

	String nit_string = Int_to_s( recv_plus_fib );
	char *c_string = String_to_cstring( nit_string );

	printf( "from C: self + fib(self) = %s\n", c_string );
}

