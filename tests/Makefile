
PROGS=*.nit ../examples/*.nit ../examples/leapfrog/leapfrog.nit ../examples/shoot/shoot_logic.nit ../lib/*.nit ../src/nitdoc.nit ../src/test_parser.nit ../src/nit.nit ../src/nitmetrics.nit ../src/nith.nit

all: niti nith-g nith-s

alot: niti nith-g nith-s nith-s-bm nith-s-phmod nith-s-phand nith-e nith-e-bm nith-e-phmod nith-e-phand icode

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

niti:
	./testfull.sh --engine niti

nith-g:
	./testfull.sh --engine nith-g

nith-s:
	./testfull.sh --engine nith-s

nith-s-bm:
	./testfull.sh --engine nith-s -o --bm-typing

nith-s-phmod:
	./testfull.sh --engine nith-s -o --phmod-typing

nith-s-phand:
	./testfull.sh --engine nith-s -o --phand-typing

nith-e:
	./testfull.sh --engine nith-e

nith-e-bm:
	./testfull.sh --engine nith-e -o --bm-typing

nith-e-phmod:
	./testfull.sh --engine nith-e -o --phmod-typing

nith-e-phand:
	./testfull.sh --engine nith-e -o --phand-typing

failed:
	@[ ! -s errlist ] && echo 'No failed tests to execute' ; true
	@[ -s errlist ] && ./tests.sh `cat errlist | sort -u` ; true

store:
	./store_save.sh *.nit

clean:
	rm -r -f -- out/ alt .nit_compile errlist 2> /dev/null || true

distclean: clean
