# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Management of time and dates
module time

import string_search

in "C Header" `{
	#include <time.h>
`}

redef class Object
	# Unix time: the number of seconds elapsed since January 1, 1970
	protected fun get_time: Int is extern "kernel_Any_Any_get_time_0"
end

redef class Sys
	# Wait a specific number of second and nanoseconds
	fun nanosleep(sec, nanosec: Int) is extern "std_nanosleep"
end

# Time since epoch
extern class TimeT `{time_t`}
	new `{ return time(NULL); `}
	new from_i(i: Int) `{ return i; `}

	fun update `{ time(&recv); `}

	fun ctime: String import NativeString.to_s_with_copy `{
		return NativeString_to_s_with_copy( ctime(&recv) );
	`}

	# Difference in secondes from start (self if the end time)
	fun difftime(start: TimeT): Float `{ return difftime(recv, start); `}

	redef fun to_s do return ctime.replace("\n", "")
	fun to_i: Int `{ return (int)recv; `}
end

# Time structure
extern class Tm `{struct tm *`}
	new gmtime `{
		struct tm *tm;
		time_t t = time(NULL);
		tm = gmtime(&t);
		return tm;
	`}
	new gmtime_from_timet(t: TimeT) `{
		struct tm *tm;
		tm = gmtime(&t);
		return tm;
	`}

	new localtime `{
		struct tm *tm;
		time_t t = time(NULL);
		tm = localtime(&t);
		return tm;
	`}
	new localtime_from_timet(t: TimeT) `{
		struct tm *tm;
		tm = localtime(&t);
		return tm;
	`}

	fun to_timet: TimeT `{ return mktime(recv); `}

	fun sec: Int `{ return recv->tm_sec; `}
	fun min: Int `{ return recv->tm_min; `}
	fun hour: Int `{ return recv->tm_hour; `}
	fun mday: Int `{ return recv->tm_mday; `}
	fun mon: Int `{ return recv->tm_mon; `}
	fun year: Int `{ return recv->tm_year; `}
	fun wday: Int `{ return recv->tm_wday; `}
	fun yday: Int `{ return recv->tm_yday; `}
	fun is_dst: Bool `{ return recv->tm_isdst; `}

	fun asctime: String import NativeString.to_s_with_copy `{
		return NativeString_to_s_with_copy( asctime(recv) );
	`}
	fun strftime(format: String): String import String.to_cstring, NativeString.to_s `{
		char* buf, *c_format;
		size_t res;

		buf = (char*)malloc(100);
		c_format = String_to_cstring(format);

		res = strftime(buf, 100, c_format, recv);
		return NativeString_to_s(buf);
	`}

	redef fun to_s do return asctime.replace("\n", "")
end
