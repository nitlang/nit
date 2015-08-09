default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/moles src/moles_linux.nit

android: android-icons
	mkdir -p bin
	../../bin/nitc -o bin/moles.apk src/moles_android.nit

../../contrib/inkscape_tools/bin/svg_to_icons:
	$(MAKE) -C ../../contrib/inkscape_tools

android-icons: ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

android-install: android
	adb install -rf bin/moles.apk

pngs:
	mkdir -p assets/images
	../../contrib/inkscape_tools/bin/svg_to_png_and_nit --src src/ --scale 2.0 art/drawing.svg

check-android:
	./check-android.sh

clean:
	rm -rf bin res
