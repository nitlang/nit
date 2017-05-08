
all: niti nitcg nitcs

alot: niti nitcg nitcs nitcs-bm nitcs-phmod nitcs-phand nitce nitce-bm nitce-phmod nitce-phand icode

some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

niti:
	./testfull.sh --engine niti

nitcg:
	./testfull.sh --engine nitcg

nitcs:
	./testfull.sh --engine nitcs

nitcs-bm:
	./testfull.sh --engine nitcs -o --bm-typing

nitcs-phmod:
	./testfull.sh --engine nitcs -o --phmod-typing

nitcs-phand:
	./testfull.sh --engine nitcs -o --phand-typing

nitce:
	./testfull.sh --engine nitce

nitce-bm:
	./testfull.sh --engine nitce -o --bm-typing

nitce-phmod:
	./testfull.sh --engine nitce -o --phmod-typing

nitce-phand:
	./testfull.sh --engine nitce -o --phand-typing

failed:
	@[ ! -s errlist ] && echo 'No failed tests to execute' ; true
	@[ -s errlist ] && ./tests.sh `cat errlist | sort -u` ; true

store:
	./store_save.sh *.nit

clean:
	rm -r -f -- out/ alt nit_compile errlist errlist.bak *.xml 2> /dev/null || true
