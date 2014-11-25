#!/bin/sh
printf "%s\n" "$@" \
	../src/nit*.nit \
	../src/test_*.nit \
	../examples/*.nit \
	../examples/*/*.nit \
	../examples/shoot/src/shoot_logic.nit \
	../examples/*/src/*_android.nit \
	../examples/*/src/*_linux.nit \
	../examples/*/src/*_null.nit \
	../examples/pnacl/converter/converter.nit \
	../examples/nitcorn/src/*.nit \
	../examples/mpi/src/*.nit \
	../lib/*/examples/*.nit \
	../contrib/friendz/src/solver_cmd.nit \
	../contrib/pep8analysis/src/pep8analysis.nit \
	../contrib/nitiwiki/src/nitiwiki.nit \
	*.nit
