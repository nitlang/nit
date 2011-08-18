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

#include "test_ni_new.nit.h"

#include <stdlib.h>


/*
C implementation of extern_new::A::init

Imported methods signatures:
	void A_p( A recv ) for extern_new::A::p
*/
int dv = 1234;
A new_A___impl(  )
{
	return &dv;
}

/*
C implementation of extern_new::A::with_args
*/
A new_A_with_args___impl( bigint x, A a )
{
    int* v = (int*)malloc( sizeof(int) );
    (*v) = (int)x;
	return v;
}

/*
C implementation of extern_new::A::p
*/
void A_p___impl( A recv )
{
	printf( "allo from %i\n", *recv );
}

/*
C implementation of extern_new::A::d

Imported methods signatures:
	A A_d( A recv ) for extern_new::A::d
	A new_A(  ) for extern_new::A::init
*/
A A_d___impl( A recv )
{
    return new_A();
}
