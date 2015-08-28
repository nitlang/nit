Generator of Nit extern classes to wrap Objective-C services.

# Description

_objcwrapper_ is a tool to help access Objective-C classes and methods from Nit.
It generates Nit code composed of extern classes and extern methods from the Objective-C FFI.
The code should be valid Nit, but it may need some tweaking by hand before use.

_objcwrapper_ takes as input preprocessed Objective-C header files.
This preprocessing is usually done by combinig (or piping) calls to:
`gcc -E`, `header_keeper` and `header_static`.
See the check rules in the Makefile for example preprocessing.

# Usage

1. Compile _objcwrapper_ with: `make`

2. Compile the wrapper `NSArray.nit` from the preprocessed header `NSArray.h` with:

	~~~
	bin/objcwrapper -o NSArray.h NSArray.h
	~~~

3. Import the generated module as usual from any Nit program.
   It is not recommended to modify the generated file directly,
   but you can redef the generated classes from other modules.

# See also

_jwrapper_ is the inspiration for this tool.
It generate wrappers to access Java services from Nit.
