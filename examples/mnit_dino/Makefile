default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/dino src/dino_linux.nit

doc:
	mkdir -p doc
	../../bin/nitdoc -d doc/ src/dino.nit src/dino_linux.nit

pngs:
	mkdir -p assets/images
	tools/svg-to-pngs art/drawing.svg assets/images

clean:
	rm -rf bin/ doc/
