Generator of Nit extern classes to wrap Java APIs.

# Description
_jwrapper_ automates wrapping Java classes so they can be accessed from Nit code. It generates Nit extern classes by analyzing Java class files.

_jwrapper_ reuse Nit types of already wrapped Java classes by searching in the `lib/java` and `lib/android` folders in the Nit repository. It won't wrap a class that are already is those folders.

# Installation
_jwrapper_ is designed to be installed from the `contrib` directory of Nit repository. (https://nitlanguage.org)

To initiate installation process, use `make` in the `contrib/jwrapper` directory.

_jwrapper_ relies on `nitcc` that will be automatically compiled from `contrib/nitcc`.

# Usage
The _jwrapper_ binary can be found under `contrib/jwrapper/bin` directory.

_jwrapper_ uses `grep` to find existing libraries, make sure that the environment variable `NIT_DIR` is properly set to your Nit root directory.

_jwrapper_ uses `javap` to extract data from .class files, the JDK7 or higher has to be installed and must be in your `$PATH`. (Older versions of `javap` do not show generic signatures)

Usage :

	jwrapper [OPTIONS] JAVA_CLASS_FILE NIT_OUTPUT_FILE

The options are :

`-a, --with-attributes`

* It enables extern class attributes generation. For each public attribute, there'll be a Nit attribute of the corresponding type.

`-c, --comment`

* When a method contains at least one unknown type, the code generator will comment the whole method and let the client manage it. Unknown types are types that doesn't have an equivalent in Nit as of yet.

`-w, --wrap`

* A minimalistic extern class will be created for each unknown type (this is the default behaviour)

`-h, --help`

* Print the help message

Can't use both -c and -w together, either you comment unknown types or you wrap them.
