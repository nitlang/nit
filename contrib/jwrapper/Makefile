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

check: bin/jwrapper tests/wildcards.javap
	mkdir -p tmp
	bin/jwrapper -v -u comment -o tests/long.nit tests/long.javap
	../../bin/nitpick -q tests/long.nit
	bin/jwrapper -v -u comment -o tests/inits.nit tests/inits.javap
	../../bin/nitpick -q tests/inits.nit
	bin/jwrapper -v -u comment -o tests/testjvm.nit tests/testjvm.javap
	../../bin/nitpick -q tests/testjvm.nit
	bin/jwrapper -v -u comment -o tests/many.nit tests/many.javap
	../../bin/nitpick -q tests/many.nit
	bin/jwrapper -v -u comment -o tests/wildcards.nit tests/wildcards.javap
	../../bin/nitpick -q tests/wildcards.nit
	make -C examples/queue/ check

check-libs: bin/jwrapper
	# This config dependent rule must be tweaked according to each system
	bin/jwrapper -v -u ignore -o tests/rt.nit /usr/lib/jvm/default-java/jre/lib/rt.jar
	bin/jwrapper -v -u ignore -o tests/java_tools.nit /usr/lib/jvm/default-java/lib/tools.jar
	bin/jwrapper -v -u ignore -o tests/sablecc.nit ~/apps/sablecc-3-beta.3.altgen.20041114/lib/sablecc.jar
	bin/jwrapper -v -u ignore -o tests/android.nit ~/sdks/android-sdk/platforms/android-10/android.jar
