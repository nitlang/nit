# This file is part of NIT ( https://nitlanguage.org ).
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

# Services from the X11 library
module x11 is pkgconfig

`{
	#include <X11/Xlib.h>
`}

# Open the current display from the environment variables
#
# See <http://www.x.org/releases/X11R7.7/doc/man/man3/XOpenDisplay.3.xhtml>
fun x_open_default_display: Pointer `{
	return (void*)(long)XOpenDisplay(NULL);
`}

# Open a specific display
#
# `name` is in the format: "hostname:number.screen_number"
#
# See <http://www.x.org/releases/X11R7.7/doc/man/man3/XOpenDisplay.3.xhtml>
fun x_open_display(name: String): Pointer import String.to_cstring `{
	return (void*)XOpenDisplay(String_to_cstring(name));
`}
