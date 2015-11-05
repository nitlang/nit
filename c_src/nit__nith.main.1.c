#include "nit__nith.main.0.h"
struct nitni_global_ref_list_t *nitni_global_ref_list;
void initialize_nitni_global_refs() {
	nitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));
	nitni_global_ref_list->head = NULL;
	nitni_global_ref_list->tail = NULL;
}

void nitni_global_ref_add( struct nitni_ref *ref ) {
	if ( nitni_global_ref_list->head == NULL ) {
		nitni_global_ref_list->head = ref;
		ref->prev = NULL;
	} else {
		nitni_global_ref_list->tail->next = ref;
		ref->prev = nitni_global_ref_list->tail;
	}
	nitni_global_ref_list->tail = ref;

	ref->next = NULL;
}

void nitni_global_ref_remove( struct nitni_ref *ref ) {
	if ( ref->prev == NULL ) {
		nitni_global_ref_list->head = ref->next;
	} else {
		ref->prev->next = ref->next;
	}

	if ( ref->next == NULL ) {
		nitni_global_ref_list->tail = ref->prev;
	} else {
		ref->next->prev = ref->prev;
	}
}

extern void nitni_global_ref_incr( struct nitni_ref *ref ) {
	if ( ref->count == 0 ) /* not registered */
	{
		/* add to list */
		nitni_global_ref_add( ref );
	}

	ref->count ++;
}

extern void nitni_global_ref_decr( struct nitni_ref *ref ) {
	if ( ref->count == 1 ) /* was last reference */
	{
		/* remove from list */
		nitni_global_ref_remove( ref );
	}

	ref->count --;
}

#include <signal.h>
#ifndef NO_STACKTRACE
#define UNW_LOCAL_ONLY
#include <libunwind.h>
#include "c_functions_hash.h"
#endif
int glob_argc;
char **glob_argv;
val *glob_sys;
static void show_backtrace(void) {
#ifndef NO_STACKTRACE
char* opt = getenv("NIT_NO_STACK");
unw_cursor_t cursor;
if(opt==NULL){
unw_context_t uc;
unw_word_t ip;
char* procname = malloc(sizeof(char) * 100);
unw_getcontext(&uc);
unw_init_local(&cursor, &uc);
PRINT_ERROR("-------------------------------------------------\n");
PRINT_ERROR("--   Stack Trace   ------------------------------\n");
PRINT_ERROR("-------------------------------------------------\n");
while (unw_step(&cursor) > 0) {
	unw_get_proc_name(&cursor, procname, 100, &ip);
	const char* recv = get_nit_name(procname, strlen(procname));
	if (recv != NULL){
		PRINT_ERROR("` %s\n", recv);
	}else{
		PRINT_ERROR("` %s\n", procname);
	}
}
PRINT_ERROR("-------------------------------------------------\n");
free(procname);
}
#endif /* NO_STACKTRACE */
}
void sig_handler(int signo){
PRINT_ERROR("Caught signal : %s\n", strsignal(signo));
show_backtrace();
signal(signo, SIG_DFL);
kill(getpid(), signo);
}
void fatal_exit(int status) {
show_backtrace();
exit(status);
}
int main(int argc, char** argv) {
val* var /* : Sys */;
signal(SIGABRT, sig_handler);
signal(SIGFPE, sig_handler);
signal(SIGILL, sig_handler);
signal(SIGINT, sig_handler);
signal(SIGTERM, sig_handler);
signal(SIGSEGV, sig_handler);
signal(SIGPIPE, sig_handler);
glob_argc = argc; glob_argv = argv;
initialize_gc_option();
initialize_nitni_global_refs();
var = NEW_standard__Sys(&type_standard__Sys);
glob_sys = var;
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Sys>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Sys__run]))(var); /* run on <var:Sys>*/
}
return 0;
}
const char FILE_nit__nith[] = "nith.nit";
const char FILE_nit__modelize[] = "modelize/modelize.nit";
const char FILE_nit__modelize_property[] = "modelize/modelize_property.nit";
const char FILE_nit__modelize_class[] = "modelize/modelize_class.nit";
const char FILE_nit__modelbuilder[] = "modelbuilder.nit";
const char FILE_nit__loader[] = "loader.nit";
const char FILE_nit__modelbuilder_base[] = "modelbuilder_base.nit";
const char FILE_nit__model[] = "model/model.nit";
const char FILE_nit__mmodule[] = "model/mmodule.nit";
const char FILE_nit__location[] = "location.nit";
const char FILE_standard[] = "../lib/standard/standard.nit";
const char FILE_standard__posix[] = "../lib/standard/posix.nit";
const char FILE_standard__string[] = "../lib/standard/string.nit";
const char FILE_standard__math[] = "../lib/standard/math.nit";
const char FILE_standard__kernel[] = "../lib/standard/kernel.nit";
const char FILE_standard__collection[] = "../lib/standard/collection/collection.nit";
const char FILE_standard__range[] = "../lib/standard/collection/range.nit";
const char FILE_standard__abstract_collection[] = "../lib/standard/collection/abstract_collection.nit";
const char FILE_standard__list[] = "../lib/standard/collection/list.nit";
const char FILE_standard__array[] = "../lib/standard/collection/array.nit";
const char FILE_standard__sorter[] = "../lib/standard/collection/sorter.nit";
const char FILE_standard__hash_collection[] = "../lib/standard/collection/hash_collection.nit";
const char FILE_standard__union_find[] = "../lib/standard/collection/union_find.nit";
const char FILE_standard__environ[] = "../lib/standard/environ.nit";
const char FILE_standard__file[] = "../lib/standard/file.nit";
const char FILE_standard__stream[] = "../lib/standard/stream.nit";
const char FILE_standard__ropes[] = "../lib/standard/ropes.nit";
const char FILE_standard__error[] = "../lib/standard/error.nit";
const char FILE_standard__bytes[] = "../lib/standard/bytes.nit";
const char FILE_standard__string_search[] = "../lib/standard/string_search.nit";
const char FILE_standard__time[] = "../lib/standard/time.nit";
const char FILE_standard__gc[] = "../lib/standard/gc.nit";
const char FILE_standard__exec[] = "../lib/standard/exec.nit";
const char FILE_standard__bitset[] = "../lib/standard/bitset.nit";
const char FILE_standard__queue[] = "../lib/standard/queue.nit";
const char FILE_standard__numeric[] = "../lib/standard/numeric.nit";
const char FILE_standard__re[] = "../lib/standard/re.nit";
const char FILE_nit__mproject[] = "model/mproject.nit";
const char FILE_nit__model_base[] = "model/model_base.nit";
const char FILE_more_collections[] = "../lib/more_collections.nit";
const char FILE_serialization[] = "../lib/serialization/serialization.nit";
const char FILE_poset[] = "../lib/poset.nit";
const char FILE_nit__mdoc[] = "model/mdoc.nit";
const char FILE_ordered_tree[] = "../lib/ordered_tree.nit";
const char FILE_nit__toolcontext[] = "toolcontext.nit";
const char FILE_opts[] = "../lib/opts.nit";
const char FILE_nit__version[] = "version.nit";
const char FILE_template[] = "../lib/template/template.nit";
const char FILE_nit__parser[] = "parser/parser.nit";
const char FILE_nit__parser_prod[] = "parser/parser_prod.nit";
const char FILE_nit__lexer[] = "parser/lexer.nit";
const char FILE_nit__parser_nodes[] = "parser/parser_nodes.nit";
const char FILE_nit__lexer_work[] = "parser/lexer_work.nit";
const char FILE_nit__tables[] = "parser/tables.nit";
const char FILE_nit__parser_work[] = "parser/parser_work.nit";
const char FILE_nit__phase[] = "phase.nit";
const char FILE_nit__annotation[] = "annotation.nit";
const char FILE_nit__literal[] = "literal.nit";
const char FILE_nit__mmodule_data[] = "model/mmodule_data.nit";
const char FILE_nit__transform[] = "transform.nit";
const char FILE_nit__astbuilder[] = "astbuilder.nit";
const char FILE_nit__typing[] = "semantize/typing.nit";
const char FILE_nit__local_var_init[] = "semantize/local_var_init.nit";
const char FILE_nit__flow[] = "semantize/flow.nit";
const char FILE_nit__scope[] = "semantize/scope.nit";
const char FILE_nit__astvalidation[] = "astvalidation.nit";
const char FILE_nit__semantize[] = "semantize/semantize.nit";
const char FILE_nit__auto_super_init[] = "semantize/auto_super_init.nit";
const char FILE_nit__rapid_type_analysis[] = "rapid_type_analysis.nit";
const char FILE_csv[] = "../lib/csv/csv.nit";
const char FILE_nit__separate_erasure_compiler[] = "compiler/separate_erasure_compiler.nit";
const char FILE_nit__separate_compiler[] = "compiler/separate_compiler.nit";
const char FILE_nit__abstract_compiler[] = "compiler/abstract_compiler.nit";
const char FILE_nit__platform[] = "platform/platform.nit";
const char FILE_nit__parser_util[] = "parser_util.nit";
const char FILE_nit__c_tools[] = "c_tools.nit";
const char FILE_nit__mixin[] = "mixin.nit";
const char FILE_counter[] = "../lib/counter.nit";
const char FILE_nit__coloring[] = "compiler/coloring.nit";
const char FILE_nit__light_only[] = "compiler/compiler_ffi/light_only.nit";
const char FILE_nit__light[] = "compiler/compiler_ffi/light.nit";
const char FILE_nit__light_ffi[] = "ffi/light_ffi.nit";
const char FILE_nit__nitni_utilities[] = "nitni/nitni_utilities.nit";
const char FILE_nit__nitni_base[] = "nitni/nitni_base.nit";
const char FILE_nit__light_ffi_base[] = "ffi/light_ffi_base.nit";
const char FILE_nit__extern_classes[] = "ffi/extern_classes.nit";
const char FILE_nit__light_c[] = "ffi/light_c.nit";
void gc_finalize (void *obj, void *client_data) {
val* var /* : Finalizable */;
var = obj;
{
((void(*)(val* self))(var->class->vft[COLOR_standard__gc__Finalizable__finalize]))(var); /* finalize on <var:Finalizable>*/
}
}
