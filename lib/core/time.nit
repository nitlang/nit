# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
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

import text
import stream

in "C Header" `{
	#include <time.h>
	#include <sys/time.h>
`}

# The number of seconds elapsed since January 1, 1970
#
# Uses the Unix function `time`.
fun get_time: Int `{ return time(NULL); `}

# The number of milliseconds elapsed since January 1, 1970
#
# Returns `get_microtime / 1000`
fun get_millitime: Int do return get_microtime / 1000

# The number of microseconds elapsed since January 1, 1970
#
# Uses the Unix function `gettimeofday`.
fun get_microtime: Int `{
	struct timeval val;
	gettimeofday(&val, NULL);
	return val.tv_sec * 1000000 + val.tv_usec;
`}

redef class Sys
	# Wait a specific number of second and nanoseconds
	#
	# Returns `true` if interrupted by a signal.
	fun nanosleep(sec, nanosec: Int): Bool `{
		const struct timespec req = {sec, nanosec};
		return nanosleep(&req, NULL);
	`}
end

redef class Int
	# Sleep approximately `self` seconds
	#
	# Is not interrupted by signals.
	fun sleep do to_f.sleep
end

redef class Float
	# Sleep approximately `self` seconds
	#
	# Is not interrupted by signals.
	fun sleep `{
		time_t s = self;
		long ns = (self-s) * 1000000000.0;
		struct timespec req = {s, ns};

		while (nanosleep(&req, &req)) { }
	`}
end

# Time since epoch
extern class TimeT `{time_t`}

	# Returns Time since epoch from now.
	new `{ return time(NULL); `}

	# Returns Time since epoch from `i` (expressed in seconds).
	new from_i(i: Int) `{ return i; `}

	# Update current time.
	fun update `{ time(&self); `}

	# Convert `self` to a human readable String.
	fun ctime: String import CString.to_s `{
		return CString_to_s( ctime(&self) );
	`}

	# Difference in secondes from start (self if the end time)
	fun difftime(start: TimeT): Float `{ return difftime(self, start); `}

	redef fun to_s do return ctime.replace("\n", "")

	# Convert self to Int (expressed as seconds since epoch).
	fun to_i: Int `{ return (int)self; `}
end

# Time structure
extern class Tm `{struct tm *`}

	# Create a new Time structure expressed in Coordinated Universal Time (UTC).
	new gmtime `{
		struct tm *tm;
		time_t t = time(NULL);
		tm = gmtime(&t);
		return tm;
	`}

	# Create a new Time structure expressed in UTC from `t`.
	new gmtime_from_timet(t: TimeT) `{
		struct tm *tm;
		tm = gmtime(&t);
		return tm;
	`}

	# Create a new Time structure expressed in the local timezone.
	new localtime `{
		struct tm *tm;
		time_t t = time(NULL);
		tm = localtime(&t);
		return tm;
	`}

	# Create a new Time structure expressed in the local timezone from `t`.
	new localtime_from_timet(t: TimeT) `{
		struct tm *tm;
		tm = localtime(&t);
		return tm;
	`}

	# Convert `self` as a TimeT.
	fun to_timet: TimeT `{ return mktime(self); `}

	# Seconds after the minute.
	fun sec: Int `{ return self->tm_sec; `}

	# Minutes after the hour.
	fun min: Int `{ return self->tm_min; `}

	# hours since midnight.
	fun hour: Int `{ return self->tm_hour; `}

	# Day of the month.
	fun mday: Int `{ return self->tm_mday; `}

	# Months since January.
	fun mon: Int `{ return self->tm_mon; `}

	# Years since 1900.
	fun year: Int `{ return self->tm_year; `}

	# Days since Sunday.
	fun wday: Int `{ return self->tm_wday; `}

	# Days since January 1st.
	fun yday: Int `{ return self->tm_yday; `}

	# Is `self` in Daylight Saving Time.
	fun is_dst: Bool `{ return self->tm_isdst; `}

	# Convert `self` to a human readable String.
	private fun asctime: CString `{ return asctime(self); `}

	# Convert `self` to a human readable String corresponding to `format`.
	# TODO document allowed format.
	fun strftime(format: String): String import String.to_cstring, CString.to_s `{
		char* buf, *c_format;

		buf = (char*)malloc(100);
		c_format = String_to_cstring(format);

		strftime(buf, 100, c_format, self);
		String s = CString_to_s(buf);
		free(buf);
		return s;
	`}

	redef fun to_s do return asctime.to_s.replace("\n", "")
end

# Date using the international format defined by ISO 8601.
#
# Usage:
#
#     # By default ISODate at today.
#     var date = new ISODate
#     var tm = new Tm.localtime
#     assert date.year == tm.year + 1900
#     assert date.month == tm.mon + 1
#     assert date.day == tm.mday
#
#     # ISODate can be initialized from a String.
#     date = new ISODate.from_string("1970-01-01T00:00:00Z")
#     assert date.year == 1970
#     assert date.month == 1
#     assert date.day == 1
#
#     # ISODate can be printed as String following the ISO format.
#     assert date.to_s == "1970-01-01T00:00:00Z"
#
# Note that only the `YYYY-MM-DDTHH:MM:SSZ` is supported for now.
#
# See <http://www.w3.org/QA/Tips/iso-date>
class ISODate
	super Comparable

	# UTC years as Int.
	var year: Int is noinit

	# UTC months as Int (`1` for January).
	var month: Int is noinit

	# UTC days as Int (starting at `1`).
	var day: Int is noinit

	# UTC hours as Int.
	var hours: Int is noinit

	# UTC minutes as Int.
	var minutes: Int is noinit

	# UTC seconds as Int.
	var seconds: Int is noinit

	# UTC timezone marker.
	#
	# Note that I don't know what will happen if you change this value...
	var timezone = "Z"

	init do
		var t = new Tm.localtime
		year = 1900 + t.year
		month = t.mon + 1
		day = t.mday
		hours = t.hour
		minutes = t.min
		seconds = t.sec
	end

	# Init `self` from a ISODate formatted string.
	init from_string(str: String) do
		year = str.substring(0, 4).to_i
		month = str.substring(5, 2).to_i
		day = str.substring(8, 2).to_i
		hours = str.substring(11, 2).to_i
		minutes = str.substring(14, 2).to_i
		seconds = str.substring(17, 2).to_i
		timezone = str.substring(19, str.length)
	end

	redef fun to_s do
		var buff = new FlatBuffer
		buff.append year.to_s
		buff.add '-'
		if month < 10 then buff.add '0'
		buff.append month.to_s
		buff.add '-'
		if day < 10 then buff.add '0'
		buff.append day.to_s
		buff.add 'T'
		if hours < 10 then buff.add '0'
		buff.append hours.to_s
		buff.add ':'
		if minutes < 10 then buff.add '0'
		buff.append minutes.to_s
		buff.add ':'
		if seconds < 10 then buff.add '0'
		buff.append seconds.to_s
		buff.append timezone
		return buff.write_to_string
	end

	redef type OTHER: ISODate

	# TODO handle timezones
	redef fun <(o) do return to_s < o.to_s
end
