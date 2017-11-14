NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/calculator bin/scientific bin/test

bin/calculator: $(shell ${NITLS} -M src/calculator.nit -m linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator.nit -m linux

bin/scientific: $(shell ${NITLS} -M scientific -m linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/scientific -m linux

# ---
# Android
#
# There are 4 versions, combining 2 variations:
# * scientific vs non-scientific
# * android API 21+ vs under 21

android: bin/calculator14.apk bin/scientific14.apk bin/calculator21.apk bin/scientific21.apk

bin/calculator14.apk: $(shell ${NITLS} -M src/android14.nit) ${NITC} android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o $@ src/android14.nit -D debug

bin/calculator21.apk: $(shell ${NITLS} -M src/android21) ${NITC} android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o $@ src/android21 -D debug

bin/scientific14.apk: $(shell ${NITLS} -M src/scientific -m src/android14.nit) ${NITC} src/scientific/android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o $@ src/scientific -m src/android14.nit -D debug

bin/scientific21.apk: $(shell ${NITLS} -M src/scientific -m src/android21) ${NITC} src/scientific/android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o $@ src/scientific -m src/android21 -D debug

android-release: $(shell ${NITLS} -M src/scientific -m src/android14.nit) ${NITC} android/res/drawable-hdpi/icon.png
	mkdir -p bin
	${NITC} -o bin/calculator14.apk src/android14.nit --release
	${NITC} -o bin/calculator21.apk src/android21 --release
	${NITC} -o bin/scientific14.apk src/scientific -m src/android14.nit --release
	${NITC} -o bin/scientific21.apk src/scientific -m src/android21 --release

android/res/drawable-hdpi/icon.png: art/icon.svg ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p android/res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

src/scientific/android/res/drawable-hdpi/icon.png: art/icon-sci.svg ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p src/scientific/android/res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon-sci.svg --android --out src/scientific/android/res/

../../contrib/inkscape_tools/bin/svg_to_icons:
	make -C ../../contrib/inkscape_tools/

android-install: bin/calculator14.apk
	adb install -r bin/calculator14.apk

# ---
# iOS

ios: bin/calculator.app bin/scientific.app

bin/calculator.app: $(shell ${NITLS} -M src/ios.nit) ${NITC} ios/AppIcon.appiconset/Contents.json
	mkdir -p bin
	${NITC} -o $@ src/ios.nit -D debug

bin/scientific.app: $(shell ${NITLS} -M src/scientific -m src/ios.nit) ${NITC} src/scientific/ios/AppIcon.appiconset/Contents.json
	mkdir -p bin
	${NITC} -o $@ src/scientific -m src/ios.nit -D debug

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
