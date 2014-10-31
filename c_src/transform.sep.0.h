#include "nit.common.h"
#define COLOR_transform__ToolContext___opt_no_shortcut_range 43
#define COLOR_transform__ToolContext__init 141
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 74
void opts__OptionContext__add_option(val* self, val* p0);
void transform__ToolContext__init(val* self);
val* NEW_transform__TransformVisitor(const struct type* type);
extern const struct type type_transform__TransformVisitor;
void transform__TransformVisitor__init(val* self, val* p0, val* p1);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
val* NEW_astvalidation__ASTValidationVisitor(const struct type* type);
extern const struct type type_astvalidation__ASTValidationVisitor;
#define COLOR_kernel__Object__init 7
void transform__TransformPhase__process_npropdef(val* self, val* p0);
#define COLOR_transform__TransformVisitor___phase 1
#define COLOR_transform__TransformVisitor___mmodule 2
#define COLOR_transform__TransformVisitor___mclassdef 3
#define COLOR_transform__TransformVisitor___mpropdef 4
#define COLOR_transform__TransformVisitor___builder 5
#define COLOR_modelize_property__APropdef___mpropdef 9
#define COLOR_model__MPropDef___mclassdef 3
#define COLOR_model__MClassDef___mmodule 2
val* NEW_astbuilder__ASTBuilder(const struct type* type);
extern const struct type type_astbuilder__ASTBuilder;
#define COLOR_model__MClassDef___bound_mtype 4
#define COLOR_astbuilder__ASTBuilder__mmodule_61d 32
#define COLOR_astbuilder__ASTBuilder__anchor_61d 34
extern const struct type type_parser_nodes__AAnnotations;
#define COLOR_parser_nodes__ANode__visit_all 39
#define COLOR_transform__ANode__accept_transform_visitor 47
void transform__TransformVisitor__visit(val* self, val* p0);
#define COLOR_parser_nodes__AVardeclExpr___n_expr 13
#define COLOR_scope__AVardeclExpr___variable 14
val* astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1);
void parser_nodes__Prod__replace_with(val* self, val* p0);
void transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AIfexprExpr___n_expr 10
#define COLOR_typing__AExpr___mtype 5
val* astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfexprExpr___n_then 12
#define COLOR_astbuilder__AExpr__add 70
#define COLOR_parser_nodes__AIfExpr___n_else 12
#define COLOR_parser_nodes__AIfexprExpr___n_else 14
void transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AOrExpr___n_expr 9
val* astbuilder__AExpr__make_var_read(val* self);
#define COLOR_parser_nodes__AOrExpr___n_expr2 10
void transform__AOrExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AAndExpr___n_expr 9
#define COLOR_parser_nodes__AAndExpr___n_expr2 10
void transform__AAndExpr__accept_transform_visitor(val* self, val* p0);
val* astbuilder__ASTBuilder__make_loop(val* self);
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
void astbuilder__ALoopExpr__add(val* self, val* p0);
#define COLOR_parser_nodes__AWhileExpr___n_block 13
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_scope__AWhileExpr___break_mark 14
val* astbuilder__ASTBuilder__make_break(val* self, val* p0);
#define COLOR_scope__ALoopExpr___break_mark 12
#define COLOR_scope__AWhileExpr___continue_mark 15
#define COLOR_scope__ALoopExpr___continue_mark 13
void transform__AWhileExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_scope__AForExpr___break_mark 16
val* astbuilder__ASTBuilder__make_block(val* self);
#define COLOR_parser_nodes__AForExpr___n_expr 12
#define COLOR_scope__AForExpr___variables 15
#define COLOR_array__AbstractArrayRead___length 0
extern const struct type type_parser_nodes__ARangeExpr;
#define COLOR_phase__Phase___toolcontext 0
#define COLOR_opts__Option___value 6
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_parser_nodes__ARangeExpr___n_expr 9
void astbuilder__ABlockExpr__add(val* self, val* p0);
#define COLOR_parser_nodes__ARangeExpr___n_expr2 10
#define COLOR_typing__Variable___declared_type 3
val* astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1);
#define COLOR_typing__AForExpr___method_lt 25
extern const struct type type_array__Arrayparser_nodes__AVarExpr;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
val* astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2);
val* astbuilder__ASTBuilder__make_do(val* self);
#define COLOR_scope__EscapeMark___continue_mark 1
#define COLOR_scope__ADoExpr___break_mark 12
#define COLOR_parser_nodes__AForExpr___n_block 14
void astbuilder__ADoExpr__add(val* self, val* p0);
val* astbuilder__ASTBuilder__make_int(val* self, long p0);
#define COLOR_typing__AForExpr___method_successor 26
extern const struct type type_array__Arrayparser_nodes__AIntExpr;
#define COLOR_typing__AForExpr___method_iterator 19
#define COLOR_typing__AForExpr___method_is_ok 20
#define COLOR_typing__AForExpr___method_item 21
#define COLOR_typing__AForExpr___method_key 23
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_typing__AForExpr___method_next 22
#define COLOR_typing__AForExpr___method_finish 24
void transform__AForExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_typing__AArrayExpr___with_capacity_callsite 13
#define COLOR_parser_nodes__AArrayExpr___n_exprs 10
#define COLOR_parser_nodes__AExprs___n_exprs 4
long parser_nodes__ANodes__length(val* self);
val* astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1);
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
#define COLOR_typing__AArrayExpr___push_callsite 14
extern const struct type type_array__Arrayparser_nodes__AExpr;
#define COLOR_abstract_collection__Iterator__next 32
void transform__AArrayExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__ANode___parent 1
extern const struct type type_parser_nodes__AForExpr;
#define COLOR_typing__ARangeExpr___init_callsite 11
void transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0);
void transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AParExpr___n_expr 10
void transform__AParExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__ASendExpr___n_expr 9
val* typing__ASendExpr__raw_arguments(val* self);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
void array__Array__add(val* self, val* p0);
void array__ArrayIterator__next(val* self);
#define COLOR_typing__ASendExpr___callsite 10
#define COLOR_typing__AReassignFormExpr___reassign_callsite 13
#define COLOR_parser_nodes__AReassignFormExpr___n_value 12
#define COLOR_typing__ASendReassignFormExpr___write_callsite 17
void transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_scope__AVarFormExpr___variable 10
#define COLOR_typing__AReassignFormExpr___read_type 14
void transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AAttrFormExpr___n_expr 9
#define COLOR_typing__AAttrFormExpr___mproperty 15
val* astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2);
void transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0);
