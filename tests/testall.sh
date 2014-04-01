for x in nith-g nith-s nith-e niti; do
	echo "--engine $x"
	./tests.sh --engine $x "$@"
done
