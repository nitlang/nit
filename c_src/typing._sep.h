#ifndef typing__sep
#define typing__sep
#include "syntax_base._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_TypingVisitor[];

extern const classtable_elt_t VFT_VariableContext[];

extern const classtable_elt_t VFT_SubVariableContext[];

extern const classtable_elt_t VFT_AAbsSendExpr[];

extern const classtable_elt_t VFT_ASuperInitCall[];

extern const classtable_elt_t VFT_ASendReassignExpr[];
extern const int SFT_typing[];
#define COLOR_typing___MMSrcModule___do_typing SFT_typing[0]
#define ID_TypingVisitor SFT_typing[1]
#define COLOR_TypingVisitor SFT_typing[2]
#define COLOR_typing___TypingVisitor____variable_ctx SFT_typing[3]
#define COLOR_typing___TypingVisitor____self_type SFT_typing[4]
#define COLOR_typing___TypingVisitor____top_block SFT_typing[5]
#define COLOR_typing___TypingVisitor____explicit_super_init_calls SFT_typing[6]
#define COLOR_typing___TypingVisitor____explicit_other_init_call SFT_typing[7]
#define INIT_TABLE_POS_TypingVisitor SFT_typing[8]
#define COLOR_typing___TypingVisitor___variable_ctx SFT_typing[9]
#define COLOR_typing___TypingVisitor___variable_ctx__eq SFT_typing[10]
#define COLOR_typing___TypingVisitor___self_type SFT_typing[11]
#define COLOR_typing___TypingVisitor___self_type__eq SFT_typing[12]
#define COLOR_typing___TypingVisitor___top_block SFT_typing[13]
#define COLOR_typing___TypingVisitor___top_block__eq SFT_typing[14]
#define COLOR_typing___TypingVisitor___explicit_super_init_calls SFT_typing[15]
#define COLOR_typing___TypingVisitor___explicit_super_init_calls__eq SFT_typing[16]
#define COLOR_typing___TypingVisitor___explicit_other_init_call SFT_typing[17]
#define COLOR_typing___TypingVisitor___explicit_other_init_call__eq SFT_typing[18]
#define COLOR_typing___TypingVisitor___init SFT_typing[19]
#define COLOR_typing___TypingVisitor___get_default_constructor_for SFT_typing[20]
#define ID_VariableContext SFT_typing[21]
#define COLOR_VariableContext SFT_typing[22]
#define COLOR_typing___VariableContext____dico SFT_typing[23]
#define INIT_TABLE_POS_VariableContext SFT_typing[24]
#define COLOR_typing___VariableContext_____bra SFT_typing[25]
#define COLOR_typing___VariableContext___add SFT_typing[26]
#define COLOR_typing___VariableContext___stype SFT_typing[27]
#define COLOR_typing___VariableContext___sub SFT_typing[28]
#define COLOR_typing___VariableContext___sub_with SFT_typing[29]
#define COLOR_typing___VariableContext___init SFT_typing[30]
#define ID_SubVariableContext SFT_typing[31]
#define COLOR_SubVariableContext SFT_typing[32]
#define COLOR_typing___SubVariableContext____prev SFT_typing[33]
#define COLOR_typing___SubVariableContext____variable SFT_typing[34]
#define COLOR_typing___SubVariableContext____var_type SFT_typing[35]
#define INIT_TABLE_POS_SubVariableContext SFT_typing[36]
#define COLOR_typing___SubVariableContext___prev SFT_typing[37]
#define COLOR_typing___SubVariableContext___with SFT_typing[38]
#define COLOR_typing___PNode___accept_typing SFT_typing[39]
#define COLOR_typing___PNode___after_typing SFT_typing[40]
#define COLOR_SUPER_typing___PClassdef___accept_typing SFT_typing[41]
#define COLOR_SUPER_typing___AAttrPropdef___accept_typing SFT_typing[42]
#define COLOR_SUPER_typing___AMethPropdef___accept_typing SFT_typing[43]
#define COLOR_typing___AConcreteInitPropdef____super_init_calls SFT_typing[44]
#define COLOR_typing___AConcreteInitPropdef____explicit_super_init_calls SFT_typing[45]
#define COLOR_typing___AConcreteInitPropdef___super_init_calls SFT_typing[46]
#define COLOR_typing___AConcreteInitPropdef___explicit_super_init_calls SFT_typing[47]
#define COLOR_SUPER_typing___AConcreteInitPropdef___accept_typing SFT_typing[48]
#define COLOR_typing___PType____stype SFT_typing[49]
#define COLOR_typing___PType___stype SFT_typing[50]
#define COLOR_typing___PExpr____stype SFT_typing[51]
#define COLOR_typing___PExpr____if_true_variable_ctx SFT_typing[52]
#define COLOR_typing___PExpr___is_implicit_self SFT_typing[53]
#define COLOR_typing___PExpr___is_self SFT_typing[54]
#define COLOR_typing___PExpr___is_variable SFT_typing[55]
#define COLOR_typing___PExpr___if_true_variable_ctx SFT_typing[56]
#define COLOR_typing___AVardeclExpr____variable SFT_typing[57]
#define COLOR_typing___AVardeclExpr___variable SFT_typing[58]
#define COLOR_SUPER_typing___ABlockExpr___accept_typing SFT_typing[59]
#define COLOR_typing___AForVardeclExpr____variable SFT_typing[60]
#define COLOR_typing___AForVardeclExpr___variable SFT_typing[61]
#define COLOR_typing___AVarFormExpr____variable SFT_typing[62]
#define COLOR_typing___AVarFormExpr___variable SFT_typing[63]
#define COLOR_typing___AVarFormExpr___variable__eq SFT_typing[64]
#define COLOR_typing___AReassignFormExpr____assign_method SFT_typing[65]
#define COLOR_typing___AReassignFormExpr___do_lvalue_typing SFT_typing[66]
#define COLOR_typing___AReassignFormExpr___assign_method SFT_typing[67]
#define COLOR_typing___PAssignOp___method_name SFT_typing[68]
#define COLOR_typing___AArrayExpr___stype__eq SFT_typing[69]
#define COLOR_typing___ASuperExpr____init_in_superclass SFT_typing[70]
#define COLOR_typing___ASuperExpr___init_in_superclass SFT_typing[71]
#define COLOR_typing___AAttrFormExpr____prop SFT_typing[72]
#define COLOR_typing___AAttrFormExpr___prop SFT_typing[73]
#define COLOR_typing___AAttrFormExpr___do_typing SFT_typing[74]
#define ID_AAbsSendExpr SFT_typing[75]
#define COLOR_AAbsSendExpr SFT_typing[76]
#define COLOR_typing___AAbsSendExpr____prop SFT_typing[77]
#define COLOR_typing___AAbsSendExpr____arguments SFT_typing[78]
#define INIT_TABLE_POS_AAbsSendExpr SFT_typing[79]
#define COLOR_typing___AAbsSendExpr___do_typing SFT_typing[80]
#define COLOR_typing___AAbsSendExpr___get_property SFT_typing[81]
#define COLOR_typing___AAbsSendExpr___process_signature SFT_typing[82]
#define COLOR_typing___AAbsSendExpr___prop SFT_typing[83]
#define COLOR_typing___AAbsSendExpr___arguments SFT_typing[84]
#define ID_ASuperInitCall SFT_typing[85]
#define COLOR_ASuperInitCall SFT_typing[86]
#define INIT_TABLE_POS_ASuperInitCall SFT_typing[87]
#define COLOR_typing___ASuperInitCall___register_super_init_call SFT_typing[88]
#define COLOR_typing___ASendExpr___name SFT_typing[89]
#define COLOR_typing___ASendExpr___raw_arguments SFT_typing[90]
#define COLOR_typing___ASendExpr___do_all_typing SFT_typing[91]
#define ID_ASendReassignExpr SFT_typing[92]
#define COLOR_ASendReassignExpr SFT_typing[93]
#define COLOR_typing___ASendReassignExpr____read_prop SFT_typing[94]
#define INIT_TABLE_POS_ASendReassignExpr SFT_typing[95]
#define COLOR_typing___ASendReassignExpr___read_prop SFT_typing[96]
#define COLOR_SUPER_typing___ACallFormExpr___after_typing SFT_typing[97]
#define COLOR_typing___ACallFormExpr___variable_create SFT_typing[98]
typedef void (* typing___MMSrcModule___do_typing_t)(val_t  self, val_t  param0);
void typing___MMSrcModule___do_typing(val_t  self, val_t  param0);
typedef void (* typing___TypingVisitor___visit_t)(val_t  self, val_t  param0);
void typing___TypingVisitor___visit(val_t  self, val_t  param0);
#define ATTR_typing___TypingVisitor____variable_ctx(recv) ATTR(recv, COLOR_typing___TypingVisitor____variable_ctx)
typedef val_t (* typing___TypingVisitor___variable_ctx_t)(val_t  self);
val_t typing___TypingVisitor___variable_ctx(val_t  self);
typedef void (* typing___TypingVisitor___variable_ctx__eq_t)(val_t  self, val_t  param0);
void typing___TypingVisitor___variable_ctx__eq(val_t  self, val_t  param0);
#define ATTR_typing___TypingVisitor____self_type(recv) ATTR(recv, COLOR_typing___TypingVisitor____self_type)
typedef val_t (* typing___TypingVisitor___self_type_t)(val_t  self);
val_t typing___TypingVisitor___self_type(val_t  self);
typedef void (* typing___TypingVisitor___self_type__eq_t)(val_t  self, val_t  param0);
void typing___TypingVisitor___self_type__eq(val_t  self, val_t  param0);
#define ATTR_typing___TypingVisitor____top_block(recv) ATTR(recv, COLOR_typing___TypingVisitor____top_block)
typedef val_t (* typing___TypingVisitor___top_block_t)(val_t  self);
val_t typing___TypingVisitor___top_block(val_t  self);
typedef void (* typing___TypingVisitor___top_block__eq_t)(val_t  self, val_t  param0);
void typing___TypingVisitor___top_block__eq(val_t  self, val_t  param0);
#define ATTR_typing___TypingVisitor____explicit_super_init_calls(recv) ATTR(recv, COLOR_typing___TypingVisitor____explicit_super_init_calls)
typedef val_t (* typing___TypingVisitor___explicit_super_init_calls_t)(val_t  self);
val_t typing___TypingVisitor___explicit_super_init_calls(val_t  self);
typedef void (* typing___TypingVisitor___explicit_super_init_calls__eq_t)(val_t  self, val_t  param0);
void typing___TypingVisitor___explicit_super_init_calls__eq(val_t  self, val_t  param0);
#define ATTR_typing___TypingVisitor____explicit_other_init_call(recv) ATTR(recv, COLOR_typing___TypingVisitor____explicit_other_init_call)
typedef val_t (* typing___TypingVisitor___explicit_other_init_call_t)(val_t  self);
val_t typing___TypingVisitor___explicit_other_init_call(val_t  self);
typedef void (* typing___TypingVisitor___explicit_other_init_call__eq_t)(val_t  self, val_t  param0);
void typing___TypingVisitor___explicit_other_init_call__eq(val_t  self, val_t  param0);
typedef void (* typing___TypingVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void typing___TypingVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_typing___TypingVisitor___init(val_t  param0, val_t  param1);
typedef val_t (* typing___TypingVisitor___get_default_constructor_for_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t typing___TypingVisitor___get_default_constructor_for(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* typing___VariableContext_____bra_t)(val_t  self, val_t  param0);
val_t typing___VariableContext_____bra(val_t  self, val_t  param0);
typedef void (* typing___VariableContext___add_t)(val_t  self, val_t  param0);
void typing___VariableContext___add(val_t  self, val_t  param0);
typedef val_t (* typing___VariableContext___stype_t)(val_t  self, val_t  param0);
val_t typing___VariableContext___stype(val_t  self, val_t  param0);
#define ATTR_typing___VariableContext____dico(recv) ATTR(recv, COLOR_typing___VariableContext____dico)
typedef val_t (* typing___VariableContext___sub_t)(val_t  self);
val_t typing___VariableContext___sub(val_t  self);
typedef val_t (* typing___VariableContext___sub_with_t)(val_t  self, val_t  param0, val_t  param1);
val_t typing___VariableContext___sub_with(val_t  self, val_t  param0, val_t  param1);
typedef void (* typing___VariableContext___init_t)(val_t  self, int* init_table);
void typing___VariableContext___init(val_t  self, int* init_table);
val_t NEW_typing___VariableContext___init();
#define ATTR_typing___SubVariableContext____prev(recv) ATTR(recv, COLOR_typing___SubVariableContext____prev)
typedef val_t (* typing___SubVariableContext___prev_t)(val_t  self);
val_t typing___SubVariableContext___prev(val_t  self);
#define ATTR_typing___SubVariableContext____variable(recv) ATTR(recv, COLOR_typing___SubVariableContext____variable)
#define ATTR_typing___SubVariableContext____var_type(recv) ATTR(recv, COLOR_typing___SubVariableContext____var_type)
typedef val_t (* typing___SubVariableContext_____bra_t)(val_t  self, val_t  param0);
val_t typing___SubVariableContext_____bra(val_t  self, val_t  param0);
typedef val_t (* typing___SubVariableContext___stype_t)(val_t  self, val_t  param0);
val_t typing___SubVariableContext___stype(val_t  self, val_t  param0);
typedef void (* typing___SubVariableContext___with_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void typing___SubVariableContext___with(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_typing___SubVariableContext___with(val_t  param0, val_t  param1, val_t  param2);
typedef void (* typing___PNode___accept_typing_t)(val_t  self, val_t  param0);
void typing___PNode___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___PNode___after_typing_t)(val_t  self, val_t  param0);
void typing___PNode___after_typing(val_t  self, val_t  param0);
typedef void (* typing___PClassdef___accept_typing_t)(val_t  self, val_t  param0);
void typing___PClassdef___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___AAttrPropdef___accept_typing_t)(val_t  self, val_t  param0);
void typing___AAttrPropdef___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___AMethPropdef___accept_typing_t)(val_t  self, val_t  param0);
void typing___AMethPropdef___accept_typing(val_t  self, val_t  param0);
#define ATTR_typing___AConcreteInitPropdef____super_init_calls(recv) ATTR(recv, COLOR_typing___AConcreteInitPropdef____super_init_calls)
typedef val_t (* typing___AConcreteInitPropdef___super_init_calls_t)(val_t  self);
val_t typing___AConcreteInitPropdef___super_init_calls(val_t  self);
#define ATTR_typing___AConcreteInitPropdef____explicit_super_init_calls(recv) ATTR(recv, COLOR_typing___AConcreteInitPropdef____explicit_super_init_calls)
typedef val_t (* typing___AConcreteInitPropdef___explicit_super_init_calls_t)(val_t  self);
val_t typing___AConcreteInitPropdef___explicit_super_init_calls(val_t  self);
typedef void (* typing___AConcreteInitPropdef___accept_typing_t)(val_t  self, val_t  param0);
void typing___AConcreteInitPropdef___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___PParam___after_typing_t)(val_t  self, val_t  param0);
void typing___PParam___after_typing(val_t  self, val_t  param0);
#define ATTR_typing___PType____stype(recv) ATTR(recv, COLOR_typing___PType____stype)
typedef val_t (* typing___PType___stype_t)(val_t  self);
val_t typing___PType___stype(val_t  self);
typedef void (* typing___PType___after_typing_t)(val_t  self, val_t  param0);
void typing___PType___after_typing(val_t  self, val_t  param0);
#define ATTR_typing___PExpr____stype(recv) ATTR(recv, COLOR_typing___PExpr____stype)
typedef val_t (* typing___PExpr___stype_t)(val_t  self);
val_t typing___PExpr___stype(val_t  self);
typedef val_t (* typing___PExpr___is_implicit_self_t)(val_t  self);
val_t typing___PExpr___is_implicit_self(val_t  self);
typedef val_t (* typing___PExpr___is_self_t)(val_t  self);
val_t typing___PExpr___is_self(val_t  self);
typedef val_t (* typing___PExpr___is_variable_t)(val_t  self);
val_t typing___PExpr___is_variable(val_t  self);
#define ATTR_typing___PExpr____if_true_variable_ctx(recv) ATTR(recv, COLOR_typing___PExpr____if_true_variable_ctx)
typedef val_t (* typing___PExpr___if_true_variable_ctx_t)(val_t  self);
val_t typing___PExpr___if_true_variable_ctx(val_t  self);
#define ATTR_typing___AVardeclExpr____variable(recv) ATTR(recv, COLOR_typing___AVardeclExpr____variable)
typedef val_t (* typing___AVardeclExpr___variable_t)(val_t  self);
val_t typing___AVardeclExpr___variable(val_t  self);
typedef void (* typing___AVardeclExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AVardeclExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ABlockExpr___accept_typing_t)(val_t  self, val_t  param0);
void typing___ABlockExpr___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___AReturnExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AReturnExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AIfExpr___accept_typing_t)(val_t  self, val_t  param0);
void typing___AIfExpr___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___AWhileExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AWhileExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AForExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AForExpr___after_typing(val_t  self, val_t  param0);
#define ATTR_typing___AForVardeclExpr____variable(recv) ATTR(recv, COLOR_typing___AForVardeclExpr____variable)
typedef val_t (* typing___AForVardeclExpr___variable_t)(val_t  self);
val_t typing___AForVardeclExpr___variable(val_t  self);
typedef void (* typing___AForVardeclExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AForVardeclExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AAssertExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AAssertExpr___after_typing(val_t  self, val_t  param0);
#define ATTR_typing___AVarFormExpr____variable(recv) ATTR(recv, COLOR_typing___AVarFormExpr____variable)
typedef val_t (* typing___AVarFormExpr___variable_t)(val_t  self);
val_t typing___AVarFormExpr___variable(val_t  self);
typedef void (* typing___AVarFormExpr___variable__eq_t)(val_t  self, val_t  param0);
void typing___AVarFormExpr___variable__eq(val_t  self, val_t  param0);
typedef val_t (* typing___AVarExpr___is_variable_t)(val_t  self);
val_t typing___AVarExpr___is_variable(val_t  self);
typedef void (* typing___AVarExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AVarExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AVarAssignExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AVarAssignExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AReassignFormExpr___do_lvalue_typing_t)(val_t  self, val_t  param0, val_t  param1);
void typing___AReassignFormExpr___do_lvalue_typing(val_t  self, val_t  param0, val_t  param1);
#define ATTR_typing___AReassignFormExpr____assign_method(recv) ATTR(recv, COLOR_typing___AReassignFormExpr____assign_method)
typedef val_t (* typing___AReassignFormExpr___assign_method_t)(val_t  self);
val_t typing___AReassignFormExpr___assign_method(val_t  self);
typedef val_t (* typing___PAssignOp___method_name_t)(val_t  self);
val_t typing___PAssignOp___method_name(val_t  self);
typedef val_t (* typing___APlusAssignOp___method_name_t)(val_t  self);
val_t typing___APlusAssignOp___method_name(val_t  self);
typedef val_t (* typing___AMinusAssignOp___method_name_t)(val_t  self);
val_t typing___AMinusAssignOp___method_name(val_t  self);
typedef void (* typing___AVarReassignExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AVarReassignExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ASelfExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ASelfExpr___after_typing(val_t  self, val_t  param0);
typedef val_t (* typing___ASelfExpr___is_self_t)(val_t  self);
val_t typing___ASelfExpr___is_self(val_t  self);
typedef val_t (* typing___AImplicitSelfExpr___is_implicit_self_t)(val_t  self);
val_t typing___AImplicitSelfExpr___is_implicit_self(val_t  self);
typedef void (* typing___AIfexprExpr___accept_typing_t)(val_t  self, val_t  param0);
void typing___AIfexprExpr___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___ABoolExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ABoolExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AOrExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AOrExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AAndExpr___accept_typing_t)(val_t  self, val_t  param0);
void typing___AAndExpr___accept_typing(val_t  self, val_t  param0);
typedef void (* typing___ANotExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ANotExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AIntExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AIntExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AFloatExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AFloatExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ACharExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ACharExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AStringFormExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AStringFormExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ASuperstringExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ASuperstringExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ANullExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ANullExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AArrayExpr___stype__eq_t)(val_t  self, val_t  param0);
void typing___AArrayExpr___stype__eq(val_t  self, val_t  param0);
typedef void (* typing___AArrayExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AArrayExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ARangeExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ARangeExpr___after_typing(val_t  self, val_t  param0);
#define ATTR_typing___ASuperExpr____init_in_superclass(recv) ATTR(recv, COLOR_typing___ASuperExpr____init_in_superclass)
typedef val_t (* typing___ASuperExpr___init_in_superclass_t)(val_t  self);
val_t typing___ASuperExpr___init_in_superclass(val_t  self);
typedef void (* typing___ASuperExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ASuperExpr___after_typing(val_t  self, val_t  param0);
#define ATTR_typing___AAttrFormExpr____prop(recv) ATTR(recv, COLOR_typing___AAttrFormExpr____prop)
typedef val_t (* typing___AAttrFormExpr___prop_t)(val_t  self);
val_t typing___AAttrFormExpr___prop(val_t  self);
typedef void (* typing___AAttrFormExpr___do_typing_t)(val_t  self, val_t  param0);
void typing___AAttrFormExpr___do_typing(val_t  self, val_t  param0);
typedef void (* typing___AAttrExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AAttrExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AAttrAssignExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AAttrAssignExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AAttrReassignExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AAttrReassignExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AAbsSendExpr___do_typing_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5);
void typing___AAbsSendExpr___do_typing(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5);
typedef val_t (* typing___AAbsSendExpr___get_property_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
val_t typing___AAbsSendExpr___get_property(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* typing___AAbsSendExpr___process_signature_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
val_t typing___AAbsSendExpr___process_signature(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_typing___AAbsSendExpr____prop(recv) ATTR(recv, COLOR_typing___AAbsSendExpr____prop)
typedef val_t (* typing___AAbsSendExpr___prop_t)(val_t  self);
val_t typing___AAbsSendExpr___prop(val_t  self);
#define ATTR_typing___AAbsSendExpr____arguments(recv) ATTR(recv, COLOR_typing___AAbsSendExpr____arguments)
typedef val_t (* typing___AAbsSendExpr___arguments_t)(val_t  self);
val_t typing___AAbsSendExpr___arguments(val_t  self);
typedef void (* typing___ASuperInitCall___register_super_init_call_t)(val_t  self, val_t  param0, val_t  param1);
void typing___ASuperInitCall___register_super_init_call(val_t  self, val_t  param0, val_t  param1);
typedef void (* typing___ANewExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ANewExpr___after_typing(val_t  self, val_t  param0);
typedef val_t (* typing___ASendExpr___name_t)(val_t  self);
val_t typing___ASendExpr___name(val_t  self);
typedef val_t (* typing___ASendExpr___raw_arguments_t)(val_t  self);
val_t typing___ASendExpr___raw_arguments(val_t  self);
typedef void (* typing___ASendExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ASendExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___ASendExpr___do_all_typing_t)(val_t  self, val_t  param0);
void typing___ASendExpr___do_all_typing(val_t  self, val_t  param0);
#define ATTR_typing___ASendReassignExpr____read_prop(recv) ATTR(recv, COLOR_typing___ASendReassignExpr____read_prop)
typedef val_t (* typing___ASendReassignExpr___read_prop_t)(val_t  self);
val_t typing___ASendReassignExpr___read_prop(val_t  self);
typedef void (* typing___ASendReassignExpr___do_all_typing_t)(val_t  self, val_t  param0);
void typing___ASendReassignExpr___do_all_typing(val_t  self, val_t  param0);
typedef val_t (* typing___ABinopExpr___raw_arguments_t)(val_t  self);
val_t typing___ABinopExpr___raw_arguments(val_t  self);
typedef val_t (* typing___AEqExpr___name_t)(val_t  self);
val_t typing___AEqExpr___name(val_t  self);
typedef val_t (* typing___ANeExpr___name_t)(val_t  self);
val_t typing___ANeExpr___name(val_t  self);
typedef val_t (* typing___ALtExpr___name_t)(val_t  self);
val_t typing___ALtExpr___name(val_t  self);
typedef val_t (* typing___ALeExpr___name_t)(val_t  self);
val_t typing___ALeExpr___name(val_t  self);
typedef val_t (* typing___AGtExpr___name_t)(val_t  self);
val_t typing___AGtExpr___name(val_t  self);
typedef val_t (* typing___AGeExpr___name_t)(val_t  self);
val_t typing___AGeExpr___name(val_t  self);
typedef val_t (* typing___APlusExpr___name_t)(val_t  self);
val_t typing___APlusExpr___name(val_t  self);
typedef val_t (* typing___AMinusExpr___name_t)(val_t  self);
val_t typing___AMinusExpr___name(val_t  self);
typedef val_t (* typing___AStarshipExpr___name_t)(val_t  self);
val_t typing___AStarshipExpr___name(val_t  self);
typedef val_t (* typing___AStarExpr___name_t)(val_t  self);
val_t typing___AStarExpr___name(val_t  self);
typedef val_t (* typing___ASlashExpr___name_t)(val_t  self);
val_t typing___ASlashExpr___name(val_t  self);
typedef val_t (* typing___APercentExpr___name_t)(val_t  self);
val_t typing___APercentExpr___name(val_t  self);
typedef val_t (* typing___AUminusExpr___name_t)(val_t  self);
val_t typing___AUminusExpr___name(val_t  self);
typedef val_t (* typing___AUminusExpr___raw_arguments_t)(val_t  self);
val_t typing___AUminusExpr___raw_arguments(val_t  self);
typedef void (* typing___ACallFormExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___ACallFormExpr___after_typing(val_t  self, val_t  param0);
typedef val_t (* typing___ACallFormExpr___variable_create_t)(val_t  self, val_t  param0);
val_t typing___ACallFormExpr___variable_create(val_t  self, val_t  param0);
typedef val_t (* typing___ACallExpr___variable_create_t)(val_t  self, val_t  param0);
val_t typing___ACallExpr___variable_create(val_t  self, val_t  param0);
typedef val_t (* typing___ACallExpr___name_t)(val_t  self);
val_t typing___ACallExpr___name(val_t  self);
typedef val_t (* typing___ACallExpr___raw_arguments_t)(val_t  self);
val_t typing___ACallExpr___raw_arguments(val_t  self);
typedef val_t (* typing___ACallAssignExpr___variable_create_t)(val_t  self, val_t  param0);
val_t typing___ACallAssignExpr___variable_create(val_t  self, val_t  param0);
typedef val_t (* typing___ACallAssignExpr___name_t)(val_t  self);
val_t typing___ACallAssignExpr___name(val_t  self);
typedef val_t (* typing___ACallAssignExpr___raw_arguments_t)(val_t  self);
val_t typing___ACallAssignExpr___raw_arguments(val_t  self);
typedef val_t (* typing___ACallReassignExpr___variable_create_t)(val_t  self, val_t  param0);
val_t typing___ACallReassignExpr___variable_create(val_t  self, val_t  param0);
typedef val_t (* typing___ACallReassignExpr___name_t)(val_t  self);
val_t typing___ACallReassignExpr___name(val_t  self);
typedef val_t (* typing___ACallReassignExpr___raw_arguments_t)(val_t  self);
val_t typing___ACallReassignExpr___raw_arguments(val_t  self);
typedef val_t (* typing___ABraExpr___name_t)(val_t  self);
val_t typing___ABraExpr___name(val_t  self);
typedef val_t (* typing___ABraExpr___raw_arguments_t)(val_t  self);
val_t typing___ABraExpr___raw_arguments(val_t  self);
typedef val_t (* typing___ABraAssignExpr___name_t)(val_t  self);
val_t typing___ABraAssignExpr___name(val_t  self);
typedef val_t (* typing___ABraAssignExpr___raw_arguments_t)(val_t  self);
val_t typing___ABraAssignExpr___raw_arguments(val_t  self);
typedef val_t (* typing___ABraReassignExpr___name_t)(val_t  self);
val_t typing___ABraReassignExpr___name(val_t  self);
typedef val_t (* typing___ABraReassignExpr___raw_arguments_t)(val_t  self);
val_t typing___ABraReassignExpr___raw_arguments(val_t  self);
typedef val_t (* typing___AInitExpr___name_t)(val_t  self);
val_t typing___AInitExpr___name(val_t  self);
typedef val_t (* typing___AInitExpr___raw_arguments_t)(val_t  self);
val_t typing___AInitExpr___raw_arguments(val_t  self);
typedef void (* typing___AIsaExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AIsaExpr___after_typing(val_t  self, val_t  param0);
typedef void (* typing___AProxyExpr___after_typing_t)(val_t  self, val_t  param0);
void typing___AProxyExpr___after_typing(val_t  self, val_t  param0);
#endif
