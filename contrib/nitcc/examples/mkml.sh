set -e
set -x
../nitcc minilang.sablecc
../../../bin/nitc minilang.nit -v -I ..
./minilang minilang.minilang
