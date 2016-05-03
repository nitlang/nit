#include "nit.common.h"
#define COLOR_nitc__scope__ToolContext___scope_phase 48
extern const char FILE_nitc__scope[];
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
void nitc__scope___APropdef___do_scope(val* self, val* p0);
#define COLOR_nitc__scope__Variable___name 2
#define COLOR_nitc__scope__Variable___location 3
#define COLOR_nitc__scope__Variable___warn_unread 4
#define COLOR_nitc___nitc__Variable___core__kernel__Object__init 22
#define COLOR_nitc__scope__EscapeMark___name 0
#define COLOR_nitc__scope__EscapeMark___continue_mark 1
#define COLOR_nitc__scope__EscapeMark___escapes 2
#define COLOR_nitc___nitc__EscapeMark___core__kernel__Object__init 17
#define COLOR_nitc__scope__ScopeVisitor___toolcontext 1
#define COLOR_nitc__scope__ScopeVisitor___selfvariable 2
#define COLOR_nitc__scope___nitc__scope__ScopeVisitor___core__kernel__Object__init 27
#define COLOR_nitc__scope__ScopeVisitor___scopes 3
val* NEW_nitc__scope__Scope(const struct type* type);
extern const struct type type_nitc__scope__Scope;
void core___core__Sequence___SimpleCollection__add(val* self, val* p0);
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self);
val* core___core__List___core__abstract_collection__Sequence__shift(val* self);
#define COLOR_nitc__scope__Scope___variables 0
val* core___core__HashMap___core__abstract_collection__MapRead__values(val* self);
#define COLOR_core__abstract_collection__Collection__iterator 21
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
val* core__flat___NativeString___to_s_full(char* self, long p0, long p1);
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
val* nitc___nitc__ToolContext___advice(val* self, val* p0, val* p1, val* p2);
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
val* nitc__scope___nitc__scope__ScopeVisitor___search_variable(val* self, val* p0);
#define COLOR_core__kernel__Object___61d_61d 4
void nitc__scope___nitc__scope__ScopeVisitor___error(val* self, val* p0, val* p1);
val* core___core__List___core__abstract_collection__Collection__first(val* self);
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__ANode___location 1
extern const char FILE_nitc__parser_nodes[];
val* core___core__List___core__abstract_collection__Collection__iterator(val* self);
short int core___core__ListIterator___core__abstract_collection__Iterator__is_ok(val* self);
val* core___core__ListIterator___core__abstract_collection__Iterator__item(val* self);
val* nitc__scope___nitc__scope__Scope___get_variable(val* self, val* p0);
#define COLOR_nitc__scope__ANode__accept_scope_visitor 23
#define COLOR_nitc__scope__Scope___escapemark 1
void core___core__List___core__abstract_collection__Sequence__unshift(val* self, val* p0);
void nitc___nitc__Visitor___enter_visit(val* self, val* p0);
void nitc__scope___nitc__scope__ScopeVisitor___shift_scope(val* self);
#define COLOR_nitc__parser_nodes__ALabel___n_id 6
val* nitc__scope___nitc__scope__ScopeVisitor___search_label(val* self, val* p0);
val* nitc__lexer_work___Token___text(val* self);
val* NEW_nitc__EscapeMark(const struct type* type);
extern const struct type type_nitc__EscapeMark;
#define COLOR_nitc__scope__EscapeMark__name_61d 14
#define COLOR_core__kernel__Object__init 0
#define COLOR_nitc__modelbuilder_base__ANode___is_broken 0
#define COLOR_nitc__parser_nodes__ANode__hot_location 16
val* nitc___nitc__ToolContext___error(val* self, val* p0, val* p1);
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ANode__visit_all 14
val* NEW_nitc__scope__ScopeVisitor(const struct type* type);
extern const struct type type_nitc__scope__ScopeVisitor;
#define COLOR_nitc__scope__ScopeVisitor__toolcontext_61d 15
#define COLOR_nitc__scope__AParam___variable 9
#define COLOR_nitc__scope___AParam___ANode__accept_scope_visitor 49
#define COLOR_nitc__parser_nodes__AParam___n_id 6
val* NEW_nitc__Variable(const struct type* type);
extern const struct type type_nitc__Variable;
#define COLOR_nitc__scope__Variable__name_61d 12
short int nitc__scope___nitc__scope__ScopeVisitor___register_variable(val* self, val* p0, val* p1);
#define COLOR_nitc__scope__AVardeclExpr___variable 17
#define COLOR_nitc__scope___AVardeclExpr___ANode__accept_scope_visitor 76
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_id 13
#define COLOR_nitc__scope__ASelfExpr___variable 14
#define COLOR_nitc__scope___ASelfExpr___ANode__accept_scope_visitor 69
#define COLOR_nitc__scope__AEscapeExpr___escapemark 14
#define COLOR_nitc__scope___AContinueExpr___ANode__accept_scope_visitor 74
#define COLOR_nitc__parser_nodes__ALabelable___n_label 12
val* nitc__scope___nitc__scope__ScopeVisitor___get_escapemark(val* self, val* p0, val* p1);
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__scope___ABreakExpr___ANode__accept_scope_visitor 75
#define COLOR_nitc__scope__ADoExpr___break_mark 15
val* nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(val* self, val* p0, short int p1);
#define COLOR_nitc__parser_nodes__ADoExpr___n_block 14
void nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AIfExpr___n_expr 13
#define COLOR_nitc__parser_nodes__AIfExpr___n_then 15
#define COLOR_nitc__parser_nodes__AIfExpr___n_else 17
#define COLOR_nitc__scope__AWhileExpr___break_mark 17
#define COLOR_nitc__scope__AWhileExpr___continue_mark 18
#define COLOR_nitc__parser_nodes__AWhileExpr___n_expr 14
#define COLOR_nitc__parser_nodes__AWhileExpr___n_block 16
#define COLOR_nitc__scope__ALoopExpr___break_mark 15
#define COLOR_nitc__scope__ALoopExpr___continue_mark 16
#define COLOR_nitc__parser_nodes__ALoopExpr___n_block 14
#define COLOR_nitc__scope__AForExpr___break_mark 17
#define COLOR_nitc__scope__AForExpr___continue_mark 18
#define COLOR_nitc__parser_nodes__AForExpr___n_groups 14
val* nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_nitc__parser_nodes__AForGroup___n_expr 7
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__nitc__Variable;
void core___core__Array___core__kernel__Object__init(val* self);
#define COLOR_nitc__scope__AForGroup___variables 17
#define COLOR_nitc__parser_nodes__AForGroup___n_ids 5
#define COLOR_nitc__parser_nodes__AForExpr___n_block 16
#define COLOR_nitc__scope__AWithExpr___break_mark 19
#define COLOR_nitc__parser_nodes__AWithExpr___n_expr 14
#define COLOR_nitc__parser_nodes__AWithExpr___n_block 16
#define COLOR_nitc__parser_nodes__AAssertExpr___n_expr 14
#define COLOR_nitc__parser_nodes__AAssertExpr___n_else 16
#define COLOR_nitc__scope__AVarFormExpr___variable 13
#define COLOR_nitc__parser_nodes__ASendExpr___n_expr 12
extern const struct type type_nitc__AImplicitSelfExpr;
#define COLOR_nitc__parser_nodes__ACallFormExpr___n_qid 18
#define COLOR_nitc__parser_nodes__AQid___n_id 6
#define COLOR_nitc__parser_nodes__ACallFormExpr___n_args 19
#define COLOR_nitc__parser_nodes__AExprs___n_exprs 5
short int nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(val* self);
extern const struct type type_nitc__AParExprs;
#define COLOR_nitc__scope__ACallFormExpr__variable_create 85
void nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(val* self, val* p0);
void nitc__scope___ANode___accept_scope_visitor(val* self, val* p0);
#define COLOR_nitc__scope___ACallFormExpr___ANode__accept_scope_visitor 88
val* NEW_nitc__AVarExpr(const struct type* type);
extern const struct type type_nitc__AVarExpr;
void nitc__parser_prod___AVarExpr___init_avarexpr(val* self, val* p0);
val* NEW_nitc__AVarAssignExpr(const struct type* type);
extern const struct type type_nitc__AVarAssignExpr;
#define COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign 14
#define COLOR_nitc__parser_nodes__AAssignFormExpr___n_value 15
void nitc__parser_prod___AVarAssignExpr___init_avarassignexpr(val* self, val* p0, val* p1, val* p2);
val* NEW_nitc__AVarReassignExpr(const struct type* type);
extern const struct type type_nitc__AVarReassignExpr;
#define COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op 14
#define COLOR_nitc__parser_nodes__AReassignFormExpr___n_value 15
void nitc__parser_prod___AVarReassignExpr___init_avarreassignexpr(val* self, val* p0, val* p1, val* p2);
