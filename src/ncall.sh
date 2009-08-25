time make -C parser && time ./nc -W nitc && time ./nc2 -W -v "$@" nitc && time ./nc3 -W -v "$@" nitc && ./nc4 "$@" ../examples/hello_world.nit && ./hello_world_4
