all: nitiwiki bin/nitiwiki_server

nitiwiki:
	mkdir -p bin
	../../bin/nitc src/nitiwiki.nit -o bin/nitiwiki

bin/nitiwiki_server: $(shell ../../bin/nitls -M src/wiki_edit.nit)
	../../bin/nitc -o $@ src/wiki_edit.nit

check: nitiwiki
	cd tests; make

doc:
	../../bin/nitdoc -d doc src/nitiwiki.nit

clean:
	rm -rf bin
