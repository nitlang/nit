all:
	./tests.sh *.nit ../examples/*.nit 

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

store:
	./store_save.sh *.nit

clean:
	@rm -r -f -- *.bin *.res *.write *.err *.log alt || true
