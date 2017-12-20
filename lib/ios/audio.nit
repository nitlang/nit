# This file is part of NIT ( http://www.nitlanguage.org ).
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

# iOS implementation of `app::audio` using `AVAudioPlayer`
module audio

import app::audio
intrude import ios::assets

in "ObjC Header" `{
	#import <AVFoundation/AVFoundation.h>
`}

redef class PlayableAudio

	redef var error = null

	private var native: nullable AVAudioPlayer is lazy do

		# Find file
		var ns_path = ("assets"/path).to_nsstring
		var url_in_bundle = asset_url(ns_path)
		if url_in_bundle.address_is_null then
			self.error = new Error("Sound at '{path}' not found")
			return null
		end

		var player = new AVAudioPlayer.contents_of(url_in_bundle)
		# TODO set delegate to get further errors
		if player.address_is_null then
			self.error = new Error("Sound at '{path}' failed to load")
			return null
		end

		player.prepare_to_play

		return player
	end

	redef fun load do native # For lazy loading

	redef fun play
	do
		var native = native
		if native != null then native.play_and_repare_async
	end

	# Free native resources
	fun destroy
	do
		var native = native
		if native != null then native.release
	end
end

# Audio player playing audio from a file or from memory
private extern class AVAudioPlayer in "ObjC" `{ AVAudioPlayer *`}
	super NSObject

	new contents_of(url: NSObject) in "ObjC" `{
		NSError *error;
		AVAudioPlayer *a = [[AVAudioPlayer alloc] initWithContentsOfURL:(NSURL*)url error:&error];
		if (error != nil) {
			NSLog(@"Failed to load sound: %@", [error localizedDescription]);
			return NULL;
		}

		return (__bridge AVAudioPlayer*)CFBridgingRetain(a);
	`}

	fun play in "ObjC" `{ [self play]; `}

	fun prepare_to_play in "ObjC" `{ [self prepareToPlay]; `}

	fun play_and_repare_async in "ObjC" `{
		dispatch_queue_t q = dispatch_get_global_queue(QOS_CLASS_USER_INTERACTIVE, 0);
		dispatch_async(q, ^{
			[self play];
			[self prepareToPlay];
		});
	`}

	fun release in "ObjC" `{ CFBridgingRelease((__bridge void*)self); `}
end
