
PROGS=*.nit ../examples/*.nit ../lib/*.nit ../src/nitdoc.nit ../src/nits.nit ../src/nitc.nit ../src/test_parser.nit

all: separate global icode

separate:
	./tests.sh ${PROGS}

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

global:
	./tests.sh -o --global ${PROGS}

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
