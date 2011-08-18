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

#include "test_ni_fibonacci.nit.h"


/*
C implementation of fibonacci::FibonacciEngine::fibonacci

Imported methods signatures:
	bigint FibonacciEngine_fibonacci( FibonacciEngine recv, bigint n ) for fibonacci::FibonacciEngine::fibonacci
*/
bigint FibonacciEngine_fibonacci___impl( FibonacciEngine recv, bigint n )
{
	if ( n == 0 )
	    return 0;
	if ( n == 1 )
	    return 1;
	else
	    return FibonacciEngine_fibonacci( recv, n-1 ) + FibonacciEngine_fibonacci( recv,  n-2 );
}

/*
C implementation of fibonacci::Int::fibonacci

Imported methods signatures:
	bigint Int_fibonacci( bigint recv ) for fibonacci::Int::fibonacci
*/
bigint Int_fibonacci___impl( bigint recv )
{
	if ( recv == 0 )
	    return 0;
	else if ( recv == 1 )
	    return 1;
	else
	    return Int_fibonacci( recv-1 ) + Int_fibonacci( recv-2 );
}
