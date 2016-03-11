all: server

pre-build: src/benitlux_serial.nit

bin/benitlux_daily: $(shell ../../bin/nitls -M src/benitlux_daily.nit)
	mkdir -p bin/
	../../bin/nitc -o $@ src/benitlux_daily.nit

bin/benitlux_web: $(shell ../../bin/nitls -M src/benitlux_web.nit)
	mkdir -p bin/
	../../bin/nitc -o $@ src/benitlux_web.nit

server: bin/benitlux_daily bin/benitlux_web

src/benitlux_serial.nit:
	../../bin/nitserial -o $@ src/benitlux_web.nit

# ---
# Report

bin/report: $(shell ../../bin/nitls -M src/report.nit)
	../../bin/nitc -o bin/report src/report.nit

report: bin/report
	bin/report
