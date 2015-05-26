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

# Provides PNaCl support for Nit.
#
# To use this module and compile for PNaCl, you must install the
# NaCl SDK (This file is based on Pepper 33).
# If NACL_SDK_ROOT is not set in your PATH, you have to work in
# 'nacl_sdk/pepper_your_pepper_version/getting_started/your_project_folder'.
module pnacl is platform

import standard
intrude import standard::stream

in "C Header" `{
	#include "ppapi/c/pp_errors.h"
	#include "ppapi/c/ppp.h"
	#include "ppapi/c/ppp_instance.h"
	#include "ppapi/c/pp_bool.h"
	#include "ppapi/c/ppb_var.h"
	#include "ppapi/c/ppb_messaging.h"
	#include "ppapi/c/ppp_messaging.h"
	#include "ppapi/c/ppb_var_dictionary.h"
	#include "ppapi/c/ppb_var_array.h"
`}

`{
	#include <unistd.h>
	#include <stddef.h>
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <pthread.h>
	#include <poll.h>

	#define MAX_DICTIONARY_QUEUE_SIZE 200
	#define MAX_MESSAGE_QUEUE_SIZE 10

	extern int nit_main(int, char**);

	/* A working thread for Nit. */
	static pthread_t g_nit_thread;

	/* Mutex that guards the queues. */
	static pthread_mutex_t g_dictionary_queue_mutex;
	static pthread_mutex_t g_message_queue_mutex;

	/* Condition variables that are signalled when the queues are not empty. */
	static pthread_cond_t g_dictionary_queue_not_empty_cond;
	static pthread_cond_t g_message_queue_not_empty_cond;

	/** Circular queues of dictionaries and messages from JavaScript to be handled.
	 *
	 * If g_queue_start < g_queue_end:
	 *   all elements in the range [g_queue_start, g_queue_end) are valid.
	 * If g_queue_start > g_queue_end:
	 *   all elements in the ranges [0, g_queue_end) and
	 *   [g_queue_start, MAX_QUEUE_SIZE) are valid.
	 * If g_queue_start == g_queue_end, and g_queue_size > 0:
	 *   all elements in the g_queue are valid.
	 * If g_queue_start == g_queue_end, and g_queue_size == 0:
	 *   No elements are valid. */
	static struct PP_Var g_dictionary_queue[MAX_DICTIONARY_QUEUE_SIZE];
	static char* g_message_queue[MAX_MESSAGE_QUEUE_SIZE];

	/* The index of the head of the queues. */
	static int g_dictionary_queue_start = 0;
	static int g_message_queue_start = 0;

	/* The index of the tail of the queues, non-inclusive. */
	static int g_dictionary_queue_end = 0;
	static int g_message_queue_end = 0;

	/* The size of the queues. */
	static int g_dictionary_queue_size = 0;
	static int g_message_queue_size = 0;

	/* PNaCl interfaces. */
	const PPB_Messaging* g_varMessagingInterface;
	const PPB_Var* g_varInterface;
	const PPB_VarDictionary* g_varDictionaryInterface;
	const PPB_VarArray* g_varArrayInterface;

	PP_Instance g_instance;
	PnaclApp app;

	/* A wrapper to launch the Nit main on a new thread. */
	void* WrapperNitMain(void* arg) {
		nit_main(0, NULL);
		return NULL;
	}

	/** Return whether the queues are empty.
	 *
	 * NOTE: this function assumes g_queue_mutex lock is held.
	 * @return non-zero if the queue is empty. */
	static int IsDictionaryQueueEmpty() { return g_dictionary_queue_size == 0; }
	static int IsMessageQueueEmpty() { return g_message_queue_size == 0; }

	/** Return whether the queues are full.
	 *
	 * NOTE: this function assumes g_queue_mutex lock is held.
	 * @return non-zero if the queue is full. */
	static int IsDictionaryQueueFull() { return g_dictionary_queue_size == MAX_DICTIONARY_QUEUE_SIZE; }
	static int IsMessageQueueFull() { return g_message_queue_size == MAX_MESSAGE_QUEUE_SIZE; }

	/* Initialize the queues. */
	void InitializeQueues() {
	    pthread_mutex_init(&g_dictionary_queue_mutex, NULL);
	    pthread_cond_init(&g_dictionary_queue_not_empty_cond, NULL);
	    pthread_mutex_init(&g_message_queue_mutex, NULL);
	    pthread_cond_init(&g_message_queue_not_empty_cond, NULL);
	}

	/** Enqueue a dictionary (i.e. add to the end)
	 *
	 * If the queue is full, the dictionary will be dropped.
	 *
	 * NOTE: this function assumes g_dictionary_queue_mutex is _NOT_ held.
	 * @param[in] dictionary, the dictionary to enqueue.
	 * @return non-zero if the dictionary was added to the queue. */
	int EnqueueDictionary(struct PP_Var dictionary) {
	    pthread_mutex_lock(&g_dictionary_queue_mutex);

	  /* We shouldn't block the main thread waiting for the queue to not be full,
	   * so just drop the dictionary. */
	    if (IsDictionaryQueueFull()) {
	        pthread_mutex_unlock(&g_dictionary_queue_mutex);
	        return 0;
	    }

	    g_dictionary_queue[g_dictionary_queue_end] = dictionary;
	    g_dictionary_queue_end = (g_dictionary_queue_end + 1) % MAX_DICTIONARY_QUEUE_SIZE;
	    g_dictionary_queue_size++;

	    pthread_cond_signal(&g_dictionary_queue_not_empty_cond);

	    pthread_mutex_unlock(&g_dictionary_queue_mutex);

	    return 1;
	}

	/** Enqueue a message (i.e. add to the end)
	 *
	 * If the queue is full, the message will be dropped.
	 *
	 * NOTE: this function assumes g_message_queue_mutex is _NOT_ held.
	 * @param[in] message The message to enqueue.
	 * @return non-zero if the message was added to the queue. */
	int EnqueueMessage(char* message) {
	    pthread_mutex_lock(&g_message_queue_mutex);

	  /* We shouldn't block the main thread waiting for the queue to not be full,
	   * so just drop the message. */
	    if (IsMessageQueueFull()) {
	        pthread_mutex_unlock(&g_message_queue_mutex);
	        return 0;
	    }

	    g_message_queue[g_message_queue_end] = message;
	    g_message_queue_end = (g_message_queue_end + 1) % MAX_MESSAGE_QUEUE_SIZE;
	    g_message_queue_size++;

	    pthread_cond_signal(&g_message_queue_not_empty_cond);

	    pthread_mutex_unlock(&g_message_queue_mutex);

	    return 1;
	}

	/** Dequeue a dictionary and return it.
	 *
	 * This function blocks until a dictionary is available. It should not be called
	 * on the main thread.
	 *
	 * NOTE: this function assumes g_dictionary_queue_mutex is _NOT_ held.
	 * @return The dictionary at the head of the queue. */
	struct PP_Var DequeueDictionary() {
	    struct PP_Var dictionary = g_varDictionaryInterface->Create();

	    pthread_mutex_lock(&g_dictionary_queue_mutex);

	    while (IsDictionaryQueueEmpty()) {
	        pthread_cond_wait(&g_dictionary_queue_not_empty_cond, &g_dictionary_queue_mutex);
	    }

	    dictionary = g_dictionary_queue[g_dictionary_queue_start];
	    g_dictionary_queue_start = (g_dictionary_queue_start + 1) % MAX_DICTIONARY_QUEUE_SIZE;
	    g_dictionary_queue_size--;

	    pthread_mutex_unlock(&g_dictionary_queue_mutex);

	    return dictionary;
	}

	/** Dequeue a message and return it.
	 *
	 * This function blocks until a message is available. It should not be called
	 * on the main thread.
	 *
	 * NOTE: this function assumes g_queue_mutex is _NOT_ held.
	 * @return The message at the head of the queue. */
	char* DequeueMessage() {
	    char* message = NULL;

	    pthread_mutex_lock(&g_message_queue_mutex);

	    while (IsMessageQueueEmpty()) {
	        pthread_cond_wait(&g_message_queue_not_empty_cond, &g_message_queue_mutex);
	    }

	    message = g_message_queue[g_message_queue_start];
	    g_message_queue_start = (g_message_queue_start + 1) % MAX_MESSAGE_QUEUE_SIZE;
	    g_message_queue_size--;

	    pthread_mutex_unlock(&g_message_queue_mutex);

	    return message;
	}

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

	/* char* to PP_Var. */
	static struct PP_Var CStrToVar(const char* str) {
	    if (g_varInterface != NULL) {
	        return g_varInterface->VarFromUtf8(str, strlen(str));
	    }
	    return PP_MakeUndefined();
	}

	static PP_Bool Instance_DidCreate(PP_Instance instance, uint32_t argc, const char* argn[], const char* argv[]) {
	    g_instance = instance;

	    /* Initialization of the queues and creation of the thread for Nit. */
	    InitializeQueues();
	    pthread_create(&g_nit_thread, NULL, &WrapperNitMain, NULL);

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

	/* Called when JS sends something, is set to accept Strings or Dictionaries,
	   returns an error if received object is not a String or Dictionary. */
	void Messaging_HandleMessage(PP_Instance instance, struct PP_Var varMessage) {
	    if(varMessage.type == PP_VARTYPE_DICTIONARY) {
		if(!EnqueueDictionary(varMessage)) {
			struct PP_Var errorMessage = CStrToVar("QueueFull : dropped dictionary because the queue was full.");
			g_varMessagingInterface->PostMessage(g_instance, errorMessage);
		}
	    }
	    else if(varMessage.type == PP_VARTYPE_STRING) {
		uint32_t len;
		char* message = (char*)g_varInterface->VarToUtf8(varMessage, &len);
		if(!EnqueueMessage(message)) {
		        struct PP_Var errorMessage = CStrToVar("QueueFull : dropped message because the queue was full.");
			g_varMessagingInterface->PostMessage(g_instance, errorMessage);
		}
	    }
	    else {
		struct PP_Var errorMessage = CStrToVar("TypeError : only accepts JS objects or Strings");
		g_varMessagingInterface->PostMessage(g_instance, errorMessage);
	    }
	}

	/* This function is called by Nit when using check_dictionary,
	returns the dictionary at the head of the queue. */
	void* NitHandleDictionary() {
		struct PP_Var dictionary = DequeueDictionary();
		PnaclApp_handle_dictionary(app, &dictionary);
		return 0;
	}

	/* This function is called By Nit when waiting for a user input. */
	char* NitHandleMessage() {
		return DequeueMessage();
	}

	/* Entry point */
	PP_EXPORT int32_t PPP_InitializeModule(PP_Module module_id, PPB_GetInterface get_browser_interface) {
	    /* Initializing global pointers. */
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

	/* Hack in order to avoid the problem with file. */
	int poll(struct pollfd* fds, nfds_t nfds, int timeout) { return 0; }
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

# A stream for PNaCl, redefines basic input and output methods.
class PnaclStream
	super PollableReader
	super Writer
	super BufferedReader

	init do prepare_buffer(10)

	redef var end_reached: Bool = false

	redef fun eof do return end_reached

	# Redefintion of 'write' to send messages to the browser.
	redef fun write(s: Text) do app.post_message s.to_s

	redef fun is_writable: Bool do return true

	# Checks if there is a message in the queue, and if so the message is handled automatically.
	fun check_message: NativeString `{
		return NitHandleMessage();
	`}

	# fill_buffer now checks for a message in the message queue which is filled by user inputs.
	redef fun fill_buffer
	do
		_buffer_pos = 0
		var nns = check_message
		var nslen = nns.cstring_length
		_buffer_length = nslen
		nns.copy_to(buffer, nslen, 0, 0)
	end
end

# For a PNaCl app, Sys uses PnaclStreams.
redef class Sys
	fun pnacl_stdstr: PnaclStream do return once new PnaclStream

	# NaCl input.
	redef fun stdin do return pnacl_stdstr

	# NaCl output.
	redef fun stdout do return pnacl_stdstr

	# NaCl output for errors.
	redef fun stderr do return pnacl_stdstr
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

	# Checks if there is a dictionary in the queue, and if so the dictionary is handled automatically.
	fun check_dictionary `{
		NitHandleDictionary();
	`}

	# Infinite loop on check_dictionary
	fun run
	do
		loop
			check_dictionary
		end
	end
end

# Creates a new thread for Nit.
#
# This function launches the Nit main on a new thread.
# Its purpose is to allow Nit to be still operational after an exit when needed,
# because reloading the page may not be an option.
#
# Should only be used within the 'exit' before stopping the current thread
# when the Nit execution causes a crash.
#
# REQUIRE: g_nit_thread and WrapperNitMain are set.
fun create_thread `{
	pthread_create(&g_nit_thread, NULL, &WrapperNitMain, NULL);
`}

# Calls 'pthread_exit on current thread.
fun exit_thread(exit_value: Int) `{
	pthread_exit((void*) exit_value);
`}

# Redef of exit in order to avoid the module to crash by terminating only the Nit thread.
redef fun exit(exit_value: Int)
do
	var dictionary = new PepperDictionary
	dictionary["exit"] = exit_value
	app.post_dictionary dictionary
	exit_thread exit_value
end

fun app: PnaclApp do return once new PnaclApp
