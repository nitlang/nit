# This file is part of NIT ( https://nitlanguage.org ).
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

# Implementation of `app::http_request` for iOS
module http_request

import ios
import cocoa::foundation
intrude import app::http_request

redef class App
	redef fun run_on_ui_thread(task) import Task.main in "ObjC" `{
		Task_incr_ref(task);
		dispatch_async(dispatch_get_main_queue(), ^{
			Task_main(task);
			Task_decr_ref(task);
		});
	`}
end

redef class Text
	redef fun http_get
	do
		var error_ref = new Ref[NSString]("Unknown Error".to_nsstring)
		var data = to_nsstring.native_http_get(60.0, error_ref)

		if data.address_is_null then
			# There was an error
			var error = new IOError(error_ref.item.to_s)
			return new HttpRequestResult(null, error)
		else
			# TODO use the real return code instead of 200
			return new HttpRequestResult(data.to_s, null, 200)
		end
	end
end

redef class NSString
	private fun native_http_get(timeout: Float, error_ref: Ref[NSString]): NSData
	import Ref[NSString].item= in "ObjC" `{

		NSURL *url = [NSURL URLWithString:self];
		NSURLRequest *request = [NSURLRequest requestWithURL:url
			cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:timeout];

		NSURLResponse *response = nil;
		NSError *error = nil;
		NSData *data = [NSURLConnection sendSynchronousRequest:request
			returningResponse:&response error:&error];

		if (data == nil) {
			// Report error
			Ref_of_NSString_item__assign(error_ref, [error localizedDescription]);
			return nil;
		}

		return data;
	`}
end
