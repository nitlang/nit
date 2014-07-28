#include "nit.common.h"
val* NEW_transform__TransformVisitor(const struct type* type);
extern const struct type type_transform__TransformVisitor;
void transform__TransformVisitor__init(val* self, val* p0, val* p1);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
val* NEW_astvalidation__ASTValidationVisitor(const struct type* type);
extern const struct type type_astvalidation__ASTValidationVisitor;
void transform__TransformPhase__process_npropdef(val* self, val* p0);
#define COLOR_transform__TransformVisitor___phase 1
#define COLOR_transform__TransformVisitor___mmodule 2
#define COLOR_transform__TransformVisitor___mclassdef 3
#define COLOR_transform__TransformVisitor___mpropdef 4
#define COLOR_transform__TransformVisitor___builder 5
#define COLOR_modelize_property__APropdef___mpropdef 9
#define COLOR_model__MPropDef___mclassdef 2
#define COLOR_model__MClassDef___mmodule 1
val* NEW_astbuilder__ASTBuilder(const struct type* type);
extern const struct type type_astbuilder__ASTBuilder;
#define COLOR_model__MClassDef___bound_mtype 3
#define COLOR_astbuilder__ASTBuilder___mmodule 0
#define COLOR_astbuilder__ASTBuilder___anchor 1
extern const struct type type_parser_nodes__AAnnotations;
#define COLOR_parser_nodes__ANode__visit_all 37
#define COLOR_transform__ANode__accept_transform_visitor 45
void transform__TransformVisitor__visit(val* self, val* p0);
val* parser_nodes__AVardeclExpr__n_expr(val* self);
#define COLOR_scope__AVardeclExpr___variable 14
val* astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1);
void parser_nodes__Prod__replace_with(val* self, val* p0);
void transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0);
val* parser_nodes__AIfexprExpr__n_expr(val* self);
#define COLOR_typing__AExpr___mtype 5
val* astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1);
val* parser_nodes__AIfExpr__n_then(val* self);
val* parser_nodes__AIfexprExpr__n_then(val* self);
#define COLOR_astbuilder__AExpr__add 67
val* parser_nodes__AIfExpr__n_else(val* self);
val* parser_nodes__AIfexprExpr__n_else(val* self);
void transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0);
val* parser_nodes__AOrExpr__n_expr(val* self);
val* astbuilder__AExpr__make_var_read(val* self);
val* parser_nodes__AOrExpr__n_expr2(val* self);
void transform__AOrExpr__accept_transform_visitor(val* self, val* p0);
val* parser_nodes__AAndExpr__n_expr(val* self);
val* parser_nodes__AAndExpr__n_expr2(val* self);
void transform__AAndExpr__accept_transform_visitor(val* self, val* p0);
val* astbuilder__ASTBuilder__make_block(val* self);
#define COLOR_typing__AArrayExpr___with_capacity_callsite 10
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayparser_nodes__AIntExpr;
void array__Array__with_capacity(val* self, long p0);
val* parser_nodes__AArrayExpr__n_exprs(val* self);
#define COLOR_parser_nodes__AExprs___n_exprs 4
long parser_nodes__ANodes__length(val* self);
val* astbuilder__ASTBuilder__make_int(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
val* astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1);
void astbuilder__ABlockExpr__add(val* self, val* p0);
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_typing__AArrayExpr___push_callsite 11
extern const struct type type_array__Arrayparser_nodes__AExpr;
val* astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_collection__Iterator__next 30
void transform__AArrayExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_typing__ARangeExpr___init_callsite 11
val* parser_nodes__ARangeExpr__n_expr(val* self);
val* parser_nodes__ARangeExpr__n_expr2(val* self);
void transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0);
void transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0);
val* parser_nodes__AProxyExpr__n_expr(val* self);
void transform__AParExpr__accept_transform_visitor(val* self, val* p0);
val* parser_nodes__ASendExpr__n_expr(val* self);
void array__Array__init(val* self);
val* typing__ASendExpr__raw_arguments(val* self);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
void array__Array__add(val* self, val* p0);
void array__ArrayIterator__next(val* self);
#define COLOR_typing__ASendExpr___callsite 10
#define COLOR_typing__AReassignFormExpr___reassign_callsite 13
val* parser_nodes__AReassignFormExpr__n_value(val* self);
#define COLOR_typing__ASendReassignFormExpr___write_callsite 17
void transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0);
#define COLOR_scope__AVarFormExpr___variable 10
#define COLOR_typing__AReassignFormExpr___read_type 14
val* astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1);
void transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0);
val* parser_nodes__AAttrFormExpr__n_expr(val* self);
#define COLOR_typing__AAttrFormExpr___mproperty 15
val* astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1);
val* astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2);
void transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0);
