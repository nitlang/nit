all:
	mkdir -p bin/

	# Compile in global mode to silence warnings on unused GTK deprecated
	../../bin/nitc --global --dir bin/ src/calculator_gtk.nit src/calculator_test.nit

android:
	mkdir -p bin/ res/
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/
	../../bin/nitc -o bin/calculator.apk src/calculator_android.nit

android-install: android
	adb install -r bin/calculator.apk
