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

#include "test_ni_import_init.nit.h"

/*
C implementation of acces::A::ex_sees_b_attr

Imported methods signatures:
	bigint B_i( B recv ) for acces::B::i
*/
bigint A_ex_sees_b_attr___impl( A recv, B b )
{
	return B_i( b );
}

/*
C implementation of acces::A::ex_sees_b_init

Imported methods signatures:
	void new_B(  ) for acces::B::init
	void new_B_from( bigint i ) for acces::B::from
*/
B A_ex_sees_b_init___impl( A recv, bigint i )
{
	return new_B_from( i );
}
