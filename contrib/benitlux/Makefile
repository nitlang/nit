all: server

server:
	mkdir -p bin/
	../../bin/nitc --dir bin/ src/benitlux_daily.nit src/benitlux_web.nit

src/benitlux_serial.nit:
	../../bin/nitserial -o $@ src/benitlux_web.nit
