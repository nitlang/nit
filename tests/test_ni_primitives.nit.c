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

#include "test_ni_primitives.nit.h"

#include <stdlib.h>

/*
C implementation of test_ni_primitives::Object::opposite
*/
int Object_opposite___impl( Object recv, int v )
{
	return v == 0;
}

/*
C implementation of test_ni_primitives::Object::plus_10
*/
char Object_plus_10___impl( Object recv, char v )
{
	return v + 10;
}

/*
C implementation of test_ni_primitives::Object::plus_1000
*/
bigint Object_plus_1000___impl( Object recv, bigint v )
{
	return v + 1000;
}

/*
C implementation of test_ni_primitives::Object::multiply_by_100
*/
float Object_multiply_by_100___impl( Object recv, float v )
{
	return v * 100;
}

/*
C implementation of test_ni_primitives::Object::print_ns
*/
void Object_print_ns___impl( Object recv, char * s )
{
	printf( "%s\n", s );
}
