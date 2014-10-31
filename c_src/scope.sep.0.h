#include "nit.common.h"
#define COLOR_scope__ToolContext___scope_phase 27
#define COLOR_phase__Phase___toolcontext 0
void scope__APropdef__do_scope(val* self, val* p0);
void scope__ScopePhase__process_npropdef(val* self, val* p0);
#define COLOR_scope__Variable___name 0
val* scope__Variable__to_s(val* self);
#define COLOR_scope__Variable___location 1
#define COLOR_scope__Variable___warn_unread 2
#define COLOR_scope__Variable__init 39
#define COLOR_scope__EscapeMark___name 0
#define COLOR_scope__EscapeMark___continue_mark 1
#define COLOR_scope__EscapeMark___escapes 2
#define COLOR_scope__EscapeMark__init 36
#define COLOR_scope__ScopeVisitor___toolcontext 1
#define COLOR_scope__ScopeVisitor___selfvariable 2
#define COLOR_kernel__Object__init 7
#define COLOR_scope__ScopeVisitor___scopes 3
val* NEW_scope__Scope(const struct type* type);
extern const struct type type_scope__Scope;
void abstract_collection__Sequence__add(val* self, val* p0);
void scope__ScopeVisitor__init(val* self, val* p0);
short int list__List__is_empty(val* self);
val* list__List__shift(val* self);
#define COLOR_scope__Scope___variables 0
#define COLOR_hash_collection__HashMap___values 8
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
val* string__NativeString__to_s_with_length(char* self, long p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void toolcontext__ToolContext__advice(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_collection__Iterator__next 32
void scope__ScopeVisitor__shift_scope(val* self);
val* scope__ScopeVisitor__search_variable(val* self, val* p0);
#define COLOR_kernel__Object___61d_61d 2
void scope__ScopeVisitor__error(val* self, val* p0, val* p1);
val* list__List__first(val* self);
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__ANode___location 0
short int scope__ScopeVisitor__register_variable(val* self, val* p0, val* p1);
val* list__List__iterator(val* self);
short int list__ListIterator__is_ok(val* self);
val* list__ListIterator__item(val* self);
val* scope__Scope__get_variable(val* self, val* p0);
void list__ListIterator__next(val* self);
#define COLOR_scope__ANode__accept_scope_visitor 41
void scope__ScopeVisitor__visit(val* self, val* p0);
#define COLOR_scope__Scope___escapemark 1
void list__List__unshift(val* self, val* p0);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
void scope__ScopeVisitor__enter_visit_block(val* self, val* p0, val* p1);
short int string__FlatString___61d_61d(val* self, val* p0);
val* scope__ScopeVisitor__search_label(val* self, val* p0);
#define COLOR_parser_nodes__ALabel___n_id 5
val* lexer_work__Token__text(val* self);
val* NEW_scope__EscapeMark(const struct type* type);
extern const struct type type_scope__EscapeMark;
#define COLOR_scope__EscapeMark__name_61d 32
val* scope__ScopeVisitor__make_escape_mark(val* self, val* p0, short int p1);
val* scope__ScopeVisitor__get_escapemark(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__ANode__hot_location 33
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
short int abstract_collection__MapRead__has_key(val* self, val* p0);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
#define COLOR_parser_nodes__ANode__visit_all 39
void scope__ANode__accept_scope_visitor(val* self, val* p0);
val* NEW_scope__ScopeVisitor(const struct type* type);
extern const struct type type_scope__ScopeVisitor;
#define COLOR_scope__AParam___variable 7
#define COLOR_scope__AParam__accept_scope_visitor 64
#define COLOR_parser_nodes__AParam___n_id 4
val* NEW_scope__Variable(const struct type* type);
extern const struct type type_scope__Variable;
#define COLOR_scope__Variable__name_61d 32
void scope__AParam__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__AVardeclExpr___variable 14
#define COLOR_scope__AVardeclExpr__accept_scope_visitor 85
#define COLOR_parser_nodes__AVardeclExpr___n_id 10
void scope__AVardeclExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__ASelfExpr___variable 10
#define COLOR_scope__ASelfExpr__accept_scope_visitor 79
void scope__ASelfExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__AEscapeExpr___escapemark 11
#define COLOR_scope__AContinueExpr__accept_scope_visitor 83
#define COLOR_parser_nodes__ALabelable___n_label 9
void array__Array__add(val* self, val* p0);
void scope__AContinueExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__ABreakExpr__accept_scope_visitor 84
void scope__ABreakExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__ADoExpr___break_mark 12
#define COLOR_parser_nodes__ADoExpr___n_block 11
void scope__ADoExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AIfExpr___n_expr 10
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfExpr___n_else 12
void scope__AIfExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__AWhileExpr___break_mark 14
#define COLOR_scope__AWhileExpr___continue_mark 15
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
#define COLOR_parser_nodes__AWhileExpr___n_block 13
void scope__AWhileExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__ALoopExpr___break_mark 12
#define COLOR_scope__ALoopExpr___continue_mark 13
#define COLOR_parser_nodes__ALoopExpr___n_block 11
void scope__ALoopExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__AForExpr___variables 15
#define COLOR_scope__AForExpr___break_mark 16
#define COLOR_scope__AForExpr___continue_mark 17
#define COLOR_parser_nodes__AForExpr___n_expr 12
extern const struct type type_array__Arrayscope__Variable;
#define COLOR_parser_nodes__AForExpr___n_ids 11
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_parser_nodes__AForExpr___n_block 14
void scope__AForExpr__accept_scope_visitor(val* self, val* p0);
#define COLOR_scope__AVarFormExpr___variable 10
#define COLOR_parser_nodes__ASendExpr___n_expr 9
extern const struct type type_parser_nodes__AImplicitSelfExpr;
#define COLOR_parser_nodes__ACallFormExpr___n_id 15
#define COLOR_parser_nodes__ACallFormExpr___n_args 16
#define COLOR_parser_nodes__AExprs___n_exprs 4
short int parser_nodes__ANodes__is_empty(val* self);
extern const struct type type_parser_nodes__AParExprs;
#define COLOR_scope__ACallFormExpr__variable_create 95
void parser_nodes__Prod__replace_with(val* self, val* p0);
#define COLOR_scope__ACallFormExpr__accept_scope_visitor 96
void scope__ACallFormExpr__accept_scope_visitor(val* self, val* p0);
val* NEW_parser_nodes__AVarExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarExpr;
void parser_prod__AVarExpr__init_avarexpr(val* self, val* p0);
val* scope__ACallExpr__variable_create(val* self, val* p0);
val* NEW_parser_nodes__AVarAssignExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarAssignExpr;
#define COLOR_parser_nodes__AAssignFormExpr___n_assign 11
#define COLOR_parser_nodes__AAssignFormExpr___n_value 12
void parser_prod__AVarAssignExpr__init_avarassignexpr(val* self, val* p0, val* p1, val* p2);
val* scope__ACallAssignExpr__variable_create(val* self, val* p0);
val* NEW_parser_nodes__AVarReassignExpr(const struct type* type);
extern const struct type type_parser_nodes__AVarReassignExpr;
#define COLOR_parser_nodes__AReassignFormExpr___n_assign_op 11
#define COLOR_parser_nodes__AReassignFormExpr___n_value 12
void parser_prod__AVarReassignExpr__init_avarreassignexpr(val* self, val* p0, val* p1, val* p2);
val* scope__ACallReassignExpr__variable_create(val* self, val* p0);
