# This is a full install of Nit on a debian base.
# Full because most dependencies are installed so that most tests can be run

FROM nitlang/nit:latest
MAINTAINER Jean Privat <jean@pryen.org>

# Dependencies for more libs and tests
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
		# Packages needed for lib/
		libcurl4-openssl-dev \
		libegl1-mesa-dev \
		libevent-dev \
		libgles1-mesa-dev \
		libgles2-mesa-dev \
		libgtk-3-dev \
		libncurses5-dev \
		libpq-dev \
		libsdl-image1.2-dev \
		libsdl-ttf2.0-dev \
		libsdl1.2-dev \
		libsdl2-dev \
		libsqlite3-dev \
		libx11-dev \
		libxdg-basedir-dev \
		postgresql \
		# Packages needed for platforms and FFI
		default-jdk \
		libopenmpi-dev \
		clang \
		# TODO neo4j android emscripten test_glsl_validation
	&& rm -rf /var/lib/apt/lists/*

# Run tests
RUN cd /root/nit/tests \
	# Basic tests
	&& ./testfull.sh || true \
	&& rm -rf out/ alt/*.nit \
	# Nitunits
	&& ../bin/nitunit ../lib ../contrib || true \
	&& rm -rf .nitunit \
	&& ccache -C

WORKDIR /root/nit
ENTRYPOINT [ "bash" ]
