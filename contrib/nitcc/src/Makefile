NITC=../../../bin/nitc

all: nitcc calc minilang blob

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

calc: nitcc ../examples/calc.sablecc ../examples/calc.nit
	@echo "*** Example program, calc"
	cd ../examples && ../src/nitcc calc.sablecc
	${NITC} ../examples/calc.nit -v
	./calc -e "1+2*3-40/5+9------1"

minilang: nitcc ../examples/minilang.sablecc ../examples/minilang.nit
	@echo "*** Example program, minilang"
	cd ../examples && ../src/nitcc minilang.sablecc
	${NITC} ../examples/minilang.nit -v
	printf "10\n42\n" | ./minilang ../examples/minilang.minilang

blob: nitcc ../examples/blob.sablecc ../examples/blob.nit
	@echo "*** Example program, blob"
	cd ../examples && ../src/nitcc blob.sablecc
	${NITC} ../examples/blob.nit -v
	./blob -e "abc {{{ 1 }}} de {{{ 2 }}} { 3 }"

check: tests
tests:
	cd ../tests && ./run

clean:
	rm -r \
		*.dot *.out \
		nitcc_lexer.nit nitcc_parser.nit nitcc_test_parser.nit nitcc_parser_gen \
		nitcc0 nitcc1 \
		calc minilang blob \
		../examples/*.dot ../examples/*.out ../examples/*_lexer.nit ../examples/*_parser.nit ../examples/*_test_parser.nit \
		2>/dev/null || true

.PHONY: tests
