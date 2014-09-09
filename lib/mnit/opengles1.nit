# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# OpenGL ES1 general support (most of it)
module opengles1 is pkgconfig("glesv1_cm", "egl")

import mnit_display

in "C header" `{
	#include <EGL/egl.h>
	#include <GLES/gl.h>

	EGLDisplay mnit_display;
	EGLSurface mnit_surface;
	EGLContext mnit_context;
	EGLConfig mnit_config;
	int32_t mnit_width;
	int32_t mnit_height;
	float mnit_zoom;

	struct mnit_opengles_Texture {
		GLuint texture;

		/* offsets on source texture */
		float src_xo, src_yo, src_xi, src_yi;

		/* destination width and height */
		int width, height;

		/* may vary depending on scaling */
		int center_x, center_y;

		float scale;
		int blended;
	};

	struct mnit_opengles_DrawableTexture {
		struct mnit_opengles_Texture super;
		GLuint fbo;
		GLuint depth;
		GLuint color;
	};

	GLenum mnit_opengles_error_code;

	struct mnit_opengles_Texture *mnit_opengles_load_image( const uint_least32_t *pixels, int width, int height, int has_alpha );
`}

in "C" `{
	#define LOGW(...) ((void)fprintf(stderr, "# warn: %s (%i)\n", __VA_ARGS__))
	#ifdef DEBUG
		#define LOGI(...) ((void)fprintf(stderr, "# info: %s (%i)\n", __VA_ARGS__))
	#else
		#define LOGI(...) (void)0
	#endif

	extern NativeWindowType mnit_window;
	extern EGLNativeDisplayType mnit_native_display;

	GLfloat mnit_opengles_vertices[6][3] =
	{
		{0.0f, 1.0f, 0.0f},
		{1.0f, 1.0f, 0.0f},
		{0.0f, 0.0f, 0.0f},
		{1.0f, 0.0f, 0.0f},
	};
	GLfloat mnit_opengles_texture[6][2] =
	{
		{0.0f, 0.0f},
		{0.0f, 1.0f},
		{1.0f, 1.0f},
		{0.0f, 0.0f},
		{1.0f, 1.0f},
		{1.0f, 0.0f}
	};

	struct mnit_opengles_Texture *mnit_opengles_load_image( const uint_least32_t *pixels, int width, int height, int has_alpha )
	{
		struct mnit_opengles_Texture *image = malloc(sizeof(struct mnit_opengles_Texture));
		int format = has_alpha? GL_RGBA: GL_RGB;

		image->width = width;
		image->height = height;
		image->center_x = width/2;
		image->center_y = height/2;
		image->scale = 1.0f;
		image->blended = has_alpha;

		image->src_xo = 0;
		image->src_yo = 0;
		image->src_xi = 1.0;
		image->src_yi = 1.0;

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			LOGW("error loading image after malloc", mnit_opengles_error_code);
		}

		glGenTextures(1, &image->texture);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			LOGW("error loading image after glGenTextures", mnit_opengles_error_code);
		}

		glBindTexture(GL_TEXTURE_2D, image->texture);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			LOGW("error loading image glBindTexture", mnit_opengles_error_code);
		}

		glTexImage2D(	GL_TEXTURE_2D, 0, format, width, height,
						0, format, GL_UNSIGNED_BYTE, (GLvoid*)pixels);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			LOGW("error loading image after glTexImage2D", mnit_opengles_error_code);
		}

		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			LOGW("error loading image after gtTexParameter", mnit_opengles_error_code);
		}

		return image;
	}
`}

# OpenGL ES1 display
# Uses 3d hardware optimization
class Opengles1Display
	super Display

	redef type I: Opengles1Image

	init do extern_init
	fun midway_init( format: Int ) do end
	fun extern_init: Bool is extern import midway_init `{
		/* initialize OpenGL ES and EGL */
		const EGLint attribs[] = {
				EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
				EGL_BLUE_SIZE, 8,
				EGL_GREEN_SIZE, 8,
				EGL_RED_SIZE, 8,
				EGL_NONE
		};
		EGLint w, h, dummy, format;
		EGLint numConfigs;
		EGLConfig config;
		EGLSurface surface;
		EGLContext context;

		EGLDisplay display = eglGetDisplay(mnit_native_display);
		if ( display == EGL_NO_DISPLAY) {
			LOGW("Unable to eglGetDisplay", 0);
			return -1;
		}

		if ( eglInitialize(display, 0, 0) == EGL_FALSE) {
			LOGW("Unable to eglInitialize", 0);
			return -1;
		}

		if ( eglChooseConfig(display, attribs, &config, 1, &numConfigs) == EGL_FALSE) {
			LOGW("Unable to eglChooseConfig", 0);
			return -1;
		}

		if ( numConfigs == 0 ) {
			LOGW("No configs available for egl", 0);
			return -1;
		}

		if ( eglGetConfigAttrib(display, config, EGL_NATIVE_VISUAL_ID, &format) == EGL_FALSE) {
			LOGW("Unable to eglGetConfigAttrib", 0);
			return -1;
		}

		/* Used by Android to set buffer geometry */
		Opengles1Display_midway_init(recv, format);

		surface = eglCreateWindowSurface(display, config, mnit_window, NULL);
		context = eglCreateContext(display, config, NULL, NULL);

		if (eglMakeCurrent(display, surface, surface, context) == EGL_FALSE) {
			LOGW("Unable to eglMakeCurrent", 0);
			return -1;
		}

		eglQuerySurface(display, surface, EGL_WIDTH, &w);
		eglQuerySurface(display, surface, EGL_HEIGHT, &h);

		mnit_display = display;
		mnit_context = context;
		mnit_surface = surface;
		mnit_config = config;
		mnit_width = w;
		mnit_height = h;
		mnit_zoom = 1.0f;

		LOGI("surface", (int)surface);
		LOGI("display", (int)display);
		LOGI("width", w);
		LOGI("height", h);

		glViewport(0, 0, mnit_width, mnit_height);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrthof(0.0f, w, h, 0.0f, 0.0f, 1.0f);
		glMatrixMode(GL_MODELVIEW);

		glFrontFace( GL_CW );

		return 0;
	`}

	fun close is extern `{
		if ( mnit_display != EGL_NO_DISPLAY) {
			eglMakeCurrent( mnit_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
			if ( mnit_context != EGL_NO_CONTEXT) {
				eglDestroyContext( mnit_display,  mnit_context );
			}
			if ( mnit_surface != EGL_NO_SURFACE) {
				eglDestroySurface( mnit_display,  mnit_surface );
			}
			eglTerminate( mnit_display);
		}
		 mnit_display = EGL_NO_DISPLAY;
		 mnit_context = EGL_NO_CONTEXT;
		 mnit_surface = EGL_NO_SURFACE;
	`}

	redef fun begin is extern `{
		glClear(GL_COLOR_BUFFER_BIT);
		glLoadIdentity();
	`}

	redef fun width: Int is extern `{
		return mnit_width;
	`}
	redef fun height: Int is extern `{
		return mnit_height;
	`}

	redef fun finish is extern `{
		eglSwapBuffers( mnit_display, mnit_surface );
	`}

	redef fun set_viewport( x, y, w, h ) is extern `{
		glLoadIdentity();
		glViewport(0,0, mnit_width, mnit_height );
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrthof(x, x+w, y+h, y, 0.0f, 1.0f);
		mnit_zoom = ((float)w)/mnit_width;
		glMatrixMode(GL_MODELVIEW);
		glFrontFace( GL_CW );
	`}

	redef fun blit( image, x, y ) is extern  `{
		GLfloat texture_coord[4][2] =
		{
			{image->src_xo, image->src_yi},
			{image->src_xi, image->src_yi},
			{image->src_xo, image->src_yo},
			{image->src_xi, image->src_yo}
		};

		glLoadIdentity();

		glBindTexture(GL_TEXTURE_2D, image->texture);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glTranslatef( x, y, 0.0f );
		glScalef( image->width*image->scale, image->height*image->scale, 1.0f );

		if ( image->blended ) {
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		}

		glEnable(GL_TEXTURE_2D);
		glDisable(GL_DEPTH_TEST);

		glVertexPointer(3, GL_FLOAT, 0, mnit_opengles_vertices);
		glTexCoordPointer(2, GL_FLOAT, 0, texture_coord );

		glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		if ( image->blended ) glDisable(GL_BLEND);
		glDisable(GL_TEXTURE_2D);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
		   LOGW("error drawing", mnit_opengles_error_code);
		}
	`}

    redef fun blit_centered( img, x, y )
    do
		x = x - img.center_x
		y = y - img.center_y
		blit( img, x, y )
    end

	redef fun blit_rotated( image, x, y, angle ) is extern  `{
		GLfloat texture_coord[4][2] =
		{
			{image->src_xo, image->src_yi},
			{image->src_xi, image->src_yi},
			{image->src_xo, image->src_yo},
			{image->src_xi, image->src_yo}
		};

		glLoadIdentity();

		glBindTexture(GL_TEXTURE_2D, image->texture);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glTranslatef( x, y, 0.0f );
		glRotatef( angle*180.0f/3.14156f, 0, 0, 1.0f );
		glTranslatef( image->width*image->scale/-2, image->height*image->scale/-2, 0.0f );
		glScalef( image->width*image->scale, image->height*image->scale, 1.0f );
		if ( image->blended ) {
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		}
		glEnable(GL_TEXTURE_2D);
		glDisable(GL_DEPTH_TEST);

		glVertexPointer(3, GL_FLOAT, 0, mnit_opengles_vertices);
		glTexCoordPointer(2, GL_FLOAT, 0, texture_coord );

		glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		if ( image->blended ) glDisable(GL_BLEND);
		glDisable(GL_TEXTURE_2D);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
		   LOGW("error drawing", mnit_opengles_error_code);
		}
	`}

	# a = top left, b = bottom left, c = bottom right, d = top right
	redef fun blit_stretched( image, ax, ay, bx, by, cx, cy, dx, dy ) is extern  `{
		GLfloat texture_coord[4][2] =
		{
			{image->src_xo, image->src_yi},
			{image->src_xi, image->src_yi},
			{image->src_xo, image->src_yo},
			{image->src_xi, image->src_yo}
		};

		GLfloat mnit_opengles_vertices_stretched[6][3] =
		{
			{bx, by, 0.0f},
			{cx, cy, 0.0f},
			{ax, ay, 0.0f},
			{dx, dy, 0.0f},
		};

		glLoadIdentity();

		glBindTexture(GL_TEXTURE_2D, image->texture);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);

		if ( image->blended ) {
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		}

		glEnable(GL_TEXTURE_2D);
		glDisable(GL_DEPTH_TEST);

		glVertexPointer(3, GL_FLOAT, 0, mnit_opengles_vertices_stretched);
		glTexCoordPointer(2, GL_FLOAT, 0, texture_coord );

		glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		if ( image->blended ) glDisable(GL_BLEND);
		glDisable(GL_TEXTURE_2D);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
		   LOGW("error drawing", mnit_opengles_error_code);
		}
	`}

	redef fun clear( r, g, b: Float ) is extern `{
		glClearColor( r, g, b, 1.0 );
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	`}

	fun clear_alpha( r, g, b, a: Float ) is extern `{
		glClearColor( r, g, b, a );
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	`}

	# Set the current color applied to all drawing
	#
	# require: r, g, b, a in [0.0 .. 1.0]
	fun color(r, g, b, a: Float) `{ glColor4f(r, g, b, a); `}

	# Reset the current color to opaque white
	fun reset_color `{ glColor4f(1.0f, 1.0f, 1.0f, 1.0f); `}
end

extern class Opengles1Image in "C" `{struct mnit_opengles_Texture *`}
	super Image

    redef fun destroy is extern `{ free( recv ); `}

    redef fun width: Int is extern `{ return recv->width; `}
    redef fun height: Int is extern `{ return recv->height; `}

	fun center_x: Int `{ return recv->center_x; `}
	fun center_y: Int `{ return recv->center_y; `}

    redef fun scale=( v: Float ) is extern `{
		recv->scale = v;
		recv->center_x = v*recv->width/2;
		recv->center_y = v*recv->height/2;
    `}
    redef fun scale: Float is extern `{ return recv->scale; `}

    redef fun blended=( v: Bool ) is extern `{ recv->blended = v; `}
    redef fun blended: Bool is extern `{ return recv->blended; `}

    # inherits scale and blend from source
    redef fun subimage( x, y, w, h: Int ): Image is extern import Opengles1Image.as( Image ) `{
		struct mnit_opengles_Texture* image =
			malloc( sizeof( struct mnit_opengles_Texture ) );

		image->texture = recv->texture;
		image->width = w;
		image->height = h;
		image->center_x = recv->scale*w/2;
		image->center_y = recv->scale*h/2;
		image->scale = recv->scale;
		image->blended = recv->blended;

		image->src_xo = ((float)x)/recv->width;
		image->src_yo = ((float)y)/recv->height;
		image->src_xi = ((float)x+w)/recv->width;
		image->src_yi = ((float)y+h)/recv->height;

		return Opengles1Image_as_Image( image );
    `}
end
