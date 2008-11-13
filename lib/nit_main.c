#include "nit_common.h"
#include <signal.h>
#include <stdarg.h>

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
	signal(SIGINT,exithandler);
	signal(SIGABRT,exithandler);
	signal(SIGSEGV,exithandler);
	signal(SIGILL, exithandler);
	signal(SIGFPE, exithandler);
	signal(SIGTERM,exithandler);
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
