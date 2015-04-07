# POSIX Threads support

The threads can be manipulated and synchronized using the classes `Thread`,
`Mutex` and `Barrier`.

This group also provides two optional modules with thread-safe collections:

* `redef_collections` redefines existing collection to make them thread-safe.
  This incures a small overhead in all usage of the redefined collections.
* `concurrent_collections` intro new thread-safe collections.

Theses services are implemented using the POSIX threads.

You can also use the `is threaded` annotation on methods, which makes them run on their own thread.
Methods with self calls are not supported.

A method or function annotated with `is threaded` has its return value changed during compilation.
You will get a subclass of `Thread`, even if there wasn't a return value before. You can know if the threaded method is done with the `is_done` boolean from `Thread`.
A call to the `join` method will block the execution until the threaded method is done, or immediatly return if it's already done.
`join` will return an object typed with the orginial return type, or `null` if there wasn't.

## Known limitations:

* Most services from the Nit library are not thread-safe. You must manage
  your own mutex to avoid conflicts on shared data.
* FFI's global references are not thread-safe.

## For more information:

* See: `man pthreads`
* See: `examples/concurrent_array_and_barrier.nit`
* See: ̀ examples/threaded_example.nit`
