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

module splash

import graphism

class SplashScreen
	var splash_title : Image
	var splash_text : Image
	var splash_head : Image
	var splash_play : Image
	fun splash_play_path : String is abstract

	init( app : App )
	do
		splash_title = app.load_image( "images/splash_title.png" )
		splash_text = app.load_image( "images/splash_text.png" )
		splash_head = app.load_image( "images/splash_head.png" )
		splash_play = app.load_image( splash_play_path )
	end

	# manages entire display draw (including flipping)
	fun draw( display : Display, ready : Bool )
	do
		var dc = display.width/2

		display.begin

		display.clear( 0.0, 0.5, 0.1 )

		display.blit_centered( splash_head, dc, display.height/2+64 )
		display.blit_centered( splash_title, dc, 32 )
		display.blit_centered( splash_text, dc, 128 )

		if ready then display.blit_centered( splash_play, dc, display.height-64 )

		display.finish
	end
end
