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

# Test extern classes from the Cocoa framework and extern factories
module cocoa_extern_types is example

import cocoa

in "ObjC Header" `{
	// for `NSString::hello`
	#import <Foundation/Foundation.h>
`}

redef extern class NSString

	# Additionnal factory
	new hello in "ObjC" `{ return @"Factory Hello"; `}
end

# Print a custom string to the log
fun nslog(text: NSString) in "ObjC" `{
	NSLog(text);
`}

nslog "Hello using to_nsstring".to_nsstring
nslog new NSString.hello

var msg_box = new NSAlert
msg_box.message_text = "From Nit".to_nsstring
if "NIT_TESTING".environ != "true" then msg_box.run_modal
