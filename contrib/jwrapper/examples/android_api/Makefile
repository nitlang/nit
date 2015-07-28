ANDROID_JAR ?= ~/sdks/android-sdk/platforms/android-10/android.jar

all: android_api.nit

java_api.nit:
	mkdir -p tmp
	../../bin/jwrapper -vv -u comment -o java_api.nit -r "^(java|javax|junit|org)" $(ANDROID_JAR) -i ../../../../lib/java/collections.nit
	echo "+ Disabled functions: `grep '#\s*fun' $@ | wc -l` / `grep '^\s*fun' $@ | wc -l`"

android_api.nit: java_api.nit
	../../bin/jwrapper -vv -u comment -o android_api.nit -r "^(android|com.android)" -i java_api.nit $(ANDROID_JAR) -i ../../../../lib/java/collections.nit
	echo "+ Disabled functions: `grep '#\s*fun' $@ | wc -l` / `grep '^\s*fun' $@ | wc -l`"

	# Insert an import between the 2 modules
	sed -i -e "s/import java/import java\nimport java_api/" android_api.nit

check: android_api.nit
	../../../../bin/nitpick android_api.nit

.PHONY: android_api.nit java_api.nit
