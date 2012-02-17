all:
	./git-gen-version.sh
	rubber --pdf --inplace nitreference/nitreference.tex
	rubber --pdf --inplace developpez/nit.tex

clean:
	rm nit_version.sty 2> /dev/null || true
	rubber --clean --inplace nitreference/nitreference.tex
	rubber --clean --inplace developpez/nit.tex

distclean: clean
	rm nitreference/nitreference.pdf developpez/nit.pdf 2> /dev/null || true
