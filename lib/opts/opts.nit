# This file is part of NIT ( https://nitlanguage.org ).
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

# Super class of all option's class
abstract class Option
	# Names for the option (including long and short ones)
	var names: Array[String]

	# Type of the value of the option
	type VALUE: nullable Object

	# Human readable description of the option
	var helptext: String

	# Gathering errors during parsing
	var errors: Array[String] = new Array[String]

	# Is this option mandatory?
	var mandatory: Bool = false is writable

	# Is this option hidden from `usage`?
	var hidden: Bool = false is writable

	# Has this option been read?
	var read: Bool = false is writable

	# Current value of this option
	var value: VALUE is writable

	# Default value of this option
	var default_value: VALUE is writable

	# Create a new option
	init(help: String, default: VALUE, names: nullable Array[String]) is old_style_init do
		init_opt(help, default, names)
	end

	# Init option `helptext`, `default_value` and `names`.
	#
	# Also set current `value` to `default`.
	fun init_opt(help: String, default: VALUE, names: nullable Array[String])
	do
		if names == null then
			self.names = new Array[String]
		else
			self.names = names.to_a
		end
		helptext = help
		default_value = default
		value = default
	end

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

	# Pretty print the default value.
	fun pretty_default: String
	do
		var dv = default_value
		if dv != null then return " ({dv.to_s})"
		return ""
	end

	# Consume parameters for this option
	protected fun read_param(opts: OptionContext, it: Iterator[String])
	do
		read = true
	end
end

# Not really an option. Just add a line of text when displaying the usage
class OptionText
	super Option

	# Init a new OptionText with `text`.
	init(text: String) is old_style_init do super(text, null, null)

	redef fun pretty(off) do return to_s

	redef fun to_s do return helptext
end

# A boolean option, `true` when present, `false` if not
class OptionBool
	super Option
	redef type VALUE: Bool

	# Init a new OptionBool with a `help` message and `names`.
	init(help: String, names: String...) is old_style_init do super(help, false, names)

	redef fun read_param(opts, it)
	do
		super
		value = true
	end
end

# A count option. Count the number of time this option is present
class OptionCount
	super Option
	redef type VALUE: Int is fixed

	# Init a new OptionCount with a `help` message and `names`.
	init(help: String, names: String...) is old_style_init do super(help, 0, names)

	redef fun read_param(opts, it)
	do
		super
		value += 1
	end
end

# Option with one parameter (mandatory by default)
abstract class OptionParameter
	super Option

	# Convert `str` to a value of type `VALUE`.
	protected fun convert(str: String): VALUE is abstract

	# Is the parameter mandatory?
	var parameter_mandatory = true is writable

	redef fun read_param(opts, it)
	do
		super

		var ok = it.is_ok
		if ok and not parameter_mandatory and not it.item.is_empty and it.item.chars.first == '-' then
			# The next item may looks like a known command
			# Only check if `not parameter_mandatory`
			for opt in opts.options do
				if opt.names.has(it.item) then
					# The next item is a known command
					ok = false
					break
				end
			end
		end

		if ok then
			value = convert(it.item)
			it.next
		else
			errors.add("Parameter expected for option {names.first}.")
		end
	end
end

# An option with a `String` as parameter
class OptionString
	super OptionParameter
	redef type VALUE: nullable String

	# Init a new OptionString with a `help` message and `names`.
	init(help: String, names: String...) is old_style_init do super(help, null, names)

	redef fun convert(str) do return str
end

# An option to choose from an enumeration
#
# Declare an enumeration option with all its possible values as an array.
# Once the arguments are processed, `value` is set as the index of the selected value, if any.
class OptionEnum
	super OptionParameter
	redef type VALUE: Int

	# Values in the enumeration.
	var values: Array[String]

	# Init a new OptionEnum from `values` with a `help` message and `names`.
	#
	# `default` is the index of the default value in `values`.
	init(values: Array[String], help: String, default: Int, names: String...) is old_style_init do
		assert values.length > 0
		self.values = values.to_a
		super("{help} <{values.join(", ")}>", default, names)
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

	# Get the value name from `values`.
	fun value_name: String do return values[value]

	redef fun pretty_default
	do
		return " ({values[default_value]})"
	end
end

# An option with an Int as parameter
class OptionInt
	super OptionParameter
	redef type VALUE: Int

	# Init a new OptionInt with a `help` message, a `default` value and `names`.
	init(help: String, default: Int, names: String...) is old_style_init do
		super(help, default, names)
	end

	redef fun convert(str)
	do
		if str.is_int then return str.to_i

		errors.add "Expected an integer for option {names.join(", ")}."
		return 0
	end
end

# An option with a Float as parameter
class OptionFloat
	super OptionParameter
	redef type VALUE: Float

	# Init a new OptionFloat with a `help` message, a `default` value and `names`.
	init(help: String, default: Float, names: String...) is old_style_init do
		super(help, default, names)
	end

	redef fun convert(str) do return str.to_f
end

# An option with an array as parameter
# `myprog -optA arg1 -optA arg2` is giving an Array `["arg1", "arg2"]`
class OptionArray
	super OptionParameter
	redef type VALUE: Array[String]

	# Init a new OptionArray with a `help` message and `names`.
	init(help: String, names: String...) is old_style_init do
		values = new Array[String]
		super(help, values, names)
	end

	private var values: Array[String]
	redef fun convert(str)
	do
		values.add(str)
		return values
	end
end

# Context where the options process
class OptionContext
	# Options present in the context
	var options = new Array[Option]

	# Rest of the options after `parse` is called
	var rest = new Array[String]

	# Errors found in the context after parsing
	var context_errors = new Array[String]

	private var optmap = new HashMap[String, Option]

	# Add one or more options to the context
	fun add_option(opts: Option...) do options.add_all(opts)

	# Display all the options available
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

		for i in options do
			if not i.hidden then
				print(i.pretty(lmax))
			end
		end
	end

	# Parse and assign options in `argv` or `args`
	fun parse(argv: nullable Collection[String])
	do
		if argv == null then argv = args
		var it = argv.iterator
		parse_intern(it)
	end

	# Must all option be given before the first argument?
	#
	# When set to `false` (the default), options of the command line are
	# all parsed until the end of the list of arguments or until "--" is met (in this case "--" is discarded).
	#
	# When set to `true` options are parsed until the first non-option is met.
	var options_before_rest = false is writable

	# Parse the command line
	protected fun parse_intern(it: Iterator[String])
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
					for i in [1..str.length[ do
						var short_opt = "-" + str.chars[i].to_s
						if optmap.has_key(short_opt) then
							var option = optmap[short_opt]
							if option isa OptionParameter then
								it.next
								next_called = true
							end
							option.read_param(self, it)
						end
					end
					if not next_called then it.next
				else
					if optmap.has_key(str) then
						var opt = optmap[str]
						it.next
						opt.read_param(self, it)
					else
						rest.add(it.item)
						it.next
						if options_before_rest then
							rest.add_all(it.to_a)
							parseargs = false
						end
					end
				end
			end
		end

		for opt in options do
			if opt.mandatory and not opt.read then
				context_errors.add("Mandatory option {opt.names.join(", ")} not found.")
			end
		end
	end

	private fun build
	do
		for o in options do
			for n in o.names do
				optmap[n] = o
			end
		end
	end

	# Options parsing errors.
	fun errors: Array[String]
	do
		var errors = new Array[String]
		errors.add_all context_errors
		for o in options do
			for e in o.errors do
				errors.add(e)
			end
		end
		return errors
	end
end
