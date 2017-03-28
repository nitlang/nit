all: bin/template_flat bin/template_flat.apk

bin/template_flat: $(shell nitls -M src/template_flat.nit linux)
	nitc --debug src/template_flat.nit -m linux -o $@

android: bin/template_flat.apk
bin/template_flat.apk: $(shell nitls -M src/template_flat.nit android)
	nitc src/template_flat.nit -m android -o $@
