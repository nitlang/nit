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

#ifndef TEST_NI_GLOBAL_REF_NIT_H
#define TEST_NI_GLOBAL_REF_NIT_H

#include <test_ni_global_ref._nitni.h>

void A_save_as_global___impl( A recv, ToBePreserved tbp );
ToBePreserved A_recover_unsafe___impl( A recv );
nullable_ToBePreserved A_recover___impl( A recv );

#endif
