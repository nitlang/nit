#include "nit.common.h"
#define COLOR_astbuilder__ASTBuilder___mmodule 0
#define COLOR_astbuilder__ASTBuilder___anchor 1
val* NEW_parser_nodes__ADecIntExpr(const struct type* type);
extern const struct type type_parser_nodes__ADecIntExpr;
val* string__NativeString__to_s_with_length(char* self, long p0);
val* model__MModule__get_primitive_class(val* self, val* p0);
#define COLOR_model__MClass___mclass_type 10
void astbuilder__ADecIntExpr__make(val* self, long p0, val* p1);
val* astbuilder__ASTBuilder__make_int(val* self, long p0);
val* NEW_parser_nodes__ANewExpr(const struct type* type);
extern const struct type type_parser_nodes__ANewExpr;
void astbuilder__ANewExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1);
val* NEW_parser_nodes__ACallExpr(const struct type* type);
extern const struct type type_parser_nodes__ACallExpr;
void astbuilder__ACallExpr__make(val* self, val* p0, val* p1, val* p2);
val* astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2);
val* NEW_parser_nodes__ABlockExpr(const struct type* type);
extern const struct type type_parser_nodes__ABlockExpr;
void astbuilder__ABlockExpr__make(val* self);
val* astbuilder__ASTBuilder__make_block(val* self);
val* NEW_parser_nodes__ALoopExpr(const struct type* type);
extern const struct type type_parser_nodes__ALoopExpr;
void astbuilder__ALoopExpr__make(val* self);
val* astbuilder__ASTBuilder__make_loop(val* self);
val* NEW_parser_nodes__AVarExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarExpr;
void astbuilder__AVarExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1);
val* NEW_parser_nodes__AVarAssignExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarAssignExpr;
void astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1);
#define COLOR_model__MProperty___intro 6
#define COLOR_model__MAttributeDef___static_mtype 8
#define COLOR_typing__AExpr__mtype 58
#define COLOR_model__MType__resolve_for 41
val* NEW_parser_nodes__AAttrExpr(const struct type* type);
extern const struct type type_parser_nodes__AAttrExpr;
void astbuilder__AAttrExpr__make(val* self, val* p0, val* p1, val* p2);
val* astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1);
val* NEW_parser_nodes__AAttrAssignExpr(const struct type* type);
extern const struct type type_parser_nodes__AAttrAssignExpr;
void astbuilder__AAttrAssignExpr__make(val* self, val* p0, val* p1, val* p2);
val* astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2);
val* NEW_parser_nodes__ADoExpr(const struct type* type);
extern const struct type type_parser_nodes__ADoExpr;
void astbuilder__ADoExpr__make(val* self);
val* astbuilder__ASTBuilder__make_do(val* self);
val* NEW_parser_nodes__ABreakExpr(const struct type* type);
extern const struct type type_parser_nodes__ABreakExpr;
void astbuilder__ABreakExpr__make(val* self, val* p0);
val* astbuilder__ASTBuilder__make_break(val* self, val* p0);
val* NEW_parser_nodes__AIfExpr(const struct type* type);
extern const struct type type_parser_nodes__AIfExpr;
void astbuilder__AIfExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1);
#define COLOR_astbuilder__ASTBuilder__init 47
#define COLOR_astbuilder__AExpr___variable_cache 8
#define COLOR_parser_nodes__ANode___parent 1
#define COLOR_kernel__Object___61d_61d 2
val* astbuilder__AExpr__detach_with_placeholder(val* self);
val* NEW_scope__Variable(const struct type* type);
extern const struct type type_scope__Variable;
#define COLOR_scope__Variable__name_61d 32
#define COLOR_kernel__Object__init 7
#define COLOR_typing__Variable___declared_type 3
void parser_nodes__Prod__replace_with(val* self, val* p0);
val* astbuilder__AExpr__make_var_read(val* self);
val* NEW_astbuilder__APlaceholderExpr(const struct type* type);
extern const struct type type_astbuilder__APlaceholderExpr;
void astbuilder__APlaceholderExpr__make(val* self);
val* string__Object__inspect(val* self);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void file__Object__print(val* self, val* p0);
void astbuilder__AExpr__add(val* self, val* p0);
#define COLOR_typing__AExpr___is_typed 6
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
void abstract_collection__Sequence__add(val* self, val* p0);
void astbuilder__ABlockExpr__add(val* self, val* p0);
val* NEW_parser_nodes__TKwloop(const struct type* type);
extern const struct type type_parser_nodes__TKwloop;
#define COLOR_parser_nodes__ALoopExpr___n_kwloop 10
void parser_prod__ALoopExpr__n_block_61d(val* self, val* p0);
#define COLOR_parser_nodes__ALoopExpr___n_block 11
#define COLOR_astbuilder__AExpr__add 70
void astbuilder__ALoopExpr__add(val* self, val* p0);
val* NEW_parser_nodes__TKwdo(const struct type* type);
extern const struct type type_parser_nodes__TKwdo;
#define COLOR_parser_nodes__ADoExpr___n_kwdo 10
void parser_prod__ADoExpr__n_block_61d(val* self, val* p0);
#define COLOR_parser_nodes__ADoExpr___n_block 11
void astbuilder__ADoExpr__add(val* self, val* p0);
val* NEW_parser_nodes__TKwbreak(const struct type* type);
extern const struct type type_parser_nodes__TKwbreak;
#define COLOR_parser_nodes__ABreakExpr___n_kwbreak 12
#define COLOR_scope__AEscapeExpr___escapemark 11
#define COLOR_scope__EscapeMark___escapes 2
void array__Array__add(val* self, val* p0);
val* NEW_parser_nodes__TKwif(const struct type* type);
extern const struct type type_parser_nodes__TKwif;
#define COLOR_parser_nodes__AIfExpr___n_kwif 9
#define COLOR_parser_nodes__AIfExpr___n_expr 10
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfExpr___n_else 12
#define COLOR_typing__AExpr___mtype 5
val* NEW_parser_nodes__TClassid(const struct type* type);
extern const struct type type_parser_nodes__TClassid;
#define COLOR_parser_nodes__AType___n_id 5
void astbuilder__AType__make(val* self);
val* BOX_kernel__Int(long);
#define COLOR_literal__AIntExpr___value 9
val* NEW_parser_nodes__TNumber(const struct type* type);
extern const struct type type_parser_nodes__TNumber;
#define COLOR_parser_nodes__ADecIntExpr___n_number 10
val* NEW_parser_nodes__TKwnew(const struct type* type);
extern const struct type type_parser_nodes__TKwnew;
#define COLOR_parser_nodes__ANewExpr___n_kwnew 9
val* NEW_parser_nodes__AType(const struct type* type);
extern const struct type type_parser_nodes__AType;
#define COLOR_parser_nodes__ANewExpr___n_type 10
val* NEW_parser_nodes__AListExprs(const struct type* type);
extern const struct type type_parser_nodes__AListExprs;
#define COLOR_parser_nodes__ANewExpr___n_args 12
#define COLOR_parser_nodes__AExprs___n_exprs 4
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
#define COLOR_typing__ANewExpr___callsite 13
#define COLOR_typing__CallSite___recv 1
extern const struct type type_model__MClassType;
#define COLOR_typing__ANewExpr___recvtype 14
#define COLOR_typing__CallSite___mproperty 5
#define COLOR_model__MMethod___is_new 13
#define COLOR_typing__CallSite___msignature 7
#define COLOR_model__MSignature___return_mtype 5
#define COLOR_parser_nodes__ASendExpr___n_expr 9
#define COLOR_parser_nodes__ACallFormExpr___n_args 16
val* NEW_parser_nodes__TId(const struct type* type);
extern const struct type type_parser_nodes__TId;
#define COLOR_parser_nodes__ACallFormExpr___n_id 15
#define COLOR_typing__ASendExpr___callsite 10
#define COLOR_parser_nodes__AAttrFormExpr___n_expr 9
val* NEW_parser_nodes__TAttrid(const struct type* type);
extern const struct type type_parser_nodes__TAttrid;
#define COLOR_parser_nodes__AAttrFormExpr___n_id 10
#define COLOR_typing__AAttrFormExpr___mproperty 15
#define COLOR_parser_nodes__AAssignFormExpr___n_value 12
val* NEW_parser_nodes__TAssign(const struct type* type);
extern const struct type type_parser_nodes__TAssign;
#define COLOR_parser_nodes__AAssignFormExpr___n_assign 11
#define COLOR_parser_nodes__AVarFormExpr___n_id 9
#define COLOR_scope__AVarFormExpr___variable 10
