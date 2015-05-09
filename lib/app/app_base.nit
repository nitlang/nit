# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module app_base is
	new_annotation app_name
	new_annotation app_namespace
	new_annotation app_version
end

# App subclasses are cross-platform applications
#
# This class is redefed by plateform modules and so
# App can be specialized directly in the user app.
class App
	protected init do end

	# Starts the internal setup of graphical and other stuff
	# Is called just before run
	fun setup do end

	# Main entry point of your application
	fun run do end

	# Prefix to all log messages, used by `log_error`, `log_warning` and `log_info`.
	fun log_prefix: String do return "app.nit"

	# Helper function for logging warnings
	fun log_warning(msg: String) do sys.stderr.write "{log_prefix} warn: {msg}\n"

	# Main init method for graphical stuff
	# Is called when display is ready so graphical assets
	# can be loaded at this time.
	fun window_created do end

	# Called before destroying the window
	fun window_closing do end
end

fun app: App do return once new App
app.setup
app.run
