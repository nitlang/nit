time make -C parser && time ./nc nitc && time ./nc2 "$@" nitc && time ./nc3 "$@" nitc && ./nc4 "$@" ../examples/hello_world.nit && ./hello_world_4
