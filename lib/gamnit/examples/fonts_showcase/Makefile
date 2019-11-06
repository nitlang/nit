bin/fonts_showcase: $(shell nitls -M src/fonts_showcase.nit -m linux)
	mkdir -p bin/
	nitc src/fonts_showcase.nit -m linux -o $@

android: bin/fonts_showcase.apk
bin/fonts_showcase.apk: $(shell nitls -M src/fonts_showcase.nit -m android)
	mkdir -p bin/
	nitc src/fonts_showcase.nit -m android -o $@

check:
	nitunit .

clean:
	rm -rf bin/
