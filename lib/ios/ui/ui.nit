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

# Implementation of `app::ui` for iOS
module ui

import app::ui

import ios
import uikit

in "ObjC" `{
// Objective-C object receiving callbacks from UI events
@interface NitCallbackReference: NSObject

	// Nit object target of the callbacks from UI events
	@property (nonatomic) Button nit_button;

	// Actual callback method
	-(void) nitOnEvent: (UIButton*) sender;
@end

@implementation NitCallbackReference

	-(void) nitOnEvent: (UIButton*) sender {
		Button_on_click(self.nit_button);
	}
@end
`}

redef class App
	redef fun did_finish_launching_with_options
	do
		on_create
		window.native.make_key_and_visible
		return true
	end

	redef fun window=(window)
	do
		app_delegate.window = window.native
		super
	end
end

redef class AppDelegate

	# The main application window, must be set by `App::on_create`
	fun window: UIWindow in "ObjC" `{ return [self window]; `}

	# The main application window, must be set by `App::on_create`
	fun window=(window: UIWindow) in "ObjC" `{ self.window = window; `}
end

redef class Control

	# Native implementation of this control
	fun native: NATIVE is abstract

	# Type of the `native` implementation of this control
	type NATIVE: NSObject
end

redef class View
	redef type NATIVE: UIView

	redef var enabled = null is lazy
end

redef class CompositeControl

	redef fun remove(view)
	do
		super

		var native_view = view.native
		assert native_view isa UIView
		native_view.remove_from_superview
	end
end

redef class Window

	redef type NATIVE: UIWindow
	redef var native = new UIWindow

	init do native.background_color = new UIColor.white_color

	redef fun add(view)
	do
		super

		var native_view = view.native
		assert native_view isa UIView
		native.add_subview native_view

		fill_whole_window_with(native_view, native)
	end

	private fun fill_whole_window_with(native: UIView, window: UIWindow)
	in "ObjC" `{
		// Hard coded borders including the top bar
		// FIXME this may cause problems with retina devices
		[window addConstraints:[NSLayoutConstraint
			constraintsWithVisualFormat: @"V:|-24-[view]-8-|"
			options: 0 metrics: nil views: @{@"view": native}]];
		[window addConstraints:[NSLayoutConstraint
			constraintsWithVisualFormat: @"H:|-8-[view]-8-|"
			options: 0 metrics: nil views: @{@"view": native}]];

		// Set the required root view controller
		window.rootViewController = [[UIViewController alloc]initWithNibName:nil bundle:nil];
		window.rootViewController.view = native;
	`}
end

redef class Layout

	redef type NATIVE: UIStackView
	redef var native = new UIStackView

	init
	do
		native.alignment = new UIStackViewAlignment.fill
		native.distribution = new UIStackViewDistribution.fill_equally
		native.translates_autoresizing_mask_into_constraits = false

		# TODO make customizable
		native.spacing = 4.0
	end

	redef fun add(view)
	do
		super

		var native_view = view.native
		assert native_view isa UIView
		self.native.add_arranged_subview native_view
	end
end

redef class HorizontalLayout
	redef init do native.axis = new UILayoutConstraintAxis.horizontal
end

redef class VerticalLayout
	redef init do native.axis = new UILayoutConstraintAxis.vertical
end

redef class Label

	redef type NATIVE: UILabel
	redef var native = new UILabel

	redef fun text=(text) do native.text = (text or else "").to_nsstring
	redef fun text do return native.text.to_s
end

redef class TextInput

	redef type NATIVE: UITextField
	redef var native = new UITextField

	redef fun text=(text) do native.text = (text or else "").to_nsstring
	redef fun text do return native.text.to_s
end

redef class Button

	redef type NATIVE: UIButton
	redef var native = new UIButton(new UIButtonType.system)

	init do native.set_callback self

	redef fun text=(text) do if text != null then native.title = text.to_nsstring
	redef fun text do return native.current_title.to_s

	private fun on_click do notify_observers new ButtonPressEvent(self)

	redef fun enabled=(enabled) do native.enabled = enabled or else true
	redef fun enabled do return native.enabled
end

redef class UIButton
	# Register callbacks on this button to be relayed to `sender`
	private fun set_callback(sender: Button)
	import Button.on_click in "ObjC" `{

		NitCallbackReference *ncr = [[NitCallbackReference alloc] init];
		ncr.nit_button = sender;

		// Pin the objects in both Objective-C and Nit GC
		Button_incr_ref(sender);
		ncr = (__bridge NitCallbackReference*)CFBridgingRetain(ncr);

		[self addTarget:ncr action:@selector(nitOnEvent:)
			forControlEvents:UIControlEventTouchUpInside];
	`}
end
