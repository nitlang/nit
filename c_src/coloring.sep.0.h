#include "nit.common.h"
#define COLOR_coloring__POSetConflictGraph___core 0
#define COLOR_coloring__POSetConflictGraph___border 1
#define COLOR_coloring__POSetConflictGraph___crown 2
#define COLOR_coloring__POSetConflictGraph___conflicts 3
#define COLOR_coloring__POSetConflictGraph___poset 4
#define COLOR_poset__POSetcoloring__POSetConflictGraph_FT0 2
void coloring__POSetConflictGraph__extract_core(val* self);
void coloring__POSetConflictGraph__extract_border(val* self);
void coloring__POSetConflictGraph__extract_crown(val* self);
void coloring__POSetConflictGraph__compute_conflicts(val* self);
void coloring__POSetConflictGraph__init(val* self, val* p0);
void hash_collection__HashSet__clear(val* self);
val* poset__POSet__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
val* poset__POSet___91d_93d(val* self, val* p0);
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__length 39
extern const struct type type_kernel__Int;
val* poset__POSetElement__greaters(val* self);
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 32
val* hash_collection__HashSet__iterator(val* self);
short int coloring__POSetConflictGraph__is_border(val* self, val* p0);
void hash_collection__HashSet__add(val* self, val* p0);
void hash_collection__HashSet__remove(val* self, val* p0);
#define COLOR_coloring__POSetConflictGraph_FT0 3
val* poset__POSetElement__direct_smallers(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
short int hash_collection__HashSet__has(val* self, val* p0);
void hash_collection__HashMap__clear(val* self);
void coloring__POSetConflictGraph__add_conflicts(val* self, val* p0);
short int abstract_collection__MapRead__has_key(val* self, val* p0);
val* NEW_hash_collection__HashSet(const struct type* type);
#define COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0 0
#define COLOR_kernel__Object__init 7
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
#define COLOR_abstract_collection__SimpleCollection__add 58
void coloring__POSetConflictGraph__add_conflict(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__Collectioncoloring__POSetConflictGraph_FT0 4
#define COLOR_coloring__POSetColorer___is_colored 0
#define COLOR_coloring__POSetColorer___ids_cache 1
val* coloring__POSetColorer__ids(val* self);
#define COLOR_coloring__POSetColorer___colors_cache 2
val* coloring__POSetColorer__colors(val* self);
#define COLOR_coloring__POSetColorer___poset_cache 3
#define COLOR_poset__POSetcoloring__POSetColorer_FT0 1
#define COLOR_coloring__POSetColorer___conflicts_cache 4
val* coloring__POSetColorer__conflicts(val* self);
#define COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0 2
#define COLOR_coloring__POSetColorer___graph 5
#define COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0 3
val* NEW_coloring__POSetConflictGraph(const struct type* type);
void coloring__POSetColorer__allocate_ids(val* self);
void coloring__POSetColorer__compute_colors(val* self);
void coloring__POSetColorer__colorize(val* self, val* p0);
#define COLOR_hash_collection__HashSetcoloring__POSetColorer_FT0 4
val* array__Collection__to_a(val* self);
void hash_collection__HashSet__from(val* self, val* p0);
val* poset__POSet__linearize(val* self, val* p0);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
long hash_collection__HashMap__length(val* self);
val* BOX_kernel__Int(long);
void array__ArrayIterator__next(val* self);
void coloring__POSetColorer__colorize_core(val* self);
void coloring__POSetColorer__colorize_set(val* self, val* p0);
long coloring__POSetColorer__min_color(val* self, val* p0);
short int coloring__POSetColorer__is_color_free(val* self, long p0, val* p1);
#define COLOR_abstract_collection__Setcoloring__POSetColorer_FT0 5
#define COLOR_coloring__POSetColorer_FT0 6
#define COLOR_abstract_collection__Collectioncoloring__POSetColorer_FT0 7
extern const struct class class_kernel__Int;
#define COLOR_coloring__BucketsColorer___colors 0
#define COLOR_coloring__BucketsColorer___conflicts 1
#define COLOR_abstract_collection__Mapcoloring__BucketsColorer_FT0abstract_collection__Setcoloring__BucketsColorer_FT1 2
void coloring__BucketsColorer__compute_conflicts(val* self, val* p0);
#define COLOR_abstract_collection__MapRead__iterator 34
#define COLOR_abstract_collection__MapIterator__is_ok 34
#define COLOR_abstract_collection__MapIterator__key 32
#define COLOR_abstract_collection__MapIterator__item 31
short int coloring__BucketsColorer__is_color_free(val* self, val* p0, long p1);
#define COLOR_abstract_collection__MapIterator__next 33
val* coloring__BucketsColorer__colorize(val* self, val* p0);
#define COLOR_coloring__BucketsColorer_FT1 3
#define COLOR_hash_collection__HashSetcoloring__BucketsColorer_FT1 4
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_coloring__POSetBucketsColorer___colors 0
#define COLOR_coloring__POSetBucketsColorer___poset 1
#define COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0 1
#define COLOR_coloring__POSetBucketsColorer___conflicts 2
#define COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0 2
void coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1 3
#define COLOR_abstract_collection__MapRead__keys 36
long coloring__POSetBucketsColorer__min_color(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__MapRead___91d_93d 31
short int coloring__POSetBucketsColorer__is_color_free(val* self, long p0, val* p1, val* p2);
val* coloring__POSetBucketsColorer__colorize(val* self, val* p0);
#define COLOR_abstract_collection__Collectioncoloring__POSetBucketsColorer_FT0 4
long coloring__POSetBucketsColorer__max_color(val* self, val* p0, val* p1);
#define COLOR_coloring__POSetBucketsColorer_FT0 5
