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

#ifndef simple_NIT_H
#define simple_NIT_H

#include <test_ni_out._nitni.h>

void A_proc___impl( A recv );
bigint A_function___impl( A recv );
bigint A_one___impl( A recv, bigint x );
bigint A_two___impl( A recv, bigint x, bigint y );
bigint A_three___impl( A recv, bigint x, bigint y, bigint z );
Object Object_in_object___impl( Object recv, Object o );

#endif
