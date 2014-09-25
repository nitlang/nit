# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Android services and implementation of app.nit
#
# To use this module and compile for Android, you must install the
# Android SDK (with API level 10) and NDK (with the API level 9).
# The tools `android`, `ndk-build` and `ant` must be in your PATH.
#
# This module provides basic logging facilities, advanced logging can be
# achieved by importing `android::log`.
module android

import platform
import native_app_glue
import dalvik
private import log
private import android_data_store

# Uses Android logs to print everything
redef fun print(text) do log_write(priority_info, app.log_prefix.to_cstring, text.to_s.to_cstring)

redef class App
	redef fun log_error(msg) do log_write(priority_error, log_prefix.to_cstring, msg.to_cstring)

	redef fun log_warning(msg) do log_write(priority_warn, log_prefix.to_cstring, msg.to_cstring)

	redef fun init_window
	do
		super
		window_created
	end

	redef fun term_window
	do
		super
		window_closing
	end

	# Is the application currently paused?
	var paused = true

	redef fun window_created
	do
		super
		paused = false
	end

	redef fun window_closing
	do
		paused = true
		super
	end

	redef fun pause
	do
		paused = true
		super
	end

	redef fun resume
	do
		paused = false
		super
	end

	redef fun lost_focus
	do
		paused = true
		super
	end

	redef fun gained_focus
	do
		paused = false
		super
	end

	redef fun destroy do exit 0
end
