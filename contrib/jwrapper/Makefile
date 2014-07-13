default:
	mkdir -p bin
	make -C ../nitcc
	cp ../nitcc/src/nitcc bin/
	./bin/nitcc ./grammar/javap.sablecc
	../../bin/nitg ./src/javap_visitor.nit -o ./bin/jwrapper
	mv *.nit ./src/
	mkdir -p gen
	mv javap* ./gen/

clean:
	rm -f bin/javap_test_parser bin/jwrapper
	rm -f gen/*
	rm -rf .nit_compile/
