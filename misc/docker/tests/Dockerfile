# This is a full install of Nit on a debian base.
# Full because most dependencies are installed so that most tests can be run

FROM nitlang/nit:latest-full
MAINTAINER Jean Privat <jean@pryen.org>

# Run tests
RUN cd /nit/tests \
	# Basic tests
	&& ./testfull.sh || true \
	&& rm -rf out/ alt/*.nit \
	# Nitunits
	&& ../bin/nitunit ../lib ../contrib || true \
	&& rm -rf .nitunit \
	&& ccache -C
