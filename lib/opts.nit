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

# Super class of all option's class
class Option
	# Names for the option (including long and short ones)
	readable attr _names: Array[String]

	# Type of the value of the option
	type VALUE: Object

	# Human readable description of the option
	readable attr _helptext: String 

	# Is this option mandatory?
	readable writable attr _mandatory: Bool 

	# context where the option is located
	readable writable attr _context: OptionContext 

	# Current value of this option
	readable writable attr _value: VALUE 

	# Default value of this option
	readable writable attr _default_value: VALUE

	# Create a new option
	init init_opt(help: String, default: VALUE, names: Array[String])
	do
		if names == null then
			_names = new Array[String]
		else
			_names = names.to_a
		end
		_helptext = help
		_mandatory = false
		_default_value = default
		_value = default 
	end

	# Add new aliases for this option
	meth add_aliases(names: String...) do _names.add_all(names)
	
	# An help text for this option with default settings
	redef meth to_s do return pretty(2)
	
	# A pretty print for this help
	meth pretty(off: Int): String
	do
		var text = new Buffer.from("  ")
		text.append(_names.join(", "))
		text.append("  ")
		var rest = off - text.length
		if rest > 0 then text.append(" " * rest)
		text.append(helptext)
		#text.append(pretty_default)
		return text.to_s
	end

	meth pretty_default: String
	do
		if default_value != null then
			return " ({default_value})"
		end
		return ""
	end

	# Consume parameters for this option
	protected meth read_param(it: Iterator[String]) is abstract
end

class OptionText
special Option
	init(text: String) do init_opt(text, null, null)

	redef meth pretty(off) do return to_s

	redef meth to_s do return helptext
end

class OptionBool
special Option
	redef type VALUE: Bool

	init(help: String, names: String...) do init_opt(help, false, names)

	redef meth read_param(it) do value = true
end

# Option with one mandatory parameter
class OptionParameter
special Option
	protected meth convert(str: String): VALUE is abstract

	redef meth read_param(it)
	do
		assert context != null
		if it.is_ok then
			value = convert(it.item)
			it.next
		else
			# TODO: What to do?
		end
	end

	init init_opt(h, d, n) do super
end

class OptionString
special OptionParameter
	redef type VALUE: String

	init(help: String, names: String...) do init_opt(help, null, names)

	redef meth convert(str) do return str
end

class OptionEnum
special OptionParameter
	redef type VALUE: Int
	attr _enum: Array[String]

	init(enum: Array[String], help: String, default: Int, names: String...)
	do
		assert enum != null and enum.length > 0
		_enum = enum.to_a
		init_opt("{help} <{enum.join(", ")}>", default, names)
	end

	redef meth convert(str)
	do
		var id = _enum.index_of(str)
		return id
	end

	redef meth pretty_default
	do
		if default_value != null then
			return " ({_enum[default_value]})"
		else
			return ""
		end
	end	
end

class OptionInt
special OptionParameter
	redef type VALUE: Int

	init(help: String, default: Int, names: String...) do init_opt(help, default, names)
	
	redef meth convert(str) do return str.to_i
end

class OptionArray
special OptionParameter
	redef type VALUE: Array[String]

	init(help: String, names: String...)
	do
		_values = new Array[String]
		init_opt(help, _values, names)
	end

	attr _values: Array[String]	
	redef meth convert(str)
	do
		_values.add(str)
		return _values
	end
end

class OptionContext
	readable attr _options: Array[Option] 
	readable attr _rest: Array[String] 

	attr _optmap: Map[String, Option]
	
	meth usage
	do
		var lmax = 1
		for i in _options do
			var l = 3
			for n in i.names do
				l += n.length + 2
			end
			if lmax < l then lmax = l
		end
		
		for i in _options do
			print(i.pretty(lmax))
		end
	end

	# Parse ans assign options everywhere is the argument list
	meth parse(argv: Collection[String])
	do
		var it = argv.iterator
		parse_intern(it)
	end

	protected meth parse_intern(it: Iterator[String])
	do
		var parseargs = true
		build
		var rest = _rest
		
		while parseargs and it.is_ok do
			var str = it.item
			if str == "--" then
				it.next
				rest.add_all(it.to_a)
				parseargs = false
			else
				if _optmap.has_key(str) then
					var opt = _optmap[str]
					it.next
					opt.read_param(it)
				else
					rest.add(it.item)
					it.next
				end
			end
		end
	end

	meth add_option(opts: Option...)
	do
		for opt in opts do
			opt.context = self
			_options.add(opt)
		end
	end

	init
	do
		_options = new Array[Option]
		_optmap = new HashMap[String, Option]
		_rest = new Array[String]
	end

	private meth build
	do
		for o in _options do
			for n in o.names do
				_optmap[n] = o
			end
		end
	end
end
