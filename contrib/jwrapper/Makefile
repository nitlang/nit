all: bin/jwrapper

../nitcc/src/nitcc:
	make -C ../nitcc

src/javap_test_parser.nit: ../nitcc/src/nitcc grammar/javap.sablecc
	../nitcc/src/nitcc grammar/javap.sablecc
	mkdir -p src gen
	mv javap_*.nit src/
	mv javap* gen/

bin/jwrapper: src/javap_test_parser.nit $(shell ../../bin/nitls -M src/jwrapper.nit) ../../bin/nitc
	mkdir -p bin
	../../bin/nitc src/jwrapper.nit -o bin/jwrapper

clean:
	rm -f bin/javap_test_parser bin/jwrapper
	rm -f gen/*
	rm src/javap_lexer.nit src/javap_parser.nit src/javap_test_parser.nit
