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

#include "test_ni_import_meth.nit.h"

/*
C implementation of simple::A::ex_sees_nity

Imported methods signatures:
	void A_nity( A recv ) for simple::A::nity
*/
void A_ex_sees_nity___impl( A recv )
{
	A_nity( recv );
}

/*
C implementation of simple::A::ex_sees_nities

Imported methods signatures:
	void A_nity1( A recv, bigint x ) for simple::A::nity1
	void A_nity2( A recv, bigint x, bigint y ) for simple::A::nity2
*/
void A_ex_sees_nities___impl( A recv )
{
	A_nity( recv );
	A_nity1( recv, 3 );
	A_nity2( recv, 7, 13 );
}
