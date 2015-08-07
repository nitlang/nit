all: bin/objcwrapper

../nitcc/src/nitcc:
	make -C ../nitcc

src/objc_parser.nit: ../nitcc/src/nitcc grammar/objc.sablecc
	../nitcc/src/nitcc grammar/objc.sablecc
	mv *.nit src/
	mv objc* gen/

bin/objcwrapper: $(shell ../../bin/nitls -M src/objcwrapper.nit) src/objc_parser.nit
	../../bin/nitc -o bin/objcwrapper src/objcwrapper.nit --semi-global

bin/objc_test_parser: $(shell ../../bin/nitls -M src/objc_test_parser.nit)
	../../bin/nitc -o bin/objc_test_parser src/objc_test_parser.nit --semi-global
