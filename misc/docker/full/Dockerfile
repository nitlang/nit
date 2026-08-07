# This is a full install of Nit on a debian base.
# Full because most dependencies are installed so that most tests can be run

FROM nitlang/nit:latest
LABEL maintainer="Jean Privat <jean@pryen.org>"

# Dependencies for more libs and tests
RUN dpkg --add-architecture i386 \
	&& apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
		# Packages needed for lib/
		libegl1-mesa-dev \
		libevent-dev \
		libgles-dev \
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
		glslang-tools \
		inkscape \
		libopenmpi-dev \
		unzip \
		zipalign \
		# Android
		libc6:i386 \
		libstdc++6:i386 \
		zlib1g:i386 \
		# TODO neo4j emscripten
	&& rm -rf /var/lib/apt/lists/*

# Install android SDK and NDK.
RUN mkdir -p /opt \
	&& cd /opt \
	&& curl -fL https://dl.google.com/android/repository/commandlinetools-linux-11076708_latest.zip -o cmdline-tools.zip \
	&& unzip cmdline-tools.zip \
	&& rm cmdline-tools.zip \
	&& chmod -R a+X /opt \
	&& yes | cmdline-tools/bin/sdkmanager --sdk_root=/opt/android-sdk-linux --licenses \
	&& cmdline-tools/bin/sdkmanager --sdk_root=/opt/android-sdk-linux "platforms;android-33" "build-tools;30.0.3" "cmake;3.22.1" "ndk;25.2.9519653" platform-tools

# Download gradlew and bdwgc for Android
RUN /nit/share/android-gradlew/gradlew \
	&& /nit/share/android-bdwgc/setup.sh

# Setup environment variables
ENV ANDROID_HOME=/opt/android-sdk-linux/
ENV JAVA_HOME=/usr/lib/jvm/default-java/
ENV JNI_LIB_PATH=$JAVA_HOME/jre/lib/amd64/server/
ENV LD_LIBRARY_PATH=$JAVA_HOME/jre/lib/amd64/server/
