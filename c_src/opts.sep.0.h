#include "nit.common.h"
#define COLOR_opts__Option___names 0
#define COLOR_opts__Option___helptext 1
#define COLOR_opts__Option___errors 2
#define COLOR_opts__Option___mandatory 3
#define COLOR_opts__Option___hidden 4
#define COLOR_opts__Option___read 5
#define COLOR_opts__Option___value 6
#define COLOR_opts__Option_VTVALUE 0
#define COLOR_opts__Option___default_value 7
void opts__Option__init_opt(val* self, val* p0, val* p1, val* p2);
void opts__Option__init(val* self, val* p0, val* p1, val* p2);
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraystring__String;
void array__Array__init(val* self);
val* array__Collection__to_a(val* self);
val* opts__Option__pretty(val* self, long p0);
val* opts__Option__to_s(val* self);
val* NEW_string__FlatBuffer(const struct type* type);
extern const struct type type_string__FlatBuffer;
val* string__NativeString__to_s_with_length(char* self, long p0);
void string__FlatBuffer__from(val* self, val* p0);
val* string__Collection__join(val* self, val* p0);
void string__FlatBuffer__append(val* self, val* p0);
#define COLOR_string__FlatText___length 3
extern const struct type type_kernel__Int;
val* string__FlatString___42d(val* self, long p0);
val* string__FlatBuffer__to_s(val* self);
void opts__Option__read_param(val* self, val* p0);
val* BOX_kernel__Bool(short int);
void opts__OptionBool__init(val* self, val* p0, val* p1);
#define COLOR_opts__OptionBool__read_param 46
extern const struct type type_kernel__Bool;
void opts__OptionBool__read_param(val* self, val* p0);
val* BOX_kernel__Int(long);
void opts__OptionCount__init(val* self, val* p0, val* p1);
#define COLOR_opts__OptionCount__read_param 46
void opts__OptionCount__read_param(val* self, val* p0);
#define COLOR_opts__OptionParameter___parameter_mandatory 8
#define COLOR_opts__OptionParameter__read_param 47
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__Collection__first 33
extern const struct class class_kernel__Char;
#define COLOR_opts__OptionParameter__convert 45
#define COLOR_abstract_collection__Iterator__next 30
val* abstract_collection__SequenceRead__first(val* self);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void array__Array__add(val* self, val* p0);
void opts__OptionParameter__read_param(val* self, val* p0);
void opts__OptionString__init(val* self, val* p0, val* p1);
val* opts__OptionString__convert(val* self, val* p0);
#define COLOR_opts__OptionArray___values 9
void opts__OptionArray__init(val* self, val* p0, val* p1);
val* opts__OptionArray__convert(val* self, val* p0);
#define COLOR_opts__OptionContext___options 0
#define COLOR_opts__OptionContext___rest 1
#define COLOR_opts__OptionContext___errors 2
#define COLOR_opts__OptionContext___optmap 3
extern const struct type type_array__Arrayopts__Option;
val* NEW_hash_collection__HashMap(const struct type* type);
extern const struct type type_hash_collection__HashMapstring__Stringopts__Option;
void hash_collection__HashMap__init(val* self);
void opts__OptionContext__init(val* self);
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
void opts__OptionContext__add_option(val* self, val* p0);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
void array__ArrayIterator__next(val* self);
void file__Object__print(val* self, val* p0);
void opts__OptionContext__usage(val* self);
#define COLOR_abstract_collection__Collection__iterator 29
void opts__OptionContext__parse_intern(val* self, val* p0);
void opts__OptionContext__parse(val* self, val* p0);
void opts__OptionContext__build(val* self);
short int string__FlatString___61d_61d(val* self, val* p0);
val* array__Iterator__to_a(val* self);
val* BOX_kernel__Char(char);
#define COLOR_abstract_collection__SequenceRead__last_index_of 42
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
#define COLOR_abstract_collection__SequenceRead___91d_93d 39
val* string__Char__to_s(char self);
val* string__FlatString___43d(val* self, val* p0);
short int abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_abstract_collection__MapRead___91d_93d 29
extern const struct type type_opts__OptionParameter;
#define COLOR_opts__Option__read_param 44
#define COLOR_abstract_collection__Map___91d_93d_61d 39
val* opts__OptionContext__get_errors(val* self);
