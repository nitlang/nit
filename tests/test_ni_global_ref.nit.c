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

#include "test_ni_global_ref.nit.h"

ToBePreserved global_tbp = NULL;

/*
C implementation of test_ni_references::A::save_as_global

Imported methods signatures:
	void ToBePreserved_output( ToBePreserved recv ) for test_ni_references::ToBePreserved::(kernel::Object::output)
*/
void A_save_as_global___impl( A recv, ToBePreserved tbp ) {
	if ( global_tbp != NULL ) {
		ToBePreserved_decr_ref( global_tbp );
	}

	global_tbp = tbp;
	ToBePreserved_incr_ref( global_tbp );
}

/*
C implementation of test_ni_references::A::recover_unsafe
*/
ToBePreserved A_recover_unsafe___impl( A recv ) {
	return global_tbp;
}

/*
C implementation of test_ni_references::A::recover

Imported methods signatures:
	nullable_ToBePreserved ToBePreserved_as_nullable( ToBePreserved value ) to cast from ToBePreserved to nullable ToBePreserved
*/
nullable_ToBePreserved A_recover___impl( A recv ) {
	if ( global_tbp != NULL ) {
		return ToBePreserved_as_nullable( global_tbp );
	} else {
		return null_ToBePreserved();
	}
}

