# POSIX Threads support

The threads can be manipulated and synchronized using the classes `Thread`,
`Mutex` and `Barrier`.

This group also provides two optional modules with thread-safe collections:

* `redef_collections` redefines existing collection to make them thread-safe.
  This incures a small overhead in all usage of the redefined collections.
* `concurrent_collections` intro new thread-safe collections.

Theses services are implemented using the POSIX threads.

You can also use the `is threaded` annotation on methods, which makes them run on their own thread.
Methods with return value or self calls are not supported.

## Known limitations:

* Most services from the Nit library are not thread-safe. You must manage
  your own mutex to avoid conflicts on shared data.
* FFI's global references are not thread-safe.

## For more information:

* See: `man pthreads`
* See: `examples/concurrent_array_and_barrier.nit`
