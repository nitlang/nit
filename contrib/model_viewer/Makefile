NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/model_viewer

bin/model_viewer: $(shell ${NITLS} -M src/model_viewer.nit linux) ${NITC}
	${NITC} src/model_viewer.nit -m linux -o $@

check: bin/model_viewer
	NIT_TESTING=true bin/model_viewer

# ---
# Android

android: bin/model_viewer.apk
bin/model_viewer.apk: $(shell ${NITLS} -M src/model_viewer.nit android) ${NITC} res/drawable-hdpi/icon.png
	${NITC} src/model_viewer.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/model_viewer.nit android) ${NITC} res/drawable-hdpi/icon.png
	${NITC} src/model_viewer.nit -m android -o bin/model_viewer.apk --release

res/drawable-hdpi/icon.png: art/icon.png
	make -C ../inkscape_tools/
	mkdir -p res/drawable-ldpi/ res/drawable-mdpi/ res/drawable-hdpi/ \
		res/drawable-xhdpi/ res/drawable-xxhdpi/ res/drawable-xxxhdpi/
	convert -resize 36x36   art/icon.png res/drawable-ldpi/icon.png
	convert -resize 48x48   art/icon.png res/drawable-mdpi/icon.png
	convert -resize 72x72   art/icon.png res/drawable-hdpi/icon.png
	convert -resize 96x96   art/icon.png res/drawable-xhdpi/icon.png
	convert -resize 144x144 art/icon.png res/drawable-xxhdpi/icon.png
	convert -resize 192x192 art/icon.png res/drawable-xxxhdpi/icon.png

bin/model_viewer_vr.apk: $(shell ${NITLS} -M src/model_viewer.nit android) ${NITC} res/drawable-hdpi/icon.png libs/cardboard.jar
	${NITC} src/model_viewer.nit -m android -m ../../lib/gamnit/depth/vr.nit -o $@

libs/cardboard.jar:
	curl --progress-bar -o libs/cardboard.jar \
	https://raw.githubusercontent.com/googlesamples/cardboard-java/master/CardboardSample/libs/cardboard.jar
