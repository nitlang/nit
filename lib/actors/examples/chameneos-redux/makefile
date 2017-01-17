file= chameneosredux

default: threaded

threaded:
	nitc $(file).nit

test:
	./$(file) 1000

bm:
	time ./$(file) 50000000

clean:
	rm $(file)
	rm actors_$(file).nit
