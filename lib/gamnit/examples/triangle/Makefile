NITC=../../../../bin/nitc
NITLS=../../../../bin/nitls

bin/standalone_triangle: $(shell ${NITLS} -M src/standalone_triangle.nit linux) ${NITC}
	${NITC} src/standalone_triangle.nit -m linux -o $@
