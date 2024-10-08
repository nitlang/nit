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

# 99 bottles of beer
# Just for fun

class Bottle
	fun sing is abstract
private
	fun sing_start
	do
		printn(self, " of beer on the wall.\n")
		printn(self, " of beer.\n")
		printn("Take it down, pass it around.\n")
	end
end

class OneBottle
	super Bottle
	redef fun sing
	do
		sing_start
		printn("No more bottles of appear on the wall!\n\n")
	end

	redef fun to_s: String
	do
		return "One bottle"
	end

	init do end
end

class TwoBottles
	super Bottle
	redef fun sing
	do
		sing_start
		printn("One bottle appears on the wall\n\n")
	end

	redef fun to_s: String
	do
		return "2 bottles"
	end

	init do end
end

class Bottles
	super Bottle

	redef fun sing
	do
		sing_start
		printn(_quantity - 1," bottles appear on the wall!\n\n")
	end

	redef fun to_s: String
	do
		return _quantity.to_s + " bottles"
	end

	init(i: Int)
	do
		_quantity = i
	end

	var quantity: Int
end

var i = 99
while i > 2 do
	(new Bottles(i)).sing
	i = i - 1
end
(new TwoBottles).sing
(new OneBottle).sing

