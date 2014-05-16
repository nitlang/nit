#!/bin/bash
rm nitg nitg_? hello_world 2>/dev/null
set -x
set -e
make -C ../c_src
sh git-gen-version.sh
time ../c_src/nitg nitg.nit -v -o nitg_0
time ./nitg_0 nitg.nit -v "$@" -o nitg_2
cp nitg_2 nitg
time ./nitg_2 nitg.nit -v "$@" -o nitg_3
time ./nitg_3 nitg.nit -v "$@" -o nitg_4
./nitg_4 ../examples/hello_world.nit "$@" -o hello_world
./hello_world

# save the last one; may be useful...
cp ./nitg_4 nitg.good

