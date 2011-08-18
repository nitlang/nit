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

#include "test_ni_out.nit.h"

/*
C implementation of simple::A::proc
*/
void A_proc___impl( A recv )
{
	printf( "proc\n" );
}

/*
C implementation of simple::A::function
*/
bigint A_function___impl( A recv )
{
	return 1;
}

/*
C implementation of simple::A::one
*/
bigint A_one___impl( A recv, bigint x )
{
	return x;
}

/*
C implementation of simple::A::two
*/
bigint A_two___impl( A recv, bigint x, bigint y )
{
	return x + y;
}

/*
C implementation of simple::A::three
*/
bigint A_three___impl( A recv, bigint x, bigint y, bigint z )
{
	return x + y - z;
}

/*
C implementation of simple::Object::in_object
*/
Object Object_in_object___impl( Object recv, Object o )
{
	return o;
}
