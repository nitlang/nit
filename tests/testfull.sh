#!/bin/sh
./listfull.sh | xargs -E '' -x -- ./tests.sh "$@"
