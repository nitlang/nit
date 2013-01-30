/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2004-2008 Jean Privat <jean@pryen.org>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "stream_nit.h"

#include <poll.h>
#include <errno.h>

int stream_FDStream_FDStream_native_read_char_1(void *s, int fd) {
	int result;
	char buf;
	ssize_t r = read(fd, &buf, 1);
	if (r == 0) 
		result = -1;
	else 
		result = buf;
	return result;
}
#ifndef NONITCNI

/*
C implementation of stream::Object::intern_poll

Imported methods signatures:
	bigint Array_length( Array recv ) for array::AbstractArrayRead::(abstract_collection::Collection::length)
	nullable_Object Array__index( Array recv, bigint index ) for array::Array::(abstract_collection::SequenceRead::[])
	int nullable_Object_is_a_bigint( nullable_Object value ) to check if a nullable Object is a Int
	bigint nullable_Object_as_bigint( nullable_Object value ) to cast from nullable Object to Int
	int Int_is_null( nullable_Int value ) to check if a nullable Int is a Int
	bigint bigint_as_not_null( nullable_Int value ) to cast from nullable Int to Int
*/
nullable_Int Object_intern_poll___impl( Object recv, Array in_fds, Array out_fds ) {
	int in_len, out_len, total_len;
	struct pollfd *c_fds;
	sigset_t sigmask;
	int i;
	nullable_Object tmp_nit_obj;
	int first_polled_fd = -1;
	int result;

	in_len = Array_length( in_fds );
	out_len = Array_length( out_fds );
	total_len = in_len + out_len;
	c_fds = malloc( sizeof(struct pollfd) * total_len );

	/* input streams */
	for ( i=0; i<in_len; i ++ ) {
		int fd;
		tmp_nit_obj = Array__index( in_fds, i );
		fd = nullable_Object_as_Int( tmp_nit_obj );

		c_fds[i].fd = fd;
		c_fds[i].events = POLLIN;
	}

	/* output streams */
	for ( i=0; i<out_len; i ++ ) {
		int fd;
		tmp_nit_obj = Array__index( out_fds, i );
		fd = nullable_Object_as_Int( tmp_nit_obj );

		c_fds[i].fd = fd;
		c_fds[i].events = POLLOUT;
	}

	/* poll all fds, unlimited timeout */
	result = poll( c_fds, total_len, -1 );

	if ( result > 0 ) {
		/* analyse results */
		for ( i=0; i<total_len; i++ )
			if ( c_fds[i].revents & c_fds[i].events || /* awaited event */
				 c_fds[i].revents & POLLHUP ) /* closed */
			{
				first_polled_fd = c_fds[i].fd;
				break;
			}

		return Int_as_nullable( first_polled_fd );
	}
	else if ( result < 0 )
		fprintf( stderr, "Error in Stream:poll: %s\n", strerror( errno ) );

	return null_Int();
}
#endif
