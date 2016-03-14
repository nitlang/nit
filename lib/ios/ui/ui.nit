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

// Proxy for both delegates of UITableView relaying all callbacks to `nit_list_layout`
@interface UITableViewAndDataSource: NSObject <UITableViewDelegate, UITableViewDataSource>

	// Nit object receiving the callbacks
	@property TableView nit_list_layout;

	// List of native views added to this list view from the Nit side
	@property NSMutableArray *views;
@end

@implementation UITableViewAndDataSource

	- (id)init
	{
		self = [super init];
		self.views = [[NSMutableArray alloc] initWithCapacity:8];
		return self;
	}

	- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
		return TableView_number_of_sections_in_table_view(self.nit_list_layout, tableView);
	}

	- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
		return TableView_number_of_rows_in_section(self.nit_list_layout, tableView, section);
	}

	- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
		return TableView_title_for_header_in_section(self.nit_list_layout, tableView, section);
	}

	- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
		return TableView_cell_for_row_at_index_path(self.nit_list_layout, tableView, indexPath);
	}
@end
`}

redef class App
	redef fun did_finish_launching_with_options
	do
		app_delegate.window = new UIWindow
		app_delegate.window.background_color = new UIColor.white_color
		super
		app_delegate.window.make_key_and_visible
		return true
	end

	private fun set_view_controller(window: UIWindow, native: UIViewController)
	in "ObjC" `{
		// Set the required root view controller
		UINavigationController *navController = (UINavigationController*)window.rootViewController;

		if (navController == NULL) {
			navController = [[UINavigationController alloc]initWithRootViewController:native];
			navController.edgesForExtendedLayout = UIRectEdgeNone;

			// Must be non-translucent for the controls to be placed under
			// (as in Y axis) of the navigation bar.
			navController.navigationBar.translucent = NO;

			window.rootViewController = navController;
		}
		else {
			[navController pushViewController:native animated:YES];
		}

		native.edgesForExtendedLayout = UIRectEdgeNone;
	`}

	redef fun window=(window)
	do
		set_view_controller(app_delegate.window, window.native)
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

		if view isa View then
			view.native.remove_from_superview
		end
	end
end

redef class Window

	redef type NATIVE: UIViewController
	redef var native = new UIViewController

	# Title of this window
	fun title: String do return native.title.to_s

	# Set the title of this window
	fun title=(title: String) do native.title = title.to_nsstring

	redef fun add(view)
	do
		super

		var native_view = view.native
		assert native_view isa UIView

		native.view = native_view
	end
end

redef class Layout

	redef type NATIVE: UIStackView
	redef var native = new UIStackView

	init
	do
		native.alignment = new UIStackViewAlignment.fill
		native.distribution = new UIStackViewDistribution.fill_equally

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

# On iOS, check boxes are a layout composed of a label and an `UISwitch`
redef class CheckBox

	redef type NATIVE: UIStackView
	redef fun native do return layout.native

	# Root layout implementing this check box
	var layout = new HorizontalLayout(parent=self.parent)

	# Label with the text
	var lbl = new Label(parent=layout)

	# `UISwitch` acting as the real check box
	var ui_switch: UISwitch is noautoinit

	init do
		# Tweak the layout so it is centered
		layout.native.distribution = new UIStackViewDistribution.fill_proportionally
		layout.native.alignment = new UIStackViewAlignment.center
		layout.native.layout_margins_relative_arrangement = true

		var s = new UISwitch
		native.add_arranged_subview s
		ui_switch = s
	end

	redef fun text=(text) do lbl.text = text
	redef fun text do return lbl.text

	redef fun is_checked do return ui_switch.on
	redef fun is_checked=(value) do ui_switch.set_on_animated(value, true)
end

redef class TextInput

	redef type NATIVE: UITextField
	redef var native = new UITextField

	redef fun text=(text) do native.text = (text or else "").to_nsstring
	redef fun text do return native.text.to_s

	redef fun is_password=(value)
	do
		native.secure_text_entry = value or else false
		super
	end
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

# On iOS, implemented by a `UIStackView` inside a ` UIScrollView`
redef class ListLayout

	redef type NATIVE: UIScrollView
	redef var native = new UIScrollView

	# Real container of the subviews, contained within `native`
	var native_stack_view = new UIStackView

	init
	do
		native_stack_view.translates_autoresizing_mask_into_constraits = false
		native_stack_view.axis = new UILayoutConstraintAxis.vertical
		native_stack_view.alignment = new UIStackViewAlignment.fill
		native_stack_view.distribution = new UIStackViewDistribution.fill_equally
		native_stack_view.spacing = 4.0

		native.add_subview native_stack_view
		native_add_constraints(native, native_stack_view)
	end

	private fun native_add_constraints(scroll_view: UIScrollView, stack_view: UIStackView) in "ObjC" `{
		[scroll_view addConstraints:[NSLayoutConstraint
			constraintsWithVisualFormat: @"V:|-8-[view]-8-|"
			options: NSLayoutFormatAlignAllCenterX metrics: nil views: @{@"view": stack_view}]];
		[scroll_view addConstraints:[NSLayoutConstraint
			constraintsWithVisualFormat: @"H:|-8-[view]"
			options: NSLayoutFormatAlignAllCenterX metrics: nil views: @{@"view": stack_view}]];
	`}

	redef fun add(view)
	do
		super

		if view isa View then
			native_stack_view.add_arranged_subview view.native
		end
	end
end

# iOS specific layout using a `UITableView`, works only with simple children views
class TableView
	super CompositeControl

	redef type NATIVE: UITableView
	redef var native = new UITableView(new UITableViewStyle.plain)

	init
	do
		native.autoresizing_mask
		native.assign_delegate_and_data_source self
	end

	redef fun add(item)
	do
		# Adding a view to a UITableView is a bit tricky.
		#
		# Items are added to the Objective-C view only by callbacks.
		# We must store the sub views in local lists while waiting
		# for the callbacks.
		#
		# As usual, we keep the Nity object in `items`.
		# But we also keep their native counterparts in a list of
		# the `UITableViewAndDataSource` set as `native.delegate`.
		# Otherwise the native views could be freed by the Objective-C GC.

		# TODO use an adapter for the app.nit ListLayout closer to what exists
		# on both iOS and Android, to support large data sets.

		if item isa View then
			add_view_to_native_list(native, item.native)
		end

		super

		# Force redraw and trigger callbacks
		native.reload_data
	end

	private fun add_view_to_native_list(native: UITableView, item: UIView) in "ObjC" `{
		[((UITableViewAndDataSource*)native.delegate).views addObject:item];
	`}

	private fun get_view_from_native_list(native: UITableView, index: Int): UIView in "ObjC" `{
		return [((UITableViewAndDataSource*)native.delegate).views objectAtIndex:index];
	`}

	# Number of sections in this view
	#
	# By default, we assume that all `items` are in a single section,
	# so there is only one section.
	#
	# iOS callback: `numberOfSectionsInTableView`
	protected fun number_of_sections_in_table_view(view: UITableView): Int
	do return 1

	# Number of entries in `section`
	#
	# By default, we assume that all `items` are in a single section,
	# so no matter the section, this returns `items.length`.
	#
	# iOS callback: `numberOfRowsInSection`
	protected fun number_of_rows_in_section(view: UITableView, section: Int): Int
	do return items.length

	# Title for `section`, return `new NSString.nil` for no title
	#
	# By default, this returns no title.
	#
	# iOS callback: `titleForHeaderInSection`
	protected fun title_for_header_in_section(view: UITableView, section: Int): NSString
	do return new NSString.nil

	# Return a `UITableViewCell` for the item at `index_path`
	#
	# By default, we assume that all `items` are in a single section.
	# So no matter the depth of the `index_path`, this returns a cell with
	# the view at index part of `index_path`.
	#
	# iOS callback: `cellForRowAtIndexPath`
	protected fun cell_for_row_at_index_path(table_view: UITableView, index_path: NSIndexPath): UITableViewCell
	do
		var reuse_id = "NitCell".to_nsstring
		var cell = new UITableViewCell(reuse_id)

		# TODO if there is performance issues, reuse cells with
		# the following code, but clear the cell before use.

		#var cell = table_view.dequeue_reusable_cell_with_identifier(reuse_id)
		#if cell.address_is_null then cell = new UITableViewCell(reuse_id)

		var index = index_path.index_at_position(1)
		var view_native = get_view_from_native_list(table_view, index)
		var cv = cell.content_view
		cv.add_subview view_native

		return cell
	end
end

redef class UITableView

	# Assign `list_view` as `delegate` and `dataSource`, and pin all references in both GCs
	private fun assign_delegate_and_data_source(list_view: TableView)
	import TableView.number_of_sections_in_table_view,
	       TableView.number_of_rows_in_section,
	       TableView.title_for_header_in_section,
	       TableView.cell_for_row_at_index_path in "ObjC" `{

		UITableViewAndDataSource *objc_delegate = [[UITableViewAndDataSource alloc] init];
		objc_delegate = (__bridge UITableViewAndDataSource*)CFBridgingRetain(objc_delegate);

		objc_delegate.nit_list_layout = list_view;
		TableView_incr_ref(list_view);

		// Set our
		self.delegate = objc_delegate;
		self.dataSource = objc_delegate;
	`}
end
