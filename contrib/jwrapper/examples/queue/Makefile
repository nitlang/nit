# Nit test program
user_test: queue.nit $(shell ../../../../bin/nitls -M user_test.nit) ../../../../bin/nitc ../../bin/jwrapper
	CLASSPATH=`pwd` ../../../../bin/nitc user_test.nit

	# Manually add our class file to the Jar for easy access
	jar -uf user_test.jar Queue.class

# Compiled Java class
Queue.class: Queue.java
	javac Queue.java

# The Nit wrapper to the Java class
queue.nit: Queue.class
	../../bin/jwrapper Queue.class -o queue.nit -p "Java" -i auto

# Test
check: user_test
	# Execute test
	./user_test > user_test.res

	# Compare the result with the expected
	diff user_test.sav user_test.res
