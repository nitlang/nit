#ifndef virtualtype__sep
#define virtualtype__sep
#include "type_formal._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_MMTypeProperty[];

extern const classtable_elt_t VFT_MMVirtualType[];

extern const classtable_elt_t VFT_MMImplicitType[];
extern const int SFT_virtualtype[];
#define COLOR_virtualtype___MMGlobalProperty___is_virtual_type SFT_virtualtype[0]
#define ID_MMTypeProperty SFT_virtualtype[1]
#define COLOR_MMTypeProperty SFT_virtualtype[2]
#define COLOR_virtualtype___MMTypeProperty____stype_cache SFT_virtualtype[3]
#define INIT_TABLE_POS_MMTypeProperty SFT_virtualtype[4]
#define COLOR_virtualtype___MMTypeProperty___stype SFT_virtualtype[5]
#define COLOR_virtualtype___MMType___select_virtual_type SFT_virtualtype[6]
#define ID_MMVirtualType SFT_virtualtype[7]
#define COLOR_MMVirtualType SFT_virtualtype[8]
#define COLOR_virtualtype___MMVirtualType____property SFT_virtualtype[9]
#define INIT_TABLE_POS_MMVirtualType SFT_virtualtype[10]
#define COLOR_virtualtype___MMVirtualType___property SFT_virtualtype[11]
#define COLOR_virtualtype___MMVirtualType___init SFT_virtualtype[12]
#define COLOR_virtualtype___MMLocalClass___virtual_type SFT_virtualtype[13]
#define ID_MMImplicitType SFT_virtualtype[14]
#define COLOR_MMImplicitType SFT_virtualtype[15]
#define INIT_TABLE_POS_MMImplicitType SFT_virtualtype[16]
#define COLOR_virtualtype___MMImplicitType___init SFT_virtualtype[17]
typedef val_t (* virtualtype___MMGlobalProperty___is_virtual_type_t)(val_t  self);
val_t virtualtype___MMGlobalProperty___is_virtual_type(val_t  self);
typedef val_t (* virtualtype___MMTypeProperty___inherit_to_t)(val_t  self, val_t  param0);
val_t virtualtype___MMTypeProperty___inherit_to(val_t  self, val_t  param0);
#define ATTR_virtualtype___MMTypeProperty____stype_cache(recv) ATTR(recv, COLOR_virtualtype___MMTypeProperty____stype_cache)
typedef val_t (* virtualtype___MMTypeProperty___stype_t)(val_t  self);
val_t virtualtype___MMTypeProperty___stype(val_t  self);
typedef val_t (* virtualtype___MMType___select_virtual_type_t)(val_t  self, val_t  param0);
val_t virtualtype___MMType___select_virtual_type(val_t  self, val_t  param0);
#define ATTR_virtualtype___MMVirtualType____property(recv) ATTR(recv, COLOR_virtualtype___MMVirtualType____property)
typedef val_t (* virtualtype___MMVirtualType___property_t)(val_t  self);
val_t virtualtype___MMVirtualType___property(val_t  self);
typedef void (* virtualtype___MMVirtualType___init_t)(val_t  self, val_t  param0, int* init_table);
void virtualtype___MMVirtualType___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_virtualtype___MMVirtualType___init(val_t  param0);
typedef val_t (* virtualtype___MMVirtualType___for_module_t)(val_t  self, val_t  param0);
val_t virtualtype___MMVirtualType___for_module(val_t  self, val_t  param0);
typedef val_t (* virtualtype___MMVirtualType___not_for_self_t)(val_t  self);
val_t virtualtype___MMVirtualType___not_for_self(val_t  self);
typedef val_t (* virtualtype___MMVirtualType___adapt_to_t)(val_t  self, val_t  param0);
val_t virtualtype___MMVirtualType___adapt_to(val_t  self, val_t  param0);
typedef val_t (* virtualtype___MMLocalClass___virtual_type_t)(val_t  self, val_t  param0);
val_t virtualtype___MMLocalClass___virtual_type(val_t  self, val_t  param0);
typedef void (* virtualtype___MMImplicitType___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void virtualtype___MMImplicitType___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_virtualtype___MMImplicitType___init(val_t  param0, val_t  param1);
#endif
