for x in nitg-g nitg-s nitg-e niti; do
	echo "--engine $x"
	./tests.sh --engine $x "$@"
done
