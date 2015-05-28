bin/header_static:
	mkdir -p bin
	../../../bin/nitc --dir bin src/header_static.nit

tests: bin/header_static
	cat CGGeometry.h | bin/header_static > static_CGGeometry.h
	cat NSObject.h | bin/header_static > static_NSObject.h
