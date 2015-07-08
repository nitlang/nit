all:
	mkdir -p bin
	../../bin/nitc --dir bin src/svg_to_png_and_nit.nit src/svg_to_icons.nit

check: test-dino test-app

test-app: bin/svg_to_png_and_nit
	make -C tests/app

test-dino: bin/svg_to_png_and_nit
	mkdir -p tests/dino/images
	bin/svg_to_png_and_nit --assets tests/dino/ --src tests/dino/ ../../examples/mnit_dino/art/drawing.svg

.PHONY: bin/svg_to_png_and_nit
