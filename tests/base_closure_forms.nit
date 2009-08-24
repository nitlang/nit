# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

import kernel

class Array[E]
	fun sort
		!cmp(a, b: E): Int
	do
		var e1 = _e1
		var e2 = _e2
		if cmp(e1, e2) > 0 then
			_e1 = e2
			_e2 = e1
		end
	end

	fun iterate
		!each(e: E)
	do
		each(_e1)
		each(_e2)
	end

	var _e1: E
	var _e2: E

	init(e1, e2: E)
	do
		_e1 = e1
		_e2 = e2
	end

	redef fun output
	do
		'['.output
		_e1.output
		','.output
		_e2.output
		']'.output
		'\n'.output
	end
end

class Map[K, V]
	fun [](k: K): V
		!def: V do abort
	do
		if _k == k then return _v
		var n = _next
		if n != null then return n[k] !def do continue def
		var v = def
		_next = new Map[K, V](k, v)
		return v
	end
	fun has_key(k: K): Bool
	do
		if _k == k then return true
		var n = _next
		if n != null then return n.has_key(k) else return false
	end
	fun iterate
		!each2(k: K, v: V)
	do
		var n: nullable Map[K, V] = self
		while n != null do
			each2(n._k, n._v)
			n = n._next
		end
	end
	var _k: K
	var _v: V
	var _next: nullable Map[K, V]
	init(k: K, v: V)
	do
		_k = k
		_v = v
	end
	redef fun output
	do
		'{'.output
		output_inner
		'}'.output
		'\n'.output
	end
	fun output_inner
	do
		_k.output
		':'.output
		_v.output
		var n = _next
		if n != null then
			','.output
			n.output_inner
		end
	end
end

class File
	readable var _id: Int
	readable var _is_open: Bool
	fun close
	do
		if _is_open then
			'C'.output
			_id.output
			_is_open = false
		end
	end
	init(id: Int)
	do
		_id = id
		_is_open = id > 0
	end
end

fun file_open(i: Int)
	!work(f: File)
	break !error(j: Int) do abort
do
	var f = new File(i)
	if not f.is_open then error(404)
	work(f) !break do f.close
	f.close
end

##################

fun test_sort
do
	var a = new Array[Char]('2', '1')
	a.output
	a.sort !cmp(x, y) = x <=> y
	a.output
	a.sort !cmp(x, y) = y <=> x
	a.output
	a.iterate !each i do i.output
	'\n'.output
end

fun test_map
do
	var m = new Map[Char, Char]('I', '1')

	m.output

	if not m.has_key('I') then (-1).output
	'I'.output
	'='.output
	var i = m['I']
	i.output
	'\n'.output

	m.output

	if m.has_key('V') then (-2).output
	'V'.output
	'='.output
	i = m['V'] !def = '5'
	i.output
	'\n'.output

	m.output

	if not m.has_key('V') then (-3).output
	'V'.output
	'='.output
	i = m['V'] !def = '6'
	i.output
	'\n'.output

	m.output

	if m.has_key('X') then (-4).output
	'X'.output
	'='.output
	i = m['X'] !def do break '0'
	i.output
	'\n'.output

	m.output

	if m.has_key('X') then (-5).output

	m.iterate !each2(k,v) do
		k.output
		'='.output
		v.output
		';'.output
	end
	'\n'.output
end

fun test_file(i: Int)
do
	var f_escape: nullable File = null
	file_open(i) !work(f) do
		'O'.output
		'?'.output
		f.is_open.output
		f_escape = f
	!error(e) do
		'E'.output
		e.output
	end
	if f_escape != null then
		'O'.output
		'?'.output
		f_escape.is_open.output
	end
end

test_sort
'\n'.output
test_map
'\n'.output
test_file(1)
'\n'.output
test_file(-1)

