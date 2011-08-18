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

#ifndef test_ni_operators_IMPL_NIT_H
#define test_ni_operators_IMPL_NIT_H

#include <test_ni_operators._nitni.h>

A A__plus___impl( A recv, A other );
A A__minus___impl( A recv, A other );
A A__star___impl( A recv, bigint by );
A A__slash___impl( A recv, bigint by );
int A__equal___impl( A recv, nullable_Object other );
A A__percent___impl( A recv, A other );
A A__starship___impl( A recv, A other );
int A__greater___impl( A recv, A other );
int A__less___impl( A recv, A other );
int A__ge___impl( A recv, A other );
int A__less_or_equal___impl( A recv, A other );
void A__right___impl( A recv, A other );
void A__left___impl( A recv, A other );
A A__index___impl( A recv, bigint index );
A A__index_assign___impl( A recv, bigint index, A value );

#endif
