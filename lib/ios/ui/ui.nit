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

# Implementation of `app::ui` for iOS
module ui

import app::ui

import ios
import uikit

in "ObjC" `{
// Objective-C object receiving callbacks from UI events
@interface NitCallbackReference: NSObject

	// Nit object target of the callbacks from UI events
	@property (nonatomic) View nit_view;

	// Actual callback method
	-(void) nitOnEvent: (UIView*) sender;
@end

@implementation NitCallbackReference

	-(void) nitOnEvent: (UIView*) sender {
		View_on_ios_event(self.nit_view);
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

// View controller associated to an app.nit Window
@interface NitViewController: UIViewController
@end

@implementation NitViewController
	- (void)viewWillDisappear:(BOOL)animated {
		[super viewWillDisappear:animated];

		if (self.isMovingFromParentViewController || self.isBeingDismissed) {
			extern App app_nit_ios_app;
			App_after_window_pop(app_nit_ios_app);
		}
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

	redef fun push_window(window)
	do
		set_view_controller(app_delegate.window, window.native)
		super
	end

	# Use iOS ` popViewControllerAnimated`
	redef fun pop_window
	do
		manual_pop = true
		pop_view_controller app_delegate.window
		super
	end

	private fun pop_view_controller(window: UIWindow) in "ObjC" `{
		UINavigationController *navController = (UINavigationController*)window.rootViewController;
		[navController popViewControllerAnimated: YES];
	`}

	# Is the next `after_window_pop`  triggered by a call to `pop_window`?
	#
	# Otherwise, it's by the user via the navigation bar "Back" button.
	private var manual_pop = false

	# Callback when `window` is displayed again
	private fun after_window_pop
	do
		if not manual_pop then window_stack.pop
		manual_pop = false
		window.on_resume
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

	private fun on_ios_event do end
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

# View controller associated to an app.nit `Window`
extern class NitViewController
	super UIViewController

	new import App.after_window_pop in "ObjC" `{
		return [[NitViewController alloc] init];
	`}
end

redef class Window

	redef type NATIVE: NitViewController
	redef var native = new NitViewController

	# Title of this window
	fun title: String do return native.title.to_s

	# Set the title of this window
	fun title=(title: String) do native.title = title.to_nsstring

	redef fun add(view)
	do
		super

		var native_view = view.native
		assert native_view isa UIView

		if view isa ListLayout then
			native.view.add_subview native_view
		else native.view = native_view
	end
end

redef class Layout

	redef type NATIVE: UIStackView
	redef var native = new UIStackView

	init
	do
		native.alignment = new UIStackViewAlignment.fill
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
	redef init
	do
		native.axis = new UILayoutConstraintAxis.horizontal
		native.distribution = new UIStackViewDistribution.fill_equally
	end
end

redef class VerticalLayout
	redef init
	do
		native.axis = new UILayoutConstraintAxis.vertical
		native.distribution = new UIStackViewDistribution.equal_spacing
	end
end

redef class TextView
	# Convert `size` from app.nit relative size to iOS font points
	private fun ios_points(size: nullable Float): Float
	do
		size = size or else 1.0
		return 8.0 + size * 5.0
	end
end

redef class Label

	redef type NATIVE: UILabel
	redef var native = new UILabel

	redef fun text=(text) do native.text = (text or else "").to_nsstring
	redef fun text do return native.text.to_s

	redef fun size=(size) do native.size = ios_points(size)

	redef fun align=(align) do native.align = align or else 0.0
end

redef class UILabel

	private fun size=(points: Float)
	in "ObjC" `{
		self.font = [UIFont systemFontOfSize: points];
	`}

	private fun align=(align: Float)
	in "ObjC" `{
		if (align == 0.5)
			self.textAlignment = NSTextAlignmentCenter;
		else if (align < 0.5)
			self.textAlignment = NSTextAlignmentLeft;
		else//if (align > 0.5)
			self.textAlignment = NSTextAlignmentRight;
	`}
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

	redef fun on_ios_event do notify_observers new ToggleEvent(self)

	init
	do
		# Tweak the layout so it is centered
		layout.native.distribution = new UIStackViewDistribution.equal_spacing
		layout.native.alignment = new UIStackViewAlignment.fill
		layout.native.layout_margins_relative_arrangement = true

		var s = new UISwitch
		native.add_arranged_subview s
		ui_switch = s

		ui_switch.set_callback self
	end

	redef fun text=(text) do lbl.text = text
	redef fun text do return lbl.text

	redef fun is_checked do return ui_switch.on
	redef fun is_checked=(value) do ui_switch.set_on_animated(value, true)
end

redef class UISwitch
	# Register callbacks on this switch to be relayed to `sender`
	private fun set_callback(sender: View)
	import View.on_ios_event in "ObjC" `{

		NitCallbackReference *ncr = [[NitCallbackReference alloc] init];
		ncr.nit_view = sender;

		// Pin the objects in both Objective-C and Nit GC
		View_incr_ref(sender);
		ncr = (__bridge NitCallbackReference*)CFBridgingRetain(ncr);

		[self addTarget:ncr action:@selector(nitOnEvent:)
			forControlEvents:UIControlEventValueChanged];
	`}
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

	redef fun size=(size) do native.size = ios_points(size)

	redef fun align=(align) do native.align = align or else 0.0

	# Set the placeholder text, shown in light gray when the field is empty
	fun placeholder=(text: Text) do native.placeholder = text.to_nsstring
end

redef class UITextField

	private fun size=(points: Float)
	in "ObjC" `{
		self.font = [UIFont systemFontOfSize: points];
	`}

	private fun align=(align: Float)
	in "ObjC" `{
		if (align == 0.5)
			self.textAlignment = NSTextAlignmentCenter;
		else if (align < 0.5)
			self.textAlignment = NSTextAlignmentLeft;
		else//if (align > 0.5)
			self.textAlignment = NSTextAlignmentRight;
	`}
end

redef class Button

	redef type NATIVE: UIButton
	redef var native = new UIButton(new UIButtonType.system)

	init do native.set_callback self

	redef fun on_ios_event do notify_observers new ButtonPressEvent(self)

	redef fun text=(text) do if text != null then native.title = text.to_nsstring
	redef fun text do return native.current_title.to_s

	redef fun enabled=(enabled) do native.enabled = enabled or else true
	redef fun enabled do return native.enabled

	redef fun size=(size) do native.title_label.size = ios_points(size)

	redef fun align=(align) do native.title_label.align = align or else 0.0
end

redef class UIButton
	# Register callbacks on this button to be relayed to `sender`
	private fun set_callback(sender: View)
	import View.on_ios_event in "ObjC" `{

		NitCallbackReference *ncr = [[NitCallbackReference alloc] init];
		ncr.nit_view = sender;

		// Pin the objects in both Objective-C and Nit GC
		View_incr_ref(sender);
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

	redef fun parent=(parent)
	do
		super

		var root_view
		if parent isa Window then
			root_view = parent.native.view
		else if parent isa View then
			root_view = parent.native
		else return

		# Setup scroll view
		var native_scroll_view = native
		native_scroll_view.translates_autoresizing_mask_into_constraits = false
		native_add_constraints(root_view, native_scroll_view)

		# Setup stack_view
		native_stack_view.translates_autoresizing_mask_into_constraits = false
		native_stack_view.axis = new UILayoutConstraintAxis.vertical
		native_scroll_view.add_subview native_stack_view
		native_add_constraints(native_scroll_view, native_stack_view)
		native_lock_vertical_scroll(native_scroll_view, native_stack_view)
	end

	# Add constraints to lock the vertical and horizontal dimensions
	private fun native_add_constraints(root_view: UIView, nested_view: UIView)
	in "ObjC" `{
		[root_view addConstraints:[NSLayoutConstraint
			constraintsWithVisualFormat: @"V:|-0-[nested_view]-0-|"
			options: NSLayoutFormatAlignAllCenterX metrics: nil views: @{@"nested_view": nested_view}]];
		[root_view addConstraints:[NSLayoutConstraint
			constraintsWithVisualFormat: @"H:|-0-[nested_view]-0-|"
			options: NSLayoutFormatAlignAllCenterX metrics: nil views: @{@"nested_view": nested_view}]];
	`}

	# Add a constraint to lock to the scroll vertically
	private fun native_lock_vertical_scroll(scroll_view: UIScrollView, stack_view: UIStackView)
	in "ObjC" `{
		[scroll_view addConstraint: [scroll_view.widthAnchor constraintEqualToAnchor:stack_view.widthAnchor]];
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

redef class Text
	redef fun open_in_browser do to_nsstring.native_open_in_browser
end

redef class NSString
	private fun native_open_in_browser
	in "ObjC" `{
		NSURL *nsurl = [NSURL URLWithString: self];
		[[UIApplication sharedApplication] openURL: nsurl];
	`}
end
