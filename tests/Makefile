
PROGS=*.nit ../examples/*.nit ../examples/leapfrog/leapfrog.nit ../examples/shoot/shoot_logic.nit ../lib/*.nit ../src/nitdoc.nit ../src/nits.nit ../src/nitc.nit ../src/test_parser.nit ../src/nit.nit ../src/nitstats.nit ../src/nitg.nit

all: separate global niti nitg nitg-s nitg-s-tree nitg-s-bm nitg-s-phmod nitg-s-phand nitg-e nitg-e-bm nitg-e-phmod nitg-e-phand icode

separate:
	./tests.sh ${PROGS}

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

global:
	./tests.sh -o --global ${PROGS}

niti:
	./tests.sh --engine niti ${PROGS}

nitg:
	./tests.sh --engine nitg ${PROGS}

nitg-s:
	./tests.sh --engine nitg-s ${PROGS}

nitg-s-tree:
	./tests.sh --engine nitg-s -o --generic-resolution-tree *.nit

nitg-s-bm:
	./tests.sh --engine nitg-s -o --bm-typing ${PROGS}

nitg-s-phmod:
	./tests.sh --engine nitg-s -o --phmod-typing ${PROGS}

nitg-s-phand:
	./tests.sh --engine nitg-s -o --phand-typing ${PROGS}

nitg-e:
	./tests.sh --engine nitg-e ${PROGS}

nitg-e-bm:
	./tests.sh --engine nitg-e -o --bm-typing ${PROGS}

nitg-e-phmod:
	./tests.sh --engine nitg-e -o --phmod-typing ${PROGS}

nitg-e-phand:
	./tests.sh --engine nitg-e -o --phand-typing ${PROGS}

nitdoc:
	./tests.sh ../src/nitdoc.nit

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
