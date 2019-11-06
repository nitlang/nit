all: bin/restful_annot
	mkdir -p bin/
	nitc --dir bin src/nitcorn_hello_world.nit src/simple_file_server.nit

pre-build: src/restful_annot_gen.nit
src/restful_annot_gen.nit:
	nitrestful -o $@ src/restful_annot.nit

bin/restful_annot: src/restful_annot_gen.nit
	mkdir -p bin/
	nitc -o $@ src/restful_annot_gen.nit

check: src/restful_annot_gen.nit
	mkdir -p bin/ out/
	nitc -o bin/test_restful_annot src/test_restful_annot.nit -m src/restful_annot_gen.nit
	bin/test_restful_annot > out/test_restful_annot.res 2>&1
	diff sav/test_restful_annot.res out/test_restful_annot.res
