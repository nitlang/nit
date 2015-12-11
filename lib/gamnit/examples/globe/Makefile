NITC=../../../../bin/nitc
NITLS=../../../../bin/nitls

all: bin/globe

bin/globe: $(shell ${NITLS} -M src/globe.nit linux) ${NITC}
	${NITC} src/globe.nit -m linux -o $@ -D n_parallels=100

check: bin/globe
	bin/globe

# ---
# Android

android: bin/globe.apk
bin/globe.apk: $(shell ${NITLS} -M src/globe.nit android) ${NITC} res/drawable-hdpi/icon.png assets/ld/earth.jpg
	${NITC} src/globe.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/globe.nit android) ${NITC} res/drawable-hdpi/icon.png assets/ld/earth.jpg
	${NITC} src/globe.nit -m android -o bin/globe.apk --release

android-wear: $(shell ${NITLS} -M src/globe.nit android) ${NITC} res/drawable-hdpi/icon.png assets/ld/earth.jpg
	${NITC} src/globe.nit -m android -o bin/planet_wear.apk -D n_parallels=10

res/drawable-hdpi/icon.png: art/icon.png
	mkdir -p res/drawable-ldpi/ res/drawable-mdpi/ res/drawable-hdpi/ \
		res/drawable-xhdpi/ res/drawable-xxhdpi/ res/drawable-xxxhdpi/
	convert -resize 36x36   art/icon.png res/drawable-ldpi/icon.png
	convert -resize 48x48   art/icon.png res/drawable-mdpi/icon.png
	convert -resize 72x72   art/icon.png res/drawable-hdpi/icon.png
	convert -resize 96x96   art/icon.png res/drawable-xhdpi/icon.png
	convert -resize 144x144 art/icon.png res/drawable-xxhdpi/icon.png
	convert -resize 192x192 art/icon.png res/drawable-xxxhdpi/icon.png

assets/ld/earth.jpg:
	mkdir -p assets/ld
	convert -resize 2048x1024 assets/hd/earth.jpg assets/ld/earth.jpg
	convert -resize 2048x1024 assets/hd/seas.jpg assets/ld/seas.jpg
	convert -resize 2048x1024 assets/hd/clouds.png assets/ld/clouds.png
	convert -resize 2048x1024 assets/hd/elevation.jpg assets/ld/elevation.jpg
	convert -resize 2048x1024 assets/hd/lights.jpg assets/ld/lights.jpg
