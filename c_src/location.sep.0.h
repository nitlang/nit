#include "nit.common.h"
#define COLOR_location__SourceFile___filename 0
#define COLOR_location__SourceFile___string 1
val* stream__BufferedIStream__read_all(val* self);
#define COLOR_location__SourceFile___line_starts 2
val* BOX_kernel__Int(long);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
void location__SourceFile__init(val* self, val* p0, val* p1);
#define COLOR_location__Location___file 0
#define COLOR_location__Location___line_start 1
#define COLOR_location__Location___line_end 2
#define COLOR_location__Location___column_start 3
#define COLOR_location__Location___column_end 4
void location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4);
extern const struct type type_kernel__Int;
val* array__Array___91d_93d(val* self, long p0);
long location__Location__pstart(val* self);
long location__Location__pend(val* self);
#define COLOR_location__Location___text_cache 5
#define COLOR_kernel__Object___61d_61d 2
val* string__FlatString__substring(val* self, long p0, long p1);
val* location__Location__text(val* self);
extern const struct type type_location__Location;
short int location__Location___61d_61d(val* self, val* p0);
short int location__Location__located_in(val* self, val* p0);
val* string__NativeString__to_s_with_length(char* self, long p0);
#define COLOR_string__FlatText___length 3
val* string__FlatString___43d(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
val* location__Location__to_s(val* self);
#define COLOR_kernel__Comparable_VTOTHER 0
short int location__Location___60d(val* self, val* p0);
val* BOX_kernel__Char(char);
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__SequenceRead___91d_93d 39
extern const struct class class_kernel__Char;
val* NEW_string__FlatBuffer(const struct type* type);
extern const struct type type_string__FlatBuffer;
void string__FlatBuffer__init(val* self);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
void string__FlatBuffer__add(val* self, char p0);
#define COLOR_abstract_collection__Iterator__next 30
val* location__Location__colored_line(val* self, val* p0);
