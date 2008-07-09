#ifndef abstractmetamodel__sep
#define abstractmetamodel__sep
#include "partial_order._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_MMContext[];

extern const classtable_elt_t VFT_MMDirectory[];

extern const classtable_elt_t VFT_MMModule[];

extern const classtable_elt_t VFT_MMGlobalClass[];

extern const classtable_elt_t VFT_MMLocalClass[];

extern const classtable_elt_t VFT_MMGlobalProperty[];

extern const classtable_elt_t VFT_MMLocalProperty[];

extern const classtable_elt_t VFT_MMAttribute[];

extern const classtable_elt_t VFT_MMMethod[];

extern const classtable_elt_t VFT_MMConcreteClass[];

extern const classtable_elt_t VFT_MMConcreteProperty[];
extern const int SFT_abstractmetamodel[];
#define ID_MMContext SFT_abstractmetamodel[0]
#define COLOR_MMContext SFT_abstractmetamodel[1]
#define COLOR_abstractmetamodel___MMContext____module_hierarchy SFT_abstractmetamodel[2]
#define COLOR_abstractmetamodel___MMContext____class_hierarchy SFT_abstractmetamodel[3]
#define COLOR_abstractmetamodel___MMContext____global_classes SFT_abstractmetamodel[4]
#define COLOR_abstractmetamodel___MMContext____modules SFT_abstractmetamodel[5]
#define INIT_TABLE_POS_MMContext SFT_abstractmetamodel[6]
#define COLOR_abstractmetamodel___MMContext___init SFT_abstractmetamodel[7]
#define COLOR_abstractmetamodel___MMContext___module_hierarchy SFT_abstractmetamodel[8]
#define COLOR_abstractmetamodel___MMContext___class_hierarchy SFT_abstractmetamodel[9]
#define COLOR_abstractmetamodel___MMContext___modules SFT_abstractmetamodel[10]
#define COLOR_abstractmetamodel___MMContext___add_module SFT_abstractmetamodel[11]
#define COLOR_abstractmetamodel___MMContext___add_global_class SFT_abstractmetamodel[12]
#define COLOR_abstractmetamodel___MMContext___add_local_class SFT_abstractmetamodel[13]
#define ID_MMDirectory SFT_abstractmetamodel[14]
#define COLOR_MMDirectory SFT_abstractmetamodel[15]
#define COLOR_abstractmetamodel___MMDirectory____name SFT_abstractmetamodel[16]
#define COLOR_abstractmetamodel___MMDirectory____path SFT_abstractmetamodel[17]
#define COLOR_abstractmetamodel___MMDirectory____parent SFT_abstractmetamodel[18]
#define COLOR_abstractmetamodel___MMDirectory____owner SFT_abstractmetamodel[19]
#define COLOR_abstractmetamodel___MMDirectory____modules SFT_abstractmetamodel[20]
#define COLOR_abstractmetamodel___MMDirectory____dhe SFT_abstractmetamodel[21]
#define INIT_TABLE_POS_MMDirectory SFT_abstractmetamodel[22]
#define COLOR_abstractmetamodel___MMDirectory___name SFT_abstractmetamodel[23]
#define COLOR_abstractmetamodel___MMDirectory___path SFT_abstractmetamodel[24]
#define COLOR_abstractmetamodel___MMDirectory___parent SFT_abstractmetamodel[25]
#define COLOR_abstractmetamodel___MMDirectory___owner SFT_abstractmetamodel[26]
#define COLOR_abstractmetamodel___MMDirectory___owner__eq SFT_abstractmetamodel[27]
#define COLOR_abstractmetamodel___MMDirectory___modules SFT_abstractmetamodel[28]
#define COLOR_abstractmetamodel___MMDirectory___add_module SFT_abstractmetamodel[29]
#define COLOR_abstractmetamodel___MMDirectory___dhe SFT_abstractmetamodel[30]
#define COLOR_abstractmetamodel___MMDirectory___init SFT_abstractmetamodel[31]
#define COLOR_abstractmetamodel___MMDirectory___full_name_for SFT_abstractmetamodel[32]
#define ID_MMModule SFT_abstractmetamodel[33]
#define COLOR_MMModule SFT_abstractmetamodel[34]
#define COLOR_abstractmetamodel___MMModule____context SFT_abstractmetamodel[35]
#define COLOR_abstractmetamodel___MMModule____name SFT_abstractmetamodel[36]
#define COLOR_abstractmetamodel___MMModule____full_name SFT_abstractmetamodel[37]
#define COLOR_abstractmetamodel___MMModule____directory SFT_abstractmetamodel[38]
#define COLOR_abstractmetamodel___MMModule____mhe SFT_abstractmetamodel[39]
#define COLOR_abstractmetamodel___MMModule____global_classes SFT_abstractmetamodel[40]
#define COLOR_abstractmetamodel___MMModule____local_classes SFT_abstractmetamodel[41]
#define COLOR_abstractmetamodel___MMModule____class_specialization_hierarchy SFT_abstractmetamodel[42]
#define COLOR_abstractmetamodel___MMModule____intrude_modules SFT_abstractmetamodel[43]
#define COLOR_abstractmetamodel___MMModule____public_modules SFT_abstractmetamodel[44]
#define COLOR_abstractmetamodel___MMModule____private_modules SFT_abstractmetamodel[45]
#define COLOR_abstractmetamodel___MMModule____explicit_imported_modules SFT_abstractmetamodel[46]
#define COLOR_abstractmetamodel___MMModule____local_class_by_global SFT_abstractmetamodel[47]
#define COLOR_abstractmetamodel___MMModule____global_class_by_name SFT_abstractmetamodel[48]
#define INIT_TABLE_POS_MMModule SFT_abstractmetamodel[49]
#define COLOR_abstractmetamodel___MMModule___context SFT_abstractmetamodel[50]
#define COLOR_abstractmetamodel___MMModule___name SFT_abstractmetamodel[51]
#define COLOR_abstractmetamodel___MMModule___full_name SFT_abstractmetamodel[52]
#define COLOR_abstractmetamodel___MMModule___directory SFT_abstractmetamodel[53]
#define COLOR_abstractmetamodel___MMModule___mhe SFT_abstractmetamodel[54]
#define COLOR_abstractmetamodel___MMModule___global_classes SFT_abstractmetamodel[55]
#define COLOR_abstractmetamodel___MMModule___local_classes SFT_abstractmetamodel[56]
#define COLOR_abstractmetamodel___MMModule___class_specialization_hierarchy SFT_abstractmetamodel[57]
#define COLOR_abstractmetamodel___MMModule___explicit_imported_modules SFT_abstractmetamodel[58]
#define COLOR_abstractmetamodel___MMModule___init SFT_abstractmetamodel[59]
#define COLOR_abstractmetamodel___MMModule___add_super_module SFT_abstractmetamodel[60]
#define COLOR_abstractmetamodel___MMModule___visibility_for SFT_abstractmetamodel[61]
#define COLOR_abstractmetamodel___MMModule_____bra SFT_abstractmetamodel[62]
#define COLOR_abstractmetamodel___MMModule___add_local_class SFT_abstractmetamodel[63]
#define COLOR_abstractmetamodel___MMModule___class_by_name SFT_abstractmetamodel[64]
#define COLOR_abstractmetamodel___MMModule___has_global_class_named SFT_abstractmetamodel[65]
#define COLOR_abstractmetamodel___MMModule___global_class_named SFT_abstractmetamodel[66]
#define COLOR_abstractmetamodel___MMModule___set_supers_class SFT_abstractmetamodel[67]
#define COLOR_abstractmetamodel___MMModule___register_global_class SFT_abstractmetamodel[68]
#define ID_MMGlobalClass SFT_abstractmetamodel[69]
#define COLOR_MMGlobalClass SFT_abstractmetamodel[70]
#define COLOR_abstractmetamodel___MMGlobalClass____intro SFT_abstractmetamodel[71]
#define COLOR_abstractmetamodel___MMGlobalClass____class_refinement_hierarchy SFT_abstractmetamodel[72]
#define COLOR_abstractmetamodel___MMGlobalClass____is_interface SFT_abstractmetamodel[73]
#define COLOR_abstractmetamodel___MMGlobalClass____is_abstract SFT_abstractmetamodel[74]
#define COLOR_abstractmetamodel___MMGlobalClass____is_universal SFT_abstractmetamodel[75]
#define COLOR_abstractmetamodel___MMGlobalClass____visibility_level SFT_abstractmetamodel[76]
#define INIT_TABLE_POS_MMGlobalClass SFT_abstractmetamodel[77]
#define COLOR_abstractmetamodel___MMGlobalClass___intro SFT_abstractmetamodel[78]
#define COLOR_abstractmetamodel___MMGlobalClass___class_refinement_hierarchy SFT_abstractmetamodel[79]
#define COLOR_abstractmetamodel___MMGlobalClass___init SFT_abstractmetamodel[80]
#define COLOR_abstractmetamodel___MMGlobalClass___name SFT_abstractmetamodel[81]
#define COLOR_abstractmetamodel___MMGlobalClass___module SFT_abstractmetamodel[82]
#define COLOR_abstractmetamodel___MMGlobalClass___register_local_class SFT_abstractmetamodel[83]
#define COLOR_abstractmetamodel___MMGlobalClass___is_interface SFT_abstractmetamodel[84]
#define COLOR_abstractmetamodel___MMGlobalClass___is_interface__eq SFT_abstractmetamodel[85]
#define COLOR_abstractmetamodel___MMGlobalClass___is_abstract SFT_abstractmetamodel[86]
#define COLOR_abstractmetamodel___MMGlobalClass___is_abstract__eq SFT_abstractmetamodel[87]
#define COLOR_abstractmetamodel___MMGlobalClass___is_universal SFT_abstractmetamodel[88]
#define COLOR_abstractmetamodel___MMGlobalClass___is_universal__eq SFT_abstractmetamodel[89]
#define COLOR_abstractmetamodel___MMGlobalClass___visibility_level SFT_abstractmetamodel[90]
#define COLOR_abstractmetamodel___MMGlobalClass___visibility_level__eq SFT_abstractmetamodel[91]
#define ID_MMLocalClass SFT_abstractmetamodel[92]
#define COLOR_MMLocalClass SFT_abstractmetamodel[93]
#define COLOR_abstractmetamodel___MMLocalClass____name SFT_abstractmetamodel[94]
#define COLOR_abstractmetamodel___MMLocalClass____arity SFT_abstractmetamodel[95]
#define COLOR_abstractmetamodel___MMLocalClass____module SFT_abstractmetamodel[96]
#define COLOR_abstractmetamodel___MMLocalClass____abstract SFT_abstractmetamodel[97]
#define COLOR_abstractmetamodel___MMLocalClass____global SFT_abstractmetamodel[98]
#define COLOR_abstractmetamodel___MMLocalClass____crhe SFT_abstractmetamodel[99]
#define COLOR_abstractmetamodel___MMLocalClass____cshe SFT_abstractmetamodel[100]
#define COLOR_abstractmetamodel___MMLocalClass____che SFT_abstractmetamodel[101]
#define COLOR_abstractmetamodel___MMLocalClass____local_property_by_global SFT_abstractmetamodel[102]
#define COLOR_abstractmetamodel___MMLocalClass____global_properties SFT_abstractmetamodel[103]
#define COLOR_abstractmetamodel___MMLocalClass____properties_by_name SFT_abstractmetamodel[104]
#define INIT_TABLE_POS_MMLocalClass SFT_abstractmetamodel[105]
#define COLOR_abstractmetamodel___MMLocalClass___name SFT_abstractmetamodel[106]
#define COLOR_abstractmetamodel___MMLocalClass___arity SFT_abstractmetamodel[107]
#define COLOR_abstractmetamodel___MMLocalClass___module SFT_abstractmetamodel[108]
#define COLOR_abstractmetamodel___MMLocalClass___abstract SFT_abstractmetamodel[109]
#define COLOR_abstractmetamodel___MMLocalClass___abstract__eq SFT_abstractmetamodel[110]
#define COLOR_abstractmetamodel___MMLocalClass___global SFT_abstractmetamodel[111]
#define COLOR_abstractmetamodel___MMLocalClass___crhe SFT_abstractmetamodel[112]
#define COLOR_abstractmetamodel___MMLocalClass___cshe SFT_abstractmetamodel[113]
#define COLOR_abstractmetamodel___MMLocalClass___che SFT_abstractmetamodel[114]
#define COLOR_abstractmetamodel___MMLocalClass___local_property_by_global SFT_abstractmetamodel[115]
#define COLOR_abstractmetamodel___MMLocalClass___global_properties SFT_abstractmetamodel[116]
#define COLOR_abstractmetamodel___MMLocalClass___properties_by_name SFT_abstractmetamodel[117]
#define COLOR_abstractmetamodel___MMLocalClass___init SFT_abstractmetamodel[118]
#define COLOR_abstractmetamodel___MMLocalClass___for_module SFT_abstractmetamodel[119]
#define COLOR_abstractmetamodel___MMLocalClass___new_global SFT_abstractmetamodel[120]
#define COLOR_abstractmetamodel___MMLocalClass___set_global SFT_abstractmetamodel[121]
#define COLOR_abstractmetamodel___MMLocalClass___has_global_property_by_name SFT_abstractmetamodel[122]
#define COLOR_abstractmetamodel___MMLocalClass___get_property_by_name SFT_abstractmetamodel[123]
#define COLOR_abstractmetamodel___MMLocalClass___attribute SFT_abstractmetamodel[124]
#define COLOR_abstractmetamodel___MMLocalClass___method SFT_abstractmetamodel[125]
#define COLOR_abstractmetamodel___MMLocalClass___super_methods_named SFT_abstractmetamodel[126]
#define COLOR_abstractmetamodel___MMLocalClass___register_local_property SFT_abstractmetamodel[127]
#define COLOR_abstractmetamodel___MMLocalClass___register_global_property SFT_abstractmetamodel[128]
#define COLOR_abstractmetamodel___MMLocalClass_____bra SFT_abstractmetamodel[129]
#define COLOR_abstractmetamodel___MMLocalClass___context SFT_abstractmetamodel[130]
#define ID_MMGlobalProperty SFT_abstractmetamodel[131]
#define COLOR_MMGlobalProperty SFT_abstractmetamodel[132]
#define COLOR_abstractmetamodel___MMGlobalProperty____intro SFT_abstractmetamodel[133]
#define COLOR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy SFT_abstractmetamodel[134]
#define COLOR_abstractmetamodel___MMGlobalProperty____is_init SFT_abstractmetamodel[135]
#define COLOR_abstractmetamodel___MMGlobalProperty____visibility_level SFT_abstractmetamodel[136]
#define INIT_TABLE_POS_MMGlobalProperty SFT_abstractmetamodel[137]
#define COLOR_abstractmetamodel___MMGlobalProperty___intro SFT_abstractmetamodel[138]
#define COLOR_abstractmetamodel___MMGlobalProperty___local_class SFT_abstractmetamodel[139]
#define COLOR_abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy SFT_abstractmetamodel[140]
#define COLOR_abstractmetamodel___MMGlobalProperty___init SFT_abstractmetamodel[141]
#define COLOR_abstractmetamodel___MMGlobalProperty___add_concrete_property SFT_abstractmetamodel[142]
#define COLOR_abstractmetamodel___MMGlobalProperty___is_attribute SFT_abstractmetamodel[143]
#define COLOR_abstractmetamodel___MMGlobalProperty___is_method SFT_abstractmetamodel[144]
#define COLOR_abstractmetamodel___MMGlobalProperty___is_init SFT_abstractmetamodel[145]
#define COLOR_abstractmetamodel___MMGlobalProperty___is_init__eq SFT_abstractmetamodel[146]
#define COLOR_abstractmetamodel___MMGlobalProperty___visibility_level SFT_abstractmetamodel[147]
#define COLOR_abstractmetamodel___MMGlobalProperty___visibility_level__eq SFT_abstractmetamodel[148]
#define ID_MMLocalProperty SFT_abstractmetamodel[149]
#define COLOR_MMLocalProperty SFT_abstractmetamodel[150]
#define COLOR_abstractmetamodel___MMLocalProperty____name SFT_abstractmetamodel[151]
#define COLOR_abstractmetamodel___MMLocalProperty____local_class SFT_abstractmetamodel[152]
#define COLOR_abstractmetamodel___MMLocalProperty____global SFT_abstractmetamodel[153]
#define COLOR_abstractmetamodel___MMLocalProperty____super_prop SFT_abstractmetamodel[154]
#define COLOR_abstractmetamodel___MMLocalProperty____concrete_property SFT_abstractmetamodel[155]
#define INIT_TABLE_POS_MMLocalProperty SFT_abstractmetamodel[156]
#define COLOR_abstractmetamodel___MMLocalProperty___name SFT_abstractmetamodel[157]
#define COLOR_abstractmetamodel___MMLocalProperty___local_class SFT_abstractmetamodel[158]
#define COLOR_abstractmetamodel___MMLocalProperty___global SFT_abstractmetamodel[159]
#define COLOR_abstractmetamodel___MMLocalProperty___super_prop SFT_abstractmetamodel[160]
#define COLOR_abstractmetamodel___MMLocalProperty___concrete_property SFT_abstractmetamodel[161]
#define COLOR_abstractmetamodel___MMLocalProperty___module SFT_abstractmetamodel[162]
#define COLOR_abstractmetamodel___MMLocalProperty___full_name SFT_abstractmetamodel[163]
#define COLOR_abstractmetamodel___MMLocalProperty___set_global SFT_abstractmetamodel[164]
#define COLOR_abstractmetamodel___MMLocalProperty___init SFT_abstractmetamodel[165]
#define ID_MMAttribute SFT_abstractmetamodel[166]
#define COLOR_MMAttribute SFT_abstractmetamodel[167]
#define INIT_TABLE_POS_MMAttribute SFT_abstractmetamodel[168]
#define ID_MMMethod SFT_abstractmetamodel[169]
#define COLOR_MMMethod SFT_abstractmetamodel[170]
#define INIT_TABLE_POS_MMMethod SFT_abstractmetamodel[171]
#define ID_MMConcreteClass SFT_abstractmetamodel[172]
#define COLOR_MMConcreteClass SFT_abstractmetamodel[173]
#define INIT_TABLE_POS_MMConcreteClass SFT_abstractmetamodel[174]
#define ID_MMConcreteProperty SFT_abstractmetamodel[175]
#define COLOR_MMConcreteProperty SFT_abstractmetamodel[176]
#define COLOR_abstractmetamodel___MMConcreteProperty____cprhe SFT_abstractmetamodel[177]
#define COLOR_abstractmetamodel___MMConcreteProperty____need_super SFT_abstractmetamodel[178]
#define INIT_TABLE_POS_MMConcreteProperty SFT_abstractmetamodel[179]
#define COLOR_abstractmetamodel___MMConcreteProperty___cprhe SFT_abstractmetamodel[180]
#define COLOR_abstractmetamodel___MMConcreteProperty___need_super SFT_abstractmetamodel[181]
#define COLOR_abstractmetamodel___MMConcreteProperty___need_super__eq SFT_abstractmetamodel[182]
#define COLOR_abstractmetamodel___MMConcreteProperty___new_global SFT_abstractmetamodel[183]
typedef void (* abstractmetamodel___MMContext___init_t)(val_t  self, int* init_table);
void abstractmetamodel___MMContext___init(val_t  self, int* init_table);
val_t NEW_abstractmetamodel___MMContext___init();
#define ATTR_abstractmetamodel___MMContext____module_hierarchy(recv) ATTR(recv, COLOR_abstractmetamodel___MMContext____module_hierarchy)
typedef val_t (* abstractmetamodel___MMContext___module_hierarchy_t)(val_t  self);
val_t abstractmetamodel___MMContext___module_hierarchy(val_t  self);
#define ATTR_abstractmetamodel___MMContext____class_hierarchy(recv) ATTR(recv, COLOR_abstractmetamodel___MMContext____class_hierarchy)
typedef val_t (* abstractmetamodel___MMContext___class_hierarchy_t)(val_t  self);
val_t abstractmetamodel___MMContext___class_hierarchy(val_t  self);
#define ATTR_abstractmetamodel___MMContext____global_classes(recv) ATTR(recv, COLOR_abstractmetamodel___MMContext____global_classes)
#define ATTR_abstractmetamodel___MMContext____modules(recv) ATTR(recv, COLOR_abstractmetamodel___MMContext____modules)
typedef val_t (* abstractmetamodel___MMContext___modules_t)(val_t  self);
val_t abstractmetamodel___MMContext___modules(val_t  self);
typedef void (* abstractmetamodel___MMContext___add_module_t)(val_t  self, val_t  param0, val_t  param1);
void abstractmetamodel___MMContext___add_module(val_t  self, val_t  param0, val_t  param1);
typedef void (* abstractmetamodel___MMContext___add_global_class_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMContext___add_global_class(val_t  self, val_t  param0);
typedef void (* abstractmetamodel___MMContext___add_local_class_t)(val_t  self, val_t  param0, val_t  param1);
void abstractmetamodel___MMContext___add_local_class(val_t  self, val_t  param0, val_t  param1);
#define ATTR_abstractmetamodel___MMDirectory____name(recv) ATTR(recv, COLOR_abstractmetamodel___MMDirectory____name)
typedef val_t (* abstractmetamodel___MMDirectory___name_t)(val_t  self);
val_t abstractmetamodel___MMDirectory___name(val_t  self);
#define ATTR_abstractmetamodel___MMDirectory____path(recv) ATTR(recv, COLOR_abstractmetamodel___MMDirectory____path)
typedef val_t (* abstractmetamodel___MMDirectory___path_t)(val_t  self);
val_t abstractmetamodel___MMDirectory___path(val_t  self);
#define ATTR_abstractmetamodel___MMDirectory____parent(recv) ATTR(recv, COLOR_abstractmetamodel___MMDirectory____parent)
typedef val_t (* abstractmetamodel___MMDirectory___parent_t)(val_t  self);
val_t abstractmetamodel___MMDirectory___parent(val_t  self);
#define ATTR_abstractmetamodel___MMDirectory____owner(recv) ATTR(recv, COLOR_abstractmetamodel___MMDirectory____owner)
typedef val_t (* abstractmetamodel___MMDirectory___owner_t)(val_t  self);
val_t abstractmetamodel___MMDirectory___owner(val_t  self);
typedef void (* abstractmetamodel___MMDirectory___owner__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMDirectory___owner__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMDirectory____modules(recv) ATTR(recv, COLOR_abstractmetamodel___MMDirectory____modules)
typedef val_t (* abstractmetamodel___MMDirectory___modules_t)(val_t  self);
val_t abstractmetamodel___MMDirectory___modules(val_t  self);
typedef void (* abstractmetamodel___MMDirectory___add_module_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMDirectory___add_module(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMDirectory____dhe(recv) ATTR(recv, COLOR_abstractmetamodel___MMDirectory____dhe)
typedef val_t (* abstractmetamodel___MMDirectory___dhe_t)(val_t  self);
val_t abstractmetamodel___MMDirectory___dhe(val_t  self);
typedef void (* abstractmetamodel___MMDirectory___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void abstractmetamodel___MMDirectory___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_abstractmetamodel___MMDirectory___init(val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* abstractmetamodel___MMDirectory___full_name_for_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMDirectory___full_name_for(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMModule____context(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____context)
typedef val_t (* abstractmetamodel___MMModule___context_t)(val_t  self);
val_t abstractmetamodel___MMModule___context(val_t  self);
#define ATTR_abstractmetamodel___MMModule____name(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____name)
typedef val_t (* abstractmetamodel___MMModule___name_t)(val_t  self);
val_t abstractmetamodel___MMModule___name(val_t  self);
#define ATTR_abstractmetamodel___MMModule____full_name(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____full_name)
typedef val_t (* abstractmetamodel___MMModule___full_name_t)(val_t  self);
val_t abstractmetamodel___MMModule___full_name(val_t  self);
#define ATTR_abstractmetamodel___MMModule____directory(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____directory)
typedef val_t (* abstractmetamodel___MMModule___directory_t)(val_t  self);
val_t abstractmetamodel___MMModule___directory(val_t  self);
#define ATTR_abstractmetamodel___MMModule____mhe(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____mhe)
typedef val_t (* abstractmetamodel___MMModule___mhe_t)(val_t  self);
val_t abstractmetamodel___MMModule___mhe(val_t  self);
#define ATTR_abstractmetamodel___MMModule____global_classes(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____global_classes)
typedef val_t (* abstractmetamodel___MMModule___global_classes_t)(val_t  self);
val_t abstractmetamodel___MMModule___global_classes(val_t  self);
#define ATTR_abstractmetamodel___MMModule____local_classes(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____local_classes)
typedef val_t (* abstractmetamodel___MMModule___local_classes_t)(val_t  self);
val_t abstractmetamodel___MMModule___local_classes(val_t  self);
#define ATTR_abstractmetamodel___MMModule____class_specialization_hierarchy(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____class_specialization_hierarchy)
typedef val_t (* abstractmetamodel___MMModule___class_specialization_hierarchy_t)(val_t  self);
val_t abstractmetamodel___MMModule___class_specialization_hierarchy(val_t  self);
#define ATTR_abstractmetamodel___MMModule____intrude_modules(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____intrude_modules)
#define ATTR_abstractmetamodel___MMModule____public_modules(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____public_modules)
#define ATTR_abstractmetamodel___MMModule____private_modules(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____private_modules)
#define ATTR_abstractmetamodel___MMModule____explicit_imported_modules(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____explicit_imported_modules)
typedef val_t (* abstractmetamodel___MMModule___explicit_imported_modules_t)(val_t  self);
val_t abstractmetamodel___MMModule___explicit_imported_modules(val_t  self);
#define ATTR_abstractmetamodel___MMModule____local_class_by_global(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____local_class_by_global)
#define ATTR_abstractmetamodel___MMModule____global_class_by_name(recv) ATTR(recv, COLOR_abstractmetamodel___MMModule____global_class_by_name)
typedef void (* abstractmetamodel___MMModule___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void abstractmetamodel___MMModule___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_abstractmetamodel___MMModule___init(val_t  param0, val_t  param1, val_t  param2);
typedef void (* abstractmetamodel___MMModule___add_super_module_t)(val_t  self, val_t  param0, val_t  param1);
void abstractmetamodel___MMModule___add_super_module(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* abstractmetamodel___MMModule___visibility_for_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMModule___visibility_for(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMModule_____bra_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMModule_____bra(val_t  self, val_t  param0);
typedef void (* abstractmetamodel___MMModule___add_local_class_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMModule___add_local_class(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMModule___class_by_name_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMModule___class_by_name(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMModule___has_global_class_named_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMModule___has_global_class_named(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMModule___global_class_named_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMModule___global_class_named(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMModule___to_s_t)(val_t  self);
val_t abstractmetamodel___MMModule___to_s(val_t  self);
typedef void (* abstractmetamodel___MMModule___set_supers_class_t)(val_t  self, val_t  param0, val_t  param1);
void abstractmetamodel___MMModule___set_supers_class(val_t  self, val_t  param0, val_t  param1);
typedef void (* abstractmetamodel___MMModule___register_global_class_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMModule___register_global_class(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMGlobalClass____intro(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalClass____intro)
typedef val_t (* abstractmetamodel___MMGlobalClass___intro_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___intro(val_t  self);
#define ATTR_abstractmetamodel___MMGlobalClass____class_refinement_hierarchy(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalClass____class_refinement_hierarchy)
typedef val_t (* abstractmetamodel___MMGlobalClass___class_refinement_hierarchy_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___class_refinement_hierarchy(val_t  self);
typedef void (* abstractmetamodel___MMGlobalClass___init_t)(val_t  self, val_t  param0, int* init_table);
void abstractmetamodel___MMGlobalClass___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_abstractmetamodel___MMGlobalClass___init(val_t  param0);
typedef val_t (* abstractmetamodel___MMGlobalClass___name_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___name(val_t  self);
typedef val_t (* abstractmetamodel___MMGlobalClass___module_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___module(val_t  self);
typedef val_t (* abstractmetamodel___MMGlobalClass___to_s_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___to_s(val_t  self);
typedef void (* abstractmetamodel___MMGlobalClass___register_local_class_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalClass___register_local_class(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMGlobalClass____is_interface(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalClass____is_interface)
typedef val_t (* abstractmetamodel___MMGlobalClass___is_interface_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___is_interface(val_t  self);
typedef void (* abstractmetamodel___MMGlobalClass___is_interface__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalClass___is_interface__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMGlobalClass____is_abstract(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalClass____is_abstract)
typedef val_t (* abstractmetamodel___MMGlobalClass___is_abstract_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___is_abstract(val_t  self);
typedef void (* abstractmetamodel___MMGlobalClass___is_abstract__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalClass___is_abstract__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMGlobalClass____is_universal(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalClass____is_universal)
typedef val_t (* abstractmetamodel___MMGlobalClass___is_universal_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___is_universal(val_t  self);
typedef void (* abstractmetamodel___MMGlobalClass___is_universal__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalClass___is_universal__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMGlobalClass____visibility_level(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalClass____visibility_level)
typedef val_t (* abstractmetamodel___MMGlobalClass___visibility_level_t)(val_t  self);
val_t abstractmetamodel___MMGlobalClass___visibility_level(val_t  self);
typedef void (* abstractmetamodel___MMGlobalClass___visibility_level__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalClass___visibility_level__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMLocalClass____name(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____name)
typedef val_t (* abstractmetamodel___MMLocalClass___name_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___name(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____arity(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____arity)
typedef val_t (* abstractmetamodel___MMLocalClass___arity_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___arity(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____module(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____module)
typedef val_t (* abstractmetamodel___MMLocalClass___module_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___module(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____abstract(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____abstract)
typedef val_t (* abstractmetamodel___MMLocalClass___abstract_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___abstract(val_t  self);
typedef void (* abstractmetamodel___MMLocalClass___abstract__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMLocalClass___abstract__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMLocalClass____global(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____global)
typedef val_t (* abstractmetamodel___MMLocalClass___global_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___global(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____crhe(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____crhe)
typedef val_t (* abstractmetamodel___MMLocalClass___crhe_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___crhe(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____cshe(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____cshe)
typedef val_t (* abstractmetamodel___MMLocalClass___cshe_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___cshe(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____che(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____che)
typedef val_t (* abstractmetamodel___MMLocalClass___che_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___che(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____local_property_by_global(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____local_property_by_global)
typedef val_t (* abstractmetamodel___MMLocalClass___local_property_by_global_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___local_property_by_global(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____global_properties(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____global_properties)
typedef val_t (* abstractmetamodel___MMLocalClass___global_properties_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___global_properties(val_t  self);
#define ATTR_abstractmetamodel___MMLocalClass____properties_by_name(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalClass____properties_by_name)
typedef val_t (* abstractmetamodel___MMLocalClass___properties_by_name_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___properties_by_name(val_t  self);
typedef void (* abstractmetamodel___MMLocalClass___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void abstractmetamodel___MMLocalClass___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_abstractmetamodel___MMLocalClass___init(val_t  param0, val_t  param1);
typedef val_t (* abstractmetamodel___MMLocalClass___for_module_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass___for_module(val_t  self, val_t  param0);
typedef void (* abstractmetamodel___MMLocalClass___new_global_t)(val_t  self);
void abstractmetamodel___MMLocalClass___new_global(val_t  self);
typedef void (* abstractmetamodel___MMLocalClass___set_global_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMLocalClass___set_global(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass___has_global_property_by_name_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass___has_global_property_by_name(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass___get_property_by_name_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass___get_property_by_name(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass___attribute_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass___attribute(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass___method_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass___method(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass___super_methods_named_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass___super_methods_named(val_t  self, val_t  param0);
typedef void (* abstractmetamodel___MMLocalClass___register_local_property_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMLocalClass___register_local_property(val_t  self, val_t  param0);
typedef void (* abstractmetamodel___MMLocalClass___register_global_property_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMLocalClass___register_global_property(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass_____bra_t)(val_t  self, val_t  param0);
val_t abstractmetamodel___MMLocalClass_____bra(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalClass___context_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___context(val_t  self);
typedef val_t (* abstractmetamodel___MMLocalClass___to_s_t)(val_t  self);
val_t abstractmetamodel___MMLocalClass___to_s(val_t  self);
#define ATTR_abstractmetamodel___MMGlobalProperty____intro(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalProperty____intro)
typedef val_t (* abstractmetamodel___MMGlobalProperty___intro_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___intro(val_t  self);
typedef val_t (* abstractmetamodel___MMGlobalProperty___local_class_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___local_class(val_t  self);
#define ATTR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy)
typedef val_t (* abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy(val_t  self);
typedef void (* abstractmetamodel___MMGlobalProperty___init_t)(val_t  self, val_t  param0, int* init_table);
void abstractmetamodel___MMGlobalProperty___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_abstractmetamodel___MMGlobalProperty___init(val_t  param0);
typedef val_t (* abstractmetamodel___MMGlobalProperty___to_s_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___to_s(val_t  self);
typedef void (* abstractmetamodel___MMGlobalProperty___add_concrete_property_t)(val_t  self, val_t  param0, val_t  param1);
void abstractmetamodel___MMGlobalProperty___add_concrete_property(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* abstractmetamodel___MMGlobalProperty___is_attribute_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___is_attribute(val_t  self);
typedef val_t (* abstractmetamodel___MMGlobalProperty___is_method_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___is_method(val_t  self);
#define ATTR_abstractmetamodel___MMGlobalProperty____is_init(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalProperty____is_init)
typedef val_t (* abstractmetamodel___MMGlobalProperty___is_init_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___is_init(val_t  self);
typedef void (* abstractmetamodel___MMGlobalProperty___is_init__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalProperty___is_init__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMGlobalProperty____visibility_level(recv) ATTR(recv, COLOR_abstractmetamodel___MMGlobalProperty____visibility_level)
typedef val_t (* abstractmetamodel___MMGlobalProperty___visibility_level_t)(val_t  self);
val_t abstractmetamodel___MMGlobalProperty___visibility_level(val_t  self);
typedef void (* abstractmetamodel___MMGlobalProperty___visibility_level__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMGlobalProperty___visibility_level__eq(val_t  self, val_t  param0);
#define ATTR_abstractmetamodel___MMLocalProperty____name(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalProperty____name)
typedef val_t (* abstractmetamodel___MMLocalProperty___name_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___name(val_t  self);
#define ATTR_abstractmetamodel___MMLocalProperty____local_class(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalProperty____local_class)
typedef val_t (* abstractmetamodel___MMLocalProperty___local_class_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___local_class(val_t  self);
#define ATTR_abstractmetamodel___MMLocalProperty____global(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalProperty____global)
typedef val_t (* abstractmetamodel___MMLocalProperty___global_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___global(val_t  self);
#define ATTR_abstractmetamodel___MMLocalProperty____super_prop(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalProperty____super_prop)
typedef val_t (* abstractmetamodel___MMLocalProperty___super_prop_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___super_prop(val_t  self);
#define ATTR_abstractmetamodel___MMLocalProperty____concrete_property(recv) ATTR(recv, COLOR_abstractmetamodel___MMLocalProperty____concrete_property)
typedef val_t (* abstractmetamodel___MMLocalProperty___concrete_property_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___concrete_property(val_t  self);
typedef val_t (* abstractmetamodel___MMLocalProperty___module_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___module(val_t  self);
typedef val_t (* abstractmetamodel___MMLocalProperty___full_name_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___full_name(val_t  self);
typedef void (* abstractmetamodel___MMLocalProperty___set_global_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMLocalProperty___set_global(val_t  self, val_t  param0);
typedef val_t (* abstractmetamodel___MMLocalProperty___to_s_t)(val_t  self);
val_t abstractmetamodel___MMLocalProperty___to_s(val_t  self);
typedef void (* abstractmetamodel___MMLocalProperty___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void abstractmetamodel___MMLocalProperty___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_abstractmetamodel___MMLocalProperty___init(val_t  param0, val_t  param1, val_t  param2);
#define ATTR_abstractmetamodel___MMConcreteProperty____cprhe(recv) ATTR(recv, COLOR_abstractmetamodel___MMConcreteProperty____cprhe)
typedef val_t (* abstractmetamodel___MMConcreteProperty___cprhe_t)(val_t  self);
val_t abstractmetamodel___MMConcreteProperty___cprhe(val_t  self);
#define ATTR_abstractmetamodel___MMConcreteProperty____need_super(recv) ATTR(recv, COLOR_abstractmetamodel___MMConcreteProperty____need_super)
typedef val_t (* abstractmetamodel___MMConcreteProperty___need_super_t)(val_t  self);
val_t abstractmetamodel___MMConcreteProperty___need_super(val_t  self);
typedef void (* abstractmetamodel___MMConcreteProperty___need_super__eq_t)(val_t  self, val_t  param0);
void abstractmetamodel___MMConcreteProperty___need_super__eq(val_t  self, val_t  param0);
typedef void (* abstractmetamodel___MMConcreteProperty___new_global_t)(val_t  self);
void abstractmetamodel___MMConcreteProperty___new_global(val_t  self);
#endif
