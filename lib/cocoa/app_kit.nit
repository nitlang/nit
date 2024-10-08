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

# The Application Kit provides services to create GUI
module app_kit is ldflags "-framework AppKit"

import foundation

in "ObjC Header" `{
	#import <AppKit/AppKit.h>
`}

# A simple message box
extern class NSAlert in "ObjC" `{ NSAlert * `}
	super NSObject

	# Allocate and instanciate a new `NSAlert`
	new in "ObjC" `{ return [[NSAlert alloc] init]; `}

	# Set the content of this message box
	fun message_text=(text: NSString) in "ObjC" `{ [self setMessageText:text]; `}

	# Show this message box
	fun run_modal in "ObjC" `{ [self runModal]; `}
end
