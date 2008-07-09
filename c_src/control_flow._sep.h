#ifndef control_flow__sep
#define control_flow__sep
#include "syntax_base._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_ControlFlowVisitor[];

extern const classtable_elt_t VFT_ControlFlowContext[];

extern const classtable_elt_t VFT_ABlockControler[];

extern const classtable_elt_t VFT_AControlableBlock[];
extern const int SFT_control_flow[];
#define COLOR_control_flow___MMSrcModule___do_control_flow SFT_control_flow[0]
#define ID_ControlFlowVisitor SFT_control_flow[1]
#define COLOR_ControlFlowVisitor SFT_control_flow[2]
#define COLOR_control_flow___ControlFlowVisitor____once_count SFT_control_flow[3]
#define COLOR_control_flow___ControlFlowVisitor____control_flow_ctx SFT_control_flow[4]
#define INIT_TABLE_POS_ControlFlowVisitor SFT_control_flow[5]
#define COLOR_control_flow___ControlFlowVisitor___once_count SFT_control_flow[6]
#define COLOR_control_flow___ControlFlowVisitor___once_count__eq SFT_control_flow[7]
#define COLOR_control_flow___ControlFlowVisitor___control_flow_ctx SFT_control_flow[8]
#define COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq SFT_control_flow[9]
#define COLOR_control_flow___ControlFlowVisitor___init SFT_control_flow[10]
#define ID_ControlFlowContext SFT_control_flow[11]
#define COLOR_ControlFlowContext SFT_control_flow[12]
#define COLOR_control_flow___ControlFlowContext____prev SFT_control_flow[13]
#define COLOR_control_flow___ControlFlowContext____has_return SFT_control_flow[14]
#define COLOR_control_flow___ControlFlowContext____unreash SFT_control_flow[15]
#define COLOR_control_flow___ControlFlowContext____already_unreash SFT_control_flow[16]
#define COLOR_control_flow___ControlFlowContext____base_block SFT_control_flow[17]
#define INIT_TABLE_POS_ControlFlowContext SFT_control_flow[18]
#define COLOR_control_flow___ControlFlowContext___prev SFT_control_flow[19]
#define COLOR_control_flow___ControlFlowContext___has_return SFT_control_flow[20]
#define COLOR_control_flow___ControlFlowContext___has_return__eq SFT_control_flow[21]
#define COLOR_control_flow___ControlFlowContext___unreash SFT_control_flow[22]
#define COLOR_control_flow___ControlFlowContext___unreash__eq SFT_control_flow[23]
#define COLOR_control_flow___ControlFlowContext___already_unreash SFT_control_flow[24]
#define COLOR_control_flow___ControlFlowContext___already_unreash__eq SFT_control_flow[25]
#define COLOR_control_flow___ControlFlowContext___base_block SFT_control_flow[26]
#define COLOR_control_flow___ControlFlowContext___base_block__eq SFT_control_flow[27]
#define COLOR_control_flow___ControlFlowContext___sub SFT_control_flow[28]
#define COLOR_control_flow___ControlFlowContext___init SFT_control_flow[29]
#define COLOR_control_flow___ControlFlowContext___with SFT_control_flow[30]
#define COLOR_control_flow___PNode___accept_control_flow SFT_control_flow[31]
#define COLOR_SUPER_control_flow___AMethPropdef___accept_control_flow SFT_control_flow[32]
#define COLOR_SUPER_control_flow___AConcreteMethPropdef___accept_control_flow SFT_control_flow[33]
#define COLOR_SUPER_control_flow___AReturnExpr___accept_control_flow SFT_control_flow[34]
#define ID_ABlockControler SFT_control_flow[35]
#define COLOR_ABlockControler SFT_control_flow[36]
#define COLOR_control_flow___ABlockControler____block SFT_control_flow[37]
#define INIT_TABLE_POS_ABlockControler SFT_control_flow[38]
#define COLOR_control_flow___ABlockControler___block SFT_control_flow[39]
#define COLOR_SUPER_control_flow___ABreakExpr___accept_control_flow SFT_control_flow[40]
#define COLOR_SUPER_control_flow___AContinueExpr___accept_control_flow SFT_control_flow[41]
#define COLOR_SUPER_control_flow___AAbortExpr___accept_control_flow SFT_control_flow[42]
#define ID_AControlableBlock SFT_control_flow[43]
#define COLOR_AControlableBlock SFT_control_flow[44]
#define INIT_TABLE_POS_AControlableBlock SFT_control_flow[45]
#define COLOR_SUPER_control_flow___AControlableBlock___accept_control_flow SFT_control_flow[46]
#define COLOR_SUPER_control_flow___AOnceExpr___accept_control_flow SFT_control_flow[47]
typedef void (* control_flow___MMSrcModule___do_control_flow_t)(val_t  self, val_t  param0);
void control_flow___MMSrcModule___do_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___ControlFlowVisitor___visit_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___visit(val_t  self, val_t  param0);
#define ATTR_control_flow___ControlFlowVisitor____once_count(recv) ATTR(recv, COLOR_control_flow___ControlFlowVisitor____once_count)
typedef val_t (* control_flow___ControlFlowVisitor___once_count_t)(val_t  self);
val_t control_flow___ControlFlowVisitor___once_count(val_t  self);
typedef void (* control_flow___ControlFlowVisitor___once_count__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___once_count__eq(val_t  self, val_t  param0);
#define ATTR_control_flow___ControlFlowVisitor____control_flow_ctx(recv) ATTR(recv, COLOR_control_flow___ControlFlowVisitor____control_flow_ctx)
typedef val_t (* control_flow___ControlFlowVisitor___control_flow_ctx_t)(val_t  self);
val_t control_flow___ControlFlowVisitor___control_flow_ctx(val_t  self);
typedef void (* control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___control_flow_ctx__eq(val_t  self, val_t  param0);
typedef void (* control_flow___ControlFlowVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void control_flow___ControlFlowVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_control_flow___ControlFlowVisitor___init(val_t  param0, val_t  param1);
#define ATTR_control_flow___ControlFlowContext____prev(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____prev)
typedef val_t (* control_flow___ControlFlowContext___prev_t)(val_t  self);
val_t control_flow___ControlFlowContext___prev(val_t  self);
#define ATTR_control_flow___ControlFlowContext____has_return(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____has_return)
typedef val_t (* control_flow___ControlFlowContext___has_return_t)(val_t  self);
val_t control_flow___ControlFlowContext___has_return(val_t  self);
typedef void (* control_flow___ControlFlowContext___has_return__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___has_return__eq(val_t  self, val_t  param0);
#define ATTR_control_flow___ControlFlowContext____unreash(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____unreash)
typedef val_t (* control_flow___ControlFlowContext___unreash_t)(val_t  self);
val_t control_flow___ControlFlowContext___unreash(val_t  self);
typedef void (* control_flow___ControlFlowContext___unreash__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___unreash__eq(val_t  self, val_t  param0);
#define ATTR_control_flow___ControlFlowContext____already_unreash(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____already_unreash)
typedef val_t (* control_flow___ControlFlowContext___already_unreash_t)(val_t  self);
val_t control_flow___ControlFlowContext___already_unreash(val_t  self);
typedef void (* control_flow___ControlFlowContext___already_unreash__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___already_unreash__eq(val_t  self, val_t  param0);
#define ATTR_control_flow___ControlFlowContext____base_block(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____base_block)
typedef val_t (* control_flow___ControlFlowContext___base_block_t)(val_t  self);
val_t control_flow___ControlFlowContext___base_block(val_t  self);
typedef void (* control_flow___ControlFlowContext___base_block__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___base_block__eq(val_t  self, val_t  param0);
typedef val_t (* control_flow___ControlFlowContext___sub_t)(val_t  self);
val_t control_flow___ControlFlowContext___sub(val_t  self);
typedef void (* control_flow___ControlFlowContext___init_t)(val_t  self, int* init_table);
void control_flow___ControlFlowContext___init(val_t  self, int* init_table);
val_t NEW_control_flow___ControlFlowContext___init();
typedef void (* control_flow___ControlFlowContext___with_t)(val_t  self, val_t  param0, int* init_table);
void control_flow___ControlFlowContext___with(val_t  self, val_t  param0, int* init_table);
val_t NEW_control_flow___ControlFlowContext___with(val_t  param0);
typedef void (* control_flow___PNode___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___PNode___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AMethPropdef___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AMethPropdef___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AConcreteMethPropdef___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AConcreteMethPropdef___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___ABlockExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___ABlockExpr___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AReturnExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AReturnExpr___accept_control_flow(val_t  self, val_t  param0);
#define ATTR_control_flow___ABlockControler____block(recv) ATTR(recv, COLOR_control_flow___ABlockControler____block)
typedef val_t (* control_flow___ABlockControler___block_t)(val_t  self);
val_t control_flow___ABlockControler___block(val_t  self);
typedef void (* control_flow___ABreakExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___ABreakExpr___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AContinueExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AContinueExpr___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AAbortExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AAbortExpr___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AIfExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AIfExpr___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AControlableBlock___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AControlableBlock___accept_control_flow(val_t  self, val_t  param0);
typedef void (* control_flow___AOnceExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AOnceExpr___accept_control_flow(val_t  self, val_t  param0);
#endif
