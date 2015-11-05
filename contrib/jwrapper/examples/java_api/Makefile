RT_JAR ?= /usr/lib/jvm/default-java/jre/lib/rt.jar

all: api_user

java_api.nit:
	mkdir -p tmp
	../../bin/jwrapper -vv -u comment -o java_api.nit $(RT_JAR) \
		-r "^java.(lang|util|io)" -i ../../../../lib/java/collections.nit
	echo "+ Disabled functions: `grep '#\s*fun' $@ | wc -l` / `grep '^\s*fun' $@ | wc -l`"

api_user: java_api.nit
	# Using --semi-global makes it much faster
	time -f "%E k:%S u:%U" ../../../../bin/nitc -v api_user.nit --semi-global

check: api_user
	./api_user > api_user.res
	diff api_user.sav api_user.res

full_java_api.nit:
	mkdir -p tmp
	../../bin/jwrapper -vv -u comment -o full_java_api.nit $(RT_JAR) \
		-r "^(java|org)" -i ../../../../lib/java/collections.nit
	echo "+ Disabled functions: `grep '#\s*fun' $@ | wc -l` / `grep '^\s*fun' $@ | wc -l`"

	# Force compilation of the Java code
	echo 'fun foo in "Java" `{  `}; foo' >> full_java_api.nit

	# This may take a while...
	time -f "%E k:%S u:%U" ../../../../bin/nitc -v full_java_api.nit --no-cc

	# Don't compile the C, only the Java
	make -C nit_compile Nit_full_java_api.class

.PHONY: api_user java_api.nit
