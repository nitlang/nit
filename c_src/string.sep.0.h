#include "nit.common.h"
#define COLOR_string__FlatText___length 3
short int string__Text__is_empty(val* self);
extern const struct type type_kernel__Int;
#define COLOR_string__Text__empty 44
#define COLOR_string__Text__substring 41
val* string__Text__substring_from(val* self, long p0);
#define COLOR_string__Text__chars 39
#define COLOR_abstract_collection__SequenceRead__iterator_from 45
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_abstract_collection__Iterator__next 30
short int string__Text__has_substring(val* self, val* p0, long p1);
short int string__Text__has_prefix(val* self, val* p0);
short int string__Text__has_suffix(val* self, val* p0);
#define COLOR_string__Object__to_s 7
char* string__FlatString__to_cstring(val* self);
long string__Text__to_i(val* self);
#include "string_nit.h"
double string__Text__to_f(val* self);
long string__Text__a_to(val* self, long p0);
long string__Text__to_hex(val* self);
long kernel__Char__to_i(char self);
val* NEW_string__FlatBuffer(const struct type* type);
extern const struct type type_string__FlatBuffer;
void string__FlatBuffer__init(val* self);
extern const struct type type_kernel__Char;
void string__FlatBuffer__add(val* self, char p0);
val* string__Int__to_s(long self);
void string__FlatBuffer__append(val* self, val* p0);
val* string__FlatBuffer__to_s(val* self);
val* string__Text__to_cmangle(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* string__Int__to_base(long self, long p0, short int p1);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
val* string__Text__escape_to_c(val* self);
void string__FlatBuffer__with_capacity(val* self, long p0);
val* string__Text__unescape_nit(val* self);
#define COLOR_kernel__Object___61d_61d 2
extern const struct type type_string__Text;
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0);
short int string__Text___61d_61d(val* self, val* p0);
#define COLOR_kernel__Comparable_VTOTHER 0
short int string__Text___60d(val* self, val* p0);
#define COLOR_string__Text___hash_cache 0
val* BOX_kernel__Int(long);
long string__Text__hash(val* self);
#define COLOR_string__FlatText___items 1
#define COLOR_string__FlatText___real_items 2
void string__FlatText__init(val* self);
#define COLOR_string__StringCharView___target 0
#define COLOR_string__StringCharView_VTSELFTYPE 2
void string__StringCharView__init(val* self, val* p0);
short int string__StringCharView__is_empty(val* self);
long string__StringCharView__length(val* self);
val* string__StringCharView__iterator(val* self);
val* string__String__to_s(val* self);
#define COLOR_string__FlatSubstringsIter___tgt 0
void string__FlatSubstringsIter__init(val* self, val* p0);
short int string__FlatSubstringsIter__is_ok(val* self);
val* string__FlatSubstringsIter__item(val* self);
void string__FlatSubstringsIter__next(val* self);
#define COLOR_string__FlatString___index_from 4
#define COLOR_string__FlatString___index_to 5
val* NEW_string__FlatString(const struct type* type);
extern const struct type type_string__FlatString;
void string__FlatString__with_infos(val* self, char* p0, long p1, long p2, long p3);
#define COLOR_string__Text_VTSELFTYPE 1
val* string__FlatString__empty(val* self);
val* string__FlatString__substring(val* self, long p0, long p1);
char kernel__Char__to_lower(char self);
val* string__FlatString__to_lower(val* self);
long string__NativeString__cstring_length(char* self);
val* BOX_string__NativeString(char*);
#define COLOR_string__FlatString___61d_61d 87
short int string__FlatString___61d_61d(val* self, val* p0);
#define COLOR_string__FlatString___60d 88
short int string__FlatString___60d(val* self, val* p0);
val* string__FlatString___43d(val* self, val* p0);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
void range__Range__init(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
val* string__FlatString___42d(val* self, long p0);
long string__FlatString__hash(val* self);
val* NEW_string__FlatSubstringsIter(const struct type* type);
extern const struct type type_string__FlatSubstringsIter;
val* string__FlatString__substrings(val* self);
#define COLOR_string__FlatStringIterator___target 0
#define COLOR_string__FlatStringIterator___target_items 1
#define COLOR_string__FlatStringIterator___curr_pos 2
void string__FlatStringIterator__with_pos(val* self, val* p0, long p1);
short int string__FlatStringIterator__is_ok(val* self);
char string__FlatStringIterator__item(val* self);
val* BOX_kernel__Char(char);
void string__FlatStringIterator__next(val* self);
long string__FlatStringIterator__index(val* self);
char string__FlatStringCharView___91d_93d(val* self, long p0);
val* NEW_string__FlatStringIterator(const struct type* type);
extern const struct type type_string__FlatStringIterator;
val* string__FlatStringCharView__iterator_from(val* self, long p0);
#define COLOR_string__Buffer___is_dirty 4
#define COLOR_string__Buffer__hash 73
long string__Buffer__hash(val* self);
#define COLOR_string__FlatBuffer___chars 5
#define COLOR_string__FlatBuffer___capacity 6
val* string__FlatBuffer__substrings(val* self);
void string__FlatBuffer__enlarge(val* self, long p0);
val* string__FlatBuffer__empty(val* self);
char* string__FlatBuffer__to_cstring(val* self);
void string__FlatBuffer__from(val* self, val* p0);
#define COLOR_abstract_collection__Sequence__push 54
val* string__FlatBuffer__substring(val* self, long p0, long p1);
char string__FlatBufferCharView___91d_93d(val* self, long p0);
void string__FlatBufferCharView__add(val* self, char p0);
void string__FlatBufferCharView___91d_93d_61d(val* self, long p0, char p1);
void string__FlatBufferCharView__push(val* self, char p0);
void string__FlatBufferCharView__enlarge(val* self, long p0);
#define COLOR_abstract_collection__Collection__length 31
void string__FlatBufferCharView__append(val* self, val* p0);
val* NEW_string__FlatBufferIterator(const struct type* type);
extern const struct type type_string__FlatBufferIterator;
void string__FlatBufferIterator__with_pos(val* self, val* p0, long p1);
val* string__FlatBufferCharView__iterator_from(val* self, long p0);
#define COLOR_string__FlatBufferIterator___target 0
#define COLOR_string__FlatBufferIterator___target_items 1
#define COLOR_string__FlatBufferIterator___curr_pos 2
long string__FlatBufferIterator__index(val* self);
short int string__FlatBufferIterator__is_ok(val* self);
char string__FlatBufferIterator__item(val* self);
void string__FlatBufferIterator__next(val* self);
#define COLOR_string__Object__inspect 10
val* string__Object__to_s(val* self);
val* string__NativeString__to_s(char* self);
val* string__Object__class_name(val* self);
val* string__Object__inspect_head(val* self);
val* string__Object__inspect(val* self);
#define COLOR_kernel__Object__object_id 0
val* string__Int__to_hex(long self);
val* string__Sys__program_args(val* self);
val* string__Object__args(val* self);
val* string__Bool__to_s(short int self);
char* string___Int_strerror_ext___impl( long recv );
val* string__Int__strerror(long self);
#define COLOR_abstract_collection__Sequence___91d_93d_61d 59
long kernel__Int__digit_count(long self, long p0);
char kernel__Int__to_c(long self);
void string__Int__fill_buffer(long self, val* p0, long p1, short int p2);
val* string__Float__to_precision(double self, long p0);
long math__Float__is_inf(double self);
#include "math_nit.h"
#define COLOR_abstract_collection__SequenceRead___91d_93d 39
val* string__Float__to_s(double self);
void range__Range__without_last(val* self, val* p0, val* p1);
extern const struct type type_kernel__Float;
val* string__Char__to_s(char self);
#define COLOR_kernel__Object___33d_61d 3
val* string__Collection__to_s(val* self);
#define COLOR_abstract_collection__Collection__is_empty 30
val* string__Collection__join(val* self, val* p0);
long array__AbstractArrayRead__length(val* self);
val* array__Array___91d_93d(val* self, long p0);
val* string__Array__to_s(val* self);
val* string__NativeString__to_s_with_copy(char* self);
#define COLOR_string__Sys___args_cache 0
void string__Sys__init_args(val* self);
val* string__Sys__program_name(val* self);
extern const struct type type_array__Arraystring__String;
void array__Array__with_capacity(val* self, long p0);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
