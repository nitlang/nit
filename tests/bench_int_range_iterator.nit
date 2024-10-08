# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

var nb = 25
if not args.is_empty then nb = args.first.to_i

var cpt = 0
var r = [0..nb[
var i1 = r.iterator
while i1.is_ok do
	var ii1 = i1.item

	var i2 = r.iterator
	while i2.is_ok do
		var ii2 = i2.item

		var i3 = r.iterator
		while i3.is_ok do
			var ii3 = i3.item

			if ii1 == ii2 and ii2 == ii3 then cpt += 1

			i3.next
		end
	
		i2.next
	end
	i1.next
end

print cpt
