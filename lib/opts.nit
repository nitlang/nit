# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Management of options on the command line
module opts

intrude import poset

# Super class of all option's class
abstract class Option
	# Names for the option (including long and short ones)
	var names: Array[String]

	# Type of the value of the option
	type VALUE: nullable Object

	# Human readable description of the option
	var helptext: String

	# Gathering errors during parsing
	var errors: Array[String]

	# Is this option mandatory?
	var mandatory: Bool writable

	# Is this option hidden?
	var hidden: Bool writable

	# Has this option been read?
	var read: Bool writable

	# Current value of this option
	var value: VALUE writable

	# Default value of this option
	var default_value: nullable VALUE writable

	# Labeled dependencies of this option
	private var labels : HashMap[Option, nullable Array[VALUE]]

	# Create a new option
	init init_opt(help: String, default: nullable VALUE, names: nullable Array[String])
	do
		if names == null then
			self.names = new Array[String]
		else
			self.names = names.to_a
		end
		helptext = help
		mandatory = false
		hidden = false
		read = false
		default_value = default
		value = default
		errors = new Array[String]
		labels = new HashMap[Option, Array[VALUE]]
	end

	# Get all the labels for a dependency between self and opt
	private fun get_labels(opt: Option): nullable Array[VALUE] do return labels[opt]

	# Add some labels to an existing dependency between self and opt
	fun add_labels(opt: Option, str: VALUE...) do
		if not labels.keys.has(opt) then
			labels[opt] = new Array[VALUE]
		end
		labels[opt].add_all(str)
	end

	# Does the dependency between self and opt has one (or more) label(s)?
	private fun has_label (opt: Option): Bool do return self.labels.keys.has(opt)

	# Add new aliases for this option
	fun add_aliases(names: String...) do names.add_all(names)

	# An help text for this option with default settings
	redef fun to_s do return pretty(2)

	# A pretty print for this help
	fun pretty(off: Int): String
	do
		var text = new FlatBuffer.from("  ")
		text.append(names.join(", "))
		text.append("  ")
		var rest = off - text.length
		if rest > 0 then text.append(" " * rest)
		text.append(helptext)
		#text.append(pretty_default)
		return text.to_s
	end

	fun pretty_default: String
	do
		var dv = default_value
		if dv != null then return " ({dv})"
		return ""
	end

	# Consume parameters for this option
	protected fun read_param(it: Iterator[String])
	do
		read = true
	end
end

# Not Really an option. Just add a line of text when displaying the usage
class OptionText
	super Option
	init(text: String) do init_opt(text, null, null)

	redef fun pretty(off) do return to_s

	redef fun to_s do return helptext
end

# A boolean option, true when present, false if not
class OptionBool
	super Option
	redef type VALUE: Bool

	init(help: String, names: String...) do init_opt(help, false, names)

	redef fun read_param(it)
	do
		super
		value = true
	end
end

# A count option. Count the number of time this option is present
class OptionCount
	super Option
	redef type VALUE: Int

	init(help: String, names: String...) do init_opt(help, 0, names)

	redef fun read_param(it)
	do
		super
		value += 1
	end
end

# Option with one parameter (mandatory by default)
abstract class OptionParameter
	super Option
	protected fun convert(str: String): VALUE is abstract

	# Is the parameter mandatory?
	var parameter_mandatory: Bool writable

	redef fun read_param(it)
	do
		super
		if it.is_ok and it.item.chars.first != '-' then
			value = convert(it.item)
			it.next
		else
			if parameter_mandatory then
				errors.add("Parameter expected for option {names.first}.")
			end
		end
	end

	init init_opt(h, d, n)
	do
		super
		parameter_mandatory = true
	end
end

# An option with a String as parameter
class OptionString
	super OptionParameter
	redef type VALUE: nullable String

	init(help: String, names: String...) do init_opt(help, null, names)

	redef fun convert(str) do return str
end

# An Option with an enum as parameter
# In the constructor, imagine you declare an option enum (-e) with an enum like["zero", "one", "two", "three"]
# In the command line, you type \"<cmd> -e one\" will give you 1 as a value
class OptionEnum
	super OptionParameter
	redef type VALUE: Int
	var values: Array[String]

	init(values: Array[String], help: String, default: Int, names: String...)
	do
		assert values.length > 0
		self.values = values.to_a
		init_opt("{help} <{values.join(", ")}>", default, names)
	end

	redef fun convert(str)
	do
		var id = values.index_of(str)
		if id == -1 then
			var e = "Unrecognized value for option {names.join(", ")}.\n"
			e += "Expected values are: {values.join(", ")}."
			errors.add(e)
		end
		return id
	end

	fun value_name: String do return values[value]

	redef fun pretty_default
	do
		if default_value != null then
			return " ({values[default_value.as(not null)]})"
		else
			return ""
		end
	end
end

# An option with an Int as parameter
class OptionInt
	super OptionParameter
	redef type VALUE: Int

	init(help: String, default: Int, names: String...) do init_opt(help, default, names)

	redef fun convert(str) do return str.to_i
end

# An option with a Float as parameter
class OptionFloat
	super OptionParameter
	redef type VALUE: Float

	init(help: String, default: Float, names: String...) do init_opt(help, default, names)

	redef fun convert(str) do return str.to_f
end

# An option with an array as parameter
# `myprog -optA arg1 -optA arg2`
# will give you Array[arg1, arg2]
class OptionArray
	super OptionParameter
	redef type VALUE: Array[String]

	init(help: String, names: String...)
	do
		values = new Array[String]
		init_opt(help, values, names)
	end

	private var values: Array[String]
	redef fun convert(str)
	do
		values.add(str)
		return values
	end
end

# Context where the option process
class OptionContext
	# Options present in the context
	var options: Array[Option]
	var rest: Array[String]
	# Errors found in the context after parsing (include options.errors, context.errors, dependencies.errors)
	var errors: Array[String]
	# graph of the dependencies between options in the context
	private var dependencies = new OptionPOSet[Option]
	private var optmap: Map[String, Option]

	init
	do
		options = new Array[Option]
		optmap = new HashMap[String, Option]
		rest = new Array[String]
		errors = new Array[String]
	end

	# Add some options to the context
	fun add_option(opts: Option...)
	do
		for opt in opts do
			options.add(opt)
		end
	end

	# display all the options available
	fun usage
	do
		var lmax = 1
		for i in options do
			var l = 3
			for n in i.names do
				l += n.length + 2
			end
			if lmax < l then lmax = l
		end

		for opt in options do
			if not opt.hidden then print(opt.pretty(lmax))
		end
	end

	# Parse and assign options everywhere in the argument list
	fun parse(argv: Collection[String])
	do
		var it = argv.iterator
		parse_intern(it)
		# get all possibly imaginable errors
		errors.add_all(get_opt_errors)
		errors.add_all(get_ctx_errors)
	end

	private fun parse_intern(it: Iterator[String])
	do
		var parseargs = true
		build
		var rest = rest

		while parseargs and it.is_ok do
			var str = it.item
			if str == "--" then
				it.next
				rest.add_all(it.to_a)
				parseargs = false
			else
				# We're looking for packed short options
				if str.chars.last_index_of('-') == 0 and str.length > 2 then
					var next_called = false
					for i in [1..str.length] do
						var short_opt = "-" + str.chars[i].to_s
						if optmap.has_key(short_opt) then
							var option = optmap[short_opt]
							if option isa OptionParameter then
								it.next
								next_called = true
							end
							option.read_param(it)
						end
					end
					if not next_called then it.next
				else
					if optmap.has_key(str) then
						var opt = optmap[str]
						it.next
						opt.read_param(it)
					else
						rest.add(it.item)
						it.next
					end
				end
			end
		end
	end

	# Return errors in the options in the context after parsing
	private fun get_opt_errors: Array[String]
	do
		var errors = new Array[String]
		for o in options do
			for e in o.errors do
				errors.add(e)
			end
		end
		return errors
	end

	# Return errors found during parsing
	# i.e. missing mandatory option
	private fun get_ctx_errors : Array[String] do
		var errors = new Array[String]
		# check for missing mandatory option
		for opt in options do
			if opt.mandatory and not opt.read then
				errors.add("Mandatory option {opt.names.first} not found.")
			end
		end
		# fetch dependencies errors
		errors.add_all(get_deps_errors)
		return errors
	end

	private fun get_deps_errors: Array[String] do
		var errors = new Array[String]
		for from in options do
			if from.read then
				for to in options do
					if dependencies.has_direct_edge(from, to) then
						# labeled dependency
						if is_labeled(from, to) then
							if from.labels[to].has(from.value) and not to.read then
								errors.add("Missing option {to.names.first} required by {from.names.first} on  value \"{from.value}\".")
							end
						else
							if not to.read then
								errors.add("Option {to.names.first} not found. Require by {from.names.first}.")
							end
						end
					end
				end
			end
		end
		return errors
	end

	private fun is_labeled (f: Option, t: Option): Bool do
		return f.has_label(t)
	end

	private fun build
	do
		for o in options do
			for n in o.names do
				optmap[n] = o
			end
		end
	end

	# Add a dependency in the context
	fun add_dependency(from: Option, to: Option) do
		dependencies.add_edge(from, to)
	end

	# Show all options dependencies in a graphical window and print some infos  about it in command line
	# Graphviz with a working -Txlib is expected.
	# Used for debugging
	fun show_dependencies do
		dependencies.show_dot
	end

	fun print_dependencies do
		for opt in options do
			if not opt isa OptionText then dependencies.show_deps_infos(opt)
		end
	end
end

private class OptionPOSet[E: Object]
	super POSet[Option]

	# Is there a label a for dependency between f and t?
	private fun has_label(f:Option, t:Option): Bool do
		var from = add_node(f)
		return from.element.has_label(t)
	end

	# Print all the option dependencies (directs ancestor and descendants with labels or not)
	private fun show_deps_infos(f: Option) do
		var fe = add_node(f)
		print "Dependencies on option {fe.element.names.first}: {fe.element.helptext}"

		# get and print direct(s) ancestor(s) with label(s) (or not)
		var buffer_from_unlabeled = new Array[String]
		var buffer_from_labeled = new Array[String]
		# get
		for from in fe.dfroms do
			if from.has_label(f) then
				buffer_from_labeled.add("{from.names.first} on value {from.get_labels(fe.element).join(" or ")}")
			else
				buffer_from_unlabeled.add(from.names.first)
			end
		end
		# display
		if not buffer_from_labeled.is_empty or not buffer_from_unlabeled.is_empty then
			print "-> Require by : (Ancestors)"
		else
			print "-> No ancestors."
		end
		if not buffer_from_unlabeled.is_empty then
			print "\t{buffer_from_unlabeled.join(", ")} no matter the parameter given."
		end
		if not buffer_from_labeled.is_empty then
			for each in buffer_from_labeled do print "\t{each}"
		end
		# get and print direct(s) descendant(s) with label(s) (or not)
		var buffer_to_unlabeled = new Array[String]
		var buffer_to_labeled = new Array[String]
		# get
		for to in fe.dtos do
			if fe.element.has_label(to) then
				buffer_to_labeled.add("{to.names.first} on value {fe.element.get_labels(to).join(" or ")}")
			else
				buffer_to_unlabeled.add(to.names.first)
			end
		end
		# display
		if not buffer_to_unlabeled.is_empty or not buffer_to_labeled.is_empty then
			print "-> Require : (Descendants)"
		else
			print "-> No descendants."
		end
		if not buffer_to_unlabeled.is_empty then
			print "\t{buffer_to_unlabeled.join(" and ")} no matter the parameter given."
		end
		for each in buffer_to_labeled do print "\t{each}"
		print ""
	end

	# Display the options dependencies in a gaphical windows.
	# Graphviz with a working -Txlib is expected.
	# Used fo debugging.
	redef fun show_dot do
		var f = new OProcess("dot", "-Txlib")
		#var f = stdout
		f.write "digraph \{\n"
		for from in elements.keys do
			var elmt = self.elements[from]
			for to in elmt.dtos do
				f.write "\"{from}\" -> \"{to}\""
				if self.has_label(from,to) then
					f.write "[label=\"{self.elements[from].element.labels[to].join(", ")}\"]"
				end
				f.write ";\n"
			end
		end
		f.write "\}\n"
	end

	# Add an edge between option f and t.
	# If the edge already exist, the function do nothing.
	# If a reverse edge (from 't' to 'f') already exist, a loop is created
	redef fun add_edge(f, t: Option) do
		var from = add_node(f)
		var to = add_node(t)
		# Skip if edge already present
		if from.tos.has(t) then return
		# Add the edge and close the transitivity
		for elmt_f in from.froms do
			var ef = self.elements[elmt_f]
			for elmt_t in to.tos do
				var et = self.elements[elmt_t]
				et.froms.add elmt_f
				ef.tos.add elmt_t
			end
		end
		from.dtos.add t
		to.dfroms.add f
	end
end
