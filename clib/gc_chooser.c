/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2006-2009 Jean Privat <jean@pryen.org>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "gc_chooser.h"
#include <stdlib.h>
#include <string.h>

#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) ((void)__android_log_print(ANDROID_LOG_WARN, "nit", __VA_ARGS__))

	// FIXME bring back when the GC is fixed in Android
	#undef WITH_LIBGC
#else
	#define PRINT_ERROR(...) ((void)fprintf(stderr, __VA_ARGS__))
#endif

enum gc_option { gc_opt_large, gc_opt_malloc, gc_opt_boehm } gc_option;

#ifdef WITH_LIBGC
#include <gc/gc.h>
#endif

void *nit_raw_alloc(size_t s0)
{
	switch (gc_option) {
	case gc_opt_malloc: return malloc(s0);
#ifdef WITH_LIBGC
	case gc_opt_boehm: return GC_MALLOC_ATOMIC(s0);
#endif

	default: return nit_alloc(s0);
	}
}

static void *large_alloc(size_t s0)
{
	static char * alloc_pos = NULL;
	static size_t alloc_size = 0;
	void * res;
	size_t s = ((s0+3)/4)*4;
	if(alloc_size < s) {
		alloc_size = s + 1024*1024;
		alloc_pos = (char *)calloc(alloc_size, 1);
	}
	res = alloc_pos;
	alloc_size -= s;
	alloc_pos += s;
	return res;
}

void nit_gcollect(void) {
	switch (gc_option) {
#ifdef WITH_LIBGC
	case gc_opt_boehm: GC_gcollect(); break;
#endif
	default: break; /* nothing can be done */
	}
}

void *nit_alloc(size_t s0)
{
	switch (gc_option) {
#ifdef WITH_LIBGC
	case gc_opt_boehm: return GC_MALLOC(s0);
#endif
	case gc_opt_malloc: return calloc(1, s0);
	case gc_opt_large:
	default: return large_alloc(s0);
	}
}

void initialize_gc_option(void) {
	/* GC default */
	char *def;
#ifdef WITH_LIBGC
	gc_option = gc_opt_boehm;
	def = "boehm";
#else
	gc_option = gc_opt_malloc;
	def = "malloc";
#endif

	/* Process GC runtime selection */
	if (getenv("NIT_GC_OPTION") != NULL) {
		char *opt=getenv("NIT_GC_OPTION");
		if (strcmp(opt, "boehm")==0) {
#ifdef WITH_LIBGC
			gc_option = gc_opt_boehm;
#else
		PRINT_ERROR( "Compiled without Boehm GC support. Using default '%s'.\n", def);
#endif
		} else if (strcmp(opt, "malloc")==0) {
			gc_option = gc_opt_malloc;
		} else if (strcmp(opt, "large")==0) {
			gc_option = gc_opt_large;
		} else if (strcmp(opt, "help")==0) {
			PRINT_ERROR( "NIT_GC_OPTION accepts 'malloc', 'large'"
#ifdef WITH_LIBGC
					", 'boehm'"
#endif
					". Default is '%s'.\n", def);
			exit(1);
		} else {
			PRINT_ERROR( "Invalid GC option in NIT_GC_OPTION environment variable. Using default '%s'.\n", def);
		}
	}

	/* Initialize GC (if needed) */
	switch(gc_option) {
#ifdef WITH_LIBGC
		case gc_opt_boehm: GC_INIT(); break;
#endif
		default: break; /* Nothing */
	}
}

void gc_register_finalizer(void* obj) {
#ifdef WITH_LIBGC
	GC_register_finalizer(obj, &gc_finalize, NULL, NULL, NULL);
#endif
}

void __attribute__((weak)) gc_finalize(void *obj, void* client_data) {}
