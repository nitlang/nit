# JWRAPPER : Extern classes generator from java .class
## Description
jwrapper is a code generator that creates Nit extern classes `in "Java"` from .class files.

## Installation
jwrapper is designed to be installed from the `contrib` directory of Nit repository. (http://www.nitlanguage.org)

To initiate installation process, use `make` in the `contrib/jwrapper` directory.

jwrapper relies on `nitcc` that will be automatically compiled from `contrib/nitcc`.

## Usage
The jwrapper binary can be found under `jwrapper/bin` directory.

Since jwrapper uses `grep` to find existing libraries, make sure that the environment variable `NIT_DIR` is properly set to your Nit root directory.

Since jwrapper uses `javap` to extract data from .class files, the JDK7 or higher has to be installed and must be in your `$PATH`. (Older versions of `javap` do not show generic signatures)

Usage :

	jwrapper [OPTIONS] JAVA_CLASS_FILE NIT_OUTPUT_FILE

The options are :

`-a, --with-attributes`

* It enables extern class attributes generation. For each public attribute, there'll be a Nit attribute of the corresponding type.

`-c, --comment`

* When a method contains at least one unknown type, the code generator will comment the whole method and let the client manage it.

`-w, --wrap`

* A minimalistic extern class will be created for each unknown type (this is the default behaviour)

`-h, --help`

* Print the help message

Unknown types are types that doesn't have an equivalent in Nit as of yet.

Jwrapper won't wrap a class that already is in the `lib/android` directory.

Can't use both -c and -w together, either you comment unknown types or you wrap them.
