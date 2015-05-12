android:
	mkdir -p bin/ res/
	../../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/
	../../../bin/nitc --dir bin/ src/ui_test.nit

install: android
	adb install -r bin/ui_test.apk

clean:
	rm -rf bin
