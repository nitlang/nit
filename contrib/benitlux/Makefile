all: server

server:
	mkdir -p bin/
	../../bin/nitc --dir bin/ src/benitlux_daily.nit src/benitlux_web.nit

src/benitlux_serial.nit:
	../../bin/nitserial -o $@ src/benitlux_web.nit

bin/report: $(shell ../../bin/nitls -M src/report.nit)
	../../bin/nitc -o bin/report src/report.nit

report: bin/report
	bin/report
