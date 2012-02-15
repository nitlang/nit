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

#include "test_ni_cast_extra.nit.h"

/*
C implementation of test_ni_cast_extra::A::isa_b

Imported methods signatures:
	int A_is_a_B( A value ) to check if a A is a B
	B A_as_B( A value ) to cast from A to B
*/
int A_isa_b___impl( A recv )
{
	return A_is_a_B( recv );
}

/*
C implementation of test_ni_cast_extra::A::as_b

Imported methods signatures:
	int A_is_a_B( A value ) to check if a A is a B
	B A_as_B( A value ) to cast from A to B
	int A_is_a_nullable_B( A value ) to check if a A is a nullable B
	nullable_B A_as_nullable_B( A value ) to cast from A to nullable B
*/
nullable_B A_as_b___impl( A recv )
{
	if ( A_is_a_nullable_B( recv ) )
		return A_as_nullable_B( recv );
	else
		return null_B();
}

/*
C implementation of test_ni_cast_extra::C::isa_a

Imported methods signatures:
	int C_is_a_A( C value ) to check if a C is a A
	A C_as_A( C value ) to cast from C to A
*/
int C_isa_a___impl( C recv )
{
	return C_is_a_A( recv );
}

/*
C implementation of test_ni_cast_extra::D::as_a

Imported methods signatures:
	int D_is_a_A( D value ) to check if a D is a A
	A D_as_A( D value ) to cast from D to A
*/
A D_as_a___impl( D recv )
{
	return D_as_A( recv );
}
