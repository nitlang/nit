NITC=../../../../bin/nitc
NITLS=../../../../bin/nitls

all: bin/standalone_triangle bin/triangle bin/triangle.apk

bin/standalone_triangle: $(shell ${NITLS} -M src/standalone_triangle.nit linux) ${NITC}
	${NITC} src/standalone_triangle.nit -m linux -o $@

bin/triangle: $(shell ${NITLS} -M src/portable_triangle.nit linux) ${NITC}
	${NITC} src/portable_triangle.nit -m linux -o $@

check: bin/standalone_triangle bin/triangle
	bin/standalone_triangle
	bin/triangle

android: bin/triangle.apk
bin/triangle.apk: $(shell ${NITLS} -M src/portable_triangle.nit android) ${NITC} res/drawable-hdpi/icon.png
	${NITC} src/portable_triangle.nit -m android -o $@

res/drawable-hdpi/icon.png: art/icon.svg
	../../../../contrib/inkscape_tools/bin/svg_to_icons --out res --android art/icon.svg
