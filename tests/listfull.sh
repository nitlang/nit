#!/bin/sh
printf "%s\n" "$@" *.nit \
	../examples/*.nit \
	../examples/*/*.nit \
	../examples/shoot/src/shoot_logic.nit \
	../examples/*/src/*_android.nit \
	../examples/*/src/*_linux.nit \
	../examples/*/src/*_null.nit \
	../examples/pnacl/converter/converter.nit \
	../examples/nitcorn/src/*.nit \
	../examples/mpi/src/*.nit \
	../lib/*.nit \
	../lib/*/*.nit \
	../lib/*/*/*.nit  \
	../src/nit*.nit \
	../src/test_*.nit \
	../contrib/*.nit \
	../contrib/*/*.nit \
	../contrib/*/src/*.nit
