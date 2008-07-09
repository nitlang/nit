#ifndef array__sep
#define array__sep
#include "abstract_collection._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_AbstractArray[];

extern const classtable_elt_t VFT_Array[];

extern const classtable_elt_t VFT_ArrayIterator[];

extern const classtable_elt_t VFT_ArraySet[];

extern const classtable_elt_t VFT_ArraySetIterator[];

extern const classtable_elt_t VFT_ArrayMap[];

extern const classtable_elt_t VFT_ArrayCapable[];

extern const classtable_elt_t VFT_NativeArray[];
struct TBOX_NativeArray { const classtable_elt_t * vft; val_t * val;};
val_t BOX_NativeArray(val_t * val);
#define UNBOX_NativeArray(x) (((struct TBOX_NativeArray *)(VAL2OBJ(x)))->val)
extern const int SFT_array[];
#define ID_AbstractArray SFT_array[0]
#define COLOR_AbstractArray SFT_array[1]
#define COLOR_array___AbstractArray____length SFT_array[2]
#define INIT_TABLE_POS_AbstractArray SFT_array[3]
#define COLOR_array___AbstractArray___enlarge SFT_array[4]
#define COLOR_array___AbstractArray___insert SFT_array[5]
#define COLOR_array___AbstractArray___last_index_of SFT_array[6]
#define COLOR_array___AbstractArray___index_of_from SFT_array[7]
#define COLOR_array___AbstractArray___last_index_of_from SFT_array[8]
#define COLOR_array___AbstractArray___reversed SFT_array[9]
#define COLOR_array___AbstractArray___copy_to SFT_array[10]
#define ID_Array SFT_array[11]
#define COLOR_Array SFT_array[12]
#define COLOR_array___Array____items SFT_array[13]
#define COLOR_array___Array____capacity SFT_array[14]
#define INIT_TABLE_POS_Array SFT_array[15]
#define COLOR_array___Array___init SFT_array[16]
#define COLOR_array___Array___with SFT_array[17]
#define COLOR_array___Array___with_capacity SFT_array[18]
#define COLOR_array___Array___filled_with SFT_array[19]
#define COLOR_array___Array___with_native SFT_array[20]
#define ID_ArrayIterator SFT_array[21]
#define COLOR_ArrayIterator SFT_array[22]
#define COLOR_array___ArrayIterator____index SFT_array[23]
#define COLOR_array___ArrayIterator____array SFT_array[24]
#define INIT_TABLE_POS_ArrayIterator SFT_array[25]
#define COLOR_array___ArrayIterator___init SFT_array[26]
#define ID_ArraySet SFT_array[27]
#define COLOR_ArraySet SFT_array[28]
#define COLOR_array___ArraySet____array SFT_array[29]
#define INIT_TABLE_POS_ArraySet SFT_array[30]
#define COLOR_array___ArraySet___enlarge SFT_array[31]
#define COLOR_array___ArraySet___remove_at SFT_array[32]
#define COLOR_array___ArraySet___init SFT_array[33]
#define COLOR_array___ArraySet___with_capacity SFT_array[34]
#define ID_ArraySetIterator SFT_array[35]
#define COLOR_ArraySetIterator SFT_array[36]
#define COLOR_array___ArraySetIterator____iter SFT_array[37]
#define INIT_TABLE_POS_ArraySetIterator SFT_array[38]
#define COLOR_array___ArraySetIterator___init SFT_array[39]
#define ID_ArrayMap SFT_array[40]
#define COLOR_ArrayMap SFT_array[41]
#define COLOR_array___ArrayMap____items SFT_array[42]
#define COLOR_array___ArrayMap____last_index SFT_array[43]
#define INIT_TABLE_POS_ArrayMap SFT_array[44]
#define COLOR_array___ArrayMap___enlarge SFT_array[45]
#define COLOR_array___ArrayMap___remove_at_index SFT_array[46]
#define COLOR_array___ArrayMap___index SFT_array[47]
#define COLOR_array___ArrayMap___init SFT_array[48]
#define COLOR_array___Iterator___to_a SFT_array[49]
#define COLOR_array___Collection___to_a SFT_array[50]
#define ID_ArrayCapable SFT_array[51]
#define COLOR_ArrayCapable SFT_array[52]
#define INIT_TABLE_POS_ArrayCapable SFT_array[53]
#define COLOR_array___ArrayCapable___calloc_array SFT_array[54]
#define ID_NativeArray SFT_array[55]
#define COLOR_NativeArray SFT_array[56]
#define INIT_TABLE_POS_NativeArray SFT_array[57]
#define COLOR_array___NativeArray_____bra SFT_array[58]
#define COLOR_array___NativeArray_____braeq SFT_array[59]
#define COLOR_array___NativeArray___copy_to SFT_array[60]
typedef void (* array___AbstractArray___enlarge_t)(val_t  self, val_t  param0);
void array___AbstractArray___enlarge(val_t  self, val_t  param0);
#define ATTR_array___AbstractArray____length(recv) ATTR(recv, COLOR_array___AbstractArray____length)
typedef val_t (* array___AbstractArray___length_t)(val_t  self);
val_t array___AbstractArray___length(val_t  self);
typedef val_t (* array___AbstractArray___is_empty_t)(val_t  self);
val_t array___AbstractArray___is_empty(val_t  self);
typedef void (* array___AbstractArray___push_t)(val_t  self, val_t  param0);
void array___AbstractArray___push(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___pop_t)(val_t  self);
val_t array___AbstractArray___pop(val_t  self);
typedef val_t (* array___AbstractArray___shift_t)(val_t  self);
val_t array___AbstractArray___shift(val_t  self);
typedef void (* array___AbstractArray___unshift_t)(val_t  self, val_t  param0);
void array___AbstractArray___unshift(val_t  self, val_t  param0);
typedef void (* array___AbstractArray___insert_t)(val_t  self, val_t  param0, val_t  param1);
void array___AbstractArray___insert(val_t  self, val_t  param0, val_t  param1);
typedef void (* array___AbstractArray___add_t)(val_t  self, val_t  param0);
void array___AbstractArray___add(val_t  self, val_t  param0);
typedef void (* array___AbstractArray___clear_t)(val_t  self);
void array___AbstractArray___clear(val_t  self);
typedef val_t (* array___AbstractArray___has_t)(val_t  self, val_t  param0);
val_t array___AbstractArray___has(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___has_only_t)(val_t  self, val_t  param0);
val_t array___AbstractArray___has_only(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___has_key_t)(val_t  self, val_t  param0);
val_t array___AbstractArray___has_key(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___count_t)(val_t  self, val_t  param0);
val_t array___AbstractArray___count(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___index_of_t)(val_t  self, val_t  param0);
val_t array___AbstractArray___index_of(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___last_index_of_t)(val_t  self, val_t  param0);
val_t array___AbstractArray___last_index_of(val_t  self, val_t  param0);
typedef val_t (* array___AbstractArray___index_of_from_t)(val_t  self, val_t  param0, val_t  param1);
val_t array___AbstractArray___index_of_from(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* array___AbstractArray___last_index_of_from_t)(val_t  self, val_t  param0, val_t  param1);
val_t array___AbstractArray___last_index_of_from(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* array___AbstractArray___reversed_t)(val_t  self);
val_t array___AbstractArray___reversed(val_t  self);
typedef void (* array___AbstractArray___remove_t)(val_t  self, val_t  param0);
void array___AbstractArray___remove(val_t  self, val_t  param0);
typedef void (* array___AbstractArray___remove_all_t)(val_t  self, val_t  param0);
void array___AbstractArray___remove_all(val_t  self, val_t  param0);
typedef void (* array___AbstractArray___remove_at_t)(val_t  self, val_t  param0);
void array___AbstractArray___remove_at(val_t  self, val_t  param0);
typedef void (* array___AbstractArray___copy_to_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void array___AbstractArray___copy_to(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* array___AbstractArray___output_t)(val_t  self);
void array___AbstractArray___output(val_t  self);
typedef val_t (* array___AbstractArray___iterator_t)(val_t  self);
val_t array___AbstractArray___iterator(val_t  self);
typedef val_t (* array___AbstractArray_____eqeq_t)(val_t  self, val_t  param0);
val_t array___AbstractArray_____eqeq(val_t  self, val_t  param0);
typedef val_t (* array___Array_____bra_t)(val_t  self, val_t  param0);
val_t array___Array_____bra(val_t  self, val_t  param0);
typedef void (* array___Array_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void array___Array_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef void (* array___Array___enlarge_t)(val_t  self, val_t  param0);
void array___Array___enlarge(val_t  self, val_t  param0);
typedef void (* array___Array___init_t)(val_t  self, int* init_table);
void array___Array___init(val_t  self, int* init_table);
val_t NEW_array___Array___init();
typedef void (* array___Array___with_t)(val_t  self, val_t  param0, int* init_table);
void array___Array___with(val_t  self, val_t  param0, int* init_table);
val_t NEW_array___Array___with(val_t  param0);
typedef void (* array___Array___with_capacity_t)(val_t  self, val_t  param0, int* init_table);
void array___Array___with_capacity(val_t  self, val_t  param0, int* init_table);
val_t NEW_array___Array___with_capacity(val_t  param0);
typedef void (* array___Array___filled_with_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void array___Array___filled_with(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_array___Array___filled_with(val_t  param0, val_t  param1);
typedef void (* array___Array___with_native_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void array___Array___with_native(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_array___Array___with_native(val_t  param0, val_t  param1);
#define ATTR_array___Array____items(recv) ATTR(recv, COLOR_array___Array____items)
#define ATTR_array___Array____capacity(recv) ATTR(recv, COLOR_array___Array____capacity)
typedef val_t (* array___ArrayIterator___item_t)(val_t  self);
val_t array___ArrayIterator___item(val_t  self);
typedef void (* array___ArrayIterator___item__eq_t)(val_t  self, val_t  param0);
void array___ArrayIterator___item__eq(val_t  self, val_t  param0);
typedef val_t (* array___ArrayIterator___is_ok_t)(val_t  self);
val_t array___ArrayIterator___is_ok(val_t  self);
typedef void (* array___ArrayIterator___next_t)(val_t  self);
void array___ArrayIterator___next(val_t  self);
typedef void (* array___ArrayIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void array___ArrayIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_array___ArrayIterator___init(val_t  param0);
#define ATTR_array___ArrayIterator____index(recv) ATTR(recv, COLOR_array___ArrayIterator____index)
typedef val_t (* array___ArrayIterator___index_t)(val_t  self);
val_t array___ArrayIterator___index(val_t  self);
#define ATTR_array___ArrayIterator____array(recv) ATTR(recv, COLOR_array___ArrayIterator____array)
#define ATTR_array___ArraySet____array(recv) ATTR(recv, COLOR_array___ArraySet____array)
typedef val_t (* array___ArraySet___has_t)(val_t  self, val_t  param0);
val_t array___ArraySet___has(val_t  self, val_t  param0);
typedef void (* array___ArraySet___add_t)(val_t  self, val_t  param0);
void array___ArraySet___add(val_t  self, val_t  param0);
typedef val_t (* array___ArraySet___is_empty_t)(val_t  self);
val_t array___ArraySet___is_empty(val_t  self);
typedef val_t (* array___ArraySet___length_t)(val_t  self);
val_t array___ArraySet___length(val_t  self);
typedef val_t (* array___ArraySet___first_t)(val_t  self);
val_t array___ArraySet___first(val_t  self);
typedef void (* array___ArraySet___remove_t)(val_t  self, val_t  param0);
void array___ArraySet___remove(val_t  self, val_t  param0);
typedef void (* array___ArraySet___remove_all_t)(val_t  self, val_t  param0);
void array___ArraySet___remove_all(val_t  self, val_t  param0);
typedef void (* array___ArraySet___clear_t)(val_t  self);
void array___ArraySet___clear(val_t  self);
typedef val_t (* array___ArraySet___iterator_t)(val_t  self);
val_t array___ArraySet___iterator(val_t  self);
typedef void (* array___ArraySet___enlarge_t)(val_t  self, val_t  param0);
void array___ArraySet___enlarge(val_t  self, val_t  param0);
typedef void (* array___ArraySet___remove_at_t)(val_t  self, val_t  param0);
void array___ArraySet___remove_at(val_t  self, val_t  param0);
typedef void (* array___ArraySet___init_t)(val_t  self, int* init_table);
void array___ArraySet___init(val_t  self, int* init_table);
val_t NEW_array___ArraySet___init();
typedef void (* array___ArraySet___with_capacity_t)(val_t  self, val_t  param0, int* init_table);
void array___ArraySet___with_capacity(val_t  self, val_t  param0, int* init_table);
val_t NEW_array___ArraySet___with_capacity(val_t  param0);
typedef val_t (* array___ArraySetIterator___is_ok_t)(val_t  self);
val_t array___ArraySetIterator___is_ok(val_t  self);
typedef void (* array___ArraySetIterator___next_t)(val_t  self);
void array___ArraySetIterator___next(val_t  self);
typedef val_t (* array___ArraySetIterator___item_t)(val_t  self);
val_t array___ArraySetIterator___item(val_t  self);
typedef void (* array___ArraySetIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void array___ArraySetIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_array___ArraySetIterator___init(val_t  param0);
#define ATTR_array___ArraySetIterator____iter(recv) ATTR(recv, COLOR_array___ArraySetIterator____iter)
typedef val_t (* array___ArrayMap_____bra_t)(val_t  self, val_t  param0);
val_t array___ArrayMap_____bra(val_t  self, val_t  param0);
typedef void (* array___ArrayMap_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void array___ArrayMap_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* array___ArrayMap___has_key_t)(val_t  self, val_t  param0);
val_t array___ArrayMap___has_key(val_t  self, val_t  param0);
typedef val_t (* array___ArrayMap___has_t)(val_t  self, val_t  param0);
val_t array___ArrayMap___has(val_t  self, val_t  param0);
typedef val_t (* array___ArrayMap___has_only_t)(val_t  self, val_t  param0);
val_t array___ArrayMap___has_only(val_t  self, val_t  param0);
typedef val_t (* array___ArrayMap___length_t)(val_t  self);
val_t array___ArrayMap___length(val_t  self);
typedef val_t (* array___ArrayMap___first_t)(val_t  self);
val_t array___ArrayMap___first(val_t  self);
typedef val_t (* array___ArrayMap___count_t)(val_t  self, val_t  param0);
val_t array___ArrayMap___count(val_t  self, val_t  param0);
typedef val_t (* array___ArrayMap___iterator_t)(val_t  self);
val_t array___ArrayMap___iterator(val_t  self);
typedef val_t (* array___ArrayMap___is_empty_t)(val_t  self);
val_t array___ArrayMap___is_empty(val_t  self);
typedef void (* array___ArrayMap___remove_t)(val_t  self, val_t  param0);
void array___ArrayMap___remove(val_t  self, val_t  param0);
typedef void (* array___ArrayMap___remove_all_t)(val_t  self, val_t  param0);
void array___ArrayMap___remove_all(val_t  self, val_t  param0);
typedef void (* array___ArrayMap___remove_at_t)(val_t  self, val_t  param0);
void array___ArrayMap___remove_at(val_t  self, val_t  param0);
typedef void (* array___ArrayMap___clear_t)(val_t  self);
void array___ArrayMap___clear(val_t  self);
typedef void (* array___ArrayMap___enlarge_t)(val_t  self, val_t  param0);
void array___ArrayMap___enlarge(val_t  self, val_t  param0);
typedef val_t (* array___ArrayMap___couple_at_t)(val_t  self, val_t  param0);
val_t array___ArrayMap___couple_at(val_t  self, val_t  param0);
#define ATTR_array___ArrayMap____items(recv) ATTR(recv, COLOR_array___ArrayMap____items)
typedef void (* array___ArrayMap___remove_at_index_t)(val_t  self, val_t  param0);
void array___ArrayMap___remove_at_index(val_t  self, val_t  param0);
#define ATTR_array___ArrayMap____last_index(recv) ATTR(recv, COLOR_array___ArrayMap____last_index)
typedef val_t (* array___ArrayMap___index_t)(val_t  self, val_t  param0);
val_t array___ArrayMap___index(val_t  self, val_t  param0);
typedef void (* array___ArrayMap___init_t)(val_t  self, int* init_table);
void array___ArrayMap___init(val_t  self, int* init_table);
val_t NEW_array___ArrayMap___init();
typedef val_t (* array___Iterator___to_a_t)(val_t  self);
val_t array___Iterator___to_a(val_t  self);
typedef val_t (* array___Collection___to_a_t)(val_t  self);
val_t array___Collection___to_a(val_t  self);
typedef val_t (* array___ArrayCapable___calloc_array_t)(val_t  self, val_t  param0);
val_t array___ArrayCapable___calloc_array(val_t  self, val_t  param0);
typedef val_t (* array___NativeArray_____bra_t)(val_t  self, val_t  param0);
val_t array___NativeArray_____bra(val_t  self, val_t  param0);
typedef void (* array___NativeArray_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void array___NativeArray_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef void (* array___NativeArray___copy_to_t)(val_t  self, val_t  param0, val_t  param1);
void array___NativeArray___copy_to(val_t  self, val_t  param0, val_t  param1);
#endif
