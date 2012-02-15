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

#include "test_ni_operators.nit.h"

/*
C implementation of test_ni_operators::A::+

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__plus___impl( A recv, A other )
{

		int s = A_value( recv );
		int o = A_value( other );

		return new_A( s + o );

}

/*
C implementation of test_ni_operators::A::-

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__minus___impl( A recv, A other )
{

		int s = A_value( recv );
		int o = A_value( other );

		return new_A( s - o );

}

/*
C implementation of test_ni_operators::A::*

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__star___impl( A recv, bigint by )
{

		int s = A_value( recv );

		return new_A( s * by );

}

/*
C implementation of test_ni_operators::A::/

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__slash___impl( A recv, bigint by )
{

		int s = A_value( recv );

		return new_A( s / by );

}

/*
C implementation of test_ni_operators::A::(kernel::Object::==)

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	int nullable_Object_is_a_A( nullable_Object value ) to check if a nullable Object is a A
	A nullable_Object_as_A( nullable_Object value ) to cast from nullable Object to A
*/
int A__equal___impl( A recv, nullable_Object other )
{

		if ( nullable_Object_is_a_A( other ) &&
			 A_value( nullable_Object_as_A(other) ) == A_value( recv ) )
			return 1;
		else
			return 0;

}

/*
C implementation of test_ni_operators::A::%

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__percent___impl( A recv, A other )
{

		return new_A( A_value( recv ) % A_value( other ) );

}

/*
C implementation of test_ni_operators::A::<=>

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__starship___impl( A recv, A other )
{

		return new_A( A_value( recv )* 1024 );

}

/*
C implementation of test_ni_operators::A::>

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
*/
int A__greater___impl( A recv, A other )
{

		return A_value( recv ) > A_value( other );

}

/*
C implementation of test_ni_operators::A::<

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
*/
int A__less___impl( A recv, A other )
{

		return A_value( recv ) < A_value( other );

}

/*
C implementation of test_ni_operators::A::>=

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
*/
int A__ge___impl( A recv, A other )
{

		return A_value( recv ) >= A_value( other );

}

/*
C implementation of test_ni_operators::A::<=

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
*/
int A__less_or_equal___impl( A recv, A other )
{

		return A_value( recv ) <= A_value( other );

}

/*
C implementation of test_ni_operators::A::>>

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	void A_value__assign( A recv, bigint value ) for test_ni_operators::A::value=
	A new_A( bigint value ) for test_ni_operators::A::init
*/
void A__right___impl( A recv, A other )
{

		int new_val = A_value( recv ) >> A_value( other );
		A_value__assign( recv, new_val );

}

/*
C implementation of test_ni_operators::A::<<

Imported methods signatures:
	bigint A_value( A recv ) for test_ni_operators::A::value
	A new_A( bigint value ) for test_ni_operators::A::init
*/
void A__left___impl( A recv, A other )
{

		int new_val = A_value( recv ) << A_value( other );
		A_value__assign( recv, new_val );

}

/*
C implementation of test_ni_operators::A::[]

Imported methods signatures:
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__index___impl( A recv, bigint index )
{

		return new_A( index );

}

/*
C implementation of test_ni_operators::A::[]=

Imported methods signatures:
	A new_A( bigint value ) for test_ni_operators::A::init
*/
A A__index_assign___impl( A recv, bigint index, A value )
{

		return new_A( index + A_value( value ) );

}