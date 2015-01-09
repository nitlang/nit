all: nitcc grammar bin/jwrapper

nitcc:
	make -C ../nitcc

grammar:
	../nitcc/src/nitcc grammar/javap.sablecc
	mkdir -p src gen
	mv *.nit src/
	mv javap* gen/

bin/jwrapper:
	mkdir -p bin
	../../bin/nitc src/jwrapper.nit -o bin/jwrapper

clean:
	rm -f bin/javap_test_parser bin/jwrapper
	rm -f gen/*
	rm -rf .nit_compile/
	rm src/javap_lexer.nit src/javap_parser.nit src/javap_test_parser.nit

.PHONY: grammar bin/jwrapper
