NITC=nitc
NITLS=nitls

all: bin/model_viewer

bin/model_viewer: $(shell ${NITLS} -M src/model_viewer.nit linux)
	${NITC} src/model_viewer.nit -m linux -o $@

check: bin/model_viewer
	NIT_TESTING=true bin/model_viewer

# ---
# Android

android: bin/model_viewer.apk
bin/model_viewer.apk: $(shell ${NITLS} -M src/model_viewer.nit -m android) android/res/
	${NITC} src/model_viewer.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/model_viewer.nit -m android) android/res/
	${NITC} src/model_viewer.nit -m android -o bin/model_viewer.apk --release

android/res/: art/icon.png
	make -C ../inkscape_tools/
	mkdir -p android/res/drawable-ldpi/ android/res/drawable-mdpi/ android/res/drawable-hdpi/ \
		android/res/drawable-xhdpi/ android/res/drawable-xxhdpi/ android/res/drawable-xxxhdpi/
	convert -resize 36x36   art/icon.png android/res/drawable-ldpi/icon.png
	convert -resize 48x48   art/icon.png android/res/drawable-mdpi/icon.png
	convert -resize 72x72   art/icon.png android/res/drawable-hdpi/icon.png
	convert -resize 96x96   art/icon.png android/res/drawable-xhdpi/icon.png
	convert -resize 144x144 art/icon.png android/res/drawable-xxhdpi/icon.png
	convert -resize 192x192 art/icon.png android/res/drawable-xxxhdpi/icon.png

bin/model_viewer_vr.apk: $(shell ${NITLS} -M src/model_viewer.nit android) android/res/ android/libs/cardboard.jar
	${NITC} src/model_viewer.nit -m android -m ../../lib/gamnit/depth/vr.nit -o $@

android/libs/cardboard.jar:
	mkdir -p android/libs
	curl --progress-bar -o android/libs/cardboard.jar \
	https://raw.githubusercontent.com/googlevr/gvr-android-sdk/e226f15c/CardboardSample/libs/cardboard.jar

# ---
# iOS

ios: bin/model_viewer.app
bin/model_viewer.app: $(shell ${NITLS} -M src/model_viewer.nit -m ios)
	${NITC} src/model_viewer.nit -m ios -o $@ --compile-dir nit_compile
