#include "nit.common.h"
#define COLOR_nit__astbuilder__ASTBuilder___mmodule 0
extern const char FILE_nit__astbuilder[];
#define COLOR_nit__astbuilder__ASTBuilder___anchor 1
val* NEW_nit__ADecIntExpr(const struct type* type);
extern const struct type type_nit__ADecIntExpr;
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
val* nit__model___MModule___get_primitive_class(val* self, val* p0);
#define COLOR_nit__model__MClass___mclass_type 16
extern const char FILE_nit__model[];
void nit__astbuilder___ADecIntExpr___make(val* self, long p0, val* p1);
val* NEW_nit__ANewExpr(const struct type* type);
extern const struct type type_nit__ANewExpr;
void nit__astbuilder___ANewExpr___make(val* self, val* p0, val* p1);
val* NEW_nit__ACallExpr(const struct type* type);
extern const struct type type_nit__ACallExpr;
void nit__astbuilder___ACallExpr___make(val* self, val* p0, val* p1, val* p2);
val* NEW_nit__ABlockExpr(const struct type* type);
extern const struct type type_nit__ABlockExpr;
void nit__astbuilder___ABlockExpr___make(val* self);
val* NEW_nit__ALoopExpr(const struct type* type);
extern const struct type type_nit__ALoopExpr;
void nit__astbuilder___ALoopExpr___make(val* self);
val* NEW_nit__AVarExpr(const struct type* type);
extern const struct type type_nit__AVarExpr;
void nit__astbuilder___AVarExpr___make(val* self, val* p0, val* p1);
val* NEW_nit__AVarAssignExpr(const struct type* type);
extern const struct type type_nit__AVarAssignExpr;
void nit__astbuilder___AVarAssignExpr___make(val* self, val* p0, val* p1);
#define COLOR_nit__model__MProperty___intro 12
#define COLOR_nit__model__MAttributeDef___static_mtype 13
#define COLOR_nit__typing__AExpr__mtype 60
#define COLOR_nit__model__MType__resolve_for 45
val* NEW_nit__AAttrExpr(const struct type* type);
extern const struct type type_nit__AAttrExpr;
void nit__astbuilder___AAttrExpr___make(val* self, val* p0, val* p1, val* p2);
val* NEW_nit__AAttrAssignExpr(const struct type* type);
extern const struct type type_nit__AAttrAssignExpr;
void nit__astbuilder___AAttrAssignExpr___make(val* self, val* p0, val* p1, val* p2);
val* NEW_nit__ADoExpr(const struct type* type);
extern const struct type type_nit__ADoExpr;
void nit__astbuilder___ADoExpr___make(val* self);
val* NEW_nit__ABreakExpr(const struct type* type);
extern const struct type type_nit__ABreakExpr;
void nit__astbuilder___ABreakExpr___make(val* self, val* p0);
val* NEW_nit__AIfExpr(const struct type* type);
extern const struct type type_nit__AIfExpr;
void nit__astbuilder___AIfExpr___make(val* self, val* p0, val* p1);
#define COLOR_nit___nit__ASTBuilder___standard__kernel__Object__init 48
#define COLOR_nit__astbuilder__AExpr___variable_cache 9
#define COLOR_nit__parser_nodes__ANode___parent 1
#define COLOR_standard__kernel__Object___61d_61d 2
val* nit__astbuilder___AExpr___detach_with_placeholder(val* self);
val* NEW_nit__Variable(const struct type* type);
extern const struct type type_nit__Variable;
#define COLOR_nit__scope__Variable__name_61d 33
#define COLOR_standard__kernel__Object__init 7
#define COLOR_nit__typing__Variable___declared_type 3
void nit___nit__Prod___ANode__replace_with(val* self, val* p0);
val* NEW_nit__APlaceholderExpr(const struct type* type);
extern const struct type type_nit__APlaceholderExpr;
void nit___nit__APlaceholderExpr___make(val* self);
val* standard__string___Object___inspect(val* self);
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__Object;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__Object;
#define COLOR_standard__array__Array__with_native 73
#define COLOR_standard__string__Object__to_s 9
void standard__file___Object___print(val* self, val* p0);
#define COLOR_nit__typing__AExpr___is_typed 6
#define COLOR_nit__parser_nodes__ABlockExpr___n_expr 10
extern const char FILE_nit__parser_nodes[];
void standard___standard__Sequence___SimpleCollection__add(val* self, val* p0);
val* NEW_nit__TKwloop(const struct type* type);
extern const struct type type_nit__TKwloop;
#define COLOR_nit__parser_nodes__ALoopExpr___n_kwloop 11
void nit__parser_prod___ALoopExpr___n_block_61d(val* self, val* p0);
#define COLOR_nit__parser_nodes__ALoopExpr___n_block 12
extern const char FILE_nit__typing[];
#define COLOR_nit__astbuilder__AExpr__add 74
val* NEW_nit__TKwdo(const struct type* type);
extern const struct type type_nit__TKwdo;
#define COLOR_nit__parser_nodes__ADoExpr___n_kwdo 11
void nit__parser_prod___ADoExpr___n_block_61d(val* self, val* p0);
#define COLOR_nit__parser_nodes__ADoExpr___n_block 12
val* NEW_nit__TKwbreak(const struct type* type);
extern const struct type type_nit__TKwbreak;
#define COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak 13
#define COLOR_nit__scope__AEscapeExpr___escapemark 12
#define COLOR_nit__scope__EscapeMark___escapes 2
extern const char FILE_nit__scope[];
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
val* NEW_nit__TKwif(const struct type* type);
extern const struct type type_nit__TKwif;
#define COLOR_nit__parser_nodes__AIfExpr___n_kwif 10
#define COLOR_nit__parser_nodes__AIfExpr___n_expr 11
#define COLOR_nit__parser_nodes__AIfExpr___n_then 12
#define COLOR_nit__parser_nodes__AIfExpr___n_else 13
#define COLOR_nit__typing__AExpr___mtype 5
val* NEW_nit__TClassid(const struct type* type);
extern const struct type type_nit__TClassid;
#define COLOR_nit__parser_nodes__AType___n_id 5
val* BOX_standard__Int(long);
#define COLOR_nit__literal__AIntExpr___value 10
val* NEW_nit__TNumber(const struct type* type);
extern const struct type type_nit__TNumber;
#define COLOR_nit__parser_nodes__ADecIntExpr___n_number 11
val* NEW_nit__TKwnew(const struct type* type);
extern const struct type type_nit__TKwnew;
#define COLOR_nit__parser_nodes__ANewExpr___n_kwnew 10
val* NEW_nit__AType(const struct type* type);
extern const struct type type_nit__AType;
void nit__astbuilder___AType___make(val* self);
#define COLOR_nit__parser_nodes__ANewExpr___n_type 11
val* NEW_nit__AListExprs(const struct type* type);
extern const struct type type_nit__AListExprs;
#define COLOR_nit__parser_nodes__ANewExpr___n_args 13
#define COLOR_nit__parser_nodes__AExprs___n_exprs 4
void standard___standard__SimpleCollection___add_all(val* self, val* p0);
#define COLOR_nit__typing__ANewExpr___callsite 14
#define COLOR_nit__typing__CallSite___recv 1
extern const struct type type_nit__MClassType;
#define COLOR_nit__typing__ANewExpr___recvtype 15
#define COLOR_nit__typing__CallSite___mproperty 5
#define COLOR_nit__model__MMethod___is_new 18
#define COLOR_nit__typing__CallSite___msignature 7
#define COLOR_nit__model__MSignature___return_mtype 6
#define COLOR_nit__parser_nodes__ASendExpr___n_expr 10
#define COLOR_nit__parser_nodes__ACallFormExpr___n_args 17
val* NEW_nit__TId(const struct type* type);
extern const struct type type_nit__TId;
#define COLOR_nit__parser_nodes__ACallFormExpr___n_id 16
#define COLOR_nit__typing__ASendExpr___callsite 11
#define COLOR_nit__parser_nodes__AAttrFormExpr___n_expr 10
val* NEW_nit__TAttrid(const struct type* type);
extern const struct type type_nit__TAttrid;
#define COLOR_nit__parser_nodes__AAttrFormExpr___n_id 11
#define COLOR_nit__typing__AAttrFormExpr___mproperty 16
#define COLOR_nit__parser_nodes__AAssignFormExpr___n_value 13
val* NEW_nit__TAssign(const struct type* type);
extern const struct type type_nit__TAssign;
#define COLOR_nit__parser_nodes__AAssignFormExpr___n_assign 12
#define COLOR_nit__parser_nodes__AVarFormExpr___n_id 10
#define COLOR_nit__scope__AVarFormExpr___variable 11
