bin/template: $(shell nitls -M src/template.nit -m linux)
	mkdir -p bin/
	nitc src/template.nit -m linux -o $@

android: bin/template.apk
bin/template.apk: $(shell nitls -M src/template.nit -m android)
	mkdir -p bin/
	nitc src/template.nit -m android -o $@

check:
	nitunit .

clean:
	rm -rf bin/
