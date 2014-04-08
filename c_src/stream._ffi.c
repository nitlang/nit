/*
	Extern implementation of Nit module stream
*/
#include <stdlib.h>
#include <stdio.h>
#include "stream._ffi.h"
#define Array_of_Int_length stream___Array_of_Int_length
#define Array_of_Int__index stream___Array_of_Int__index
#line 18 "lib/standard/stream.nit"

	#include <unistd.h>
	#include <poll.h>
	#include <errno.h>
	#include <string.h>

nullable_Int stream___Object_intern_poll___impl( Object recv, Array_of_Int in_fds, Array_of_Int out_fds )
{
#line 320 "lib/standard/stream.nit"


		int in_len, out_len, total_len;
		struct pollfd *c_fds;
		sigset_t sigmask;
		int i;
		int first_polled_fd = -1;
		int result;

		in_len = Array_of_Int_length( in_fds );
		out_len = Array_of_Int_length( out_fds );
		total_len = in_len + out_len;
		c_fds = malloc( sizeof(struct pollfd) * total_len );

		/* input streams */
		for ( i=0; i<in_len; i ++ ) {
			int fd;
			fd = Array_of_Int__index( in_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLIN;
		}

		/* output streams */
		for ( i=0; i<out_len; i ++ ) {
			int fd;
			fd = Array_of_Int__index( out_fds, i );

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
