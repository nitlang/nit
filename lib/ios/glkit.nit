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

# GLKit services to create an OpenGL ES context on iOS
module glkit

#import glesv2
import ios

in "ObjC Header" `{
	#import <GLKit/GLKit.h>

	// Nit controller for games
	@interface GameViewController : GLKViewController

		// Nit object receiving callbacks
		@property void* nit_glk_view;
	@end
`}

in "ObjC" `{

	@implementation GameViewController

		- (void)update
		{
			NitGLKView_update((NitGLKView)self.nit_glk_view);
		}

		- (UIInterfaceOrientationMask)supportedInterfaceOrientations
		{
			long res = NitGLKView_supported_interface_orientations((NitGLKView)self.nit_glk_view);
			if (res == 0) return [super supportedInterfaceOrientations];
			return (UIInterfaceOrientationMask)res;
		}

		- (BOOL)shouldAutorotate
		{
			return NitGLKView_should_autorotate((NitGLKView)self.nit_glk_view);
		}

		- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
		{
			NitGLKView_touches_began((NitGLKView)self.nit_glk_view, touches, event);
		}

		- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event
		{
			NitGLKView_touches_moved((NitGLKView)self.nit_glk_view, touches, event);
		}

		- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
		{
			NitGLKView_touches_ended((NitGLKView)self.nit_glk_view, touches, event);
		}

		- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event
		{
			NitGLKView_touches_cancelled((NitGLKView)self.nit_glk_view, touches, event);
		}

		- (void)viewWillTransitionToSize:(CGSize)size
		  withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator {
			NitGLKView_view_will_transition_to_size((NitGLKView)self.nit_glk_view, size.width, size.height);
		}
	 @end
`}

# Wrapper for both an Objective-C `GLKViewController` and its `GLKView`
private extern class NativeGLKViewController in "ObjC" `{ GLKViewController * `}
	super NSObject

	fun content_scale_factor: Float in "ObjC" `{ return self.view.contentScaleFactor; `}
	fun drawable_width: Int in "ObjC" `{ return ((GLKView*)self.view).drawableWidth; `}
	fun drawable_height: Int in "ObjC" `{ return ((GLKView*)self.view).drawableHeight; `}
	fun bind_drawable in "ObjC" `{ [((GLKView*)self.view) bindDrawable]; `}

	fun multiple_touch_enabled: Bool in "ObjC" `{ return [self.view isMultipleTouchEnabled]; `}
	fun multiple_touch_enabled=(val: Bool) in "ObjC" `{ return [self.view setMultipleTouchEnabled: val]; `}
end

# OpenGL view controller
class NitGLKView
	private var native: NativeGLKViewController = setup(app.app_delegate)

	# Scale factor from logical coordinate space to the device coordinate space
	fun content_scale_factor: Float do return native.content_scale_factor

	# Width of the underlying framebuffer
	fun drawable_width: Int do return native.drawable_width

	# Height of the underlying framebuffer
	fun drawable_height: Int do return native.drawable_height

	# Bind the view framebuffer
	fun bind_drawable do native.bind_drawable

	private fun setup(app_delegate: AppDelegate): NativeGLKViewController
	import touches_began, touches_moved, touches_ended, touches_cancelled,
	update, should_autorotate, supported_interface_orientations,
	view_will_transition_to_size in "ObjC" `{

		app_delegate.window = [[UIWindow alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
		app_delegate.window.backgroundColor = [UIColor whiteColor]; // TODO make configurable

		// Create EAGL context and view
		EAGLContext * context = [[EAGLContext alloc] initWithAPI: kEAGLRenderingAPIOpenGLES2];
		GLKView *view = [[GLKView alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
		view.context = context;

		// Ask for antialiasing
		view.drawableMultisample = GLKViewDrawableMultisample4X;
		view.drawableDepthFormat = GLKViewDrawableDepthFormat24;

		GameViewController *cont = [[GameViewController alloc] init];
		cont.view = view;

		// Setup callbacks
		NitGLKView_incr_ref(self);
		cont.nit_glk_view = self;

		// Make our controller the root
		view.delegate = cont;
		[app_delegate.window setRootViewController: cont];

		// Enable the context
		[app_delegate.window makeKeyAndVisible];
		[EAGLContext setCurrentContext: context];
		[view bindDrawable];

		return cont;
	`}

	# Is multi-touch supported?
	fun multiple_touch_enabled: Bool do return native.multiple_touch_enabled

	# Is multi-touch supported?
	fun multiple_touch_enabled=(val: Bool) do native.multiple_touch_enabled = val

	# Should the view auto rotate to follow the device orientation?
	#
	# Defaults to `true`.
	fun should_autorotate: Bool do return true

	# If `should_autorotate`, what are the supported interface orientations?
	#
	# Redef to return values of Objective-C `UIInterfaceOrientationMask`
	fun supported_interface_orientations: Int do return 0

	# Hook to update the view content, called once per frame
	fun update do end

	# Hook on a new touch event
	fun touches_began(touches: NSSet_UITouch, event: UIEvent) do end

	# Hook when a touch moves
	fun touches_moved(touches: NSSet_UITouch, event: UIEvent) do end

	# Hook on the end of a touch event
	fun touches_ended(touches: NSSet_UITouch, event: UIEvent) do end

	# Hook on a touch event cancellation
	fun touches_cancelled(touches: NSSet_UITouch, event: UIEvent) do end

	# Hook when size of the view is about to change to `width` by `height`
	fun view_will_transition_to_size(width, height: Float) do end
end

# UIKit event
extern class UIEvent in "ObjC" `{ UIEvent * `}
	super NSObject
end

# Objective-C `NSSet` of `UITouch`
extern class NSSet_UITouch in "ObjC" `{ NSSet<UITouch*>* `}
	super NSObject

	# Get any object of this set
	fun any_object: UITouch in "ObjC" `{ return [self anyObject]; `}
end

# UIKit touch event
extern class UITouch in "ObjC" `{ UITouch * `}

	# X coordinate
	fun x: Float in "ObjC" `{ return [self locationInView:self.view].x; `}

	# Y coordinate
	fun y: Float in "ObjC" `{ return [self locationInView:self.view].y; `}

	# Address of this object as an integer for identity detection
	fun to_i: Int in "ObjC" `{ return (long)self; `}
end
