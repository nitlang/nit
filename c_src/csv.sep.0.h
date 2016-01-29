#include "nit.common.h"
#define COLOR_csv__CsvFormat___delimiter 0
#define COLOR_csv__CsvFormat___separator 1
#define COLOR_csv__CsvFormat___eol 2
extern const char FILE_csv[];
#define COLOR_csv__CsvFormat___escaping 3
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
val* core__abstract_text___Char___Object__to_s(uint32_t self);
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
val* NEW_core__RopeBuffer(const struct type* type);
extern const struct type type_core__RopeBuffer;
void core___core__RopeBuffer___core__kernel__Object__init(val* self);
void core___core__RopeBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0);
val* csv___csv__CsvFormat___escaping(val* self);
val* core__string_search___Text___replace(val* self, val* p0, val* p1);
void core___core__RopeBuffer___core__abstract_text__Buffer__append(val* self, val* p0);
#define COLOR_core__abstract_text__Text__chars 23
#define COLOR_core__abstract_collection__Collection__iterator 21
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
#define COLOR_core__abstract_collection__Collection__has 23
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
#define COLOR_csv___csv__CsvFormat___core__kernel__Object__init 21
#define COLOR_csv__CsvDocument___format 0
#define COLOR_csv__CsvDocument___header 1
#define COLOR_csv__CsvDocument___records 2
#define COLOR_core__array__AbstractArrayRead___length 0
val* core__file___Sys___stderr(val* self);
val* core__flat___NativeString___to_s_full(char* self, long p0, long p1);
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0);
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__core__String;
void core___core__Array___core__kernel__Object__init(val* self);
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_text__Object__to_s 3
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
val* NEW_csv__CsvWriter(const struct type* type);
extern const struct type type_csv__CsvWriter;
void csv___csv__CsvWriter___with_format(val* self, val* p0, val* p1);
void csv___csv__CsvWriter___write_sequence(val* self, val* p0);
#define COLOR_csv__CsvWriter___ostream 0
#define COLOR_csv__CsvWriter___format 1
#define COLOR_csv__CsvWriter___always_escape 2
#define COLOR_csv__CsvWriter__ostream_61d 14
#define COLOR_core__kernel__Object__init 0
#define COLOR_core__abstract_collection__Collection__is_empty 20
void csv___csv__CsvWriter___write_cell(val* self, val* p0);
val* core___core__Iterator___iterator(val* self);
#define COLOR_core__abstract_text__Text__is_empty 37
short int csv___csv__CsvFormat___is_value_clean(val* self, val* p0);
val* csv___csv__CsvFormat___escape_cell(val* self, val* p0);
#define COLOR_csv___csv__CsvWriter___core__kernel__Object__init 20
val* NEW_csv__CsvFormat(const struct type* type);
extern const struct type type_csv__CsvFormat;
#define COLOR_csv__CsvFormat__delimiter_61d 13
#define COLOR_csv__CsvFormat__separator_61d 14
#define COLOR_csv__CsvFormat__eol_61d 15
