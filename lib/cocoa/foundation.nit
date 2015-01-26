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

# The Foundation Kit provides basic Objective-C classes and structures
module foundation is ldflags "-framework Foundation"

in "ObjC Header" `{
	#import <Foundation/Foundation.h>
`}

# Base of the Foundation framework class hierarchy
extern class NSObject in "ObjC" `{ NSObject * `}
end

# String of the Foundation Kit
#
# Created using `Text::to_nsstring`.
extern class NSString in "ObjC" `{ NSString * `}
	super NSObject
end

redef class NativeString
	# Get a `NSString` from `self` with the specified `length`
	fun to_nsstring(length: Int): NSString in "ObjC" `{
		return [[NSString alloc] initWithBytes:recv
			length:length
			encoding:NSASCIIStringEncoding];
	`}
end

redef class Text
	# Get a `NSString` from `self`
	fun to_nsstring: NSString do return to_cstring.to_nsstring(length)
end
