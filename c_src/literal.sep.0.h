#include "nit.common.h"
#define COLOR_phase__Phase___toolcontext 0
void literal__AModule__do_literal(val* self, val* p0);
void literal__LiteralPhase__process_nmodule(val* self, val* p0);
val* NEW_literal__LiteralVisitor(const struct type* type);
extern const struct type type_literal__LiteralVisitor;
void literal__LiteralVisitor__init(val* self, val* p0);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
#define COLOR_literal__LiteralVisitor___toolcontext 1
#define COLOR_kernel__Object__init 7
#define COLOR_literal__ANode__accept_literal 40
#define COLOR_parser_nodes__ANode__visit_all 39
void literal__LiteralVisitor__visit(val* self, val* p0);
#define COLOR_literal__AIntExpr___value 9
#define COLOR_parser_nodes__ADecIntExpr___n_number 10
val* lexer_work__Token__text(val* self);
long string__Text__to_i(val* self);
val* BOX_kernel__Int(long);
void literal__ADecIntExpr__accept_literal(val* self, val* p0);
#define COLOR_parser_nodes__AHexIntExpr___n_hex_number 10
val* string__Text__substring_from(val* self, long p0);
long string__Text__to_hex(val* self);
void literal__AHexIntExpr__accept_literal(val* self, val* p0);
#define COLOR_literal__AFloatExpr___value 10
#define COLOR_parser_nodes__AFloatExpr___n_float 9
double string__Text__to_f(val* self);
val* BOX_kernel__Float(double);
void literal__AFloatExpr__accept_literal(val* self, val* p0);
#define COLOR_literal__ACharExpr___value 10
#define COLOR_parser_nodes__ACharExpr___n_char 9
val* string__Text__unescape_nit(val* self);
#define COLOR_string__FlatText___length 3
val* parser_nodes__ANode__hot_location(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__SequenceRead___91d_93d 46
void literal__ACharExpr__accept_literal(val* self, val* p0);
#define COLOR_literal__AStringFormExpr___value 10
#define COLOR_parser_nodes__AStringFormExpr___n_string 9
extern const struct type type_kernel__Int;
extern const struct class class_kernel__Char;
val* string__FlatString__substring(val* self, long p0, long p1);
void literal__AStringFormExpr__accept_literal(val* self, val* p0);
