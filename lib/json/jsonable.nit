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

# Basic json related functionalities
module jsonable

in "C Header" `{
	#define __STRICT_ANSI__
	#include <json/json.h>
`}

# Type supported by the Json format
interface Jsonable
end

# Main object type used by C library
private extern JsonObject `{ json_object* `}
	# Give up ownership of this object and decrease the reference count.
	fun put `{ json_object_put( recv ); `}

	# Aquire ownership of this object and increase the reference count.
	fun get `{ json_object_get( recv ); `}
end

redef class Sequence[ V ]
	super Jsonable
end

# Can b converted to a Json object
redef class Map[ K, V ]
	super Jsonable
end

redef class String
	super Jsonable
end

redef class Int
	super Jsonable
end

redef class Bool
	super Jsonable
end

redef class Float
	super Jsonable
end
