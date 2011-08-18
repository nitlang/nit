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

#include "test_ni_virtypes.nit.h"

/*
C implementation of test_ni_virtypes::B::f
*/
bigint B_f___impl( B recv ) {
	return 1;
}

/*
C implementation of test_ni_virtypes::C::f
*/
void C_f___impl( C recv, String v ) {}

/*
C implementation of test_ni_virtypes::D::(test_ni_virtypes::B::f)
*/
bigint D_f___impl( D recv ) {
	return 2;
}
