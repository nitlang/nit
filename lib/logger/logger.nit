# This file is part of NIT ( http://www.nitlanguage.org ).
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

# A simple logger for Nit
#
# ## Basic Usage
#
# Create a new `Logger` with a severity level threshold set to `warn_level`:
#
# ~~~
# var logger = new Logger(warn_level)
# ~~~
#
# Messages with a severity equal or higher than `warn_level` will be displayed:
#
# ~~~
# logger.error "Displays an error."
# logger.warn "Displays a warning."
# ~~~
#
# Messages with a lower severity are silenced:
#
# ~~~
# logger.info "Displays nothing."
# ~~~
#
# `FileLogger` can be used to output the messages into a file:
#
# ~~~
# var log_file = "my.log"
#
# logger = new FileLogger(warn_level, log_file, append = false)
# logger.error("An error")
# logger.info("Some info")
# logger.close
#
# assert log_file.to_path.read_all == "An error\n"
# log_file.to_path.delete
# ~~~
#
# ## Severity levels
#
# Each message is associated with a level that indicate its severity.
# Only messages with a severity equal to or higher than the logger `level`
# threshold will be displayed.
#
# Severity levels from the most severe to the least severe:
#
# * `unknown_level`: An unknown message that should always be outputted.
# * `fatal_level`: An unhandleable error that results in a program crash.
# * `error_level`: A handleable error condition.
# * `warn_level`: A warning.
# * `info_level`: Generic (useful) information about system operation.
# * `debug_level`: Low-level information for developpers.
#
# ## Formatting messages
#
# You can create custom formatters by implementing the `Formatter` interface.
#
# ~~~
# class MyFormatter
#	super Formatter
#
#	redef fun format(level, message) do
#		if level < warn_level then return super
#		return "!!!{message}!!!"
#	end
# end
# ~~~
#
# See `DefaultFormatter` for a more advanced implementation example.
#
# Each Logger can be given a default formatter used to format the every messages
# before outputting them:
#
# ~~~
# var formatter = new MyFormatter
# var stderr = new StringWriter
# var logger = new Logger(warn_level, stderr, formatter)
#
# logger.warn("This is a warning.")
# assert stderr.to_s.trim.split("\n").last == "!!!This is a warning.!!!"
# ~~~
#
# Optionally, a `Formatter` can be given to replace the `default_formatter`
# used by default:
#
# ~~~
# # Create a formatter with no default decorator
# logger = new Logger(warn_level, stderr, null)
#
# # Display a message without any formatter
# logger.warn("This is a warning.")
# assert stderr.to_s.trim.split("\n").last == "This is a warning."
#
# # Display a message with a custom formatter
# logger.warn("This is a warning.", formatter)
# assert stderr.to_s.trim.split("\n").last == "!!!This is a warning.!!!"
# ~~~
module logger

import console

# A simple logging utility
#
# `Logger` provides a simple way to output messages from applications.
#
# Each message is associated with a level that indicate its severity.
# Only messages with a severity equal to or higher than the logger `level`
# threshold will be displayed.
#
# ~~~
# var logger = new Logger(warn_level)
# assert logger.unknown("unkown")
# assert logger.fatal("fatal")
# assert logger.error("error")
# assert logger.warn("warn")
# assert not logger.info("info")
# assert not logger.debug("debug")
# ~~~
class Logger

	# Severity threshold
	#
	# Messages with a severity level greater than or equal to `level` will be displayed.
	# Default is `warn_level`.
	#
	# See `unknown_level`, `fatal_level`, error_level``, `warn_level`,
	# `info_level` and `debug_level`.
	var level: Int = warn_level is optional, writable

	# Kind of `Writer` used to output messages
	type OUT: Writer

	# Writer used to output messages
	#
	# Default is `stderr`.
	var out: OUT = stderr is optional

	# Formatter used to format messages before outputting them
	#
	# By default no formatter is used.
	#
	# See `DefaultFormatter`.
	var default_formatter: nullable Formatter = null is optional, writable

	# Output a message with `level` severity
	#
	# Only output messages with `level` severity greater than of equal to `self.level`.
	#
	# ~~~
	# var stderr = new StringWriter
	# var logger = new Logger(warn_level, stderr, null)
	#
	# # This message will be displayed:
	# assert logger.warn("This is a warning.")
	# assert stderr.to_s.trim.split("\n").last == "This is a warning."
	#
	# # This message will not:
	# assert not logger.info("This is some info.")
	# assert stderr.to_s.trim.split("\n").last == "This is a warning."
	# ~~~
	#
	# Each logger can be given a default formatter used to format the messages
	# before outputting them:
	#
	# ~~~
	# var formatter = new DefaultFormatter(no_color = true)
	# logger = new Logger(warn_level, stderr, formatter)
	# logger.warn("This is a warning.")
	# assert stderr.to_s.trim.split("\n").last == "Warning: This is a warning."
	# ~~~
	#
	# Optionally, a `Formatter` can be given to replace the `default_formatter`
	# used by default.
	#
	# ~~~
	# # Create a formatter with no default decorator
	# logger = new Logger(warn_level, stderr, null)
	#
	# # Display a message without any formatter
	# logger.warn("This is a warning.")
	# assert stderr.to_s.trim.split("\n").last == "This is a warning."
	#
	# # Display a message with a custom formatter
	# logger.warn("This is a warning.", formatter)
	# assert stderr.to_s.trim.split("\n").last == "Warning: This is a warning."
	# ~~~
	fun add(level: Int, message: Writable, formatter: nullable Formatter): Bool do
		var format = formatter or else default_formatter
		if format == null then
			return add_raw(level, message)
		end
		return add_raw(level, format.format(level, message))
	end

	# Output a message with `level` severity without formatting it
	#
	# Only output messages with `level` severity greater than of equal to `self.level`.
	#
	# ~~~
	# var stderr = new StringWriter
	# var logger = new Logger(warn_level, stderr, null)
	#
	# # This message will be displayed:
	# assert logger.add_raw(warn_level, "This is a warning.")
	# assert stderr.to_s.trim.split("\n").last == "This is a warning."
	#
	# # This message will not:
	# assert not logger.add_raw(info_level, "This is some info.")
	# assert stderr.to_s.trim.split("\n").last == "This is a warning."
	# ~~~
	fun add_raw(level: Int, message: Writable): Bool do
		if level < self.level then return false
		out.write(message.write_to_string)
		out.write("\n")
		return true
	end

	# Output a message with `unknown_level` severity
	#
	# Unkown severity messages are always outputted.
	fun unknown(message: String, formatter: nullable Formatter): Bool do
		return add(unknown_level, message, formatter)
	end

	# Output a message with `fatal_level` severity
	fun fatal(message: String, formatter: nullable Formatter): Bool do
		return add(fatal_level, message, formatter)
	end

	# Output a message with `error_level` severity
	fun error(message: String, formatter: nullable Formatter): Bool do
		return add(error_level, message, formatter)
	end

	# Output a message with `warn_level` severity
	fun warn(message: String, formatter: nullable Formatter): Bool do
		return add(warn_level, message, formatter)
	end

	# Output a message with `info_level` severity
	fun info(message: String, formatter: nullable Formatter): Bool do
		return add(info_level, message, formatter)
	end

	# Output a message with `debug` severity
	fun debug(message: String, formatter: nullable Formatter): Bool do
		return add(debug_level, message, formatter)
	end
end

# Log messages to a file
#
# ~~~
# var log_file = "my_file.log"
# var logger = new FileLogger(warn_level, log_file, append = false)
# logger.error("An error")
# logger.info("Some info")
# logger.close
# assert log_file.to_path.read_all == "An error\n"
#
# logger = new FileLogger(warn_level, log_file, append = true)
# logger.error("Another error")
# logger.close
# assert log_file.to_path.read_all == "An error\nAnother error\n"
#
# log_file.to_path.delete
# ~~~
class FileLogger
	super Logger
	autoinit level, file, append, default_formatter

	redef type OUT: FileWriter

	# File where messages will be written
	var file: String

	# Append messages to `file`
	#
	# If `append` is `false`, the `file` will be overwritten.
	var append: Bool = true is optional

	init do
		var old = null
		if append then
			old = file.to_path.read_all
		end
		out = new FileWriter.open(file)
		out.set_buffering_mode(0, buffer_mode_line)
		if old != null then
			out.write(old)
		end
	end

	# Close the logger and its `file`
	fun close do out.close
end

# Format messages before outputing them
#
# A `Logger` can use a `Formatter` to format the messages before outputting them.
#
# See `DefaultFormatter`.
interface Formatter

	# Format `message` depending of its severity `level`
	fun format(level: Int, message: Writable): Writable do return message
end

# Default `Logger` formatter
#
# The default formatter decorates the messages with severity labels and colors.
class DefaultFormatter
	super Formatter

	# Do not decorate messages with colors
	#
	# ~~~
	# var formatter = new DefaultFormatter(no_color = true)
	# assert formatter.format(error_level, "My message.") == "Error: My message."
	# ~~~
	var no_color = false is optional, writable

	redef fun format(level, message) do
		var string = message.write_to_string

		if level == fatal_level then
			string = "Fatal: {string}"
		else if level == error_level then
			string = "Error: {string}"
		else if level == warn_level then
			string = "Warning: {string}"
		else if level == info_level then
			string = "Info: {string}"
		else if level == debug_level then
			string = "Debug: {string}"
		end

		if no_color then return string

		if level == fatal_level then
			return string.red
		else if level == error_level then
			return string.red
		else if level == warn_level then
			return string.yellow
		else if level == info_level then
			return string.purple
		else if level == debug_level then
			return string.blue
		end

		return string
	end
end

redef class Sys

	# Unknown severity level
	#
	# These messages are always displayed.
	#
	# See `Logger`.
	var unknown_level = 5

	# Fatal severity level
	#
	# See `Logger`.
	var fatal_level = 4

	# Error severity level
	#
	# See `Logger`.
	var error_level = 3

	# Warning severity level
	#
	# See `Logger`.
	var warn_level = 2

	# Info severity level
	#
	# See `Logger`.
	var info_level = 1

	# Debug severity level
	#
	# See `Logger`.
	var debug_level = 0
end
