#include "nit.common.h"
#define COLOR_array__AbstractArrayRead___length 0
long array__AbstractArrayRead__length(val* self);
short int array__AbstractArrayRead__is_empty(val* self);
#define COLOR_abstract_collection__Collection_FT0 8
extern const struct type type_kernel__Int;
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_kernel__Object___61d_61d 2
short int array__AbstractArrayRead__has(val* self, val* p0);
#define COLOR_abstract_collection__SequenceRead_FT0 10
long array__AbstractArrayRead__index_of_from(val* self, val* p0, long p1);
long array__AbstractArrayRead__index_of(val* self, val* p0);
#define COLOR_array__AbstractArrayRead_FT0 11
long array__AbstractArrayRead__last_index_of_from(val* self, val* p0, long p1);
long array__AbstractArrayRead__last_index_of(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
#define COLOR_array__Arrayarray__AbstractArrayRead_FT0 12
void array__Array__with_capacity(val* self, long p0);
void array__Array__add(val* self, val* p0);
val* array__AbstractArrayRead__reversed(val* self);
val* NEW_array__ArrayIterator(const struct type* type);
#define COLOR_array__ArrayIteratorarray__AbstractArrayRead_FT0 13
void array__ArrayIterator__init(val* self, val* p0);
val* array__AbstractArrayRead__iterator(val* self);
#define COLOR_abstract_collection__Sequence_FT0 0
void array__AbstractArray__push(val* self, val* p0);
val* abstract_collection__SequenceRead__last(val* self);
val* array__AbstractArray__pop(val* self);
val* abstract_collection__SequenceRead__first(val* self);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
val* array__AbstractArray__shift(val* self);
void array__AbstractArray__unshift(val* self, val* p0);
void array__AbstractArray__clear(val* self);
#define COLOR_abstract_collection__RemovableCollection_FT0 5
void array__AbstractArray__remove_at(val* self, long p0);
void array__AbstractArray__remove(val* self, val* p0);
#define COLOR_array__Array___items 1
#define COLOR_array__Array___capacity 2
void array__Array__enlarge(val* self, long p0);
#define COLOR_array__NativeArray_FT0 0
#define COLOR_abstract_collection__SimpleCollection_FT0 1
val* NEW_array__NativeArray(int length, const struct type* type);
#define COLOR_array__NativeArrayarray__ArrayCapable_FT0 4
#define COLOR_array__NativeArrayarray__NativeArray_FT0 1
void array__Array__init(val* self);
void array__Array__with_items(val* self, val* p0);
#define COLOR_array__NativeArrayarray__Array_FT0 2
void array__Array__with_native(val* self, val* p0, long p1);
#define COLOR_array__ArrayIterator___array 1
#define COLOR_array__ArrayIterator___index 0
val* array__ArrayIterator__item(val* self);
short int array__ArrayIterator__is_ok(val* self);
void array__ArrayIterator__next(val* self);
#define COLOR_array__AbstractArrayReadarray__ArrayIterator_FT0 1
long array__ArrayIterator__index(val* self);
#define COLOR_array__ArraySet___array 0
short int array__ArraySet__has(val* self, val* p0);
void array__ArraySet__add(val* self, val* p0);
short int array__ArraySet__is_empty(val* self);
long array__ArraySet__length(val* self);
val* array__ArraySet__first(val* self);
void array__ArraySet__remove_at(val* self, long p0);
void array__ArraySet__remove(val* self, val* p0);
void array__ArraySet__clear(val* self);
val* NEW_array__ArraySetIterator(const struct type* type);
#define COLOR_array__ArraySetIteratorarray__ArraySet_FT0 0
void array__ArraySetIterator__init(val* self, val* p0);
val* array__ArraySet__iterator(val* self);
#define COLOR_array__Arrayarray__ArraySet_FT0 2
void array__ArraySet__init(val* self);
#define COLOR_array__ArraySetIterator___iter 0
short int array__ArraySetIterator__is_ok(val* self);
void array__ArraySetIterator__next(val* self);
val* array__ArraySetIterator__item(val* self);
#define COLOR_array__ArrayIteratorarray__ArraySetIterator_FT0 1
#define COLOR_abstract_collection__MapRead_FT0 3
long array__ArrayMap__index(val* self, val* p0);
#define COLOR_array__ArrayMap___items 2
#define COLOR_abstract_collection__Couple___second 1
val* abstract_collection__MapRead__provide_default_value(val* self, val* p0);
val* array__ArrayMap___91d_93d(val* self, val* p0);
#define COLOR_abstract_collection__Map_FT0 8
#define COLOR_abstract_collection__Map_FT1 9
#define COLOR_abstract_collection__Couple_FT1 1
val* NEW_abstract_collection__Couple(const struct type* type);
#define COLOR_abstract_collection__Couplearray__ArrayMap_FT0array__ArrayMap_FT1 2
void abstract_collection__Couple__init(val* self, val* p0, val* p1);
void array__ArrayMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_array__ArrayMap___keys 0
#define COLOR_array__ArrayMap___values 1
long array__ArrayMap__length(val* self);
val* array__ArrayMap__couple_iterator(val* self);
short int array__ArrayMap__is_empty(val* self);
void array__ArrayMap__clear(val* self);
void array__ArrayMap__remove_at_index(val* self, long p0);
#define COLOR_array__ArrayMap_FT0 4
#define COLOR_array__ArrayMap___last_index 3
#define COLOR_abstract_collection__Couple___first 0
#define COLOR_array__Arrayabstract_collection__Couplearray__ArrayMap_FT0array__ArrayMap_FT1 5
void array__ArrayMap__init(val* self);
#define COLOR_array__ArrayMapKeys___map 0
val* array__ArrayMapKeys__first(val* self);
short int array__ArrayMapKeys__has(val* self, val* p0);
short int array__ArrayMapKeys__is_empty(val* self);
long array__ArrayMapKeys__length(val* self);
val* NEW_abstract_collection__MapKeysIterator(const struct type* type);
#define COLOR_abstract_collection__MapKeysIteratorarray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1 1
val* abstract_collection__CoupleMap__iterator(val* self);
#define COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1 1
#define COLOR_abstract_collection__MapKeysIterator___original_iterator 0
val* array__ArrayMapKeys__iterator(val* self);
void array__ArrayMapKeys__clear(val* self);
void array__ArrayMapKeys__remove(val* self, val* p0);
#define COLOR_array__ArrayMaparray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1 0
#define COLOR_array__ArrayMapValues___map 0
val* array__ArrayMapValues__first(val* self);
short int array__ArrayMapValues__is_empty(val* self);
long array__ArrayMapValues__length(val* self);
val* NEW_abstract_collection__MapValuesIterator(const struct type* type);
#define COLOR_abstract_collection__MapValuesIteratorarray__ArrayMapValues_FT0array__ArrayMapValues_FT1 1
#define COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1 1
#define COLOR_abstract_collection__MapValuesIterator___original_iterator 0
val* array__ArrayMapValues__iterator(val* self);
short int array__ArrayMapValues__has(val* self, val* p0);
void array__ArrayMapValues__clear(val* self);
void array__ArrayMapValues__remove(val* self, val* p0);
#define COLOR_array__ArrayMaparray__ArrayMapValues_FT0array__ArrayMapValues_FT1 0
#define COLOR_array__Arrayabstract_collection__Iterator_FT0 0
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_abstract_collection__Iterator__next 30
val* array__Iterator__to_a(val* self);
#define COLOR_abstract_collection__Collection__iterator 29
val* array__Collection__to_a(val* self);
