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

# Main POSIX threads support and intro the classes `Thread`, `Mutex` and `Barrier`
module pthreads is
	cflags "-pthread -Wno-unknown-attributes"
	ldflags "-pthread"
	pkgconfig "bdw-gc"
	new_annotation threaded
end

#
## Native part
#
# Nity part at the bottom of the module.
#

in "C Header" `{
	#include <pthread.h>
`}

in "C" `{
	#include <string.h>

	// TODO protect with: #ifdef WITH_LIBGC
	// We might have to add the next line to gc_chooser.c too, especially
	// if we get an error like "thread not registered with GC".
	#define GC_THREADS
	#include <gc.h>
`}

redef class Sys

	# `NativePthread` for running thread
	private fun native_pthread_self: NativePthread `{
		pthread_t *id = malloc(sizeof(pthread_t));
		*id = pthread_self();
		return id;
	`}

	private var self_thread_key = new NativePthreadKey

	private var main_thread_cache: nullable MainThread = null
	private var main_thread_mutex = new Mutex

	# Handle to the program's main thread
	fun main_thread: MainThread
	do
		var cache = main_thread_cache
		if cache != null then return cache

		main_thread_mutex.lock

		# Recheck if cache has been updated since lock has been unlocked/locked
		cache = main_thread_cache
		if cache != null then
			main_thread_mutex.unlock
			return cache
		end

		# Create a `MainThread` exactly once
		var thread = new MainThread
		thread.native = sys.native_pthread_self
		main_thread_cache = thread

		main_thread_mutex.unlock
		return thread
	end
end


# An atomic Int
extern class AtomicInt in "C" `{ int* `}
	new(i: Int)`{
		int* v = malloc(sizeof(int));
		return v;
	`}

	# Get the value and increment it by `i`
	fun get_and_increment_by(i: Int): Int `{
		return __sync_fetch_and_add(self, i);
	`}

	# Get the value and decrement it by `i`
	fun get_and_decrement_by(i: Int): Int `{
		return __sync_fetch_and_sub(self, i);
	`}

	# Get the value and increment it
	fun get_and_increment: Int `{
		return __sync_fetch_and_add(self, 1);
	`}

	# Get the value and decrement it
	fun get_and_decrement: Int `{
		return __sync_fetch_and_sub(self, 1);
	`}

	# Increment by `i` and get the new value
	fun increment_by_and_get(i: Int): Int `{
		return __sync_add_and_fetch(self, i);
	`}

	# Decrement by `i` and get the new value
	fun decrement_by_and_get(i: Int): Int `{
		return __sync_sub_and_fetch(self, i);
	`}

	# Increment the value and get the new one
	fun increment_and_get: Int `{
		return __sync_add_and_fetch(self, 1);
	`}

	# Decrement the value and get the new one
	fun decrement_and_get: Int `{
		return __sync_sub_and_fetch(self,1);
	`}

	# Get the current value
	fun value: Int `{
		return *self;
	`}

end

private extern class NativePthread in "C" `{ pthread_t * `}

	new create(nit_thread: Thread) import Thread.main_intern `{
		pthread_attr_t attr;
		pthread_attr_init(&attr);

		pthread_t thread;
		int r = pthread_create(&thread, &attr, (void * (*)(void *))&Thread_main_intern, nit_thread);

		if (r == 0) {
			pthread_t *pthread = malloc(sizeof(pthread_t));
			memmove(pthread, &thread, sizeof(pthread_t));
			return pthread;
		}
		return NULL;
	`}

	new create_ex(nit_thread: Thread, attr: NativePthreadAttr) import Thread.main_intern `{
		pthread_t thread;
		int r = pthread_create(&thread, attr, (void * (*)(void *))&Thread_main_intern, nit_thread);

		if (r == 0) {
			pthread_t *pthread = malloc(sizeof(pthread_t));
			memmove(pthread, &thread, sizeof(pthread_t));
			return pthread;
		}
		return NULL;
	`}

	fun join: nullable Object `{
		void *thread_return;
		pthread_join(*self, &thread_return);
		if(thread_return == NULL) thread_return = null_Object();
		return (nullable_Object)thread_return;
	`}

	fun equal(other: NativePthread): Bool `{ return pthread_equal(*self, *other); `}

	fun kill(signal: Int): Int `{ return pthread_kill(*self, (int)signal); `}
end

private extern class NativePthreadAttr in "C" `{ pthread_attr_t * `}
	new `{
		pthread_attr_t attr;
		int r = pthread_attr_init(&attr);
		if (r == 0) {
			pthread_attr_t *pattr = malloc(sizeof(pthread_attr_t));
			memmove(pattr, &attr, sizeof(pthread_attr_t));
			return pattr;
		}
		return NULL;
	`}

	fun destroy `{
		pthread_attr_destroy(self);
	`}

	# Most features of this class are still TODO
	#
	# * pthread_attr_setaffinity_np(3)
	# * pthread_attr_setdetachstate
	# * pthread_attr_setguardsize
	# * pthread_attr_setinheritsched
	# * pthread_attr_setschedparam
	# * pthread_attr_setschedpolicy
	# * pthread_attr_setscope
	# * pthread_attr_setstack
	# * pthread_attr_setstackaddr
	# * pthread_attr_setstacksize
end

private extern class NativePthreadMutex in "C" `{ pthread_mutex_t * `}
	new (attr: NativePthreadMutexAttr) `{
		pthread_mutex_t *mutex = malloc(sizeof(pthread_mutex_t));
		int r = pthread_mutex_init(mutex, attr);
		if (r != 0) {
			free(mutex);
			return NULL;
		}
		return mutex;
	`}

	fun destroy `{ pthread_mutex_destroy(self); `}

	fun lock `{ pthread_mutex_lock(self); `}
	fun try_lock: Bool `{ return pthread_mutex_trylock(self); `}
	fun unlock `{ pthread_mutex_unlock(self); `}
end

private extern class NativePthreadMutexAttr in "C" `{ pthread_mutexattr_t * `}
	new `{
		pthread_mutexattr_t *attr = malloc(sizeof(pthread_mutexattr_t));
		int r = pthread_mutexattr_init(attr);
		if (r != 0) {
			free(attr);
			return NULL;
		}
		return attr;
	`}

	fun destroy `{ pthread_mutexattr_destroy(self); `}

	fun set_type_normal `{ pthread_mutexattr_settype(self, PTHREAD_MUTEX_NORMAL); `}
	fun set_type_recursive `{ pthread_mutexattr_settype(self, PTHREAD_MUTEX_RECURSIVE); `}
	fun set_type_errorcheck `{ pthread_mutexattr_settype(self, PTHREAD_MUTEX_ERRORCHECK); `}

	# pthread_mutexattr_setpshared
	# pthread_mutexattr_setprotocol
	# pthread_mutexattr_setproceiling
	# pthread_mutexattr_setrobust_np
end

private extern class NativePthreadKey in "C" `{ pthread_key_t * `}
	new `{
		pthread_key_t *key = malloc(sizeof(pthread_key_t));
		int r = pthread_key_create(key, NULL);
		if (r != 0) {
			free(key);
			return NULL;
		}
		return key;
	`}

	fun get: nullable Object `{
		void *val = pthread_getspecific(*self);
		if (val == NULL) val = null_Object();
		return val;
	`}

	fun set(val: nullable Object) `{
		pthread_setspecific(*self, val);
	`}
end

private extern class NativePthreadCond in "C" `{ pthread_cond_t * `}
	new `{
		pthread_cond_t cond;
		int r = pthread_cond_init(&cond, NULL);
		if (r == 0) {
			pthread_cond_t *pcond = malloc(sizeof(pthread_cond_t));
			memmove(pcond, &cond, sizeof(pthread_cond_t));
			return pcond;
		}
		return NULL;
	`}

	fun destroy `{ pthread_cond_destroy(self); `}

	fun signal: Int `{ return pthread_cond_signal(self); `}

	fun broadcast `{ pthread_cond_broadcast(self);  `}

	fun wait(mutex: NativePthreadMutex) `{ pthread_cond_wait(self, mutex); `}
end

#
## Nity part
#
# Cannot be extracted from this module because of the callback from C to `Thread::run`
#

# Handle to a thread
#
# Instances of this class are each used to launch and control a thread.
abstract class Thread
	super Finalizable

	# Type returned by `main`
	type E : nullable Object

	private var native: nullable NativePthread = null

	# Is this thread finished ? True when main returned
	var is_done = false

	# Main method of this thread
	#
	# The returned valued is passed to the caller of `join`.
	fun main: E do return null

	private fun main_intern: E
	do
		# Register thread local data
		sys.self_thread_key.set self
		var r = main
		self.is_done = true
		return r
	end

	# Start executing this thread
	#
	# Will launch `main` on a different thread.
	fun start
	do
		if native != null then return
		native = new NativePthread.create(self)
	end

	# Join this thread to the calling thread
	#
	# Blocks until the method `main` returns or the target thread calls
	# `Sys::thread_exit`. Returns the object returned from the other thread.
	#
	# Stats the thread if now already done by a call to `start`.
	fun join: E
	do
		if native == null then start
		var r = native.join
		native = null
		return r.as(E)
	end

	redef fun finalize
	do
		if native == null then return
		native.free
		native = null
	end
end

# The main thread of the program
class MainThread
	super Thread

	private init do end
end

# Exit current thread and return `value` to caller of `Thread::join`
fun exit_thread(value: nullable Object) `{ pthread_exit(value); `}

# Returns the handle to the running `Thread`
fun thread: Thread
do
	var key = sys.self_thread_key
	var val = key.get
	if val == null then
		# This is the original thread, get `Sys::main_thread` and store it
		var thread = sys.main_thread
		key.set thread
		return thread
	end

	assert val isa Thread
	return val
end

# Mutual exclusion synchronization tool
#
# Instances of this class can only be acquired by a single thread at any one
# point in time. Uses the recursive protocol so they can be locked many time by
# the same thread, must then be unlocked as many time.
class Mutex
	super Finalizable

	private var native: nullable NativePthreadMutex is noinit

	init
	do
		var attr = new NativePthreadMutexAttr
		attr.set_type_recursive
		native = new NativePthreadMutex(attr)
		attr.destroy
		attr.free
	end

	# Acquire this lock, wait until it is available
	fun lock do native.lock

	# Acquire this lock only if it is available
	#
	# Returns `true` if the lock has been acquired.
	fun try_lock: Bool do return native.try_lock

	# Release this lock, unblocking all callers of `lock`
	fun unlock do native.unlock

	redef fun finalize
	do
		var native = self.native
		if native != null then
			native.destroy
			native.free
		end
		self.native = null
	end
end

# Condition variable
class PthreadCond
	super FinalizableOnce

	private var native = new NativePthreadCond

	# Destroy `self`
	redef fun finalize_once do native.destroy

	# Signal at least one thread waiting to wake up
	fun signal: Int do return native.signal

	# Signal all the waiting threads to wake up
	fun broadcast do native.broadcast

	# Make the current thread waiting for a signal ( `mutex` should be locked)
	fun wait(mutex: Mutex) do native.wait(mutex.native.as(not null))
end

# Barrier synchronization tool
#
# Ensures that `count` threads call and block on `wait` before releasing them.
class Barrier
	super Finalizable

	private var mutex = new Mutex
	private var cond: nullable NativePthreadCond = new NativePthreadCond

	# Number of threads that must be waiting for `wait` to unblock
	var count: Int

	private var threads_waiting = 0

	# Wait at this barrier and block until there are a `count` threads waiting
	fun wait
	do
		mutex.lock
		threads_waiting += 1
		if threads_waiting == count then
			threads_waiting = 0
			cond.broadcast
		else
			cond.wait(mutex.native.as(not null))
		end
		mutex.unlock
	end

	redef fun finalize
	do
		var cond = self.cond
		if cond != null then
			cond.destroy
			cond.free
		end
		self.cond = null
	end
end

# Print `object` and '\n' with the same system call
redef fun print(object)
do
	sys.stdout.write(object.to_s+"\n")
end
