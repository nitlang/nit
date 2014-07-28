#include "nit.common.h"
#define COLOR_mmodule__Model___mmodules 2
#define COLOR_mmodule__Model___mmodule_nesting_hierarchy 3
#define COLOR_mmodule__Model___mmodule_importation_hierarchy 4
#define COLOR_mmodule__Model___mmodules_by_name 5
#define COLOR_mmodule__MGroup___mmodules 6
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_mmodule__MModule___name 4
#define COLOR_mproject__MGroup___name 1
short int string__FlatString___61d_61d(val* self, val* p0);
void array__ArrayIterator__next(val* self);
val* mmodule__MGroup__fuzzy_owner(val* self);
#define COLOR_mmodule__MModule___model 1
#define COLOR_mmodule__MModule___direct_owner 2
#define COLOR_mmodule__MModule___mgroup 3
#define COLOR_mmodule__MModule___location 5
val* mmodule__MModule__to_s(val* self);
#define COLOR_mmodule__MModule___in_nesting 6
#define COLOR_mmodule__MModule___in_importation 7
#define COLOR_mproject__MGroup___mproject 2
#define COLOR_mproject__MProject___name 1
val* string__NativeString__to_s_with_length(char* self, long p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
val* mmodule__MModule__full_name(val* self);
void more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1);
void array__Array__add(val* self, val* p0);
val* poset__POSet__add_node(val* self, val* p0);
#define COLOR_kernel__Object___61d_61d 2
void poset__POSet__add_edge(val* self, val* p0, val* p1);
#define COLOR_mproject__MGroup___parent 3
void mmodule__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3);
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__is_empty 30
void mmodule__MModule__set_imported_mmodules(val* self, val* p0);
#define COLOR_mmodule__MModule___intrude_mmodules 8
#define COLOR_mmodule__MModule___public_mmodules 9
#define COLOR_mmodule__MModule___private_mmodules 10
val* model_base__Object__intrude_visibility(val* self);
short int hash_collection__HashSet__has(val* self, val* p0);
val* model_base__Object__public_visibility(val* self);
val* model_base__Object__private_visibility(val* self);
val* model_base__Object__none_visibility(val* self);
val* mmodule__MModule__visibility_for(val* self, val* p0);
void hash_collection__HashSet__add(val* self, val* p0);
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
void file__Object__print(val* self, val* p0);
void mmodule__MModule__set_visibility_for(val* self, val* p0, val* p1);
short int kernel__Comparable___62d_61d(val* self, val* p0);
short int kernel__Comparable___62d(val* self, val* p0);
short int mmodule__MModule__is_visible(val* self, val* p0, val* p1);
#define COLOR_mmodule__MModule___is_fictive 11
