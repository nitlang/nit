NITC=nitc
NITLS=nitls

all: bin/asteronits

bin/asteronits: $(shell ${NITLS} -M src/asteronits.nit linux) pre-build
	${NITC} src/asteronits.nit -m linux -o $@

bin/texture_atlas_parser: ../../lib/gamnit/texture_atlas_parser.nit
	${NITC} ../../lib/gamnit/texture_atlas_parser.nit -o $@

src/controls.nit: art/controls.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_png_and_nit art/controls.svg -a assets/ -s src/ -x 2.0 -g

src/spritesheet.nit: bin/texture_atlas_parser
	bin/texture_atlas_parser art/sheet.xml --dir src/ -n spritesheet

pre-build: src/controls.nit src/spritesheet.nit

check: bin/asteronits
	NIT_TESTING=true bin/asteronits

# ---
# Android

android: bin/asteronits.apk
bin/asteronits.apk: $(shell ${NITLS} -M src/asteronits.nit android) android/res/ pre-build
	${NITC} src/android.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/asteronits.nit android) android/res/ pre-build
	${NITC} src/android.nit -m android -o bin/asteronits.apk --release

android/res/: art/icon.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_icons --out android/res --android art/icon.svg
