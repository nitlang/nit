#!/bin/bash
rm nith nith_? hello_world 2>/dev/null
set -x
set -e
time ../c_src/nith nith.nit -v -o nith
time ./nith nith.nit -v "$@" -o nith_2
time ./nith_2 nith.nit -v "$@" -o nith_3
time ./nith_3 nith.nit -v "$@" -o nith_4
./nith_4 ../examples/hello_world.nit "$@" -o hello_world
./hello_world

