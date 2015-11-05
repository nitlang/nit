#include "nit.common.h"
#define COLOR_csv__CsvFormat___delimiter 0
#define COLOR_csv__CsvFormat___separator 1
#define COLOR_csv__CsvFormat___eol 2
extern const char FILE_csv[];
#define COLOR_csv__CsvFormat___escaping 3
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__String;
val* standard__string___Char___Object__to_s(uint32_t self);
#define COLOR_standard__string__NativeArray__native_to_s 16
val* NEW_standard__RopeBuffer(const struct type* type);
extern const struct type type_standard__RopeBuffer;
void standard___standard__RopeBuffer___standard__kernel__Object__init(val* self);
void standard___standard__RopeBuffer___standard__string__Buffer__add(val* self, uint32_t p0);
val* csv___csv__CsvFormat___escaping(val* self);
val* standard__string_search___Text___replace(val* self, val* p0, val* p1);
void standard___standard__RopeBuffer___standard__string__Buffer__append(val* self, val* p0);
#define COLOR_standard__string__Text__chars 27
#define COLOR_standard__abstract_collection__Collection__iterator 25
#define COLOR_standard__abstract_collection__Iterator__is_ok 16
#define COLOR_standard__abstract_collection__Iterator__item 17
#define COLOR_standard__abstract_collection__Collection__has 28
#define COLOR_standard__abstract_collection__Iterator__next 18
#define COLOR_standard__abstract_collection__Iterator__finish 19
#define COLOR_csv___csv__CsvFormat___standard__kernel__Object__init 25
#define COLOR_csv__CsvDocument___format 0
#define COLOR_csv__CsvDocument___header 1
#define COLOR_csv__CsvDocument___records 2
#define COLOR_standard__array__AbstractArrayRead___length 0
val* standard__file___Sys___stderr(val* self);
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
val* standard__string___Int___Object__to_s(long self);
void standard___standard__FileWriter___standard__stream__Writer__write(val* self, val* p0);
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__String;
void standard___standard__Array___standard__kernel__Object__init(val* self);
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
#define COLOR_standard__string__Object__to_s 3
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(val* self);
val* NEW_csv__CsvWriter(const struct type* type);
extern const struct type type_csv__CsvWriter;
void csv___csv__CsvWriter___with_format(val* self, val* p0, val* p1);
void csv___csv__CsvWriter___write_sequence(val* self, val* p0);
#define COLOR_csv__CsvWriter___ostream 0
#define COLOR_csv__CsvWriter___format 1
#define COLOR_csv__CsvWriter___always_escape 2
#define COLOR_standard__abstract_collection__Collection__is_empty 24
void csv___csv__CsvWriter___write_cell(val* self, val* p0);
val* standard___standard__Iterator___iterator(val* self);
short int standard___standard__Text___is_empty(val* self);
short int csv___csv__CsvFormat___is_value_clean(val* self, val* p0);
val* csv___csv__CsvFormat___escape_cell(val* self, val* p0);
#define COLOR_csv___csv__CsvWriter___standard__kernel__Object__init 24
val* NEW_csv__CsvFormat(const struct type* type);
extern const struct type type_csv__CsvFormat;
#define COLOR_csv__CsvFormat__delimiter_61d 17
#define COLOR_csv__CsvFormat__separator_61d 18
#define COLOR_csv__CsvFormat__eol_61d 19
#define COLOR_standard__kernel__Object__init 0
