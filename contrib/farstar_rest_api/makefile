COMPILER = nitc
TEST_COMPILE = nitunit
EXEC = farstar_server_rest_api
FILE = ./src/server.nit
TEST = ./test/farstar_tests.nit
NIT_SERV_CONTAINER_NAME = $(shell $(shell echo docker ps) | grep -o farstarrestapi_nit-rest-api.[0-9])

default: build

compile:
	$(COMPILER) $(FILE) -o $(EXEC)

build: compile
	./$(EXEC)

tests:
	nitunit ./

# to run on the host machine ...
acceptance_tests:
	docker run -it --rm -v $(PWD)/test/acceptance/user-files/simulations/:/opt/gatling/user-files/simulations/ \
											-v $(PWD)/test/acceptance/results/:/opt/gatling/results/ \
											--link $(NIT_SERV_CONTAINER_NAME):nit-serv \
											denvazh/gatling

clean:
	rm -r $(EXEC)
