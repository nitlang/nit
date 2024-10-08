# This file is part of NIT ( https://nitlanguage.org ).
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

# Base of the _app.nit_ framework, defines `App`
module app_base is
	new_annotation app_name
	new_annotation app_namespace
	new_annotation app_version
	new_annotation app_files
end

# App subclasses are cross-platform applications
#
# This class is refined by platform modules and so
# App can be specialized directly in the user application code.
class App
	super AppComponent

	protected init do end

	# Starts the internal setup of graphical and other stuff
	# Is called just before run
	fun setup do end

	# Main entry point of your application
	fun run do end
end

# An element of an application that is notified of the application life cycle
#
# Most users of _app.nit_ need only to implement `on_create` to setup the application.
#
# On mobile devices, the application can be stopped a anytime when another application takes the foreground.
# Implement the callbacks `on_save_state` and `on_load_state` to keep the state of the application between execution,
# for an illusion of continuous execution.
abstract class AppComponent

	# The application is being created
	#
	# You should build the UI at this time.
	#
	# Triggers are platform specific:
	# * Android: `Activity.onCreate`
	# * iOS: `UIApplicationDelegate application:didFinishLaunchingWithOptions`
	fun on_create do end

	# The application enters the active state, it is in the foreground and interactive
	#
	# Triggers are platform specific:
	# * Android: `Activity.onResume`
	# * iOS: `UIApplicationDelegate applicationDidBecomeActive`
	fun on_resume do end

	# The application leaves the active state but is still partially visible
	#
	# It may then go back to `on_resume` or `on_stop`.
	#
	# Triggers are platform specific:
	# * Android: `Activity.onPause`
	# * iOS: `UIApplicationDelegate applicationWillResignActive`
	fun on_pause do end

	# The application is completely hidden from the user
	#
	# It may then be destroyed or go back to a paused state with `on_restart`.
	#
	# Triggers are platform specific:
	# * Android: `Activity.onStop`
	# * iOS: `UIApplicationDelegate applicationDidEnterBackground`
	fun on_stop do end

	# The application returns to a visible state from a previous `on_stop`
	#
	# Triggers are platform specific:
	# * Android: `Activity.onRestart`
	# * iOS: `UIApplicationDelegate applicationWillEnterForeground`
	fun on_restart do end

	# The application may be destroyed soon, save its state for a future `on_restore_state`
	#
	# Triggers are platform specific:
	# * Android: `Activity.onSaveInstanceState`
	# * iOS: `UIApplicationDelegate applicationDidEnterBackground`
	fun on_save_state do end

	# The application is launching, restore its state from a previous `on_save_state`
	#
	# Triggers are platform specific:
	# * Android: `Activity.onCreate`, _not_ `Activity.onRestoreInstanceState`
	#   as it is trigged only if there is a previous Android specific save state.
	# * iOS: `UIApplicationDelegate applicationDidEnterBackground`
	fun on_restore_state do end
end

# Print a warning
fun print_warning(object: Object)
do
	sys.stderr.write object.to_s
	sys.stderr.write "\n"
end

# The running `App`
fun app: App do return once new App

# Platform bound at compilation (by importation or -m)
#
# This value should not be used to decide the behavior of the software.
# Class refinement provide a safer and a static solution to apply variations.
# However, this value can be used in log files and communications with servers.
fun bound_platform: String do return "none"

# Test if the application was bound to a platform, if not crash
private fun test_bound_platform
do
	print_error "Apps must be bound to a platform at compilation using `-m linux` or `-m android`"
	exit 1
end

if "NIT_TESTING".environ == "true" then exit 0

test_bound_platform

app.setup
app.run
