# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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


fun test1(h: Map[Int, Int])
do
	print("* test 1 *")
	h[1] = 2
	h[2] = 4
	printn(h[1], " - ", h[2], "\n")
	h[1] = 20
	printn(h[1], " - ", h[2], "\n")
	print(h.has_key(1))
	print(h.has_key(2))
	print(not h.has_key(3))
	print(not h.values.has(2))
	print(h.values.has(4))
	print(h.values.has(20))
	print(h.length)
	var s = 24
	for x in h.values do
		s = s - x
	end
	print(s)
end

fun test2(h: Map[Int, Int])
do
	print("* test 2 *")
	var nb = 99
	
	var i = 0
	while i <= nb do
		h[i*31+13] = i * 2
		i = i + 1
	end

	print(h.length)

	i = nb
	while i >= 0 do
		if h[i*31+13] != i * 2 then
			print("{i}: {i*31+13} != {h[i]}")
		end
		i = i - 1
	end

	i = nb * 2
	while i >= 0 do
		if i % 3 != 0 then
			h.values.remove(i)
		end
		i = i - 1
	end
	
	print(h.length)

	i = nb
	while i >= 0 do
		var j = i * 31 + 13
		if (i * 2) % 3 != 0 then
			if h.has_key(j) then
				print("{i}: {j} should be removed")
			end
		else if h[j] != i * 2 then
			print("{i}: {j} != {h[i]}")
		end
		i = i - 1
	end
end


fun test3(m: Map[String, String])
do
	print("* test 3 *")
	print("* start:")
	print(m.is_empty)
	print(m.length == 0)
	print(m.values.has_only("vert"))
	print(m.values.count("vert") == 0)
	m["blue"] = "vert"
	print(not m.is_empty)
	print(m.values.has_only("vert"))
	print(m.values.count("vert") == 1)
	m["red"] = "rouge"
	print(not m.values.has_only("vert"))
	m["blue"] = "bleu"
	print(m.length == 2)

	print("* add some:")
	m["pink"] = "rose"
	m["yellow"] = "jaune"
	m["orange"] = "orange"
	m["black"] = "noir"
	m["gray"] = "gris"
	m["grey"] = "gris"
	m["white"] = "blanc"
	print(m.length == 9)
	print(m.values.count("vert") == 0)
	print(m.values.count("gris") == 2)
	print(m["blue"] == "bleu")
	print(not m.values.has("vert"))
	print(m.values.has("bleu"))
	print(not m.values.has("blue"))
	print(m.has_key("blue"))
	print(not m.has_key("green"))
	print(not m.has_key("vert"))
	print(m.values.join(", "))

	print("* remove:")
	print(m.values.count("rose") == 1)
	m.values.remove("rose")
	print(m.length == 8)
	print(m.values.count("rose") == 0)
	m.values.remove_all("gris")
	print(m.length == 6)
	print(m.values.count("gris") == 0)
	m.keys.remove("blue")
	print(m.length == 5)
	print(m.values.count("bleu") == 0)
	print(m.values.join(", "))
	m.clear
	print(m.is_empty)
end

test1(new ArrayMap[Int, Int])
test2(new ArrayMap[Int, Int])
test3(new ArrayMap[String, String])
