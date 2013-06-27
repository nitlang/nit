
PROGS=*.nit ../examples/*.nit ../examples/leapfrog/leapfrog.nit ../examples/shoot/shoot_logic.nit ../lib/*.nit ../src/nitdoc.nit ../src/nits.nit ../src/nitc.nit ../src/test_parser.nit ../src/nit.nit ../src/nitmetrics.nit ../src/nitg.nit

all: separate niti nitg nitg-s

alot: separate global niti nitg nitg-s nitg-s-bm nitg-s-phmod nitg-s-phand nitg-e nitg-e-bm nitg-e-phmod nitg-e-phand icode

separate:
	./testfull.sh

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

global:
	./testfull.sh -o --global

niti:
	./testfull.sh --engine niti

nitg:
	./testfull.sh --engine nitg

nitg-s:
	./testfull.sh --engine nitg-s

nitg-s-bm:
	./testfull.sh --engine nitg-s -o --bm-typing

nitg-s-phmod:
	./testfull.sh --engine nitg-s -o --phmod-typing

nitg-s-phand:
	./testfull.sh --engine nitg-s -o --phand-typing

nitg-e:
	./testfull.sh --engine nitg-e

nitg-e-bm:
	./testfull.sh --engine nitg-e -o --bm-typing

nitg-e-phmod:
	./testfull.sh --engine nitg-e -o --phmod-typing

nitg-e-phand:
	./testfull.sh --engine nitg-e -o --phand-typing

icode:
	./tests_icode.sh icode*.nit

failed:
	@[ ! -s errlist ] && echo 'No failed tests to execute' ; true
	@[ -s errlist ] && ./tests.sh `cat errlist | sort -u` ; true

store:
	./store_save.sh *.nit

clean:
	rm -r -f -- out/ alt .nit_compile errlist 2> /dev/null || true

distclean: clean
