all: bin/action_nitro

bin/action_nitro: $(shell nitls -M src/action_nitro.nit -m linux) pre-build
	nitc src/action_nitro.nit -m linux -o $@

android: bin/action_nitro.apk
bin/action_nitro.apk: $(shell nitls -M src/action_nitro.nit -m gamnit::android19 -m src/touch_ui.nit) pre-build android/res/
	nitc src/action_nitro.nit -m gamnit::android19 -m src/touch_ui.nit -o $@

android-release: $(shell nitls -M src/action_nitro.nit -m gamnit::android19 -m src/touch_ui.nit) pre-build android/res/
	nitc src/action_nitro.nit -m gamnit::android19 -m src/touch_ui.nit -o bin/action_nitro.apk --release

ios: bin/action_nitro.app
bin/action_nitro.app: $(shell nitls -M src/action_nitro.nit -m ios -m src/touch_ui.nit) pre-build
	nitc src/action_nitro.nit -m ios -m src/touch_ui.nit -o $@ --compile-dir nit_compile

src/gen/texts.nit: art/texts.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_png_and_nit art/texts.svg -a assets/ -s src/gen/ -x 2.0 -g

src/gen/planes.nit: art/planes.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_png_and_nit art/planes.svg -a assets/ -s src/gen/ -x 2.0 -g

android/res/: art/icon.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_icons --out android/res --android art/icon.svg

pre-build: src/gen/texts.nit src/gen/planes.nit

check: bin/action_nitro
	NIT_TESTING=true bin/action_nitro
