#include "nit.common.h"
#define COLOR_flow__ToolContext___flow_phase 25
#define COLOR_phase__Phase___toolcontext 0
void flow__APropdef__do_flow(val* self, val* p0);
void flow__FlowPhase__process_npropdef(val* self, val* p0);
#define COLOR_flow__FlowVisitor___current_flow_context 1
#define COLOR_flow__FlowVisitor___toolcontext 2
val* NEW_flow__FlowContext(const struct type* type);
extern const struct type type_flow__FlowContext;
#define COLOR_flow__FlowVisitor___flows 4
void array__Array__add(val* self, val* p0);
#define COLOR_flow__FlowContext___is_start 4
void flow__FlowVisitor__init(val* self, val* p0);
#define COLOR_flow__FlowVisitor___first 3
#define COLOR_flow__FlowContext___node 5
#define COLOR_flow__ANode__accept_flow_visitor 40
extern const struct type type_parser_nodes__AExpr;
#define COLOR_flow__AExpr___after_flow_context 4
#define COLOR_flow__FlowContext___when_true 7
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_flow__FlowContext___when_false 8
val* flow__FlowVisitor__make_sub_flow(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
#define COLOR_flow__FlowContext___name 6
void flow__FlowVisitor__visit(val* self, val* p0);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
val* flow__FlowVisitor__visit_expr(val* self, val* p0);
val* parser_nodes__Visitor__current_node(val* self);
void flow__FlowContext__add_previous(val* self, val* p0);
val* flow__FlowVisitor__make_merge_flow(val* self, val* p0, val* p1);
val* flow__FlowVisitor__make_true_false_flow(val* self, val* p0, val* p1);
val* flow__FlowVisitor__make_sub_true_false_flow(val* self);
#define COLOR_flow__FlowContext___is_marked_unreachable 2
val* flow__FlowVisitor__make_unreachable_flow(val* self);
#define COLOR_scope__EscapeMark___continues 2
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
val* flow__AContinueExpr__before_flow_context(val* self);
void flow__FlowContext__add_loop(val* self, val* p0);
void array__ArrayIterator__next(val* self);
void flow__FlowVisitor__merge_continues_to(val* self, val* p0, val* p1);
#define COLOR_scope__EscapeMark___breaks 3
val* flow__ABreakExpr__before_flow_context(val* self);
void flow__FlowVisitor__merge_breaks(val* self, val* p0);
#define COLOR_flow__FlowContext___previous 0
#define COLOR_flow__FlowContext___loops 1
long array__AbstractArrayRead__length(val* self);
short int flow__FlowContext__is_unreachable(val* self);
#define COLOR_flow__FlowContext___is_already_unreachable 3
short int array__AbstractArrayRead__has(val* self, val* p0);
#define COLOR_parser_nodes__ANode__visit_all 37
void flow__ANode__accept_flow_visitor(val* self, val* p0);
val* NEW_flow__FlowVisitor(const struct type* type);
extern const struct type type_flow__FlowVisitor;
#define COLOR_flow__APropdef___before_flow_context 7
#define COLOR_flow__APropdef___after_flow_context 8
#define COLOR_flow__APropdef__accept_flow_visitor 77
void flow__APropdef__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AVarAssignExpr__accept_flow_visitor 84
void flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AReassignFormExpr__accept_flow_visitor 87
void flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
val* parser_nodes__ANode__hot_location(val* self);
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__Iterator__next 30
void flow__ABlockExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AReturnExpr__accept_flow_visitor 75
void flow__AReturnExpr__accept_flow_visitor(val* self, val* p0);
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_flow__AContinueExpr__accept_flow_visitor 80
void flow__AContinueExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__ABreakExpr__accept_flow_visitor 80
void flow__ABreakExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AAbortExpr__accept_flow_visitor 73
void flow__AAbortExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__ADoExpr__accept_flow_visitor 79
#define COLOR_scope__ADoExpr___escapemark 12
void flow__ADoExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AIfExpr__n_expr(val* self);
val* parser_nodes__AIfExpr__n_then(val* self);
val* parser_nodes__AIfExpr__n_else(val* self);
void flow__AIfExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AIfexprExpr__n_expr(val* self);
val* parser_nodes__AIfexprExpr__n_then(val* self);
val* parser_nodes__AIfexprExpr__n_else(val* self);
void flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AWhileExpr__n_expr(val* self);
val* parser_nodes__AWhileExpr__n_block(val* self);
#define COLOR_scope__AWhileExpr___escapemark 14
void flow__AWhileExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__ALoopExpr__n_block(val* self);
#define COLOR_scope__ALoopExpr___escapemark 12
void flow__ALoopExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AForExpr__n_expr(val* self);
val* parser_nodes__AForExpr__n_block(val* self);
#define COLOR_scope__AForExpr___escapemark 16
void flow__AForExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AAssertExpr__n_expr(val* self);
val* parser_nodes__AAssertExpr__n_else(val* self);
void flow__AAssertExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AOrExpr__n_expr(val* self);
val* parser_nodes__AOrExpr__n_expr2(val* self);
void flow__AOrExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AImpliesExpr__n_expr(val* self);
val* parser_nodes__AImpliesExpr__n_expr2(val* self);
void flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AAndExpr__n_expr(val* self);
val* parser_nodes__AAndExpr__n_expr2(val* self);
void flow__AAndExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__ANotExpr__n_expr(val* self);
void flow__ANotExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AOrElseExpr__accept_flow_visitor 76
void flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AEqExpr__accept_flow_visitor 81
void flow__AEqExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__ANeExpr__accept_flow_visitor 81
void flow__ANeExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AIsaExpr__accept_flow_visitor 78
void flow__AIsaExpr__accept_flow_visitor(val* self, val* p0);
val* parser_nodes__AProxyExpr__n_expr(val* self);
void flow__AProxyExpr__accept_flow_visitor(val* self, val* p0);
