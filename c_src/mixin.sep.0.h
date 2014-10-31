#include "nit.common.h"
#define COLOR_mixin__ToolContext___opt_mixins 36
#define COLOR_mixin__ToolContext___opt_defines 37
#define COLOR_mixin__ToolContext__init 143
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 74
void opts__OptionContext__add_option(val* self, val* p0);
void mixin__ToolContext__init(val* self);
#define COLOR_opts__Option___value 6
short int array__AbstractArrayRead__is_empty(val* self);
val* modelbuilder__ToolContext__modelbuilder(val* self);
val* modelbuilder__ModelBuilder__parse(val* self, val* p0);
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
void modelbuilder__ModelBuilder__run_phases(val* self);
#define COLOR_mixin__ToolContext__make_main_module 138
#define COLOR_mmodule__MModule___location 5
#define COLOR_mmodule__MModule___model 2
val* abstract_collection__SequenceRead__first(val* self);
val* NEW_mmodule__MModule(const struct type* type);
extern const struct type type_mmodule__MModule;
#define COLOR_mmodule__MModule___name 4
val* string__NativeString__to_s_with_length(char* self, long p0);
val* string__FlatString___43d(val* self, val* p0);
void mmodule__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3);
void mmodule__MModule__set_imported_mmodules(val* self, val* p0);
#define COLOR_mmodule__MModule___is_fictive 11
val* model__MModule__object_type(val* self);
val* NEW_model__MClassDef(const struct type* type);
extern const struct type type_model__MClassDef;
void model__MClassDef__init(val* self, val* p0, val* p1, val* p2);
void model__MClassDef__add_in_hierarchy(val* self);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
val* BOX_kernel__Char(char);
val* string_search__Text__split_once_on(val* self, val* p0);
#define COLOR_array__AbstractArrayRead___length 0
extern const struct type type_kernel__Int;
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_model__MClassType___mclass 4
val* model__MModule__try_get_primitive_method(val* self, val* p0, val* p1);
extern const struct type type_array__Arraykernel__Object;
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_string__Object__to_s 9
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_model__MProperty___intro 6
#define COLOR_model__MMethodDef___msignature 8
#define COLOR_model__MSignature___return_mtype 5
short int string__FlatString___61d_61d(val* self, val* p0);
val* BOX_kernel__Bool(short int);
#define COLOR_kernel__Object___61d_61d 2
short int string__Text__is_numeric(val* self);
long string__Text__to_i(val* self);
val* BOX_kernel__Int(long);
val* NEW_model__MMethodDef(const struct type* type);
extern const struct type type_model__MMethodDef;
void model__MMethodDef__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MMethodDef___constant_value 14
void array__ArrayIterator__next(val* self);
void toolcontext__ToolContext__check_errors(val* self);
val* mixin__ToolContext__make_main_module(val* self, val* p0);
