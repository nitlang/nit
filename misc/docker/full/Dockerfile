# This is a full install of Nit on a debian base.
# Full because most dependencies are installed so that most tests can be run

FROM nitlang/nit:latest
MAINTAINER Jean Privat <jean@pryen.org>

# Dependencies for more libs and tests
RUN dpkg --add-architecture i386 \
	&& apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
		# Packages needed for lib/
		libcurl4-openssl-dev \
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
	&& curl https://dl.google.com/android/android-sdk_r24.4.1-linux.tgz -o android-sdk-linux.tgz \
	&& tar xzf android-sdk-linux.tgz \
	&& rm android-sdk-linux.tgz \
	&& echo y | android-sdk-linux/tools/android update sdk -a --no-ui --filter \
		# Hardcode minimal known working things
		platform-tools,build-tools-22.0.1,android-22,android-21,android-19,android-16,android-15,android-10 \
	# Android NDK
	&& curl http://dl.google.com/android/repository/android-ndk-r11c-linux-x86_64.zip -o android-ndk.zip \
	&& unzip -q android-ndk.zip \
	&& chmod -R a+X /opt \
	&& ln -s android-ndk-r11c android-ndk \
	&& rm android-ndk.zip \
	&& printf "PATH=$PATH:$ANDROID_HOME/tools:$ANDROID_HOME/platform-tools:$ANDROID_NDK\nexport PATH\n" >> "/etc/profile.d/android.sh"

# Install OpenGL validator
RUN git clone https://github.com/KhronosGroup/glslang.git \
	&& mkdir -p glslang/build \
	&& cd glslang/build \
	&& cmake .. \
	&& make \
	&& make

# Setup environment variables
ENV ANDROID_HOME /opt/android-sdk-linux
ENV ANDROID_NDK /opt/android-ndk
ENV PATH $PATH:$ANDROID_HOME/tools:$ANDROID_HOME/platform-tools:$ANDROID_NDK
ENV JAVA_HOME=/usr/lib/jvm/default-java/
ENV JNI_LIB_PATH=$JAVA_HOME/jre/lib/amd64/server/
ENV LD_LIBRARY_PATH=$JAVA_HOME/jre/lib/amd64/server/
