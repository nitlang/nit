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

#include "test_ni_local_ref.nit.h"

ToBePreserved global_tbp = NULL;

/*
C implementation of test_ni_references::A::run

Imported methods signatures:
	void ToBePreserved_output( ToBePreserved recv ) for test_ni_references::ToBePreserved::(kernel::Object::output)
*/
void A_run___impl( A recv, ToBePreserved a, ToBePreserved b, ToBePreserved c, ToBePreserved d )
{
	ToBePreserved_output( a );
	ToBePreserved_output( b );
	ToBePreserved_output( c );
	ToBePreserved_output( d );

	/* force call to GC */
	A_launch_gc( recv );

	ToBePreserved_output( a );
	ToBePreserved_output( b );
	ToBePreserved_output( c );
	ToBePreserved_output( d );
}

void A_run2___impl( A recv, ToBePreserved a, ToBePreserved b, ToBePreserved c, ToBePreserved d )
{
	ToBePreserved_output( a );
	ToBePreserved_output( b );
	ToBePreserved_output( c );
	ToBePreserved_output( d );

	/* force call to GC */
	A_launch_gc( recv );

	/* go 1 deeper level */
	A_run( recv, a, b, c, d );

	/* force call to GC */
	A_launch_gc( recv );

	ToBePreserved_output( a );
	ToBePreserved_output( b );
	ToBePreserved_output( c );
	ToBePreserved_output( d );
}

