#include "nit.common.h"
val* annotation__Prod__get_annotations(val* self, val* p0);
short int array__AbstractArrayRead__is_empty(val* self);
long array__AbstractArrayRead__length(val* self);
extern const struct type type_kernel__Int;
val* array__Array___91d_93d(val* self, long p0);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* parser_nodes__ANode__location(val* self);
#define COLOR_location__Location___line_start 1
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
val* BOX_kernel__Int(long);
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
val* abstract_collection__SequenceRead__first(val* self);
val* annotation__Prod__get_single_annotation(val* self, val* p0, val* p1);
extern const struct type type_array__Arrayparser_nodes__AAnnotation;
void array__Array__init(val* self);
val* parser_nodes__Prod__n_annotations(val* self);
#define COLOR_parser_nodes__AAnnotations___n_items 6
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
val* annotation__AAnnotation__name(val* self);
#define COLOR_kernel__Object___61d_61d 2
void array__Array__add(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 30
val* parser_nodes__AAnnotation__n_atid(val* self);
val* parser_nodes__AAtid__n_id(val* self);
val* lexer_work__Token__text(val* self);
#define COLOR_parser_nodes__AAnnotation___n_args 9
long parser_nodes__ANodes__length(val* self);
val* annotation__AAtArg__as_id(val* self);
val* annotation__AAnnotation__arg_as_id(val* self, val* p0);
extern const struct type type_parser_nodes__AExprAtArg;
val* parser_nodes__AExprAtArg__n_expr(val* self);
extern const struct type type_parser_nodes__AStringFormExpr;
#define COLOR_literal__AStringFormExpr___value 10
val* annotation__AAtArg__as_string(val* self);
extern const struct type type_parser_nodes__ACallExpr;
val* parser_nodes__ASendExpr__n_expr(val* self);
extern const struct type type_parser_nodes__AImplicitSelfExpr;
val* parser_nodes__ACallFormExpr__n_args(val* self);
#define COLOR_parser_nodes__AExprs___n_exprs 4
short int parser_nodes__ANodes__is_empty(val* self);
val* parser_nodes__ACallFormExpr__n_id(val* self);
