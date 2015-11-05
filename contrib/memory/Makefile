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

all: bin/memory

pre-build: assets/images/drawing.png

bin/memory: assets/images/drawing.png src/*.nit
	mkdir -p bin
	../../bin/nitc -o bin/memory src/memory.nit -m ../../lib/mnit/linux/linux.nit

assets/images/drawing.png: art/drawing.svg
	mkdir -p assets/images/
	../inkscape_tools/bin/svg_to_png_and_nit art/drawing.svg -a assets/ -s src/ -x 4

res/drawable-ldpi/icon.png: art/icon.svg
	mkdir -p res/
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

android: bin/memory.apk
bin/memory.apk: assets/images/drawing.png src/*.nit res/drawable-ldpi/icon.png
	mkdir -p bin
	../../bin/nitc -o bin/memory.apk src/memory.nit -m ../../lib/mnit/android/android.nit -m ../../lib/android/landscape.nit

android-release: assets/images/drawing.png src/*.nit res/drawable-ldpi/icon.png
	mkdir -p bin
	../../bin/nitc -o bin/memory.apk src/memory.nit -m ../../lib/mnit/android/android.nit -m ../../lib/android/landscape.nit  --release
