#!/bin/bash
rm nitg nitg.bin hello_world.bin 2>/dev/null
set -x
set -e
time ../bin/nitg nitg.nit -v -o nitg
time ./nitg nitg.nit -v "$@" -o nitg_2
time ./nitg_2 nitg.nit -v "$@" -o nitg_3
time ./nitg_3 nitg.nit -v "$@" -o nitg_4
./nitg_4 ../examples/hello_world.nit "$@" -o hello_world
./hello_world

