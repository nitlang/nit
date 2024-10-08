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

import json::static
import json

if args.length < 1 then
	print "Usage ./test_adhoc_json_parser file"
	exit -1
end
var parse = args[0].to_path.read_all.parse_json
if parse == null then
	print "null"
else
	print parse.to_pretty_json
end
