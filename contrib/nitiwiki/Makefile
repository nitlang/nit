all: nitiwiki

nitiwiki:
	mkdir -p bin
	../../bin/nitc src/nitiwiki.nit -o bin/nitiwiki

check: nitiwiki
	cd tests; make

doc:
	../../bin/nitdoc -d doc src/nitiwiki.nit

clean:
	rm -rf bin
	rm -rf -- .nit_compile 2> /dev/null || true
