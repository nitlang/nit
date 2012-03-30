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

#include "nit_common.h"
#include <signal.h>
#include <stdarg.h>
#include "gc.h"

bigint object_id_counter = 1000000;
enum gc_option { large, gc_opt_malloc, boehm, nitgc } gc_option;

#ifdef WITH_LIBGC
#define GC_DEBUG
#include <gc/gc.h>
#endif

void *raw_alloc(size_t s0)
{
	switch (gc_option) {
	case nitgc: return malloc(s0);
	case gc_opt_malloc: return malloc(s0);
	default: return alloc(s0);
	}
}

void register_static_object(val_t *o)
{
	switch (gc_option) {
	case nitgc: GC_add_static_object(o); break;
	default: break;
	}
	return;
}

void *large_alloc(size_t s0)
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

void * alloc(size_t s0)
{
	switch (gc_option) {
#ifdef WITH_LIBGC
	case boehm: return GC_MALLOC(s0);
#endif
	case nitgc: return Nit_gc_malloc(s0);
	case gc_opt_malloc: return calloc(1, s0);
	case large:
	default: return large_alloc(s0);
	}
}

int glob_argc;
char **glob_argv;
val_t G_sys;

void exithandler(int s) {
	fprintf(stderr, "Recieved signal %d\n", s);
	nit_exit(1);
}
void initialize_gc_option(void) {
	/* GC default */
	char *def;
#ifdef WITH_LIBGC
	gc_option = boehm;
	def = "boehm";
#else
	gc_option = nitgc;
	def = "nitgc";
#endif

	/* Process GC runtime selection */
	if (getenv("NIT_GC_OPTION") != NULL) {
		char *opt=getenv("NIT_GC_OPTION");
		if (strcmp(opt, "boehm")==0) {
#ifdef WITH_LIBGC
			gc_option = boehm;
#else
		fprintf(stderr, "Compiled without Boehm GC support. Using default '%s'.\n", def);
#endif
		} else if (strcmp(opt, "nitgc")==0) {
			gc_option = nitgc;
		} else if (strcmp(opt, "malloc")==0) {
			gc_option = gc_opt_malloc;
		} else if (strcmp(opt, "large")==0) {
			gc_option = large;
		} else if (strcmp(opt, "help")==0) {
			fprintf(stderr, "NIT_GC_OPTION accepts 'nitgc'"
#ifdef WITH_LIBGC
					", 'boehm'"
#endif
					", 'large', 'malloc'. Default is '%s'.\n", def);
			exit(1);
		} else {
			fprintf(stderr, "Invalid GC option in NIT_GC_OPTION environment variable. Using default '%s'.\n", def);
		}
	}

	/* Initialize GC (if needed) */
	switch(gc_option) {
#ifdef WITH_LIBGC
		case boehm: GC_INIT(); break;
#endif
		case nitgc: Nit_gc_init(); break;
		default: break; /* Nothing */
	}
}
void prepare_signals(void) {
	initialize_gc_option();

	signal(SIGINT,exithandler);
	signal(SIGABRT,exithandler);
	signal(SIGSEGV,exithandler);
	signal(SIGILL, exithandler);
	signal(SIGFPE, exithandler);
	signal(SIGTERM,exithandler);
	signal(SIGBUS, exithandler);
}
struct stack_frame_t *stack_frame_head = NULL;
void nit_exit(int i) {
	char *opt=getenv("NIT_NO_STACK");
	if (opt == NULL || strcmp(opt, "0")==0) {
		fprintf(stderr, ",---- Stack trace -- - -  -\n");
		while(stack_frame_head != NULL) {
			fprintf(stderr, "| %s (%s:%d)\n", stack_frame_head->meth, stack_frame_head->file, stack_frame_head->line);
			if (stack_frame_head == stack_frame_head->prev) break;
			stack_frame_head = stack_frame_head->prev;
		}
		fprintf(stderr, "`------------------- - -  -\n");
	}
	exit(i);
}

void nit_abort(const char* s, const char* msg, const char* loc, int line) {
	fprintf(stderr, s, msg);
	fprintf(stderr, " (%s", loc);
	if (line != 0) fprintf(stderr, ":%d", line);
	fprintf(stderr, ")\n");
	nit_exit(1);
}

/* Register reference to Nit object with the latest extern method called. */
void nitni_local_ref_add( struct nitni_ref *ref ) {
	struct nitni_ref_array_link **link_p;
	struct nitni_ref_array_link * link = NULL;

	/* find usable link or link to create */
	link_p = &( stack_frame_head->nitni_local_ref_head );
	while ( (*link_p) != NULL &&
			(*link_p)->count >= NITNI_REF_ARRAY_LINK_SIZE ) {
		link_p = &((*link_p)->next);
	}

	/* create link if needed */
	if ( *link_p == NULL ) {
		link = malloc( sizeof(struct nitni_ref_array_link) );
		link->count = 0;
		link->next = NULL;

		(*link_p) = link;
	} else {
		link = *link_p;
	}

	/* add to link */
	link->reg[ link->count ] = ref;
	link->count ++;
}

/* Clean all references associated to the current (but returning) extern method. */
void nitni_local_ref_clean( void ) {
	struct nitni_ref_array_link * link,
		* last_link;
	int i;

	link = stack_frame_head->nitni_local_ref_head;
	while ( link != NULL )
	{
		for ( i = 0; i < link->count; i ++ ) {
			free( link->reg[ i ] );
		}

		last_link = link;
		if ( link->count == NITNI_REF_ARRAY_LINK_SIZE )
			link = link->next;
		else
			link = NULL;

		free(last_link);
	}

	stack_frame_head->nitni_local_ref_head = NULL;
}
