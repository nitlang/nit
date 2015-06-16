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

	struct mnit_opengles_Texture *mnit_opengles_load_image(
		const uint_least32_t *pixels, int width, int height,
		int width_pow2, int height_pow2, int has_alpha);
`}

in "C" `{
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

	struct mnit_opengles_Texture *mnit_opengles_load_image(
		const uint_least32_t *pixels, int width, int height,
		int width_pow2, int height_pow2, int has_alpha)
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
		image->src_xi = ((float)width)/width_pow2;
		image->src_yi = ((float)height)/height_pow2;

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			PRINT_ERROR("error loading image after malloc: %i", mnit_opengles_error_code);
		}

		glGenTextures(1, &image->texture);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			PRINT_ERROR("error loading image after glGenTextures: %i", mnit_opengles_error_code);
		}

		glBindTexture(GL_TEXTURE_2D, image->texture);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			PRINT_ERROR("error loading image glBindTexture: %i", mnit_opengles_error_code);
		}

		glTexImage2D(	GL_TEXTURE_2D, 0, format, width_pow2, height_pow2,
						0, format, GL_UNSIGNED_BYTE, (GLvoid*)pixels);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			PRINT_ERROR("error loading image after glTexImage2D: %i", mnit_opengles_error_code);
		}

		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			PRINT_ERROR("error loading image after gtTexParameter: %i", mnit_opengles_error_code);
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
	fun extern_init: Bool import midway_init `{
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
			PRINT_ERROR("Unable to eglGetDisplay");
			return -1;
		}

		if ( eglInitialize(display, 0, 0) == EGL_FALSE) {
			PRINT_ERROR("Unable to eglInitialize");
			return -1;
		}

		if ( eglChooseConfig(display, attribs, &config, 1, &numConfigs) == EGL_FALSE) {
			PRINT_ERROR("Unable to eglChooseConfig");
			return -1;
		}

		if ( numConfigs == 0 ) {
			PRINT_ERROR("No configs available for egl");
			return -1;
		}

		if ( eglGetConfigAttrib(display, config, EGL_NATIVE_VISUAL_ID, &format) == EGL_FALSE) {
			PRINT_ERROR("Unable to eglGetConfigAttrib");
			return -1;
		}

		/* Used by Android to set buffer geometry */
		Opengles1Display_midway_init(self, format);

		surface = eglCreateWindowSurface(display, config, mnit_window, NULL);
		context = eglCreateContext(display, config, NULL, NULL);

		if (eglMakeCurrent(display, surface, surface, context) == EGL_FALSE) {
			PRINT_ERROR("Unable to eglMakeCurrent");
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

		glViewport(0, 0, mnit_width, mnit_height);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrthof(0.0f, w, h, 0.0f, 0.0f, 1.0f);
		glMatrixMode(GL_MODELVIEW);

		glFrontFace( GL_CW );

		return 0;
	`}

	fun close `{
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

	redef fun begin `{
		glClear(GL_COLOR_BUFFER_BIT);
		glLoadIdentity();
	`}

	redef fun width: Int `{
		return mnit_width;
	`}
	redef fun height: Int `{
		return mnit_height;
	`}

	redef fun finish `{
		eglSwapBuffers( mnit_display, mnit_surface );
	`}

	redef fun set_viewport( x, y, w, h ) `{
		glLoadIdentity();
		glViewport(0,0, mnit_width, mnit_height );
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrthof(x, x+w, y+h, y, 0.0f, 1.0f);
		glMatrixMode(GL_MODELVIEW);
		glFrontFace( GL_CW );
	`}

	redef fun blit(image, x, y) do native_blit(image, x.to_f, y.to_f)

	private fun native_blit(image: Opengles1Image, x, y: Float)  `{
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
		   PRINT_ERROR("error drawing: %i", mnit_opengles_error_code);
		}
	`}

    redef fun blit_centered(img, x, y)
    do
		x = x.sub(img.center_x)
		y = y.sub(img.center_y)
		blit(img, x, y)
    end

	redef fun blit_rotated(image, x, y, angle) do native_blit_rotated(image, x.to_f, y.to_f, angle)

	private fun native_blit_rotated(image: Opengles1Image, x, y, angle: Float) `{
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
		   PRINT_ERROR("error drawing: %i", mnit_opengles_error_code);
		}
	`}

	# a = top left, b = bottom left, c = bottom right, d = top right
	redef fun blit_stretched(image, ax, ay, bx, by, cx, cy, dx, dy)
	do
		native_blit_stretched(image,
			ax.to_f, ay.to_f, bx.to_f, by.to_f,
			cx.to_f, cy.to_f, dx.to_f, dy.to_f)
	end

	private fun native_blit_stretched(image: I, ax, ay, bx, by, cx, cy, dx, dy: Float) `{
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
		   PRINT_ERROR("error drawing: %i", mnit_opengles_error_code);
		}
	`}

	redef fun clear( r, g, b: Float ) `{
		glClearColor( r, g, b, 1.0 );
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	`}

	fun clear_alpha( r, g, b, a: Float ) `{
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

    redef fun destroy `{ free( self ); `}

    redef fun width: Int `{ return self->width; `}
    redef fun height: Int `{ return self->height; `}

	fun center_x: Int `{ return self->center_x; `}
	fun center_y: Int `{ return self->center_y; `}

    redef fun scale=( v: Float ) `{
		self->scale = v;
		self->center_x = v*self->width/2;
		self->center_y = v*self->height/2;
    `}
    redef fun scale: Float `{ return self->scale; `}

    redef fun blended=( v: Bool ) `{ self->blended = v; `}
    redef fun blended: Bool `{ return self->blended; `}

    # inherits scale and blend from source
    redef fun subimage( x, y, w, h: Int ): Image import Opengles1Image.as( Image ) `{
		struct mnit_opengles_Texture* image =
			malloc( sizeof( struct mnit_opengles_Texture ) );

		image->texture = self->texture;
		image->width = w;
		image->height = h;
		image->center_x = self->scale*w/2;
		image->center_y = self->scale*h/2;
		image->scale = self->scale;
		image->blended = self->blended;

		float r_dx = self->src_xi - self->src_xo;
		float r_dy = self->src_yi - self->src_yo;
		image->src_xo = self->src_xo + ((float)x)/self->width*r_dx;
		image->src_yo = self->src_yo + ((float)y)/self->height*r_dy;
		image->src_xi = self->src_xo + ((float)x+w)/self->width*r_dx;
		image->src_yi = self->src_yo + ((float)y+h)/self->height*r_dy;

		return Opengles1Image_as_Image( image );
    `}
end
