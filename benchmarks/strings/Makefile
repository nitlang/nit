all:	basic compiler concat iter substr index

concat:
	./bench_strings.sh concat 1000000 15 10 2 20

substr:
	./bench_strings.sh substring 2500000 50 25 200

iter:
	./bench_strings.sh iteration 1000000 10 10 100

index:
	./bench_strings.sh index 10000000 50 25 200

check: basic
	./bench_strings.sh concat 10000 15 10 2 20
	./bench_strings.sh substring 25000 50 25 200
	./bench_strings.sh iteration 10000 10 10 100
	./bench_strings.sh index 100000 50 25 200

basic:
	./bench_strings.sh basic

compiler:
	./bench_strings.sh compiler

clean:
	rm -rf out/ 2>/dev/null
