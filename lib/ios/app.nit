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

# Basic structure for Nit apps on iOS
module app

import platform
import ::app

in "ObjC Header" `{
	#import <UIKit/UIKit.h>

	// Our interface to the iOS system
	@interface AppDelegate: UIResponder <UIApplicationDelegate>

		// The main window
		@property (strong, nonatomic) UIWindow *window;
	@end
`}

in "ObjC" `{

	// Global reference to the App from app.nit
	App app_nit_ios_app;

	// Our own C argc and argv
	int app_nit_ios_argc;
	char **app_nit_ios_argv;

	@implementation AppDelegate

	- (BOOL)application:(UIApplication *)application
		willFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

		// Set aside `application` to be used from Nit
		App_ui_application__assign(app_nit_ios_app, application);
		App_app_delegate__assign(app_nit_ios_app, self);

		// Complete the callback
		return App_will_finish_launching_with_options(app_nit_ios_app);
	}

	- (BOOL)application:(UIApplication *)application
		didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

		return App_did_finish_launching_with_options(app_nit_ios_app);
	}

	- (void)applicationWillResignActive:(UIApplication *)application {
		App_will_resign_active(app_nit_ios_app);
	}

	- (void)applicationDidEnterBackground:(UIApplication *)application {
		App_did_enter_background(app_nit_ios_app);
	}

	- (void)applicationWillEnterForeground:(UIApplication *)application {
		App_will_enter_foreground(app_nit_ios_app);
	}

	- (void)applicationDidBecomeActive:(UIApplication *)application {
		App_did_become_active(app_nit_ios_app);
	}

	- (void)applicationWillTerminate:(UIApplication *)application {
		App_will_terminate(app_nit_ios_app);
	}

	@end
`}

# Application interface to the iOS system
extern class AppDelegate in "ObjC" `{ AppDelegate * `}
end

# Graphical application to which events are sent
extern class UIApplication in "ObjC" `{ UIApplication * `}
end

redef class App

	# Main graphical application
	var ui_application: UIApplication

	# Application interface to the iOS system
	var app_delegate: AppDelegate

	# Copy back to C the command line arguments
	#
	# Nit extracts the first arguments from the `args` sequence,
	# so we need to add it back. That's why Nit's `args` is smaller than in C.
	private fun register_args(program_name: CString, argc: Int,
	argv: Sequence[String]) import Sequence[String].[], String.to_cstring in "ObjC" `{
		app_nit_ios_argc = (int)(argc+1);

		// TODO copy or pin the strings when needed
		app_nit_ios_argv = malloc(argc * sizeof(char*));
		app_nit_ios_argv[0] = program_name;
		for (int i = 0; i < argc; i ++) {
			String arg = Sequence_of_String__index(argv, i);
			app_nit_ios_argv[i+1] = String_to_cstring(arg);
		}
	`}

	# Register `self` globally in C so it can be retrieved from iOS callbacks
	private fun register_globally in "ObjC" `{
		App_incr_ref(self);
		app_nit_ios_app = self;
	`}

	# Entry point to the iOS framework
	private fun ui_application_main: Bool import did_finish_launching_with_options,
	will_finish_launching_with_options,
	will_resign_active, did_enter_background, will_enter_foreground,
	did_become_active, will_terminate, ui_application=, app_delegate= in "ObjC" `{

		@autoreleasepool {
			return UIApplicationMain(app_nit_ios_argc, app_nit_ios_argv,
				nil, NSStringFromClass([AppDelegate class]));
		}
	`}

	# The application is about to launch
	#
	# Redef this method to set the very first custom code to be executed.
	fun will_finish_launching_with_options: Bool do return true

	# The application just launched but is not yet displayed to the user
	#
	# Redef this method to customize the behavior.
	fun did_finish_launching_with_options: Bool
	do
		on_create
		on_restore_state
		return true
	end

	# The application is about to move from active to inactive state
	#
	# This can occur for certain types of temporary interruptions
	# (such as an incoming phone call or SMS message) or when the
	# user quits the application and it begins the transition to
	# the background state.
	#
	# Redef this method to pause ongoing tasks, disable timers, and
	# throttle down OpenGL ES frame rates. Games should use this
	# method to pause.
	fun will_resign_active do on_pause

	# The application just left foreground it can be suspended at any time
	#
	# Redef this method to release shared resources, save user data,
	# invalidate timers, and store application state to restore your
	# application to its current state in case it is terminated later.
	#
	# If your application supports background execution, this method
	# is called instead of `will_terminate` when the user quits.
	fun did_enter_background
	do
		on_save_state
		on_stop
	end

	# The application will enter the foreground
	#
	# Called as part of the transition from the background to the
	# inactive state.
	#
	# Redef to undo changes made on entering the background.
	fun will_enter_foreground do on_restart

	# The application just became active
	#
	# Redef to restart any tasks that were paused (or not yet started) while
	# the application was inactive. If the application was previously
	# in the background, optionally refresh the user interface.
	fun did_become_active do on_resume

	# The application is about to terminate (from a state other than suspended)
	#
	# Redef to save data if appropriate.
	fun will_terminate
	do
		# Usually a forced termination by the system
		on_save_state
		on_pause
		on_stop
	end
end

app.register_args(program_name.to_cstring, args.length, args)
app.register_globally

var ret = app.ui_application_main
exit if ret then 0 else 1
