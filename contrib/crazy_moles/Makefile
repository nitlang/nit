default: bin/moles

bin/moles: $(shell ../../bin/nitls -M src/moles_linux.nit) assets/images/drawing.png
	mkdir -p bin
	../../bin/nitc -o bin/moles src/moles_linux.nit

bin/moles.apk: android-icons $(shell ../../bin/nitls -M src/moles_android.nit) assets/images/drawing.png
	mkdir -p bin
	../../bin/nitc -o bin/moles.apk src/moles_android.nit

android: bin/moles.apk

../inkscape_tools/bin/svg_to_icons:
	$(MAKE) -C ../inkscape_tools

android-icons: ../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg
	mkdir -p res
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

android-install: bin/moles.apk
	adb install -rf bin/moles.apk

assets/images/drawing.png: art/drawing.svg ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p assets/images
	../inkscape_tools/bin/svg_to_png_and_nit --src src/ --scale 2.0 art/drawing.svg

check-android: bin/moles.apk
	../../misc/jenkins/check_android.sh bin/moles.apk

clean:
	rm -rf bin res
