#include "nit.common.h"
#define COLOR_nit__transform__ToolContext___opt_no_shortcut_range 50
extern const char FILE_nit__transform[];
#define COLOR_nit__transform___ToolContext___standard__kernel__Object__init 151
#define COLOR_nit__toolcontext__ToolContext___option_context 7
extern const char FILE_nit__toolcontext[];
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__opts__Option;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__opts__Option;
#define COLOR_standard__array__Array__with_native 73
void opts___opts__OptionContext___add_option(val* self, val* p0);
val* NEW_nit__transform__TransformVisitor(const struct type* type);
extern const struct type type_nit__transform__TransformVisitor;
#define COLOR_nit__modelize_property__APropdef___mpropdef 16
#define COLOR_nit__transform__TransformVisitor__phase_61d 36
#define COLOR_nit__transform__TransformVisitor__mpropdef_61d 42
#define COLOR_standard__kernel__Object__init 7
void nit___nit__Visitor___enter_visit(val* self, val* p0);
val* NEW_nit__ASTValidationVisitor(const struct type* type);
extern const struct type type_nit__ASTValidationVisitor;
#define COLOR_nit__transform__TransformVisitor___phase 1
#define COLOR_nit__transform__TransformVisitor___mmodule 2
#define COLOR_nit__transform__TransformVisitor___mclassdef 3
#define COLOR_nit__transform__TransformVisitor___mpropdef 4
#define COLOR_nit__transform__TransformVisitor___builder 5
#define COLOR_nit__transform___nit__transform__TransformVisitor___standard__kernel__Object__init 45
#define COLOR_nit__model__MPropDef___mclassdef 4
extern const char FILE_nit__model[];
#define COLOR_nit__model__MClassDef___mmodule 4
val* NEW_nit__ASTBuilder(const struct type* type);
extern const struct type type_nit__ASTBuilder;
#define COLOR_nit__model__MClassDef___bound_mtype 6
#define COLOR_nit__astbuilder__ASTBuilder__mmodule_61d 33
#define COLOR_nit__astbuilder__ASTBuilder__anchor_61d 35
extern const struct type type_nit__AAnnotations;
#define COLOR_nit__transform__ANode__full_transform_visitor 48
#define COLOR_nit__parser_nodes__ANode__visit_all 40
#define COLOR_nit__transform__ANode__accept_transform_visitor 49
#define COLOR_nit__typing__AExpr___comprehension 8
#define COLOR_standard__kernel__Object___61d_61d 2
val* nit__astbuilder___AExpr___detach_with_placeholder(val* self);
#define COLOR_nit__transform__AArrayExpr___nnew 17
val* nit__astbuilder___AExpr___make_var_read(val* self);
#define COLOR_nit__typing__AArrayExpr___push_callsite 15
extern const struct type type_standard__Array__nit__AExpr;
void standard___standard__Array___with_capacity(val* self, long p0);
void standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(val* self, val* p0);
val* nit___nit__ASTBuilder___make_call(val* self, val* p0, val* p1, val* p2);
void nit___nit__Prod___ANode__replace_with(val* self, val* p0);
#define COLOR_nit__transform___AExpr___ANode__full_transform_visitor 77
#define COLOR_nit__parser_nodes__AVardeclExpr___n_expr 14
#define COLOR_nit__scope__AVardeclExpr___variable 15
val* nit___nit__ASTBuilder___make_var_assign(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AIfexprExpr___n_expr 11
extern const char FILE_nit__parser_nodes[];
#define COLOR_nit__typing__AExpr___mtype 5
val* nit___nit__ASTBuilder___make_if(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AIfExpr___n_then 12
#define COLOR_nit__parser_nodes__AIfexprExpr___n_then 13
#define COLOR_nit__astbuilder__AExpr__add 74
#define COLOR_nit__parser_nodes__AIfExpr___n_else 13
#define COLOR_nit__parser_nodes__AIfexprExpr___n_else 15
#define COLOR_nit__parser_nodes__ABinBoolExpr___n_expr 10
#define COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2 11
val* nit___nit__ASTBuilder___make_loop(val* self);
#define COLOR_nit__parser_nodes__AWhileExpr___n_expr 12
void nit__astbuilder___ALoopExpr___AExpr__add(val* self, val* p0);
#define COLOR_nit__parser_nodes__AWhileExpr___n_block 14
#define COLOR_nit__scope__AWhileExpr___break_mark 15
val* nit___nit__ASTBuilder___make_break(val* self, val* p0);
#define COLOR_nit__scope__ALoopExpr___break_mark 13
#define COLOR_nit__scope__AWhileExpr___continue_mark 16
#define COLOR_nit__scope__ALoopExpr___continue_mark 14
#define COLOR_nit__scope__AForExpr___break_mark 17
val* nit___nit__ASTBuilder___make_block(val* self);
#define COLOR_nit__parser_nodes__AForExpr___n_expr 13
#define COLOR_nit__scope__AForExpr___variables 16
extern const char FILE_standard__array[];
#define COLOR_standard__array__AbstractArrayRead___length 0
extern const struct type type_nit__ARangeExpr;
#define COLOR_nit__phase__Phase___toolcontext 0
extern const char FILE_nit__phase[];
#define COLOR_opts__Option___value 6
val* standard___standard__SequenceRead___Collection__first(val* self);
#define COLOR_nit__parser_nodes__ARangeExpr___n_expr 10
void nit__astbuilder___ABlockExpr___AExpr__add(val* self, val* p0);
#define COLOR_nit__parser_nodes__ARangeExpr___n_expr2 11
#define COLOR_nit__typing__Variable___declared_type 3
val* nit___nit__ASTBuilder___make_var_read(val* self, val* p0, val* p1);
#define COLOR_nit__typing__AForExpr___method_lt 26
extern const struct type type_standard__Array__nit__AVarExpr;
val* nit___nit__ASTBuilder___make_do(val* self);
#define COLOR_nit__scope__EscapeMark___continue_mark 1
#define COLOR_nit__scope__ADoExpr___break_mark 13
#define COLOR_nit__parser_nodes__AForExpr___n_block 15
void nit__astbuilder___ADoExpr___AExpr__add(val* self, val* p0);
val* nit___nit__ASTBuilder___make_int(val* self, long p0);
#define COLOR_nit__typing__AForExpr___method_successor 27
extern const struct type type_standard__Array__nit__AIntExpr;
#define COLOR_nit__typing__AForExpr___method_iterator 20
#define COLOR_nit__typing__AForExpr___method_is_ok 21
#define COLOR_nit__typing__AForExpr___method_item 22
#define COLOR_nit__typing__AForExpr___method_key 24
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nit__typing__AForExpr___method_next 23
#define COLOR_nit__typing__AForExpr___method_finish 25
#define COLOR_nit__typing__AArrayExpr___with_capacity_callsite 14
#define COLOR_nit__parser_nodes__AArrayExpr___n_exprs 11
long nit___nit__ANodes___standard__abstract_collection__Collection__length(val* self);
val* nit___nit__ASTBuilder___make_new(val* self, val* p0, val* p1);
#define COLOR_nit__transform___AArrayExpr___ANode__full_transform_visitor 94
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self);
#define COLOR_standard__abstract_collection__Iterator__is_ok 34
#define COLOR_standard__abstract_collection__Iterator__item 32
#define COLOR_standard__abstract_collection__Iterator__next 33
#define COLOR_nit__parser_nodes__ANode___parent 1
extern const struct type type_nit__AForExpr;
#define COLOR_nit__typing__ARangeExpr___init_callsite 12
#define COLOR_nit__parser_nodes__AParExpr___n_expr 11
#define COLOR_nit__parser_nodes__ASendExpr___n_expr 10
void standard___standard__Array___standard__kernel__Object__init(val* self);
val* nit__typing___ASendExpr___raw_arguments(val* self);
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
#define COLOR_nit__typing__ASendExpr___callsite 11
#define COLOR_nit__typing__AReassignFormExpr___reassign_callsite 14
#define COLOR_nit__parser_nodes__AReassignFormExpr___n_value 13
#define COLOR_nit__typing__ASendReassignFormExpr___write_callsite 18
#define COLOR_nit__scope__AVarFormExpr___variable 11
#define COLOR_nit__typing__AReassignFormExpr___read_type 15
#define COLOR_nit__parser_nodes__AAttrFormExpr___n_expr 10
#define COLOR_nit__typing__AAttrFormExpr___mproperty 16
val* nit___nit__ASTBuilder___make_attr_read(val* self, val* p0, val* p1);
val* nit___nit__ASTBuilder___make_attr_assign(val* self, val* p0, val* p1, val* p2);
