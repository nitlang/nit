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

# Logical expression.
#
# This module provides a simple data structure for first order logic.
# Basic logical operators and algorithms are provided.
#
# ~~~
# var a = new LVar("a")
# var b = new LVar("b")
# var c = new LVar("c")
#
# assert a.to_s == "a"
# assert (a|b).to_s == "(a | b)"
# assert (~(a|b)).to_s == "~(a | b)"
# ~~~
#
# Compute a negative normal form:
#
# ~~~
# var ex = a | (b & c)
# var nex = ~ex
# assert ex.nnf.to_s == "(a | (b & c))"
# assert nex.nnf.to_s == "(~a & (~b | ~c))"
# ~~~
#
# Compute a conjunctive normal form:
#
# ~~~
# assert ex.cnf.simplify.to_s == "(a|b) & (a|c)"
# assert nex.cnf.simplify.to_s == "(~a) & (~b|~c)"
# ~~~
module lexpr

# A logical expression
#
# The basic (primitive) operators are: `&` (and), `|` (or) and `~` (not).
# Composed operators are `impl` and `^`, they implemented using the basic operators.
class LExpr
	# It the logical expression `ltrue`?
	#
	# ~~~
	# assert     ltrue.is_t
	# assert not lfalse.is_t
	# assert not (new LVar("a")).is_t
	# ~~~
	fun is_t: Bool do return false

	# It the logical expression `lfalse`?
	#
	# ~~~
	# assert     lfalse.is_f
	# assert not ltrue.is_f
	# assert not (new LVar("a")).is_f
	# ~~~
	fun is_f: Bool do return false

	# The negation of `self`
	#
	# ~~~
	# var a = new LVar("a")
	# assert (~a).to_s == "~a"
	# assert (~~a).to_s == "a"
	# ~~~
	fun ~:LExpr do return lnot

	private var lnot: LExpr is lazy do return new LNot(self)

	# Disjunction with `e` (and).
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# assert (a|b).to_s == "(a | b)"
	# ~~~
	#
	# `true` and `false` operands are optimized.
	#
	# ~~~
	# assert (a|ltrue).is_t
	# assert (a|lfalse) == a
	# ~~~
	fun |(e: LExpr): LExpr do
		if self.is_f then return e
		if self.is_t then return ltrue
		if e.is_f then return self
		if e.is_t then return ltrue
		return new LOr(self, e)
	end

	# Conjunction with `e` (or).
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# assert (a&b).to_s == "(a & b)"
	# ~~~
	#
	# `true` and `false` operands are optimized.
	#
	# ~~~
	# assert (a&ltrue) == a
	# assert (a&lfalse).is_f
	# ~~~
	fun &(e: LExpr): LExpr do
		if self.is_f then return lfalse
		if self.is_t then return e
		if e.is_f then return lfalse
		if e.is_t then return self
		return new LAnd(self, e)
	end

	# Implication with `e` (implies).
	#
	# Note: it is transformed with conjunctions and disjunctions.
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# assert a.imp(b).to_s == "(~a | b)"
	# ~~~
	fun imp(e: LExpr): LExpr
	do
		return (~self) | e
	end

	# Exclusive disjunction with `e` (xor).
	#
	# Note: it is transformed with conjunctions and disjunctions.
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# assert (a^b).to_s == "((a & ~b) | (~a & b))"
	# ~~~
	fun ^(e: LExpr): LExpr
	do
		return (self & ~e) | (~self & e)
	end

	# The negation normal form (NNF).
	#
	# In NNF, the negation operator is only applied to variables.
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# assert (a&b).nnf.to_s == "(a & b)"
	# assert (~(a&b)).nnf.to_s == "(~a | ~b)"
	# ~~~
	#
	# Subclasses implement it recursively.
	fun nnf: LExpr do return self

	# The negative negation normal form (NNF).
	#
	# This method is used to implement `nnf`.
	# Basically, it returns the NNF of `~self`.
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# assert (a&b).nnnf.to_s == "(~a | ~b)"
	# ~~~
	#
	# Subclasses implements it by using De Morgan's laws to push negation inwards.
	fun nnnf: LExpr do return ~self

	# Compute a conjunctive normal form.
	#
	# By default, a unique *equivalent* formula is computed (but its size might be exponential).
	#
	# ~~~
	# var a = new LVar("a")
	# var b = new LVar("b")
	# var c = new LVar("c")
	#
	# var ex = a | (b & c)
	# assert ex.cnf.to_s == "(a|b) & (a|c)"
	# assert (~ex).cnf.to_s == "(~a) & (~b|~c)"
	# ~~~
	#
	# If a parameter `vars` is given, an *equisatisfiable* formula is computed.
	# Additional variables, named `zzsomething`, are created by the transformation and stored in `vars`.
	fun cnf(vars: nullable Array[LVar]): CNF do
		var ss = new CNF
		var s = new Set[LExpr]
		ss.data.add s
		s.add self
		return ss
	end

	# The size of the logical expression.
	fun size: Int do return 1
end

# A logical conjunction operation
class LAnd
	super LExpr

	# The first operand
	var e1: LExpr

	# The second operand
	var e2: LExpr

	redef fun to_s do return "({e1} & {e2})"

	redef fun nnf do return e1.nnf & e2.nnf
	redef fun nnnf do return e1.nnnf | e2.nnnf
	redef fun cnf(v) do return e1.cnf(v) & e2.cnf(v)

	redef fun size do return e1.size + e2.size + 1
end

# A logical disjunction operation
class LOr
	super LExpr

	# The first operand
	var e1: LExpr

	# The second operand
	var e2: LExpr

	redef fun to_s do return "({e1} | {e2})"
	redef fun nnf do return e1.nnf | e2.nnf
	redef fun nnnf do return e1.nnnf & e2.nnnf

	redef fun cnf(v) do
		var c1 = e1.cnf(v)
		var c2 = e2.cnf(v)

		if c1.data.length > 1 and c2.data.length > 1 and v != null then
			var z = new LVar("zz{v.length}")
			v.add z
			var nz = ~z

			var res = new CNF
			for c in c1.data do
				var set = c.clone
				set.add z
				res.data.add(set)
			end
			for c in c2.data do
				var set = c.clone
				set.add nz
				res.data.add(set)
			end

			return res
		end

		var res = new CNF
		for i in c1.data do for j in c2.data do
			res.data.add i.union(j)
		end
		return res
	end

	redef fun size do return e1.size + e2.size + 1
end

# A logical negation operation
class LNot
	super LExpr

	# The argument
	var e: LExpr

	redef fun ~ do return e
	redef fun to_s do return "~{e}"
	redef fun nnf do return e.nnnf
	redef fun nnnf do return e.nnf
	redef fun cnf(v) do
		if e isa LVar then return super
		return e.nnnf.cnf(v)
	end
	redef fun size do return e.size + 1
end

# The logical *true* variable.
fun ltrue: LTrue do return once new LTrue

# The class of the singleton `ltrue`
class LTrue
	super LExpr
	redef fun is_t do return true
	redef fun ~ do return lfalse
	redef fun to_s do return "true"
end

# The logical *false* variable.
fun lfalse: LFalse do return once new LFalse

# The class of the singleton `lfalse`
class LFalse
	super LExpr
	redef fun is_f do return true
	redef fun ~ do return ltrue
	redef fun to_s do return "false"
end


# A variable of a logical expression.
class LVar
	super LExpr

	# The name of the variable (used for representation)
	#
	# Internally, two variables with the same name are not merged
	var name: String

	redef fun to_s do return name
end

# A conjunctive normal form of a logical expression.
class CNF
	# The conjunction of disjunction of units.
	var data = new Set[Set[LExpr]]

	# Simplify `self` by removing some useless clauses.
	#
	# * trivially clauses (with both a variable and its negation)
	# * subsumed clauses
	fun simplify: CNF
	do
		var cs2 = new Set[Set[LExpr]]

		# First pass to remove clauses with a variable and its negation.
		# These clauses become trivially `true`, thus useless in the conjunction.
		for c in data do
			for i in c do
				var nn = ~i
				if c.has(nn) then continue label
			end
			cs2.add c
		end label

		# Second pass to remove clauses subsumed by an other one.
		var cs3 = new Set[Set[LExpr]]
		for c in cs2 do
			for c2 in cs2 do
				if c2 != c and c2.has_all(c) then continue label
			end
			cs3.add c
		end label

		var res = new CNF
		res.data = cs3
		return res
	end

	# Merge two CNF
	fun &(o: CNF): CNF
	do
		var res = new CNF
		res.data.add_all self.data
		res.data.add_all o.data
		return res
	end

	redef fun to_s do return [for c in data do "(" + c.join("|") + ")"].join(" & ")

	redef fun ==(o) do return o isa CNF and data == o.data
	redef fun hash do return data.hash
end
