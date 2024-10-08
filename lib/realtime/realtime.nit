# This file is part of NIT ( https://nitlanguage.org ).
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

# Services to keep time of the wall clock time
module realtime is ldflags "-lrt"

in "C header" `{
#ifdef _POSIX_C_SOURCE
	#undef _POSIX_C_SOURCE
#endif
#define _POSIX_C_SOURCE 199309L
#include <time.h>
`}

in "C" `{

#ifdef __APPLE__
	#include <TargetConditionals.h>
	#if defined(TARGET_OS_IPHONE) && __IPHONE_OS_VERSION_MIN_REQUIRED < 100000
		// Preserve compatibility with pre-iOS 10 devices where there is no clock_get_time.
		#undef CLOCK_REALTIME
	#endif
#endif

#if (defined(__MACH__) || defined(TARGET_OS_IPHONE)) && !defined(CLOCK_REALTIME)
/* OS X does not have clock_gettime, mascarade it and use clock_get_time
 * cf http://stackoverflow.com/questions/11680461/monotonic-clock-on-osx
*/
#include <mach/clock.h>
#include <mach/mach.h>
#undef CLOCK_REALTIME
#undef CLOCK_MONOTONIC
#define CLOCK_REALTIME CALENDAR_CLOCK
#define CLOCK_MONOTONIC SYSTEM_CLOCK
void nit_clock_gettime(clock_t clock_name, struct timespec *ts) {
	clock_serv_t cclock;
	mach_timespec_t mts;
	host_get_clock_service(mach_host_self(), clock_name, &cclock);
	clock_get_time(cclock, &mts);
	mach_port_deallocate(mach_task_self(), cclock);
	ts->tv_sec = mts.tv_sec;
	ts->tv_nsec = mts.tv_nsec;
}
#else
	#define nit_clock_gettime clock_gettime
#endif
`}

# Elapsed time representation.
private extern class Timespec `{struct timespec*`}

	# Init a new Timespec from `s` seconds and `ns` nanoseconds.
	new ( s, ns : Int ) `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		tv->tv_sec = s; tv->tv_nsec = ns;
		return tv;
	`}

	# Init a new Timespec from now.
	new monotonic_now `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		nit_clock_gettime( CLOCK_MONOTONIC, tv );
		return tv;
	`}

	# Init a new Timespec copied from another.
	new copy_of( other : Timespec ) `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
		tv->tv_sec = other->tv_sec;
		tv->tv_nsec = other->tv_nsec;
		return tv;
	`}

	# Update `self` clock.
	fun update `{
		nit_clock_gettime(CLOCK_MONOTONIC, self);
	`}

	# Subtract `other` from `self`
	fun -(other: Timespec): Timespec `{
		time_t s = self->tv_sec - other->tv_sec;
		long ns = self->tv_nsec - other->tv_nsec;
		if (ns < 0) {
			s -= 1;
			ns += 1000000000l;
		}
		struct timespec* tv = malloc(sizeof(struct timespec));
		tv->tv_sec = s; tv->tv_nsec = ns;
		return tv;
	`}

	# Set `self` to `a` - `b`
	fun minus(a, b: Timespec) `{
		time_t s = a->tv_sec - b->tv_sec;
		long ns = a->tv_nsec - b->tv_nsec;
		if (ns < 0) {
			s -= 1;
			ns += 1000000000l;
		}
		self->tv_sec = s;
		self->tv_nsec = ns;
	`}

	# Number of whole seconds of elapsed time.
	fun sec : Int `{
		return self->tv_sec;
	`}

	# Rest of the elapsed time (a fraction of a second).
	#
	# Number of nanoseconds.
	fun nanosec : Int `{
		return self->tv_nsec;
	`}

	# Elapsed time in microseconds, with both whole seconds and the rest
	#
	# May cause an `Int` overflow, use only with a low number of seconds.
	fun microsec: Int `{
		return self->tv_sec*1000000 + self->tv_nsec/1000;
	`}

	# Elapsed time in milliseconds, with both whole seconds and the rest
	#
	# May cause an `Int` overflow, use only with a low number of seconds.
	fun millisec: Int `{
		return self->tv_sec*1000 + self->tv_nsec/1000000;
	`}

	# Number of seconds as a `Float`
	#
	# Incurs a loss of precision, but the result is pretty to print.
	fun to_f: Float `{
		return (double)self->tv_sec + 0.000000001 * self->tv_nsec;
	`}

	redef fun to_s do return "{to_f}s"
end

# Keeps track of real time
#
# ~~~
# var clock = new Clock
#
# # sleeping at least 1s
# 1.0.sleep
# assert clock.total >= 1.0
# assert clock.lapse >= 1.0
#
# # sleeping at least 5ms
# 0.005.sleep
# assert clock.total >= 1.005
# assert clock.lapse >= 0.005
# ~~~
class Clock
	super FinalizableOnce

	# TODO use less mallocs

	# Time at creation
	private var time_at_beginning = new Timespec.monotonic_now

	# Time at last time a lapse method was called
	private var time_at_last_lapse = new Timespec.monotonic_now

	private var temp = new Timespec.monotonic_now

	# Smallest time frame reported by clock
	private fun resolution: Timespec `{
		struct timespec* tv = malloc( sizeof(struct timespec) );
#if (defined(__MACH__) || defined(TARGET_OS_IPHONE)) && !defined(CLOCK_REALTIME)
		clock_serv_t cclock;
		int nsecs;
		mach_msg_type_number_t count;
		host_get_clock_service(mach_host_self(), SYSTEM_CLOCK, &cclock);
		clock_get_attributes(cclock, CLOCK_GET_TIME_RES, (clock_attr_t)&nsecs, &count);
		mach_port_deallocate(mach_task_self(), cclock);
		tv->tv_sec = 0;
		tv->tv_nsec = nsecs;
#else
		clock_getres( CLOCK_MONOTONIC, tv );
#endif
		return tv;
	`}

	# Seconds since the creation of this instance
	fun total: Float
	do
		var now = temp
		now.update
		now.minus(now, time_at_beginning)
		return now.to_f
	end

	# Seconds since the last call to `lapse`
	fun lapse: Float
	do
		var time_at_last_lapse = time_at_last_lapse
		var now = temp
		now.update
		time_at_last_lapse.minus(now, time_at_last_lapse)
		var r = time_at_last_lapse.to_f

		self.temp = time_at_last_lapse
		self.time_at_last_lapse = now

		return r
	end

	# Seconds since the last call to `lapse`, without resetting the lapse counter
	fun peek_lapse: Float
	do
		var now = temp
		now.update
		now.minus(now, time_at_last_lapse)
		return now.to_f
	end

	redef fun finalize_once
	do
		time_at_beginning.free
		time_at_last_lapse.free
		temp.free
	end
end
