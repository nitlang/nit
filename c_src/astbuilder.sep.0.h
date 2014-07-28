#include "nit.common.h"
#define COLOR_astbuilder__ASTBuilder___mmodule 0
#define COLOR_astbuilder__ASTBuilder___anchor 1
val* NEW_parser_nodes__ADecIntExpr(const struct type* type);
extern const struct type type_parser_nodes__ADecIntExpr;
val* string__NativeString__to_s_with_length(char* self, long p0);
val* model__MModule__get_primitive_class(val* self, val* p0);
#define COLOR_model__MClass___mclass_type 7
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
val* NEW_parser_nodes__AVarExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarExpr;
void astbuilder__AVarExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1);
val* NEW_parser_nodes__AVarAssignExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarAssignExpr;
void astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1);
val* model__MProperty__intro(val* self);
#define COLOR_model__MAttributeDef___static_mtype 7
#define COLOR_typing__AExpr__mtype 55
#define COLOR_model__MType__resolve_for 38
val* NEW_parser_nodes__AAttrExpr(const struct type* type);
extern const struct type type_parser_nodes__AAttrExpr;
void astbuilder__AAttrExpr__make(val* self, val* p0, val* p1, val* p2);
val* astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1);
val* NEW_parser_nodes__AAttrAssignExpr(const struct type* type);
extern const struct type type_parser_nodes__AAttrAssignExpr;
void astbuilder__AAttrAssignExpr__make(val* self, val* p0, val* p1, val* p2);
val* astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2);
val* NEW_parser_nodes__AIfExpr(const struct type* type);
extern const struct type type_parser_nodes__AIfExpr;
void astbuilder__AIfExpr__make(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1);
#define COLOR_astbuilder__AExpr___variable_cache 8
#define COLOR_parser_nodes__ANode___parent 1
#define COLOR_kernel__Object___61d_61d 2
val* astbuilder__AExpr__detach_with_placeholder(val* self);
val* NEW_scope__Variable(const struct type* type);
extern const struct type type_scope__Variable;
#define COLOR_scope__Variable___name 0
#define COLOR_typing__Variable___declared_type 1
void parser_nodes__Prod__replace_with(val* self, val* p0);
val* astbuilder__AExpr__make_var_read(val* self);
val* NEW_astbuilder__APlaceholderExpr(const struct type* type);
extern const struct type type_astbuilder__APlaceholderExpr;
void astbuilder__APlaceholderExpr__make(val* self);
void astbuilder__AExpr__add(val* self, val* p0);
#define COLOR_typing__AExpr___is_typed 6
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
void abstract_collection__Sequence__add(val* self, val* p0);
void astbuilder__ABlockExpr__add(val* self, val* p0);
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
void parser_nodes__AExprs__init(val* self);
#define COLOR_parser_nodes__ANewExpr___n_args 12
val* parser_nodes__ANewExpr__n_args(val* self);
#define COLOR_parser_nodes__AExprs___n_exprs 4
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
#define COLOR_typing__ANewExpr___callsite 13
#define COLOR_typing__CallSite___recv 1
#define COLOR_parser_nodes__ASendExpr___n_expr 9
#define COLOR_parser_nodes__ACallFormExpr___n_args 16
val* NEW_parser_nodes__TId(const struct type* type);
extern const struct type type_parser_nodes__TId;
#define COLOR_parser_nodes__ACallFormExpr___n_id 15
val* parser_nodes__ACallFormExpr__n_args(val* self);
#define COLOR_typing__ASendExpr___callsite 10
#define COLOR_typing__CallSite___msignature 7
#define COLOR_model__MSignature___return_mtype 4
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
