#include "nit.common.h"
#define COLOR_nit__scope__ToolContext___scope_phase 48
extern const char FILE_nit__scope[];
#define COLOR_nit__phase__Phase___toolcontext 0
extern const char FILE_nit__phase[];
void nit__scope___APropdef___do_scope(val* self, val* p0);
#define COLOR_nit__scope__Variable___name 2
#define COLOR_nit__scope__Variable___location 3
#define COLOR_nit__scope__Variable___warn_unread 4
#define COLOR_nit___nit__Variable___standard__kernel__Object__init 26
#define COLOR_nit__scope__EscapeMark___name 0
#define COLOR_nit__scope__EscapeMark___continue_mark 1
#define COLOR_nit__scope__EscapeMark___escapes 2
#define COLOR_nit___nit__EscapeMark___standard__kernel__Object__init 21
#define COLOR_nit__scope__ScopeVisitor___toolcontext 1
#define COLOR_nit__scope__ScopeVisitor___selfvariable 2
#define COLOR_nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init 31
#define COLOR_nit__scope__ScopeVisitor___scopes 3
val* NEW_nit__scope__Scope(const struct type* type);
extern const struct type type_nit__scope__Scope;
void standard___standard__Sequence___SimpleCollection__add(val* self, val* p0);
short int standard___standard__List___standard__abstract_collection__Collection__is_empty(val* self);
val* standard___standard__List___standard__abstract_collection__Sequence__shift(val* self);
#define COLOR_nit__scope__Scope___variables 0
val* standard___standard__HashMap___standard__abstract_collection__MapRead__values(val* self);
#define COLOR_standard__abstract_collection__Collection__iterator 25
#define COLOR_standard__abstract_collection__Iterator__is_ok 16
#define COLOR_standard__abstract_collection__Iterator__item 17
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__String;
#define COLOR_standard__string__NativeArray__native_to_s 16
val* nit___nit__ToolContext___advice(val* self, val* p0, val* p1, val* p2);
#define COLOR_standard__abstract_collection__Iterator__next 18
#define COLOR_standard__abstract_collection__Iterator__finish 19
val* nit__scope___nit__scope__ScopeVisitor___search_variable(val* self, val* p0);
#define COLOR_standard__kernel__Object___61d_61d 4
void nit__scope___nit__scope__ScopeVisitor___error(val* self, val* p0, val* p1);
val* standard___standard__List___standard__abstract_collection__Collection__first(val* self);
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__ANode___location 0
extern const char FILE_nit__parser_nodes[];
val* standard___standard__List___standard__abstract_collection__Collection__iterator(val* self);
short int standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard___standard__ListIterator___standard__abstract_collection__Iterator__item(val* self);
val* nit__scope___nit__scope__Scope___get_variable(val* self, val* p0);
void standard___standard__ListIterator___standard__abstract_collection__Iterator__next(val* self);
#define COLOR_nit__scope__ANode__accept_scope_visitor 26
#define COLOR_nit__scope__Scope___escapemark 1
void standard___standard__List___standard__abstract_collection__Sequence__unshift(val* self, val* p0);
void nit___nit__Visitor___enter_visit(val* self, val* p0);
void nit__scope___nit__scope__ScopeVisitor___shift_scope(val* self);
#define COLOR_nit__parser_nodes__ALabel___n_id 5
val* nit__scope___nit__scope__ScopeVisitor___search_label(val* self, val* p0);
val* nit__lexer_work___Token___text(val* self);
val* NEW_nit__EscapeMark(const struct type* type);
extern const struct type type_nit__EscapeMark;
#define COLOR_nit__scope__EscapeMark__name_61d 18
#define COLOR_standard__kernel__Object__init 0
#define COLOR_nit__parser_nodes__ANode__hot_location 18
val* nit___nit__ToolContext___error(val* self, val* p0, val* p1);
short int standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(val* self, val* p0);
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_nit__parser_nodes__ANode__visit_all 20
val* NEW_nit__scope__ScopeVisitor(const struct type* type);
extern const struct type type_nit__scope__ScopeVisitor;
#define COLOR_nit__scope__ScopeVisitor__toolcontext_61d 19
#define COLOR_nit__scope__AParam___variable 8
#define COLOR_nit__scope___AParam___ANode__accept_scope_visitor 50
#define COLOR_nit__parser_nodes__AParam___n_id 5
val* NEW_nit__Variable(const struct type* type);
extern const struct type type_nit__Variable;
#define COLOR_nit__scope__Variable__name_61d 16
short int nit__scope___nit__scope__ScopeVisitor___register_variable(val* self, val* p0, val* p1);
#define COLOR_nit__scope__AVardeclExpr___variable 15
#define COLOR_nit__scope___AVardeclExpr___ANode__accept_scope_visitor 74
#define COLOR_nit__parser_nodes__AVardeclExpr___n_id 11
#define COLOR_nit__scope__ASelfExpr___variable 12
#define COLOR_nit__scope___ASelfExpr___ANode__accept_scope_visitor 67
#define COLOR_nit__scope__AEscapeExpr___escapemark 12
#define COLOR_nit__scope___AContinueExpr___ANode__accept_scope_visitor 72
#define COLOR_nit__parser_nodes__ALabelable___n_label 10
val* nit__scope___nit__scope__ScopeVisitor___get_escapemark(val* self, val* p0, val* p1);
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nit__scope___ABreakExpr___ANode__accept_scope_visitor 73
#define COLOR_nit__scope__ADoExpr___break_mark 13
val* nit__scope___nit__scope__ScopeVisitor___make_escape_mark(val* self, val* p0, short int p1);
#define COLOR_nit__parser_nodes__ADoExpr___n_block 12
void nit__scope___nit__scope__ScopeVisitor___enter_visit_block(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AIfExpr___n_expr 11
#define COLOR_nit__parser_nodes__AIfExpr___n_then 13
#define COLOR_nit__parser_nodes__AIfExpr___n_else 15
#define COLOR_nit__scope__AWhileExpr___break_mark 15
#define COLOR_nit__scope__AWhileExpr___continue_mark 16
#define COLOR_nit__parser_nodes__AWhileExpr___n_expr 12
#define COLOR_nit__parser_nodes__AWhileExpr___n_block 14
#define COLOR_nit__scope__ALoopExpr___break_mark 13
#define COLOR_nit__scope__ALoopExpr___continue_mark 14
#define COLOR_nit__parser_nodes__ALoopExpr___n_block 12
#define COLOR_nit__scope__AForExpr___variables 26
#define COLOR_nit__scope__AForExpr___break_mark 27
#define COLOR_nit__scope__AForExpr___continue_mark 28
#define COLOR_nit__parser_nodes__AForExpr___n_expr 14
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__nit__Variable;
void standard___standard__Array___standard__kernel__Object__init(val* self);
#define COLOR_nit__parser_nodes__AForExpr___n_ids 12
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self);
#define COLOR_nit__parser_nodes__AForExpr___n_block 16
#define COLOR_nit__scope__AWithExpr___break_mark 17
#define COLOR_nit__parser_nodes__AWithExpr___n_expr 12
#define COLOR_nit__parser_nodes__AWithExpr___n_block 14
#define COLOR_nit__parser_nodes__AAssertExpr___n_expr 12
#define COLOR_nit__parser_nodes__AAssertExpr___n_else 14
#define COLOR_nit__scope__AVarFormExpr___variable 11
#define COLOR_nit__parser_nodes__ASendExpr___n_expr 10
extern const struct type type_nit__AImplicitSelfExpr;
#define COLOR_nit__parser_nodes__ACallFormExpr___n_id 16
#define COLOR_nit__parser_nodes__ACallFormExpr___n_args 17
#define COLOR_nit__parser_nodes__AExprs___n_exprs 4
short int nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(val* self);
extern const struct type type_nit__AParExprs;
#define COLOR_nit__scope__ACallFormExpr__variable_create 83
void nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(val* self, val* p0);
void nit__scope___ANode___accept_scope_visitor(val* self, val* p0);
#define COLOR_nit__scope___ACallFormExpr___ANode__accept_scope_visitor 86
val* NEW_nit__AVarExpr(const struct type* type);
extern const struct type type_nit__AVarExpr;
void nit__parser_prod___AVarExpr___init_avarexpr(val* self, val* p0);
val* NEW_nit__AVarAssignExpr(const struct type* type);
extern const struct type type_nit__AVarAssignExpr;
#define COLOR_nit__parser_nodes__AAssignFormExpr___n_assign 12
#define COLOR_nit__parser_nodes__AAssignFormExpr___n_value 13
void nit__parser_prod___AVarAssignExpr___init_avarassignexpr(val* self, val* p0, val* p1, val* p2);
val* NEW_nit__AVarReassignExpr(const struct type* type);
extern const struct type type_nit__AVarReassignExpr;
#define COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op 12
#define COLOR_nit__parser_nodes__AReassignFormExpr___n_value 13
void nit__parser_prod___AVarReassignExpr___init_avarreassignexpr(val* self, val* p0, val* p1, val* p2);
