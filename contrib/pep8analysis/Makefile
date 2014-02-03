bin/pep8analysis:
	mkdir -p bin
	../../bin/nitg --global -o bin/pep8analysis src/pep8analysis.nit

doc/index.html:
	../../bin/nitdoc src/pep8analysis.nit

tests: bin/pep8analysis
	bin/pep8analysis --cfg-long tests/privat/*.pep tests/laf/*.pep tests/terrasa/*.pep

.PHONY: bin/pep8analysis tests doc/index.html
