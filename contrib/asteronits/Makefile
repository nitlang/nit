NITC=nitc
NITLS=nitls

all: bin/asteronits

bin/asteronits: $(shell ${NITLS} -M src/asteronits.nit -m linux) pre-build
	${NITC} src/asteronits.nit -m linux -o $@

bin/texture_atlas_parser: ../../lib/gamnit/texture_atlas_parser.nit
	${NITC} ../../lib/gamnit/texture_atlas_parser.nit -o $@

src/spritesheet.nit: bin/texture_atlas_parser
	bin/texture_atlas_parser art/sheet.xml --dir src/ -n spritesheet

pre-build: src/spritesheet.nit

check: bin/asteronits
	NIT_TESTING=true bin/asteronits

# ---
# Android

android: bin/asteronits.apk
bin/asteronits.apk: $(shell ${NITLS} -M src/asteronits.nit -m android) android/res/ pre-build
	${NITC} src/android.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/asteronits.nit -m android) android/res/ pre-build
	${NITC} src/android.nit -m android -o bin/asteronits.apk --release

android/res/: art/icon.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_icons --out android/res --android art/icon.svg

# ---
# iOS

ios: bin/asteronits.app
bin/asteronits.app: $(shell ${NITLS} -M src/asteronits.nit -m ios -m src/touch_ui.nit) pre-build ios/AppIcon.appiconset/Contents.json
	${NITC} src/asteronits.nit -m ios -m src/touch_ui.nit -o $@ --compile-dir nit_compile

ios/AppIcon.appiconset/Contents.json: art/icon.svg
	mkdir -p ios
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --ios --out ios/AppIcon.appiconset/
