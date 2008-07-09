#ifndef syntax_base__sep
#define syntax_base__sep
#include "parser._sep.h"
#include "mmloader._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_MMSrcModule[];

extern const classtable_elt_t VFT_MMSrcLocalClass[];

extern const classtable_elt_t VFT_MMSrcLocalProperty[];

extern const classtable_elt_t VFT_MMSrcAttribute[];

extern const classtable_elt_t VFT_MMSrcMethod[];

extern const classtable_elt_t VFT_MMAttrImplementationMethod[];

extern const classtable_elt_t VFT_MMReadImplementationMethod[];

extern const classtable_elt_t VFT_MMWriteImplementationMethod[];

extern const classtable_elt_t VFT_MMMethSrcMethod[];

extern const classtable_elt_t VFT_MMSrcTypeProperty[];

extern const classtable_elt_t VFT_Variable[];

extern const classtable_elt_t VFT_AbsSyntaxVisitor[];
extern const int SFT_syntax_base[];
#define ID_MMSrcModule SFT_syntax_base[0]
#define COLOR_MMSrcModule SFT_syntax_base[1]
#define COLOR_syntax_base___MMSrcModule____node SFT_syntax_base[2]
#define COLOR_syntax_base___MMSrcModule____src_local_classes SFT_syntax_base[3]
#define INIT_TABLE_POS_MMSrcModule SFT_syntax_base[4]
#define COLOR_syntax_base___MMSrcModule___node SFT_syntax_base[5]
#define COLOR_syntax_base___MMSrcModule___src_local_classes SFT_syntax_base[6]
#define COLOR_syntax_base___MMSrcModule___init SFT_syntax_base[7]
#define COLOR_syntax_base___MMGlobalClass___check_visibility SFT_syntax_base[8]
#define ID_MMSrcLocalClass SFT_syntax_base[9]
#define COLOR_MMSrcLocalClass SFT_syntax_base[10]
#define COLOR_syntax_base___MMSrcLocalClass____nodes SFT_syntax_base[11]
#define COLOR_syntax_base___MMSrcLocalClass____formal_dict SFT_syntax_base[12]
#define COLOR_syntax_base___MMSrcLocalClass____src_local_properties SFT_syntax_base[13]
#define INIT_TABLE_POS_MMSrcLocalClass SFT_syntax_base[14]
#define COLOR_syntax_base___MMSrcLocalClass___nodes SFT_syntax_base[15]
#define COLOR_syntax_base___MMSrcLocalClass___formal_dict SFT_syntax_base[16]
#define COLOR_syntax_base___MMSrcLocalClass___formal_dict__eq SFT_syntax_base[17]
#define COLOR_syntax_base___MMSrcLocalClass___src_local_properties SFT_syntax_base[18]
#define COLOR_syntax_base___MMSrcLocalClass___init SFT_syntax_base[19]
#define COLOR_syntax_base___MMGlobalProperty___check_visibility SFT_syntax_base[20]
#define ID_MMSrcLocalProperty SFT_syntax_base[21]
#define COLOR_MMSrcLocalProperty SFT_syntax_base[22]
#define COLOR_syntax_base___MMSrcLocalProperty____node SFT_syntax_base[23]
#define INIT_TABLE_POS_MMSrcLocalProperty SFT_syntax_base[24]
#define COLOR_syntax_base___MMSrcLocalProperty___node SFT_syntax_base[25]
#define ID_MMSrcAttribute SFT_syntax_base[26]
#define COLOR_MMSrcAttribute SFT_syntax_base[27]
#define INIT_TABLE_POS_MMSrcAttribute SFT_syntax_base[28]
#define COLOR_syntax_base___MMSrcAttribute___init SFT_syntax_base[29]
#define ID_MMSrcMethod SFT_syntax_base[30]
#define COLOR_MMSrcMethod SFT_syntax_base[31]
#define INIT_TABLE_POS_MMSrcMethod SFT_syntax_base[32]
#define ID_MMAttrImplementationMethod SFT_syntax_base[33]
#define COLOR_MMAttrImplementationMethod SFT_syntax_base[34]
#define INIT_TABLE_POS_MMAttrImplementationMethod SFT_syntax_base[35]
#define ID_MMReadImplementationMethod SFT_syntax_base[36]
#define COLOR_MMReadImplementationMethod SFT_syntax_base[37]
#define INIT_TABLE_POS_MMReadImplementationMethod SFT_syntax_base[38]
#define COLOR_syntax_base___MMReadImplementationMethod___init SFT_syntax_base[39]
#define ID_MMWriteImplementationMethod SFT_syntax_base[40]
#define COLOR_MMWriteImplementationMethod SFT_syntax_base[41]
#define INIT_TABLE_POS_MMWriteImplementationMethod SFT_syntax_base[42]
#define COLOR_syntax_base___MMWriteImplementationMethod___init SFT_syntax_base[43]
#define ID_MMMethSrcMethod SFT_syntax_base[44]
#define COLOR_MMMethSrcMethod SFT_syntax_base[45]
#define INIT_TABLE_POS_MMMethSrcMethod SFT_syntax_base[46]
#define COLOR_syntax_base___MMMethSrcMethod___init SFT_syntax_base[47]
#define ID_MMSrcTypeProperty SFT_syntax_base[48]
#define COLOR_MMSrcTypeProperty SFT_syntax_base[49]
#define INIT_TABLE_POS_MMSrcTypeProperty SFT_syntax_base[50]
#define COLOR_syntax_base___MMSrcTypeProperty___init SFT_syntax_base[51]
#define ID_Variable SFT_syntax_base[52]
#define COLOR_Variable SFT_syntax_base[53]
#define COLOR_syntax_base___Variable____name SFT_syntax_base[54]
#define COLOR_syntax_base___Variable____decl SFT_syntax_base[55]
#define COLOR_syntax_base___Variable____stype SFT_syntax_base[56]
#define INIT_TABLE_POS_Variable SFT_syntax_base[57]
#define COLOR_syntax_base___Variable___name SFT_syntax_base[58]
#define COLOR_syntax_base___Variable___decl SFT_syntax_base[59]
#define COLOR_syntax_base___Variable___stype SFT_syntax_base[60]
#define COLOR_syntax_base___Variable___stype__eq SFT_syntax_base[61]
#define COLOR_syntax_base___Variable___init SFT_syntax_base[62]
#define ID_AbsSyntaxVisitor SFT_syntax_base[63]
#define COLOR_AbsSyntaxVisitor SFT_syntax_base[64]
#define COLOR_syntax_base___AbsSyntaxVisitor____module SFT_syntax_base[65]
#define COLOR_syntax_base___AbsSyntaxVisitor____local_class SFT_syntax_base[66]
#define COLOR_syntax_base___AbsSyntaxVisitor____local_property SFT_syntax_base[67]
#define COLOR_syntax_base___AbsSyntaxVisitor____tc SFT_syntax_base[68]
#define INIT_TABLE_POS_AbsSyntaxVisitor SFT_syntax_base[69]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_bool SFT_syntax_base[70]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_int SFT_syntax_base[71]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_float SFT_syntax_base[72]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_char SFT_syntax_base[73]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_string SFT_syntax_base[74]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_collection SFT_syntax_base[75]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_array SFT_syntax_base[76]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_discrete SFT_syntax_base[77]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_range SFT_syntax_base[78]
#define COLOR_syntax_base___AbsSyntaxVisitor___type_none SFT_syntax_base[79]
#define COLOR_syntax_base___AbsSyntaxVisitor___module SFT_syntax_base[80]
#define COLOR_syntax_base___AbsSyntaxVisitor___module__eq SFT_syntax_base[81]
#define COLOR_syntax_base___AbsSyntaxVisitor___local_class SFT_syntax_base[82]
#define COLOR_syntax_base___AbsSyntaxVisitor___local_class__eq SFT_syntax_base[83]
#define COLOR_syntax_base___AbsSyntaxVisitor___local_property SFT_syntax_base[84]
#define COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq SFT_syntax_base[85]
#define COLOR_syntax_base___AbsSyntaxVisitor___tc SFT_syntax_base[86]
#define COLOR_syntax_base___AbsSyntaxVisitor___error SFT_syntax_base[87]
#define COLOR_syntax_base___AbsSyntaxVisitor___warning SFT_syntax_base[88]
#define COLOR_syntax_base___AbsSyntaxVisitor___check_conform SFT_syntax_base[89]
#define COLOR_syntax_base___AbsSyntaxVisitor___init SFT_syntax_base[90]
#define COLOR_syntax_base___PNode___accept_abs_syntax_visitor SFT_syntax_base[91]
#define COLOR_syntax_base___Token____symbol SFT_syntax_base[92]
#define COLOR_syntax_base___Token___to_symbol SFT_syntax_base[93]
#define COLOR_syntax_base___PClassdef___local_class SFT_syntax_base[94]
#define COLOR_syntax_base___AAttrPropdef___prop SFT_syntax_base[95]
#define COLOR_syntax_base___AAttrPropdef___readmethod SFT_syntax_base[96]
#define COLOR_syntax_base___AAttrPropdef___writemethod SFT_syntax_base[97]
#define COLOR_syntax_base___AMethPropdef___method SFT_syntax_base[98]
#define COLOR_syntax_base___ATypePropdef___prop SFT_syntax_base[99]
#define COLOR_syntax_base___PParam___position SFT_syntax_base[100]
#define COLOR_syntax_base___PParam___variable SFT_syntax_base[101]
#define COLOR_syntax_base___PType___get_local_class SFT_syntax_base[102]
#define COLOR_syntax_base___PType___get_stype SFT_syntax_base[103]
#define COLOR_syntax_base___PType___get_unchecked_stype SFT_syntax_base[104]
#define COLOR_syntax_base___PType___check_conform SFT_syntax_base[105]
#define COLOR_syntax_base___AType____stype_cache SFT_syntax_base[106]
#define COLOR_syntax_base___AType____stype_cached SFT_syntax_base[107]
#define COLOR_syntax_base___PExpr___stype SFT_syntax_base[108]
#define ATTR_syntax_base___MMSrcModule____node(recv) ATTR(recv, COLOR_syntax_base___MMSrcModule____node)
typedef val_t (* syntax_base___MMSrcModule___node_t)(val_t  self);
val_t syntax_base___MMSrcModule___node(val_t  self);
#define ATTR_syntax_base___MMSrcModule____src_local_classes(recv) ATTR(recv, COLOR_syntax_base___MMSrcModule____src_local_classes)
typedef val_t (* syntax_base___MMSrcModule___src_local_classes_t)(val_t  self);
val_t syntax_base___MMSrcModule___src_local_classes(val_t  self);
typedef void (* syntax_base___MMSrcModule___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void syntax_base___MMSrcModule___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_syntax_base___MMSrcModule___init(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* syntax_base___MMGlobalClass___check_visibility_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t syntax_base___MMGlobalClass___check_visibility(val_t  self, val_t  param0, val_t  param1, val_t  param2);
#define ATTR_syntax_base___MMSrcLocalClass____nodes(recv) ATTR(recv, COLOR_syntax_base___MMSrcLocalClass____nodes)
typedef val_t (* syntax_base___MMSrcLocalClass___nodes_t)(val_t  self);
val_t syntax_base___MMSrcLocalClass___nodes(val_t  self);
#define ATTR_syntax_base___MMSrcLocalClass____formal_dict(recv) ATTR(recv, COLOR_syntax_base___MMSrcLocalClass____formal_dict)
typedef val_t (* syntax_base___MMSrcLocalClass___formal_dict_t)(val_t  self);
val_t syntax_base___MMSrcLocalClass___formal_dict(val_t  self);
typedef void (* syntax_base___MMSrcLocalClass___formal_dict__eq_t)(val_t  self, val_t  param0);
void syntax_base___MMSrcLocalClass___formal_dict__eq(val_t  self, val_t  param0);
#define ATTR_syntax_base___MMSrcLocalClass____src_local_properties(recv) ATTR(recv, COLOR_syntax_base___MMSrcLocalClass____src_local_properties)
typedef val_t (* syntax_base___MMSrcLocalClass___src_local_properties_t)(val_t  self);
val_t syntax_base___MMSrcLocalClass___src_local_properties(val_t  self);
typedef void (* syntax_base___MMSrcLocalClass___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void syntax_base___MMSrcLocalClass___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_syntax_base___MMSrcLocalClass___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* syntax_base___MMGlobalProperty___check_visibility_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
val_t syntax_base___MMGlobalProperty___check_visibility(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_syntax_base___MMSrcLocalProperty____node(recv) ATTR(recv, COLOR_syntax_base___MMSrcLocalProperty____node)
typedef val_t (* syntax_base___MMSrcLocalProperty___node_t)(val_t  self);
val_t syntax_base___MMSrcLocalProperty___node(val_t  self);
typedef void (* syntax_base___MMSrcAttribute___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void syntax_base___MMSrcAttribute___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_syntax_base___MMSrcAttribute___init(val_t  param0, val_t  param1, val_t  param2);
typedef void (* syntax_base___MMReadImplementationMethod___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void syntax_base___MMReadImplementationMethod___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_syntax_base___MMReadImplementationMethod___init(val_t  param0, val_t  param1, val_t  param2);
typedef void (* syntax_base___MMWriteImplementationMethod___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void syntax_base___MMWriteImplementationMethod___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_syntax_base___MMWriteImplementationMethod___init(val_t  param0, val_t  param1, val_t  param2);
typedef void (* syntax_base___MMMethSrcMethod___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void syntax_base___MMMethSrcMethod___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_syntax_base___MMMethSrcMethod___init(val_t  param0, val_t  param1, val_t  param2);
typedef void (* syntax_base___MMSrcTypeProperty___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void syntax_base___MMSrcTypeProperty___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_syntax_base___MMSrcTypeProperty___init(val_t  param0, val_t  param1, val_t  param2);
#define ATTR_syntax_base___Variable____name(recv) ATTR(recv, COLOR_syntax_base___Variable____name)
typedef val_t (* syntax_base___Variable___name_t)(val_t  self);
val_t syntax_base___Variable___name(val_t  self);
#define ATTR_syntax_base___Variable____decl(recv) ATTR(recv, COLOR_syntax_base___Variable____decl)
typedef val_t (* syntax_base___Variable___decl_t)(val_t  self);
val_t syntax_base___Variable___decl(val_t  self);
#define ATTR_syntax_base___Variable____stype(recv) ATTR(recv, COLOR_syntax_base___Variable____stype)
typedef val_t (* syntax_base___Variable___stype_t)(val_t  self);
val_t syntax_base___Variable___stype(val_t  self);
typedef void (* syntax_base___Variable___stype__eq_t)(val_t  self, val_t  param0);
void syntax_base___Variable___stype__eq(val_t  self, val_t  param0);
typedef void (* syntax_base___Variable___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void syntax_base___Variable___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_syntax_base___Variable___init(val_t  param0, val_t  param1);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_bool_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_bool(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_int_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_int(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_float_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_float(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_char_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_char(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_string_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_string(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_collection_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_collection(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_array_t)(val_t  self, val_t  param0);
val_t syntax_base___AbsSyntaxVisitor___type_array(val_t  self, val_t  param0);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_discrete_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_discrete(val_t  self);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_range_t)(val_t  self, val_t  param0);
val_t syntax_base___AbsSyntaxVisitor___type_range(val_t  self, val_t  param0);
typedef val_t (* syntax_base___AbsSyntaxVisitor___type_none_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___type_none(val_t  self);
#define ATTR_syntax_base___AbsSyntaxVisitor____module(recv) ATTR(recv, COLOR_syntax_base___AbsSyntaxVisitor____module)
typedef val_t (* syntax_base___AbsSyntaxVisitor___module_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___module(val_t  self);
typedef void (* syntax_base___AbsSyntaxVisitor___module__eq_t)(val_t  self, val_t  param0);
void syntax_base___AbsSyntaxVisitor___module__eq(val_t  self, val_t  param0);
#define ATTR_syntax_base___AbsSyntaxVisitor____local_class(recv) ATTR(recv, COLOR_syntax_base___AbsSyntaxVisitor____local_class)
typedef val_t (* syntax_base___AbsSyntaxVisitor___local_class_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___local_class(val_t  self);
typedef void (* syntax_base___AbsSyntaxVisitor___local_class__eq_t)(val_t  self, val_t  param0);
void syntax_base___AbsSyntaxVisitor___local_class__eq(val_t  self, val_t  param0);
#define ATTR_syntax_base___AbsSyntaxVisitor____local_property(recv) ATTR(recv, COLOR_syntax_base___AbsSyntaxVisitor____local_property)
typedef val_t (* syntax_base___AbsSyntaxVisitor___local_property_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___local_property(val_t  self);
typedef void (* syntax_base___AbsSyntaxVisitor___local_property__eq_t)(val_t  self, val_t  param0);
void syntax_base___AbsSyntaxVisitor___local_property__eq(val_t  self, val_t  param0);
#define ATTR_syntax_base___AbsSyntaxVisitor____tc(recv) ATTR(recv, COLOR_syntax_base___AbsSyntaxVisitor____tc)
typedef val_t (* syntax_base___AbsSyntaxVisitor___tc_t)(val_t  self);
val_t syntax_base___AbsSyntaxVisitor___tc(val_t  self);
typedef void (* syntax_base___AbsSyntaxVisitor___error_t)(val_t  self, val_t  param0, val_t  param1);
void syntax_base___AbsSyntaxVisitor___error(val_t  self, val_t  param0, val_t  param1);
typedef void (* syntax_base___AbsSyntaxVisitor___warning_t)(val_t  self, val_t  param0, val_t  param1);
void syntax_base___AbsSyntaxVisitor___warning(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* syntax_base___AbsSyntaxVisitor___check_conform_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t syntax_base___AbsSyntaxVisitor___check_conform(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* syntax_base___AbsSyntaxVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void syntax_base___AbsSyntaxVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_syntax_base___AbsSyntaxVisitor___init(val_t  param0, val_t  param1);
typedef void (* syntax_base___PNode___accept_abs_syntax_visitor_t)(val_t  self, val_t  param0);
void syntax_base___PNode___accept_abs_syntax_visitor(val_t  self, val_t  param0);
#define ATTR_syntax_base___Token____symbol(recv) ATTR(recv, COLOR_syntax_base___Token____symbol)
typedef val_t (* syntax_base___Token___to_symbol_t)(val_t  self);
val_t syntax_base___Token___to_symbol(val_t  self);
typedef val_t (* syntax_base___PClassdef___local_class_t)(val_t  self);
val_t syntax_base___PClassdef___local_class(val_t  self);
typedef val_t (* syntax_base___AAttrPropdef___prop_t)(val_t  self);
val_t syntax_base___AAttrPropdef___prop(val_t  self);
typedef val_t (* syntax_base___AAttrPropdef___readmethod_t)(val_t  self);
val_t syntax_base___AAttrPropdef___readmethod(val_t  self);
typedef val_t (* syntax_base___AAttrPropdef___writemethod_t)(val_t  self);
val_t syntax_base___AAttrPropdef___writemethod(val_t  self);
typedef val_t (* syntax_base___AMethPropdef___method_t)(val_t  self);
val_t syntax_base___AMethPropdef___method(val_t  self);
typedef val_t (* syntax_base___ATypePropdef___prop_t)(val_t  self);
val_t syntax_base___ATypePropdef___prop(val_t  self);
typedef val_t (* syntax_base___PParam___position_t)(val_t  self);
val_t syntax_base___PParam___position(val_t  self);
typedef val_t (* syntax_base___PParam___variable_t)(val_t  self);
val_t syntax_base___PParam___variable(val_t  self);
typedef val_t (* syntax_base___PType___get_local_class_t)(val_t  self, val_t  param0);
val_t syntax_base___PType___get_local_class(val_t  self, val_t  param0);
typedef val_t (* syntax_base___PType___get_stype_t)(val_t  self, val_t  param0);
val_t syntax_base___PType___get_stype(val_t  self, val_t  param0);
typedef val_t (* syntax_base___PType___get_unchecked_stype_t)(val_t  self, val_t  param0);
val_t syntax_base___PType___get_unchecked_stype(val_t  self, val_t  param0);
typedef void (* syntax_base___PType___check_conform_t)(val_t  self, val_t  param0);
void syntax_base___PType___check_conform(val_t  self, val_t  param0);
#define ATTR_syntax_base___AType____stype_cache(recv) ATTR(recv, COLOR_syntax_base___AType____stype_cache)
#define ATTR_syntax_base___AType____stype_cached(recv) ATTR(recv, COLOR_syntax_base___AType____stype_cached)
typedef val_t (* syntax_base___AType___get_local_class_t)(val_t  self, val_t  param0);
val_t syntax_base___AType___get_local_class(val_t  self, val_t  param0);
typedef val_t (* syntax_base___AType___get_unchecked_stype_t)(val_t  self, val_t  param0);
val_t syntax_base___AType___get_unchecked_stype(val_t  self, val_t  param0);
typedef val_t (* syntax_base___AType___get_stype_t)(val_t  self, val_t  param0);
val_t syntax_base___AType___get_stype(val_t  self, val_t  param0);
typedef void (* syntax_base___AType___check_conform_t)(val_t  self, val_t  param0);
void syntax_base___AType___check_conform(val_t  self, val_t  param0);
typedef val_t (* syntax_base___PExpr___stype_t)(val_t  self);
val_t syntax_base___PExpr___stype(val_t  self);
#endif
