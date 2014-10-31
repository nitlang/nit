#include "nit.common.h"
val* platform__ToolContext__platform_from_name(val* self, val* p0);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* annotation__AAnnotation__name(val* self);
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
extern const struct type type_parser_nodes__AModuledecl;
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__AAnnotation___n_args 9
long parser_nodes__ANodes__length(val* self);
extern const struct type type_kernel__Int;
short int parser_nodes__ANodes__is_empty(val* self);
#define COLOR_parser_nodes__AModuledecl___n_name 8
val* parser_work__Prod__collect_text(val* self);
val* abstract_collection__SequenceRead__first(val* self);
val* annotation__AExpr__as_string(val* self);
short int string__FlatString___61d_61d(val* self, val* p0);
#define COLOR_parser_nodes__ANode___parent 1
extern const struct type type_parser_nodes__AModule;
#define COLOR_modelbuilder__AModule___mmodule 8
#define COLOR_parser_nodes__ANode___location 0
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
val* platform__MModule__target_platform(val* self);
#define COLOR_kernel__Object___33d_61d 3
#define COLOR_platform__MModule___local_target_platform 19
void platform__PlatformPhase__process_annotated_node(val* self, val* p0, val* p1);
#define COLOR_mmodule__MModule___in_importation 7
val* poset__POSetElement__greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
#define COLOR_abstract_collection__Iterator__next 32
short int platform__Platform__supports_libunwind(val* self);
short int platform__Platform__supports_libgc(val* self);
short int platform__Platform__no_main(val* self);
