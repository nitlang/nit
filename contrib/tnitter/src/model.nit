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

# Data and DB model of Tnitter
module model

import md5
import serialization

# A single post (or Tnit)
class Post
	serialize

	# The author
	var user: String

	# Tnit content
	var text: String
end

redef class String
	# Hash passwords for Tnitter
	fun tnitter_hash: String do return (self+salt).md5
end

# Salt used on passwords
#
# Can be redefed by user modules
fun salt: String do return "tnitter is cool"
