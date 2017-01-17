file= fannkuchredux

default: threaded

threaded:
	nitc $(file).nit

test:
	./$(file) 7
bm:
	time ./$(file) 12

clean:
	rm $(file)
	rm actors_$(file).nit
