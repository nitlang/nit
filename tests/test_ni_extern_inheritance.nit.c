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

#include "test_ni_extern_inheritance.nit.h"

/*
C implementation of test_ni_extern_inheritance::A::f
*/
void A_f___impl( void* recv ) {}

/*
C implementation of test_ni_extern_inheritance::B::(test_ni_extern_inheritance::A::f)
*/
void B_f___impl( void* recv ) {}

/*
C implementation of test_ni_extern_inheritance::C::(test_ni_extern_inheritance::A::f)
*/
void C_f___impl( void* recv ) {}

/*
C implementation of test_ni_extern_inheritance::D::(test_ni_extern_inheritance::A::f)
*/
void D_f___impl( void* recv ) {}

/*
C implementation of test_ni_extern_inheritance::E::(test_ni_extern_inheritance::A::f)
*/
void E_f___impl( void* recv ) {}

/*
C implementation of test_ni_extern_inheritance::G::(test_ni_extern_inheritance::A::f)
*/
void G_f___impl( void* recv ) {}
