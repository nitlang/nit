bin/mpi_simple:
	mkdir -p bin/
	../../bin/nitg src/mpi_simple.nit -o bin/mpi_simple

run:
	mpiexec.openmpi --hostfile hosts bin/mpi_simple

.PHONY: bin/mpi_simple
