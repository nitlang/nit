all: bin/restful_annot
	mkdir -p bin/
	../../../bin/nitc --dir bin src/nitcorn_hello_world.nit src/simple_file_server.nit

pre-build: src/restful_annot_gen.nit
src/restful_annot_gen.nit:
	../../../bin/nitrestful -o $@ src/restful_annot.nit

bin/restful_annot: src/restful_annot_gen.nit
	mkdir -p bin/
	../../../bin/nitc -o $@ src/restful_annot_gen.nit
