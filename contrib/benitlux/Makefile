SERVER ?= localhost:8080

all: server

server: bin/benitlux_daily bin/benitlux_web
bin/benitlux_daily: $(shell ../../bin/nitls -M src/benitlux_daily.nit)
	mkdir -p bin/
	../../bin/nitc -o $@ src/benitlux_daily.nit

bin/benitlux_web: $(shell ../../bin/nitls -M src/benitlux_web.nit) src/benitlux_restful.nit
	mkdir -p bin/
	../../bin/nitc -o $@ src/benitlux_web.nit -D iface=$(SERVER)

pre-build: src/benitlux_restful.nit
src/benitlux_restful.nit: $(shell ../../bin/nitls -M src/benitlux_controller.nit)
	../../bin/nitrestful -o $@ src/benitlux_controller.nit

# ---
# Report

bin/report: $(shell ../../bin/nitls -M src/report.nit)
	../../bin/nitc -o bin/report src/report.nit

report: bin/report
	bin/report
