# This is a basic install of Nit on a debian base.

FROM debian:jessie
MAINTAINER Jean Privat <jean@pryen.org>

# Install dependencies
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
		# Recomanded builds pakages
		build-essential \
		ccache \
		libgc-dev \
		graphviz \
		libunwind-dev \
		pkg-config \
		# Get the code!
		git \
		ca-certificates \
		curl \
		# For nit manpages :)
		man \
	&& rm -rf /var/lib/apt/lists/*

# Clone and compile
RUN git clone https://github.com/nitlang/nit.git /root/nit \
	&& cd /root/nit \
	&& make \
	&& . misc/nit_env.sh install \
	# Clean and reduce size
	&& strip c_src/nitc bin/nit* \
	&& ccache -C \
	&& rm -rf .git

ENV NIT_DIR /root/nit
ENV PATH $NIT_DIR/bin:$PATH
WORKDIR $NIT_DIR