# This is a full install of Nit on a debian base.
# Full because most dependencies are installed so that most tests can be run

FROM nitlang/nit:latest
MAINTAINER Jean Privat <jean@pryen.org>

# Dependencies for more libs and tests
RUN dpkg --add-architecture i386 \
	&& apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
		# Packages needed for lib/
		libegl1-mesa-dev \
		libevent-dev \
		libgles1-mesa-dev \
		libgles2-mesa-dev \
		libgtk-3-dev \
		libgmp-dev \
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
		postgresql \
		# Packages needed for contrib, platforms and FFI
		ant \
		clang \
		cmake \
		default-jdk \
		file \
		inkscape \
		libopenmpi-dev \
		unzip \
		zipalign \
		# Android
		libc6:i386 \
		libstdc++6:i386 \
		zlib1g:i386 \
		# TODO neo4j emscripten test_glsl_validation
	&& rm -rf /var/lib/apt/lists/*

# Install android sdk/ndk
RUN mkdir -p /opt \
	&& cd /opt \
	# Android SDK
	&& curl https://dl.google.com/android/repository/sdk-tools-linux-3859397.zip -o android-sdk-linux.zip \
	&& unzip android-sdk-linux.zip -d android-sdk-linux \
	&& rm android-sdk-linux.zip \
	&& chmod -R a+X /opt \
	&& yes | android-sdk-linux/tools/bin/sdkmanager --licenses \
	&& android-sdk-linux/tools/bin/sdkmanager "build-tools;27.0.0" "cmake;3.6.4111459" ndk-bundle platform-tools tools

# Download gradlew and bdwgc for Android
RUN /nit/share/android-gradlew/gradlew \
	&& /nit/share/android-bdwgc/setup.sh

# Install OpenGL validator
RUN git clone https://github.com/KhronosGroup/glslang.git \
	&& mkdir -p glslang/build \
	&& cd glslang/build \
	&& cmake .. \
	&& make \
	&& make

# Setup environment variables
ENV ANDROID_HOME=/opt/android-sdk-linux/
ENV JAVA_HOME=/usr/lib/jvm/default-java/
ENV JNI_LIB_PATH=$JAVA_HOME/jre/lib/amd64/server/
ENV LD_LIBRARY_PATH=$JAVA_HOME/jre/lib/amd64/server/
