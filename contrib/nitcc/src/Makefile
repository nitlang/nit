NITC=../../../bin/nitc

all: nitcc

nitcc0:
	@echo "*** Compile the primitive nitcc --- bootstrap level 0"
	${NITC} ../bootstrap/nitcc.nit -v -o nitcc0

nitcc1: nitcc0 nitcc.nit nitcc.sablecc
	@echo "*** Compile the intermediate nitcc --- bootstrap level 1"
	./nitcc0 nitcc.sablecc
	${NITC} nitcc.nit -v -o nitcc1

nitcc: nitcc1 nitcc.nit nitcc.sablecc
	@echo "*** Compile the final nitcc --- bootstrap level 2"
	./nitcc1 nitcc.sablecc
	${NITC} nitcc.nit -v

check: examples tests
tests:
	cd ../tests && ./run
examples:
	$(MAKE) -C ../example

clean:
	rm -r \
		*.dot *.out \
		nitcc_nodes.nit nitcc_lexer.nit nitcc_parser.nit nitcc_test_parser.nit \
		nitcc0 nitcc1 \
		2>/dev/null || true

.PHONY: tests
