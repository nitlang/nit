#include "nit.common.h"
#define COLOR_abstract_collection__Collection__length 39
short int abstract_collection__Collection__is_empty(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
extern const struct type type_kernel__Int;
#define COLOR_abstract_collection__Iterator__next 32
long abstract_collection__Collection__length(val* self);
#define COLOR_abstract_collection__Collection_FT0 2
#define COLOR_kernel__Object___61d_61d 2
short int abstract_collection__Collection__has(val* self, val* p0);
val* abstract_collection__Collection__first(val* self);
#define COLOR_abstract_collection__Collectionabstract_collection__Collection_FT0 3
#define COLOR_abstract_collection__Collection__has 40
short int abstract_collection__Collection__has_all(val* self, val* p0);
val* abstract_collection__Iterator__iterator(val* self);
#define COLOR_abstract_collection__Container___item 0
val* abstract_collection__Container__first(val* self);
short int abstract_collection__Container__is_empty(val* self);
long abstract_collection__Container__length(val* self);
short int abstract_collection__Container__has(val* self, val* p0);
val* NEW_abstract_collection__ContainerIterator(const struct type* type);
#define COLOR_abstract_collection__ContainerIteratorabstract_collection__Container_FT0 5
void abstract_collection__ContainerIterator__init(val* self, val* p0);
val* abstract_collection__Container__iterator(val* self);
#define COLOR_abstract_collection__Container_FT0 6
void abstract_collection__Container__init(val* self, val* p0);
#define COLOR_abstract_collection__ContainerIterator___container 1
val* abstract_collection__ContainerIterator__item(val* self);
#define COLOR_abstract_collection__ContainerIterator___is_ok 0
void abstract_collection__ContainerIterator__next(val* self);
#define COLOR_abstract_collection__Containerabstract_collection__ContainerIterator_FT0 1
#define COLOR_abstract_collection__RemovableCollection_FT0 9
#define COLOR_abstract_collection__Collectionabstract_collection__SimpleCollection_FT0 8
#define COLOR_abstract_collection__SimpleCollection__add 58
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
extern const struct type type_abstract_collection__Setkernel__Object;
#define COLOR_abstract_collection__Collectionabstract_collection__Set_FT0 14
short int abstract_collection__Set___61d_61d(val* self, val* p0);
#define COLOR_kernel__Object__hash 4
long abstract_collection__Set__hash(val* self);
#define COLOR_abstract_collection__MapRead_FT0 2
short int abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_abstract_collection__MapRead___91d_93d 31
val* abstract_collection__MapRead__get_or_null(val* self, val* p0);
#define COLOR_abstract_collection__MapRead__keys 36
val* abstract_collection__MapRead__provide_default_value(val* self, val* p0);
#define COLOR_abstract_collection__MapKeysIterator___original_iterator 0
#define COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1 1
#define COLOR_abstract_collection__MapIterator__is_ok 34
short int abstract_collection__MapKeysIterator__is_ok(val* self);
#define COLOR_abstract_collection__MapIterator__next 33
void abstract_collection__MapKeysIterator__next(val* self);
#define COLOR_abstract_collection__MapIterator__key 32
val* abstract_collection__MapKeysIterator__item(val* self);
#define COLOR_abstract_collection__MapKeysIterator__init 39
#define COLOR_abstract_collection__MapValuesIterator___original_iterator 0
#define COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1 1
short int abstract_collection__MapValuesIterator__is_ok(val* self);
void abstract_collection__MapValuesIterator__next(val* self);
#define COLOR_abstract_collection__MapIterator__item 31
val* abstract_collection__MapValuesIterator__item(val* self);
#define COLOR_abstract_collection__MapValuesIterator__init 39
#define COLOR_abstract_collection__Collection__is_empty 38
#define COLOR_abstract_collection__SequenceRead___91d_93d 46
val* abstract_collection__SequenceRead__first(val* self);
val* abstract_collection__SequenceRead__last(val* self);
#define COLOR_abstract_collection__SequenceRead_FT0 1
#define COLOR_abstract_collection__SequenceRead__index_of_from 50
long abstract_collection__SequenceRead__index_of(val* self, val* p0);
#define COLOR_abstract_collection__SequenceRead__last_index_of_from 51
long abstract_collection__SequenceRead__last_index_of(val* self, val* p0);
#define COLOR_abstract_collection__IndexedIterator__index 37
long abstract_collection__SequenceRead__index_of_from(val* self, val* p0, long p1);
long abstract_collection__SequenceRead__last_index_of_from(val* self, val* p0, long p1);
extern const struct type type_abstract_collection__SequenceReadnullable_kernel__Object;
#define COLOR_kernel__Object___33d_61d 3
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0);
long abstract_collection__SequenceRead__hash(val* self);
val* abstract_collection__SequenceRead__iterator_from(val* self, long p0);
#define COLOR_abstract_collection__Sequence_FT0 5
#define COLOR_abstract_collection__Sequence___91d_93d_61d 67
void abstract_collection__Sequence__first_61d(val* self, val* p0);
#define COLOR_abstract_collection__SimpleCollection_FT0 6
#define COLOR_abstract_collection__Sequence__push 61
void abstract_collection__Sequence__add(val* self, val* p0);
#define COLOR_abstract_collection__Collectionabstract_collection__Sequence_FT0 7
void abstract_collection__Sequence__append(val* self, val* p0);
#define COLOR_abstract_collection__Sequence__insert_all 69
void abstract_collection__Sequence__prepend(val* self, val* p0);
#define COLOR_abstract_collection__Sequence__insert 68
void abstract_collection__Sequence__insert_all(val* self, val* p0, long p1);
val* NEW_abstract_collection__CoupleMapIterator(const struct type* type);
#define COLOR_abstract_collection__CoupleMapIteratorabstract_collection__CoupleMap_FT0abstract_collection__CoupleMap_FT1 8
val* array__ArrayMap__couple_iterator(val* self);
void abstract_collection__CoupleMapIterator__init(val* self, val* p0);
val* abstract_collection__CoupleMap__iterator(val* self);
#define COLOR_abstract_collection__CoupleMapIterator___iter 0
#define COLOR_abstract_collection__Couple___second 1
val* abstract_collection__CoupleMapIterator__item(val* self);
#define COLOR_abstract_collection__Couple___first 0
val* abstract_collection__CoupleMapIterator__key(val* self);
short int abstract_collection__CoupleMapIterator__is_ok(val* self);
void abstract_collection__CoupleMapIterator__next(val* self);
#define COLOR_abstract_collection__Iteratorabstract_collection__Coupleabstract_collection__CoupleMapIterator_FT0abstract_collection__CoupleMapIterator_FT1 0
#define COLOR_abstract_collection__Couple_FT0 0
#define COLOR_abstract_collection__Couple_FT1 1
void abstract_collection__Couple__init(val* self, val* p0, val* p1);
