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

all: bin/server bin/tinks bin/tinks3d

pre-build: assets/images/drawing.png src/server/server_serialize.nit

# Client
bin/tinks: assets/images/drawing.png src/client/client.nit $(shell nitls -M src/client/linux_client.nit)
	nitserial -o src/client/client_serialize.nit src/client/client.nit
	nitc -o bin/tinks src/client/linux_client.nit -m src/client/client_serialize.nit

bin/tinks3d: $(shell nitls -M src/client/client3d.nit -m linux)
	nitserial -o src/client/client_serialize.nit src/client/client3d.nit
	nitc -o bin/tinks3d src/client/client3d.nit \
		-m src/client/client_serialize.nit -m linux

assets/images/drawing.png: art/drawing.svg
	../inkscape_tools/bin/svg_to_png_and_nit art/drawing.svg -a assets/ -s src/client/ -x 2.0

# Server
bin/server: src/server/server_serialize.nit $(shell nitls -M src/server/dedicated.nit)
	nitc -o bin/server src/server/dedicated.nit -m src/server/server_serialize.nit

src/server/server_serialize.nit: $(shell nitls -M src/server/dedicated.nit)
	nitserial -o src/server/server_serialize.nit src/server/dedicated.nit

# Android
android: bin/tinks.apk
bin/tinks.apk: assets/images/drawing.png android/res/ $(shell nitls -M src/client/android_client.nit)
	nitserial -o src/client/client_serialize.nit src/client/client.nit
	nitc -o bin/tinks.apk src/client/android_client.nit -m src/client/client_serialize.nit

android-release: assets/images/drawing.png android/res/ $(shell nitls -M src/client/android_client.nit)
	nitserial -o src/client/client_serialize.nit src/client/client.nit
	nitc -o bin/tinks.apk src/client/android_client.nit -m src/client/client_serialize.nit --release

android/res/: art/icon.svg
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

.PHONY: pub
