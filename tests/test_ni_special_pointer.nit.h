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

#ifndef test_ni_special_pointer_IMPL_NIT_H
#define test_ni_special_pointer_IMPL_NIT_H

#define ExternInt int*

#include <nit_common.h>

#include <test_ni_special_pointer._nitni.h>

ExternInt new_ExternInt_as_0___impl(  );
ExternInt new_ExternInt_as_1___impl(  );
ExternInt new_ExternInt_as_2___impl(  );
String ExternInt_to_s___impl( ExternInt recv );
bigint ExternInt_to_i___impl( ExternInt recv );
ExternInt Int_to_extern_int___impl( bigint recv );

#endif
