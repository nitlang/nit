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

#ifndef test_ni_strings_IMPL_NIT_H
#define test_ni_strings_IMPL_NIT_H

#include <nit_common.h>

#include <test_ni_strings._nitni.h>

String A_get_str_from_nstr___impl( A recv, char * nstr );
String A_get_str_from_nstr_with_len___impl( A recv, char * nstr );
char * A_get_nstr_from_str___impl( A recv, String str );
String A_get_something___impl( A recv );

#endif
