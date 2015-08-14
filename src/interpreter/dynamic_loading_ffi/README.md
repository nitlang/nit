This group implement a partial support for the Nit FFI in the interpreter.
It compiles foreign code on demand into a dynamic library that is then loaded and executed.

## Features

This FFI implementation is a proof of concept, it implements the light FFI and only a subset of the full FFI.

### From the light FFI:

* Nested extern methods.
* Module level code blocks.
* Passage of primitive types.
* Extern classes and constructors.

### From the full FFI:

* Static Nit types in C.
* Public code block propagation.
* The `cflags` and `ldflags` annotations.

### Missing features: (Still TODO)

* Callback to Nit code.
* Support C++, Java and Objective-C.
* Reference pinning.
* Support the `pkgconfig` and `extra_java_files` annotations.

## The shared library and its API

The generated shared library hold the compiled foreign code of a single module.
It is generated a the first extern method invocation within the module.

The shared library also implements a standard API to be used by the interpreter.
This API is compose of 2 main elements:

* A single data structure to pass Nit instances and primitive data types:

  ~~~C
  typedef union nit_call_arg {
      long value_Int;
      int value_Bool;
      uint32_t value_Char;
      uint8_t value_Byte;
      int8_t value_Int8;
      int16_t value_Int16;
      uint16_t value_UInt16;
      int32_t value_Int32;
      uint32_t value_UInt32;
      double value_Float;
      void* value_Pointer;
  } nit_call_arg;
  ~~~

* Standardized entrypoints, one per extern method in the module.
  Their signature is composed of the number or arguments,
  a preallocated array of the arguments and a preallocated structure for the return value.

  ~~~C
  int (*nit_foreign_lib_entry)(int argc, nit_call_arg *args, nit_call_arg *ret);
  ~~~

  Each entrypoints unpack the arguments and call the FFI implementation method.
  The return value is stored in the preallocated structure where the interpreter can retreive it.
