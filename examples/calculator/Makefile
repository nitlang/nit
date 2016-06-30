NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/calculator bin/test

bin/calculator: $(shell ${NITLS} -M src/calculator.nit linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator.nit -m linux

bin/scientific_calculator: $(shell ${NITLS} -M src/scientific_calculator.nit linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/scientific_calculator.nit -m linux

# ---
# Android

android: bin/calculator.apk

bin/calculator.apk: $(shell ${NITLS} -M src/scientific_calculator.nit src/android_calculator.nit) ${NITC} android/res/
	mkdir -p bin
	${NITC} -o $@ src/scientific_calculator.nit -m src/android_calculator.nit -D debug

android-release: $(shell ${NITLS} -M src/scientific_calculator.nit src/android_calculator.nit) ${NITC} android/res/
	mkdir -p bin
	${NITC} -o bin/calculator.apk src/scientific_calculator.nit -m src/android_calculator.nit --release

android/res/: art/icon.svg ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p android/res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

../../contrib/inkscape_tools/bin/svg_to_icons:
	make -C ../../contrib/inkscape_tools/

android-install: bin/calculator.apk
	adb install -r bin/calculator.apk

# ---
# iOS

bin/calculator.app: $(shell ${NITLS} -M src/scientific_calculator.nit src/ios_calculator.nit) ${NITC} ios/AppIcon.appiconset/Contents.json
	mkdir -p bin
	${NITC} -o $@ src/scientific_calculator.nit -m src/ios_calculator.nit -D debug

ios/AppIcon.appiconset/Contents.json: art/icon-ios.svg
	mkdir -p ios
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon-ios.svg --ios --out ios/AppIcon.appiconset/

# ---
# Tests

bin/test: $(shell ${NITLS} -M src/calculator_test.nit) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator_test.nit

check: bin/test
	bin/test
