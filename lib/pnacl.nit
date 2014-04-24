# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
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
#
# Targets the PNaCl platform
#
# To use this module and compile for PNaCl, you must install the
# NaCl SDK (This file is based on Pepper 33).
# If NACL_SDK_ROOT is not set in your PATH, you have to work in
# 'nacl_sdk/pepper_your_pepper_version/getting_started/your_project_folder'.
#
# Provides PNaCl support for Nit
module pnacl is platform
`{
	#include <unistd.h>
	#include <stddef.h>
	#include <string.h>
	#include <stdlib.h>
	#include "ppapi/c/pp_errors.h"
	#include "ppapi/c/ppp.h"
	#include "ppapi/c/ppp_instance.h"
	#include "ppapi/c/pp_bool.h"
	#include "ppapi/c/ppb_var.h"
	#include "ppapi/c/ppb_messaging.h"
	#include "ppapi/c/ppp_messaging.h"
	#include "ppapi/c/ppb_var_dictionary.h"
	#include "ppapi/c/ppb_var_array.h"

	extern int nit_main(int, char**);

	const PPB_Messaging* g_varMessagingInterface;
	const PPB_Var* g_varInterface;
	const PPB_VarDictionary* g_varDictionaryInterface;
	const PPB_VarArray* g_varArrayInterface;

	PP_Instance g_instance;
	PnaclApp app;

	/* Posts a string message to JS. */
	void PostMessage(char* message) {
	    /* Create PP_Var containing the message body. */
	    struct PP_Var varString = g_varInterface->VarFromUtf8(message, strlen(message));

	    /* Post message to the JavaScript layer. */
	    g_varMessagingInterface->PostMessage(g_instance, varString);
	}

	/* Posts a Dictionary (JS like object) to JS. */
	void PostDictionary(struct PP_Var dictionary) {
	    g_varMessagingInterface->PostMessage(g_instance, dictionary);
	}

	/* Posts a Variable (aka PepperVar) to JS.
	   Should only be used for testing, conventional conversation is made
	   with Strings or Dictionaries. */
	void PostVar(struct PP_Var v) {
	    g_varMessagingInterface->PostMessage(g_instance, v);
	}

	static PP_Bool Instance_DidCreate(PP_Instance instance, uint32_t argc, const char* argn[], const char* argv[]) {
	    g_instance = instance;
	    nit_main(0, NULL);
	    return PP_TRUE;
	}

	static void Instance_DidDestroy(PP_Instance instance) {
		// TODO
	}

	static void Instance_DidChangeView(PP_Instance pp_instance, PP_Resource view) {
		// TODO
	}

	static void Instance_DidChangeFocus(PP_Instance pp_instance, PP_Bool has_focus) {
		// TODO
	}

	static PP_Bool Instance_HandleDocumentLoad(PP_Instance pp_instance, PP_Resource pp_url_loader) {
	    	// TODO
		return PP_FALSE;
	}

	/* char* to PP_Var. */
	static struct PP_Var CStrToVar(const char* str) {
	  if (g_varInterface != NULL) {
	    return g_varInterface->VarFromUtf8(str, strlen(str));
	  }
	  return PP_MakeUndefined();
	}

	/* Called when JS sends something, is set to accept Strings or Dictionaries,
	   returns an error if received object is not a String or Dictionary. */
	void Messaging_HandleMessage(PP_Instance instance, struct PP_Var varMessage) {
	    if(varMessage.type == PP_VARTYPE_DICTIONARY) {
		PnaclApp_handle_dictionary(app, &varMessage);
	    }
	    else if(varMessage.type == PP_VARTYPE_STRING) {
		uint32_t len;
		char* message = (char*)g_varInterface->VarToUtf8(varMessage, &len);
		PnaclApp_handle_message(app, NativeString_to_s_with_length(message, len));
	    }
	    else {
		struct PP_Var errorMessage = CStrToVar("TypeError : only accepts JS objects or Strings");
		g_varMessagingInterface->PostMessage(g_instance, errorMessage);
	    }
	}

	/* Entry point */
	PP_EXPORT int32_t PPP_InitializeModule(PP_Module module_id, PPB_GetInterface get_browser_interface) {
	    /* Initializing global pointers */
	    g_varMessagingInterface = (const PPB_Messaging*) get_browser_interface(PPB_MESSAGING_INTERFACE);
	    g_varInterface = (const PPB_Var*) get_browser_interface(PPB_VAR_INTERFACE);
	    g_varDictionaryInterface = (const PPB_VarDictionary*) get_browser_interface(PPB_VAR_DICTIONARY_INTERFACE);
	    g_varArrayInterface = (const PPB_VarArray*) get_browser_interface(PPB_VAR_ARRAY_INTERFACE);
	    return PP_OK;
	}

	PP_EXPORT void PPP_ShutdownModule() {
		// TODO
	}

	PP_EXPORT const void* PPP_GetInterface(const char* interface_name) {
	    if (strcmp(interface_name, PPP_INSTANCE_INTERFACE) == 0)
	    {
		static PPP_Instance instance_interface = {
		    &Instance_DidCreate,
		    &Instance_DidDestroy,
		    &Instance_DidChangeView,
		    &Instance_DidChangeFocus,
		    &Instance_HandleDocumentLoad
		};
		return &instance_interface;
	    }
	    else if (strcmp(interface_name, PPP_MESSAGING_INTERFACE) == 0) {
		static PPP_Messaging messaging_interface = {
			&Messaging_HandleMessage
		};
		return &messaging_interface;
	    }
	    return NULL;
	}
`}

# Nit class representing a Pepper C API PP_Var typed as a Dictionary.
extern class PepperDictionary `{ struct PP_Var* `}

	new `{
		struct PP_Var* recv = malloc( sizeof( struct PP_Var ) );
		*recv = g_varDictionaryInterface->Create();
		return recv;
	`}

	# Get fonction using PepperVars.
	#
	# Returns the value that is associated with 'key'.
	# If 'key' is not a String typed PepperVar, or doesn't exist in the Dictionary, an undefined PepperVar is returned.
	fun native_get(key: PepperVar): PepperVar `{
		struct PP_Var* value = malloc( sizeof ( struct PP_Var ) );
		*value = g_varDictionaryInterface->Get(*recv, *key);
		return value;
	`}

	# Returns the value associated with 'key'.
	#
	# 'key' must be a String.
	# If 'key' is not a String or doesn't exist in the Dictionary, 'null' is returned.
	fun [](key: nullable Pepperable): nullable Pepperable
	do
		var native_key = key.to_pepper
		var native_value = native_get(native_key)
		return native_value.to_nit
	end
	
	# Set function using PepperVars. 
	#
	# Sets the value associated with the specified key.
	# 'key' must be a String typed PepperVar.
	# If 'key' hasn't existed in the Dictionary, it is added and associated with 'value'.
	# Otherwise, the previous value is replaced with 'value'.
	# Returns a Boolean indicating whether the operation succeeds.
	fun native_set(key: PepperVar, value: PepperVar): Bool `{
		PP_Bool b;
		b = g_varDictionaryInterface->Set(*recv, *key, *value);
		return b;
	`}

	# Sets the value associated with the specified key.
	#
	# 'key' must be a String.
	# If 'key' hasn't existed in the Dictionary, it is added and associated with 'value'.
	# Otherwise, the previous value is replaced with 'value'.
	# Returns a Boolean indicating whether the operation succeeds.
	fun []=(key: nullable Pepperable, value: nullable Pepperable): Bool
	do
		var native_key = key.to_pepper
		var native_value = value.to_pepper
		return native_set(native_key, native_value)
	end

	# Deletes the specified key and its associated value, if the key exists.
	#
	# Takes a String typed PepperVar.
	fun native_delete(key: PepperVar) `{
		g_varDictionaryInterface->Delete(*recv, *key);
	`}
	
	# Deletes the specified key and its associated value, if the key exists.
	#
	# Takes a String.
	fun delete(key: String) 
	do
		var native_key = key.to_pepper
		native_delete native_key
	end

	# Checks whether a key exists.
	#
	# Takes a String typed PepperVar.
	fun native_has_key(key: PepperVar): Bool `{
		PP_Bool b;
		b = g_varDictionaryInterface->HasKey(*recv, *key);
		return b;
	`}

	# Checks whether a key exists.
        #
	# Takes a String.
	fun has_key(key: String): Bool
	do
		var native_key = key.to_pepper
		return native_has_key(native_key)
	end

	# Gets all the keys in a dictionary.
	#
	# Returns a PepperArray which contains all the keys of the Dictionary. The elements are string vars.
	fun get_keys: PepperArray `{
		struct PP_Var* array = malloc( sizeof( struct PP_Var ) );
		*array = g_varDictionaryInterface->GetKeys(*recv);
		return array;
	`}

	# Use this function to copy a dictionary.
	fun copy: PepperDictionary `{
	        struct PP_Var* varDictionary = malloc( sizeof( struct PP_Var ) );
		*varDictionary = g_varDictionaryInterface->Create();
		*varDictionary = *recv;
		return varDictionary;
	`}
end

# Nit class representing a Pepper C API PP_Var typed as an Array.
extern class PepperArray `{ struct PP_Var* `}

	new `{
		struct PP_Var* recv = malloc( sizeof( struct PP_Var ) );
		*recv = g_varArrayInterface->Create();
		return recv;
	`}

	# Returns the element at the specified position as a PepperVar.
	#
	# If 'index' is larger than or equal to the array length, an undefined PepperVar is returned.
	fun native_get(index: Int): PepperVar `{
		struct PP_Var* value = malloc( sizeof( struct PP_Var ) );
		*value = g_varArrayInterface->Get(*recv, index);
		return value;
	`}

	# Returns the element at the specified position.
	#
	# If 'index' is larger than or equal to the array length, 'null' is returned.
	fun [](index: Int): nullable Pepperable
	do
		var native_value = native_get(index)
		return native_value.to_nit
	end

	# Returns an int containing the length of the PepperArray.
	fun length: Int `{
		int length = g_varArrayInterface->GetLength(*recv);
		return length;
	`}

	# Takes a PepperVar for the 'value' param.
	#
	# Sets the value of an element in the array at indicated index.
	# If 'index' is larger than or equal to the array length, the length is updated to be 'index' + 1.
	# Any position in the array that hasn't been set before is set to undefined, i.e., PepperVar of C type PP_VARTYPE_UNDEFINED.
	# Returns a Boolean indicating whether the operation succeeds.
	fun native_set(index: Int, value: PepperVar): Bool `{
		PP_Bool b;
		b = g_varArrayInterface->Set(*recv, index, *value);
		return b;
	`}

	# Sets the value of an element in the array at indicated index.
	#
	# If 'index' is larger than or equal to the array length, the length is updated to be 'index' + 1.
	# Any position in the array that hasn't been set before is set to undefined, i.e., PepperVar of C type PP_VARTYPE_UNDEFINED.
	# Returns a Boolean indicating whether the operation succeeds.
	fun []=(index: Int, value: nullable Pepperable): Bool
	do
		var native_value = value.to_pepper
		return native_set(index, native_value)
	end

	# Sets the array length.
	#
	# If 'length' is smaller than its current value, the array is truncated to the new length.
	# Any elements that no longer fit are removed and the references to them will be released.
	# If 'length' is larger than its current value, undefined PepperVars are appended to increase the array to the specified length.
	# Returns a Boolean indicating whether the operation succeeds.
	fun length=(length: Int): Bool `{
		PP_Bool b;
		b = g_varArrayInterface->SetLength(*recv, length);
		return b;
	`}
end

# Nit class representing a Pepper C API PP_Var.
extern class PepperVar `{ struct PP_Var* `}

	new `{
		return malloc( sizeof( struct PP_Var ) );
	`}

	# Converts PepperVar to standard types.
	#
	# Actually supports bools, ints, floats, strings. To be used with 'isa'.
	fun to_nit: nullable Pepperable
	do
		if isa_null then return null
		if isa_bool then return as_bool
		if isa_int then return as_int
		if isa_float then return as_float
		if isa_string then return as_string
		if is_undefined then return null

		return null
	end

	private fun isa_null: Bool `{ return recv->type == PP_VARTYPE_NULL; `}
	private fun isa_bool: Bool `{ return recv->type == PP_VARTYPE_BOOL; `}
	private fun isa_int: Bool `{ return recv->type == PP_VARTYPE_INT32; `}
	private fun isa_float: Bool `{ return recv->type == PP_VARTYPE_DOUBLE; `}
	private fun isa_string: Bool `{ return recv->type == PP_VARTYPE_STRING; `}
	private fun is_undefined: Bool `{ return recv->type == PP_VARTYPE_UNDEFINED; `}

	private fun as_bool: Bool `{ return recv->value.as_bool; `}
	private fun as_int: Int `{ return recv->value.as_int; `}
	private fun as_float: Float `{ return recv->value.as_double; `}
	private fun as_string: String import NativeString.to_s_with_length `{
		uint32_t len;
		char* str = (char*)g_varInterface->VarToUtf8(*recv, &len);
		return NativeString_to_s_with_length(str, len);
	`}
end

# Provides a method to convert in PepperVars.
interface Pepperable
	fun to_pepper: PepperVar is abstract
end

redef class Int
	super Pepperable

	# Converts a Int into a PepperVar with Int type.
	redef fun to_pepper `{
		struct PP_Var* var = malloc( sizeof( struct PP_Var ) );
	        *var = PP_MakeInt32(recv);
		return var;
	`}
end

redef class Float
	super Pepperable

	# Converts a Float into a PepperVar with Float type.
	redef fun to_pepper `{
		struct PP_Var* var = malloc( sizeof( struct PP_Var ) );
	        *var = PP_MakeDouble(recv);
		return var;
	`}
end

redef class Bool
	super Pepperable

	# Converts a Bool into a PepperVar with Bool type.
	redef fun to_pepper `{
		struct PP_Var* var = malloc( sizeof( struct PP_Var ) );
	        *var = PP_MakeBool(recv);
		return var;
	`}
end

redef class String
	super Pepperable

	# Converts a String into a PepperVar with String type.
	redef fun to_pepper: PepperVar import String.to_cstring, String.length `{
		char *str = String_to_cstring(recv);
		struct PP_Var* var = malloc( sizeof( struct PP_Var ) );
		*var = g_varInterface->VarFromUtf8(str, String_length(recv));
		return var;
	`}
end

# Class that provides the tools to interact with PNaCl.
class PnaclApp

	# Sets everything up to work, need to be called at first.
	fun initialize import PnaclApp.handle_message, PnaclApp.handle_dictionary, NativeString.to_s_with_length `{
		app = recv;
	`}

	# Posts a message to JS.
	fun post_message(message: String) import String.to_cstring `{
		char* str = String_to_cstring(message);
		PostMessage(str);
	`}

	# Posts a dictionary to JS.
	fun post_dictionary(dictionary: PepperDictionary) `{
		PostDictionary(*dictionary);
	`}

	# Posts a PepperVar to JS.
	#
	# Should be used for testing, not recommanded for conventional conversation.
	private fun post_var(v: PepperVar) `{
		PostVar(*v);
	`}

	# Is called when a message is received from JS.
	#
	# Is set to be redefined in your application to handle like you want.
	fun handle_message(message: String)
	do
		# To be Implemented by user.
	end

	# Is called when a Dictionary is received from JS.
	#
	# Is set to be redefined in your application to handle like you want.
	# The dictionary is freed after this method returns.
	fun handle_dictionary(dictionary: PepperDictionary)
	do
		# To be Implemented by user.
	end
end
