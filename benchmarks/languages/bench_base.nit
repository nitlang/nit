#!/usr/bin/env nit

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

	var dept writable = 5
	var loops writable = 50000
	var middle writable = 0
	var dry writable = false
	var check writable = false

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
		middle = (dept + 1) / 2
	end

	var file: nullable FileWriter = null
	fun write(str: String)
	do
		file.write(str)
		file.write("\n")
	end

	fun initnit(res: Array[String]) is abstract
	fun testnit: String do return "true"

	fun writenit(dir: String, name: String)
	do
		dir = "{dir}/nit"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.nit")

		write "class Root\n\tfun id: Int do return 0\nend"
		for c in classes do
			write "class {c}[E]"
			if c.supers.is_empty then
				write "\tsuper Root"
			else for s in c.supers do
				write "\tsuper {s}[E]"
			end
			write "\tredef fun id do return {c.id}"
			write "end"
		end

		write "fun test(a,b: Root, loops, start: Int)"
		write "do"
		write "var x = start"
		write "var i = 0"
		write "while i < loops do"
		write "\tvar j = 0"
		write "\twhile j < loops do"
		var test = "true"
		if not dry then test = testnit
		write "\t\tif {test} and x >= 0 then"
		if check then write "\t\tx += 1"
		write "\telse"
		write "\t\t\tx = x - 1 + i - j"
		write "\t\t\ta = b"
		write "\t\tend"
		write "\t\tj += 1"
		write "\tend"
		write "\ti += 1"
		write "end"
		write "print x"
		write "end"

		var ia = new Array[String]
		initnit(ia)
		write "var a: Root = {ia.first}"
		write "var b: Root = a"
		for i in ia do
			write "\t\t\tif a.id > 0 then a = {i}"
		end
		write "test(b, b, 10, -100)"
		write "test(a, a, {loops}, 0)"

		file.close
	end

	fun initjava(res: Array[String], interfaces: Bool) is abstract
	fun testjava(interfaces: Bool): String do return "true"
	fun writejava(dir: String, name: String, interfaces: Bool)
	do
		dir = "{dir}/java"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.java")

		var cl = ""
		if interfaces then cl = "X"
		write "class {name} \{"
		if interfaces then
			write "static interface Root\n\t\{ int id(); \}"
		else
			write "static class Root\n\t\{ int id() \{ return 0;\} \}"
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
				write "static class X{c}<E> implements {c}<E>"
			end
			write "\{"
			write "\tpublic int id() \{ return {c.id}; \}"
			write "\}"
		end

		write "static public void main(String args[]) \{"
		var ia = new Array[String]
		initjava(ia, interfaces)
		write "Root a = {ia.first};"
		write "Root b = a;"
		for i in ia do
			write "\t\t\tif (a.id() > 0) a = {i};"
		end
		write "\ttest(b, b, 10, -100);"
		write "\ttest(a, a, {loops}, 0);"
		write "\}"

		write "static public void test(Root a, Root b, int loops, int start) \{"
		write "\tint x = start;"
		write "\tfor(int i = 0; i < loops; i++) \{"
		write "\t\tfor(int j = 0; j < loops; j++) \{"
		var test = "true"
		if not dry then test = testjava(interfaces)
		write "\t\t\tif({test} && x>=0) \{"
		if check then write "\t\t\t\tx = x + 1;"
		write "\t\t\t\} else \{ x = x - 1 + i - j; a = b;\}"
		#write "\t\t\t\} else \{ x = x - 1; a = b;\}"
		write "\t\t}"
		write "\t\}"
		write "\tSystem.out.println(x);"
		write "\}"
		write "\}"
		file.close
	end

	fun initcsharp(res: Array[String], interfaces: Bool) is abstract
	fun testcsharp(interfaces: Bool): String do return "true"
	fun writecsharp(dir: String, name: String, interfaces: Bool)
	do
		dir = "{dir}/cs"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.cs")

		var cl = ""
		if interfaces then cl = "X"
		write "class {name} \{"
		if interfaces then
			write "interface Root\n\t\{ int Id(); \}"
		else
			write "class Root\n\t\{ public int Id() \{ return 0;\} \}"
		end
		for c in classes do
			if interfaces then
				write "interface {c}<out E> "
			else
				write "class {c}<E> "
			end
			if c.supers.is_empty then
				write "\t: Root"
			else for s in [c.supers.first] do
				write "\t: {s}<E>"
			end
			if interfaces then
				write "\{\}"
				write "class X{c}<E> : {c}<E>"
			end
			write "\{"
			write "\tpublic int Id() \{ return {c.id}; \}"
			write "\}"
		end

		write "static void Main(string[] args) \{"
		var ia = new Array[String]
		initcsharp(ia, interfaces)
		write "Root a = {ia.first};"
		write "Root b = a;"
		for i in ia do
			write "\t\t\tif (a.Id() > 0) a = {i};"
		end
		write "\tTest(b, b, 10, -100);"
		write "\tTest(a, a, {loops}, 0);"
		write "\}"

		write "static void Test(Root a, Root b, int loops, int start) \{"
		write "\tint x = start;"
		write "\tfor(int i = 0; i < loops; i++) \{"
		write "\t\tfor(int j = 0; j < loops; j++) \{"
		var test = "true"
		if not dry then test = testcsharp(interfaces)
		write "\t\t\tif({test} && x>=0) \{"
		if check then write "\t\t\t\tx++;"
		write "\} else \{ x = x - 1 + i - j; a = b; \};"
		write "\t\t}"
		write "\t\}"
		write "\tSystem.Console.WriteLine(x);"
		write "\}"
		write "\}"
		file.close
	end

	fun initscala(res: Array[String], interfaces: Bool) is abstract
	fun testscala(interfaces: Bool): String do return "true"
	fun writescala(dir: String, name: String, interfaces: Bool)
	do
		dir = "{dir}/scala"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.scala")

		var cl = ""
		write "object {name} \{"
		write "class Root\n\t\{ def id: Int = 0 \}"
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
				write "class X{c}[E] extends {c}[E]"
			end
			write "\{"
			write "\toverride def id: Int = {c.id}"
			write "\}"
		end

		write "def main(args: Array[String]) = \{"
		var ia = new Array[String]
		initscala(ia, interfaces)
		write "var a: Root = {ia.first};"
		write "var b: Root = a;"
		for i in ia do
			write "\t\t\tif (a.id > 0) a = {i};"
		end
		write "\ttest(b, b, 10, -100)"
		write "\ttest(a, a, {loops}, 0)"
		write "\}"

		write "def test(aa:Root, b:Root, l: Int, start: Int) = \{"
		write "\tvar a = aa"
		write "\tvar x = start"
		write "\tvar loops = l"
		write "\tvar i = 0"
		write "\twhile (i < loops) \{"
		write "\t\tvar j = 0"
		write "\t\twhile (j < loops) \{"
		var test = "true"
		if not dry then test = testscala(interfaces)
		write "\t\tif ({test} && x>=0) \{"
		if check then write "\t\t\tx += 1;"
		#write "\} else \{ x = x - 1 + i - j; a = b; \}"
		write "\} else \{ x = x - 1; a = b; \}"
		write "\t\tj += 1"
		write "\t\t\}"
		write "\ti += 1"
		write "\t\}"
		write "\t\t\tprintln(x)"
		write "\}"
		write "\}"

		file.close
	end

	fun initcpp(res: Array[String]) is abstract
	fun testcpp: String do return "true"
	fun writecpp(dir: String, name: String)
	do
		dir = "{dir}/cpp"
		dir.mkdir
		file = new FileWriter.open("{dir}/{name}.cpp")

		write "#include <iostream>"
		write "#include <stdlib.h>"
		write "class Root\n\t\{ public: virtual int id() \{ return 0;\} \};"
		for c in classes do
			write "template<class E>"
			write "class {c} "
			if c.supers.is_empty then
				write "\t: public virtual Root"
			else for s in [c.supers.first] do
				write "\t: public virtual {s}<E>"
			end
			write "\{"
			write "\tpublic: virtual int id() \{ return {c.id}; \}"
			write "\};"
		end

		write "void test(Root *a, Root *b, int loops, int start) \{"
		write "\tint x = start;"
		write "\tfor(int i = 0; i < loops; i++) \{"
		write "\t\tfor(int j = 0; j < loops; j++) \{"
		var test = "true"
		if not dry then test = testcpp
		write "\t\tif({test} && x>=0) \{"
		if check then write "\t\t\tx += 1;"
		write "\} else \{ x = x - 1 + i - j; a = b;\}"
		write "\t\t}"
		write "\t\}"
		write "\tstd::cout << x << std::endl;"
		write "\}"

		write "int main(int argc, char **argv) \{"
		var ia = new Array[String]
		initcpp(ia)
		write "Root *a = {ia.first};"
		write "Root *b = a;"
		for i in ia do
			write "\t\t\tif (a->id() > 0) a = {i};"
		end
		write "\ttest(b, b, 10, -100);"
		write "\ttest(a, a, {loops}, 0);"
		write "\}"

		file.close
	end

	fun inite(res: Array[String], se: Bool) is abstract
	fun teste(se: Bool): String do return "true"
	fun locale(se: Bool) do end
	fun writee(dir: String, name: String, se: Bool)
	do
		if se then
			dir = "{dir}/se/{name}"
		else
			dir = "{dir}/es/{name}"
		end
		dir.mkdir
		file = new FileWriter.open("{dir}/root.e")

		var istk = ""
		if se then istk = " is"
		write "class ROOT"
		write "feature id: INTEGER {istk} do Result := 0 end"
		write "end"
		file.close

		for c in classes do
			file = new FileWriter.open("{dir}/{c}.e")
			write "class {c}[E] "
			if c.supers.is_empty then
				write "\tinherit ROOT"
			else for s in [c.supers.first] do
				write "\tinherit {s}[E]"
			end
			write "\t\tredefine id end"
			write "feature"
			write "\tid: INTEGER {istk} do Result := {c.id} end"
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
		write "\t\tdo"
		var ia = new Array[String]
		inite(ia,se)
		write "{ia.first}"
		write "b := a"
		for i in ia do
			write "\t\t\tif a.id > 0 then {i} end"
		end
		write "\t\t\ttest(b, b, 10, -100)"
		write "\t\t\ttest(a, a, {loops}, 0)"
		write "\t\tend"

		write "\ttest(aa: ROOT; b: ROOT; l: INTEGER; start: INTEGER){istk}"
		write "\t\tlocal"
		write "\t\t\ta: ROOT"
		write "\t\t\ti: INTEGER"
		write "\t\t\tj: INTEGER"
		write "\t\t\tx: INTEGER"
		locale(se)
		write "\t\t\tloops: INTEGER"
		write "\t\tdo"
		write "\t\t\ta := aa"
		write "\t\t\tx := start"
		write "\t\t\tloops := l"
		write "\t\t\tfrom i := 0 until i>=loops loop"
		write "\t\t\t\tfrom j := 0 until j>=loops loop"
		var test = "True"
		if not dry then test = teste(se)
		write "\t\t\t\t\tif {test} and then x >= 0 then" 
		if check then write "\t\t\t\t\tx := x + 1"
		write "\t\t\t\t\telse x := x - 1 + i - j; a := b end"
		write "\t\t\t\t\tj := j + 1"
		write "\t\t\t\tend"
		write "\t\t\t\ti := i + 1"
		write "\t\t\tend"
		write "\t\t\tprint(x.out)"
		write "\t\t\tprint(\"%N\")"
		write "\t\tend"
		write "end"
		file.close
	end

	var count = false

	fun genall
	do
		var g = self
		var outdir = args.first
		var name = args[1]
		var use_interfaces = true
		if args.length > 2 then g.dept = args[2].to_i
		if args.length > 3 then use_interfaces = false

		g.genhier

		g.writenit(outdir, name)
		g.writejava(outdir, name, use_interfaces)
		g.writecsharp(outdir, name, use_interfaces)
		g.writescala(outdir, name, use_interfaces)
		g.writecpp(outdir, name)
		g.writee(outdir, "{name}_se", true)
		g.writee(outdir, name, false)
	end
end

var g = new Generator
g.genall
