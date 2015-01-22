#!/bin/bash
# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Fetch, configure and build libgc (the Boehm GC) for Android
#
# Will produce libgc.a which can be linked to Android NDK applications.
#
# The `ndk-build` tool from the Android NDK must be in PATH before
# invoking this tool. It will be used to guess the path to the NDK.
#
# Alternatively, you may define a custom path to the NDK by setting
# `ANDROID_NDK`.

# If ANDROID_NDK is not set, get it from the path to `ndk-build`
if test -z "$ANDROID_NDK"; then
	ndk_build_path=`which ndk-build`
	if test $? -ne 0; then
		echo "Error: ndk-build from the Android NDK must be in your PATH"
		exit 1
	fi

	ANDROID_NDK=`dirname $ndk_build_path`
fi

# Get the first platform available (it shouldn't change much, but it may
# have to be adjusted)
for platform in `echo $ANDROID_NDK/platforms/android-*/arch-arm`; do
	SYS_ROOT=$platform
	break
done

if test -z "$SYS_ROOT"; then
	echo "Error: could not an Android platform in the NDK, define ANDROID_NDK to the correct path."
	exit 1
fi

# Information on the currently targeted libgc and libatomic_ops source URL
# These may have to be updated according to server-side changes and newer
# versions of the Boehm GC.
libgc_url=http://www.hboehm.info/gc/gc_source/gc-7.4.0.tar.gz
libgc_dir=gc-7.4.0
libatomic_ops_url=http://www.hboehm.info/gc/gc_source/libatomic_ops-7.4.0.tar.gz
libatomic_ops_dir=libatomic_ops-7.4.0

# Absolute installation path
if expr match "$0" "^/.*"; then
	install="`dirname "$0"`"
else
	install="`pwd`/`dirname "$0"`"
fi

# Local source directory
mkdir -p "$install/src"
cd "$install/src"

# Download libs
for url in $libgc_url $libatomic_ops_url; do
	echo "Downloading $url..."
	curl --progress-bar -o `basename $url` $url || exit 1
done

if test -d $libgc_dir; then
	rm -r $libgc_dir
fi

# Extract
tar -xzf `basename $libgc_url` || exit 1
tar -xzf `basename $libatomic_ops_url` || exit 1
mv $libatomic_ops_dir $libgc_dir/libatomic_ops || exit 1

cd $libgc_dir || exit 1

# Configure for Android
path="$ANDROID_NDK/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/"
export CC="$path/arm-linux-androideabi-gcc --sysroot=$SYS_ROOT"
export CXX="$path/arm-linux-androideabi-g++ --sysroot=$SYS_ROOT"
export LD="$path/arm-linux-androideabi-ld"
export AR="$path/arm-linux-androideabi-ar"
export RANLIB="$path/arm-linux-androideabi-ranlib"
export STRIP="$path/arm-linux-androideabi-strip"
export CFLAGS="-DIGNORE_DYNAMIC_LOADING -DPLATFORM_ANDROID -I libatomic_ops/src/"
export LIBS="-lc -lgcc"
./configure --host=arm-linux-androideabi --enable-static --disable-shared --prefix="$install" || exit 1

# Compile and install locally
make install -j 4 || exit 1
