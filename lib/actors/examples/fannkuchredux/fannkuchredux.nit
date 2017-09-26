# This file is part of NIT (http://www.nitlanguage.org).
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

# Example implemented from "The computer Language Benchmarks Game" - Fannkuch-Redux
# http://benchmarksgame.alioth.debian.org/
#
# Complete description of the fannkuch-redux :
# https://benchmarksgame.alioth.debian.org/u64q/fannkuchredux-description.html#fannkuchredux
module fannkuchredux is example, no_warning("missing-doc")

import actors

class FannkuchRedux
	actor

	var p: Array[Int] is noautoinit
	var pp: Array[Int] is noautoinit
	var count: Array[Int] is noautoinit

	fun print_p do
		for i in [0..p.length[ do printn p[i] + 1
		print ""
	end

	fun first_permutation(idx: Int) do
		for i in [0..p.length[ do p[i] = i

		for i in [0..count.length[.reverse_iterator do
			var d = idx / fact[i]
			count[i] = d
			idx = idx % fact[i]

			p.copy_to(0, i+1, pp, 0)

			for j in [0..i] do p[j] = if j + d <= i then pp[j+d] else pp[j+d-i-1]
		end
	end

	fun next_permutation do
		var first = p[1]
		p[1] = p[0]
		p[0] = first

		var i = 1
		count[i] += 1
		while count[i] > i do
			count[i] = 0
			i += 1

			p[0] = p[1]
			var next = p[0]

			for j in [1..i[ do p[j] = p[j+1]
			p[i] = first
			first = next

			count[i] += 1
		end
	end

	fun count_flips: Int do
		var flips = 1
		var first = p[0]
		if p[first] != 0 then
			p.copy_to(0, pp.length, pp, 0)
			while pp[first] != 0 do
				flips += 1
				var lo = 1
				var hi = first - 1
				while lo < hi do
					var t = pp[lo]
					pp[lo] = pp[hi]
					pp[hi] = t
					lo += 1
					hi -= 1
				end
				var t = pp[first]
				pp[first] = first
				first = t
			end
		end
		return flips
	end

	fun run_task(task: Int) do
		var idx_min = task * chunk_sz
		var idx_max = fact[n].min(idx_min + chunk_sz)

		first_permutation(idx_min)

		var maxflips = 1
		var chk_sum = 0

		for i in [idx_min..idx_max[ do
			if p[0] != 0 then
				var flips = count_flips
				maxflips = maxflips.max(flips)
				chk_sum += if i % 2 == 0 then flips else -flips
			end
			if i + 1 != idx_max then next_permutation
		end

		max_flips[task] = maxflips
		chk_sums[task] = chk_sum
	end

	fun run do
		p = new Array[Int].with_capacity(n)
		for i in [0..n[ do p.add(0)
		pp = new Array[Int].with_capacity(n)
		for i in [0..n[ do pp.add(0)
		count = new Array[Int].with_capacity(n)
		for i in [0..n[ do count.add(0)

		var task = 0
		loop
			task = task_id.get_and_increment
			if task < n_tasks then run_task(task) else break
		end
	end
end

redef class Sys
	var n_chunks = 150
	var chunk_sz: Int is noautoinit
	var n_tasks: Int is noautoinit
	var n: Int is noautoinit
	var fact: Array[Int] is noautoinit
	var max_flips: Array[Int] is noautoinit
	var chk_sums: Array[Int] is noautoinit
	var task_id = new AtomicInt(0)
	var nb_actors = 8
end

fun print_result(n, res, chk: Int) do
	print chk.to_s + "\nPfannfuchen(" + n.to_s + ") = " + res.to_s

end

n = if args.is_empty then 7 else args[0].to_i

fact = new Array[Int].with_capacity(n+1)
fact[0] = 1
for i in [1..n] do fact.add(fact[i-1] * i)

chunk_sz = (fact[n] + n_chunks - 1) / n_chunks
n_tasks = (fact[n] + chunk_sz - 1) / chunk_sz
max_flips = new Array[Int].with_capacity(n_tasks)
for i in [0..n_tasks[ do max_flips.add(0)
chk_sums = new Array[Int].with_capacity(n_tasks)
for i in [0..n_tasks[ do chk_sums.add(0)

var actors = new Array[FannkuchRedux].with_capacity(nb_actors)
for i in [0..nb_actors[ do
	var a = new FannkuchRedux
	actors.add(a)
	a.async.run
end

for i in [0..nb_actors[ do
	actors[i].async.terminate
	actors[i].async.wait_termination
end

var res = 0
for i in max_flips do res = res.max(i)

var chk = 0
for i in chk_sums do
	chk += i
end

print_result(n, res, chk)
