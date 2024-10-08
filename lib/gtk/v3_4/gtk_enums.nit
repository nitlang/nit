# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2013 Nathan Heu <heu.nathan@courrier.uqam.ca>
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

module gtk_enums is pkgconfig("gtk+-3.0")

in "C Header" `{
	#include <gtk/gtk.h>
`}

#enum GtkArrowPlacement
#Used to specify the placement of scroll arrows in scrolling menus.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkArrowPlacement
extern class GtkArrowPlacement `{GtkArrowPlacement`}
	#Place one arrow on each end of the menu.
	new both `{ return GTK_ARROWS_BOTH; `}

	#Place both arrows at the top of the menu.
	new top `{ return GTK_ARROWS_START; `}

	#Place both arrows at the bottom of the menu.
	new bottom `{ return GTK_ARROWS_END; `}
end

#enum GtkArrowType
#Used to indicate the direction in which a GtkArrow should point.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkArrowType
extern class GtkArrowType `{GtkArrowType`}
	#Represents an upward pointing arrow.
	new up `{ return GTK_ARROW_UP; `}

	#Represents an downward pointing arrow.
	new down `{ return GTK_ARROW_DOWN; `}

	#Represents a left pointing arrow.
	new left `{ return GTK_ARROW_LEFT; `}

	#Represents a right pointing arrow.
	new right `{ return GTK_ARROW_RIGHT; `}

	#No arrow
	new none `{ return GTK_ARROW_NONE; `}
end

#enum GtkAttachOptions
#Denotes the expansion properties that a widget will have when it (or its parent) is resized.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkAttachOptions
extern class GtkAttachOptions `{GtkAttachOptions`}
	#The widget should expand to take up any extra space in its container that has been allocated.
	new expan `{ return GTK_EXPAND; `}

	#The widget should shrink as and when possible.
	new shrink `{ return GTK_SHRINK; `}

	#The widget should fill the space allocated to it.
	new fill `{ return GTK_FILL; `}
end

#enum GtkButtonBoxStyle
#Used to dictate the style that a GtkButtonBox uses to layout the buttons it contains.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkButtonBoxStyle
extern class GtkButtonBoxStyle `{GtkButtonBoxStyle`}
	#Buttons are evenly spread across the box.
	new spread `{ return GTK_BUTTONBOX_SPREAD; `}

	#Buttons are placed at the edges of the box.
	new edge `{ return GTK_BUTTONBOX_EDGE; `}

	#Buttons are grouped towards the start of the box.
	new start `{ return GTK_BUTTONBOX_START; `}

	#Buttons are grouped towards the end of the box.
	new end_of_box `{ return GTK_BUTTONBOX_END; `}

	#Buttons are centered in the box
	new center `{ return GTK_BUTTONBOX_CENTER; `}
end

#enum GtkCornerType
#Specifies which corner a child widget should be placed in when packed into a GtkScrolledWindow. This is effectively the opposite of where the scroll bars are placed.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkCornerType
extern class GtkCornerType `{GtkCornerType`}
	#Place the scrollbars on the right and bottom of the widget (default behaviour).
	new top_left `{ return GTK_CORNER_TOP_LEFT; `}

	#Place the scrollbars on the right and bottom of the widget (default behaviour).
	new bottom_left `{ return GTK_CORNER_BOTTOM_LEFT; `}

	#Place the scrollbars on the left and bottom of the widget.
	new top_right `{ return GTK_CORNER_TOP_RIGHT; `}

	#Place the scrollbars on the top and left of the widget.
	new bottom_right `{ return GTK_CORNER_BOTTOM_RIGHT; `}
end

#enum GtkExpanderStyle
#Used to specify the style of the expanders drawn by a GtkTreeView.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkExpanderStyle
extern class GtkExpanderStyle `{GtkExpanderStyle`}
	#The style used for a collapsed subtree.
	new collapsed `{ return GTK_EXPANDER_COLLAPSED; `}

	#Intermediate style used during animation.
	new semi_collapsed `{ return GTK_EXPANDER_SEMI_COLLAPSED; `}

	#Intermediate style used during animation.
	new semi_expanded `{ return GTK_EXPANDER_SEMI_EXPANDED; `}

	#The style used for an expanded subtree.
	new expanded `{ return GTK_EXPANDER_EXPANDED; `}
end

#enum GtkJustification
#Used for justifying the text inside a GtkLabel widget.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkJustification
extern class GtkJustification `{GtkJustification`}
	#The text is placed at the left edge of the label.
	new left `{ return GTK_JUSTIFY_LEFT; `}

	#The text is placed at the right edge of the label.
	new right `{ return GTK_JUSTIFY_RIGHT; `}

	#The text is placed in the center of the label.
	new center `{ return GTK_JUSTIFY_CENTER; `}

	#The text is placed is distributed across the label.
	new fill `{ return GTK_JUSTIFY_FILL; `}
end

#enum GtkOrientation
#Represents the orientation of widgets.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkOrientation
extern class GtkOrientation `{GtkOrientation`}
	#The widget is in horizontal orientation.
	new horizontal `{ return GTK_ORIENTATION_HORIZONTAL; `}

	#The widget is in vertical orientation.
	new vertical `{ return GTK_ORIENTATION_VERTICAL; `}
end

#enum GtkPackType
#Represents the packing location GtkBox children.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkPackType
extern class GtkPackType `{GtkPackType`}
	#The child is packed into the start of the box.
	new start `{ return GTK_PACK_START; `}

	#The child is packed into the end of the box.
	new end_of_box `{ return GTK_PACK_END; `}
end

#enum GtkPolicyType
#Determines when a scroll bar will be visible.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkPolicyType
extern class GtkPolicyType `{GtkPolicyType`}
	#The scrollbar is always visible.
	new always `{ return GTK_POLICY_ALWAYS; `}

	#The scrollbar will appear and disappear as necessary.
	new automatic `{ return GTK_POLICY_AUTOMATIC; `}

	#The scrollbar will never appear.
	new never `{ return GTK_POLICY_NEVER; `}
end

#enum GtkPositionType
#Describes which edge of a widget a certain feature is positioned.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkPositionType
extern class GtkPositionType `{GtkPositionType`}
	#The feature is at the left edge.
	new left `{ return GTK_POS_LEFT; `}

	#The feature is at the right edge.
	new right `{ return GTK_POS_RIGHT; `}

	#The feature is at the top edge.
	new top `{ return GTK_POS_TOP; `}

	#The feature is at the bottom edge.
	new bottom `{ return GTK_POS_BOTTOM; `}
end

#enum GtkReliefStyle
#Indicates the relief to be drawn around a GtkButton.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkReliefStyle
extern class GtkReliefStyle `{GtkReliefStyle`}
	#Draw a normal relief.
	new normal `{ return GTK_RELIEF_NORMAL; `}

	#A half relief.
	new half `{ return GTK_RELIEF_HALF; `}

	#No relief.
	new none `{ return GTK_RELIEF_NONE; `}
end

#enum GtkResizeMode
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkResizeMode
extern class GtkResizeMode `{GtkResizeMode`}
	#Pass resize request to the parent.
	new parent `{ return GTK_RESIZE_PARENT; `}

	#Queue resizes on this widget.
	new queue `{ return GTK_RESIZE_QUEUE; `}
end

#enum GtkSelectionMode
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkSelectionMode
extern class GtkSelectionMode `{GtkResizeMode`}
	#No selection is possible.
	new none `{ return GTK_SELECTION_NONE; `}

	#Zero or one element may be selected.
	new single `{ return GTK_SELECTION_SINGLE; `}

	#Exactly one element is selected.
	new browse `{ return GTK_SELECTION_BROWSE; `}

	#Any number of elements may be selected.
	new multiple `{ return GTK_SELECTION_MULTIPLE; `}
end

#enum GtkShadowType
#Used to change the appearance of an outline typically provided by a GtkFrame.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkShadowType
extern class GtkShadowType `{GtkShadowType`}
	#No outline.
	new none `{ return GTK_SHADOW_NONE; `}

	#The outline is bevelled inwards.
	new shadow_in `{ return GTK_SHADOW_IN; `}

	#The outline is bevelled outwards like a button.
	new shadow_out `{ return GTK_SHADOW_OUT; `}

	#The outline has a sunken 3d appearance.
	new etched_id `{ return GTK_SHADOW_ETCHED_IN; `}

	#The outline has a raised 3d appearance.
	new etched_out `{ return GTK_SHADOW_ETCHED_OUT; `}
end

#enum GtkStateType
#Indicates the current state of a widget; the state determines how the widget is drawn.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkStateType
extern class GtkStateType `{GtkStateType`}
	#State during normal operation.
	new normal `{ return GTK_STATE_NORMAL; `}

	#State of a currently active widget, such as a depressed button.
	new active `{ return GTK_STATE_ACTIVE; `}

	#State indicating that the mouse pointer is over the widget and the widget will respond to mouse clicks.
	new prelight `{ return GTK_STATE_PRELIGHT; `}

	#State of a selected item, such the selected row in a list.
	new selected `{ return GTK_STATE_SELECTED; `}

	#State indicating that the widget is unresponsive to user actions.
	new insensitive `{ return GTK_STATE_INSENSITIVE; `}

	#The widget is inconsistent, such as checkbuttons or radiobuttons that aren't either set to TRUE nor FALSE, or buttons requiring the user attention.
	new inconsistent `{ return GTK_STATE_INCONSISTENT; `}

	#The widget has the keyboard focus.
	new focused `{ return GTK_STATE_FOCUSED; `}
end

#enum GtkStateFlags
#Describes a widget state.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkStateFlags
extern class GtkStateFlags `{GtkStateFlags`}
	#State during normal operation.
	new normal `{ return GTK_STATE_FLAG_NORMAL; `}

	#Widget is active.
	new active `{ return GTK_STATE_FLAG_ACTIVE; `}

	#Widget has a mouse pointer over it.
	new prelight `{ return GTK_STATE_FLAG_PRELIGHT; `}

	#Widget is selected.
	new selected `{ return GTK_STATE_FLAG_SELECTED; `}

	#Widget is insensitive.
	new insensitive `{ return GTK_STATE_INSENSITIVE; `}

	#Widget is inconsistent.
	new inconsistent `{ return GTK_STATE_FLAG_INCONSISTENT; `}

	#Widget has the keyboard focus.
	new focused `{ return GTK_STATE_FLAG_FOCUSED; `}
end

#enum GtkToolbarStyle
#Used to customize the appearance of a GtkToolbar.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkToolbarStyle
extern class GtkToolbarStyle `{GtkToolbarStyle`}
	#Buttons display only icons in the toolbar.
	new icons `{ return GTK_TOOLBAR_ICONS; `}

	#Buttons display only text labels in the toolbar.
	new text `{ return GTK_TOOLBAR_TEXT; `}

	#Buttons display text and icons in the toolbar.
	new both `{ return GTK_TOOLBAR_BOTH; `}

	#Buttons display icons and text alongside each other, rather than vertically stacked
	new both_horiz `{ return GTK_TOOLBAR_BOTH_HORIZ; `}
end

#enum GtkWindowPosition
#Window placement can be influenced using this enumeration.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkWindowPosition
extern class GtkWindowPosition `{GtkWindowPosition`}
	#No influence is made on placement.
	new none `{ return GTK_WIN_POS_NONE; `}

	#Windows should be placed in the center of the screen.
	new center `{ return GTK_WIN_POS_CENTER; `}

	#Windows should be placed at the current mouse position.
	new mouse `{ return GTK_WIN_POS_MOUSE; `}

	#Keep window centered as it changes size, etc.
	new center_always `{ return GTK_WIN_POS_CENTER_ALWAYS; `}

	#Center the window on its transient parent.
	new center_on_parent `{ return GTK_WIN_POS_CENTER_ON_PARENT; `}
end

#enum GtkWindowType
#A GtkWindow can be one of these types.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkWindowType
extern class GtkWindowType `{GtkWindowType`}
	#A regular window, such as a dialog
	new toplevel `{ return GTK_WINDOW_TOPLEVEL; `}

	#A special window such as a tooltip.
	new popup `{ return GTK_WINDOW_POPUP; `}
end

#enum GtkSortType
#Determines the direction of a sort.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkSortType
extern class GtkSortType `{GtkSortType`}
	#Sorting is in ascending order.
	new asc `{ return GTK_SORT_ASCENDING; `}

	#Sorting is in descending order.
	new desc `{ return GTK_SORT_DESCENDING; `}
end

#enum GtkBorderStyle
#Describes how the border of a UI element should be rendered.
#@https://developer.gnome.org/gtk3/3.2/gtk3-Standard-Enumerations.html#GtkBorderStyle
extern class GtkBorderStyle `{GtkBorderStyle`}
	#No visible border.
	new none `{ return GTK_BORDER_STYLE_NONE; `}

	#An solid border.
	new solid `{ return GTK_BORDER_STYLE_SOLID; `}

	#An intset border.
	new inset `{ return GTK_BORDER_STYLE_INSET; `}

	#An outset border.
	new outset `{ return GTK_BORDER_STYLE_OUTSET; `}
end

# Icon size enum
extern class GtkIconSize `{GtkIconSize`}
	new invalid `{ return GTK_ICON_SIZE_INVALID; `}
	new menu `{ return GTK_ICON_SIZE_MENU; `}
	new small_toolbar `{ return GTK_ICON_SIZE_SMALL_TOOLBAR; `}
	new large_toolbar `{ return GTK_ICON_SIZE_LARGE_TOOLBAR; `}
	new button `{ return GTK_ICON_SIZE_BUTTON; `}
	new dnd `{ return GTK_ICON_SIZE_DND; `}
	new dialog `{ return GTK_ICON_SIZE_DIALOG;`}
end
