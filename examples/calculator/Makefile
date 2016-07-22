NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/calculator bin/test

bin/calculator: $(shell ${NITLS} -M src/calculator.nit linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator.nit -m linux

bin/scientific: $(shell ${NITLS} -M scientific linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/scientific -m linux

# ---
# Android

android: bin/calculator.apk

bin/calculator.apk: $(shell ${NITLS} -M src/scientific src/android_calculator.nit) ${NITC} android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o $@ src/scientific -m src/android_calculator.nit -D debug

android-release: $(shell ${NITLS} -M src/scientific src/android_calculator.nit) ${NITC} android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o bin/calculator.apk src/scientific -m src/android_calculator.nit --release

android/res/drawable-hdpi/icon.png: art/icon.svg ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p android/res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

src/scientific/android/res/drawable-hdpi/icon.png: art/icon_sci.svg ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p src/scientific/android/res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon-sci.svg --android --out src/scientific/android/res/

../../contrib/inkscape_tools/bin/svg_to_icons:
	make -C ../../contrib/inkscape_tools/

android-install: bin/calculator.apk
	adb install -r bin/calculator.apk

# ---
# iOS

bin/calculator.app: $(shell ${NITLS} -M src/scientific src/ios_calculator.nit) ${NITC} ios/AppIcon.appiconset/Contents.json
	mkdir -p bin
	${NITC} -o $@ src/scientific -m src/ios_calculator.nit -D debug

ios/AppIcon.appiconset/Contents.json: art/icon-ios.svg
	mkdir -p ios
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon-ios.svg --ios --out ios/AppIcon.appiconset/

src/scientific/ios/AppIcon.appiconset/Contents.json: art/icon-ios.svg
	mkdir -p ios
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon-ios-sci.svg --ios --out src/scientific/ios/AppIcon.appiconset/

# ---
# Tests

bin/test: $(shell ${NITLS} -M src/calculator_test.nit) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator_test.nit

check: bin/test
	bin/test
