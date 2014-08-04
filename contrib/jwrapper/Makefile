default:
	mkdir -p bin
	make -C ../nitcc
	../nitcc/src/nitcc ./grammar/javap.sablecc
	../../bin/nitg ./src/jwrapper.nit -o ./bin/jwrapper
	mv *.nit ./src/
	mkdir -p gen
	mv javap* ./gen/

clean:
	rm -f bin/javap_test_parser bin/jwrapper
	rm -f gen/*
	rm -rf .nit_compile/
