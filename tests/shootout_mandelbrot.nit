# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

# The Comptuer Language Shootout Benchmarks
# http://shootout.alioth.debian.org
#
# contributed by Jean Privat

# Incorrect since Floats are floats instead of doubles

var iter = 20
var limit = 2.0

if args.length != 1 then
    print("Usage: shootout_mandelbrot <size>")
    return
end

var w = args.first.to_i
var h = w

var byte_acc = 0
var bit_num = 0

print("P4\n{w} {h}")

for y in [0..h[ do
    for x in [0..w[ do
	var zr = 0.0
	var zi = 0.0
	var cr = 2.0 * x.to_f / w.to_f - 1.5
	var ci = 2.0 * y.to_f / h.to_f - 1.0

	var i = 0
	while i < iter and zr*zr+zi*zi <= limit*limit do
	    var tr = zr*zr - zi*zi + cr
	    var ti = 2.0*zr*zi + ci
	    zr = tr
	    zi = ti
	    i = i + 1
	end

	if zr*zr+zi*zi > limit*limit then
	    byte_acc = byte_acc << 1
	else
	    byte_acc = (byte_acc << 1) + 1
	end

	bit_num = bit_num + 1

	if bit_num == 8 then
	    stdout.write_byte(byte_acc)
	    byte_acc = 0
	    bit_num = 0	    
	else if x == w - 1 then
	    byte_acc = byte_acc << (8-w%8)
	    stdout.write_byte(byte_acc)
	    byte_acc = 0
	    bit_num = 0	    
	end
    end
end
print ""
