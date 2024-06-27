all: bin/jwrapper

pre-build: src/javap_test_parser.nit src/serial.nit

../nitcc/src/nitcc:
	make -C ../nitcc

src/javap_test_parser.nit: ../nitcc/src/nitcc grammar/javap.sablecc
	../nitcc/src/nitcc grammar/javap.sablecc
	mkdir -p src gen
	mv javap_*.nit src/
	mv javap* gen/

src/serial.nit: $(shell nitls -M src/jwrapper.nit)
	nitserial -o src/serial.nit src/jwrapper.nit

bin/jwrapper: src/javap_test_parser.nit src/serial.nit $(shell nitls -M src/jwrapper.nit)
	mkdir -p bin
	nitc src/jwrapper.nit -o bin/jwrapper -m src/serial.nit

clean:
	rm -f bin/javap_test_parser bin/jwrapper
	rm -f gen/*
	rm src/javap_lexer.nit src/javap_parser.nit src/javap_test_parser.nit

check: bin/jwrapper tests/wildcards.javap
	mkdir -p tmp
	bin/jwrapper -v -u stub -o tests/statics.nit tests/statics.javap
	nitpick -q tests/statics.nit
	bin/jwrapper -v -u comment -o tests/generics.nit tests/generics.javap
	nitpick -q tests/generics.nit
	bin/jwrapper -v -u comment -o tests/long.nit tests/long.javap
	nitpick -q tests/long.nit
	bin/jwrapper -v -u comment -o tests/inits.nit tests/inits.javap
	nitpick -q tests/inits.nit
	bin/jwrapper -v -u comment -o tests/testjvm.nit tests/testjvm.javap
	nitpick -q tests/testjvm.nit
	bin/jwrapper -v -u comment -o tests/many.nit tests/many.javap
	nitpick -q tests/many.nit
	bin/jwrapper -v -u comment -o tests/wildcards.nit tests/wildcards.javap
	nitpick -q tests/wildcards.nit
	make -C examples/queue/ check
	#make -C examples/java_api/ check #FIXME: no more `rt.jar` file?

check-libs: bin/jwrapper
	# This config dependent rule must be tweaked according to each system

	# The full local Java standard library
	bin/jwrapper -v -u comment -o tests/rt_full.nit /usr/lib/jvm/default-java/jre/lib/rt.jar
	echo "+ Disabled functions: `grep '#	fun' tests/rt_full.nit | wc -l` / `grep '^	fun' tests/rt_full.nit | wc -l`"
	nitpick tests/rt_full.nit

	# Only the `java` namespace of the standard library to avoid conflicts with other libs
	bin/jwrapper -v -u comment -o tests/rt.nit /usr/lib/jvm/default-java/jre/lib/rt.jar -r ^java
	echo "+ Disabled functions: `grep '#	fun' tests/rt.nit | wc -l` / `grep '^	fun' tests/rt.nit | wc -l`"
	nitpick tests/rt.nit

	# tools.jar, not using the standard library because of conflicts on sun.tools.jar.*
	bin/jwrapper -v -u comment -o tests/java_tools.nit /usr/lib/jvm/default-java/lib/tools.jar -i tests/rt.nit
	sed -i -e "s/import java/import java\nimport rt/" tests/java_tools.nit
	echo "+ Disabled functions: `grep '#	fun' tests/java_tools.nit | wc -l` / `grep '^	fun' tests/java_tools.nit | wc -l`"
	nitpick tests/java_tools.nit

	# SableCC using the standard Java library
	bin/jwrapper -v -u comment -o tests/sablecc.nit ~/apps/sablecc-3-beta.3.altgen.20041114/lib/sablecc.jar -i tests/rt.nit
	sed -i -e "s/import java/import java\nimport rt/" tests/sablecc.nit
	echo "+ Disabled functions: `grep '#	fun' tests/sablecc.nit | wc -l` / `grep '^	fun' tests/sablecc.nit | wc -l`"
	nitpick tests/sablecc.nit

	make -C examples/android_api/ check
