#include "nit.common.h"
#define COLOR_mproject__MProject___name 2
#define COLOR_mproject__MProject___model 3
#define COLOR_mproject__MProject___root 4
#define COLOR_mproject__MProject___mgroups 5
val* mproject__MProject__to_s(val* self);
#define COLOR_kernel__Object__init 7
#define COLOR_mproject__Model___mprojects 0
void array__Array__add(val* self, val* p0);
#define COLOR_mproject__Model___mproject_by_name 1
void more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1);
void mproject__MProject__init(val* self, val* p0, val* p1);
#define COLOR_mproject__MGroup___name 2
#define COLOR_mproject__MGroup___mproject 3
#define COLOR_mproject__MGroup___parent 4
val* mproject__MGroup__full_name(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
#define COLOR_mproject__MGroup___in_nesting 5
#define COLOR_mproject__MGroup___filepath 6
val* poset__POSet__add_node(val* self, val* p0);
#define COLOR_kernel__Object___61d_61d 2
void poset__POSet__add_edge(val* self, val* p0, val* p1);
void mproject__MGroup__init(val* self, val* p0, val* p1, val* p2);
val* mproject__MGroup__model(val* self);
val* mproject__MGroup__to_s(val* self);
