#include "nit.common.h"
#define COLOR_nitc__transform__ToolContext___opt_no_shortcut_range 48
extern const char FILE_nitc__transform[];
#define COLOR_nitc__transform___ToolContext___core__kernel__Object__init 148
#define COLOR_nitc__toolcontext__ToolContext___option_context 15
extern const char FILE_nitc__toolcontext[];
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__opts__Option;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__opts__Option;
#define COLOR_core__array__Array__with_native 32
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_nitc__modelize_property__APropdef___mpropdef 3
val* NEW_nitc__transform__TransformVisitor(const struct type* type);
extern const struct type type_nitc__transform__TransformVisitor;
#define COLOR_nitc__transform__TransformVisitor__phase_61d 15
#define COLOR_nitc__transform__TransformVisitor__mpropdef_61d 16
#define COLOR_core__kernel__Object__init 0
void nitc___nitc__Visitor___enter_visit(val* self, val* p0);
val* NEW_nitc__ASTValidationVisitor(const struct type* type);
extern const struct type type_nitc__ASTValidationVisitor;
#define COLOR_nitc__transform__TransformVisitor___phase 1
#define COLOR_nitc__transform__TransformVisitor___mmodule 2
#define COLOR_nitc__transform__TransformVisitor___mclassdef 3
#define COLOR_nitc__transform__TransformVisitor___mpropdef 4
#define COLOR_nitc__transform__TransformVisitor___builder 5
#define COLOR_nitc__transform___nitc__transform__TransformVisitor___core__kernel__Object__init 25
#define COLOR_nitc__model__MPropDef___mclassdef 7
extern const char FILE_nitc__model[];
#define COLOR_nitc__model__MClassDef___mmodule 7
val* NEW_nitc__ASTBuilder(const struct type* type);
extern const struct type type_nitc__ASTBuilder;
#define COLOR_nitc__model__MClassDef___bound_mtype 9
#define COLOR_nitc__astbuilder__ASTBuilder__mmodule_61d 12
#define COLOR_nitc__astbuilder__ASTBuilder__anchor_61d 13
extern const struct type type_nitc__AAnnotations;
#define COLOR_nitc__transform__ANode__full_transform_visitor 21
#define COLOR_nitc__parser_nodes__ANode__visit_all 14
#define COLOR_nitc__transform__ANode__accept_transform_visitor 28
#define COLOR_nitc__typing__AExpr___comprehension 15
#define COLOR_core__kernel__Object___61d_61d 4
val* nitc__astbuilder___AExpr___detach_with_placeholder(val* self);
#define COLOR_nitc__transform__AArrayExpr___nnew 7
val* nitc__astbuilder___AExpr___make_var_read(val* self);
#define COLOR_nitc__typing__AArrayExpr___push_callsite 18
extern const struct type type_core__Array__nitc__AExpr;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
val* nitc___nitc__ASTBuilder___make_call(val* self, val* p0, val* p1, val* p2);
void nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(val* self, val* p0);
#define COLOR_nitc__modelbuilder_base__ANode___is_broken 0
#define COLOR_nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with 72
extern const struct type type_nitc__AExpr;
#define COLOR_nitc__typing__AExpr___implicit_cast_to 14
#define COLOR_nitc__typing__AExpr___vararg_decl 16
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_expr 7
#define COLOR_nitc__scope__AVardeclExpr___variable 8
val* nitc___nitc__ASTBuilder___make_var_assign(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_expr 4
extern const char FILE_nitc__parser_nodes[];
#define COLOR_nitc__typing__AExpr___mtype 12
val* nitc___nitc__ASTBuilder___make_if(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AIfExpr___n_then 6
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_then 6
#define COLOR_nitc__astbuilder__AExpr__add 57
#define COLOR_nitc__parser_nodes__AIfExpr___n_else 8
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_else 8
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr 3
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2 5
val* nitc___nitc__ASTBuilder___make_loop(val* self);
#define COLOR_nitc__parser_nodes__AWhileExpr___n_expr 5
void nitc__astbuilder___ALoopExpr___AExpr__add(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AWhileExpr___n_block 7
#define COLOR_nitc__scope__AWhileExpr___break_mark 8
val* nitc___nitc__ASTBuilder___make_break(val* self, val* p0);
#define COLOR_nitc__scope__ALoopExpr___break_mark 6
#define COLOR_nitc__scope__AWhileExpr___continue_mark 18
#define COLOR_nitc__scope__ALoopExpr___continue_mark 7
#define COLOR_nitc__scope__AForExpr___break_mark 8
val* nitc___nitc__ASTBuilder___make_block(val* self);
void nitc__astbuilder___ABlockExpr___AExpr__add(val* self, val* p0);
val* nitc___nitc__ASTBuilder___make_do(val* self);
#define COLOR_nitc__scope__EscapeMark___continue_mark 1
#define COLOR_nitc__scope__ADoExpr___break_mark 8
#define COLOR_nitc__parser_nodes__AForExpr___n_block 7
void nitc__astbuilder___ADoExpr___AExpr__add(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AForExpr___n_groups 5
val* nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
void nitc__transform___AForGroup___transform_in(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5);
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
#define COLOR_nitc__parser_nodes__AForGroup___n_expr 5
#define COLOR_nitc__scope__AForGroup___variables 17
extern const char FILE_core__array[];
#define COLOR_core__array__AbstractArrayRead___length 0
extern const struct type type_nitc__ARangeExpr;
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
#define COLOR_opts__Option___value 6
val* core___core__SequenceRead___Collection__first(val* self);
#define COLOR_nitc__parser_nodes__ARangeExpr___n_expr 3
#define COLOR_nitc__parser_nodes__ARangeExpr___n_expr2 5
#define COLOR_nitc__typing__Variable___declared_type 0
val* nitc___nitc__ASTBuilder___make_var_read(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__AForGroup___method_lt 15
extern const struct type type_core__Array__nitc__AVarExpr;
val* nitc___nitc__ASTBuilder___make_int(val* self, long p0);
#define COLOR_nitc__typing__AForGroup___method_successor 16
extern const struct type type_core__Array__nitc__AIntegerExpr;
#define COLOR_nitc__typing__AForGroup___method_iterator 7
#define COLOR_nitc__typing__AForGroup___method_is_ok 8
#define COLOR_nitc__typing__AForGroup___method_item 11
#define COLOR_nitc__typing__AForGroup___method_key 13
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nitc__typing__AForGroup___method_next 12
#define COLOR_nitc__typing__AForGroup___method_finish 14
#define COLOR_nitc__scope__AWithExpr___break_mark 19
#define COLOR_nitc__parser_nodes__AWithExpr___n_expr 5
#define COLOR_nitc__typing__AWithExpr___method_start 8
#define COLOR_nitc__parser_nodes__AWithExpr___n_block 7
#define COLOR_nitc__typing__AWithExpr___method_finish 18
#define COLOR_nitc__typing__AArrayExpr___with_capacity_callsite 8
#define COLOR_nitc__parser_nodes__AArrayExpr___n_exprs 4
long nitc___nitc__ANodes___core__abstract_collection__Collection__length(val* self);
val* nitc___nitc__ASTBuilder___make_new(val* self, val* p0, val* p1);
#define COLOR_nitc__transform___AArrayExpr___ANode__full_transform_visitor 81
#define COLOR_nitc__parser_nodes__ANode___parent 2
extern const struct type type_nitc__AForGroup;
#define COLOR_nitc__typing__ARangeExpr___init_callsite 6
#define COLOR_nitc__parser_nodes__AParExpr___n_expr 4
#define COLOR_nitc__parser_nodes__ASendExpr___n_expr 3
void core___core__Array___core__kernel__Object__init(val* self);
val* nitc__typing___ASendExpr___raw_arguments(val* self);
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__typing__ASendExpr___callsite 4
#define COLOR_nitc__typing__AReassignFormExpr___reassign_callsite 7
#define COLOR_nitc__parser_nodes__AReassignFormExpr___n_value 6
#define COLOR_nitc__typing__ASendReassignFormExpr___write_callsite 20
#define COLOR_nitc__scope__AVarFormExpr___variable 4
#define COLOR_nitc__typing__AReassignFormExpr___read_type 8
#define COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr 3
#define COLOR_nitc__typing__AAttrFormExpr___mproperty 18
val* nitc___nitc__ASTBuilder___make_attr_read(val* self, val* p0, val* p1);
val* nitc___nitc__ASTBuilder___make_attr_assign(val* self, val* p0, val* p1, val* p2);
