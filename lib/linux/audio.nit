# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Romain Chanoir  <romain.chanoir@viacesi.fr>
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

# Linux audio services
module audio

import app::audio
import mnit_linux::linux_assets

# Simple audio asset
redef class Sound

	redef fun play do
		if name.has_suffix(".wav") then
			sys.system "aplay -q {app.assets_dir}{name} &"
		else if name.has_suffix(".mp3") then
			sys.system "mpg123 -q {app.assets_dir}{name} &"
		end
	end

	redef fun load do end
	redef fun pause do end
	redef fun resume do end
end

redef class Music

	redef fun play do
		if name.has_suffix(".wav") then
			sys.system "aplay -q {app.assets_dir}{name} &"
		else if name.has_suffix(".mp3") then
			sys.system "mpg123 -q {app.assets_dir}{name} &"
		end
	end

	redef fun load do end
	redef fun pause do end
	redef fun resume do end
end

redef class App
	redef fun load_sound(name)
	do
		return new Sound(name)
	end

	redef fun load_music(name)
	do
		return new Music(name)
	end
end
