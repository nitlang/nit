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

# Simple iOS app with a single label
module hello_ios is
	example
	app_name "Hello iOS"
	app_namespace "nit.app.hello_ios"
	app_version(0, 5, git_revision)
end

import ios

redef class App
	redef fun did_finish_launching_with_options
	do
		return app_delegate.hello_world
	end
end

redef class AppDelegate

	# Print and show "Hello World!"
	private fun hello_world: Bool in "ObjC" `{

		// Print to the console
		NSLog(@"Hello World!");

		// Display "Hello world!" on the screen
		CGRect frame = [[UIScreen mainScreen] bounds];
		self.window = [[UIWindow alloc] initWithFrame: frame];
		self.window.backgroundColor = [UIColor whiteColor];

		UILabel *label = [[UILabel alloc] init];
		label.text = @"Hello World!";
		label.center = CGPointMake(100, 100);
		[label sizeToFit];

		// As with `self.window` we must set a `rootViewController`
		self.window.rootViewController = [[UIViewController alloc]initWithNibName:nil bundle:nil];
		self.window.rootViewController.view = label;

		[self.window addSubview: label];
		[self.window makeKeyAndVisible];

		return YES;
	`}
end
