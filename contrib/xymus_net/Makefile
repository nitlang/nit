all: xymus.net

xymus.net: ../benitlux/src/server/benitlux_restful.nit $(shell nitls -M xymus_net.nit)
	nitc -o $@ xymus_net.nit

../benitlux/src/server/benitlux_restful.nit:
	make -C ../benitlux src/server/benitlux_restful.nit

pre-build: ../benitlux/src/server/benitlux_restful.nit
