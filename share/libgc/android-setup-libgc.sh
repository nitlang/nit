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
#
# The source package should be downloaded and compiled only once.
# If the working directory is cleared, the cached version will be lost.
# On test servers, which clear the working directory frequently,
# it may be a good idea to use a local version of the source packages.
# To do so, download the following two packages and put them in your HOME directory.
# * http://www.hboehm.info/gc/gc_source/gc-7.4.0.tar.gz
# * http://www.hboehm.info/gc/gc_source/libatomic_ops-7.4.0.tar.gz

# If ANDROID_NDK is not set, get it from the path to `ndk-build`
if test -z "$ANDROID_NDK"; then
	ndk_build_path=`which ndk-build`
	if test $? -ne 0; then
		echo "Error: ndk-build from the Android NDK must be in your PATH"
		exit 1
	fi

	ANDROID_NDK=`dirname $ndk_build_path`
fi

# Information on the currently targeted libgc and libatomic_ops source URL
# These may have to be updated according to server-side changes and newer
# versions of the Boehm GC.
libgc_url=http://www.hboehm.info/gc/gc_source/gc-7.4.0.tar.gz
libgc_local=~/gc-7.4.0.tar.gz
libgc_dir=gc-7.4.0
libatomic_ops_url=http://www.hboehm.info/gc/gc_source/libatomic_ops-7.4.0.tar.gz
libatomic_ops_local=~/libatomic_ops-7.4.0.tar.gz
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

# Download libs, trying to use a local version if possible
urls=""
if test -f $libgc_local; then
	cp $libgc_local .
else
	urls=$libgc_url
fi

if test -f $libatomic_ops_local; then
	cp $libatomic_ops_local .
else
	urls="$urls $libatomic_ops_url"
fi

for url in $urls; do
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

archs=(         arm                       x86                mips)
tools_dirs=(    arm-linux-androideabi-4.6 x86-4.6            mipsel-linux-android-4.6)
tools_prefixes=(arm-linux-androideabi     i686-linux-android mipsel-linux-android)
hosts=(         arm-linux-androideabi     x86-linux-android  mips-linux-android)

n_archs=$(( ${#archs[@]} - 1 ))
for i in $(eval echo "{0..$n_archs}"); do
	arch=${archs[i]}
	tools_dir=${tools_dirs[i]}
	tools_prefix=${tools_prefixes[i]}
	host=${hosts[i]}

	# Get the first platform available (it shouldn't change much, but it may
	# have to be adjusted)
	for platform in `echo $ANDROID_NDK/platforms/android-*/arch-$arch`; do
		sys_root=$platform
		break
	done

	if test -z "$sys_root"; then
		echo "Error: could not an Android platform for $arch in the NDK, define ANDROID_NDK to the correct path."
		exit 1
	fi

	# Configure for Android
	path="$ANDROID_NDK/toolchains/$tools_dir/prebuilt/linux-x86_64/bin/"
	export CC="$path/$tools_prefix-gcc --sysroot=$sys_root"
	export CXX="$path/$tools_prefix-g++ --sysroot=$sys_root"
	export LD="$path/$tools_prefix-ld"
	export AR="$path/$tools_prefix-ar"
	export RANLIB="$path/$tools_prefix-ranlib"
	export STRIP="$path/$tools_prefix-strip"
	export CFLAGS="-DIGNORE_DYNAMIC_LOADING -DPLATFORM_ANDROID -I libatomic_ops/src/"
	export LIBS="-lc -lgcc"
	./configure --host=$host --enable-static --disable-shared --prefix="$install/$arch/" || exit 1

	# Compile and install locally
	make install -j 4 || exit 1
done
