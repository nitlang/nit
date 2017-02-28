file= mandelbrot

default: threaded

threaded:
	nitc $(file).nit

test:
	./$(file) 200

bm:
	time ./$(file) 16000

clean:
	rm $(file)
	rm actors_$(file).nit
