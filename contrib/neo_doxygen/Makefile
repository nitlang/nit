# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

NITG=../../bin/nitg
NITG_FLAGS=--dir bin
NEO4J_DIR=/var/lib/neo4j

.PHONY: bin reset-neo

# Compile the tool.
bin:
	mkdir -p bin
	../../bin/nitg --dir bin src/neo_doxygen.nit

# Reset the local graph.
reset-neo:
	sudo -u neo4j "${NEO4J_DIR}/bin/neo4j" stop \
	&& sudo -u neo4j rm -rf "${NEO4J_DIR}/data/graph.db" \
	&& sudo -u neo4j "${NEO4J_DIR}/bin/neo4j" start
