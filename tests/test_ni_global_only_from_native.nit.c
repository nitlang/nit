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

#include "test_ni_global_only_from_native.nit.h"

/*
C implementation of test_ni_global_only_from_native::A::f

Imported methods signatures:
	void B_g( B recv ) for test_ni_global_only_from_native::B::g
*/
void A_f___impl( A recv, B b ) {
	B_g( b );
}
