# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Very simple application
module simple is
	app_name("mnit Simple example") # On Android, this name is hidden by the value in `res/values/strings.xml`
	app_version(0, 2, git_revision)
end

import mnit

redef class App

	var img : nullable I = null

	redef fun window_created
	do
		super

		var txt = load_asset( "hello.txt" )
		if txt isa String then
			print txt.length
			print txt
		end

		img = load_image( "fighter.png" )
	end

	var r = 0.0 is writable
	var g = 0.0 is writable
	var b = 0.0 is writable
	redef fun frame_core( display )
	do
		b = b + 0.01
		if b > 1.0 then b = 0.0

		display.clear( r, g, b )

		var img = self.img
		if img != null then
			display.blit( img, 100, 100 )
		end
	end

	redef fun input( ie )
	do
		if ie isa QuitEvent then
			quit = true
			return true
		else if ie isa PointerEvent then
			r = ie.x/display.width.to_f
			g = ie.y/display.height.to_f
			return true
		else
			print "unknown input: {ie}"
			return false
		end
	end
end
