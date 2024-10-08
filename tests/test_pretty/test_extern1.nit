# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import end
intrude import core::kernel
private import core::text

`{`}

`{
#ifdef truc
	#undef truc
#endif
`}

in "C headers" `{
	#include <errno.h>
`}

fun err: Int is extern `{ return 1; `}

fun errno: Int is extern `{
	return errno;
`}

fun errnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooo: Int is extern `{ return errno; `}

private class A
    var my_attr = 1234

    fun baz( msg : String ) import String.length, String.to_cstring, my_attr, my_attr= `{
		char *c_msg;
		int msg_len;

		/* String_to_cstring isa a allback to msg.to_cstring */ 
		c_msg = String_to_cstring( msg );

		/* String_length is a callback to msg.length */
		msg_len = String_length( msg );

		printf( "received msg: %s, of length = %d\n", c_msg, msg_len );

		/* A_my_attr is a callback to the getter of self.my_attr */
		printf( "old attr %d\n", A_my_attr(self) );

		if(chose)
			truc;
		else
			chose;

		/* A_my_attr is a callback to the setter of self.my_attr= */
		A_my_attr__assign( self, msg_len );
    `}
end

extern class TimeT `{time_t`}
	new `{ return time(NULL); `}
	new from_i(i: Int) `{ return i; `}

	fun update `{ time(&self); `}

	fun ctime: String import CString.to_s `{
		return CString_to_s( ctime(&self) );
	`}

	# Difference in secondes from start (self if the end time)
	fun difftime(start: TimeT): Float `{ return difftime(self, start); `}

	private fun intern_poll(in_fds: Array[Int], out_fds: Array[Int]) : nullable Int is extern import Array[Int].length, Array[Int].[], Int.as(nullable Int) `{`}
end

fun address_is_null: Bool is extern "address_is_null"

fun free `{ free(self); `}

