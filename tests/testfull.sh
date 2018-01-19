#!/bin/sh
./listfull.sh | xargs -E '' -- ./tests.sh "$@"
