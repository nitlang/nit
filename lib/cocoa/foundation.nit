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

	# Null pointer
	new nil in "ObjC" `{ return nil; `}

	# Get an UTF8 encoded `char*` copy of `self`
	fun utf8_string: CString in "ObjC" `{ return (char *)[self UTF8String]; `}

	redef fun to_s do return utf8_string.to_s
end

redef class CString
	# Get a `NSString` from `self` with the specified `length`
	fun to_nsstring(length: Int): NSString in "ObjC" `{
		return [[NSString alloc] initWithBytes:self
			length:length
			encoding:NSUTF8StringEncoding];
	`}
end

redef class Text
	# Get a `NSString` from `self`
	fun to_nsstring: NSString do return to_cstring.to_nsstring(byte_length)
end

# Wrapper of byte buffers
extern class NSData in "ObjC" `{ NSData * `}

	# Pointer to contained data
	fun bytes: CString in "ObjC" `{ return (char*)self.bytes; `}

	# Number of bytes containted in `self`
	fun length: Int in "ObjC" `{ return self.length; `}

	redef fun to_s do return bytes.to_s_with_length(length)
end

# Error condition
extern class NSError in "ObjC" `{ NSError * `}

	# Wraps: `[self initWithDomain:(NSString)domain code:(NSInteger)code userInfo:(NSDictionary)dict]`
	#new init_with_domain_code_user_info(domain: NSString, code: Int, dict: NSDictionary) in "ObjC" `{
	#	return [[NSError alloc] initWithDomain: domain code: code userInfo: dict];
	#`}

	# Wraps: `NSError.domain`
	fun domain: NSString in "ObjC" `{
		return [self domain];
	`}

	# Wraps: `NSError.code`
	fun code: Int in "ObjC" `{
		return [self code];
	`}

	# Wraps: `NSError.userInfo`
	#fun user_info: NSDictionary in "ObjC" `{
	#	return [self userInfo];
	#`}

	# Wraps: `NSError.localizedDescription`
	fun localized_description: NSString in "ObjC" `{
		return [self localizedDescription];
	`}

	# Wraps: `NSError.localizedFailureReason`
	fun localized_failure_reason: NSString in "ObjC" `{
		return [self localizedFailureReason];
	`}

	# Wraps: `NSError.localizedRecoverySuggestion`
	fun localized_recovery_suggestion: NSString in "ObjC" `{
		return [self localizedRecoverySuggestion];
	`}

	# Wraps: `NSError.localizedRecoveryOptions`
	#fun localized_recovery_options: NSArray in "ObjC" `{
	#	return [self localizedRecoveryOptions];
	#`}

	# Wraps: `NSError.recoveryAttempter`
	fun recovery_attempter: NSObject in "ObjC" `{
		return [self recoveryAttempter];
	`}

	# Wraps: `NSError.helpAnchor`
	fun help_anchor: NSString in "ObjC" `{
		return [self helpAnchor];
	`}
end

# Path to a specific node in a tree of nested array collections
extern class NSIndexPath in "ObjC" `{ NSIndexPath * `}
	super NSObject

	# Wraps: `[self initWithIndex:(NSUInteger)index]`
	new init_with_index(index: Int) in "ObjC" `{
		return [[NSIndexPath alloc] initWithIndex: index];
	`}

	# Wraps: `NSIndexPath.length`
	fun length: Int in "ObjC" `{
		return [self length];
	`}

	# Wraps: `[self indexPathByAddingIndex:(NSUInteger)index]`
	fun index_path_by_adding_index(index: Int): NSIndexPath in "ObjC" `{
		return [self indexPathByAddingIndex: index];
	`}

	# Wraps: `[self indexPathByRemovingLastIndex]`
	fun index_path_by_removing_last_index: NSIndexPath in "ObjC" `{
		return [self indexPathByRemovingLastIndex];
	`}

	# Wraps: `[self indexAtPosition:(NSUInteger)position]`
	fun index_at_position(position: Int): Int in "ObjC" `{
		return [self indexAtPosition: position];
	`}
end

# Interface to the defaults system for an app to customize its behavior to match a user's preferences
extern class NSUserDefaults in "ObjC" `{ NSUserDefaults * `}
	super NSObject

	# Wraps: `[NSUserDefaults standardUserDefaults]`
	new standard_user_defaults in "ObjC" `{
		return [NSUserDefaults standardUserDefaults];
	`}

	# Wraps: `[NSIndexPath stringForKey:]`
	fun string_for_key(key: NSString): NSString in "ObjC" `{
		return [self stringForKey: key];
	`}

	# Wraps: `[NSIndexPath setObject: forKey:]`
	fun set_object(value: NSObject, default_name: NSString)
	in "ObjC" `{
		[self setObject:value forKey:default_name];
	`}
end
