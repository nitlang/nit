#include "nit.common.h"
#define COLOR_nitc__coloring__POSetConflictGraph___core 0
extern const char FILE_nitc__coloring[];
#define COLOR_nitc__coloring__POSetConflictGraph___border 1
#define COLOR_nitc__coloring__POSetConflictGraph___crown 2
#define COLOR_nitc__coloring__POSetConflictGraph___conflicts 3
#define COLOR_nitc__coloring__POSetConflictGraph___poset 4
#define COLOR_poset__POSet__nitc__POSetConflictGraph___35dE 2
#define COLOR_nitc__coloring__POSetConflictGraph___order 5
#define COLOR_core__Array__nitc__POSetConflictGraph___35dE 3
#define COLOR_nitc___nitc__POSetConflictGraph___core__kernel__Object__init 27
void nitc___nitc__POSetConflictGraph___extract_core(val* self);
void nitc___nitc__POSetConflictGraph___extract_border(val* self);
void nitc___nitc__POSetConflictGraph___extract_crown(val* self);
void nitc___nitc__POSetConflictGraph___compute_conflicts(val* self);
val* poset___poset__POSet___linearize(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__RemovableCollection__clear(val* self);
val* poset___poset__POSet___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
val* poset___poset__POSet____91d_93d(val* self, val* p0);
val* poset___poset__POSetElement___direct_greaters(val* self);
#define COLOR_core__abstract_collection__Collection__length 22
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
val* poset___poset__POSetElement___greaters(val* self);
void core___core__SimpleCollection___add_all(val* self, val* p0);
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self);
short int nitc___nitc__POSetConflictGraph___is_border(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__RemovableCollection__remove(val* self, val* p0);
#define COLOR_nitc__POSetConflictGraph___35dE 4
val* poset___poset__POSetElement___direct_smallers(val* self);
#define COLOR_core__abstract_collection__Collection__iterator 24
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
void core___core__HashMap___core__abstract_collection__Map__clear(val* self);
void nitc___nitc__POSetConflictGraph___add_conflicts(val* self, val* p0);
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
val* NEW_core__HashSet(const struct type* type);
#define COLOR_core__HashSet__nitc__POSetConflictGraph___35dE 0
void core___core__HashSet___core__kernel__Object__init(val* self);
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_core__abstract_collection__SimpleCollection__add 49
#define COLOR_core__Collection__nitc__POSetConflictGraph___35dE 5
void nitc___nitc__POSetConflictGraph___add_conflict(val* self, val* p0, val* p1);
val* NEW_nitc__POSetConflictGraph(const struct type* type);
#define COLOR_nitc__POSetConflictGraph__poset__POSet___35dE 8
#define COLOR_nitc__coloring__POSetConflictGraph__poset_61d 13
#define COLOR_core__kernel__Object__init 0
#define COLOR_nitc__coloring__POSetColorer___is_colored 0
#define COLOR_nitc__coloring__POSetColorer___ids_cache 1
#define COLOR_nitc__coloring__POSetColorer___colors_cache 2
#define COLOR_nitc__coloring__POSetColorer___poset_cache 3
#define COLOR_poset__POSet__nitc__POSetColorer___35dE 1
#define COLOR_nitc__coloring__POSetColorer___conflicts_cache 4
#define COLOR_core__Map__nitc__POSetColorer___35dE__core__Set__nitc__POSetColorer___35dE 2
#define COLOR_nitc__coloring__POSetColorer___graph 5
#define COLOR_nitc__POSetConflictGraph__nitc__POSetColorer___35dE 3
void nitc___nitc__POSetColorer___allocate_ids(val* self);
void nitc___nitc__POSetColorer___compute_colors(val* self);
#define COLOR_core__HashSet__nitc__POSetColorer___35dE 4
val* core__array___Collection___to_a(val* self);
void core___core__HashSet___from(val* self, val* p0);
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
long core___core__HashMap___core__abstract_collection__MapRead__length(val* self);
void nitc___nitc__POSetColorer___colorize_core(val* self);
void nitc___nitc__POSetColorer___colorize_set(val* self, val* p0);
long nitc___nitc__POSetColorer___min_color(val* self, val* p0);
short int nitc___nitc__POSetColorer___is_color_free(val* self, long p0, val* p1);
#define COLOR_core__Set__nitc__POSetColorer___35dE 5
#define COLOR_nitc__POSetColorer___35dE 6
#define COLOR_core__Collection__nitc__POSetColorer___35dE 7
#define COLOR_nitc__coloring__POSetGroupColorer___graph 0
#define COLOR_nitc__POSetConflictGraph__nitc__POSetGroupColorer___35dH 3
#define COLOR_nitc__coloring__POSetGroupColorer___buckets 1
#define COLOR_core__Map__nitc__POSetGroupColorer___35dH__core__Collection__nitc__POSetGroupColorer___35dE 4
#define COLOR_nitc__coloring__POSetGroupColorer___colors 2
#define COLOR_nitc__coloring__POSetGroupColorer___used_colors 5
extern const struct type type_core__HashSet__core__Int;
void nitc___nitc__POSetGroupColorer___compute_colors(val* self);
#define COLOR_nitc__coloring__POSetGroupColorer___colors_cache 4
#define COLOR_nitc__POSetGroupColorer___35dH 5
val* NEW_core__Array(const struct type* type);
#define COLOR_core__Array__nullable__nitc__POSetGroupColorer___35dE 6
void core___core__Array___core__kernel__Object__init(val* self);
val* nitc___nitc__POSetGroupColorer___poset(val* self);
#define COLOR_core__abstract_collection__MapRead__get_or_null 20
#define COLOR_core__kernel__Object___61d_61d 4
val* nitc___nitc__POSetGroupColorer___colors(val* self);
#define COLOR_core__abstract_collection__MapRead___91d_93d 15
#define COLOR_core__array__AbstractArrayRead___length 0
void core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
long core___core__Int___Discrete__successor(long self, long p0);
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_core__abstract_text__Object__to_s 3
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
void core__file___Sys___print(val* self, val* p0);
void nitc___nitc__POSetGroupColorer___colorize_core(val* self);
void nitc___nitc__POSetGroupColorer___colorize_set(val* self, val* p0);
long nitc___nitc__POSetGroupColorer___inherit_color(val* self, val* p0);
long nitc___nitc__POSetGroupColorer___next_free_color(val* self, long p0, val* p1);
#define COLOR_nitc__coloring__POSetGroupColorer___min_colors 6
#define COLOR_core__Set__nitc__POSetGroupColorer___35dH 7
#define COLOR_core__abstract_collection__Collection__has 27
#define COLOR_core__Collection__nitc__POSetGroupColorer___35dH 8
#define COLOR_nitc___nitc__POSetGroupColorer___core__kernel__Object__init 27
#define COLOR_nitc__coloring__BucketsColorer___colors 0
#define COLOR_nitc__coloring__BucketsColorer___conflicts 1
#define COLOR_core__Map__nitc__BucketsColorer___35dH__core__Set__nitc__BucketsColorer___35dE 2
void nitc___nitc__BucketsColorer___compute_conflicts(val* self, val* p0);
#define COLOR_core__abstract_collection__MapRead__iterator 13
#define COLOR_core__abstract_collection__MapIterator__is_ok 12
#define COLOR_core__abstract_collection__MapIterator__key 13
#define COLOR_core__abstract_collection__MapIterator__item 14
short int nitc___nitc__BucketsColorer___is_color_free(val* self, val* p0, long p1);
#define COLOR_core__abstract_collection__MapIterator__next 15
#define COLOR_nitc__BucketsColorer___35dE 3
#define COLOR_core__HashSet__nitc__BucketsColorer___35dE 4
#define COLOR_nitc__coloring__POSetBucketsColorer___colors 0
#define COLOR_nitc__coloring__POSetBucketsColorer___poset 1
#define COLOR_poset__POSet__nitc__POSetBucketsColorer___35dH 1
#define COLOR_nitc__coloring__POSetBucketsColorer___conflicts 2
#define COLOR_core__Map__nitc__POSetBucketsColorer___35dH__core__Set__nitc__POSetBucketsColorer___35dH 2
#define COLOR_core__Map__nitc__POSetBucketsColorer___35dH__core__Set__nitc__POSetBucketsColorer___35dE 3
#define COLOR_core__abstract_collection__MapRead__keys 16
long nitc___nitc__POSetBucketsColorer___min_color(val* self, val* p0, val* p1);
short int nitc___nitc__POSetBucketsColorer___is_color_free(val* self, long p0, val* p1, val* p2);
#define COLOR_core__Collection__nitc__POSetBucketsColorer___35dH 4
long nitc___nitc__POSetBucketsColorer___max_color(val* self, val* p0, val* p1);
#define COLOR_nitc__POSetBucketsColorer___35dH 5
#define COLOR_core__abstract_collection__MapRead__has_key 14
#define COLOR_nitc___nitc__POSetBucketsColorer___core__kernel__Object__init 21
