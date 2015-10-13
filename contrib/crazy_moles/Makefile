
SVG2ICONS=../inkscape_tools/bin/svg_to_icons
SVG2PNG=../inkscape_tools/bin/svg_to_png_and_nit

default: bin/moles

pre-build: assets/images/drawing.png

bin/moles: $(shell ../../bin/nitls -M src/moles_linux.nit) assets/images/drawing.png
	mkdir -p bin
	../../bin/nitc -o bin/moles src/moles_linux.nit

android: bin/moles.apk
bin/moles.apk: android-icons $(shell ../../bin/nitls -M src/moles_android.nit) assets/images/drawing.png
	mkdir -p bin
	../../bin/nitc -o bin/moles.apk src/moles_android.nit

android-release: android-icons $(shell ../../bin/nitls -M src/moles_android.nit) assets/images/drawing.png
	mkdir -p bin
	../../bin/nitc -o bin/moles.apk src/moles_android.nit --release

$(SVG2ICONS):
	$(MAKE) -C ../inkscape_tools

android-icons: $(SVG2ICONS) art/icon.svg
	mkdir -p res
	$(SVG2ICONS) art/icon.svg --android --out res/

android-install: bin/moles.apk
	adb install -rf bin/moles.apk

assets/images/drawing.png: art/drawing.svg $(SVG2ICONS)
	mkdir -p assets/images
	$(SVG2PNG) --src src/ --scale 2.0 art/drawing.svg

check-android: bin/moles.apk
	../../misc/jenkins/check_android.sh bin/moles.apk

clean:
	rm -rf bin res
