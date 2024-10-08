Nit is an expressive language with a script-like syntax, a friendly type-system and aims at elegance, simplicity and intuitiveness.

Nit has a simple straightforward style and can usually be picked up quickly, particularly by anyone who has programmed before.
While object-oriented, it allows procedural styles.

The Nit Compiler (nitc) produces efficient machine language binaries.

Some Nit features:

 * Pure Object-Oriented.
 * Multiple Inheritance.
 * Realist typing policy.
 * Light and clear syntax.


Requirements:

 * gcc		http://gcc.gnu.org/ (or a compatible C compiler)
 * pkg-config	http://www.freedesktop.org/wiki/Software/pkg-config/
 * ccache	http://ccache.samba.org/	to improve recompilation
 * libgc-dev	http://hboehm.info/gc/
 * libunwind	http://nongnu.org/libunwind

Those are available in most Linux distributions

    $ sudo apt-get install build-essential ccache libgc-dev libunwind-dev pkg-config

and on OS X using brew

    $ brew install ccache bdw-gc libunwind-headers pkgconfig

or with MacPorts

    $ sudo port install ccache boehmgc libunwind-headers pkgconfig

Important files and directories:

 * benchmarks/	Script to bench the compilers
 * bin/		The Nit tools
 * c_src/	C code of nitc (needed to bootstrap)
 * clib/	C code needed by nitc to compile programs
 * contrib/	Various Nit programs (may or may not be useful)
 * doc/		Documentation
 * examples/	Program examples written in Nit
 * lib/		Nit standard library
 * LICENCE	License of the software
 * Makefile	Bootstrap the Nit tools
 * misc/	Some additional files for common text editors and tools
 * NOTICE.md	List of the authors
 * README	This file
 * share/	Common resources used by tools
 * src/		The Nit tool sources (written in Nit)
 * tests/	Non-regression test-suite


How to start:

    $ make
    $ bin/nitc examples/hello_world.nit
    $ ./hello_world

You can source `misc/nit_env.sh` to setup your environment like PATH, MANPATH and bash completion.
To have your environment automatically configured at login, just source it with `install` as argument.

    $ . misc/nit_env.sh install


More tools:

Additional tools can also be compiled but require more dependencies.

 * graphviz	http://www.graphviz.org/	to enable graphs with the nitdoc tool
 * libcurl      https://curl.haxx.se/libcurl/   for the nit package manager nitpm
 * libevent	https://libevent.org/           for the nit documentation server nitweb
 * libmongoc    http://mongoc.org/              also for nitweb

    $ sudo apt-get install graphviz libcurl4-openssl-dev libevent-dev libmongoc-dev
    $ make more


Contributing:

To contribute to Nit, please see [CONTRIBUTING](CONTRIBUTING.md).

The best way to ask the team for advice, submit bugs or request features, is through the use of Github issues, using the appropriate tag (`forum`, `feature-request`, `bug`).

Information, contacts and help:

* Website <https://nitlanguage.org>
* Issues <https://github.com/nitlang/nit/issues>
* Chatroom <https://gitter.im/nitlang/nit>
