# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

module linux_assets

import mnit
import linux_app

redef class App
	var assets_dir: String

	redef fun setup
	do
		assets_dir = sys.program_name.dirname + "/../assets/"

		super
	end

	redef fun try_loading_asset( id )
	do
		var path = "{assets_dir}/{id}"
		if not path.file_exists then
			log_error( "asset <{id}> does not exists." )
			exit(1)
			abort
		else
			var ext = path.file_extension
			if ext == "png" or ext == "jpg" or ext == "jpeg" then
				return new Opengles1Image.from_file( path )
			else # load as text
				var f = new FileReader.open(path)
				var content = f.read_all
				f.close

				return content
			end
		end
	end
end
