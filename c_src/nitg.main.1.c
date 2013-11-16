#include "nitg.main.0.h"
int glob_argc;
char **glob_argv;
val *glob_sys;
int main(int argc, char** argv) {
val* var /* : Sys */;
glob_argc = argc; glob_argv = argv;
initialize_gc_option();
var = NEW_kernel__Sys(&type_kernel__Sys);
glob_sys = var;
((void (*)(val*))(var->class->vft[COLOR_kernel__Sys__init]))(var) /* init on <var:Sys>*/;
((void (*)(val*))(var->class->vft[COLOR_kernel__Sys__main]))(var) /* main on <var:Sys>*/;
return 0;
}
