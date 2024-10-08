# This file is part of NIT (https://nitlanguage.org).
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

# Native services from the `android.view` and `android.widget` namespaces
module native_ui is android_api_min 14

import nit_activity

in "Java" `{
	import android.app.Activity;

	import android.view.Gravity;
	import android.view.View;
	import android.view.ViewGroup;
	import android.view.ViewGroup.MarginLayoutParams;

	import android.widget.Button;
	import android.widget.LinearLayout;
	import android.widget.GridLayout;
	import android.widget.PopupWindow;
	import android.widget.TextView;

	import java.lang.*;
	import java.util.*;
`}

redef extern class NativeActivity

	# Set the main layout of this activity
	fun content_view=(layout: NativeViewGroup) in "Java" `{
		self.setContentView(layout);
	`}
end

# A `View` for Android
extern class NativeView in "Java" `{ android.view.View `}
	super JavaObject

	fun minimum_width=(val: Int) in "Java" `{ self.setMinimumWidth((int)val); `}
	fun minimum_height=(val: Int) in "Java" `{ self.setMinimumHeight((int)val); `}

	fun enabled: Bool in "Java" `{ return self.isEnabled(); `}
	fun enabled=(value: Bool) in "Java" `{ self.setEnabled(value); `}

	# Java implementation: int android.view.View.getId()
	fun id: Int in "Java" `{ return self.getId(); `}

	# Java implementation: android.view.View.setId(int)
	fun id=(id: Int) in "Java" `{ self.setId((int)id); `}
end

# A collection of `NativeView`
extern class NativeViewGroup in "Java" `{ android.view.ViewGroup `}
	super NativeView

	fun add_view(view: NativeView) in "Java" `{ self.addView(view); `}

	fun remove_view(view: NativeView) in "Java" `{ self.removeView(view); `}

	fun add_view_with_weight(view: NativeView, weight: Float)
	in "Java" `{
		self.addView(view, new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.MATCH_PARENT, (float)weight));
	`}
end

# A `NativeViewGroup` organized in a line
extern class NativeLinearLayout in "Java" `{ android.widget.LinearLayout `}
	super NativeViewGroup

	new(context: NativeActivity) in "Java" `{ return new LinearLayout(context); `}

	fun set_vertical in "Java" `{ self.setOrientation(LinearLayout.VERTICAL); `}
	fun set_horizontal in "Java" `{ self.setOrientation(LinearLayout.HORIZONTAL); `}

	redef fun add_view(view) in "Java"
	`{
		MarginLayoutParams params = new MarginLayoutParams(
			LinearLayout.LayoutParams.MATCH_PARENT,
			LinearLayout.LayoutParams.WRAP_CONTENT);
		self.addView(view, params);
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeLinearLayout_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

# A `NativeViewGroup` organized as a grid
extern class NativeGridLayout in "Java" `{ android.widget.GridLayout `}
	super NativeViewGroup

	new(context: NativeActivity) in "Java" `{ return new android.widget.GridLayout(context); `}

	fun row_count=(val: Int) in "Java" `{ self.setRowCount((int)val); `}

	fun column_count=(val: Int) in "Java" `{ self.setColumnCount((int)val); `}

	redef fun add_view(view) in "Java" `{ self.addView(view); `}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeGridLayout_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

extern class NativePopupWindow in "Java" `{ android.widget.PopupWindow `}
	super NativeView

	new (context: NativeActivity) in "Java" `{
		PopupWindow self = new PopupWindow(context);
		self.setWindowLayoutMode(LinearLayout.LayoutParams.MATCH_PARENT,
			LinearLayout.LayoutParams.MATCH_PARENT);
		self.setClippingEnabled(false);
		return self;
	`}

	fun content_view=(layout: NativeViewGroup) in "Java" `{ self.setContentView(layout); `}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativePopupWindow_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

extern class NativeTextView in "Java" `{ android.widget.TextView `}
	super NativeView

	new (context: NativeActivity) in "Java" `{ return new TextView(context); `}

	fun text: JavaString in "Java" `{ return self.getText().toString(); `}

	fun text=(value: JavaString) in "Java" `{ self.setText(value); `}

	fun gravity_center in "Java" `{
		self.setGravity(Gravity.CENTER);
	`}

	fun text_size: Float in "Java" `{
		return self.getTextSize();
	`}

	fun text_size=(dpi: Float) in "Java" `{
		self.setTextSize(android.util.TypedValue.COMPLEX_UNIT_DIP, (float)dpi);
	`}

	# Java implementation:  android.widget.TextView.setTextAppearance(android.content.Context, int)
	fun set_text_appearance(arg0: NativeContext, arg1: Int) in "Java" `{
		self.setTextAppearance(arg0, (int)arg1);
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeTextView_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

extern class NativeEditText in "Java" `{ android.widget.EditText `}
	super NativeTextView

	new (context: NativeActivity) in "Java" `{ return new android.widget.EditText(context); `}

	fun width=(val: Int) in "Java" `{ self.setWidth((int)val); `}

	fun input_type_text in "Java" `{ self.setInputType(android.text.InputType.TYPE_CLASS_TEXT); `}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeEditText_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

extern class NativeButton in "Java" `{ android.widget.Button `}
	super NativeTextView

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeButton_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

# Java class: android.widget.Adapter
extern class Android_widget_Adapter in "Java" `{ android.widget.Adapter `}
	super JavaObject

	# Java implementation:  android.widget.Adapter.registerDataSetObserver(android.database.DataSetObserver)
	#fun register_data_set_observer(arg0: Android_database_DataSetObserver) in "Java" `{
	#self.registerDataSetObserver(arg0);
	#`}

	# Java implementation:  android.widget.Adapter.unregisterDataSetObserver(android.database.DataSetObserver)
	#fun unregister_data_set_observer(arg0: Android_database_DataSetObserver) in "Java" `{
	#self.unregisterDataSetObserver(arg0);
	#`}

	# Java implementation: int android.widget.Adapter.getCount()
	fun get_count: Int in "Java" `{
		return self.getCount();
	`}

	# Java implementation: java.lang.Object android.widget.Adapter.getItem(int)
	fun get_item(arg0: Int): JavaObject in "Java" `{
		return self.getItem((int)arg0);
	`}

	# Java implementation: long android.widget.Adapter.getItemId(int)
	fun get_item_id(arg0: Int): Int in "Java" `{
		return self.getItemId((int)arg0);
	`}

	# Java implementation: boolean android.widget.Adapter.hasStableIds()
	fun has_stable_ids: Bool in "Java" `{
		return self.hasStableIds();
	`}

	# Java implementation: android.view.View android.widget.Adapter.getView(int, android.view.View, android.view.ViewGroup)
	fun get_view(arg0: Int, arg1: NativeView, arg2: NativeViewGroup): NativeView in "Java" `{
		return self.getView((int)arg0, arg1, arg2);
	`}

	# Java implementation: int android.widget.Adapter.getItemViewType(int)
	fun get_item_view_type(arg0: Int): Int in "Java" `{
		return self.getItemViewType((int)arg0);
	`}

	# Java implementation: int android.widget.Adapter.getViewTypeCount()
	fun get_view_type_count: Int in "Java" `{
		return self.getViewTypeCount();
	`}

	# Java implementation: boolean android.widget.Adapter.isEmpty()
	fun is_empty: Bool in "Java" `{
		return self.isEmpty();
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_Adapter_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java getter: android.widget.Adapter.IGNORE_ITEM_VIEW_TYPE
fun android_widget_adapter_ignore_item_view_type: Int in "Java" `{
	return android.widget.Adapter.IGNORE_ITEM_VIEW_TYPE;
`}

# Java getter: android.widget.Adapter.NO_SELECTION
fun android_widget_adapter_no_selection: Int in "Java" `{
	return android.widget.Adapter.NO_SELECTION;
`}

# Java class: android.widget.ListAdapter
extern class Android_widget_ListAdapter in "Java" `{ android.widget.ListAdapter `}
	super Android_widget_Adapter

	# Java implementation: boolean android.widget.ListAdapter.areAllItemsEnabled()
	fun are_all_items_enabled: Bool in "Java" `{
		return self.areAllItemsEnabled();
	`}

	# Java implementation: boolean android.widget.ListAdapter.isEnabled(int)
	fun is_enabled(arg0: Int): Bool in "Java" `{
		return self.isEnabled((int)arg0);
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_ListAdapter_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.widget.SpinnerAdapter
extern class Android_widget_SpinnerAdapter in "Java" `{ android.widget.SpinnerAdapter `}
	super Android_widget_Adapter

	# Java implementation: android.view.View android.widget.SpinnerAdapter.getDropDownView(int, android.view.View, android.view.ViewGroup)
	fun get_drop_down_view(arg0: Int, arg1: NativeView, arg2: NativeViewGroup): NativeView in "Java" `{
		return self.getDropDownView((int)arg0, arg1, arg2);
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_SpinnerAdapter_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.widget.BaseAdapter
extern class Android_widget_BaseAdapter in "Java" `{ android.widget.BaseAdapter `}
	super Android_widget_ListAdapter
	super Android_widget_SpinnerAdapter

	# Java implementation:  android.widget.BaseAdapter.notifyDataSetChanged()
	fun notify_data_set_changed in "Java" `{
		self.notifyDataSetChanged();
	`}

	# Java implementation:  android.widget.BaseAdapter.notifyDataSetInvalidated()
	fun notify_data_set_invalidated in "Java" `{
		self.notifyDataSetInvalidated();
	`}

	# Java constructor: android.widget.BaseAdapter
	#new  in "Java" `{
		#return new android.widget.BaseAdapter();
	#`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_BaseAdapter_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.widget.ArrayAdapter<T>
extern class Android_widget_ArrayAdapter in "Java" `{ android.widget.ArrayAdapter `}
	super Android_widget_BaseAdapter
	#super Android_widget_Filterable

	# Java implementation:  android.widget.ArrayAdapter<T>.add(java.lang.Object)
	fun add(arg0: JavaObject) in "Java" `{
		self.add(arg0);
	`}

	# Java implementation:  android.widget.ArrayAdapter<T>.addAll(java.util.Collection<java.lang.Object>)
	#fun add_all_Collection(arg0: JavaCollection) in "Java" `{
		#self.addAll(arg0);
	#`}

	# Java implementation:  android.widget.ArrayAdapter<T>.addAll(java.lang.Object)
#	fun add_all_Object(arg0: JavaObject) in "Java" `{
#		self.addAll(arg0);
#	`}

	# Java implementation:  android.widget.ArrayAdapter<T>.insert(java.lang.Object, int)
	fun insert(arg0: JavaObject, arg1: Int) in "Java" `{
		self.insert(arg0, (int)arg1);
	`}

	# Java implementation:  android.widget.ArrayAdapter<T>.remove(java.lang.Object)
	fun remove(arg0: JavaObject) in "Java" `{
		self.remove(arg0);
	`}

	# Java implementation:  android.widget.ArrayAdapter<T>.clear()
	fun clear in "Java" `{
		self.clear();
	`}

	# Java implementation:  android.widget.ArrayAdapter<T>.sort(java.util.Comparator<T>)
	#fun sort(arg0: Java_util_Comparator) in "Java" `{
		#self.sort(arg0);
	#`}

	# Java implementation:  android.widget.ArrayAdapter<T>.setNotifyOnChange(boolean)
	fun set_notify_on_change(arg0: Bool) in "Java" `{
		self.setNotifyOnChange(arg0);
	`}

	# Java implementation: android.content.Context android.widget.ArrayAdapter<T>.getContext()
	#fun get_context: NativeContext in "Java" `{
		#return self.getContext();
	#`}

	# Java implementation: int android.widget.ArrayAdapter<T>.getPosition(java.lang.Object)
	fun get_position(arg0: JavaObject): Int in "Java" `{
		return self.getPosition(arg0);
	`}

	# Java implementation:  android.widget.ArrayAdapter<T>.setDropDownViewResource(int)
	fun set_drop_down_view_resource(arg0: Int) in "Java" `{
		self.setDropDownViewResource((int)arg0);
	`}

	# Java constructor: android.widget.ArrayAdapter<T>
	#new (a: NativeContext, b: Int) in "Java" `{
		#return new android.widget.ArrayAdapter(a, (int)b);
	#`}

	# Java constructor: android.widget.ArrayAdapter<T>
	new from_Context_int_int(a: NativeContext, b: Int, c: Int) in "Java" `{
		return new android.widget.ArrayAdapter(a, (int)b, (int)c);
	`}

	# Java constructor: android.widget.ArrayAdapter<T>
	new from_Context_int_ObjectArray(a: NativeContext, b: Int, c: JavaArray) in "Java" `{
		return new android.widget.ArrayAdapter(a, (int)b, c);
	`}

	# Java constructor: android.widget.ArrayAdapter<T>
	new from_Context_int_int_ObjectArray(a: NativeContext, b: Int, c: Int, d: JavaArray) in "Java" `{
		return new android.widget.ArrayAdapter(a, (int)b, (int)c, d);
	`}

	# Java constructor: android.widget.ArrayAdapter<T>
	#new from_Context_int_List(a: NativeContext, b: Int, c: JavaList) in "Java" `{
		#return new android.widget.ArrayAdapter(a, (int)b, c);
	#`}

	# Java constructor: android.widget.ArrayAdapter<T>
	#new from_Context_int_int_List(a: NativeContext, b: Int, c: Int, d: Java_util_List) in "Java" `{
		#return new android.widget.ArrayAdapter(a, (int)b, (int)c, d);
	#`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_ArrayAdapter_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.app.Fragment
extern class Android_app_Fragment in "Java" `{ android.app.Fragment `}
	super JavaObject

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_app_Fragment_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.widget.AbsListView
extern class Android_widget_AbsListView in "Java" `{ android.widget.AbsListView `}
	#super Android_widget_AdapterView
	#super Android_text_TextWatcher
	#super Android_view_ViewTreeObserver_OnGlobalLayoutListener
	#super Android_widget_Filter_FilterListener
	#super Android_view_ViewTreeObserver_OnTouchModeChangeListener
	super NativeViewGroup

	# Java implementation:  android.widget.AbsListView.setAdapter(android.widget.Adapter)
	fun set_adapter(arg0: Android_widget_ListAdapter) in "Java" `{
		self.setAdapter(arg0);
	`}

	# Java implementation: int android.widget.AbsListView.getCheckedItemCount()
	fun get_checked_item_count: Int in "Java" `{
		return self.getCheckedItemCount();
	`}

	# Java implementation: boolean android.widget.AbsListView.isItemChecked(int)
	fun is_item_checked(arg0: Int): Bool in "Java" `{
		return self.isItemChecked((int)arg0);
	`}

	# Java implementation: int android.widget.AbsListView.getCheckedItemPosition()
	fun get_checked_item_position: Int in "Java" `{
		return self.getCheckedItemPosition();
	`}

	# Java implementation: android.util.SparseBooleanArray android.widget.AbsListView.getCheckedItemPositions()
	#fun get_checked_item_positions: Android_util_SparseBooleanArray in "Java" `{
		#return self.getCheckedItemPositions();
	#`}

	# Java implementation: long[] android.widget.AbsListView.getCheckedItemIds()
	fun get_checked_item_ids: JavaLongArray in "Java" `{
		return self.getCheckedItemIds();
	`}

	# Java implementation:  android.widget.AbsListView.clearChoices()
	fun clear_choices in "Java" `{
		self.clearChoices();
	`}

	# Java implementation:  android.widget.AbsListView.setItemChecked(int, boolean)
	fun set_item_checked(arg0: Int, arg1: Bool) in "Java" `{
		self.setItemChecked((int)arg0, arg1);
	`}

	# Java implementation: int android.widget.AbsListView.getChoiceMode()
	fun get_choice_mode: Int in "Java" `{
		return self.getChoiceMode();
	`}

	# Java implementation:  android.widget.AbsListView.setChoiceMode(int)
	fun set_choice_mode(arg0: Int) in "Java" `{
		self.setChoiceMode((int)arg0);
	`}

	# Java implementation:  android.widget.AbsListView.setMultiChoiceModeListener(android.widget.AbsListView$MultiChoiceModeListener)
	#fun set_multi_choice_mode_listener(arg0: Android_widget_AbsListView_MultiChoiceModeListener) in "Java" `{
		#self.setMultiChoiceModeListener(arg0);
	#`}

	# Java implementation:  android.widget.AbsListView.setFastScrollEnabled(boolean)
	fun set_fast_scroll_enabled(arg0: Bool) in "Java" `{
		self.setFastScrollEnabled(arg0);
	`}

	# Java implementation:  android.widget.AbsListView.setFastScrollAlwaysVisible(boolean)
	fun set_fast_scroll_always_visible(arg0: Bool) in "Java" `{
		self.setFastScrollAlwaysVisible(arg0);
	`}

	# Java implementation: boolean android.widget.AbsListView.isFastScrollAlwaysVisible()
	fun is_fast_scroll_always_visible: Bool in "Java" `{
		return self.isFastScrollAlwaysVisible();
	`}

	# Java implementation: boolean android.widget.AbsListView.isFastScrollEnabled()
	fun is_fast_scroll_enabled: Bool in "Java" `{
		return self.isFastScrollEnabled();
	`}

	# Java implementation:  android.widget.AbsListView.setSmoothScrollbarEnabled(boolean)
	fun set_smooth_scrollbar_enabled(arg0: Bool) in "Java" `{
		self.setSmoothScrollbarEnabled(arg0);
	`}

	# Java implementation: boolean android.widget.AbsListView.isSmoothScrollbarEnabled()
	fun is_smooth_scrollbar_enabled: Bool in "Java" `{
		return self.isSmoothScrollbarEnabled();
	`}

	# Java implementation:  android.widget.AbsListView.setOnScrollListener(android.widget.AbsListView$OnScrollListener)
	#fun set_on_scroll_listener(arg0: Android_widget_AbsListView_OnScrollListener) in "Java" `{
		#self.setOnScrollListener(arg0);
	#`}

	# Java implementation: boolean android.widget.AbsListView.isScrollingCacheEnabled()
	fun is_scrolling_cache_enabled: Bool in "Java" `{
		return self.isScrollingCacheEnabled();
	`}

	# Java implementation:  android.widget.AbsListView.setScrollingCacheEnabled(boolean)
	fun set_scrolling_cache_enabled(arg0: Bool) in "Java" `{
		self.setScrollingCacheEnabled(arg0);
	`}

	# Java implementation:  android.widget.AbsListView.setTextFilterEnabled(boolean)
	fun set_text_filter_enabled(arg0: Bool) in "Java" `{
		self.setTextFilterEnabled(arg0);
	`}

	# Java implementation: boolean android.widget.AbsListView.isTextFilterEnabled()
	fun is_text_filter_enabled: Bool in "Java" `{
		return self.isTextFilterEnabled();
	`}

	# Java implementation: boolean android.widget.AbsListView.isStackFromBottom()
	fun is_stack_from_bottom: Bool in "Java" `{
		return self.isStackFromBottom();
	`}

	# Java implementation:  android.widget.AbsListView.setStackFromBottom(boolean)
	fun set_stack_from_bottom(arg0: Bool) in "Java" `{
		self.setStackFromBottom(arg0);
	`}

	# Java implementation: android.os.Parcelable android.widget.AbsListView.onSaveInstanceState()
	#fun on_save_instance_state: Android_os_Parcelable in "Java" `{
		#return self.onSaveInstanceState();
	#`}

	# Java implementation:  android.widget.AbsListView.onRestoreInstanceState(android.os.Parcelable)
	#fun on_restore_instance_state(arg0: Android_os_Parcelable) in "Java" `{
		#self.onRestoreInstanceState(arg0);
	#`}

	# Java implementation:  android.widget.AbsListView.setFilterText(java.lang.String)
	#fun set_filter_text(arg0: Java_lang_String) in "Java" `{
		#self.setFilterText(arg0);
	#`}

	# Java implementation: java.lang.CharSequence android.widget.AbsListView.getTextFilter()
	#fun get_text_filter: JavaCharSequence in "Java" `{
		#return self.getTextFilter();
	#`}

	# Java implementation: int android.widget.AbsListView.getListPaddingTop()
	fun get_list_padding_top: Int in "Java" `{
		return self.getListPaddingTop();
	`}

	# Java implementation: int android.widget.AbsListView.getListPaddingBottom()
	fun get_list_padding_bottom: Int in "Java" `{
		return self.getListPaddingBottom();
	`}

	# Java implementation: int android.widget.AbsListView.getListPaddingLeft()
	fun get_list_padding_left: Int in "Java" `{
		return self.getListPaddingLeft();
	`}

	# Java implementation: int android.widget.AbsListView.getListPaddingRight()
	fun get_list_padding_right: Int in "Java" `{
		return self.getListPaddingRight();
	`}

	# Java implementation:  android.widget.AbsListView.setDrawSelectorOnTop(boolean)
	fun set_draw_selector_on_top(arg0: Bool) in "Java" `{
		self.setDrawSelectorOnTop(arg0);
	`}

	# Java implementation:  android.widget.AbsListView.setSelector(int)
	fun set_selector_int(arg0: Int) in "Java" `{
		self.setSelector((int)arg0);
	`}

	# Java implementation:  android.widget.AbsListView.setSelector(android.graphics.drawable.Drawable)
	#fun set_selector_Drawable(arg0: Android_graphics_drawable_Drawable) in "Java" `{
		#self.setSelector(arg0);
	#`}

	# Java implementation: android.graphics.drawable.Drawable android.widget.AbsListView.getSelector()
	#fun get_selector: Android_graphics_drawable_Drawable in "Java" `{
		#return self.getSelector();
	#`}

	# Java implementation:  android.widget.AbsListView.setScrollIndicators(android.view.View, android.view.View)
	fun set_scroll_indicators(arg0: NativeView, arg1: NativeView) in "Java" `{
		self.setScrollIndicators(arg0, arg1);
	`}

	# Java implementation: boolean android.widget.AbsListView.verifyDrawable(android.graphics.drawable.Drawable)
	#fun verify_drawable(arg0: Android_graphics_drawable_Drawable): Bool in "Java" `{
		#return self.verifyDrawable(arg0);
	#`}

	# Java implementation: int android.widget.AbsListView.pointToPosition(int, int)
	fun point_to_position(arg0: Int, arg1: Int): Int in "Java" `{
		return self.pointToPosition((int)arg0, (int)arg1);
	`}

	# Java implementation: long android.widget.AbsListView.pointToRowId(int, int)
	fun point_to_row_id(arg0: Int, arg1: Int): Int in "Java" `{
		return self.pointToRowId((int)arg0, (int)arg1);
	`}

	# Java implementation:  android.widget.AbsListView.setFriction(float)
	fun set_friction(arg0: Float) in "Java" `{
		self.setFriction((float)arg0);
	`}

	# Java implementation:  android.widget.AbsListView.setVelocityScale(float)
	fun set_velocity_scale(arg0: Float) in "Java" `{
		self.setVelocityScale((float)arg0);
	`}

	# Java implementation:  android.widget.AbsListView.smoothScrollToPosition(int)
	fun smooth_scroll_to_position_int(arg0: Int) in "Java" `{
		self.smoothScrollToPosition((int)arg0);
	`}

	# Java implementation:  android.widget.AbsListView.smoothScrollToPosition(int, int)
	fun smooth_scroll_to_position_int_int(arg0: Int, arg1: Int) in "Java" `{
		self.smoothScrollToPosition((int)arg0, (int)arg1);
	`}

	# Java implementation:  android.widget.AbsListView.smoothScrollToPositionFromTop(int, int, int)
	fun smooth_scroll_to_position_from_top_int_int_int(arg0: Int, arg1: Int, arg2: Int) in "Java" `{
		self.smoothScrollToPositionFromTop((int)arg0, (int)arg1, (int)arg2);
	`}

	# Java implementation:  android.widget.AbsListView.smoothScrollToPositionFromTop(int, int)
	fun smooth_scroll_to_position_from_top_int_int(arg0: Int, arg1: Int) in "Java" `{
		self.smoothScrollToPositionFromTop((int)arg0, (int)arg1);
	`}

	# Java implementation:  android.widget.AbsListView.smoothScrollBy(int, int)
	fun smooth_scroll_by(arg0: Int, arg1: Int) in "Java" `{
		self.smoothScrollBy((int)arg0, (int)arg1);
	`}

	# Java implementation:  android.widget.AbsListView.invalidateViews()
	fun invalidate_views in "Java" `{
		self.invalidateViews();
	`}

	# Java implementation:  android.widget.AbsListView.clearTextFilter()
	fun clear_text_filter in "Java" `{
		self.clearTextFilter();
	`}

	# Java implementation: boolean android.widget.AbsListView.hasTextFilter()
	fun has_text_filter: Bool in "Java" `{
		return self.hasTextFilter();
	`}

	# Java implementation:  android.widget.AbsListView.setTranscriptMode(int)
	fun set_transcript_mode(arg0: Int) in "Java" `{
		self.setTranscriptMode((int)arg0);
	`}

	# Java implementation: int android.widget.AbsListView.getTranscriptMode()
	fun get_transcript_mode: Int in "Java" `{
		return self.getTranscriptMode();
	`}

	# Java implementation:  android.widget.AbsListView.setCacheColorHint(int)
	fun set_cache_color_hint(arg0: Int) in "Java" `{
		self.setCacheColorHint((int)arg0);
	`}

	# Java implementation: int android.widget.AbsListView.getCacheColorHint()
	fun get_cache_color_hint: Int in "Java" `{
		return self.getCacheColorHint();
	`}

	# Java implementation:  android.widget.AbsListView.reclaimViews(java.util.List<android.view.View>)
	#fun reclaim_views(arg0: Java_util_List) in "Java" `{
		#self.reclaimViews(arg0);
	#`}

	# Java implementation:  android.widget.AbsListView.setRemoteViewsAdapter(android.content.Intent)
	#fun set_remote_views_adapter(arg0: Android_content_Intent) in "Java" `{
		#self.setRemoteViewsAdapter(arg0);
	#`}

	# Java implementation:  android.widget.AbsListView.deferNotifyDataSetChanged()
	fun defer_notify_data_set_changed in "Java" `{
		self.deferNotifyDataSetChanged();
	`}

	# Java implementation: boolean android.widget.AbsListView.onRemoteAdapterConnected()
	fun on_remote_adapter_connected: Bool in "Java" `{
		return self.onRemoteAdapterConnected();
	`}

	# Java implementation:  android.widget.AbsListView.onRemoteAdapterDisconnected()
	fun on_remote_adapter_disconnected in "Java" `{
		self.onRemoteAdapterDisconnected();
	`}

	# Java implementation:  android.widget.AbsListView.setRecyclerListener(android.widget.AbsListView$RecyclerListener)
	#fun set_recycler_listener(arg0: Android_widget_AbsListView_RecyclerListener) in "Java" `{
		#self.setRecyclerListener(arg0);
	#`}

	# Java constructor: android.widget.AbsListView
	#new (a: NativeContext) in "Java" `{
		#return new android.widget.AbsListView(a);
	#`}

	# Java constructor: android.widget.AbsListView
	#new from_Context_AttributeSet(a: NativeView, b: Android_util_AttributeSet) in "Java" `{
		#return new android.widget.AbsListView(a, b);
	#`}

	# Java constructor: android.widget.AbsListView
	#new from_Context_AttributeSet_int(a: NativeView, b: Android_util_AttributeSet, c: Int) in "Java" `{
		#return new android.widget.AbsListView(a, b, (int)c);
	#`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_AbsListView_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.widget.ListView
extern class Android_widget_ListView in "Java" `{ android.widget.ListView `}
	super Android_widget_AbsListView

	# Java implementation: int android.widget.ListView.getMaxScrollAmount()
	fun get_max_scroll_amount: Int in "Java" `{
		return self.getMaxScrollAmount();
	`}

	# Java implementation:  android.widget.ListView.addHeaderView(android.view.View, java.lang.Object, boolean)
	fun add_header_view_View_Object_boolean(arg0: NativeView, arg1: JavaObject, arg2: Bool) in "Java" `{
		self.addHeaderView(arg0, arg1, arg2);
	`}

	# Java implementation:  android.widget.ListView.addHeaderView(android.view.View)
	fun add_header_view_View(arg0: NativeView) in "Java" `{
		self.addHeaderView(arg0);
	`}

	# Java implementation: int android.widget.ListView.getHeaderViewsCount()
	fun get_header_views_count: Int in "Java" `{
		return self.getHeaderViewsCount();
	`}

	# Java implementation: boolean android.widget.ListView.removeHeaderView(android.view.View)
	fun remove_header_view(arg0: NativeView): Bool in "Java" `{
		return self.removeHeaderView(arg0);
	`}

	# Java implementation:  android.widget.ListView.addFooterView(android.view.View, java.lang.Object, boolean)
	fun add_footer_view_View_Object_boolean(arg0: NativeView, arg1: JavaObject, arg2: Bool) in "Java" `{
		self.addFooterView(arg0, arg1, arg2);
	`}

	# Java implementation:  android.widget.ListView.addFooterView(android.view.View)
	fun add_footer_view_View(arg0: NativeView) in "Java" `{
		self.addFooterView(arg0);
	`}

	# Java implementation: int android.widget.ListView.getFooterViewsCount()
	fun get_footer_views_count: Int in "Java" `{
		return self.getFooterViewsCount();
	`}

	# Java implementation: boolean android.widget.ListView.removeFooterView(android.view.View)
	fun remove_footer_view(arg0: NativeView): Bool in "Java" `{
		return self.removeFooterView(arg0);
	`}

	# Java implementation:  android.widget.ListView.smoothScrollByOffset(int)
	fun smooth_scroll_by_offset(arg0: Int) in "Java" `{
		self.smoothScrollByOffset((int)arg0);
	`}

	# Java implementation:  android.widget.ListView.setSelectionFromTop(int, int)
	fun set_selection_from_top(arg0: Int, arg1: Int) in "Java" `{
		self.setSelectionFromTop((int)arg0, (int)arg1);
	`}

	# Java implementation:  android.widget.ListView.setSelectionAfterHeaderView()
	fun set_selection_after_header_view in "Java" `{
		self.setSelectionAfterHeaderView();
	`}

	# Java implementation:  android.widget.ListView.setItemsCanFocus(boolean)
	fun set_items_can_focus(arg0: Bool) in "Java" `{
		self.setItemsCanFocus(arg0);
	`}

	# Java implementation: boolean android.widget.ListView.getItemsCanFocus()
	fun get_items_can_focus: Bool in "Java" `{
		return self.getItemsCanFocus();
	`}

	# Java implementation: android.graphics.drawable.Drawable android.widget.ListView.getDivider()
	#fun get_divider: Android_graphics_drawable_Drawable in "Java" `{
		#return self.getDivider();
	#`}

	# Java implementation:  android.widget.ListView.setDivider(android.graphics.drawable.Drawable)
	#fun set_divider(arg0: Android_graphics_drawable_Drawable) in "Java" `{
		#self.setDivider(arg0);
	#`}

	# Java implementation: int android.widget.ListView.getDividerHeight()
	fun get_divider_height: Int in "Java" `{
		return self.getDividerHeight();
	`}

	# Java implementation:  android.widget.ListView.setDividerHeight(int)
	fun set_divider_height(arg0: Int) in "Java" `{
		self.setDividerHeight((int)arg0);
	`}

	# Java implementation:  android.widget.ListView.setHeaderDividersEnabled(boolean)
	fun set_header_dividers_enabled(arg0: Bool) in "Java" `{
		self.setHeaderDividersEnabled(arg0);
	`}

	# Java implementation:  android.widget.ListView.setFooterDividersEnabled(boolean)
	fun set_footer_dividers_enabled(arg0: Bool) in "Java" `{
		self.setFooterDividersEnabled(arg0);
	`}

	# Java implementation:  android.widget.ListView.setOverscrollHeader(android.graphics.drawable.Drawable)
	#fun set_overscroll_header(arg0: Android_graphics_drawable_Drawable) in "Java" `{
		#self.setOverscrollHeader(arg0);
	#`}

	# Java implementation: android.graphics.drawable.Drawable android.widget.ListView.getOverscrollHeader()
	#fun get_overscroll_header: Android_graphics_drawable_Drawable in "Java" `{
		#return self.getOverscrollHeader();
	#`}

	# Java implementation:  android.widget.ListView.setOverscrollFooter(android.graphics.drawable.Drawable)
	#fun set_overscroll_footer(arg0: Android_graphics_drawable_Drawable) in "Java" `{
		#self.setOverscrollFooter(arg0);
	#`}

	# Java implementation: android.graphics.drawable.Drawable android.widget.ListView.getOverscrollFooter()
	#fun get_overscroll_footer: Android_graphics_drawable_Drawable in "Java" `{
		#return self.getOverscrollFooter();
	#`}

	# Java implementation: long[] android.widget.ListView.getCheckItemIds()
	fun get_check_item_ids: JavaLongArray in "Java" `{
		return self.getCheckItemIds();
	`}

	# Java constructor: android.widget.ListView
	new(a: NativeContext) in "Java" `{
		return new android.widget.ListView(a);
	`}

	# Java constructor: android.widget.ListView
	#new from_Context_AttributeSet(a: NativeContext, b: Android_util_AttributeSet) in "Java" `{
		#return new android.widget.ListView(a, b);
	#`}

	# Java constructor: android.widget.ListView
	#new from_Context_AttributeSet_int(a: NativeContext, b: Android_util_AttributeSet, c: Int) in "Java" `{
		#return new android.widget.ListView(a, b, (int)c);
	#`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_ListView_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java getter: android.R$layout.simple_list_item_1
fun android_r_layout_simple_list_item_1: Int in "Java" `{
	return android.R.layout.simple_list_item_1;
`}

# Java getter: android.R$layout.simple_list_item_2
fun android_r_layout_simple_list_item_2: Int in "Java" `{
	return android.R.layout.simple_list_item_2;
`}

# Java getter: android.R$layout.simple_list_item_activated_1
fun android_r_layout_simple_list_item_activated_1: Int in "Java" `{
	return android.R.layout.simple_list_item_activated_1;
`}

# Java getter: android.R$layout.simple_list_item_activated_2
fun android_r_layout_simple_list_item_activated_2: Int in "Java" `{
	return android.R.layout.simple_list_item_activated_2;
`}

# Java getter: android.R$layout.simple_list_item_checked
fun android_r_layout_simple_list_item_checked: Int in "Java" `{
	return android.R.layout.simple_list_item_checked;
`}

# Java getter: android.R$layout.simple_list_item_multiple_choice
fun android_r_layout_simple_list_item_multiple_choice: Int in "Java" `{
	return android.R.layout.simple_list_item_multiple_choice;
`}

# Java getter: android.R$layout.simple_list_item_single_choice
fun android_r_layout_simple_list_item_single_choice: Int in "Java" `{
	return android.R.layout.simple_list_item_single_choice;
`}

# Java getter: android.R$layout.simple_selectable_list_item
fun android_r_layout_simple_selectable_list_item: Int in "Java" `{
	return android.R.layout.simple_selectable_list_item;
`}

# Java getter: android.R$style.TextAppearance_Large
fun android_r_style_text_appearance_large: Int in "Java" `{
	return android.R.style.TextAppearance_Large;
`}

# Java getter: android.R$style.TextAppearance_Medium
fun android_r_style_text_appearance_medium: Int in "Java" `{
	return android.R.style.TextAppearance_Medium;
`}

# Java getter: android.R$style.TextAppearance_Small
fun android_r_style_text_appearance_small: Int in "Java" `{
	return android.R.style.TextAppearance_Small;
`}

# Java class: android.widget.Checkable
extern class Android_widget_Checkable in "Java" `{ android.widget.Checkable `}
	super JavaObject

	# Java implementation: android.widget.Checkable.setChecked(boolean)
	fun set_checked(arg0: Bool) in "Java" `{
		self.setChecked(arg0);
	`}

	# Java implementation: boolean android.widget.Checkable.isChecked()
	fun is_checked: Bool in "Java" `{
		return self.isChecked();
	`}

	# Java implementation: android.widget.Checkable.toggle()
	fun toggle in "Java" `{
		self.toggle();
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_Checkable_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java abstract class: android.widget.CompoundButton
extern class Android_widget_CompoundButton in "Java" `{ android.widget.CompoundButton `}
	super NativeButton
	super Android_widget_Checkable

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_CompoundButton_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: android.widget.CheckBox
extern class Android_widget_CheckBox in "Java" `{ android.widget.CheckBox `}
	super Android_widget_CompoundButton

	# Java constructor: android.widget.CheckBox
	new (a: NativeContext) in "Java" `{
		return new android.widget.CheckBox(a);
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Android_widget_CheckBox_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end
