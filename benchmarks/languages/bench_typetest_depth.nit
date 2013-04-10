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

	var dept = 5
	var loops = 10000
	var middle = 0

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

	var file: nullable OFStream = null
	fun write(str: String)
	do
		file.write(str)
		file.write("\n")
	end

	fun writenit(dir: String, name: String)
	do
		dir = "{dir}/nit"
		dir.mkdir
		file = new OFStream.open("{dir}/{name}.nit")

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

		write "for i in [0..{loops}[ do"
		write "\tfor j in [0..{loops}[ do"
		write "\t\tvar a:{classes.first}[Root] = new {classes.last}[Root]"
		write "\t\tprint a isa {classes[middle]}[Root]"
		write "\tend"
		write "end"

		file.close
	end

	fun writejava(dir: String, name: String, interfaces: Bool)
	do
		dir = "{dir}/java"
		dir.mkdir
		file = new OFStream.open("{dir}/{name}.java")

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
		write "\tfor(int i = 0; i < {loops}; i++) \{"
		write "\t\tfor(int j = 0; j < {loops}; j++) \{"
		if interfaces then
			write "\t\t\t{classes.first}<Root> a = new X{classes.last}<Root>();"
		else
			write "\t\t\t{classes.first}<Root> a = new {classes.last}<Root>();"
		end
		write "\t\t\tSystem.out.println(a instanceof {classes[middle]});"
		write "\t\t}"
		write "\t\}"
		write "\}"
		write "\}"
		file.close
	end

	fun writecsharp(dir: String, name: String, interfaces: Bool)
	do
		dir = "{dir}/cs"
		dir.mkdir
		file = new OFStream.open("{dir}/{name}.cs")

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
				write "interface {c}<E> "
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
		write "\tfor(int i = 0; i < {loops}; i++) \{"
		write "\t\tfor(int j = 0; j < {loops}; j++) \{"
		if interfaces then
			write "\t\t\t{classes.first}<Root> a = new X{classes.last}<Root>();"
		else
			write "\t\t\t{classes.first}<Root> a = new {classes.last}<Root>();"
		end
		write "\t\t\tSystem.Console.WriteLine(a is {classes[middle]}<Root>);"
		write "\t\t}"
		write "\t\}"
		write "\}"
		write "\}"
		file.close
	end

	fun writescala(dir: String, name: String, interfaces: Bool)
	do
		dir = "{dir}/scala"
		dir.mkdir
		file = new OFStream.open("{dir}/{name}.scala")

		var cl = ""
		write "object {name} \{"
		write "class Root\n\t\{ def id: Int = 0 \}"
		for c in classes do
			if interfaces then
				write "trait {c}[E] "
			else
				write "class {c}[E] "
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
		write "\tfor (i <- 0 to {loops}) \{"
		write "\t\tfor (j <- 0 to {loops}) \{"
		if interfaces then
			write "\t\t\tvar a:{classes.first}[Root] = new X{classes.last}[Root]()"
		else
			write "\t\t\tvar a:{classes.first}[Root] = new {classes.last}[Root]()"
		end
		write "\t\t\tprintln(a.isInstanceOf[{classes[middle]}[Root]])"
		write "\t\t\}"
		write "\t\}"
		write "\}"
		write "\}"

		file.close
	end

	fun writecpp(dir: String, name: String)
	do
		dir = "{dir}/cpp"
		dir.mkdir
		file = new OFStream.open("{dir}/{name}.cpp")

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

		write "int main(int argc, char **argv) \{"
		write "\tfor(int i = 0; i < {loops}; i++) \{"
		write "\t\tfor(int j = 0; j < {loops}; j++) \{"
		write "\t\t\t{classes.first}<Root>* a = new {classes.first}<Root>();"
		write "\t\t\t{classes[middle]}<Root>* to = dynamic_cast<{classes[middle]}<Root>*>(a);"
		write "\t\tif(to != 0) \{ std::cout << \"true\" << std::endl; \} else \{ std::cout << \"false\" << std::endl; \}"
		write "\t\t}"
		write "\t\}"
		write "\}"
		file.close
	end

	fun writee(dir: String, name: String, se: Bool)
	do
		if se then
			dir = "{dir}/se/{name}"
		else
			dir = "{dir}/es/{name}"
		end
		dir.mkdir
		file = new OFStream.open("{dir}/root.e")

		var istk = ""
		if se then istk = " is"
		write "class ROOT"
		write "feature id: INTEGER {istk} do Result := 0 end"
		write "end"
		file.close

		for c in classes do
			file = new OFStream.open("{dir}/{c}.e")
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

		file = new OFStream.open("{dir}/app{name}.e")
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
		write "\t\t\ta: {classes.first}[ROOT]"
		write "\t\t\tto: {classes[middle]}[ROOT]"
		write "\t\t\tx: INTEGER"
		write "\t\t\ty: INTEGER"
		write "\t\tdo"
		write "\t\t\tfrom x := 0 until x>={loops} loop"
		write "\t\t\t\tfrom y := 0 until y>={loops} loop"
		write "\t\t\t\t\tcreate \{{classes.last}[ROOT]\} a"
		write "\t\t\t\t\tto ?= a"
		write "\t\t\t\t\tprint((to /= Void).out)"
		write "\t\t\t\t\tprint(\"%N\")"
		write "\t\t\t\t\ty := y + 1"
		write "\t\t\t\tend"
		write "\t\t\t\tx := x + 1"
		write "\t\t\tend"
		write "\t\tend"
		write "end"
		file.close
	end

	var count = false
end

var g = new Generator
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
