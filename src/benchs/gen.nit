#!/usr/bin/env nit

# Microbenchmak generation for multiple language
# Just a quick an dirty Nit script file :)

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

	var width = 5
	var height = 5
	var superprobs: Array[Int] = [40, 20, 5]

	fun genhier
	do
		var i = 0
		for w in [0..width[ do
			var s: nullable Klass = null
			for h in [0..height[ do
				i += 1
				var c = new Klass(i)

				classes.add(c)
				c.all_supers.add(c)
				if s != null then
					c.supers.add(s)
					c.all_supers.add_all(s.all_supers)
				end
				s = c
			end
		end

		for j in [0..listlen[ do
			var c = classes[classes.length - 1 - (j % classes.length)]
			list.unshift(c)
			unlist.push(c)
		end
	end

	# List of instantited class in the order to read
	var list = new List[Klass]

	# List of instantited class in the order to push
	var unlist = new List[Klass]

	var arraylen = 2000
	var loops = 10000

	var listlen = 50

	var file: nullable OFStream = null
	fun write(str: String)
	do
		file.write(str)
		file.write("\n")
	end

	fun writenit(name: String)
	do
		file = new OFStream.open("{name}.nit")
		write "class Root\n\tfun id: Int do return 0\nend"
		for c in classes do
			write "class {c}"
			if c.supers.is_empty then
				write "\tsuper Root"
			else for s in c.supers do
				write "\tsuper {s}"
			end
			write "\tredef fun id do return {c.id}"
			write "end"
		end
		write "class L[E]\n\tsuper Root\n\tvar item:E \n\tvar next: nullable L[E]\ninit(item:E,next: nullable L[E])do\n\tself.item = item\n\tself.next=next\nend\nend"

		write "fun fill: nullable L[Root]\ndo"
		write "\tvar head: nullable L[Root] = null"
		write "\tvar l: L[Root]"
		for c in classes do
			write "\tvar l{c} = new L[{c}](new {c}, null)"
			write "\thead = new L[Root](l{c}, head)"
		end
		write "\thead = null"
		write "for x in [0..{arraylen}[ do"
		for i in [0..listlen[ do
			var c = unlist[i]
			write "\tvar l{i} = new L[{c}](new {c}, null)"
			write "\thead = new L[Root](l{i}, head)"
		end
		write "end"
		write "return head"
		write "end"

		write "fun run(head1: nullable L[Root], head2: nullable L[Root]): Int\ndo"
		write "\tvar cpt = 0"
		write "\tvar y = {loops/list.length}"
		write "\twhile y > 0 do"
		write "\tvar n1 = head1"
		write "\tvar n2 = head2"
		write "\twhile not n1 is null do"
		for i in [0..listlen[ do
			var c = list[i]
			write "\t\tvar l{i} = n1.item"
			write "\t\tvar lc{i} = l{i}.as(L[{c}])"
			write "\t\tvar c{i} = lc{i}.item"
			write "\t\tn1 = n1.next"
			if count then
				write "\t\tif c{i}.id == {c.id} then cpt += 1"
			end
			write "\t\tvar l2_{i} = n2.item"
			write "\t\tvar lc2_{i} = l2_{i}.as(L[{c}])"
			write "\t\tlc2_{i}.item = c{i}"
			write "\t\tn2 = n2.next"
		end
		write "\tend"
		write "y -= 1"
		write "end"
		write "return cpt"
		write "end"

		write "var head = fill"
		write "var loops = 25"
		write "if not args.is_empty then loops = args.first.to_i "
		write "for x in [0..loops[ do"
		write "\tvar cpt = run(head, head)"
		write "\tprint \"\{x\}:\tcpt:\{cpt\}\""
		write "end"
		file.close
	end

	fun writejava(name: String, interfaces: Bool)
	do
		var cl = ""
		if interfaces then cl = "X"
		file = new OFStream.open("{name}.java")
		write "class {name} \{"
		if interfaces then
			write "static interface Root\n\t\{ int id(); \}"
		else
			write "static class Root\n\t\{ int id() \{ return 0;\} \}"
		end
		for c in classes do
			if interfaces then
				write "static interface {c} "
			else
				write "static class {c} "
			end
			if c.supers.is_empty then
				write "\textends Root"
			else for s in [c.supers.first] do
				write "\textends {s}"
			end
			if interfaces then
				write "\{\}"
				write "static class X{c} implements {c}"
			end
			write "\{"
			write "\tpublic int id() \{ return {c.id}; \}"
			write "\}"
		end
		write "static class L<E>"
		if interfaces then
			write "implements Root \{"
		else
			write "extends Root \{"
		end
		write "\tE _item; E item() \{ return _item; \} void set_item(E i) \{ _item = i; \}"
		write "\tL<E> _next; L<E> next() \{ return _next; \} void set_next(L<E> n) \{ _next = n; \}"
		write "\tL(E i, L<E> n) \{ set_item(i); set_next(n); \}"
		write "\tpublic int id() \{ return -1; \}"
		write "\}"

		write "static L<Root> fill() \{"
		write "\tL<Root> head = null;"
		for c in classes do
			write "\tL<{c}> l{c} = new L<{c}>(new {cl}{c}(), null);"
			write "\thead = new L<Root>(l{c}, head);"
		end
		write "\thead = null;"
		write "for (int x=0; x<{arraylen}; x++) \{"
		for i in [0..listlen[ do
			var c = unlist[i]
			write "\tL<{c}> l{i} = new L<{c}>(new {cl}{c}(), null);"
			write "\thead = new L<Root>(l{i}, head);"
		end
		write "\}"
		write "return head;"
		write "\}"

		write "static int run(L<Root> head1, L<Root> head2) \{"
		write "\tint cpt = 0;"
		write "\tint y = {loops/list.length};"
		write "\twhile (y > 0) \{;"
		write "\tL<Root> n1 = head1;"
		write "\tL<Root> n2 = head2;"
		write "\twhile (n1 != null) \{"
		for i in [0..listlen[ do
			var c = list[i]
			write "\t\tRoot l{i} = n1.item();"
			write "\t\tL<{c}> lc{i} = (L<{c}>)l{i};"
			write "\t\t{c} c{i} = lc{i}.item();"
			write "\t\tn1 = n1.next();"
			if count then
				write "\t\tif (c{i}.id() == {c.id}) cpt += 1;"
			end
			write "\t\tRoot l2_{i} = n2.item();"
			write "\t\tL<{c}> lc2_{i} = (L<{c}>)l2_{i};"
			write "\t\tlc2_{i}.set_item(c{i});"
			write "\t\tn2 = n2.next();"
		end
		write "\t\}"
		write "y -= 1;"
		write "\}"
		write "return cpt;"
		write "\}"

		write "static public void main(String args[]) \{"
		write "L<Root> head = fill();"
		write "int loops = 25;"
		write "if (args.length > 0) loops = Integer.parseInt(args[0]);"
		write "for (int x=0; x<loops; x++) \{"
		write "\tint cpt = run(head, head);"
		write "\tSystem.out.println(\"\" + x + \":\\t\" + cpt);"
		write "\}"
		write "\}"
		write "\}"
		file.close
	end

	fun writecpp(name: String)
	do
		file = new OFStream.open("{name}.cpp")
		write "#include <iostream>"
		write "#include <stdlib.h>"
		write "class Root\n\t\{ public: virtual int id() \{ return 0;\} \};"
		for c in classes do
			write "class {c} "
			if c.supers.is_empty then
				write "\t: public virtual Root"
			else for s in [c.supers.first] do
				write "\t: public virtual {s}"
			end
			write "\{"
			write "\tpublic: virtual int id() \{ return {c.id}; \}"
			write "\};"
		end
		write "template<class E>"
		write "class L: public virtual Root \{ public:"
		write "\tE _item; virtual E item() \{ return _item; \} virtual void set_item(E i) \{ _item = i; \}"
		write "\tL<E> *_next; virtual L<E> *next() \{ return _next; \} virtual void set_next(L<E> *n) \{ _next = n; \}"
		write "\tL(E i, L<E> *n) \{ set_item(i); set_next(n); \}"
		write "\};"

		write "L<Root*> *fill() \{"
		write "\tL<Root*> *head = 0;"
		for c in classes do
			write "\tL<{c}*> *l{c} = new L<{c}*>(new {c}(), 0);"
			write "\thead = new L<Root*>(l{c}, head);"
		end
		write "\thead = 0;"
		write "for (int x=0; x<{arraylen}; x++) \{"
		for i in [0..listlen[ do
			var c = unlist[i]
			write "\tL<{c}*> *l{i} = new L<{c}*>(new {c}(), 0);"
			write "\thead = new L<Root*>(l{i}, head);"
		end
		write "\}"
		write "return head;"
		write "\}"

		write "int run(L<Root*> *head1, L<Root*> *head2) \{"
		write "\tint cpt = 0;"
		write "\tint y = {loops/list.length};"
		write "\twhile (y > 0) \{;"
		write "\tL<Root*> *n1 = head1;"
		write "\tL<Root*> *n2 = head2;"
		write "\twhile (n1 != 0) \{"
		for i in [0..listlen[ do
			var c = list[i]
			write "\t\tRoot *l{i} = n1->item();"
			write "\t\tL<{c}*> *lc{i} = dynamic_cast<L<{c}*>*>(l{i});"
			write "\t\t{c} *c{i} = lc{i}->item();"
			write "\t\tn1 = n1->next();"
			if count then
				write "\t\tif (c{i}->id() == {c.id}) cpt += 1;"
			end
			write "\t\tRoot *l2_{i} = n2->item();"
			write "\t\tL<{c}*> *lc2_{i} = dynamic_cast<L<{c}*>*>(l2_{i});"
			write "\t\tlc2_{i}->set_item(c{i});"
			write "\t\tn2 = n2->next();"
		end
		write "\t\}"
		write "y -= 1;"
		write "\}"
		write "return cpt;"
		write "\}"

		write "int main(int argc, char **argv) \{"
		write "L<Root*> *head = fill();"
		write "int loops = 25;"
		write "if (argc > 1) loops = atoi(argv[1]);"
		write "for (int x=0; x<loops; x++) \{"
		write "\tint cpt = run(head, head);"
		write "\tstd::cout << x << \":\\t\" << cpt << std::endl;"
		write "\}"
		write "\treturn 0;"
		write "\}"
		file.close
	end
	fun writee(name: String, se: Bool)
	do
		var istk = ""
		if se then istk = " is"

		name.mkdir
		file = new OFStream.open("{name}/root.e")
		write "class ROOT"
		write "feature id: INTEGER {istk} do Result := 0 end"
		write "end"
		file.close

		for c in classes do
			file = new OFStream.open("{name}/{c}.e")
			write "class {c} "
			if c.supers.is_empty then
				write "\tinherit ROOT"
			else for s in [c.supers.first] do
				write "\tinherit {s}"
			end
			write "\t\tredefine id end"
			write "feature"
			write "\tid: INTEGER {istk} do Result := {c.id} end"
			write "end"
			file.close
		end

		file = new OFStream.open("{name}/l.e")
		write "class L[E]"
		write "inherit ROOT"
		write "create make"
		write "feature"
		write "\titem: E"
		write "\tset_item(i: E) {istk} do item := i end"
		write "\tnext: L[E]"
		write "\tset_next(n: L[E]) {istk} do next := n end"
		write "\tmake(i: E; n: L[E]) {istk} do set_item(i); set_next(n); end"
		write "end"
		file.close

		file = new OFStream.open("{name}/app{name}.e")
		write "class APP{name.to_upper}"
		if se then
			write "insert ARGUMENTS"
		end
		write "create make"
		write "feature"
		write "fill: L[ROOT] {istk}"
		write "local"
		write "\ti: INTEGER"
		write "do"
		for c in classes do
			write "\tcreate Result.make(create \{L[{c}]\}.make(create \{{c}\}, Void), Result)"
		end
		write "\tResult := Void;"
		write "from i := 0 until i >= {arraylen} loop"
		for i in [0..listlen[ do
			var c = unlist[i]
			write "\tcreate Result.make(create \{L[{c}]\}.make(create \{{c}\}, Void), Result)"
		end
		write "i := i + 1"
		write "end"
		write "end"

		write "run(head1: L[ROOT]; head2: L[ROOT]): INTEGER{istk}"
		write "local"
		write "\ty: INTEGER"
		write "\tn1, n2: L[ROOT]"
		for i in [0..listlen[ do
			var c = list[i]
			write "\t\tl{i}: ROOT"
			write "\t\tlc{i}: L[{c}]"
			write "\t\tc{i}: {c}"
			write "\t\tl2_{i}: ROOT"
			write "\t\tlc2_{i}: L[{c}]"
		end
		write "do"
		write "\tfrom y := {loops/list.length}"
		write "\tuntil y <= 0"
		write "\tloop"
		write "\tfrom"
		write "\tn1 := head1"
		write "\tn2 := head2"
		write "\tuntil n1 = Void loop"
		for i in [0..listlen[ do
			var c = list[i]
			write "\t\tl{i} := n1.item"
			write "\t\tlc{i} ?= l{i}"
			write "\t\tc{i} := lc{i}.item"
			if count then
				write "\t\tif c{i}.id = {c.id} then Result := Result + 1 end"
			end
			write "\t\tl2_{i} := n2.item"
			write "\t\tlc2_{i} ?= l2_{i}"
			write "\t\tlc2_{i}.set_item(c{i})"
			write "\t\tn1 := n1.next"
			write "\t\tn2 := n2.next"
		end
		write "end"
		write "y := y - 1"
		write "end"
		write "end"

		if se then
			write "make{istk}"
		else
			write "make(args: ARRAY[STRING]){istk}"
		end
		write "local"
		write "head: L[ROOT]"
		write "loops: INTEGER"
		write "cpt: INTEGER"
		write "x: INTEGER"
		write "do"
		write "head := fill"
		write "loops := 25"
		if se then
			write "if argument_count > 0 then loops := argument(1).to_integer"
		else
			write "if args.count > 1 then loops := args.item(1).to_integer"
		end
		write "from x := 0 until x>=loops loop"
		write "\tcpt := run(head, head)"
		write "\tprint(x.out+\":%T\"+cpt.out+\"%N\")"
		write "\t x := x + 1"
		write "end"
		write "end"
		write "end"
		write "end"
		file.close
	end

	var count = false
end

var g = new Generator
var name = args.first
if args.length > 1 then
	var opts = args[1].split_with("_")
	for opt in opts do
		var oname = opt.substring(0,1)
		var val = opt.substring_from(1).to_i
		if oname == "l" then
			g.listlen = val
		else if oname == "w" then
			g.width = val
		else if oname == "h" then
			g.height = val
		else
			print "Option inconnue '{oname}'"
			exit(1)
		end
	end
end
g.genhier
g.writenit(name)
g.writejava(name, true)
g.writecpp(name)
g.writee("{name}_se", true)
g.writee(name, false)
