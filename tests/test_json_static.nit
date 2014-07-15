# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

var a = "\{\"__kind\": \"obj\", \"__id\": 0, \"__class\": \"C\", \"a\": \{\"__kind\": \"obj\", \"__id\": 1, \"__class\": \"A\", \"b\": true, \"c\": \"a\", \"f\": 0.123, \"i\": 1234, \"s\": \"asdf\", \"n\": null, \"array\": [88, \"hello\", null]\}, \"b\": \{\"__kind\": \"obj\", \"__id\": 2, \"__class\": \"B\", \"b\": false, \"c\": \"b\", \"f\": 123.123, \"i\": 2345, \"s\": \"hjkl\", \"n\": null, \"array\": [88, \"hello\", null], \"ii\": 1111, \"ss\": \"qwer\"\}, \"aa\": \{\"__kind\": \"ref\", \"__id\": 1\}\}"
var b = "\{\"__kind\": \"obj\", \"__id\": 0, \"__class\": \"A\", \"b\": true, \"c\": \"a\", \"f\": 0.123, \"i\": 1234, \"s\": \"asdf\", \"n\": null, \"array\": [88, \"hello\", null]\}"

for s in [a, b] do
	var obj = s.to_jsonable
	print "# Json: {s}"
	print "# Nit: {obj or else "<null>"}"
end
