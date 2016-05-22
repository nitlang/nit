all: xymus.net

xymus.net: ../benitlux/src/server/benitlux_restful.nit $(shell ../../bin/nitls -M xymus_net.nit)
	../../bin/nitc -o $@ xymus_net.nit

../benitlux/src/server/benitlux_restful.nit:
	make -C ../benitlux src/server/benitlux_restful.nit

pre-build: ../benitlux/src/server/benitlux_restful.nit
