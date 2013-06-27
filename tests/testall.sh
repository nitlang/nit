for x in nitc nitg nitg-s nitg-e niti; do
	echo "--engine $x"
	./tests.sh --engine $x "$@"
done
