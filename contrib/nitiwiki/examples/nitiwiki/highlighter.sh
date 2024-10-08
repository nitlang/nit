#!/bin/sh

# This file is part of NIT ( https://nitlanguage.org ).
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

# Example of an external highlighter that dispatch on various command
# according to the argument

# meta is the argument
meta=$1

# raw is a synonym of txt
test "$meta" = "raw" && meta=txt

# if `pandoc` then process through the `pandoc` command.
if test "$meta" = "pandoc"; then
	exec pandoc -t html
fi

# Else, try `highlight`
highlight --fragment -S "$meta" --inline-css --enclose-pre ||
	# Or `source-highlight`
	source-highlight -s "$meta"
out=$?
exit $out
