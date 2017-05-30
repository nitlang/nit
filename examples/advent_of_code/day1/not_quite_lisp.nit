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

if args.is_empty then
	print "Usage ./not_quite_lisp input.txt"
	exit 1
end

var floor = 0

var input = args[0].to_path.read_all

for i in input do
	if i == '(' then
		floor += 1
		continue
	end
	if i == ')' then
		floor -= 1
		continue
	end
end

print floor
