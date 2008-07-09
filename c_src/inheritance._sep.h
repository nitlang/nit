#ifndef inheritance__sep
#define inheritance__sep
#include "static_type._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_MMImplicitProperty[];

extern const classtable_elt_t VFT_MMImplicitMethod[];

extern const classtable_elt_t VFT_MMImplicitAttribute[];

extern const classtable_elt_t VFT_MMImplicitLocalClass[];

extern const classtable_elt_t VFT_MMRefineAncestor[];

extern const classtable_elt_t VFT_MMSpecAncestor[];

extern const classtable_elt_t VFT_MMDefaultAncestor[];
extern const int SFT_inheritance[];
#define COLOR_inheritance___MMModule___type_any SFT_inheritance[0]
#define COLOR_inheritance___MMModule___import_global_classes SFT_inheritance[1]
#define COLOR_inheritance___MMModule___import_local_classes SFT_inheritance[2]
#define COLOR_inheritance___MMLocalClass____direct_parents SFT_inheritance[3]
#define COLOR_inheritance___MMLocalClass____computing_super SFT_inheritance[4]
#define COLOR_inheritance___MMLocalClass___compute_super_classes SFT_inheritance[5]
#define COLOR_inheritance___MMLocalClass___compute_ancestors SFT_inheritance[6]
#define COLOR_inheritance___MMLocalClass___inherit_global_properties SFT_inheritance[7]
#define COLOR_inheritance___MMLocalClass___add_direct_parent SFT_inheritance[8]
#define COLOR_inheritance___MMLocalClass___computed_super_classes SFT_inheritance[9]
#define COLOR_inheritance___MMLocalClass___computed_ancestors SFT_inheritance[10]
#define COLOR_inheritance___MMLocalClass___ancestor_for SFT_inheritance[11]
#define COLOR_SUPER_inheritance___MMLocalClass_____bra SFT_inheritance[12]
#define COLOR_inheritance___MMLocalClass___add_default_any_class SFT_inheritance[13]
#define COLOR_inheritance___MMLocalClass___add_super_classes SFT_inheritance[14]
#define COLOR_inheritance___MMLocalClass___add_explicit_classes SFT_inheritance[15]
#define COLOR_inheritance___MMLocalClass___compute_super_parents SFT_inheritance[16]
#define COLOR_inheritance___MMLocalClass___build_ancestors SFT_inheritance[17]
#define COLOR_inheritance___MMLocalClass___group_ancestors SFT_inheritance[18]
#define COLOR_inheritance___MMLocalClass___merge_ancestors SFT_inheritance[19]
#define COLOR_inheritance___MMLocalClass___inherit_local_property SFT_inheritance[20]
#define COLOR_inheritance___MMConcreteProperty___is_deferred SFT_inheritance[21]
#define COLOR_inheritance___MMGlobalProperty___get_compatible_concrete_properties_for SFT_inheritance[22]
#define COLOR_inheritance___MMLocalProperty___inherit_global SFT_inheritance[23]
#define COLOR_inheritance___MMLocalProperty___inherit_to SFT_inheritance[24]
#define COLOR_inheritance___MMLocalProperty___inherit_from SFT_inheritance[25]
#define ID_MMImplicitProperty SFT_inheritance[26]
#define COLOR_MMImplicitProperty SFT_inheritance[27]
#define INIT_TABLE_POS_MMImplicitProperty SFT_inheritance[28]
#define COLOR_inheritance___MMImplicitProperty___init SFT_inheritance[29]
#define ID_MMImplicitMethod SFT_inheritance[30]
#define COLOR_MMImplicitMethod SFT_inheritance[31]
#define INIT_TABLE_POS_MMImplicitMethod SFT_inheritance[32]
#define COLOR_inheritance___MMImplicitMethod___init SFT_inheritance[33]
#define ID_MMImplicitAttribute SFT_inheritance[34]
#define COLOR_MMImplicitAttribute SFT_inheritance[35]
#define INIT_TABLE_POS_MMImplicitAttribute SFT_inheritance[36]
#define COLOR_inheritance___MMImplicitAttribute___init SFT_inheritance[37]
#define COLOR_inheritance___MMAncestor___add_in SFT_inheritance[38]
#define ID_MMImplicitLocalClass SFT_inheritance[39]
#define COLOR_MMImplicitLocalClass SFT_inheritance[40]
#define INIT_TABLE_POS_MMImplicitLocalClass SFT_inheritance[41]
#define COLOR_inheritance___MMImplicitLocalClass___init SFT_inheritance[42]
#define ID_MMRefineAncestor SFT_inheritance[43]
#define COLOR_MMRefineAncestor SFT_inheritance[44]
#define COLOR_inheritance___MMRefineAncestor____local_class SFT_inheritance[45]
#define INIT_TABLE_POS_MMRefineAncestor SFT_inheritance[46]
#define COLOR_inheritance___MMRefineAncestor___init SFT_inheritance[47]
#define ID_MMSpecAncestor SFT_inheritance[48]
#define COLOR_MMSpecAncestor SFT_inheritance[49]
#define INIT_TABLE_POS_MMSpecAncestor SFT_inheritance[50]
#define COLOR_inheritance___MMSpecAncestor___init SFT_inheritance[51]
#define ID_MMDefaultAncestor SFT_inheritance[52]
#define COLOR_MMDefaultAncestor SFT_inheritance[53]
#define INIT_TABLE_POS_MMDefaultAncestor SFT_inheritance[54]
#define COLOR_inheritance___MMDefaultAncestor___init SFT_inheritance[55]
typedef val_t (* inheritance___MMModule___type_any_t)(val_t  self);
val_t inheritance___MMModule___type_any(val_t  self);
typedef void (* inheritance___MMModule___import_global_classes_t)(val_t  self);
void inheritance___MMModule___import_global_classes(val_t  self);
typedef void (* inheritance___MMModule___import_local_classes_t)(val_t  self);
void inheritance___MMModule___import_local_classes(val_t  self);
#define ATTR_inheritance___MMLocalClass____direct_parents(recv) ATTR(recv, COLOR_inheritance___MMLocalClass____direct_parents)
#define ATTR_inheritance___MMLocalClass____computing_super(recv) ATTR(recv, COLOR_inheritance___MMLocalClass____computing_super)
typedef void (* inheritance___MMLocalClass___compute_super_classes_t)(val_t  self);
void inheritance___MMLocalClass___compute_super_classes(val_t  self);
typedef void (* inheritance___MMLocalClass___compute_ancestors_t)(val_t  self);
void inheritance___MMLocalClass___compute_ancestors(val_t  self);
typedef void (* inheritance___MMLocalClass___inherit_global_properties_t)(val_t  self);
void inheritance___MMLocalClass___inherit_global_properties(val_t  self);
typedef void (* inheritance___MMLocalClass___add_direct_parent_t)(val_t  self, val_t  param0);
void inheritance___MMLocalClass___add_direct_parent(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMLocalClass___computed_super_classes_t)(val_t  self);
val_t inheritance___MMLocalClass___computed_super_classes(val_t  self);
typedef val_t (* inheritance___MMLocalClass___computed_ancestors_t)(val_t  self);
val_t inheritance___MMLocalClass___computed_ancestors(val_t  self);
typedef val_t (* inheritance___MMLocalClass___ancestor_for_t)(val_t  self, val_t  param0);
val_t inheritance___MMLocalClass___ancestor_for(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMLocalClass_____bra_t)(val_t  self, val_t  param0);
val_t inheritance___MMLocalClass_____bra(val_t  self, val_t  param0);
typedef void (* inheritance___MMLocalClass___add_default_any_class_t)(val_t  self, val_t  param0);
void inheritance___MMLocalClass___add_default_any_class(val_t  self, val_t  param0);
typedef void (* inheritance___MMLocalClass___add_super_classes_t)(val_t  self, val_t  param0);
void inheritance___MMLocalClass___add_super_classes(val_t  self, val_t  param0);
typedef void (* inheritance___MMLocalClass___add_explicit_classes_t)(val_t  self, val_t  param0);
void inheritance___MMLocalClass___add_explicit_classes(val_t  self, val_t  param0);
typedef void (* inheritance___MMLocalClass___compute_super_parents_t)(val_t  self, val_t  param0);
void inheritance___MMLocalClass___compute_super_parents(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMLocalClass___build_ancestors_t)(val_t  self);
val_t inheritance___MMLocalClass___build_ancestors(val_t  self);
typedef val_t (* inheritance___MMLocalClass___group_ancestors_t)(val_t  self, val_t  param0);
val_t inheritance___MMLocalClass___group_ancestors(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMLocalClass___merge_ancestors_t)(val_t  self, val_t  param0);
val_t inheritance___MMLocalClass___merge_ancestors(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMLocalClass___inherit_local_property_t)(val_t  self, val_t  param0);
val_t inheritance___MMLocalClass___inherit_local_property(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMConcreteProperty___is_deferred_t)(val_t  self);
val_t inheritance___MMConcreteProperty___is_deferred(val_t  self);
typedef val_t (* inheritance___MMGlobalProperty___get_compatible_concrete_properties_for_t)(val_t  self, val_t  param0);
val_t inheritance___MMGlobalProperty___get_compatible_concrete_properties_for(val_t  self, val_t  param0);
typedef void (* inheritance___MMLocalProperty___inherit_global_t)(val_t  self, val_t  param0);
void inheritance___MMLocalProperty___inherit_global(val_t  self, val_t  param0);
typedef val_t (* inheritance___MMLocalProperty___inherit_to_t)(val_t  self, val_t  param0);
val_t inheritance___MMLocalProperty___inherit_to(val_t  self, val_t  param0);
typedef void (* inheritance___MMLocalProperty___inherit_from_t)(val_t  self, val_t  param0, val_t  param1);
void inheritance___MMLocalProperty___inherit_from(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* inheritance___MMMethod___inherit_to_t)(val_t  self, val_t  param0);
val_t inheritance___MMMethod___inherit_to(val_t  self, val_t  param0);
typedef void (* inheritance___MMImplicitProperty___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMImplicitProperty___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMImplicitProperty___init(val_t  param0, val_t  param1);
typedef void (* inheritance___MMImplicitMethod___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMImplicitMethod___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMImplicitMethod___init(val_t  param0, val_t  param1);
typedef val_t (* inheritance___MMAttribute___inherit_to_t)(val_t  self, val_t  param0);
val_t inheritance___MMAttribute___inherit_to(val_t  self, val_t  param0);
typedef void (* inheritance___MMImplicitAttribute___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMImplicitAttribute___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMImplicitAttribute___init(val_t  param0, val_t  param1);
typedef void (* inheritance___MMAncestor___add_in_t)(val_t  self, val_t  param0);
void inheritance___MMAncestor___add_in(val_t  self, val_t  param0);
typedef void (* inheritance___MMImplicitLocalClass___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMImplicitLocalClass___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMImplicitLocalClass___init(val_t  param0, val_t  param1);
#define ATTR_inheritance___MMRefineAncestor____local_class(recv) ATTR(recv, COLOR_inheritance___MMRefineAncestor____local_class)
typedef val_t (* inheritance___MMRefineAncestor___local_class_t)(val_t  self);
val_t inheritance___MMRefineAncestor___local_class(val_t  self);
typedef void (* inheritance___MMRefineAncestor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMRefineAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMRefineAncestor___init(val_t  param0, val_t  param1);
typedef val_t (* inheritance___MMSpecAncestor___local_class_t)(val_t  self);
val_t inheritance___MMSpecAncestor___local_class(val_t  self);
typedef void (* inheritance___MMSpecAncestor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMSpecAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMSpecAncestor___init(val_t  param0, val_t  param1);
typedef val_t (* inheritance___MMDefaultAncestor___local_class_t)(val_t  self);
val_t inheritance___MMDefaultAncestor___local_class(val_t  self);
typedef void (* inheritance___MMDefaultAncestor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void inheritance___MMDefaultAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_inheritance___MMDefaultAncestor___init(val_t  param0, val_t  param1);
#endif
