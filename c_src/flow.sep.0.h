#include "nit.common.h"
#define COLOR_flow__ToolContext___flow_phase 28
#define COLOR_phase__Phase___toolcontext 0
void flow__APropdef__do_flow(val* self, val* p0);
void flow__FlowPhase__process_npropdef(val* self, val* p0);
#define COLOR_flow__FlowVisitor___current_flow_context 1
#define COLOR_flow__FlowVisitor___toolcontext 2
#define COLOR_kernel__Object__init 7
val* NEW_flow__FlowContext(const struct type* type);
extern const struct type type_flow__FlowContext;
#define COLOR_flow__FlowVisitor___flows 4
void array__Array__add(val* self, val* p0);
#define COLOR_flow__FlowContext___is_start 4
void flow__FlowVisitor__init(val* self, val* p0);
#define COLOR_flow__FlowVisitor___first 3
#define COLOR_flow__FlowContext___node 5
#define COLOR_flow__ANode__accept_flow_visitor 42
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
#define COLOR_parser_nodes__Visitor___current_node 0
void flow__FlowContext__add_previous(val* self, val* p0);
val* flow__FlowVisitor__make_merge_flow(val* self, val* p0, val* p1);
val* flow__FlowVisitor__make_true_false_flow(val* self, val* p0, val* p1);
val* flow__FlowVisitor__make_sub_true_false_flow(val* self);
#define COLOR_flow__FlowContext___is_marked_unreachable 2
val* flow__FlowVisitor__make_unreachable_flow(val* self);
#define COLOR_scope__EscapeMark___escapes 2
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
val* flow__AEscapeExpr__before_flow_context(val* self);
void flow__FlowContext__add_loop(val* self, val* p0);
void array__ArrayIterator__next(val* self);
void flow__FlowVisitor__merge_continues_to(val* self, val* p0, val* p1);
void flow__FlowVisitor__merge_breaks(val* self, val* p0);
#define COLOR_flow__FlowContext___previous 0
#define COLOR_flow__FlowContext___loops 1
#define COLOR_array__AbstractArrayRead___length 0
short int flow__FlowContext__is_unreachable(val* self);
#define COLOR_flow__FlowContext___is_already_unreachable 3
short int array__AbstractArrayRead__has(val* self, val* p0);
#define COLOR_parser_nodes__ANode__visit_all 39
void flow__ANode__accept_flow_visitor(val* self, val* p0);
val* NEW_flow__FlowVisitor(const struct type* type);
extern const struct type type_flow__FlowVisitor;
#define COLOR_flow__APropdef___before_flow_context 7
#define COLOR_flow__APropdef___after_flow_context 8
#define COLOR_flow__APropdef__accept_flow_visitor 78
void flow__APropdef__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AVarAssignExpr__accept_flow_visitor 87
void flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AReassignFormExpr__accept_flow_visitor 90
void flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
val* parser_nodes__ANode__hot_location(val* self);
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__Iterator__next 32
void flow__ABlockExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AReturnExpr__accept_flow_visitor 78
void flow__AReturnExpr__accept_flow_visitor(val* self, val* p0);
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_flow__AEscapeExpr__accept_flow_visitor 80
void flow__AEscapeExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AAbortExpr__accept_flow_visitor 76
void flow__AAbortExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__ADoExpr__accept_flow_visitor 83
#define COLOR_scope__ADoExpr___break_mark 12
void flow__ADoExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AIfExpr___n_expr 10
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfExpr___n_else 12
void flow__AIfExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AIfexprExpr___n_expr 10
#define COLOR_parser_nodes__AIfexprExpr___n_then 12
#define COLOR_parser_nodes__AIfexprExpr___n_else 14
void flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
#define COLOR_parser_nodes__AWhileExpr___n_block 13
#define COLOR_scope__AWhileExpr___continue_mark 15
#define COLOR_scope__AWhileExpr___break_mark 14
void flow__AWhileExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__ALoopExpr___n_block 11
#define COLOR_scope__ALoopExpr___continue_mark 13
#define COLOR_scope__ALoopExpr___break_mark 12
void flow__ALoopExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AForExpr___n_expr 12
#define COLOR_parser_nodes__AForExpr___n_block 14
#define COLOR_scope__AForExpr___continue_mark 17
#define COLOR_scope__AForExpr___break_mark 16
void flow__AForExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AAssertExpr___n_expr 11
#define COLOR_parser_nodes__AAssertExpr___n_else 12
void flow__AAssertExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AOrExpr___n_expr 9
#define COLOR_parser_nodes__AOrExpr___n_expr2 10
void flow__AOrExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AImpliesExpr___n_expr 9
#define COLOR_parser_nodes__AImpliesExpr___n_expr2 10
void flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AAndExpr___n_expr 9
#define COLOR_parser_nodes__AAndExpr___n_expr2 10
void flow__AAndExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__ANotExpr___n_expr 10
void flow__ANotExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AOrElseExpr__accept_flow_visitor 79
void flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AEqExpr__accept_flow_visitor 84
void flow__AEqExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__ANeExpr__accept_flow_visitor 84
void flow__ANeExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_flow__AIsaExpr__accept_flow_visitor 81
void flow__AIsaExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AParExpr___n_expr 10
void flow__AParExpr__accept_flow_visitor(val* self, val* p0);
#define COLOR_parser_nodes__AOnceExpr___n_expr 10
void flow__AOnceExpr__accept_flow_visitor(val* self, val* p0);
