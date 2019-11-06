# This is a basic install of Nit on a debian base.

FROM debian:stretch
MAINTAINER Jean Privat <jean@pryen.org>

# Install dependencies
RUN dpkg --add-architecture i386 \
	&& apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
		# Recomanded builds pakages
		build-essential \
		ccache \
		libgc-dev \
		graphviz \
		libunwind-dev \
		pkg-config \
		libicu-dev \
		# Get the code!
		git \
		ca-certificates \
		curl \
		libcurl4-openssl-dev \
		# For nit manpages :)
		man \
		# Get pip3 for junit2html
		python3-dev \
		python3-pip \
		python3-setuptools \
		python3-wheel \
		# Packages needed for lib/
		gettext \
		libegl1-mesa-dev \
		libevent-dev \
		libgles1-mesa-dev \
		libgles2-mesa-dev \
		libgtk-3-dev \
		libgmp-dev \
		libmongoc-dev \
		libbson-dev libssl-dev \
		libncurses5-dev \
		libpq-dev \
		libreadline-dev \
		libsdl-image1.2-dev \
		libsdl-ttf2.0-dev \
		libsdl1.2-dev \
		libsdl2-dev \
		libsdl2-image-dev \
		libsdl2-mixer-dev \
		libsqlite3-dev \
		libx11-dev \
		libxdg-basedir-dev \
		netcat \
		psmisc \
		# Packages needed for contrib, platforms and FFI
		ant \
		clang \
		cmake \
		default-jdk \
		file \
		gnupg \
		gnuplot-nox \
		imagemagick \
		inkscape \
		libopenmpi-dev \
		time \
		unzip \
		valgrind \
		zipalign \
		# Android
		libc6:i386 \
		libstdc++6:i386 \
		zlib1g:i386 \
		# TODO neo4j mongodb neo4j emscripten test_glsl_validation
	&& curl -sL https://deb.nodesource.com/setup_8.x | bash - \
	&& apt-get install -y nodejs \
	&& rm -rf /var/lib/apt/lists/*

# Install OpenGL validator
RUN git clone https://github.com/KhronosGroup/glslang.git --depth=1 \
	&& mkdir -p glslang/build \
	&& cd glslang/build \
	&& cmake .. \
	&& make \
	&& make install

# Install android sdk/ndk
RUN mkdir -p /opt \
	&& cd /opt \
	# Android SDK
	&& curl https://dl.google.com/android/repository/sdk-tools-linux-3859397.zip -o android-sdk-linux.zip \
	&& unzip -q android-sdk-linux.zip -d android-sdk-linux \
	# Download a specific ndk version because old versions are not available trough sdkmanager
	&& curl https://dl.google.com/android/repository/android-ndk-r17c-linux-x86_64.zip -o android-ndk-linux.zip \
	&& unzip -q android-ndk-linux.zip \
	&& mv android-ndk-r17c android-sdk-linux/ndk-bundle \
	&& rm android-sdk-linux.zip android-ndk-linux.zip
RUN cd /opt \
	&& yes | android-sdk-linux/tools/bin/sdkmanager "build-tools;27.0.0" "cmake;3.6.4111459" platform-tools tools  --verbose\
	&& yes | android-sdk-linux/tools/bin/sdkmanager --licenses --verbose
# TODO: predownload bwdgc and gradle?

# Setup environment variables
ENV ANDROID_HOME=/opt/android-sdk-linux/
ENV JAVA_HOME=/usr/lib/jvm/default-java/
ENV JNI_LIB_PATH=$JAVA_HOME/jre/lib/amd64/server/
ENV LD_LIBRARY_PATH=$JAVA_HOME/jre/lib/amd64/server/

# Used by CI to render junit files to html
RUN pip3 install junit2html

#  Prepare to install npm (npm is not packaged for debian:stretch)
RUN npm install pug-cli -g

# Some tools, like gradle, need an explitit UTF8 environement
ENV LANG C.UTF-8
