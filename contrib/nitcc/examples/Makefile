NITC=../../../bin/nitc
NITCC=../src/nitcc

all: calc minilang blob

calc: calc.sablecc calc.nit
	@echo "*** Example program, calc"
	${NITCC} calc.sablecc
	${NITC} calc.nit -v
	./calc -e "1+2*3-40/5+9------1"

minilang: minilang.sablecc minilang.nit
	@echo "*** Example program, minilang"
	${NITCC} minilang.sablecc
	${NITC} minilang.nit -v
	printf "10\n42\n" | ./minilang minilang.minilang

blob: blob.sablecc blob.nit
	@echo "*** Example program, blob"
	${NITCC} blob.sablecc
	${NITC} blob.nit -v
	./blob -e "abc {{{ 1 }}} de {{{ 2 }}} { 3 }"

clean:
	rm \
		calc minilang blob \
		*.dot *.out *_nodes.nit *_lexer.nit *_parser.nit *_test_parser.nit *_test_parser \
		2>/dev/null || true

.PHONY: tests
