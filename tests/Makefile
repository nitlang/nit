.POSIX:

.PHONY: all
all: niti nitcg nitcs

.PHONY: alot
alot: niti nitcg nitcs nitcs-bm nitcs-phmod nitcs-phand nitce nitce-bm nitce-phmod nitce-phand icode

.PHONY: some
some:
	./tests.sh base_compile.nit base_attr.nit base_gen.nit test_gen_inh.nit bench_fib.nit example_objet.nit

.PHONY: niti
niti:
	./testfull.sh --engine niti

.PHONY: nitcg
nitcg:
	./testfull.sh --engine nitcg

.PHONY: nitcs
nitcs:
	./testfull.sh --engine nitcs

.PHONY: nitcs-bm
nitcs-bm:
	./testfull.sh --engine nitcs -o --bm-typing

.PHONY: nitcs-phmod
nitcs-phmod:
	./testfull.sh --engine nitcs -o --phmod-typing

.PHONY: nitcs-phand
nitcs-phand:
	./testfull.sh --engine nitcs -o --phand-typing

.PHONY: nitce
nitce:
	./testfull.sh --engine nitce

.PHONY: nitce-bm
nitce-bm:
	./testfull.sh --engine nitce -o --bm-typing

.PHONY: nitce-phmod
nitce-phmod:
	./testfull.sh --engine nitce -o --phmod-typing

.PHONY: nitce-phand
nitce-phand:
	./testfull.sh --engine nitce -o --phand-typing

.PHONY: failed
failed:
	@{ [ ! -s errlist ] && echo 'No failed tests to execute'; } || true
	@{ [ -s errlist ] && ./tests.sh `cat errlist | sort -u`; } || true

.PHONY: store
store:
	./store_save.sh *.nit

.PHONY: clean distclean mostlyclean maintainer-clean
clean distclean mostlyclean maintainer-clean:
	rm -rf -- ./out/ ./alt/*alt* ./nit_compile ./errlist ./errlist.bak ./*.xml
