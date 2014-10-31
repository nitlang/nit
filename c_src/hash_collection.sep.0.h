#include "nit.common.h"
#define COLOR_hash_collection__HashCollection_FT0 7
#define COLOR_kernel__Object__hash 4
#define COLOR_hash_collection__HashCollection___capacity 1
extern const struct type type_kernel__Int;
long hash_collection__HashCollection__index_at(val* self, val* p0);
#define COLOR_hash_collection__HashCollection___last_accessed_key 5
#define COLOR_hash_collection__HashCollection___last_accessed_node 6
val* hash_collection__HashCollection__node_at_idx(val* self, long p0, val* p1);
val* hash_collection__HashCollection__node_at(val* self, val* p0);
#define COLOR_hash_collection__HashCollection___array 0
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_hash_collection__HashNode___key 0
#define COLOR_hash_collection__HashNode___next_in_bucklet 4
#define COLOR_nullable_hash_collection__HashCollection_FT1 10
#define COLOR_hash_collection__HashCollection_FT1 12
#define COLOR_hash_collection__HashCollection___first_item 3
#define COLOR_hash_collection__HashCollection___last_item 4
#define COLOR_hash_collection__HashNode___next_item 1
#define COLOR_hash_collection__HashNode___prev_item 2
#define COLOR_array__NativeArray_FT0 0
#define COLOR_hash_collection__HashNode___prev_in_bucklet 3
#define COLOR_nullable_hash_collection__HashCollection_FT0 13
#define COLOR_hash_collection__HashCollection___the_length 2
void hash_collection__HashCollection__enlarge(val* self, long p0);
void hash_collection__HashCollection__store(val* self, long p0, val* p1);
void hash_collection__HashCollection__remove_node(val* self, val* p0);
void hash_collection__HashCollection__raz(val* self);
val* NEW_array__NativeArray(int length, const struct type* type);
#define COLOR_array__NativeArrayarray__ArrayCapable_FT0 11
#define COLOR_hash_collection__HashNode_FT0 2
void hash_collection__HashNode__init(val* self, val* p0);
#define COLOR_abstract_collection__MapRead_FT0 2
#define COLOR_abstract_collection__MapRead__provide_default_value 39
#define COLOR_hash_collection__HashMapNode___value 5
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
val* NEW_hash_collection__HashMapIterator(const struct type* type);
#define COLOR_hash_collection__HashMapIteratorhash_collection__HashMap_FT0hash_collection__HashMap_FT1 3
void hash_collection__HashMapIterator__init(val* self, val* p0);
val* hash_collection__HashMap__iterator(val* self);
long hash_collection__HashMap__length(val* self);
short int hash_collection__HashMap__is_empty(val* self);
#define COLOR_abstract_collection__Map_FT0 4
#define COLOR_abstract_collection__Map_FT1 5
val* NEW_hash_collection__HashMapNode(const struct type* type);
#define COLOR_hash_collection__HashMapNodehash_collection__HashMap_FT0hash_collection__HashMap_FT1 6
void hash_collection__HashMapNode__init(val* self, val* p0, val* p1);
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
void hash_collection__HashMap__clear(val* self);
#define COLOR_hash_collection__HashMap__init 53
void hash_collection__HashMap__init(val* self);
#define COLOR_hash_collection__HashMap___keys 7
#define COLOR_hash_collection__HashMap___values 8
#define COLOR_hash_collection__HashMapKeys___map 0
#define COLOR_hash_collection__HashMaphash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1 0
val* hash_collection__HashMapKeys__first(val* self);
#define COLOR_abstract_collection__Collection_FT0 2
short int hash_collection__HashMapKeys__has(val* self, val* p0);
short int hash_collection__HashMapKeys__is_empty(val* self);
long hash_collection__HashMapKeys__length(val* self);
val* NEW_abstract_collection__MapKeysIterator(const struct type* type);
#define COLOR_abstract_collection__MapKeysIteratorhash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1 1
#define COLOR_abstract_collection__MapKeysIterator__original_iterator_61d 38
#define COLOR_kernel__Object__init 7
val* hash_collection__HashMapKeys__iterator(val* self);
void hash_collection__HashMapKeys__clear(val* self);
#define COLOR_abstract_collection__RemovableCollection_FT0 9
void hash_collection__HashMapKeys__remove(val* self, val* p0);
#define COLOR_hash_collection__HashMapKeys__init 57
#define COLOR_hash_collection__HashMapValues___map 0
#define COLOR_hash_collection__HashMaphash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1 0
val* hash_collection__HashMapValues__first(val* self);
short int hash_collection__HashMapValues__has(val* self, val* p0);
short int hash_collection__HashMapValues__is_empty(val* self);
long hash_collection__HashMapValues__length(val* self);
val* NEW_abstract_collection__MapValuesIterator(const struct type* type);
#define COLOR_abstract_collection__MapValuesIteratorhash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1 1
#define COLOR_abstract_collection__MapValuesIterator__original_iterator_61d 38
val* hash_collection__HashMapValues__iterator(val* self);
void hash_collection__HashMapValues__clear(val* self);
void hash_collection__HashMapValues__remove(val* self, val* p0);
#define COLOR_hash_collection__HashMapValues__init 57
#define COLOR_hash_collection__HashMapNode_FT0 0
#define COLOR_hash_collection__HashMapNode_FT1 1
#define COLOR_hash_collection__HashMapIterator___node 1
short int hash_collection__HashMapIterator__is_ok(val* self);
val* hash_collection__HashMapIterator__item(val* self);
val* hash_collection__HashMapIterator__key(val* self);
void hash_collection__HashMapIterator__next(val* self);
#define COLOR_hash_collection__HashMaphash_collection__HashMapIterator_FT0hash_collection__HashMapIterator_FT1 0
#define COLOR_hash_collection__HashMapIterator___map 0
long hash_collection__HashSet__length(val* self);
short int hash_collection__HashSet__is_empty(val* self);
val* hash_collection__HashSet__first(val* self);
short int hash_collection__HashSet__has(val* self, val* p0);
#define COLOR_abstract_collection__SimpleCollection_FT0 6
val* NEW_hash_collection__HashSetNode(const struct type* type);
#define COLOR_hash_collection__HashSetNodehash_collection__HashSet_FT0 0
void hash_collection__HashSetNode__init(val* self, val* p0);
void hash_collection__HashSet__add(val* self, val* p0);
void hash_collection__HashSet__remove(val* self, val* p0);
void hash_collection__HashSet__clear(val* self);
val* NEW_hash_collection__HashSetIterator(const struct type* type);
#define COLOR_hash_collection__HashSetIteratorhash_collection__HashSet_FT0 1
void hash_collection__HashSetIterator__init(val* self, val* p0);
val* hash_collection__HashSet__iterator(val* self);
#define COLOR_hash_collection__HashSet__init 61
void hash_collection__HashSet__init(val* self);
#define COLOR_abstract_collection__Collectionhash_collection__HashSet_FT0 5
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
void hash_collection__HashSet__from(val* self, val* p0);
#define COLOR_hash_collection__HashSetNode_FT0 0
#define COLOR_hash_collection__HashSetIterator___node 1
short int hash_collection__HashSetIterator__is_ok(val* self);
val* hash_collection__HashSetIterator__item(val* self);
void hash_collection__HashSetIterator__next(val* self);
#define COLOR_hash_collection__HashSethash_collection__HashSetIterator_FT0 1
#define COLOR_hash_collection__HashSetIterator___set 0
