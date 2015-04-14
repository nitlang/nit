bin/header_keeper:
	mkdir -p bin
	../../bin/nitc --dir bin src/header_keeper.nit

check: tests
tests: bin/header_keeper
	gcc -E /usr/include/SDL/SDL_image.h | bin/header_keeper SDL_image.h
	gcc -E /usr/include/GLES2/gl2.h | bin/header_keeper gl2.h
