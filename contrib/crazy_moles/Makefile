
SVG2ICONS=../inkscape_tools/bin/svg_to_icons
SVG2PNG=../inkscape_tools/bin/svg_to_png_and_nit

default: bin/moles

pre-build: assets/images/drawing.png

bin/moles: $(shell nitls -M src/moles_linux.nit) assets/images/drawing.png
	mkdir -p bin
	nitc -o bin/moles src/moles_linux.nit

android: bin/moles.apk
bin/moles.apk: android/res/ $(shell nitls -M src/moles_android.nit) assets/images/drawing.png
	mkdir -p bin
	nitc -o bin/moles.apk src/moles_android.nit

android-release: android/res/ $(shell nitls -M src/moles_android.nit) assets/images/drawing.png
	mkdir -p bin
	nitc -o bin/moles.apk src/moles_android.nit --release

$(SVG2ICONS):
	cd ../inkscape_tools && $(MAKE)

android/res/: $(SVG2ICONS) art/icon.svg
	mkdir -p android/res
	$(SVG2ICONS) art/icon.svg --android --out android/res/

android-install: bin/moles.apk
	adb install -rf bin/moles.apk

assets/images/drawing.png: art/drawing.svg $(SVG2ICONS)
	mkdir -p assets/images
	$(SVG2PNG) --src src/ --scale 2.0 art/drawing.svg

check-android: bin/moles.apk
	../../misc/jenkins/check_android.sh bin/moles.apk

clean:
	rm -rf ./bin ./android ./assets ./src/drawing.nit
