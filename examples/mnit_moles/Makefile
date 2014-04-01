default: linux

linux:
	mkdir -p bin
	../../bin/nitg -o bin/moles src/moles_linux.nit

android:
	mkdir -p bin
	../../bin/nitg -o bin/moles.apk src/moles_android.nit

android-install: android
	adb install -rf bin/moles.apk

pngs:
	mkdir -p assets/images
	../mnit_dino/tools/svg-to-pngs art/drawing.svg assets/images

clean:
	rm -rf bin
