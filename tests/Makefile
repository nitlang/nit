
all:
	./tests.sh *.nit ../examples/*.nit ../src/nitdoc.nit

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

global:
	./tests.sh -o --global *.nit ../examples/*.nit ../src/nitdoc.nit

failed:
	@[ ! -s errlist ] && echo 'No failed tests to execute' ; true
	@[ -s errlist ] && ./tests.sh `cat errlist | sort -u` ; true

store:
	./store_save.sh *.nit

clean:
	@rm -r -f -- *.bin *.res *.write *.err *.log alt || true
