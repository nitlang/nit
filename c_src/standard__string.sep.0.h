#include "nit.common.h"
extern const char FILE_standard__string[];
#define COLOR_standard__string__Text__length 26
#define COLOR_standard__string__Text__chars 27
#define COLOR_standard__abstract_collection__SequenceRead___91d_93d 31
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
#define COLOR_standard__string__Text__empty 34
#define COLOR_standard__string__Text__substring 28
short int standard___standard__Text___is_empty(val* self);
#define COLOR_standard__abstract_collection__SequenceRead__iterator_from 32
#define COLOR_standard__abstract_collection__Collection__iterator 25
#define COLOR_standard__abstract_collection__Iterator__is_ok 16
#define COLOR_standard__abstract_collection__Iterator__item 17
#define COLOR_standard__abstract_collection__Iterator__next 18
short int standard___standard__Text___has_substring(val* self, val* p0, long p1);
#define COLOR_standard__string__Object__to_s 3
#define COLOR_standard__string__Text__to_cstring 25
#include "string_nit.h"
long standard___standard__Text___a_to(val* self, long p0);
long standard___standard__Char___to_i(uint32_t self);
long standard___standard__Int___Discrete__successor(long self, long p0);
short int standard__string___Char___is_numeric(uint32_t self);
short int standard___standard__Char___is_upper(uint32_t self);
#define COLOR_standard__string__Text__SELFTYPE 1
#define COLOR_standard__abstract_collection__SequenceRead__last 35
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
val* NEW_standard__Buffer(const struct type* type);
extern const struct type type_standard__Buffer;
val* standard___standard__Buffer___new(val* self);
extern const struct type type_standard__Char;
#define COLOR_standard__string__Buffer__add 69
val* standard__string___Int___Object__to_s(long self);
#define COLOR_standard__string__Buffer__append 68
val* standard__string___Int___to_base(long self, long p0, short int p1);
#define COLOR_standard__abstract_collection__SimpleCollection__add 45
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__String;
#define COLOR_standard__string__NativeArray__native_to_s 16
val* standard___standard__Buffer___with_cap(val* self, long p0);
#define COLOR_standard__kernel__Object___61d_61d 4
extern const struct type type_standard__Text;
#define COLOR_standard__kernel__Comparable__OTHER 0
#define COLOR_standard__string__Text___hash_cache 0
#define COLOR_standard__string__FlatText___items 1
#define COLOR_standard__string__FlatText___real_items 2
#define COLOR_standard__string__FlatText___length 3
#define COLOR_standard__string__StringCharView___target 0
#define COLOR_standard__string__StringCharView__SELFTYPE 0
#define COLOR_standard__string___standard__string__StringCharView___standard__kernel__Object__init 18
short int standard___standard__Text___is_lower(val* self);
short int standard___standard__Char___is_lower(uint32_t self);
uint32_t standard___standard__Char___to_lower(uint32_t self);
#define COLOR_standard__string__FlatSubstringsIter___tgt 0
short int standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__is_ok(val* self);
#define COLOR_standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init 24
#define COLOR_standard__string__FlatString___index_from 4
#define COLOR_standard__string__FlatString___index_to 5
#define COLOR_standard__string__FlatString___chars 6
val* NEW_standard__string__FlatStringCharView(const struct type* type);
extern const struct type type_standard__string__FlatStringCharView;
#define COLOR_standard__string__StringCharView__target_61d 16
#define COLOR_standard__kernel__Object__init 0
val* standard___standard__FlatString___Text__empty(val* self);
val* NEW_standard__FlatString(const struct type* type);
extern const struct type type_standard__FlatString;
void standard___standard__FlatString___with_infos(val* self, char* p0, long p1, long p2, long p3);
uint32_t standard___standard__Char___to_upper(uint32_t self);
val* BOX_standard__NativeString(void*);
#define COLOR_standard___standard__FlatString___standard__kernel__Object___61d_61d 89
#define COLOR_standard___standard__FlatString___standard__kernel__Comparable___60d 90
val* NEW_standard__string__FlatSubstringsIter(const struct type* type);
extern const struct type type_standard__string__FlatSubstringsIter;
#define COLOR_standard__string__FlatSubstringsIter__tgt_61d 22
#define COLOR_standard__string__FlatStringIterator___target 0
#define COLOR_standard__string__FlatStringIterator___target_items 1
#define COLOR_standard__string__FlatStringIterator___curr_pos 2
uint32_t standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self);
#define COLOR_standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init 30
uint32_t standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
val* NEW_standard__string__FlatStringIterator(const struct type* type);
extern const struct type type_standard__string__FlatStringIterator;
void standard__string___standard__string__FlatStringIterator___with_pos(val* self, val* p0, long p1);
val* NEW_standard__FlatBuffer(const struct type* type);
extern const struct type type_standard__FlatBuffer;
#define COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init 80
void standard___standard__FlatBuffer___with_capacity(val* self, long p0);
#define COLOR_standard__string__Buffer___is_dirty 4
#define COLOR_standard__string__Buffer___written 5
#define COLOR_standard___standard__Buffer___standard__kernel__Object__hash 74
#define COLOR_standard__string__FlatBuffer___chars 6
val* NEW_standard__string__FlatBufferCharView(const struct type* type);
extern const struct type type_standard__string__FlatBufferCharView;
#define COLOR_standard__string__FlatBuffer___capacity 8
void standard___standard__FlatBuffer___Buffer__enlarge(val* self, long p0);
void standard___standard__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2);
uint32_t standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
long standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(val* self);
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, uint32_t p0);
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1);
void standard___standard__FlatBuffer___Buffer__add(val* self, uint32_t p0);
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, uint32_t p0);
#define COLOR_standard__abstract_collection__Collection__length 23
void standard__string___standard__string__FlatBufferCharView___enlarge(val* self, long p0);
val* NEW_standard__string__FlatBufferIterator(const struct type* type);
extern const struct type type_standard__string__FlatBufferIterator;
void standard__string___standard__string__FlatBufferIterator___with_pos(val* self, val* p0, long p1);
#define COLOR_standard__string__FlatBufferIterator___target 0
#define COLOR_standard__string__FlatBufferIterator___target_items 1
#define COLOR_standard__string__FlatBufferIterator___curr_pos 2
uint32_t standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self);
#define COLOR_standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init 30
#define COLOR_standard__string__Object__inspect 5
val* standard___standard__NativeString___Object__to_s(char* self);
val* standard__string___Object___inspect_head(val* self);
val* standard__string___Object___class_name(val* self);
#define COLOR_standard__kernel__Object__object_id 7
val* standard__string___Int___to_hex(long self);
val* standard__string___Bool___Object__to_s(short int self);
val* standard__string___Byte___Object__to_s(unsigned char self);
#define COLOR_standard__abstract_collection__Sequence___91d_93d_61d 47
long standard___standard__Int___digit_count(long self, long p0);
uint32_t standard___standard__Int___to_c(long self);
#define COLOR_standard__string__String___42d 72
void standard___standard__FlatBuffer___from(val* self, val* p0);
void standard__string___Int___fill_buffer(long self, val* p0, long p1, short int p2);
val* standard___standard__FlatBuffer___Object__to_s(val* self);
val* standard__string___Float___to_precision(double self, long p0);
long standard__math___Float___is_inf(double self);
#include "math_nit.h"
val* standard__string___Float___Object__to_s(double self);
extern const struct type type_standard__Float;
#define COLOR_standard__string__String___43d 71
long standard___standard__Int___abs(long self);
val* standard__string___Char___Object__to_s(uint32_t self);
#define COLOR_standard__string__Collection__plain_to_s 26
#define COLOR_standard__kernel__Object___33d_61d 1
#define COLOR_standard__abstract_collection__Iterator__finish 19
#define COLOR_standard__abstract_collection__Collection__is_empty 24
#define COLOR_standard__array__AbstractArrayRead___length 0
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_standard__array__Array___items 2
#define COLOR_standard__NativeArray___35dE 0
extern const char FILE_standard__array[];
#define COLOR_standard__string__Text__substrings 29
#define COLOR_standard__abstract_collection__Iterator__iterator 20
long standard___standard__NativeString___cstring_length(char* self);
#define COLOR_standard__string__Sys___args_cache 0
void standard__string___Sys___init_args(val* self);
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__String;
void standard___standard__Array___with_capacity(val* self, long p0);
void standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
val* NEW_standard__string__AlphaComparator(const struct type* type);
extern const struct type type_standard__string__AlphaComparator;
val* standard__string___Sys___program_args(val* self);
#define COLOR_standard__string__CachedAlphaComparator___cache 0
short int standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(val* self, val* p0);
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0);
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_standard__sorter__Comparator__COMPARED 0
val* standard___standard__CachedAlphaComparator___do_to_s(val* self, val* p0);
long standard___standard__Comparable____60d_61d_62d(val* self, val* p0);
