#!/usr/bin/env nit
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

# Microbenchmak generation for multiple language
# Just a quick an dirty Nit script file :)

# This benchmark focuses on effects of the hierarchy dept
# on the typetest performances

# class Root
# class Klass[E] super Root
# class C1...CX super Root
# Klass[CX] isa Klass[C1]

class Klass
	var id: Int
	var supers = new Array[Klass]
	var all_supers = new HashSet[Klass]
	redef fun to_s
	do
		return "C{id}"
	end
end

class Generator

	var classes = new Array[Klass]

	var dept = 5 is writable
	var loops = 50000 is writable
	var middle = 0 is writable
	var dry = false is writable
	var check = false is writable

	# Polymorphism level
	# This is the number of distinct dynamic types for the receiver
	var poly = 2 is writable

	# Use only interfaces (or traits) in the hierarchy
	#
	# If `false` then java&cs&scala will use classes, thus will break if MH is used
	var use_interfaces = true is writable

	# Add Root0, the superclass to Root that introduce common services.
	#
	# This add another level of un-optimization since the services are not introduced
	# by the static type of the receiver.
	var use_root0 = true is writable

	fun genhier
	do
		var s: nullable Klass = null
		for d in [1..dept] do
			var c = new Klass(d)

			classes.add(c)
			c.all_supers.add(c)
			if s != null then
				c.supers.add(s)
				c.all_supers.add_all(s.all_supers)
			end
			s = c
		end
		middle = (dept) / 2
	end

	var file: nullable FileWriter = null
	fun write(str: String)
	do
		file.write(str)
		file.write("\n")
	end

	fun initnit(res: Array[String]) do return
	fun testnit: String do return "true"

	fun writenit(dir: String, name: String)
	do
		var ia = new Array[String]
		initnit(ia)
		if ia.is_empty then
			print "Nit disabled"
			return
		end

		dir = "{dir}/nit"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.nit")

		if use_root0 then
			write "class Root0"
		else
			write "class Root"
		end
		write "\tfun id: Int do return 0"
		write "\tvar aid: Int = id"
		write "\tvar next: Root is noautoinit"
		write "\tfun set_next(next: Root): Root do\n\t\tself.next = next\n\t\treturn next\n\tend"
		write "end"
		if use_root0 then
			write "class Root\n\tsuper Root0\nend"
		end
		for c in classes do
			write "class {c}[E]"
			if c.supers.is_empty then
				write "\tsuper Root"
			else for s in c.supers do
				write "\tsuper {s}[E]"
			end
			write "\tredef fun id do return {c.id}"
			write "\tfun f{c.id}: Int do return {c.id}"
			write "\tvar a{c.id}: Int = {c.id}"
			write "end"
		end

		write "fun test(a,b: Root, loops, start: Int)"
		write "do"
		write "var x = start"
		write "var i = loops"
		write "while i > 0 do"
		write "\tvar j = loops"
		write "\twhile j > 0 do"
		var test = "x >= 0"
		if not dry then test = testnit
		write "\t\tif {test} then"
		write "\t\t\tvar tmp = a; a = b; b = tmp"
		if check then write "\t\tx += 1"
		write "\t\telse"
		write "\t\t\tx += 1"
		write "\t\t\ta = a.next"
		write "\t\t\tb = b.next"
		write "\t\tend"
		write "\t\tj -= 1"
		write "\tend"
		write "\tx += 1"
		write "\ta = a.next"
		write "\tb = b.next"
		write "\ti -= 1"
		write "end"
		write "print x"
		write "end"

		write "var b: Root = {ia.first}"
		write "var tmp = b"
		for i in ia do
			write "b = b.set_next({i})"
		end
		write "b.next = tmp"
		write "var a: Root = {ia.last}"
		write "tmp = a"
		for i in [1..poly[ do
			write "a = a.set_next({ia[ia.length - 1 - i]})"
		end
		write "a.next = tmp"
		write "test(b, b.next, 10, -100)"
		write "test(a, a.next, {loops}, 0)"

		file.close
	end

	fun initjava(res: Array[String], interfaces: Bool) do return
	fun testjava(interfaces: Bool): String do return "true"
	fun writejava(dir: String, name: String, interfaces: Bool)
	do
		var ia = new Array[String]
		initjava(ia, interfaces)
		if ia.is_empty then
			print "Java disabled"
			return
		end

		dir = "{dir}/java"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.java")

		write "class {name} \{"
		var root0 = "Root"
		if use_root0 then root0 = "Root0"
		if interfaces then
			write "static interface {root0} \{ long id(); Root getNext(); Root setNext(Root next); \}"
			write "static class XRoot implements {root0} \{"
		else
			write "static class {root0} \{"
		end
		write "\tpublic long id() \{ return 0;\}"
		write "\tpublic long aid = id();"
		write "\tpublic Root next;"
		write "\tpublic Root getNext() \{ return next;\}"
		write "\tpublic Root setNext(Root next) \{ this.next = next; return next; \}"
		write "\}"

		if use_root0 then
			if interfaces then
				write "static interface Root extends Root0 \{\}"
			else
				write "static class Root extends Root0 \{\}"
			end
		end

		for c in classes do
			if interfaces then
				write "static interface {c}<E> "
			else
				write "static class {c}<E> "
			end
			if c.supers.is_empty then
				write "\textends Root"
			else for s in [c.supers.first] do
				write "\textends {s}<E>"
			end
			if interfaces then
				write "\{\}"
				if c.supers.is_empty then
					write "static class X{c}<E> extends XRoot implements {c}<E>"
				else
					write "static class X{c}<E> extends X{c.supers.first}<E> implements {c}<E>"
				end
			end
			write "\{"
			write "\tpublic long id() \{ return {c.id}; \}"
			write "\tpublic long f{c.id}() \{ return {c.id}; \}"
			write "\tpublic long a{c.id} = {c.id};"
			write "\}"
		end

		write "static public void main(String args[]) \{"
		write "\tRoot b = {ia.first};"
		write "\tRoot tmp = b;"
		for i in ia do
			write "\tb = b.setNext({i});"
		end
		write "\tb.setNext(tmp);"
		write "\tRoot a = {ia.last};"
		write "\ttmp = a;"
		for i in [1..poly[ do
			write "\ta = a.setNext({ia[ia.length - 1 - i]});"
		end
		write "\ta.setNext(tmp);"
		write "\ttest(b, b.getNext(), 10, -100);"
		write "\ttest(a, a.getNext(), {loops}, 0);"
		write "\}"

		write "static public void test(Root a, Root b, long loops, long start) \{"
		write "\tlong x = start;"
		write "\tfor(long i = loops; i > 0; i--) \{"
		write "\t\tfor(long j = loops; j > 0; j--) \{"
		var test = "x>=0"
		if not dry then test = testjava(interfaces)
		write "\t\t\tif({test}) \{"
		write "\t\t\t\tRoot tmp = a; a = b; b = tmp;"
		if check then write "\t\t\t\tx = x + 1;"
		write "\t\t\t\} else \{ x++; a = a.getNext(); b = b.getNext(); \}"
		write "\t\t\}"
		write "\t\tx++; a = a.getNext(); b = b.getNext();"
		write "\t\}"
		write "\tSystem.out.println(x);"
		write "\}"
		write "\}"
		file.close
	end

	fun initcsharp(res: Array[String], interfaces: Bool) do return
	fun testcsharp(interfaces: Bool): String do return "true"
	fun writecsharp(dir: String, name: String, interfaces: Bool)
	do
		var ia = new Array[String]
		initcsharp(ia, interfaces)
		if ia.is_empty then
			print "C# disabled"
			return
		end

		dir = "{dir}/cs"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.cs")

		write "class {name} \{"
		var root0 = "Root"
		if use_root0 then root0 = "Root0"
		if interfaces then
			write "interface {root0} \{ long Id(); Root GetNext(); Root SetNext(Root next); \}"
			write "class XRoot: {root0} \{ "
		else
			write "class {root0}\n\t\{ "
		end
		write "\tvirtual public long Id() \{ return 0; \}"
		write "\tpublic long aid;"
		write "\tpublic Root next;"
		write "\tvirtual public Root GetNext() \{ return next; \}"
		write "\tvirtual public Root SetNext(Root next) \{ this.next = next; return next; \}"
		write "\}"

		if use_root0 then
			if interfaces then
				write "interface Root: Root0 \{\}"
			else
				write "class Root: Root0 \{\}"
			end
		end

		for c in classes do
			var cname
			if interfaces then
				write "interface {c}<out E> "
				cname = "X"+c.to_s
			else
				write "class {c}<E> "
				cname = c.to_s
			end
			if c.supers.is_empty then
				write "\t: Root"
			else for s in [c.supers.first] do
				write "\t: {s}<E>"
			end
			if interfaces then
				write "\{\}"
				if c.supers.is_empty then
					write "class X{c}<E>: XRoot, {c}<E>"
				else
					write "class X{c}<E>: X{c.supers.first}<E>, {c}<E>"
				end
			end
			write "\{"
			write "\toverride public long Id() \{ return {c.id}; \}"
			write "\tvirtual public long F{c.id}() \{ return {c.id}; \}"
			write "\tpublic long A{c.id} = {c.id};"
			write "\tpublic {cname}() \{ aid = {c.id}; \}"
			write "\}"
		end

		write "static void Main(string[] args) \{"
		write "\tRoot b = {ia.first};"
		write "\tRoot tmp = b;"
		for i in ia do
			write "\tb = b.SetNext({i});"
		end
		write "\tb.SetNext(tmp);"
		write "\tRoot a = {ia.last};"
		write "\ttmp = a;"
		for i in [1..poly[ do
			write "\ta = a.SetNext({ia[ia.length - 1 - i]});"
		end
		write "\ta.SetNext(tmp);"
		write "\tTest(b, b.GetNext(), 10, -100);"
		write "\tTest(a, a.GetNext(), {loops}, 0);"
		write "\}"

		write "static void Test(Root a, Root b, long loops, long start) \{"
		write "\tlong x = start;"
		write "\tfor(long i = loops; i > 0; i--) \{"
		write "\t\tfor(long j = loops; j >0; j--) \{"
		var test = "x>=0"
		if not dry then test = testcsharp(interfaces)
		write "\t\t\tif({test}) \{"
		write "\t\t\t\tRoot tmp = a; a = b; b = tmp;"
		if check then write "\t\t\t\tx++;"
		write "\t\t\t\} else \{ x += 1; a = a.GetNext(); b = b.GetNext();\};"
		write "\t\t\}"
		write "\t\tx += 1; a = a.GetNext(); b = b.GetNext();"
		write "\t\}"
		write "\tSystem.Console.WriteLine(x);"
		write "\}"
		write "\}"
		file.close
	end

	fun initscala(res: Array[String], interfaces: Bool) do return
	fun testscala(interfaces: Bool): String do return "true"
	fun writescala(dir: String, name: String, interfaces: Bool)
	do
		var ia = new Array[String]
		initscala(ia, interfaces)
		if ia.is_empty then
			print "Scala disabled"
			return
		end

		dir = "{dir}/scala"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.scala")

		write "object {name} \{"
		if use_root0 then
			write "class Root0 \{"
		else
			write "class Root \{"
		end
		write "\tdef id: Long = 0; var aid: Long = id; var next: Root = null; def getNext: Root = next; def setNext(next: Root): Root = \{ this.next = next; return next; \} \}"

		if use_root0 then
			write "class Root extends Root0 \{\}"
		end

		for c in classes do
			if interfaces then
				write "trait {c}[+E] "
			else
				write "class {c}[+E] "
			end
			if c.supers.is_empty then
				write "\textends Root"
			else for s in [c.supers.first] do
				write "\textends {s}[E]"
			end
			if interfaces then
				write "\{\}"
				if c.supers.is_empty then
					write "class X{c}[E] extends {c}[E]"
				else
					write "class X{c}[E] extends X{c.supers.first}[E] with {c}[E]"
				end
			end
			write "\{"
			write "\toverride def id: Long = {c.id}"
			write "\tdef f{c.id}: Long = {c.id}"
			if interfaces then
				write "\tvar a{c.id}: Long = {c.id}"
			end
			write "\}"
		end

		write "def main(args: Array[String]) = \{"
		write "\tvar b: Root = {ia.first};"
		write "\tvar tmp = b;"
		for i in ia do
			write "\tb = b.setNext({i});"
		end
		write "\tb.setNext(tmp);"
		write "\tvar a: Root = {ia.last};"
		write "\ttmp = a;"
		for i in [1..poly[ do
			write "\ta = a.setNext({ia[ia.length - 1 - i]});"
		end
		write "\ta.setNext(tmp);"
		write "\ttest(b, b.getNext, 10, -100);"
		write "\ttest(a, a.getNext, {loops}, 0);"
		write "\}"

		write "def test(aa:Root, bb:Root, l: Long, start: Long) = \{"
		write "\tvar a = aa"
		write "\tvar b = bb"
		write "\tvar x = start"
		write "\tvar loops = l"
		write "\tvar i = loops"
		write "\twhile (i > 0) \{"
		write "\t\tvar j = loops"
		write "\t\twhile (j > 0) \{"
		var test = "x>=0"
		if not dry then test = testscala(interfaces)
		write "\t\t\tif ({test}) \{"
		write "\t\t\t\tval tmp = a; a = b; b = tmp;"
		if check then write "\t\t\t\tx += 1;"
		write "\t\t\t\} else \{ x += 1; a = a.getNext; b = b.getNext;\}"
		write "\t\t\tj -= 1"
		write "\t\t\}"
		write "\t\tx += 1; a = a.getNext; b = b.getNext;"
		write "\t\ti -= 1"
		write "\t\t\}"
		write "\tprintln(x)"
		write "\}"
		write "\}"

		file.close
	end

	fun initcpp(res: Array[String]) do return
	fun testcpp: String do return "true"
	fun writecpp(dir: String, name: String)
	do
		var ia = new Array[String]
		initcpp(ia)
		if ia.is_empty then
			print "C++ diabled"
			return
		end

		dir = "{dir}/cpp"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.cpp")

		write "#include <iostream>"
		write "#include <stdlib.h>"
		if use_root0 then
			write "class Root;"
			write "class Root0"
		else
			write "class Root"
		end
		write "\t\{ public: virtual long id() \{ return 0;\} long aid; Root *next; virtual Root *setNext(Root *n) \{this->next = n; return n;\} \};"

		if use_root0 then
			write "class Root: public virtual Root0 \{\};"
		end

		for c in classes do
			write "template<class E>"
			write "class {c} "
			if c.supers.is_empty then
				write "\t: public virtual Root"
			else for s in [c.supers.first] do
				write "\t: public virtual {s}<E>"
			end
			write "\{"
			write "\tpublic: virtual long id() \{ return {c.id}; \}"
			write "\tvirtual long f{c.id}() \{ return {c.id}; \}"
			write "\tlong a{c.id};"
			write "\t{c}(): a{c.id}({c.id}) \{ this->aid = {c.id}; \}"
			write "\};"
		end

		write "void test(Root *a, Root *b, long loops, long start) \{"
		write "\tlong x = start;"
		write "\tfor(long i = loops; i > 0; i--) \{"
		write "\t\tfor(int j = loops; j > 0; j--) \{"
		var test = "x>=0"
		if not dry then test = testcpp
		write "\t\t\tif({test}) \{"
		write "\t\t\t\tRoot *tmp = a; a = b; b = tmp;"
		if check then write "\t\t\t\tx += 1;"
		write "\t\t\t\} else \{ x++; a = a->next; b = b->next;\}"
		write "\t\t\}"
		write "\t\tx++; a = a->next; b = b->next;"
		write "\t\}"
		write "\tstd::cout << x << std::endl;"
		write "\}"

		write "int main(int argc, char **argv) \{"
		write "\tRoot *b = {ia.first};"
		write "\tRoot *tmp = b;"
		for i in ia do
			write "\tb = b->setNext({i});"
		end
		write "\tb->setNext(tmp);"
		write "\tRoot *a = {ia.last};"
		write "\ttmp = a;"
		for i in [1..poly[ do
			write "\ta = a->setNext({ia[ia.length - 1 - i]});"
		end
		write "\ta->setNext(tmp);"
		write "\ttest(b, b->next, 10, -100);"
		write "\ttest(a, a->next, {loops}, 0);"
		write "\}"

		file.close
	end

	fun inite(res: Array[String], se: Bool) do return
	fun teste(se: Bool): String do return "true"
	fun locale(se: Bool) do end
	fun writee(dir: String, name: String, se: Bool)
	do
		var ia = new Array[String]
		inite(ia,se)
		if ia.is_empty then
			print "Eiffel disabled"
			return
		end

		if se then
			dir = "{dir}/se/{name}"
		else
			dir = "{dir}/es/{name}"
		end
		dir.mkdir

		var root0
		if use_root0 then
			root0 = "ROOT0"
			file = new FileWriter.open("{dir}/root0.e")
		else
			root0 = "ROOT"
			file = new FileWriter.open("{dir}/root.e")
		end

		var istk = ""
		if se then istk = " is"
		write "class {root0}"
		write "feature id: INTEGER_64 {istk} do Result := 0 end"
		write "aid: INTEGER_64"
		write "xnext: detachable ROOT"
		write "next: ROOT do check attached xnext as n then Result := n end end"
		write "set_next(n: ROOT): ROOT do xnext := n Result := n end"
		write "make do aid := id end"
		write "end"
		file.close

		if use_root0 then
			file = new FileWriter.open("{dir}/root.e")
			write "class ROOT inherit ROOT0 end "
			file.close
		end

		for c in classes do
			file = new FileWriter.open("{dir}/{c}.e")
			write "class {c}[E] "
			if c.supers.is_empty then
				write "\tinherit ROOT"
			else for s in [c.supers.first] do
				write "\tinherit {s}[E]"
			end
			write "\t\tredefine id, make end"
			write "create make"
			write "feature"
			write "\tid: INTEGER_64 {istk} do Result := {c.id} end"
			write "\tf{c.id}: INTEGER_64 {istk} do Result := {c.id} end"
			write "\ta{c.id}: INTEGER_64 {istk} attribute Result := {c.id} end"
			write "make do aid := {c.id} end"
			write "end"
			file.close
		end

		file = new FileWriter.open("{dir}/app{name}.e")
		write "class APP{name.to_upper}"
		if se then
			write "insert ARGUMENTS"
		end
		write "create make"
		write "feature"

		if se then
			write "\tmake{istk}"
		else
			write "\tmake(args: ARRAY[STRING]){istk}"
		end
		write "\t\tlocal"
		write "\t\t\ta: ROOT"
		write "\t\t\tb: ROOT"
		write "\t\t\ttmp: ROOT"
		write "\t\tdo"
		write "\t\t\tb := {ia.first} .make"
		write "\t\t\ttmp := b"
		for i in ia do
			write "\t\t\tb := b.set_next({i} .make)"
		end
		write "\t\t\ttmp := b.set_next(tmp)"

		write "\t\t\ta := {ia.last} .make"
		write "\t\t\ttmp := a"
		for i in [1..poly[ do
			write "\t\t\ta := a.set_next({ia[ia.length - 1 - i]} .make)"
		end
		write "\t\t\ttmp := a.set_next(tmp);"
		write "\t\t\ttest(b, b.next, 10, -100)"
		write "\t\t\ttest(a, a.next, {loops}, 0)"
		write "\t\tend"

		write "\ttest(aa: ROOT; bb: ROOT; l: INTEGER_64; start: INTEGER_64){istk}"
		write "\t\tlocal"
		write "\t\t\ta: ROOT"
		write "\t\t\tb: ROOT"
		write "\t\t\ttmp: ROOT"
		write "\t\t\ti: INTEGER_64"
		write "\t\t\tj: INTEGER_64"
		write "\t\t\tx: INTEGER_64"
		locale(se)
		write "\t\t\tloops: INTEGER_64"
		write "\t\tdo"
		write "\t\t\ta := aa"
		write "\t\t\tb := bb"
		write "\t\t\tx := start"
		write "\t\t\tloops := l"
		write "\t\t\tfrom i := loops until i<=0 loop"
		write "\t\t\t\tfrom j := loops until j<=0 loop"
		var test = "x >= 0"
		if not dry then test = teste(se)
		write "\t\t\t\t\tif {test} then"
		write "\t\t\t\t\t\ttmp := a; a := b; b := tmp"
		if check then write "\t\t\t\t\tx := x + 1"
		write "\t\t\t\t\telse x := x + 1; a := a.next; b := b.next end"
		write "\t\t\t\t\tj := j - 1"
		write "\t\t\t\tend"
		write "\t\t\t\tx := x + 1; a := a.next; b := b.next"
		write "\t\t\t\ti := i - 1"
		write "\t\t\tend"
		write "\t\t\tprint(x.out)"
		write "\t\t\tprint(\"%N\")"
		write "\t\tend"
		write "end"
		file.close
	end

	fun initpython(res: Array[String]) do return
	fun testpython: String do return "true"
	fun writepython(dir: String, name: String)
	do
		var ia = new Array[String]
		initpython(ia)
		if ia.is_empty then
			print "Python disabled"
			return
		end

		dir = "{dir}/python"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.py")

		if use_root0 then
			write "class Root0(object):"
		else
			write "class Root(object):"
		end
		write "\tdef id(self): return 0"
		write "\tdef set_next(self, n):\n\t\tself.next = n\n\t\treturn n"
		write "\tdef __init__(self): self.aid = self.id()"

		if use_root0 then
			write "class Root(Root0): pass"
		end

		for c in classes do
			if c.supers.is_empty then
				write "class {c}(Root):"
			else
				write "class {c}({c.supers.join(",")}):"
			end
			write "\tdef id(self): return {c.id}"
			write "\tdef f{c.id}(self): return {c.id}"
			write "\tdef __init__(self):"
			write "\t\tsuper({c}, self).__init__()"
			write "\t\ta{c.id} = {c.id}"
		end

		write "def test(a, b, loops, start):"
		write "\tx = start"
		write "\ti = loops"
		write "\twhile i > 0:"
		write "\t\tj = loops"
		write "\t\twhile j > 0:"
		var test = "x >= 0"
		if not dry then test = testpython
		write "\t\t\tif {test}:"
		write "\t\t\t\ttmp = a; a = b; b = tmp"
		if check then write "\t\t\t\tx += 1"
		write "\t\t\telse:"
		write "\t\t\t\tx = x + 1; a = a.next; b = b.next"
		write "\t\t\tj -= 1"
		write "\t\tx = x + 1; a = a.next; b = b.next"
		write "\t\ti -= 1"
		write "\tprint(x)"

		write "b = {ia.first}"
		write "tmp = b"
		for i in ia do
			write "b = b.set_next({i})"
		end
		write "b.next = tmp"
		write "a = {ia.last}"
		write "tmp = a"
		for i in [1..poly[ do
			write "a = a.set_next({ia[ia.length - 1 - i]})"
		end
		write "a.next = tmp"
		write "test(b, b.next, 10, -100)"
		write "test(a, a.next, {loops}, 0)"

		file.close
	end

	var count = false

	fun genall
	do
		var g = self
		var outdir = args.first
		var name = args[1]
		var use_interfaces = self.use_interfaces
		if args.length > 2 then g.dept = args[2].to_i
		if args.length > 3 then loops = args[3].to_i
		if args.length > 4 then use_interfaces = false

		g.genhier

		g.writenit(outdir, name)
		g.writejava(outdir, name, use_interfaces)
		g.writecsharp(outdir, name, use_interfaces)
		g.writescala(outdir, name, use_interfaces)
		g.writecpp(outdir, name)
		g.writee(outdir, "{name}_se", true)
		g.writee(outdir, name, false)
		g.writepython(outdir, name)
	end
end

var g = new Generator
g.genall
