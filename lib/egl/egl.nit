# This file is part of NIT ( https://nitlanguage.org ).
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

# Interface between rendering APIs (OpenGL, OpenGL ES, etc.) and the native windowing system.
#
# Most services of this module are a direct wrapper of the underlying
# C library. If a method or class is not documented in Nit, refer to
# the official documentation by the Khronos Group at:
# http://www.khronos.org/registry/egl/sdk/docs/man/xhtml/
module egl is
	pkgconfig
	ldflags("-lEGL")@android
end

import android::aware

in "C Header" `{
	#include <EGL/egl.h>
`}

extern class EGLNativeDisplayType `{ EGLNativeDisplayType `}
	new from_x11(handle: Pointer) `{ return (EGLNativeDisplayType)handle; `}
end

extern class EGLDisplay `{ EGLDisplay `}
	new current `{ return eglGetCurrentDisplay(); `}
	new(handle: Pointer) `{ return eglGetDisplay(handle); `}

	fun is_valid: Bool `{ return self != EGL_NO_DISPLAY; `}

	fun initialize: Bool `{
		return eglInitialize(self, NULL, NULL);
	`}

	fun major_version: Int `{
		EGLint val;
		eglInitialize(self, &val, NULL);
		return val;
	`}
	fun minor_version: Int `{
		EGLint val;
		eglInitialize(self, NULL, &val);
		return val;
	`}

	# TODO if useful
	# Returns all configs supported by the hardware
	#fun get_configs: nullable Array[EGLConfig] import Array[EGLConfig].with_native `{

	# Returns some configs compatible with the specified `attributes`
	fun choose_configs(attribs: Array[Int]): nullable Array[EGLConfig] import Array[Int].length, Array[Int].[], Array[EGLConfig], Array[EGLConfig].add, Array[EGLConfig].as nullable, report_egl_error `{
		EGLConfig *configs;
		int n_configs;
		int n_attribs = Array_of_Int_length(attribs);
		int i;
		int *c_attribs = malloc(sizeof(int)*n_attribs);
		for (i = 0; i < n_attribs; i ++) {
			c_attribs[i] = Array_of_Int__index(attribs, i);
		}

		// get number of configs
		EGLBoolean r = eglChooseConfig(self, c_attribs, NULL, 0, &n_configs);

		if (r == EGL_FALSE) {
			EGLDisplay_report_egl_error(self, "failed to get number of available configs.");
			return null_Array_of_EGLConfig();
		} else if (n_configs == 0) {
			EGLDisplay_report_egl_error(self, "no config available.");
			return null_Array_of_EGLConfig();
		}

		configs = (EGLConfig*)malloc(sizeof(EGLConfig)*n_configs);

		r = eglChooseConfig(self, c_attribs, configs, n_configs, &n_configs);

		if (r == EGL_FALSE) {
			EGLDisplay_report_egl_error(self, "failed to load config.");
			return null_Array_of_EGLConfig();
		} else {
			Array_of_EGLConfig array = new_Array_of_EGLConfig();
			for (i=0; i < n_configs; i++)
				Array_of_EGLConfig_add(array, configs[i]);

			return Array_of_EGLConfig_as_nullable(array);
		}
	`}

	private fun report_egl_error(cmsg: CString)
	do
		var msg = cmsg.to_s
		print "libEGL error: {msg}"
	end

	# Can be used directly, but it is preferable to use a `EGLConfigAttribs`
	fun config_attrib(config: EGLConfig, attribute: Int): Int `{
		EGLint val;
		EGLBoolean r = eglGetConfigAttrib(self, config, attribute, &val);
		if (r == EGL_FALSE)
			return -1;
		else
			return val;
	`}

	fun terminate: Bool `{
		return eglTerminate(self) == EGL_TRUE;
	`}

	fun create_window_surface(config: EGLConfig, native_window: Pointer, attribs: Array[Int]): EGLSurface `{
		EGLSurface surface = eglCreateWindowSurface(self, config, (EGLNativeWindowType)native_window, NULL);
		return surface;
	`}

	# TODO add share_context
	fun create_context(config: EGLConfig): EGLContext `{
		EGLint context_attribs[] = {EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE, EGL_NONE}; // TODO move out!
		EGLContext context = eglCreateContext(self, config, EGL_NO_CONTEXT, context_attribs);
		return context;
	`}

	fun make_current(draw, read: EGLSurface, context: EGLContext): Bool `{
		return eglMakeCurrent(self, draw, read, context);
	`}

	# Can be used directly, but it is preferable to use a `EGLSurfaceAttribs`
	fun query_surface(surface: EGLSurface, attribute: Int): Int `{
		int val;
		EGLBoolean r = eglQuerySurface(self, surface, attribute, &val);
		if (r == EGL_FALSE)
			return -1;
		else
			return val;
	`}

	fun destroy_context(context: EGLContext): Bool `{
		return eglDestroyContext(self, context);
	`}

	fun destroy_surface(surface: EGLSurface): Bool `{
		return eglDestroySurface(self, surface);
	`}

	fun error: EGLError `{ return eglGetError(); `}

	# Utility method for easier debugging
	fun assert_no_egl_error
	do
		var error = self.error
		if not error.is_success then
			print "EGL error: {error}"
			abort
		end
	end

	private fun query_string(name: Int): String import CString.to_s `{
		return CString_to_s((char *)eglQueryString(self, name));
	`}

	fun vendor: String do return query_string(0x3053)

	fun version: String do return query_string(0x3054)

	fun extensions: Array[String] do return query_string(0x3055).trim.split_with(" ")

	fun client_apis: Array[String] do return query_string(0x308D).split_with(" ")

	fun swap_buffers(surface: EGLSurface) `{ eglSwapBuffers(self, surface); `}
end

extern class EGLConfig `{ EGLConfig `}
	fun attribs(display: EGLDisplay): EGLConfigAttribs do
		return new EGLConfigAttribs(display, self)
	end
end

extern class EGLSurface `{ EGLSurface `}
	new current_draw `{ return eglGetCurrentSurface(EGL_DRAW); `}
	new current_read `{ return eglGetCurrentSurface(EGL_READ); `}
	new none `{ return EGL_NO_SURFACE; `}

	fun is_ok: Bool `{ return self != EGL_NO_SURFACE; `}

	fun attribs(display: EGLDisplay): EGLSurfaceAttribs do
		return new EGLSurfaceAttribs(display, self)
	end
end

extern class EGLContext `{ EGLContext `}
	new current `{ return eglGetCurrentContext(); `}
	new none `{ return EGL_NO_CONTEXT; `}

	fun is_ok: Bool `{ return self != EGL_NO_CONTEXT; `}
end

# Attributes of a config for a given EGL display
class EGLConfigAttribs
	var display: EGLDisplay
	var config: EGLConfig

	fun buffer_size: Int do return display.config_attrib(config, 0x3020)
	fun alpha_size: Int do return display.config_attrib(config, 0x3021)
	fun blue_size: Int do return display.config_attrib(config, 0x3022)
	fun green_size: Int do return display.config_attrib(config, 0x3023)
	fun red_size: Int do return display.config_attrib(config, 0x3024)
	fun depth_size: Int do return display.config_attrib(config, 0x3025)
	fun stencil_size: Int do return display.config_attrib(config, 0x3026)
	fun samples: Int do return display.config_attrib(config, 0x3031)
	fun sample_buffers: Int do return display.config_attrib(config, 0x3032)

	fun native_visual_id: Int do return display.config_attrib(config, 0x302E)
	fun native_visual_type: Int do return display.config_attrib(config, 0x302F)

	fun caveat: EGLConfigCaveat do
		return new EGLConfigCaveat.from_i(display.config_attrib(config, 0x3027))
	end

	fun conformant: EGLConformant do
		return new EGLConformant.from_i(display.config_attrib(config, 0x3042))
	end
end

extern class EGLConfigCaveat `{ EGLint `}
	new from_i(val: Int) `{ return (EGLint)val; `}
	fun to_i: Int `{ return self; `}

	new none `{ return EGL_NONE; `}
	fun is_none: Bool `{ return self == EGL_NONE; `}

	new dont_care `{ return EGL_DONT_CARE; `}
	fun is_dont_care: Bool `{ return self == EGL_DONT_CARE; `}

	new slow `{ return EGL_SLOW_CONFIG; `}
	fun is_slow: Bool `{ return self == EGL_SLOW_CONFIG; `}

	# Obselete since EGL 1.3, use EGL_CONFORMANT instead
	new non_conformant `{ return EGL_NON_CONFORMANT_CONFIG; `}
	fun is_non_conformant: Bool `{ return self == EGL_NON_CONFORMANT_CONFIG; `}

	redef fun to_s
	do
		if is_none then return "EGL_NONE"
		if is_dont_care then return "EGL_DONT_CARE"
		if is_slow then return "EGL_SLOW_CONFIG"
		if is_non_conformant then return "EGL_NON_CONFORMANT"
		return "Unknown or invalid value"
	end
end

extern class EGLConformant `{ EGLint `}
	new `{ return (EGLint)0; `}
	new from_i(val: Int) `{ return (EGLint)val; `}
	fun to_i: Int `{ return self; `}

	fun opengl: Bool `{ return self & EGL_OPENGL_BIT; `}
	fun with_opengl: EGLConformant `{ return self | EGL_OPENGL_BIT; `}

	fun opengl_es: Bool `{ return self & EGL_OPENGL_ES_BIT; `}
	fun with_opengl_es: EGLConformant `{ return self | EGL_OPENGL_ES_BIT; `}

	fun opengl_es2: Bool `{ return self & EGL_OPENGL_ES2_BIT; `}
	fun with_opengl_es2: EGLConformant `{ return self | EGL_OPENGL_ES2_BIT; `}

	fun openvg: Bool `{ return self & EGL_OPENVG_BIT; `}
	fun with_openvg: EGLConformant `{ return self | EGL_OPENVG_BIT; `}

	fun to_a: Array[String]
	do
		var features = new Array[String]
		if opengl then features.add("OpenGL")
		if opengl_es then features.add("OpenGL ES")
		if opengl_es2 then features.add("OpenGL ES2")
		if openvg then features.add("OpenVG")
		return features
	end

	redef fun to_s do return to_a.join(", ")
end

# Attributes of a surface for a given EGL display
class EGLSurfaceAttribs
	var display: EGLDisplay
	var surface: EGLSurface

	fun height: Int do return display.query_surface(surface, 0x3056)
	fun width: Int do return display.query_surface(surface, 0x3057)
	fun largest_pbuffer: Int do return display.query_surface(surface, 0x3058)
	fun texture_format: Int do return display.query_surface(surface, 0x3080)
	fun texture_target: Int do return display.query_surface(surface, 0x3081)
	fun mipmap_texture: Int do return display.query_surface(surface, 0x3082)
	fun mipmap_level: Int do return display.query_surface(surface, 0x3083)
	fun render_buffer: Int do return display.query_surface(surface, 0x3086)
	fun vg_colorspace: Int do return display.query_surface(surface, 0x3087)
	fun vg_alpha_format: Int do return display.query_surface(surface, 0x3088)
	fun horizontal_resolution: Int do return display.query_surface(surface, 0x3090)
	fun vertical_resolution: Int do return display.query_surface(surface, 0x3091)
	fun pixel_aspect_ratio: Int do return display.query_surface(surface, 0x3092)
	fun swap_behavior: Int do return display.query_surface(surface, 0x3093)
	fun multisample_resolve: Int do return display.query_surface(surface, 0x3099)
end

extern class EGLError `{ EGLint `}
	fun is_success: Bool `{ return self == EGL_SUCCESS; `}

	fun is_not_initialized: Bool `{ return self == EGL_NOT_INITIALIZED; `}
	fun is_bad_access: Bool `{ return self == EGL_BAD_ACCESS; `}
	fun is_bad_alloc: Bool `{ return self == EGL_BAD_ALLOC; `}
	fun is_bad_attribute: Bool `{ return self == EGL_BAD_ATTRIBUTE; `}
	fun is_bad_config: Bool `{ return self == EGL_BAD_CONFIG; `}
	fun is_bad_context: Bool `{ return self == EGL_BAD_CONTEXT; `}
	fun is_bad_current_surface: Bool `{ return self == EGL_BAD_CURRENT_SURFACE; `}
	fun is_bad_display: Bool `{ return self == EGL_BAD_DISPLAY; `}
	fun is_bad_match: Bool `{ return self == EGL_BAD_MATCH; `}
	fun is_bad_native_pixmap: Bool `{ return self == EGL_BAD_NATIVE_PIXMAP; `}
	fun is_bad_native_window: Bool `{ return self == EGL_BAD_NATIVE_WINDOW; `}
	fun is_bad_parameter: Bool `{ return self == EGL_BAD_PARAMETER; `}
	fun is_bad_surface: Bool `{ return self == EGL_BAD_SURFACE; `}
	fun is_context_lost: Bool `{ return self == EGL_CONTEXT_LOST; `}

	redef fun to_s
	do
		if is_not_initialized then return "Not initialized"
		if is_bad_access then return "Bad access"
		if is_bad_alloc then return "Bad allocation"
		if is_bad_attribute then return "Bad attribute"
		if is_bad_config then return "Bad configuration"
		if is_bad_context then return "Bad context"
		if is_bad_current_surface then return "Bad current surface"
		if is_bad_display then return "Bad display"
		if is_bad_match then return "Bad match"
		if is_bad_native_pixmap then return "Bad native pixmap"
		if is_bad_native_window then return "Bad native window"
		if is_bad_parameter then return "Bad parameter"
		if is_bad_surface then return "Bad surface"
		if is_context_lost then return "Context lost"
		return "Unknown error" # this is not good
	end
end

extern class EGLContextAttribute `{ EGLint `}
	new buffer_size `{ return EGL_BUFFER_SIZE; `}
	new alpha_size `{ return EGL_ALPHA_SIZE; `}
	new blue_size `{ return EGL_BLUE_SIZE; `}
	new green_size `{ return EGL_GREEN_SIZE; `}
	new red_size `{ return EGL_RED_SIZE; `}
	new depth_size `{ return EGL_DEPTH_SIZE; `}
	new stencil_size `{ return EGL_STENCIL_SIZE; `}
	new config_caveat `{ return EGL_CONFIG_CAVEAT; `}
	new config_id `{ return EGL_CONFIG_ID; `}
	new level `{ return EGL_LEVEL; `}
	new max_pbuffer_height `{ return EGL_MAX_PBUFFER_HEIGHT; `}
	new max_pbuffer_pixels `{ return EGL_MAX_PBUFFER_PIXELS; `}
	new max_pbuffer_width `{ return EGL_MAX_PBUFFER_WIDTH; `}
	new native_renderable `{ return EGL_NATIVE_RENDERABLE; `}
	new native_visual_id `{ return EGL_NATIVE_VISUAL_ID; `}
	new native_visual_type `{ return EGL_NATIVE_VISUAL_TYPE; `}
	new samples `{ return EGL_SAMPLES; `}
	new sample_buffers `{ return EGL_SAMPLE_BUFFERS; `}
	new surface_type `{ return EGL_SURFACE_TYPE; `}
	new transparent_type `{ return EGL_TRANSPARENT_TYPE; `}
	new transparent_blue_value `{ return EGL_TRANSPARENT_BLUE_VALUE; `}
	new transparent_green_value `{ return EGL_TRANSPARENT_GREEN_VALUE; `}
	new transparent_red_value `{ return EGL_TRANSPARENT_RED_VALUE; `}
	new bind_to_texture_rgb `{ return EGL_BIND_TO_TEXTURE_RGB; `}
	new bind_to_texture_rgba `{ return EGL_BIND_TO_TEXTURE_RGBA; `}
	new min_swap_interval `{ return EGL_MIN_SWAP_INTERVAL; `}
	new max_swap_interval `{ return EGL_MAX_SWAP_INTERVAL; `}
	new limunance_size `{ return EGL_LUMINANCE_SIZE; `}
	new alpha_mask_size `{ return EGL_ALPHA_MASK_SIZE; `}
	new color_buffer_type `{ return EGL_COLOR_BUFFER_TYPE; `}
	new renderable_type `{ return EGL_RENDERABLE_TYPE; `}
	new match_native_pixmap `{ return EGL_MATCH_NATIVE_PIXMAP; `}
	new conformant `{ return EGL_CONFORMANT; `}

	# Attrib list terminator
	new none `{ return EGL_NONE; `}
end

# Utility class to choose an EGLConfig
class EGLConfigChooser
	var array = new Array[Int]
	var closed = false
	protected var inserted_attribs = new Array[Int]

	protected fun insert_attrib_key(key: Int)
	do
		assert not inserted_attribs.has(key) else
			print "Duplicate attrib passed to EGLConfigChooser"
		end
		array.add key
	end

	protected fun insert_attrib_with_val(key, val: Int)
	do
		insert_attrib_key key
		array.add val
	end

	fun close do
		insert_attrib_key 0x3038
		closed = true
	end

	fun surface_type=(flag: Int) do insert_attrib_with_val(0x3033, flag)
	fun surface_type_egl do surface_type = 4

	# Set which client rendering APIs are supported
	fun renderable_type=(flag: Int) do insert_attrib_with_val(0x3040, flag)

	# Set EGL as the only supported rendering API
	fun renderable_type_egl do renderable_type = 4

	fun blue_size=(size: Int) do insert_attrib_with_val(0x3022, size)
	fun green_size=(size: Int) do insert_attrib_with_val(0x3023, size)
	fun red_size=(size: Int) do insert_attrib_with_val(0x3024, size)

	fun buffer_size=(size: Int) do insert_attrib_with_val(0x3020, size)
	fun alpha_size=(size: Int) do insert_attrib_with_val(0x3021, size)
	fun depth_size=(size: Int) do insert_attrib_with_val(0x3025, size)
	fun stencil_size=(size: Int) do insert_attrib_with_val(0x3026, size)
	fun samples=(count: Int) do insert_attrib_with_val(0x3031, count)
	fun sample_buffers=(size: Int) do insert_attrib_with_val(0x3032, size)

	fun caveat=(caveat: EGLConfigCaveat) do insert_attrib_with_val(0x3050, caveat.to_i)

	fun conformant=(conformant: EGLConformant) do insert_attrib_with_val(0x3042, conformant.to_i)

	fun choose(display: EGLDisplay): nullable Array[EGLConfig]
	do
		assert closed else print "EGLConfigChooser not closed."
		return display.choose_configs(array)
	end
end

fun egl_bind_opengl_api: Bool `{ return eglBindAPI(EGL_OPENGL_API); `}
fun egl_bind_opengl_es_api: Bool `{ return eglBindAPI(EGL_OPENGL_ES_API); `}
fun egl_bind_openvg_api: Bool `{ return eglBindAPI(EGL_OPENVG_API); `}

# Handle to the default display to use with EGL
fun egl_default_display: Pointer `{ return EGL_DEFAULT_DISPLAY; `}
