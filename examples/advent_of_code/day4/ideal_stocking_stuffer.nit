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

import md5

if args.is_empty then
	print "Usage: ./ideal_stocking_stuffer input.txt"
	exit 1
end

var key = args[0].to_path.read_all.trim

var nb = 0

var mask = "0" * 5

loop
	if (key + nb.to_s).md5.has_prefix(mask) then break
	nb += 1
end

print nb
