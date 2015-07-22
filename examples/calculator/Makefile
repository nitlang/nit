NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/calculator bin/calculator.apk bin/test

bin/calculator: $(shell ${NITLS} -M src/calculator.nit -m linux) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator.nit -m linux

bin/calculator.apk: $(shell ${NITLS} -M src/calculator.nit -m android) ${NITC} ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p bin res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/
	${NITC} -o $@ src/calculator.nit -m android

../../contrib/inkscape_tools/bin/svg_to_icons:
	make -C ../../contrib/inkscape_tools/

android-install: bin/calculator.apk
	adb install -r bin/calculator.apk

bin/test: $(shell ${NITLS} -M src/calculator_test.nit) ${NITC}
	mkdir -p bin
	${NITC} -o $@ src/calculator_test.nit

check: bin/test
	bin/test
