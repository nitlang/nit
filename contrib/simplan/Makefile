NITC=nitc
NITCC=../nitcc/src/nitcc

all: simplan

pre-build: simplan_parser.nit

simplan: simplan.nit simplan_parser.nit
	${NITC} simplan.nit

check: simplan
	./simplan prob1.txt | tee plan1.txt.out
	./simplan prob1.txt plan1.txt
	diff plan1.txt plan1.txt.out

simplan_parser.nit: ${NITCC} simplan.sablecc
	${NITCC} simplan.sablecc

${NITCC}:
	cd ../nitcc && $(MAKE)
