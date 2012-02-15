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

#include "test_ni_special_all_native.nit.h"

/*
C implementation of test_ni_special_all_native::A::work
*/
void A_work___impl( A recv )
{
	printf( "A\n" );
}

/*
C implementation of test_ni_special_all_native::A::call

Imported methods signatures:
	void A_work( A recv ) for test_ni_special_all_native::A::work
*/
void A_call___impl( A recv )
{
	A_work( recv );
}

/*
C implementation of test_ni_special_all_native::B::(test_ni_special_all_native::A::work)
*/
void B_work___impl( B recv )
{
	printf( "B\n" );
}
