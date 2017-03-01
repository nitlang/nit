#include "nit.common.h"
#define COLOR_nitc__astbuilder__ASTBuilder___mmodule 0
extern const char FILE_nitc__astbuilder[];
#define COLOR_nitc__astbuilder__ASTBuilder___anchor 1
val* NEW_nitc__AIntegerExpr(const struct type* type);
extern const struct type type_nitc__AIntegerExpr;
val* nitc__model___MModule___int_type(val* self);
void nitc__astbuilder___AIntegerExpr___make(val* self, long p0, val* p1);
val* NEW_nitc__ANewExpr(const struct type* type);
extern const struct type type_nitc__ANewExpr;
void nitc__astbuilder___ANewExpr___make(val* self, val* p0, val* p1);
val* NEW_nitc__ACallExpr(const struct type* type);
extern const struct type type_nitc__ACallExpr;
void nitc__astbuilder___ACallExpr___make(val* self, val* p0, val* p1, val* p2);
val* NEW_nitc__ABlockExpr(const struct type* type);
extern const struct type type_nitc__ABlockExpr;
void nitc__astbuilder___ABlockExpr___make(val* self);
val* NEW_nitc__ALoopExpr(const struct type* type);
extern const struct type type_nitc__ALoopExpr;
void nitc__astbuilder___ALoopExpr___make(val* self);
val* NEW_nitc__AVarExpr(const struct type* type);
extern const struct type type_nitc__AVarExpr;
void nitc__astbuilder___AVarExpr___make(val* self, val* p0, val* p1);
val* NEW_nitc__AVarAssignExpr(const struct type* type);
extern const struct type type_nitc__AVarAssignExpr;
void nitc__astbuilder___AVarAssignExpr___make(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MProperty___intro 16
extern const char FILE_nitc__model[];
#define COLOR_nitc__model__MAttributeDef___static_mtype 15
#define COLOR_nitc__typing__AExpr__mtype 49
#define COLOR_nitc__model__MType__resolve_for 29
val* NEW_nitc__AAttrExpr(const struct type* type);
extern const struct type type_nitc__AAttrExpr;
void nitc__astbuilder___AAttrExpr___make(val* self, val* p0, val* p1, val* p2);
val* NEW_nitc__AAttrAssignExpr(const struct type* type);
extern const struct type type_nitc__AAttrAssignExpr;
void nitc__astbuilder___AAttrAssignExpr___make(val* self, val* p0, val* p1, val* p2);
val* NEW_nitc__ADoExpr(const struct type* type);
extern const struct type type_nitc__ADoExpr;
void nitc__astbuilder___ADoExpr___make(val* self);
val* NEW_nitc__ABreakExpr(const struct type* type);
extern const struct type type_nitc__ABreakExpr;
void nitc__astbuilder___ABreakExpr___make(val* self, val* p0);
val* NEW_nitc__AIfExpr(const struct type* type);
extern const struct type type_nitc__AIfExpr;
void nitc__astbuilder___AIfExpr___make(val* self, val* p0, val* p1);
#define COLOR_nitc___nitc__ASTBuilder___core__kernel__Object__init 28
#define COLOR_nitc__astbuilder__AExpr___variable_cache 11
#define COLOR_nitc__parser_nodes__ANode___parent 2
#define COLOR_core__kernel__Object___61d_61d 4
val* nitc__astbuilder___AExpr___detach_with_placeholder(val* self);
val* NEW_nitc__Variable(const struct type* type);
extern const struct type type_nitc__Variable;
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nitc__scope__Variable__name_61d 12
#define COLOR_core__kernel__Object__init 0
#define COLOR_nitc__typing__Variable___declared_type 0
void nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(val* self, val* p0);
val* NEW_nitc__APlaceholderExpr(const struct type* type);
extern const struct type type_nitc__APlaceholderExpr;
void nitc___nitc__APlaceholderExpr___make(val* self);
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
val* core__abstract_text___Object___inspect(val* self);
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
void core__file___Sys___print(val* self, val* p0);
#define COLOR_nitc__typing__AExpr___is_typed 13
#define COLOR_nitc__parser_nodes__ABlockExpr___n_expr 3
extern const char FILE_nitc__parser_nodes[];
void core___core__Sequence___SimpleCollection__add(val* self, val* p0);
val* NEW_nitc__TKwloop(const struct type* type);
extern const struct type type_nitc__TKwloop;
#define COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop 4
void nitc__parser_prod___ALoopExpr___n_block_61d(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ALoopExpr___n_block 5
extern const char FILE_nitc__typing[];
#define COLOR_nitc__astbuilder__AExpr__add 57
val* NEW_nitc__TKwdo(const struct type* type);
extern const struct type type_nitc__TKwdo;
#define COLOR_nitc__parser_nodes__ADoExpr___n_kwdo 4
void nitc__parser_prod___ADoExpr___n_block_61d(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ADoExpr___n_block 5
val* NEW_nitc__TKwbreak(const struct type* type);
extern const struct type type_nitc__TKwbreak;
#define COLOR_nitc__parser_nodes__ABreakExpr___n_kwbreak 6
#define COLOR_nitc__scope__AEscapeExpr___escapemark 5
#define COLOR_nitc__scope__EscapeMark___escapes 2
extern const char FILE_nitc__scope[];
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
val* NEW_nitc__TKwif(const struct type* type);
extern const struct type type_nitc__TKwif;
#define COLOR_nitc__parser_nodes__AIfExpr___n_kwif 3
#define COLOR_nitc__parser_nodes__AIfExpr___n_expr 4
val* NEW_nitc__TKwthen(const struct type* type);
extern const struct type type_nitc__TKwthen;
#define COLOR_nitc__parser_nodes__AIfExpr___n_kwthen 5
#define COLOR_nitc__parser_nodes__AIfExpr___n_then 6
val* NEW_nitc__TKwelse(const struct type* type);
extern const struct type type_nitc__TKwelse;
#define COLOR_nitc__parser_nodes__AIfExpr___n_kwelse 7
#define COLOR_nitc__parser_nodes__AIfExpr___n_else 8
#define COLOR_nitc__typing__AExpr___mtype 12
val* NEW_nitc__TClassid(const struct type* type);
extern const struct type type_nitc__TClassid;
val* NEW_nitc__AQclassid(const struct type* type);
extern const struct type type_nitc__AQclassid;
void nitc__parser_prod___AQclassid___n_id_61d(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AType___n_qid 6
#define COLOR_nitc__literal__AIntegerExpr___value 4
val* NEW_nitc__TInteger(const struct type* type);
extern const struct type type_nitc__TInteger;
#define COLOR_nitc__parser_nodes__AIntegerExpr___n_integer 3
val* NEW_nitc__TKwnew(const struct type* type);
extern const struct type type_nitc__TKwnew;
#define COLOR_nitc__parser_nodes__ANewExpr___n_kwnew 3
val* NEW_nitc__AType(const struct type* type);
extern const struct type type_nitc__AType;
void nitc__astbuilder___AType___make(val* self);
#define COLOR_nitc__parser_nodes__ANewExpr___n_type 4
val* NEW_nitc__AListExprs(const struct type* type);
extern const struct type type_nitc__AListExprs;
#define COLOR_nitc__parser_nodes__ANewExpr___n_args 6
#define COLOR_nitc__parser_nodes__AExprs___n_exprs 3
void core___core__SimpleCollection___add_all(val* self, val* p0);
#define COLOR_nitc__typing__ANewExpr___callsite 7
#define COLOR_nitc__typing__CallSite___recv 7
extern const struct type type_nitc__MClassType;
#define COLOR_nitc__typing__ANewExpr___recvtype 8
#define COLOR_nitc__typing__CallSite___mproperty 11
#define COLOR_nitc__model__MMethod___is_new 22
#define COLOR_nitc__typing__CallSite___msignature 13
#define COLOR_nitc__model__MSignature___return_mtype 10
#define COLOR_nitc__parser_nodes__ASendExpr___n_expr 3
#define COLOR_nitc__parser_nodes__ACallFormExpr___n_args 19
val* NEW_nitc__AQid(const struct type* type);
extern const struct type type_nitc__AQid;
#define COLOR_nitc__parser_nodes__ACallFormExpr___n_qid 18
val* NEW_nitc__TId(const struct type* type);
extern const struct type type_nitc__TId;
void nitc__parser_prod___AQid___n_id_61d(val* self, val* p0);
#define COLOR_nitc__typing__ASendExpr___callsite 4
#define COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr 3
val* NEW_nitc__TAttrid(const struct type* type);
extern const struct type type_nitc__TAttrid;
#define COLOR_nitc__parser_nodes__AAttrFormExpr___n_id 4
#define COLOR_nitc__typing__AAttrFormExpr___mproperty 18
#define COLOR_nitc__parser_nodes__AAssignFormExpr___n_value 6
val* NEW_nitc__TAssign(const struct type* type);
extern const struct type type_nitc__TAssign;
#define COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign 5
#define COLOR_nitc__parser_nodes__AVarFormExpr___n_id 3
#define COLOR_nitc__scope__AVarFormExpr___variable 4
