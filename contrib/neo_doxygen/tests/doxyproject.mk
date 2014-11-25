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

.PHONY: clean doxygen strip_paths xml

# Regenerate the XML documents.
xml: strip_paths

clean:
	rm -rf xml

doxygen: clean
	doxygen Doxyfile

# Get rid of the absolute paths in the generated files.
#
# Doxygen ignores the `STRIP_FROM_PATH` setting when generating a XML output.
# So, we have to replace the paths manually in order to get reproducible
# results.
#
# WARNING: FOR USE ON TEST DATA ONLY.
strip_paths: doxygen
	. ../../sh-lib/more_sed.sh; \
	replace `readlink -f -- ./src` '%SOURCE_DIRECTORY%' xml/*.xml
