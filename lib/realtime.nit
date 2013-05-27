# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Provides the Clock utility class to keep time of real time flow
module realtime

in "C header" `{
#ifdef _POSIX_C_SOURCE
	#undef _POSIX_C_SOURCE
#endif
#define _POSIX_C_SOURCE 199309L
#include <time.h>
`}

extern Timespec `{struct timespec*`}
	new ( s, ns : Int ) `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		tv->tv_sec = s; tv->tv_nsec = ns;
		return tv;
	`}
	new monotonic_now `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		clock_gettime( CLOCK_MONOTONIC, tv );
		return tv;
	`}
	new copy_of( other : Timespec ) `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		tv->tv_sec = other->tv_sec;
		tv->tv_nsec = other->tv_nsec;
		return tv;
	`}

	fun update `{
		clock_gettime( CLOCK_MONOTONIC, recv );
	`}
	fun - ( o : Timespec ) : Timespec
	do
		var s = sec - o.sec
		var ns = nanosec - o.nanosec
		if ns > nanosec then s += 1
		return new Timespec( s, ns )
	end

	fun sec : Int `{
		return recv->tv_sec;
	`}
	fun nanosec : Int `{
		return recv->tv_nsec;
	`}

	fun destroy `{
		free( recv );
	`}
end

# Keeps track of real time
class Clock
	# Time at instanciation
	protected var time_at_beginning : Timespec

	# Time at last time a lapse method was called
	protected var time_at_last_lapse : Timespec

	init
	do
		time_at_beginning = new Timespec.monotonic_now
		time_at_last_lapse = new Timespec.monotonic_now
	end

	# Smallest time frame reported by clock
	fun resolution : Timespec `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		clock_getres( CLOCK_MONOTONIC, tv );
		return tv;
	`}

	# Return timelapse since instanciation of this instance
	fun total : Timespec
	do
		return new Timespec.monotonic_now - time_at_beginning
	end

	# Return timelapse since last call to lapse
	fun lapse : Timespec
	do
		var nt = new Timespec.monotonic_now
		var dt = nt - time_at_last_lapse
		time_at_last_lapse = nt
		return dt
	end
end
