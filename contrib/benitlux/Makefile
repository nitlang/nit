SERVER ?= localhost:8080

all: server

server: bin/benitlux_daily bin/benitlux_web
bin/benitlux_daily: $(shell ../../bin/nitls -M src/server/benitlux_daily.nit)
	mkdir -p bin/
	../../bin/nitc -o $@ src/server/benitlux_daily.nit

bin/benitlux_web: $(shell ../../bin/nitls -M src/server/server.nit) src/server/benitlux_restful.nit
	mkdir -p bin/
	../../bin/nitc -o $@ src/server/server.nit -D iface=$(SERVER)

pre-build: src/server/benitlux_restful.nit
src/server/benitlux_restful.nit: $(shell ../../bin/nitls -M src/server/benitlux_controller.nit)
	../../bin/nitrestful -o $@ src/server/benitlux_controller.nit

# ---
# Report

bin/report: $(shell ../../bin/nitls -M src/report.nit)
	../../bin/nitc -o bin/report src/report.nit

report: bin/report
	bin/report
