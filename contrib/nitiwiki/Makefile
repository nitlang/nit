all: nitiwiki bin/nitiwiki_server

nitiwiki:
	mkdir -p bin
	nitc src/nitiwiki.nit -o bin/nitiwiki

bin/nitiwiki_server: $(shell nitls -M src/wiki_edit.nit)
	nitc -o $@ src/wiki_edit.nit

check: nitiwiki
	cd tests; make

doc:
	nitdoc -d doc src/nitiwiki.nit

clean:
	rm -rf bin
