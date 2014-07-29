#include "nit.common.h"
#define COLOR_phase__ToolContext___phases 21
#define COLOR_phase__ToolContext___opt_disable_phase 22
#define COLOR_phase__ToolContext__init 129
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 65
void opts__OptionContext__add_option(val* self, val* p0);
void phase__ToolContext__init(val* self);
#define COLOR_phase__ToolContext__process_options 128
#define COLOR_opts__Option___value 6
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
short int string__FlatString___61d_61d(val* self, val* p0);
val* phase__ToolContext__phases_list(val* self);
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_phase__Phase___in_hierarchy 1
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__is_empty 30
void file__Object__print(val* self, val* p0);
val* string__Collection__join(val* self, val* p0);
extern const struct type type_array__Arraykernel__Object;
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_string__Object__to_s 7
#define COLOR_abstract_collection__Iterator__next 30
val* poset__POSet__iterator(val* self);
val* phase__Phase__to_s(val* self);
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_phase__Phase___disabled 2
void toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1);
void array__ArrayIterator__next(val* self);
void phase__ToolContext__process_options(val* self, val* p0);
val* array__Collection__to_a(val* self);
void sorter__Comparator__sort(val* self, val* p0);
#include "time_nit.h"
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
val* parser_nodes__ANode__location(val* self);
#define COLOR_location__Location___file 0
#define COLOR_location__SourceFile___filename 0
#define COLOR_phase__Phase___toolcontext 0
#define COLOR_toolcontext__ToolContext___error_count 0
#define COLOR_phase__Phase__process_nmodule 36
void toolcontext__ToolContext__check_errors(val* self);
#define COLOR_parser_nodes__AModule___n_classdefs 7
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
#define COLOR_phase__Phase__process_npropdef 38
val* NEW_phase__AnnotationPhaseVisitor(const struct type* type);
extern const struct type type_phase__AnnotationPhaseVisitor;
void phase__AnnotationPhaseVisitor__init(val* self, val* p0);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
extern const struct type type_kernel__Int;
val* BOX_kernel__Int(long);
void phase__ToolContext__run_phases(val* self, val* p0);
#define COLOR_phase__AnnotationPhaseVisitor___phase 1
#define COLOR_parser_nodes__ANode__visit_all 37
extern const struct type type_parser_nodes__AAnnotation;
#define COLOR_parser_nodes__ANode___parent 1
#define COLOR_phase__Phase__process_annotated_node 39
void phase__AnnotationPhaseVisitor__visit(val* self, val* p0);
val* poset__POSet__add_node(val* self, val* p0);
void poset__POSet__add_edge(val* self, val* p0, val* p1);
void phase__Phase__init(val* self, val* p0, val* p1);
val* string__Object__class_name(val* self);
val* file__String__strip_extension(val* self, val* p0);
val* string__FlatString__to_lower(val* self);
