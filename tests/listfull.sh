#!/bin/sh
for module in "$@" \
	../src/nit*.nit \
	../src/test_*.nit \
	../src/examples/*.nit \
	../examples/*.nit \
	../examples/*/*.nit \
	../examples/shoot/src/shoot_logic.nit \
	../examples/*/src/*_android.nit \
	../examples/*/src/*_linux.nit \
	../examples/*/src/*_null.nit \
	../lib/*/examples/*.nit \
	../lib/*/examples/*/*.nit \
	../contrib/friendz/src/solver_cmd.nit \
	../contrib/neo_doxygen/src/tests/neo_doxygen_*.nit \
	../contrib/pep8analysis/src/pep8analysis.nit \
	../contrib/nitin/nitin.nit \
	../contrib/nitiwiki/src/nitiwiki.nit \
	*.nit \
; do
	case "${module}" in
		../lib/popcorn/examples/*)
			continue
			;;
		*)
			# See [Rich’s sh (POSIX shell) tricks](http://www.etalabs.net/sh_tricks.html),
			# section “Shell-quoting arbitrary strings”.
			printf '%s\n' "${module}" | sed "s/'/'\\\\''/g;1s/^/'/;\$s/\$/'/"
			;;
	esac
done
