# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Offers some POSIX threads services that are not available on all platforms
module extra is
	cflags "-pthread"
	ldflags "-pthread"
end

intrude import pthreads

in "C" `{
	// TODO protect with: #ifdef WITH_LIBGC
	#ifndef ANDROID
		#define GC_THREADS
		#include <gc.h>
	#endif
`}

redef extern class NativePthread
	fun cancel: Bool `{
		return pthread_cancel(*self);
	`}
end

redef class Thread
	# Cancel the execution of the thread
	fun cancel
	do
		if native == null then return
		native.cancel
		native = null
	end
end

# Does not return if the running thread is to be cancelled
fun test_cancel `{ pthread_testcancel(); `}

private extern class NativePthreadBarrier in "C" `{ pthread_barrier_t * `}
	new(count: Int) `{
		pthread_barrier_t *barrier = malloc(sizeof(pthread_barrier_t));
		int res = pthread_barrier_init(barrier, NULL, count);
		return barrier;
	`}

	fun destroy `{ pthread_barrier_destroy(self); `}

	fun wait `{ pthread_barrier_wait(self); `}
end
