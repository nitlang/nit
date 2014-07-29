#include "nit.common.h"
#define COLOR_phase__Phase___toolcontext 0
void literal__AModule__do_literal(val* self, val* p0);
void literal__LiteralPhase__process_nmodule(val* self, val* p0);
val* NEW_literal__LiteralVisitor(const struct type* type);
extern const struct type type_literal__LiteralVisitor;
void literal__LiteralVisitor__init(val* self, val* p0);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
#define COLOR_literal__LiteralVisitor___toolcontext 1
#define COLOR_literal__ANode__accept_literal 38
#define COLOR_parser_nodes__ANode__visit_all 37
void literal__LiteralVisitor__visit(val* self, val* p0);
#define COLOR_literal__AIntExpr___value 9
val* parser_nodes__ADecIntExpr__n_number(val* self);
val* lexer_work__Token__text(val* self);
long string__Text__to_i(val* self);
val* BOX_kernel__Int(long);
void literal__ADecIntExpr__accept_literal(val* self, val* p0);
val* parser_nodes__AHexIntExpr__n_hex_number(val* self);
val* string__Text__substring_from(val* self, long p0);
long string__Text__to_hex(val* self);
void literal__AHexIntExpr__accept_literal(val* self, val* p0);
#define COLOR_literal__AFloatExpr___value 10
val* parser_nodes__AFloatExpr__n_float(val* self);
double string__Text__to_f(val* self);
val* BOX_kernel__Float(double);
void literal__AFloatExpr__accept_literal(val* self, val* p0);
#define COLOR_literal__ACharExpr___value 10
val* parser_nodes__ACharExpr__n_char(val* self);
val* string__Text__unescape_nit(val* self);
#define COLOR_string__FlatText___length 3
val* parser_nodes__ANode__hot_location(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__SequenceRead___91d_93d 39
void literal__ACharExpr__accept_literal(val* self, val* p0);
#define COLOR_literal__AStringFormExpr___value 10
val* parser_nodes__AStringFormExpr__n_string(val* self);
extern const struct type type_kernel__Int;
extern const struct class class_kernel__Char;
val* string__FlatString__substring(val* self, long p0, long p1);
void literal__AStringFormExpr__accept_literal(val* self, val* p0);
