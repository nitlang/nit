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

all: bin/server bin/tinks

# Client
bin/tinks: assets/images/drawing.png src/client/client_serialize.nit $(shell ../../bin/nitls -M src/client/linux_client.nit)
	../../bin/nitc -o bin/tinks src/client/linux_client.nit -m src/client/client_serialize.nit

src/client/client_serialize.nit: $(shell ../../bin/nitls -M src/client/client.nit)
	../../bin/nitserial -o src/client/client_serialize.nit src/client/client.nit

assets/images/drawing.png: art/drawing.svg
	../inkscape_tools/bin/svg_to_png_and_nit art/drawing.svg -a assets/ -s src/client/ -x 2.0

# Server
bin/server: src/server/server_serialize.nit $(shell ../../bin/nitls -M src/server/dedicated.nit)
	../../bin/nitc -o bin/server src/server/dedicated.nit -m src/server/server_serialize.nit

src/server/server_serialize.nit: $(shell ../../bin/nitls -M src/server/dedicated.nit)
	../../bin/nitserial -o src/server/server_serialize.nit src/server/dedicated.nit

# Archive
pub: assets/images/drawing.png src/client/client_serialize.nit
	../../bin/nitc --no-stacktrace -o bin/tinks src/client/linux_client.nit -m src/client/client_serialize.nit
	tar -czvf bin/tinks.tar.gz bin/tinks assets/
	scp bin/tinks.tar.gz xymus.net:/var/www/pub/

.PHONY: pub
