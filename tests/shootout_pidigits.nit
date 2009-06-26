# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Incorrect without bignums

class PiDigitSpigot
    var _z: Transformation
    var _x: Transformation
    var _inverse: Transformation
    

    init
	do
	    _z = new Transformation(1,0,0,1)
	    _x = new Transformation(0,0,0,0)
	    _inverse = new Transformation(0,0,0,0)
	end


    fun next: Int
	do
	    var y = digit
	    if is_safe(y) then
		_z = produce(y)
		return y
	    else
		_z = consume(_x.next)
		return next
	    end
	end
	
    fun next_: Int
	do
    	    var y = digit
	    while not is_safe(y) do
		_z = consume(_x.next)
		y = digit
	    end
	    _z = produce(y)
	    return y
	end

    fun digit: Int
	do
	    return _z.extract(3)
	end

    fun is_safe(digit: Int): Bool
	do
	    return digit == _z.extract(4)
	end

    fun produce(i: Int): Transformation
	do
	    return _inverse.qrst(10,-10*i,0,1).compose(_z)
	end

    fun consume(a: Transformation): Transformation
	do
	    return _z.compose(a)
	end
end


class Transformation
    var _q: Int
    var _r: Int
    var _s: Int
    var _t: Int
    var _k: Int

    init(q: Int, r: Int, s: Int, t: Int)
        do
	    set(q, r, s, t)
	end

    fun set(q: Int, r: Int, s: Int, t: Int)
	do
	    _q = q
	    _r = r
	    _s = s
	    _t = t
	    _k = 0
	end


    fun next: Transformation
	do
	    _k = _k + 1
	    _q = _k
	    _r = 4 * _k + 2
	    _s = 0
	    _t = 2 * _k + 1
	    return self
	end

    fun extract(j: Int): Int
	do
	    return (_q * j + _r) / (_s * j + _t)
	end

    fun compose(a: Transformation): Transformation
	do
	    return new Transformation(
	    	_q * a._q,
		_q * a._r + _r * a._t,
		_s * a._q + _t * a._s,
		_s * a._r + _t * a._t
		)
	end

    fun qrst(q: Int, r: Int, s: Int, t: Int): Transformation
	do
	    set(q, r, s, t)
	    return self
	end
end


var witdh = 10
var n = args.first.to_i
var j = 0

var digits = new PiDigitSpigot

while n > 0 do
    if n >= witdh then
	for i in [0..witdh[ do
	    printn(digits.next)
	end
	j = j + witdh
    else
	for i in [0..n[ do
	    printn(digits.next)
	end
	for i in [n..witdh[ do
	    printn(" ")
	end
	j = j + n
    end
    print("\t:{j}")
    n = n - witdh
end
