default: linux

linux:
	mkdir -p bin
	../../bin/nitg -o bin/moles src/moles_linux.nit

android: android-icons
	mkdir -p bin
	../../bin/nitg -o bin/moles.apk src/moles_android.nit

../../contrib/inkscape_tools/bin/svg_to_icons:
	$(MAKE) -C ../../contrib/inkscape_tools

android-icons: ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

android-install: android
	adb install -rf bin/moles.apk

pngs:
	mkdir -p assets/images
	../mnit_dino/tools/svg-to-pngs art/drawing.svg assets/images

clean:
	rm -rf bin
