#!/bin/sh
printf "%s\n" "$@" \
	../src/nit*.nit \
	../src/test_*.nit \
	../src/examples/*.nit \
	../examples/*.nit \
	../examples/*/*.nit \
	../examples/shoot/src/shoot_logic.nit \
	../examples/*/src/*_android.nit \
	../examples/*/src/*_linux.nit \
	../examples/*/src/*_null.nit \
	../examples/nitcorn/src/*.nit \
	../lib/*/examples/*.nit \
	../lib/*/examples/*/*.nit \
	../contrib/friendz/src/solver_cmd.nit \
	../contrib/neo_doxygen/src/tests/neo_doxygen_*.nit \
	../contrib/pep8analysis/src/pep8analysis.nit \
	../contrib/nitiwiki/src/nitiwiki.nit \
	*.nit
