NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/asteronits

bin/asteronits: $(shell ${NITLS} -M src/asteronits.nit linux) ${NITC} pre-build
	${NITC} src/asteronits.nit -m linux -o $@

bin/texture_atlas_parser: src/texture_atlas_parser.nit
	${NITC} src/texture_atlas_parser.nit -o $@

src/controls.nit: art/controls.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_png_and_nit art/controls.svg -a assets/ -s src/ -x 2.0 -g

src/spritesheet_city.nit: bin/texture_atlas_parser
	bin/texture_atlas_parser art/sheet.xml --dir src/ -n spritesheet

pre-build: src/controls.nit src/spritesheet_city.nit

check: bin/asteronits
	NIT_TESTING=true bin/asteronits

# ---
# Android

android: bin/asteronits.apk
bin/asteronits.apk: $(shell ${NITLS} -M src/asteronits.nit android) ${NITC} res/drawable-hdpi/icon.png pre-build
	${NITC} src/android.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/asteronits.nit android) ${NITC} res/drawable-hdpi/icon.png pre-build
	${NITC} src/android.nit -m android -o bin/asteronits.apk --release

res/drawable-hdpi/icon.png: art/icon.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_icons --out res --android art/icon.svg
