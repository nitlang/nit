NITC=../../bin/nitc
NITCC=../nitcc/src/nitcc

all: simplan

simplan: simplan.nit simplan_parser.nit
	${NITC} simplan.nit

check: simplan
	./simplan prob1.txt | tee plan1.txt.out
	./simplan prob1.txt plan1.txt
	diff plan1.txt plan1.txt.out

simplan_parser.nit: ${NITCC} simplan.sablecc
	${NITCC} simplan.sablecc

${NITCC}:
	${MAKE} -C ../nitcc
