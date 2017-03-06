#include "nit.common.h"
extern const char FILE_core__abstract_text[];
#define COLOR_core__abstract_text__Text__length 25
#define COLOR_core__abstract_text__Text__chars 27
#define COLOR_core__abstract_collection__SequenceRead___91d_93d 34
long core___core__Text___index_of_from(val* self, uint32_t p0, long p1);
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
#define COLOR_core__abstract_collection__SequenceRead__iterator_from 35
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
#define COLOR_core__abstract_collection__IndexedIterator__index 18
#define COLOR_core__abstract_collection__Iterator__next 14
long core___core__Text___last_index_of_from(val* self, uint32_t p0, long p1);
#define COLOR_core__abstract_collection__SequenceRead__last_index_of_from 40
#define COLOR_core__abstract_text__Text__empty 53
#define COLOR_core__abstract_text__Text__substring 28
#define COLOR_core__abstract_text__Text__is_empty 43
#define COLOR_core__abstract_collection__Collection__iterator 24
short int core___core__Text___has_substring(val* self, val* p0, long p1);
#define COLOR_core__abstract_text__Object__to_s 3
#define COLOR_core__abstract_text__Text__to_cstring 24
double core__native___CString_atof___impl( char* self );
#define COLOR_core__abstract_text__Text___91d_93d 31
long core__abstract_text___Char___from_hex(uint32_t self);
long core___core__Int___Discrete__successor(long self, long p0);
long core___core__Text___a_to(val* self, long p0);
long core___core__Char___to_i(uint32_t self);
short int core__abstract_text___Char___is_numeric(uint32_t self);
extern const struct type type_core__Char;
#define COLOR_core__abstract_collection__Iterator__finish 15
short int core___core__Char___is_upper(uint32_t self);
short int core___core__Char___is_whitespace(uint32_t self);
#define COLOR_core__abstract_text__Text__substring_from 34
#define COLOR_core__abstract_collection__SequenceRead__reverse_iterator 41
val* core___core__Text___l_trim(val* self);
val* core___core__Text___r_trim(val* self);
#define COLOR_core__abstract_text__Text__SELFTYPE 2
#define COLOR_core__abstract_collection__SequenceRead__last 38
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
val* NEW_core__Buffer(const struct type* type);
extern const struct type type_core__Buffer;
val* core__flat___Buffer___new(val* self);
#define COLOR_core__abstract_text__Buffer__add 102
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
#define COLOR_core__abstract_text__Buffer__append 95
val* core__abstract_text___Int___to_base(long self, long p0);
#define COLOR_core__abstract_collection__SimpleCollection__add 49
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
val* core__flat___Buffer___with_cap(val* self, long p0);
#define COLOR_core__kernel__Object___61d_61d 4
extern const struct type type_core__Text;
#define COLOR_core__kernel__Comparable__OTHER 0
#define COLOR_core__abstract_text__Text___hash_cache 0
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__core__Int;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
long core___core__Int___Comparable__min(long self, long p0);
#define COLOR_core__abstract_text__FlatText___items 3
#define COLOR_core__abstract_text__FlatText___length 4
#define COLOR_core__abstract_text__FlatText___byte_length 5
#define COLOR_core__abstract_text__StringCharView___target 0
#define COLOR_core__abstract_text__StringCharView__SELFTYPE 0
long core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(val* self);
#define COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from 42
#define COLOR_core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init 14
#define COLOR_core__kernel__Object__SELF 1
short int core___core__Text___is_lower(val* self);
void core___core__Buffer___snake_case(val* self);
#define COLOR_core__abstract_text__Buffer___written 6
#define COLOR_core__abstract_text__Text__byte_length 40
val* core___core__Buffer___core__kernel__Cloneable__clone(val* self);
#define COLOR_core__abstract_text__Buffer__upper 105
#define COLOR_core__abstract_text__Buffer__lower 104
short int core___core__Char___is_lower(uint32_t self);
#define COLOR_core__abstract_text__Buffer__insert_char 100
uint32_t core___core__Char___to_lower(uint32_t self);
#define COLOR_core__abstract_text__Buffer___91d_93d_61d 101
#define COLOR_core__abstract_text__Object__inspect 6
val* core__flat___CString___core__abstract_text__Object__to_s(char* self);
val* core__abstract_text___Object___inspect_head(val* self);
val* core__abstract_text___Object___class_name(val* self);
#define COLOR_core__kernel__Object__object_id 7
val* core__abstract_text___Int___to_hex(long self);
val* core__abstract_text___Bool___Object__to_s(short int self);
long core__abstract_text___Byte_byte_to_s_len___impl( unsigned char self );
void core__abstract_text___Byte_native_byte_to_s___impl( unsigned char self, char* nstr, long strlen );
val* core__abstract_text___Byte___Object__to_s(unsigned char self);
char* core__abstract_text___Int_strerror_ext___impl( long self );
#define COLOR_core__abstract_collection__Sequence___91d_93d_61d 54
long core___core__Int___digit_count(long self, long p0);
uint32_t core___core__Int___to_c(long self);
long core__abstract_text___Int_int_to_s_len___impl( long self );
void core__abstract_text___Int_native_int_to_s___impl( long self, char* nstr, long strlen );
#define COLOR_core__abstract_text__Buffer__enlarge 99
void core__abstract_text___Int___fill_buffer(long self, val* p0, long p1);
val* core__abstract_text___Float___to_precision(double self, long p0);
long core__math___Float___is_inf(double self);
int core__math___Float_is_nan___impl( double self );
val* core__abstract_text___Float___Object__to_s(double self);
extern const struct type type_core__Float;
#define COLOR_core__abstract_text__Text___42d 45
#define COLOR_core__abstract_text__Text___43d 39
long core___core__Int___abs(long self);
long core__abstract_text___Char___u8char_len(uint32_t self);
void core__abstract_text___Char_u8char_tos___impl( uint32_t self, char* r, long len );
val* core__abstract_text___Char___Object__to_s(uint32_t self);
short int core__abstract_text___Char___is_hexdigit(uint32_t self);
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1);
#define COLOR_core__kernel__Object___33d_61d 1
#define COLOR_core__abstract_collection__Collection__is_empty 23
#define COLOR_core__abstract_text__Sys___args_cache 0
void core__abstract_text___Sys___init_args(val* self);
extern const struct type type_core__Array__core__String;
val* NEW_core__abstract_text__AlphaComparator(const struct type* type);
extern const struct type type_core__abstract_text__AlphaComparator;
val* core__abstract_text___Sys___program_args(val* self);
#define COLOR_core__abstract_text__CachedAlphaComparator___cache 0
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_core__sorter__Comparator__COMPARED 5
val* core___core__CachedAlphaComparator___do_to_s(val* self, val* p0);
long core___core__Comparable____60d_61d_62d(val* self, val* p0);
