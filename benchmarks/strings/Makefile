all:	concat iter substr array

concat:
	./bench_strings.sh cct 10 10000000 1

substr:
	./bench_strings.sh substr 10 10000000 10

iter:
	./bench_strings.sh iter 10 10000000 10

array:
	./bench_strings.sh array 10 10000000 10

clean:
	rm -rf arraytos/ string_concat/ string_iter/ string_substr/ 2>/dev/null
