# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Parsing of commands understood by documentation tools.
#
# This can be through:
# * `nitx` commands like `code: MEntity::name`
# * `nitdoc` wikilinks like `[[doc: MEntity::name]]`
module doc_commands

import doc_base

# A command aimed at a documentation tool like `nitdoc` or `nitx`.
#
# `DocCommand` are generally of the form `command: args`.
interface DocCommand

	# Original command string.
	fun string: String is abstract

	# Command name.
	fun name: String is abstract

	# Command arguments.
	#
	# FIXME: define a syntax
	fun args: Array[String] is abstract

	# Command factory.
	#
	# Returns a concrete instance of `DocCommand` depending on the string.
	new(command_string: String) do
		if command_string.has_prefix("doc:") then
			return new ArticleCommand(command_string)
		else if command_string.has_prefix("comment:") then
			return new CommentCommand(command_string)
		else if command_string.has_prefix("list:") then
			return new ListCommand(command_string)
		else if command_string.has_prefix("param:") then
			return new ParamCommand(command_string)
		else if command_string.has_prefix("return:") then
			return new ReturnCommand(command_string)
		else if command_string.has_prefix("new:") then
			return new NewCommand(command_string)
		else if command_string.has_prefix("call:") then
			return new CallCommand(command_string)
		else if command_string.has_prefix("code:") then
			return new CodeCommand(command_string)
		end
		return new UnknownCommand(command_string)
	end

	redef fun to_s do return string
end

# Used to factorize initialization of DocCommands.
abstract class AbstractDocCommand
	super DocCommand

	redef var string
	redef var name is noinit
	redef var args = new Array[String]

	init do
		# parse command
		var str = new FlatBuffer
		var i = 0
		while i < string.length do
			var c = string[i]
			i += 1
			if c == ':' then break
			str.add c
		end
		name = str.write_to_string
		# parse args
		args.add string.substring_from(i).trim
	end
end

# A `DocCommand` not recognized by documentation tools.
#
# Used to provide warnings or any other behavior for unexisting commands.
class UnknownCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the documentation article of a `MEntity`.
#
# Syntax: `doc: MEntity::name`.
class ArticleCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the MDoc of a `MEntity`.
#
# Syntax: `comment: MEntity::name`.
class CommentCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes a list of something.
#
# Syntax: `list:kind: <arg>`.
class ListCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the list of methods tanking a `MType` as parameter.
#
# Syntax: `param: MType`.
class ParamCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the list of methods returning a `MType` as parameter.
#
# Syntax: `param: MType`.
class ReturnCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the list of methods creating new instances of a specific `MType`
#
# Syntax: `new: MType`.
class NewCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the list of methods calling a specific `MProperty`.
#
# Syntax: `call: MEntity::name`.
class CallCommand
	super AbstractDocCommand
end

# A `DocCommand` that includes the source code of a `MEntity`.
#
# Syntax:
# * `code: MEntity::name`
# * `./src/file.nit` to include source code from a file.
# * `./src/file.nit:1,2--3,4` to select code between positions.
class CodeCommand
	super AbstractDocCommand
end
