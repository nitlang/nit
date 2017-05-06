all: bin/template_flat bin/template_flat.apk

bin/template_flat: $(shell nitls -M src/template_flat.nit -m linux)
	mkdir -p bin/
	nitc src/template_flat.nit -m linux -o $@

android: bin/template_flat.apk
bin/template_flat.apk: $(shell nitls -M src/template_flat.nit -m android)
	mkdir -p bin/
	nitc src/template_flat.nit -m android -o $@

clean:
	rm -rf bin/
