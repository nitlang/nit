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

#ifdef WITH_LIBGC
#define GC_DEBUG
#include <gc/gc.h>
int nolibgc = 0;
void *simple_alloc(size_t s0);
void *alloc(size_t s0)
{
	if (!nolibgc) { return GC_MALLOC(s0); }
	else return simple_alloc(s0);
}
#define alloc simple_alloc
#endif

void * alloc(size_t s0)
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

int glob_argc;
char **glob_argv;
val_t G_sys;

void exithandler(int s) {
	fprintf(stderr, "Recieved signal %d\n", s);
	nit_exit(1);
}
void prepare_signals(void) {
#if WITH_LIBGC
	nolibgc = (getenv("NIT_NOLIBGC") != NULL);
	if (!nolibgc) {
		GC_INIT();
	}
#endif
	signal(SIGINT,exithandler);
	signal(SIGABRT,exithandler);
	signal(SIGSEGV,exithandler);
	signal(SIGILL, exithandler);
	signal(SIGFPE, exithandler);
	signal(SIGTERM,exithandler);
	signal(SIGBUS, exithandler);
}
struct trace_t *tracehead = NULL;
void nit_exit(int i) {
	fprintf(stderr, ",---- Stack trace -- - -  -\n");
	while(tracehead != NULL) {
		fprintf(stderr, "| %s (%s:%d)\n", tracehead->meth, tracehead->file, tracehead->line);
		if (tracehead == tracehead->prev) break;
		tracehead = tracehead->prev;
	}
	fprintf(stderr, "`------------------- - -  -\n");
	exit(i);
}
