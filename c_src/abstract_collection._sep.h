#ifndef abstract_collection__sep
#define abstract_collection__sep
#include "kernel._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Collection[];

extern const classtable_elt_t VFT_NaiveCollection[];

extern const classtable_elt_t VFT_Iterator[];

extern const classtable_elt_t VFT_Container[];

extern const classtable_elt_t VFT_ContainerIterator[];

extern const classtable_elt_t VFT_RemovableCollection[];

extern const classtable_elt_t VFT_SimpleCollection[];

extern const classtable_elt_t VFT_Set[];

extern const classtable_elt_t VFT_Map[];

extern const classtable_elt_t VFT_MapIterator[];

extern const classtable_elt_t VFT_IndexedCollection[];

extern const classtable_elt_t VFT_IndexedIterator[];

extern const classtable_elt_t VFT_CoupleMap[];

extern const classtable_elt_t VFT_CoupleMapIterator[];

extern const classtable_elt_t VFT_Couple[];
extern const int SFT_abstract_collection[];
#define ID_Collection SFT_abstract_collection[0]
#define COLOR_Collection SFT_abstract_collection[1]
#define INIT_TABLE_POS_Collection SFT_abstract_collection[2]
#define COLOR_abstract_collection___Collection___iterator SFT_abstract_collection[3]
#define COLOR_abstract_collection___Collection___is_empty SFT_abstract_collection[4]
#define COLOR_abstract_collection___Collection___length SFT_abstract_collection[5]
#define COLOR_abstract_collection___Collection___has SFT_abstract_collection[6]
#define COLOR_abstract_collection___Collection___has_only SFT_abstract_collection[7]
#define COLOR_abstract_collection___Collection___count SFT_abstract_collection[8]
#define COLOR_abstract_collection___Collection___first SFT_abstract_collection[9]
#define ID_NaiveCollection SFT_abstract_collection[10]
#define COLOR_NaiveCollection SFT_abstract_collection[11]
#define INIT_TABLE_POS_NaiveCollection SFT_abstract_collection[12]
#define ID_Iterator SFT_abstract_collection[13]
#define COLOR_Iterator SFT_abstract_collection[14]
#define INIT_TABLE_POS_Iterator SFT_abstract_collection[15]
#define COLOR_abstract_collection___Iterator___item SFT_abstract_collection[16]
#define COLOR_abstract_collection___Iterator___next SFT_abstract_collection[17]
#define COLOR_abstract_collection___Iterator___is_ok SFT_abstract_collection[18]
#define ID_Container SFT_abstract_collection[19]
#define COLOR_Container SFT_abstract_collection[20]
#define COLOR_abstract_collection___Container____item SFT_abstract_collection[21]
#define INIT_TABLE_POS_Container SFT_abstract_collection[22]
#define COLOR_abstract_collection___Container___init SFT_abstract_collection[23]
#define COLOR_abstract_collection___Container___item SFT_abstract_collection[24]
#define COLOR_abstract_collection___Container___item__eq SFT_abstract_collection[25]
#define ID_ContainerIterator SFT_abstract_collection[26]
#define COLOR_ContainerIterator SFT_abstract_collection[27]
#define COLOR_abstract_collection___ContainerIterator____is_ok SFT_abstract_collection[28]
#define COLOR_abstract_collection___ContainerIterator____container SFT_abstract_collection[29]
#define INIT_TABLE_POS_ContainerIterator SFT_abstract_collection[30]
#define COLOR_abstract_collection___ContainerIterator___init SFT_abstract_collection[31]
#define ID_RemovableCollection SFT_abstract_collection[32]
#define COLOR_RemovableCollection SFT_abstract_collection[33]
#define INIT_TABLE_POS_RemovableCollection SFT_abstract_collection[34]
#define COLOR_abstract_collection___RemovableCollection___clear SFT_abstract_collection[35]
#define COLOR_abstract_collection___RemovableCollection___remove SFT_abstract_collection[36]
#define COLOR_abstract_collection___RemovableCollection___remove_all SFT_abstract_collection[37]
#define ID_SimpleCollection SFT_abstract_collection[38]
#define COLOR_SimpleCollection SFT_abstract_collection[39]
#define INIT_TABLE_POS_SimpleCollection SFT_abstract_collection[40]
#define COLOR_abstract_collection___SimpleCollection___add SFT_abstract_collection[41]
#define COLOR_abstract_collection___SimpleCollection___add_all SFT_abstract_collection[42]
#define ID_Set SFT_abstract_collection[43]
#define COLOR_Set SFT_abstract_collection[44]
#define INIT_TABLE_POS_Set SFT_abstract_collection[45]
#define ID_Map SFT_abstract_collection[46]
#define COLOR_Map SFT_abstract_collection[47]
#define INIT_TABLE_POS_Map SFT_abstract_collection[48]
#define COLOR_abstract_collection___Map_____bra SFT_abstract_collection[49]
#define COLOR_abstract_collection___Map_____braeq SFT_abstract_collection[50]
#define COLOR_abstract_collection___Map___has_key SFT_abstract_collection[51]
#define COLOR_abstract_collection___Map___remove_at SFT_abstract_collection[52]
#define COLOR_abstract_collection___Map___recover_with SFT_abstract_collection[53]
#define ID_MapIterator SFT_abstract_collection[54]
#define COLOR_MapIterator SFT_abstract_collection[55]
#define INIT_TABLE_POS_MapIterator SFT_abstract_collection[56]
#define COLOR_abstract_collection___MapIterator___key SFT_abstract_collection[57]
#define COLOR_abstract_collection___MapIterator___item__eq SFT_abstract_collection[58]
#define ID_IndexedCollection SFT_abstract_collection[59]
#define COLOR_IndexedCollection SFT_abstract_collection[60]
#define INIT_TABLE_POS_IndexedCollection SFT_abstract_collection[61]
#define COLOR_abstract_collection___IndexedCollection___first__eq SFT_abstract_collection[62]
#define COLOR_abstract_collection___IndexedCollection___last SFT_abstract_collection[63]
#define COLOR_abstract_collection___IndexedCollection___last__eq SFT_abstract_collection[64]
#define COLOR_abstract_collection___IndexedCollection___push SFT_abstract_collection[65]
#define COLOR_abstract_collection___IndexedCollection___append SFT_abstract_collection[66]
#define COLOR_abstract_collection___IndexedCollection___pop SFT_abstract_collection[67]
#define COLOR_abstract_collection___IndexedCollection___unshift SFT_abstract_collection[68]
#define COLOR_abstract_collection___IndexedCollection___shift SFT_abstract_collection[69]
#define COLOR_abstract_collection___IndexedCollection___index_of SFT_abstract_collection[70]
#define ID_IndexedIterator SFT_abstract_collection[71]
#define COLOR_IndexedIterator SFT_abstract_collection[72]
#define INIT_TABLE_POS_IndexedIterator SFT_abstract_collection[73]
#define COLOR_abstract_collection___IndexedIterator___index SFT_abstract_collection[74]
#define ID_CoupleMap SFT_abstract_collection[75]
#define COLOR_CoupleMap SFT_abstract_collection[76]
#define INIT_TABLE_POS_CoupleMap SFT_abstract_collection[77]
#define COLOR_abstract_collection___CoupleMap___couple_at SFT_abstract_collection[78]
#define ID_CoupleMapIterator SFT_abstract_collection[79]
#define COLOR_CoupleMapIterator SFT_abstract_collection[80]
#define COLOR_abstract_collection___CoupleMapIterator____iter SFT_abstract_collection[81]
#define INIT_TABLE_POS_CoupleMapIterator SFT_abstract_collection[82]
#define COLOR_abstract_collection___CoupleMapIterator___init SFT_abstract_collection[83]
#define ID_Couple SFT_abstract_collection[84]
#define COLOR_Couple SFT_abstract_collection[85]
#define COLOR_abstract_collection___Couple____first SFT_abstract_collection[86]
#define COLOR_abstract_collection___Couple____second SFT_abstract_collection[87]
#define INIT_TABLE_POS_Couple SFT_abstract_collection[88]
#define COLOR_abstract_collection___Couple___first SFT_abstract_collection[89]
#define COLOR_abstract_collection___Couple___first__eq SFT_abstract_collection[90]
#define COLOR_abstract_collection___Couple___second SFT_abstract_collection[91]
#define COLOR_abstract_collection___Couple___second__eq SFT_abstract_collection[92]
#define COLOR_abstract_collection___Couple___init SFT_abstract_collection[93]
typedef val_t (* abstract_collection___Collection___iterator_t)(val_t  self);
val_t abstract_collection___Collection___iterator(val_t  self);
typedef val_t (* abstract_collection___Collection___is_empty_t)(val_t  self);
val_t abstract_collection___Collection___is_empty(val_t  self);
typedef val_t (* abstract_collection___Collection___length_t)(val_t  self);
val_t abstract_collection___Collection___length(val_t  self);
typedef val_t (* abstract_collection___Collection___has_t)(val_t  self, val_t  param0);
val_t abstract_collection___Collection___has(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Collection___has_only_t)(val_t  self, val_t  param0);
val_t abstract_collection___Collection___has_only(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Collection___count_t)(val_t  self, val_t  param0);
val_t abstract_collection___Collection___count(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Collection___first_t)(val_t  self);
val_t abstract_collection___Collection___first(val_t  self);
typedef val_t (* abstract_collection___NaiveCollection___is_empty_t)(val_t  self);
val_t abstract_collection___NaiveCollection___is_empty(val_t  self);
typedef val_t (* abstract_collection___NaiveCollection___length_t)(val_t  self);
val_t abstract_collection___NaiveCollection___length(val_t  self);
typedef val_t (* abstract_collection___NaiveCollection___has_t)(val_t  self, val_t  param0);
val_t abstract_collection___NaiveCollection___has(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___NaiveCollection___has_only_t)(val_t  self, val_t  param0);
val_t abstract_collection___NaiveCollection___has_only(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___NaiveCollection___count_t)(val_t  self, val_t  param0);
val_t abstract_collection___NaiveCollection___count(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___NaiveCollection___first_t)(val_t  self);
val_t abstract_collection___NaiveCollection___first(val_t  self);
typedef val_t (* abstract_collection___Iterator___item_t)(val_t  self);
val_t abstract_collection___Iterator___item(val_t  self);
typedef void (* abstract_collection___Iterator___next_t)(val_t  self);
void abstract_collection___Iterator___next(val_t  self);
typedef val_t (* abstract_collection___Iterator___is_ok_t)(val_t  self);
val_t abstract_collection___Iterator___is_ok(val_t  self);
typedef val_t (* abstract_collection___Container___first_t)(val_t  self);
val_t abstract_collection___Container___first(val_t  self);
typedef val_t (* abstract_collection___Container___is_empty_t)(val_t  self);
val_t abstract_collection___Container___is_empty(val_t  self);
typedef val_t (* abstract_collection___Container___length_t)(val_t  self);
val_t abstract_collection___Container___length(val_t  self);
typedef val_t (* abstract_collection___Container___has_t)(val_t  self, val_t  param0);
val_t abstract_collection___Container___has(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Container___has_only_t)(val_t  self, val_t  param0);
val_t abstract_collection___Container___has_only(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Container___count_t)(val_t  self, val_t  param0);
val_t abstract_collection___Container___count(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Container___iterator_t)(val_t  self);
val_t abstract_collection___Container___iterator(val_t  self);
typedef void (* abstract_collection___Container___init_t)(val_t  self, val_t  param0, int* init_table);
void abstract_collection___Container___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_abstract_collection___Container___init(val_t  param0);
#define ATTR_abstract_collection___Container____item(recv) ATTR(recv, COLOR_abstract_collection___Container____item)
typedef val_t (* abstract_collection___Container___item_t)(val_t  self);
val_t abstract_collection___Container___item(val_t  self);
typedef void (* abstract_collection___Container___item__eq_t)(val_t  self, val_t  param0);
void abstract_collection___Container___item__eq(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___ContainerIterator___item_t)(val_t  self);
val_t abstract_collection___ContainerIterator___item(val_t  self);
typedef void (* abstract_collection___ContainerIterator___next_t)(val_t  self);
void abstract_collection___ContainerIterator___next(val_t  self);
typedef void (* abstract_collection___ContainerIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void abstract_collection___ContainerIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_abstract_collection___ContainerIterator___init(val_t  param0);
#define ATTR_abstract_collection___ContainerIterator____is_ok(recv) ATTR(recv, COLOR_abstract_collection___ContainerIterator____is_ok)
typedef val_t (* abstract_collection___ContainerIterator___is_ok_t)(val_t  self);
val_t abstract_collection___ContainerIterator___is_ok(val_t  self);
#define ATTR_abstract_collection___ContainerIterator____container(recv) ATTR(recv, COLOR_abstract_collection___ContainerIterator____container)
typedef void (* abstract_collection___RemovableCollection___clear_t)(val_t  self);
void abstract_collection___RemovableCollection___clear(val_t  self);
typedef void (* abstract_collection___RemovableCollection___remove_t)(val_t  self, val_t  param0);
void abstract_collection___RemovableCollection___remove(val_t  self, val_t  param0);
typedef void (* abstract_collection___RemovableCollection___remove_all_t)(val_t  self, val_t  param0);
void abstract_collection___RemovableCollection___remove_all(val_t  self, val_t  param0);
typedef void (* abstract_collection___SimpleCollection___add_t)(val_t  self, val_t  param0);
void abstract_collection___SimpleCollection___add(val_t  self, val_t  param0);
typedef void (* abstract_collection___SimpleCollection___add_all_t)(val_t  self, val_t  param0);
void abstract_collection___SimpleCollection___add_all(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Set___has_only_t)(val_t  self, val_t  param0);
val_t abstract_collection___Set___has_only(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Set___count_t)(val_t  self, val_t  param0);
val_t abstract_collection___Set___count(val_t  self, val_t  param0);
typedef void (* abstract_collection___Set___remove_all_t)(val_t  self, val_t  param0);
void abstract_collection___Set___remove_all(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Map_____bra_t)(val_t  self, val_t  param0);
val_t abstract_collection___Map_____bra(val_t  self, val_t  param0);
typedef void (* abstract_collection___Map_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void abstract_collection___Map_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* abstract_collection___Map___has_key_t)(val_t  self, val_t  param0);
val_t abstract_collection___Map___has_key(val_t  self, val_t  param0);
typedef void (* abstract_collection___Map___remove_at_t)(val_t  self, val_t  param0);
void abstract_collection___Map___remove_at(val_t  self, val_t  param0);
typedef void (* abstract_collection___Map___recover_with_t)(val_t  self, val_t  param0);
void abstract_collection___Map___recover_with(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___Map___iterator_t)(val_t  self);
val_t abstract_collection___Map___iterator(val_t  self);
typedef val_t (* abstract_collection___MapIterator___key_t)(val_t  self);
val_t abstract_collection___MapIterator___key(val_t  self);
typedef void (* abstract_collection___MapIterator___item__eq_t)(val_t  self, val_t  param0);
void abstract_collection___MapIterator___item__eq(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___IndexedCollection___first_t)(val_t  self);
val_t abstract_collection___IndexedCollection___first(val_t  self);
typedef void (* abstract_collection___IndexedCollection___first__eq_t)(val_t  self, val_t  param0);
void abstract_collection___IndexedCollection___first__eq(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___IndexedCollection___last_t)(val_t  self);
val_t abstract_collection___IndexedCollection___last(val_t  self);
typedef void (* abstract_collection___IndexedCollection___last__eq_t)(val_t  self, val_t  param0);
void abstract_collection___IndexedCollection___last__eq(val_t  self, val_t  param0);
typedef void (* abstract_collection___IndexedCollection___add_t)(val_t  self, val_t  param0);
void abstract_collection___IndexedCollection___add(val_t  self, val_t  param0);
typedef void (* abstract_collection___IndexedCollection___push_t)(val_t  self, val_t  param0);
void abstract_collection___IndexedCollection___push(val_t  self, val_t  param0);
typedef void (* abstract_collection___IndexedCollection___append_t)(val_t  self, val_t  param0);
void abstract_collection___IndexedCollection___append(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___IndexedCollection___pop_t)(val_t  self);
val_t abstract_collection___IndexedCollection___pop(val_t  self);
typedef void (* abstract_collection___IndexedCollection___unshift_t)(val_t  self, val_t  param0);
void abstract_collection___IndexedCollection___unshift(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___IndexedCollection___shift_t)(val_t  self);
val_t abstract_collection___IndexedCollection___shift(val_t  self);
typedef val_t (* abstract_collection___IndexedCollection___index_of_t)(val_t  self, val_t  param0);
val_t abstract_collection___IndexedCollection___index_of(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___IndexedCollection___iterator_t)(val_t  self);
val_t abstract_collection___IndexedCollection___iterator(val_t  self);
typedef val_t (* abstract_collection___IndexedIterator___index_t)(val_t  self);
val_t abstract_collection___IndexedIterator___index(val_t  self);
typedef val_t (* abstract_collection___IndexedIterator___key_t)(val_t  self);
val_t abstract_collection___IndexedIterator___key(val_t  self);
typedef val_t (* abstract_collection___CoupleMap___couple_at_t)(val_t  self, val_t  param0);
val_t abstract_collection___CoupleMap___couple_at(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___CoupleMap_____bra_t)(val_t  self, val_t  param0);
val_t abstract_collection___CoupleMap_____bra(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___CoupleMap___has_key_t)(val_t  self, val_t  param0);
val_t abstract_collection___CoupleMap___has_key(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___CoupleMapIterator___item_t)(val_t  self);
val_t abstract_collection___CoupleMapIterator___item(val_t  self);
typedef void (* abstract_collection___CoupleMapIterator___item__eq_t)(val_t  self, val_t  param0);
void abstract_collection___CoupleMapIterator___item__eq(val_t  self, val_t  param0);
typedef val_t (* abstract_collection___CoupleMapIterator___key_t)(val_t  self);
val_t abstract_collection___CoupleMapIterator___key(val_t  self);
typedef val_t (* abstract_collection___CoupleMapIterator___is_ok_t)(val_t  self);
val_t abstract_collection___CoupleMapIterator___is_ok(val_t  self);
typedef void (* abstract_collection___CoupleMapIterator___next_t)(val_t  self);
void abstract_collection___CoupleMapIterator___next(val_t  self);
#define ATTR_abstract_collection___CoupleMapIterator____iter(recv) ATTR(recv, COLOR_abstract_collection___CoupleMapIterator____iter)
typedef void (* abstract_collection___CoupleMapIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void abstract_collection___CoupleMapIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_abstract_collection___CoupleMapIterator___init(val_t  param0);
#define ATTR_abstract_collection___Couple____first(recv) ATTR(recv, COLOR_abstract_collection___Couple____first)
typedef val_t (* abstract_collection___Couple___first_t)(val_t  self);
val_t abstract_collection___Couple___first(val_t  self);
typedef void (* abstract_collection___Couple___first__eq_t)(val_t  self, val_t  param0);
void abstract_collection___Couple___first__eq(val_t  self, val_t  param0);
#define ATTR_abstract_collection___Couple____second(recv) ATTR(recv, COLOR_abstract_collection___Couple____second)
typedef val_t (* abstract_collection___Couple___second_t)(val_t  self);
val_t abstract_collection___Couple___second(val_t  self);
typedef void (* abstract_collection___Couple___second__eq_t)(val_t  self, val_t  param0);
void abstract_collection___Couple___second__eq(val_t  self, val_t  param0);
typedef void (* abstract_collection___Couple___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void abstract_collection___Couple___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_abstract_collection___Couple___init(val_t  param0, val_t  param1);
#endif
