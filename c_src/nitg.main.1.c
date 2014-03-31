#include "nitg.main.0.h"
#include <signal.h>
#define UNW_LOCAL_ONLY
#include <libunwind.h>
int glob_argc;
char **glob_argv;
val *glob_sys;
void show_backtrace (int signo) {
char* opt = getenv("NIT_NO_STACK");
unw_cursor_t cursor;
if(opt==NULL){
unw_context_t uc;
unw_word_t ip;
char* procname = malloc(sizeof(char) * 100);
unw_getcontext(&uc);
unw_init_local(&cursor, &uc);
printf("-------------------------------------------------\n");
printf("--   Stack Trace   ------------------------------\n");
printf("-------------------------------------------------\n");
while (unw_step(&cursor) > 0) {
	unw_get_proc_name(&cursor, procname, 100, &ip);
	printf("` %s \n",procname);
}
printf("-------------------------------------------------\n");
free(procname);
}
exit(signo);
}
int main(int argc, char** argv) {
val* var /* : Sys */;
signal(SIGABRT, show_backtrace);
signal(SIGFPE, show_backtrace);
signal(SIGILL, show_backtrace);
signal(SIGINT, show_backtrace);
signal(SIGTERM, show_backtrace);
signal(SIGSEGV, show_backtrace);
glob_argc = argc; glob_argv = argv;
initialize_gc_option();
var = NEW_kernel__Sys(&type_kernel__Sys);
glob_sys = var;
((void (*)(val*))(var->class->vft[COLOR_kernel__Sys__init]))(var) /* init on <var:Sys>*/;
((void (*)(val*))(var->class->vft[COLOR_kernel__Sys__main]))(var) /* main on <var:Sys>*/;
return 0;
}
