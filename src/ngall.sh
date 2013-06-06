#!/bin/bash
rm nitg nitg.bin hello_world.bin 2>/dev/null
#test -f nitc_3 || { ./nitc_3 ; exit }
set -x
set -e
time ./nitc_3 -O nitg.nit -v
time ./nitg nitg.nit -v
time ./nitg.bin nitg.nit -v
time ./nitg.bin nitg.nit -v
./nitg.bin ../examples/hello_world.nit
./hello_world.bin

