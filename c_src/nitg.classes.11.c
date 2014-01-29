#include "nitg.classes.0.h"
/* runtime class hash_collection__HashMap */
const struct class class_hash_collection__HashMap = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMap:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashMap:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMap:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMap:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMap:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashMap:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashMap:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMap:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMap:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMap:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashMap:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMap:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMap:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMap:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMap:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMap:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashMap:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashMap:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashMap:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashMap:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashMap:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashMap:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMap:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMap:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMap:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashMap:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashMap:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMap:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMap:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashMap:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashMap:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashMap:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMap:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMap:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMap:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMap:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMap:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMap:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMap:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMap:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMap:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMap:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashMap:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashMap:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashMap:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashMap:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashMap:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashMap:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashMap:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashMap:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_hash_collection__HashMap___91d_93d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[] */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__get_or_default, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#get_or_default */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__has_key, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#has_key */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__iterator, /* pointer to hash_collection:HashMap:hash_collection#HashMap#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__values, /* pointer to hash_collection:HashMap:hash_collection#HashMap#values */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__keys, /* pointer to hash_collection:HashMap:hash_collection#HashMap#keys */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__is_empty, /* pointer to hash_collection:HashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__length, /* pointer to hash_collection:HashMap:hash_collection#HashMap#length */
(nitmethod_t)VIRTUAL_hash_collection__HashMap___91d_93d_61d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[]= */
(nitmethod_t)VIRTUAL_abstract_collection__Map__recover_with, /* pointer to hash_collection:HashMap:abstract_collection#Map#recover_with */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__clear, /* pointer to hash_collection:HashMap:hash_collection#HashMap#clear */
(nitmethod_t)VIRTUAL_string__Map__join, /* pointer to hash_collection:HashMap:string#Map#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArrayCapable__calloc_array, /* pointer to hash_collection:HashMap:array#ArrayCapable#calloc_array */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__first_item, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#first_item */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__index_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at_idx, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__store, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#store */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__remove_node, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__raz, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#raz */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__enlarge, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__init, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__init, /* pointer to hash_collection:HashMap:hash_collection#HashMap#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__keys_61d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#keys= */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__values_61d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#values= */
}
};
/* allocate HashMap[Object, nullable Object] */
val* NEW_hash_collection__HashMap(const struct type* type) {
val* self /* : HashMap[Object, nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMapKeys[Object, nullable Object] */;
val* var8 /* : HashMapValues[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMap;
var = NULL;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var; /* _array on <self:HashMap[Object, nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:HashMap[Object, nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:HashMap[Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:HashMap[Object, nullable Object] exact> */
var4 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:HashMap[Object, nullable Object] exact> */
var5 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:HashMap[Object, nullable Object] exact> */
var6 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:HashMap[Object, nullable Object] exact> */
var7 = NEW_hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_hash_collection__HashMapKeyshash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
((void (*)(val*, val*))(var7->class->vft[COLOR_hash_collection__HashMapKeys__init]))(var7, self) /* init on <var7:HashMapKeys[Object, nullable Object]>*/;
CHECK_NEW_hash_collection__HashMapKeys(var7);
self->attrs[COLOR_hash_collection__HashMap___64dkeys].val = var7; /* @keys on <self:HashMap[Object, nullable Object] exact> */
var8 = NEW_hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_hash_collection__HashMapValueshash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
((void (*)(val*, val*))(var8->class->vft[COLOR_hash_collection__HashMapValues__init]))(var8, self) /* init on <var8:HashMapValues[Object, nullable Object]>*/;
CHECK_NEW_hash_collection__HashMapValues(var8);
self->attrs[COLOR_hash_collection__HashMap___64dvalues].val = var8; /* @values on <self:HashMap[Object, nullable Object] exact> */
return self;
}
/* allocate HashMap[Object, nullable Object] */
void CHECK_NEW_hash_collection__HashMap(val* self) {
}
/* runtime class hash_collection__HashMapKeys */
const struct class class_hash_collection__HashMapKeys = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapKeys:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashMapKeys:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashMapKeys:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashMapKeys:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapKeys:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapKeys:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapKeys:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to hash_collection:HashMapKeys:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapKeys:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapKeys:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapKeys:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapKeys:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapKeys:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashMapKeys:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashMapKeys:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashMapKeys:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashMapKeys:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashMapKeys:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashMapKeys:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapKeys:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapKeys:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapKeys:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashMapKeys:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashMapKeys:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapKeys:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapKeys:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashMapKeys:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashMapKeys:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashMapKeys:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapKeys:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapKeys:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapKeys:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapKeys:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapKeys:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashMapKeys:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashMapKeys:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashMapKeys:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashMapKeys:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashMapKeys:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashMapKeys:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashMapKeys:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashMapKeys:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__iterator, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__is_empty, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__length, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#length */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__has, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#has */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__has_only, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#has_only */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__count, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#count */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__first, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#first */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to hash_collection:HashMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to hash_collection:HashMapKeys:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to hash_collection:HashMapKeys:string#Collection#join */
(nitmethod_t)VIRTUAL_math__Collection__rand, /* pointer to hash_collection:HashMapKeys:math#Collection#rand */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__clear, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__remove, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#remove */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__remove_all, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#remove_all */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__map, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__map_61d, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map= */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__init, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#init */
}
};
/* allocate HashMapKeys[Object, nullable Object] */
val* NEW_hash_collection__HashMapKeys(const struct type* type) {
val* self /* : HashMapKeys[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapKeys;
return self;
}
/* allocate HashMapKeys[Object, nullable Object] */
void CHECK_NEW_hash_collection__HashMapKeys(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
var = self->attrs[COLOR_hash_collection__HashMapKeys___64dmap].val; /* @map on <self:HashMapKeys[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 251);
exit(1);
}
}
/* runtime class hash_collection__HashMapValues */
const struct class class_hash_collection__HashMapValues = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapValues:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashMapValues:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapValues:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashMapValues:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashMapValues:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapValues:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapValues:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapValues:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to hash_collection:HashMapValues:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapValues:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapValues:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapValues:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapValues:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapValues:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashMapValues:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashMapValues:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashMapValues:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashMapValues:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashMapValues:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashMapValues:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapValues:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapValues:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapValues:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashMapValues:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashMapValues:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapValues:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapValues:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashMapValues:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashMapValues:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashMapValues:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapValues:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapValues:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapValues:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapValues:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapValues:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashMapValues:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashMapValues:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashMapValues:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashMapValues:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashMapValues:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashMapValues:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashMapValues:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashMapValues:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__iterator, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__is_empty, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__length, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#length */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__has, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#has */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__has_only, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#has_only */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__count, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#count */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__first, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#first */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to hash_collection:HashMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to hash_collection:HashMapValues:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to hash_collection:HashMapValues:string#Collection#join */
(nitmethod_t)VIRTUAL_math__Collection__rand, /* pointer to hash_collection:HashMapValues:math#Collection#rand */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__clear, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__remove, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#remove */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__remove_all, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#remove_all */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__map, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__map_61d, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map= */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__init, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#init */
}
};
/* allocate HashMapValues[Object, nullable Object] */
val* NEW_hash_collection__HashMapValues(const struct type* type) {
val* self /* : HashMapValues[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapValues;
return self;
}
/* allocate HashMapValues[Object, nullable Object] */
void CHECK_NEW_hash_collection__HashMapValues(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
var = self->attrs[COLOR_hash_collection__HashMapValues___64dmap].val; /* @map on <self:HashMapValues[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 272);
exit(1);
}
}
/* runtime class hash_collection__HashMapNode */
const struct class class_hash_collection__HashMapNode = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapNode:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashMapNode:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapNode:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashMapNode:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashMapNode:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapNode:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapNode:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapNode:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashMapNode:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapNode:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapNode:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapNode:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapNode:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapNode:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashMapNode:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashMapNode:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashMapNode:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashMapNode:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashMapNode:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashMapNode:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapNode:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapNode:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapNode:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashMapNode:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashMapNode:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapNode:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapNode:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashMapNode:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashMapNode:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashMapNode:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapNode:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapNode:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapNode:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapNode:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapNode:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashMapNode:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashMapNode:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashMapNode:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashMapNode:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashMapNode:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashMapNode:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashMapNode:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashMapNode:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__next_item, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#next_item */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__next_item_61d, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#next_item= */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__prev_item, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#prev_item */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__prev_item_61d, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#prev_item= */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMapNode__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashMapNode#init */
}
};
/* allocate HashMapNode[Object, nullable Object] */
val* NEW_hash_collection__HashMapNode(const struct type* type) {
val* self /* : HashMapNode[Object, nullable Object] */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapNode;
var = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_item].val = var; /* _next_item on <self:HashMapNode[Object, nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_item].val = var1; /* _prev_item on <self:HashMapNode[Object, nullable Object] exact> */
var2 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var2; /* _prev_in_bucklet on <self:HashMapNode[Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var3; /* _next_in_bucklet on <self:HashMapNode[Object, nullable Object] exact> */
return self;
}
/* allocate HashMapNode[Object, nullable Object] */
void CHECK_NEW_hash_collection__HashMapNode(val* self) {
val* var /* : Object */;
val* var1 /* : nullable Object */;
var = self->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <self:HashMapNode[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 189);
exit(1);
}
var1 = self->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <self:HashMapNode[Object, nullable Object]> */
}
/* runtime class hash_collection__HashMapIterator */
const struct class class_hash_collection__HashMapIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashMapIterator:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashMapIterator:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashMapIterator:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashMapIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapIterator:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashMapIterator:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashMapIterator:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashMapIterator:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashMapIterator:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashMapIterator:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashMapIterator:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashMapIterator:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashMapIterator:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashMapIterator:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashMapIterator:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashMapIterator:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashMapIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashMapIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashMapIterator:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashMapIterator:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashMapIterator:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashMapIterator:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashMapIterator:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashMapIterator:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__item, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#item */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__key, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#key */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__next, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#next */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__is_ok, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#is_ok */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__init, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#init */
}
};
/* allocate HashMapIterator[Object, nullable Object] */
val* NEW_hash_collection__HashMapIterator(const struct type* type) {
val* self /* : HashMapIterator[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapIterator;
return self;
}
/* allocate HashMapIterator[Object, nullable Object] */
void CHECK_NEW_hash_collection__HashMapIterator(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : nullable HashMapNode[Object, nullable Object] */;
var = self->attrs[COLOR_hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 380);
exit(1);
}
var1 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
}
/* runtime class hash_collection__HashSet */
const struct class class_hash_collection__HashSet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashSet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashSet:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashSet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__Set___61d_61d, /* pointer to hash_collection:HashSet:abstract_collection#Set#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashSet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashSet:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashSet:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashSet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashSet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__Set__hash, /* pointer to hash_collection:HashSet:abstract_collection#Set#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to hash_collection:HashSet:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashSet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashSet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashSet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashSet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashSet:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashSet:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashSet:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashSet:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashSet:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashSet:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashSet:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashSet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashSet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashSet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashSet:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashSet:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashSet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashSet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashSet:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashSet:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashSet:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashSet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashSet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashSet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashSet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashSet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashSet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashSet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashSet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashSet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashSet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashSet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashSet:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashSet:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashSet:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashSet:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashSet:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashSet:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashSet:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__iterator, /* pointer to hash_collection:HashSet:hash_collection#HashSet#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__is_empty, /* pointer to hash_collection:HashSet:hash_collection#HashSet#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__length, /* pointer to hash_collection:HashSet:hash_collection#HashSet#length */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__has, /* pointer to hash_collection:HashSet:hash_collection#HashSet#has */
(nitmethod_t)VIRTUAL_abstract_collection__Set__has_only, /* pointer to hash_collection:HashSet:abstract_collection#Set#has_only */
(nitmethod_t)VIRTUAL_abstract_collection__Set__count, /* pointer to hash_collection:HashSet:abstract_collection#Set#count */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__first, /* pointer to hash_collection:HashSet:hash_collection#HashSet#first */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to hash_collection:HashSet:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to hash_collection:HashSet:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to hash_collection:HashSet:string#Collection#join */
(nitmethod_t)VIRTUAL_math__Collection__rand, /* pointer to hash_collection:HashSet:math#Collection#rand */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__clear, /* pointer to hash_collection:HashSet:hash_collection#HashSet#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__remove, /* pointer to hash_collection:HashSet:hash_collection#HashSet#remove */
(nitmethod_t)VIRTUAL_abstract_collection__Set__remove_all, /* pointer to hash_collection:HashSet:abstract_collection#Set#remove_all */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__add, /* pointer to hash_collection:HashSet:hash_collection#HashSet#add */
(nitmethod_t)VIRTUAL_abstract_collection__SimpleCollection__add_all, /* pointer to hash_collection:HashSet:abstract_collection#SimpleCollection#add_all */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArrayCapable__calloc_array, /* pointer to hash_collection:HashSet:array#ArrayCapable#calloc_array */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__first_item, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#first_item */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__index_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#index_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at_idx, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__store, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#store */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__remove_node, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#remove_node */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__raz, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#raz */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__enlarge, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#enlarge */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__init, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#init */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__init, /* pointer to hash_collection:HashSet:hash_collection#HashSet#init */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__from, /* pointer to hash_collection:HashSet:hash_collection#HashSet#from */
}
};
/* allocate HashSet[Object] */
val* NEW_hash_collection__HashSet(const struct type* type) {
val* self /* : HashSet[Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashSet;
var = NULL;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var; /* _array on <self:HashSet[Object] exact> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:HashSet[Object] exact> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:HashSet[Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:HashSet[Object] exact> */
var4 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:HashSet[Object] exact> */
var5 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:HashSet[Object] exact> */
var6 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:HashSet[Object] exact> */
return self;
}
/* allocate HashSet[Object] */
void CHECK_NEW_hash_collection__HashSet(val* self) {
}
/* runtime class hash_collection__HashSetNode */
const struct class class_hash_collection__HashSetNode = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashSetNode:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashSetNode:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashSetNode:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashSetNode:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashSetNode:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashSetNode:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashSetNode:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashSetNode:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashSetNode:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashSetNode:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashSetNode:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashSetNode:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashSetNode:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashSetNode:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashSetNode:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashSetNode:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashSetNode:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashSetNode:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashSetNode:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashSetNode:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashSetNode:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashSetNode:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashSetNode:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashSetNode:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashSetNode:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashSetNode:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashSetNode:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashSetNode:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashSetNode:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashSetNode:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashSetNode:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashSetNode:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashSetNode:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashSetNode:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashSetNode:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashSetNode:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashSetNode:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashSetNode:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashSetNode:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashSetNode:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashSetNode:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashSetNode:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashSetNode:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__next_item, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#next_item */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__next_item_61d, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#next_item= */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__prev_item, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#prev_item */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__prev_item_61d, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#prev_item= */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__init, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#init */
(nitmethod_t)VIRTUAL_hash_collection__HashSetNode__init, /* pointer to hash_collection:HashSetNode:hash_collection#HashSetNode#init */
}
};
/* allocate HashSetNode[Object] */
val* NEW_hash_collection__HashSetNode(const struct type* type) {
val* self /* : HashSetNode[Object] */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashSetNode;
var = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_item].val = var; /* _next_item on <self:HashSetNode[Object] exact> */
var1 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_item].val = var1; /* _prev_item on <self:HashSetNode[Object] exact> */
var2 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var2; /* _prev_in_bucklet on <self:HashSetNode[Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var3; /* _next_in_bucklet on <self:HashSetNode[Object] exact> */
return self;
}
/* allocate HashSetNode[Object] */
void CHECK_NEW_hash_collection__HashSetNode(val* self) {
val* var /* : Object */;
var = self->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <self:HashSetNode[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 189);
exit(1);
}
}
/* runtime class hash_collection__HashSetIterator */
const struct class class_hash_collection__HashSetIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashSetIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to hash_collection:HashSetIterator:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashSetIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to hash_collection:HashSetIterator:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to hash_collection:HashSetIterator:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashSetIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashSetIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashSetIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashSetIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashSetIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashSetIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashSetIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashSetIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashSetIterator:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to hash_collection:HashSetIterator:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to hash_collection:HashSetIterator:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to hash_collection:HashSetIterator:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to hash_collection:HashSetIterator:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to hash_collection:HashSetIterator:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to hash_collection:HashSetIterator:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashSetIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashSetIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashSetIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to hash_collection:HashSetIterator:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to hash_collection:HashSetIterator:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashSetIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashSetIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to hash_collection:HashSetIterator:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to hash_collection:HashSetIterator:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to hash_collection:HashSetIterator:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashSetIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashSetIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashSetIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashSetIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashSetIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to hash_collection:HashSetIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to hash_collection:HashSetIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to hash_collection:HashSetIterator:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to hash_collection:HashSetIterator:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to hash_collection:HashSetIterator:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to hash_collection:HashSetIterator:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to hash_collection:HashSetIterator:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to hash_collection:HashSetIterator:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__item, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#item */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__next, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#next */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__is_ok, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#is_ok */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to hash_collection:HashSetIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__init, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#init */
}
};
/* allocate HashSetIterator[Object] */
val* NEW_hash_collection__HashSetIterator(const struct type* type) {
val* self /* : HashSetIterator[Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashSetIterator;
return self;
}
/* allocate HashSetIterator[Object] */
void CHECK_NEW_hash_collection__HashSetIterator(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : nullable HashSetNode[Object] */;
var = self->attrs[COLOR_hash_collection__HashSetIterator___set].val; /* _set on <self:HashSetIterator[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _set");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 471);
exit(1);
}
var1 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
}
/* runtime class ropes__TupleLeafNodePos */
/* allocate TupleLeafNodePos */
val* NEW_ropes__TupleLeafNodePos(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "TupleLeafNodePos is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate TupleLeafNodePos */
void CHECK_NEW_ropes__TupleLeafNodePos(val* self) {
fprintf(stderr, "Runtime error: %s", "TupleLeafNodePos is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__BufferRope */
/* allocate BufferRope */
val* NEW_ropes__BufferRope(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "BufferRope is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate BufferRope */
void CHECK_NEW_ropes__BufferRope(val* self) {
fprintf(stderr, "Runtime error: %s", "BufferRope is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__ImmutableRope */
/* allocate ImmutableRope */
val* NEW_ropes__ImmutableRope(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "ImmutableRope is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate ImmutableRope */
void CHECK_NEW_ropes__ImmutableRope(val* self) {
fprintf(stderr, "Runtime error: %s", "ImmutableRope is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__CharRopeView */
/* allocate CharRopeView */
val* NEW_ropes__CharRopeView(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "CharRopeView is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate CharRopeView */
void CHECK_NEW_ropes__CharRopeView(val* self) {
fprintf(stderr, "Runtime error: %s", "CharRopeView is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__TupleVisitNode */
/* allocate TupleVisitNode */
val* NEW_ropes__TupleVisitNode(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "TupleVisitNode is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate TupleVisitNode */
void CHECK_NEW_ropes__TupleVisitNode(val* self) {
fprintf(stderr, "Runtime error: %s", "TupleVisitNode is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__RopeCharIterator */
/* allocate RopeCharIterator */
val* NEW_ropes__RopeCharIterator(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "RopeCharIterator is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate RopeCharIterator */
void CHECK_NEW_ropes__RopeCharIterator(val* self) {
fprintf(stderr, "Runtime error: %s", "RopeCharIterator is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__DFSRopeLeafIterator */
/* allocate DFSRopeLeafIterator */
val* NEW_ropes__DFSRopeLeafIterator(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "DFSRopeLeafIterator is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate DFSRopeLeafIterator */
void CHECK_NEW_ropes__DFSRopeLeafIterator(val* self) {
fprintf(stderr, "Runtime error: %s", "DFSRopeLeafIterator is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__ConcatNode */
/* allocate ConcatNode */
val* NEW_ropes__ConcatNode(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "ConcatNode is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate ConcatNode */
void CHECK_NEW_ropes__ConcatNode(val* self) {
fprintf(stderr, "Runtime error: %s", "ConcatNode is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ropes__LeafNode */
/* allocate LeafNode */
val* NEW_ropes__LeafNode(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "LeafNode is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate LeafNode */
void CHECK_NEW_ropes__LeafNode(val* self) {
fprintf(stderr, "Runtime error: %s", "LeafNode is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class file__IFStream */
const struct class class_file__IFStream = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:IFStream:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to file:IFStream:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:IFStream:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:IFStream:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:IFStream:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to file:IFStream:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to file:IFStream:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:IFStream:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:IFStream:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:IFStream:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:IFStream:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:IFStream:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:IFStream:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:IFStream:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:IFStream:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:IFStream:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to file:IFStream:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to file:IFStream:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to file:IFStream:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to file:IFStream:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to file:IFStream:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to file:IFStream:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:IFStream:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:IFStream:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:IFStream:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to file:IFStream:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to file:IFStream:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:IFStream:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:IFStream:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to file:IFStream:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to file:IFStream:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to file:IFStream:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:IFStream:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:IFStream:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:IFStream:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:IFStream:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:IFStream:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:IFStream:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:IFStream:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:IFStream:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:IFStream:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:IFStream:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to file:IFStream:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to file:IFStream:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to file:IFStream:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to file:IFStream:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to file:IFStream:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to file:IFStream:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to file:IFStream:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to file:IFStream:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_file__IFStream__close, /* pointer to file:IFStream:file#IFStream#close */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read_char, /* pointer to file:IFStream:stream#BufferedIStream#read_char */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read, /* pointer to file:IFStream:stream#BufferedIStream#read */
(nitmethod_t)VIRTUAL_stream__IStream__read_line, /* pointer to file:IFStream:stream#IStream#read_line */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read_all, /* pointer to file:IFStream:stream#BufferedIStream#read_all */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__append_line_to, /* pointer to file:IFStream:stream#BufferedIStream#append_line_to */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__eof, /* pointer to file:IFStream:stream#BufferedIStream#eof */
(nitmethod_t)VIRTUAL_file__IFStream__fill_buffer, /* pointer to file:IFStream:file#IFStream#fill_buffer */
(nitmethod_t)VIRTUAL_file__IFStream__end_reached, /* pointer to file:IFStream:file#IFStream#end_reached */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__prepare_buffer, /* pointer to file:IFStream:stream#BufferedIStream#prepare_buffer */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__init, /* pointer to file:IFStream:stream#BufferedIStream#init */
(nitmethod_t)VIRTUAL_file__FStream__path, /* pointer to file:IFStream:file#FStream#path */
(nitmethod_t)VIRTUAL_file__FStream__file_stat, /* pointer to file:IFStream:file#FStream#file_stat */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:IFStream:file#FStream#init */
(nitmethod_t)VIRTUAL_file__IFStream__reopen, /* pointer to file:IFStream:file#IFStream#reopen */
(nitmethod_t)VIRTUAL_file__IFStream__open, /* pointer to file:IFStream:file#IFStream#open */
(nitmethod_t)VIRTUAL_file__IFStream__init, /* pointer to file:IFStream:file#IFStream#init */
(nitmethod_t)VIRTUAL_file__IFStream__without_file, /* pointer to file:IFStream:file#IFStream#without_file */
}
};
/* allocate IFStream */
val* NEW_file__IFStream(const struct type* type) {
val* self /* : IFStream */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
long var3 /* : Int */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__IFStream;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:IFStream exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:IFStream exact> */
var2 = NULL;
self->attrs[COLOR_stream__BufferedIStream___buffer].val = var2; /* _buffer on <self:IFStream exact> */
var3 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var3; /* _buffer_pos on <self:IFStream exact> */
var4 = 0;
self->attrs[COLOR_file__IFStream___end_reached].s = var4; /* _end_reached on <self:IFStream exact> */
return self;
}
/* allocate IFStream */
void CHECK_NEW_file__IFStream(val* self) {
}
/* runtime class file__OFStream */
const struct class class_file__OFStream = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:OFStream:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to file:OFStream:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:OFStream:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:OFStream:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:OFStream:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to file:OFStream:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to file:OFStream:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:OFStream:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:OFStream:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:OFStream:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:OFStream:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:OFStream:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:OFStream:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:OFStream:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:OFStream:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:OFStream:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to file:OFStream:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to file:OFStream:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to file:OFStream:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to file:OFStream:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to file:OFStream:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to file:OFStream:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:OFStream:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:OFStream:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:OFStream:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to file:OFStream:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to file:OFStream:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:OFStream:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:OFStream:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to file:OFStream:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to file:OFStream:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to file:OFStream:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:OFStream:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:OFStream:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:OFStream:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:OFStream:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:OFStream:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:OFStream:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:OFStream:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:OFStream:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:OFStream:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:OFStream:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to file:OFStream:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to file:OFStream:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to file:OFStream:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to file:OFStream:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to file:OFStream:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to file:OFStream:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to file:OFStream:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to file:OFStream:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_file__OFStream__close, /* pointer to file:OFStream:file#OFStream#close */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_file__OFStream__write, /* pointer to file:OFStream:file#OFStream#write */
(nitmethod_t)VIRTUAL_file__OFStream__is_writable, /* pointer to file:OFStream:file#OFStream#is_writable */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_file__FStream__path, /* pointer to file:OFStream:file#FStream#path */
(nitmethod_t)VIRTUAL_file__FStream__file_stat, /* pointer to file:OFStream:file#FStream#file_stat */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:OFStream:file#FStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__write_native, /* pointer to file:OFStream:file#OFStream#write_native */
(nitmethod_t)VIRTUAL_file__OFStream__open, /* pointer to file:OFStream:file#OFStream#open */
(nitmethod_t)VIRTUAL_file__OFStream__init, /* pointer to file:OFStream:file#OFStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__without_file, /* pointer to file:OFStream:file#OFStream#without_file */
}
};
/* allocate OFStream */
val* NEW_file__OFStream(const struct type* type) {
val* self /* : OFStream */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__OFStream;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:OFStream exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:OFStream exact> */
return self;
}
/* allocate OFStream */
void CHECK_NEW_file__OFStream(val* self) {
short int var /* : Bool */;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:OFStream> */
}
/* runtime class file__Stdin */
/* allocate Stdin */
val* NEW_file__Stdin(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "Stdin is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate Stdin */
void CHECK_NEW_file__Stdin(val* self) {
fprintf(stderr, "Runtime error: %s", "Stdin is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class file__Stdout */
const struct class class_file__Stdout = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:Stdout:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to file:Stdout:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:Stdout:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:Stdout:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:Stdout:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to file:Stdout:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to file:Stdout:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:Stdout:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:Stdout:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:Stdout:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:Stdout:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:Stdout:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:Stdout:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:Stdout:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:Stdout:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:Stdout:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to file:Stdout:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to file:Stdout:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to file:Stdout:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to file:Stdout:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to file:Stdout:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to file:Stdout:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:Stdout:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:Stdout:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:Stdout:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to file:Stdout:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to file:Stdout:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:Stdout:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:Stdout:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to file:Stdout:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to file:Stdout:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to file:Stdout:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:Stdout:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:Stdout:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:Stdout:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:Stdout:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:Stdout:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:Stdout:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:Stdout:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:Stdout:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:Stdout:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:Stdout:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to file:Stdout:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to file:Stdout:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to file:Stdout:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to file:Stdout:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to file:Stdout:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to file:Stdout:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to file:Stdout:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to file:Stdout:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_file__OFStream__close, /* pointer to file:Stdout:file#OFStream#close */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_file__OFStream__write, /* pointer to file:Stdout:file#OFStream#write */
(nitmethod_t)VIRTUAL_file__OFStream__is_writable, /* pointer to file:Stdout:file#OFStream#is_writable */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_file__FStream__path, /* pointer to file:Stdout:file#FStream#path */
(nitmethod_t)VIRTUAL_file__FStream__file_stat, /* pointer to file:Stdout:file#FStream#file_stat */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:Stdout:file#FStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__write_native, /* pointer to file:Stdout:file#OFStream#write_native */
(nitmethod_t)VIRTUAL_file__OFStream__open, /* pointer to file:Stdout:file#OFStream#open */
(nitmethod_t)VIRTUAL_file__OFStream__init, /* pointer to file:Stdout:file#OFStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__without_file, /* pointer to file:Stdout:file#OFStream#without_file */
(nitmethod_t)VIRTUAL_file__Stdout__init, /* pointer to file:Stdout:file#Stdout#init */
}
};
/* allocate Stdout */
val* NEW_file__Stdout(const struct type* type) {
val* self /* : Stdout */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__Stdout;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:Stdout exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stdout exact> */
return self;
}
/* allocate Stdout */
void CHECK_NEW_file__Stdout(val* self) {
short int var /* : Bool */;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:Stdout> */
}
/* runtime class file__Stderr */
const struct class class_file__Stderr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:Stderr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to file:Stderr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:Stderr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:Stderr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:Stderr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to file:Stderr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to file:Stderr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:Stderr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:Stderr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:Stderr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:Stderr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:Stderr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:Stderr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:Stderr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:Stderr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:Stderr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to file:Stderr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to file:Stderr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to file:Stderr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to file:Stderr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to file:Stderr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to file:Stderr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:Stderr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:Stderr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:Stderr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to file:Stderr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to file:Stderr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:Stderr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:Stderr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to file:Stderr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to file:Stderr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to file:Stderr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:Stderr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:Stderr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:Stderr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:Stderr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:Stderr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:Stderr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:Stderr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:Stderr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:Stderr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:Stderr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to file:Stderr:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to file:Stderr:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to file:Stderr:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to file:Stderr:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to file:Stderr:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to file:Stderr:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to file:Stderr:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to file:Stderr:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_file__OFStream__close, /* pointer to file:Stderr:file#OFStream#close */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_file__OFStream__write, /* pointer to file:Stderr:file#OFStream#write */
(nitmethod_t)VIRTUAL_file__OFStream__is_writable, /* pointer to file:Stderr:file#OFStream#is_writable */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_file__FStream__path, /* pointer to file:Stderr:file#FStream#path */
(nitmethod_t)VIRTUAL_file__FStream__file_stat, /* pointer to file:Stderr:file#FStream#file_stat */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:Stderr:file#FStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__write_native, /* pointer to file:Stderr:file#OFStream#write_native */
(nitmethod_t)VIRTUAL_file__OFStream__open, /* pointer to file:Stderr:file#OFStream#open */
(nitmethod_t)VIRTUAL_file__OFStream__init, /* pointer to file:Stderr:file#OFStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__without_file, /* pointer to file:Stderr:file#OFStream#without_file */
(nitmethod_t)VIRTUAL_file__Stderr__init, /* pointer to file:Stderr:file#Stderr#init */
}
};
/* allocate Stderr */
val* NEW_file__Stderr(const struct type* type) {
val* self /* : Stderr */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__Stderr;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:Stderr exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stderr exact> */
return self;
}
/* allocate Stderr */
void CHECK_NEW_file__Stderr(val* self) {
short int var /* : Bool */;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:Stderr> */
}
/* runtime class file__FileStat */
const struct class class_file__FileStat = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:FileStat:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to file:FileStat:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:FileStat:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:FileStat:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:FileStat:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to file:FileStat:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to file:FileStat:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:FileStat:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:FileStat:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:FileStat:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:FileStat:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:FileStat:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:FileStat:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:FileStat:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:FileStat:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:FileStat:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to file:FileStat:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to file:FileStat:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to file:FileStat:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to file:FileStat:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to file:FileStat:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to file:FileStat:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:FileStat:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:FileStat:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:FileStat:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to file:FileStat:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to file:FileStat:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:FileStat:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:FileStat:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to file:FileStat:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to file:FileStat:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to file:FileStat:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:FileStat:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:FileStat:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:FileStat:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:FileStat:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:FileStat:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:FileStat:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:FileStat:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:FileStat:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:FileStat:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:FileStat:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to file:FileStat:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to file:FileStat:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to file:FileStat:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to file:FileStat:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to file:FileStat:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to file:FileStat:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to file:FileStat:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to file:FileStat:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to file:FileStat:kernel#Pointer#address_is_null */
(nitmethod_t)VIRTUAL_file__FileStat__mode, /* pointer to file:FileStat:file#FileStat#mode */
(nitmethod_t)VIRTUAL_file__FileStat__atime, /* pointer to file:FileStat:file#FileStat#atime */
(nitmethod_t)VIRTUAL_file__FileStat__ctime, /* pointer to file:FileStat:file#FileStat#ctime */
(nitmethod_t)VIRTUAL_file__FileStat__mtime, /* pointer to file:FileStat:file#FileStat#mtime */
(nitmethod_t)VIRTUAL_file__FileStat__size, /* pointer to file:FileStat:file#FileStat#size */
(nitmethod_t)VIRTUAL_file__FileStat__is_reg, /* pointer to file:FileStat:file#FileStat#is_reg */
(nitmethod_t)VIRTUAL_file__FileStat__is_dir, /* pointer to file:FileStat:file#FileStat#is_dir */
(nitmethod_t)VIRTUAL_file__FileStat__is_chr, /* pointer to file:FileStat:file#FileStat#is_chr */
(nitmethod_t)VIRTUAL_file__FileStat__is_blk, /* pointer to file:FileStat:file#FileStat#is_blk */
(nitmethod_t)VIRTUAL_file__FileStat__is_fifo, /* pointer to file:FileStat:file#FileStat#is_fifo */
(nitmethod_t)VIRTUAL_file__FileStat__is_lnk, /* pointer to file:FileStat:file#FileStat#is_lnk */
(nitmethod_t)VIRTUAL_file__FileStat__is_sock, /* pointer to file:FileStat:file#FileStat#is_sock */
}
};
/* runtime class file__NativeFile */
const struct class class_file__NativeFile = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:NativeFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to file:NativeFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:NativeFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:NativeFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:NativeFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to file:NativeFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to file:NativeFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:NativeFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:NativeFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:NativeFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:NativeFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:NativeFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:NativeFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:NativeFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:NativeFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:NativeFile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to file:NativeFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to file:NativeFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to file:NativeFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to file:NativeFile:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to file:NativeFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to file:NativeFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:NativeFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:NativeFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:NativeFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to file:NativeFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to file:NativeFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:NativeFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:NativeFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to file:NativeFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to file:NativeFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to file:NativeFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:NativeFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:NativeFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:NativeFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:NativeFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:NativeFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:NativeFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:NativeFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:NativeFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:NativeFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:NativeFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to file:NativeFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to file:NativeFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to file:NativeFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to file:NativeFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to file:NativeFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to file:NativeFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to file:NativeFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to file:NativeFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to file:NativeFile:kernel#Pointer#address_is_null */
(nitmethod_t)VIRTUAL_file__NativeFile__io_read, /* pointer to file:NativeFile:file#NativeFile#io_read */
(nitmethod_t)VIRTUAL_file__NativeFile__io_write, /* pointer to file:NativeFile:file#NativeFile#io_write */
(nitmethod_t)VIRTUAL_file__NativeFile__io_close, /* pointer to file:NativeFile:file#NativeFile#io_close */
(nitmethod_t)VIRTUAL_file__NativeFile__file_stat, /* pointer to file:NativeFile:file#NativeFile#file_stat */
(nitmethod_t)VIRTUAL_file__NativeFile__io_open_read, /* pointer to file:NativeFile:file#NativeFile#io_open_read */
(nitmethod_t)VIRTUAL_file__NativeFile__io_open_write, /* pointer to file:NativeFile:file#NativeFile#io_open_write */
(nitmethod_t)VIRTUAL_file__NativeFile__native_stdin, /* pointer to file:NativeFile:file#NativeFile#native_stdin */
(nitmethod_t)VIRTUAL_file__NativeFile__native_stdout, /* pointer to file:NativeFile:file#NativeFile#native_stdout */
(nitmethod_t)VIRTUAL_file__NativeFile__native_stderr, /* pointer to file:NativeFile:file#NativeFile#native_stderr */
}
};
/* allocate NativeFile */
val* BOX_file__NativeFile(void* value) {
struct instance_file__NativeFile*res = nit_alloc(sizeof(struct instance_file__NativeFile));
res->type = &type_file__NativeFile;
res->class = &class_file__NativeFile;
res->value = value;
return (val*)res;
}
/* runtime class stream__FDIStream */
const struct class class_stream__FDIStream = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to stream:FDIStream:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to stream:FDIStream:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to stream:FDIStream:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to stream:FDIStream:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to stream:FDIStream:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to stream:FDIStream:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to stream:FDIStream:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to stream:FDIStream:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to stream:FDIStream:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to stream:FDIStream:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to stream:FDIStream:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to stream:FDIStream:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to stream:FDIStream:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to stream:FDIStream:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to stream:FDIStream:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to stream:FDIStream:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to stream:FDIStream:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to stream:FDIStream:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to stream:FDIStream:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to stream:FDIStream:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to stream:FDIStream:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to stream:FDIStream:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to stream:FDIStream:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to stream:FDIStream:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to stream:FDIStream:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to stream:FDIStream:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to stream:FDIStream:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to stream:FDIStream:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to stream:FDIStream:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to stream:FDIStream:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to stream:FDIStream:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to stream:FDIStream:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to stream:FDIStream:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to stream:FDIStream:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to stream:FDIStream:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to stream:FDIStream:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to stream:FDIStream:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to stream:FDIStream:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to stream:FDIStream:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to stream:FDIStream:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to stream:FDIStream:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to stream:FDIStream:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to stream:FDIStream:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to stream:FDIStream:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to stream:FDIStream:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to stream:FDIStream:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to stream:FDIStream:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to stream:FDIStream:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to stream:FDIStream:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to stream:FDIStream:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_stream__FDStream__close, /* pointer to stream:FDIStream:stream#FDStream#close */
(nitmethod_t)VIRTUAL_stream__FDIStream__read_char, /* pointer to stream:FDIStream:stream#FDIStream#read_char */
(nitmethod_t)VIRTUAL_stream__IStream__read, /* pointer to stream:FDIStream:stream#IStream#read */
(nitmethod_t)VIRTUAL_stream__IStream__read_line, /* pointer to stream:FDIStream:stream#IStream#read_line */
(nitmethod_t)VIRTUAL_stream__IStream__read_all, /* pointer to stream:FDIStream:stream#IStream#read_all */
(nitmethod_t)VIRTUAL_stream__IStream__append_line_to, /* pointer to stream:FDIStream:stream#IStream#append_line_to */
(nitmethod_t)VIRTUAL_stream__FDIStream__eof, /* pointer to stream:FDIStream:stream#FDIStream#eof */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_stream__FDStream__fd, /* pointer to stream:FDIStream:stream#FDStream#fd */
(nitmethod_t)VIRTUAL_stream__FDStream__fd_61d, /* pointer to stream:FDIStream:stream#FDStream#fd= */
(nitmethod_t)VIRTUAL_stream__FDStream__native_close, /* pointer to stream:FDIStream:stream#FDStream#native_close */
(nitmethod_t)VIRTUAL_stream__FDStream__native_read_char, /* pointer to stream:FDIStream:stream#FDStream#native_read_char */
(nitmethod_t)VIRTUAL_stream__FDStream__native_read, /* pointer to stream:FDIStream:stream#FDStream#native_read */
(nitmethod_t)VIRTUAL_stream__FDStream__native_write, /* pointer to stream:FDIStream:stream#FDStream#native_write */
(nitmethod_t)VIRTUAL_stream__FDStream__native_write_char, /* pointer to stream:FDIStream:stream#FDStream#native_write_char */
(nitmethod_t)VIRTUAL_stream__FDStream__init, /* pointer to stream:FDIStream:stream#FDStream#init */
(nitmethod_t)VIRTUAL_stream__FDIStream__eof_61d, /* pointer to stream:FDIStream:stream#FDIStream#eof= */
(nitmethod_t)VIRTUAL_stream__FDIStream__init, /* pointer to stream:FDIStream:stream#FDIStream#init */
}
};
/* allocate FDIStream */
val* NEW_stream__FDIStream(const struct type* type) {
val* self /* : FDIStream */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_stream__FDIStream;
var = 0;
self->attrs[COLOR_stream__FDIStream___64deof].s = var; /* @eof on <self:FDIStream exact> */
return self;
}
/* allocate FDIStream */
void CHECK_NEW_stream__FDIStream(val* self) {
long var /* : Int */;
var = self->attrs[COLOR_stream__FDStream___64dfd].l; /* @fd on <self:FDIStream> */
}
/* runtime class stream__FDOStream */
/* allocate FDOStream */
val* NEW_stream__FDOStream(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "FDOStream is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate FDOStream */
void CHECK_NEW_stream__FDOStream(val* self) {
fprintf(stderr, "Runtime error: %s", "FDOStream is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class stream__FDIOStream */
/* allocate FDIOStream */
val* NEW_stream__FDIOStream(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "FDIOStream is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate FDIOStream */
void CHECK_NEW_stream__FDIOStream(val* self) {
fprintf(stderr, "Runtime error: %s", "FDIOStream is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class string_search__BM_Pattern */
/* allocate BM_Pattern */
val* NEW_string_search__BM_Pattern(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "BM_Pattern is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate BM_Pattern */
void CHECK_NEW_string_search__BM_Pattern(val* self) {
fprintf(stderr, "Runtime error: %s", "BM_Pattern is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class string_search__Match */
const struct class class_string_search__Match = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string_search:Match:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to string_search:Match:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string_search:Match:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to string_search:Match:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string_search:Match:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to string_search:Match:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to string_search:Match:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string_search:Match:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string_search:Match:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to string_search:Match:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string_search__Match__to_s, /* pointer to string_search:Match:string_search#Match#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string_search:Match:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string_search:Match:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string_search:Match:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string_search:Match:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string_search:Match:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to string_search:Match:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to string_search:Match:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to string_search:Match:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to string_search:Match:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to string_search:Match:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to string_search:Match:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string_search:Match:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string_search:Match:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string_search:Match:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to string_search:Match:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to string_search:Match:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string_search:Match:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string_search:Match:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to string_search:Match:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to string_search:Match:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to string_search:Match:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string_search:Match:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string_search:Match:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string_search:Match:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string_search:Match:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string_search:Match:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string_search:Match:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string_search:Match:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string_search:Match:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string_search:Match:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string_search:Match:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to string_search:Match:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to string_search:Match:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to string_search:Match:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to string_search:Match:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to string_search:Match:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to string_search:Match:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to string_search:Match:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to string_search:Match:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_string_search__Match__string, /* pointer to string_search:Match:string_search#Match#string */
(nitmethod_t)VIRTUAL_string_search__Match__from, /* pointer to string_search:Match:string_search#Match#from */
(nitmethod_t)VIRTUAL_string_search__Match__length, /* pointer to string_search:Match:string_search#Match#length */
(nitmethod_t)VIRTUAL_string_search__Match__after, /* pointer to string_search:Match:string_search#Match#after */
(nitmethod_t)VIRTUAL_string_search__Match__init, /* pointer to string_search:Match:string_search#Match#init */
}
};
/* allocate Match */
val* NEW_string_search__Match(const struct type* type) {
val* self /* : Match */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string_search__Match;
return self;
}
/* allocate Match */
void CHECK_NEW_string_search__Match(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
var = self->attrs[COLOR_string_search__Match___string].val; /* _string on <self:Match> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 207);
exit(1);
}
var1 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var2 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
}
/* runtime class time__TimeT */
const struct class class_time__TimeT = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to time:TimeT:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to time:TimeT:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to time:TimeT:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to time:TimeT:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to time:TimeT:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to time:TimeT:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to time:TimeT:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to time:TimeT:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to time:TimeT:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to time:TimeT:kernel#Object#hash */
(nitmethod_t)VIRTUAL_time__TimeT__to_s, /* pointer to time:TimeT:time#TimeT#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to time:TimeT:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to time:TimeT:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to time:TimeT:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to time:TimeT:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to time:TimeT:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to time:TimeT:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to time:TimeT:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to time:TimeT:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to time:TimeT:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to time:TimeT:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to time:TimeT:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to time:TimeT:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to time:TimeT:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to time:TimeT:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to time:TimeT:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to time:TimeT:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to time:TimeT:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to time:TimeT:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to time:TimeT:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to time:TimeT:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to time:TimeT:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to time:TimeT:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to time:TimeT:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to time:TimeT:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to time:TimeT:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to time:TimeT:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to time:TimeT:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to time:TimeT:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to time:TimeT:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to time:TimeT:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to time:TimeT:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to time:TimeT:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to time:TimeT:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to time:TimeT:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to time:TimeT:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to time:TimeT:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to time:TimeT:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to time:TimeT:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to time:TimeT:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to time:TimeT:kernel#Pointer#address_is_null */
(nitmethod_t)VIRTUAL_time__TimeT__init, /* pointer to time:TimeT:time#TimeT#init */
(nitmethod_t)VIRTUAL_time__TimeT__from_i, /* pointer to time:TimeT:time#TimeT#from_i */
(nitmethod_t)VIRTUAL_time__TimeT__update, /* pointer to time:TimeT:time#TimeT#update */
(nitmethod_t)VIRTUAL_time__TimeT__ctime, /* pointer to time:TimeT:time#TimeT#ctime */
(nitmethod_t)VIRTUAL_time__TimeT__difftime, /* pointer to time:TimeT:time#TimeT#difftime */
(nitmethod_t)VIRTUAL_time__TimeT__to_i, /* pointer to time:TimeT:time#TimeT#to_i */
}
};
/* runtime class time__Tm */
const struct class class_time__Tm = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to time:Tm:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to time:Tm:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to time:Tm:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to time:Tm:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to time:Tm:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to time:Tm:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to time:Tm:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to time:Tm:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to time:Tm:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to time:Tm:kernel#Object#hash */
(nitmethod_t)VIRTUAL_time__Tm__to_s, /* pointer to time:Tm:time#Tm#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to time:Tm:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to time:Tm:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to time:Tm:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to time:Tm:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to time:Tm:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to time:Tm:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to time:Tm:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to time:Tm:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to time:Tm:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to time:Tm:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to time:Tm:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to time:Tm:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to time:Tm:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to time:Tm:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to time:Tm:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to time:Tm:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to time:Tm:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to time:Tm:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to time:Tm:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to time:Tm:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to time:Tm:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to time:Tm:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to time:Tm:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to time:Tm:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to time:Tm:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to time:Tm:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to time:Tm:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to time:Tm:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to time:Tm:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to time:Tm:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to time:Tm:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to time:Tm:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to time:Tm:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to time:Tm:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to time:Tm:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to time:Tm:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to time:Tm:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to time:Tm:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to time:Tm:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to time:Tm:kernel#Pointer#address_is_null */
(nitmethod_t)VIRTUAL_time__Tm__gmtime, /* pointer to time:Tm:time#Tm#gmtime */
(nitmethod_t)VIRTUAL_time__Tm__gmtime_from_timet, /* pointer to time:Tm:time#Tm#gmtime_from_timet */
(nitmethod_t)VIRTUAL_time__Tm__localtime, /* pointer to time:Tm:time#Tm#localtime */
(nitmethod_t)VIRTUAL_time__Tm__localtime_from_timet, /* pointer to time:Tm:time#Tm#localtime_from_timet */
(nitmethod_t)VIRTUAL_time__Tm__to_timet, /* pointer to time:Tm:time#Tm#to_timet */
(nitmethod_t)VIRTUAL_time__Tm__sec, /* pointer to time:Tm:time#Tm#sec */
(nitmethod_t)VIRTUAL_time__Tm__min, /* pointer to time:Tm:time#Tm#min */
(nitmethod_t)VIRTUAL_time__Tm__hour, /* pointer to time:Tm:time#Tm#hour */
(nitmethod_t)VIRTUAL_time__Tm__mday, /* pointer to time:Tm:time#Tm#mday */
(nitmethod_t)VIRTUAL_time__Tm__mon, /* pointer to time:Tm:time#Tm#mon */
(nitmethod_t)VIRTUAL_time__Tm__year, /* pointer to time:Tm:time#Tm#year */
(nitmethod_t)VIRTUAL_time__Tm__wday, /* pointer to time:Tm:time#Tm#wday */
(nitmethod_t)VIRTUAL_time__Tm__yday, /* pointer to time:Tm:time#Tm#yday */
(nitmethod_t)VIRTUAL_time__Tm__is_dst, /* pointer to time:Tm:time#Tm#is_dst */
(nitmethod_t)VIRTUAL_time__Tm__asctime, /* pointer to time:Tm:time#Tm#asctime */
(nitmethod_t)VIRTUAL_time__Tm__strftime, /* pointer to time:Tm:time#Tm#strftime */
}
};
/* runtime class exec__Process */
const struct class class_exec__Process = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to exec:Process:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to exec:Process:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to exec:Process:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to exec:Process:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to exec:Process:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to exec:Process:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to exec:Process:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to exec:Process:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to exec:Process:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to exec:Process:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to exec:Process:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to exec:Process:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to exec:Process:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to exec:Process:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to exec:Process:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to exec:Process:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to exec:Process:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to exec:Process:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to exec:Process:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to exec:Process:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to exec:Process:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to exec:Process:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to exec:Process:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to exec:Process:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to exec:Process:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to exec:Process:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to exec:Process:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to exec:Process:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to exec:Process:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to exec:Process:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to exec:Process:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to exec:Process:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to exec:Process:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to exec:Process:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to exec:Process:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to exec:Process:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to exec:Process:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to exec:Process:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to exec:Process:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to exec:Process:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to exec:Process:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to exec:Process:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to exec:Process:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to exec:Process:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to exec:Process:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to exec:Process:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to exec:Process:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to exec:Process:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to exec:Process:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to exec:Process:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_exec__Process__id, /* pointer to exec:Process:exec#Process#id */
(nitmethod_t)VIRTUAL_exec__Process__is_finished, /* pointer to exec:Process:exec#Process#is_finished */
(nitmethod_t)VIRTUAL_exec__Process__wait, /* pointer to exec:Process:exec#Process#wait */
(nitmethod_t)VIRTUAL_exec__Process__status, /* pointer to exec:Process:exec#Process#status */
(nitmethod_t)VIRTUAL_exec__Process__init, /* pointer to exec:Process:exec#Process#init */
(nitmethod_t)VIRTUAL_exec__Process__init_, /* pointer to exec:Process:exec#Process#init_ */
(nitmethod_t)VIRTUAL_exec__Process__from_a, /* pointer to exec:Process:exec#Process#from_a */
(nitmethod_t)VIRTUAL_exec__Process__execute, /* pointer to exec:Process:exec#Process#execute */
(nitmethod_t)VIRTUAL_exec__Process__data, /* pointer to exec:Process:exec#Process#data */
(nitmethod_t)VIRTUAL_exec__Process__data_61d, /* pointer to exec:Process:exec#Process#data= */
(nitmethod_t)VIRTUAL_exec__Process__basic_exec_execute, /* pointer to exec:Process:exec#Process#basic_exec_execute */
}
};
/* allocate Process */
val* NEW_exec__Process(const struct type* type) {
val* self /* : Process */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_exec__Process;
return self;
}
/* allocate Process */
void CHECK_NEW_exec__Process(val* self) {
void* var /* : NativeProcess */;
var = self->attrs[COLOR_exec__Process___64ddata].ptr; /* @data on <self:Process> */
}
/* runtime class exec__IProcess */
const struct class class_exec__IProcess = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to exec:IProcess:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to exec:IProcess:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to exec:IProcess:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to exec:IProcess:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to exec:IProcess:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to exec:IProcess:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to exec:IProcess:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to exec:IProcess:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to exec:IProcess:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to exec:IProcess:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to exec:IProcess:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to exec:IProcess:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to exec:IProcess:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to exec:IProcess:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to exec:IProcess:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to exec:IProcess:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to exec:IProcess:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to exec:IProcess:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to exec:IProcess:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to exec:IProcess:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to exec:IProcess:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to exec:IProcess:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to exec:IProcess:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to exec:IProcess:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to exec:IProcess:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to exec:IProcess:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to exec:IProcess:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to exec:IProcess:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to exec:IProcess:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to exec:IProcess:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to exec:IProcess:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to exec:IProcess:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to exec:IProcess:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to exec:IProcess:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to exec:IProcess:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to exec:IProcess:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to exec:IProcess:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to exec:IProcess:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to exec:IProcess:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to exec:IProcess:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to exec:IProcess:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to exec:IProcess:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to exec:IProcess:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to exec:IProcess:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to exec:IProcess:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to exec:IProcess:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to exec:IProcess:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to exec:IProcess:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to exec:IProcess:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to exec:IProcess:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_exec__IProcess__close, /* pointer to exec:IProcess:exec#IProcess#close */
(nitmethod_t)VIRTUAL_exec__IProcess__read_char, /* pointer to exec:IProcess:exec#IProcess#read_char */
(nitmethod_t)VIRTUAL_stream__IStream__read, /* pointer to exec:IProcess:stream#IStream#read */
(nitmethod_t)VIRTUAL_stream__IStream__read_line, /* pointer to exec:IProcess:stream#IStream#read_line */
(nitmethod_t)VIRTUAL_stream__IStream__read_all, /* pointer to exec:IProcess:stream#IStream#read_all */
(nitmethod_t)VIRTUAL_stream__IStream__append_line_to, /* pointer to exec:IProcess:stream#IStream#append_line_to */
(nitmethod_t)VIRTUAL_exec__IProcess__eof, /* pointer to exec:IProcess:exec#IProcess#eof */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_exec__Process__id, /* pointer to exec:IProcess:exec#Process#id */
(nitmethod_t)VIRTUAL_exec__Process__is_finished, /* pointer to exec:IProcess:exec#Process#is_finished */
(nitmethod_t)VIRTUAL_exec__Process__wait, /* pointer to exec:IProcess:exec#Process#wait */
(nitmethod_t)VIRTUAL_exec__Process__status, /* pointer to exec:IProcess:exec#Process#status */
(nitmethod_t)VIRTUAL_exec__Process__init, /* pointer to exec:IProcess:exec#Process#init */
(nitmethod_t)VIRTUAL_exec__Process__init_, /* pointer to exec:IProcess:exec#Process#init_ */
(nitmethod_t)VIRTUAL_exec__Process__from_a, /* pointer to exec:IProcess:exec#Process#from_a */
(nitmethod_t)VIRTUAL_exec__Process__execute, /* pointer to exec:IProcess:exec#Process#execute */
(nitmethod_t)VIRTUAL_exec__Process__data, /* pointer to exec:IProcess:exec#Process#data */
(nitmethod_t)VIRTUAL_exec__Process__data_61d, /* pointer to exec:IProcess:exec#Process#data= */
(nitmethod_t)VIRTUAL_exec__Process__basic_exec_execute, /* pointer to exec:IProcess:exec#Process#basic_exec_execute */
(nitmethod_t)VIRTUAL_exec__IProcess__stream_in, /* pointer to exec:IProcess:exec#IProcess#stream_in */
(nitmethod_t)VIRTUAL_exec__IProcess__stream_in_61d, /* pointer to exec:IProcess:exec#IProcess#stream_in= */
(nitmethod_t)VIRTUAL_exec__IProcess__init, /* pointer to exec:IProcess:exec#IProcess#init */
(nitmethod_t)VIRTUAL_exec__IProcess__init_, /* pointer to exec:IProcess:exec#IProcess#init_ */
(nitmethod_t)VIRTUAL_exec__IProcess__from_a, /* pointer to exec:IProcess:exec#IProcess#from_a */
}
};
/* allocate IProcess */
val* NEW_exec__IProcess(const struct type* type) {
val* self /* : IProcess */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_exec__IProcess;
return self;
}
/* allocate IProcess */
void CHECK_NEW_exec__IProcess(val* self) {
void* var /* : NativeProcess */;
val* var1 /* : FDIStream */;
var = self->attrs[COLOR_exec__Process___64ddata].ptr; /* @data on <self:IProcess> */
var1 = self->attrs[COLOR_exec__IProcess___64dstream_in].val; /* @stream_in on <self:IProcess> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @stream_in");
fprintf(stderr, " (%s:%d)\n", "lib/standard/exec.nit", 83);
exit(1);
}
}
/* runtime class exec__OProcess */
/* allocate OProcess */
val* NEW_exec__OProcess(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "OProcess is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate OProcess */
void CHECK_NEW_exec__OProcess(val* self) {
fprintf(stderr, "Runtime error: %s", "OProcess is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class exec__IOProcess */
/* allocate IOProcess */
val* NEW_exec__IOProcess(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "IOProcess is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate IOProcess */
void CHECK_NEW_exec__IOProcess(val* self) {
fprintf(stderr, "Runtime error: %s", "IOProcess is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class exec__NativeProcess */
const struct class class_exec__NativeProcess = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to exec:NativeProcess:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to exec:NativeProcess:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to exec:NativeProcess:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to exec:NativeProcess:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to exec:NativeProcess:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to exec:NativeProcess:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to exec:NativeProcess:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to exec:NativeProcess:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to exec:NativeProcess:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to exec:NativeProcess:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to exec:NativeProcess:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to exec:NativeProcess:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to exec:NativeProcess:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to exec:NativeProcess:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to exec:NativeProcess:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to exec:NativeProcess:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to exec:NativeProcess:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to exec:NativeProcess:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to exec:NativeProcess:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to exec:NativeProcess:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to exec:NativeProcess:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to exec:NativeProcess:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to exec:NativeProcess:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to exec:NativeProcess:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to exec:NativeProcess:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to exec:NativeProcess:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to exec:NativeProcess:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to exec:NativeProcess:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to exec:NativeProcess:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to exec:NativeProcess:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to exec:NativeProcess:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to exec:NativeProcess:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to exec:NativeProcess:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to exec:NativeProcess:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to exec:NativeProcess:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to exec:NativeProcess:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to exec:NativeProcess:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to exec:NativeProcess:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to exec:NativeProcess:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to exec:NativeProcess:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to exec:NativeProcess:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to exec:NativeProcess:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to exec:NativeProcess:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to exec:NativeProcess:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to exec:NativeProcess:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to exec:NativeProcess:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to exec:NativeProcess:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to exec:NativeProcess:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to exec:NativeProcess:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to exec:NativeProcess:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to exec:NativeProcess:kernel#Pointer#address_is_null */
(nitmethod_t)VIRTUAL_exec__NativeProcess__id, /* pointer to exec:NativeProcess:exec#NativeProcess#id */
(nitmethod_t)VIRTUAL_exec__NativeProcess__is_finished, /* pointer to exec:NativeProcess:exec#NativeProcess#is_finished */
(nitmethod_t)VIRTUAL_exec__NativeProcess__status, /* pointer to exec:NativeProcess:exec#NativeProcess#status */
(nitmethod_t)VIRTUAL_exec__NativeProcess__wait, /* pointer to exec:NativeProcess:exec#NativeProcess#wait */
(nitmethod_t)VIRTUAL_exec__NativeProcess__in_fd, /* pointer to exec:NativeProcess:exec#NativeProcess#in_fd */
(nitmethod_t)VIRTUAL_exec__NativeProcess__out_fd, /* pointer to exec:NativeProcess:exec#NativeProcess#out_fd */
(nitmethod_t)VIRTUAL_exec__NativeProcess__err_fd, /* pointer to exec:NativeProcess:exec#NativeProcess#err_fd */
}
};
/* allocate NativeProcess */
val* BOX_exec__NativeProcess(void* value) {
struct instance_exec__NativeProcess*res = nit_alloc(sizeof(struct instance_exec__NativeProcess));
res->type = &type_exec__NativeProcess;
res->class = &class_exec__NativeProcess;
res->value = value;
return (val*)res;
}
/* runtime class model__MClassDefSorter */
const struct class class_model__MClassDefSorter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClassDefSorter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MClassDefSorter:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClassDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClassDefSorter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClassDefSorter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MClassDefSorter:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MClassDefSorter:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClassDefSorter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClassDefSorter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClassDefSorter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to model:MClassDefSorter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClassDefSorter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClassDefSorter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClassDefSorter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClassDefSorter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClassDefSorter:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MClassDefSorter:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MClassDefSorter:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MClassDefSorter:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MClassDefSorter:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MClassDefSorter:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MClassDefSorter:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClassDefSorter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClassDefSorter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClassDefSorter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MClassDefSorter:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MClassDefSorter:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClassDefSorter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClassDefSorter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MClassDefSorter:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MClassDefSorter:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MClassDefSorter:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClassDefSorter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClassDefSorter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClassDefSorter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClassDefSorter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClassDefSorter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClassDefSorter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClassDefSorter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClassDefSorter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClassDefSorter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClassDefSorter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MClassDefSorter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MClassDefSorter:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MClassDefSorter:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MClassDefSorter:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MClassDefSorter:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MClassDefSorter:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MClassDefSorter:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MClassDefSorter:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__compare, /* pointer to model:MClassDefSorter:model#MClassDefSorter#compare */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__sort, /* pointer to model:MClassDefSorter:sorter#AbstractSorter#sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__sub_sort, /* pointer to model:MClassDefSorter:sorter#AbstractSorter#sub_sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__quick_sort, /* pointer to model:MClassDefSorter:sorter#AbstractSorter#quick_sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__bubble_sort, /* pointer to model:MClassDefSorter:sorter#AbstractSorter#bubble_sort */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__mmodule, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__mmodule_61d, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule= */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__init, /* pointer to model:MClassDefSorter:model#MClassDefSorter#init */
}
};
/* allocate MClassDefSorter */
val* NEW_model__MClassDefSorter(const struct type* type) {
val* self /* : MClassDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClassDefSorter;
return self;
}
/* allocate MClassDefSorter */
void CHECK_NEW_model__MClassDefSorter(val* self) {
val* var /* : MModule */;
var = self->attrs[COLOR_model__MClassDefSorter___64dmmodule].val; /* @mmodule on <self:MClassDefSorter> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 255);
exit(1);
}
}
/* runtime class model__MPropDefSorter */
const struct class class_model__MPropDefSorter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MPropDefSorter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MPropDefSorter:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MPropDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MPropDefSorter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MPropDefSorter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MPropDefSorter:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MPropDefSorter:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MPropDefSorter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MPropDefSorter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MPropDefSorter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to model:MPropDefSorter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MPropDefSorter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MPropDefSorter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MPropDefSorter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MPropDefSorter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MPropDefSorter:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MPropDefSorter:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MPropDefSorter:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MPropDefSorter:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MPropDefSorter:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MPropDefSorter:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MPropDefSorter:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MPropDefSorter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MPropDefSorter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MPropDefSorter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MPropDefSorter:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MPropDefSorter:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MPropDefSorter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MPropDefSorter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MPropDefSorter:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MPropDefSorter:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MPropDefSorter:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MPropDefSorter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MPropDefSorter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MPropDefSorter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MPropDefSorter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MPropDefSorter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MPropDefSorter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MPropDefSorter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MPropDefSorter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MPropDefSorter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MPropDefSorter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MPropDefSorter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MPropDefSorter:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MPropDefSorter:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MPropDefSorter:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MPropDefSorter:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MPropDefSorter:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MPropDefSorter:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MPropDefSorter:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__compare, /* pointer to model:MPropDefSorter:model#MPropDefSorter#compare */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__sort, /* pointer to model:MPropDefSorter:sorter#AbstractSorter#sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__sub_sort, /* pointer to model:MPropDefSorter:sorter#AbstractSorter#sub_sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__quick_sort, /* pointer to model:MPropDefSorter:sorter#AbstractSorter#quick_sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__bubble_sort, /* pointer to model:MPropDefSorter:sorter#AbstractSorter#bubble_sort */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__mmodule, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__mmodule_61d, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule= */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__init, /* pointer to model:MPropDefSorter:model#MPropDefSorter#init */
}
};
/* allocate MPropDefSorter */
val* NEW_model__MPropDefSorter(const struct type* type) {
val* self /* : MPropDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MPropDefSorter;
return self;
}
/* allocate MPropDefSorter */
void CHECK_NEW_model__MPropDefSorter(val* self) {
val* var /* : MModule */;
var = self->attrs[COLOR_model__MPropDefSorter___64dmmodule].val; /* @mmodule on <self:MPropDefSorter> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 267);
exit(1);
}
}
/* runtime class model__MClass */
const struct class class_model__MClass = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClass:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MClass:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClass:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClass:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClass:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MClass:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MClass:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClass:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClass:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClass:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MClass__to_s, /* pointer to model:MClass:model#MClass#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClass:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClass:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClass:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClass:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClass:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MClass:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MClass:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MClass:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MClass:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MClass:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MClass:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClass:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClass:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClass:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MClass:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MClass:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClass:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClass:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MClass:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MClass:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MClass:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClass:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClass:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClass:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClass:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClass:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClass:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClass:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClass:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClass:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClass:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MClass:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MClass:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MClass:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MClass:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MClass:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MClass:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MClass:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MClass:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MClass__intro_mmodule, /* pointer to model:MClass:model#MClass#intro_mmodule */
(nitmethod_t)VIRTUAL_model__MClass__intro_mmodule_61d, /* pointer to model:MClass:model#MClass#intro_mmodule= */
(nitmethod_t)VIRTUAL_model__MClass__name, /* pointer to model:MClass:model#MClass#name */
(nitmethod_t)VIRTUAL_model__MClass__name_61d, /* pointer to model:MClass:model#MClass#name= */
(nitmethod_t)VIRTUAL_model__MClass__full_name, /* pointer to model:MClass:model#MClass#full_name */
(nitmethod_t)VIRTUAL_model__MClass__arity, /* pointer to model:MClass:model#MClass#arity */
(nitmethod_t)VIRTUAL_model__MClass__arity_61d, /* pointer to model:MClass:model#MClass#arity= */
(nitmethod_t)VIRTUAL_model__MClass__kind, /* pointer to model:MClass:model#MClass#kind */
(nitmethod_t)VIRTUAL_model__MClass__kind_61d, /* pointer to model:MClass:model#MClass#kind= */
(nitmethod_t)VIRTUAL_model__MClass__visibility, /* pointer to model:MClass:model#MClass#visibility */
(nitmethod_t)VIRTUAL_model__MClass__visibility_61d, /* pointer to model:MClass:model#MClass#visibility= */
(nitmethod_t)VIRTUAL_model__MClass__init, /* pointer to model:MClass:model#MClass#init */
(nitmethod_t)VIRTUAL_model__MClass__mclassdefs, /* pointer to model:MClass:model#MClass#mclassdefs */
(nitmethod_t)VIRTUAL_model__MClass__mclassdefs_61d, /* pointer to model:MClass:model#MClass#mclassdefs= */
(nitmethod_t)VIRTUAL_model__MClass__intro, /* pointer to model:MClass:model#MClass#intro */
(nitmethod_t)VIRTUAL_model__MClass__in_hierarchy, /* pointer to model:MClass:model#MClass#in_hierarchy */
(nitmethod_t)VIRTUAL_model__MClass__mclass_type, /* pointer to model:MClass:model#MClass#mclass_type */
(nitmethod_t)VIRTUAL_model__MClass__mclass_type_61d, /* pointer to model:MClass:model#MClass#mclass_type= */
(nitmethod_t)VIRTUAL_model__MClass__get_mtype, /* pointer to model:MClass:model#MClass#get_mtype */
(nitmethod_t)VIRTUAL_model__MClass__get_mtype_cache, /* pointer to model:MClass:model#MClass#get_mtype_cache */
(nitmethod_t)VIRTUAL_model__MClass__get_mtype_cache_61d, /* pointer to model:MClass:model#MClass#get_mtype_cache= */
(nitmethod_t)VIRTUAL_extern_classes__MClass__ctype, /* pointer to model:MClass:extern_classes#MClass#ctype */
(nitmethod_t)VIRTUAL_modelize_property__MClass__inherit_init_from, /* pointer to model:MClass:modelize_property#MClass#inherit_init_from */
(nitmethod_t)VIRTUAL_modelize_property__MClass__inherit_init_from_61d, /* pointer to model:MClass:modelize_property#MClass#inherit_init_from= */
(nitmethod_t)VIRTUAL_extern_classes__MClass__ftype_cache, /* pointer to model:MClass:extern_classes#MClass#ftype_cache */
(nitmethod_t)VIRTUAL_extern_classes__MClass__ftype_cache_61d, /* pointer to model:MClass:extern_classes#MClass#ftype_cache= */
(nitmethod_t)VIRTUAL_extern_classes__MClass__ftype_computed, /* pointer to model:MClass:extern_classes#MClass#ftype_computed */
(nitmethod_t)VIRTUAL_extern_classes__MClass__ftype_computed_61d, /* pointer to model:MClass:extern_classes#MClass#ftype_computed= */
(nitmethod_t)VIRTUAL_extern_classes__MClass__ftype, /* pointer to model:MClass:extern_classes#MClass#ftype */
(nitmethod_t)VIRTUAL_extern_classes__MClass__compute_ftype, /* pointer to model:MClass:extern_classes#MClass#compute_ftype */
(nitmethod_t)VIRTUAL_abstract_compiler__MClass__c_name, /* pointer to model:MClass:abstract_compiler#MClass#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MClass__c_name_cache, /* pointer to model:MClass:abstract_compiler#MClass#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MClass__c_name_cache_61d, /* pointer to model:MClass:abstract_compiler#MClass#c_name_cache= */
}
};
/* allocate MClass */
val* NEW_model__MClass(const struct type* type) {
val* self /* : MClass */;
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MGenericType] */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClass;
var = NEW_array__Array(&type_array__Arraymodel__MClassDef);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[MClassDef]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_model__MClass___64dmclassdefs].val = var; /* @mclassdefs on <self:MClass exact> */
var1 = NEW_array__Array(&type_array__Arraymodel__MGenericType);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[MGenericType]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_model__MClass___64dget_mtype_cache].val = var1; /* @get_mtype_cache on <self:MClass exact> */
var2 = NULL;
self->attrs[COLOR_modelize_property__MClass___64dinherit_init_from].val = var2; /* @inherit_init_from on <self:MClass exact> */
var3 = NULL;
self->attrs[COLOR_extern_classes__MClass___64dftype_cache].val = var3; /* @ftype_cache on <self:MClass exact> */
var4 = 0;
self->attrs[COLOR_extern_classes__MClass___64dftype_computed].s = var4; /* @ftype_computed on <self:MClass exact> */
return self;
}
/* allocate MClass */
void CHECK_NEW_model__MClass(val* self) {
val* var /* : MModule */;
val* var1 /* : String */;
long var2 /* : Int */;
val* var3 /* : MClassKind */;
val* var4 /* : MVisibility */;
val* var5 /* : MClassType */;
val* var6 /* : nullable String */;
var = self->attrs[COLOR_model__MClass___64dintro_mmodule].val; /* @intro_mmodule on <self:MClass> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 290);
exit(1);
}
var1 = self->attrs[COLOR_model__MClass___64dname].val; /* @name on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 295);
exit(1);
}
var2 = self->attrs[COLOR_model__MClass___64darity].l; /* @arity on <self:MClass> */
var3 = self->attrs[COLOR_model__MClass___64dkind].val; /* @kind on <self:MClass> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @kind");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 310);
exit(1);
}
var4 = self->attrs[COLOR_model__MClass___64dvisibility].val; /* @visibility on <self:MClass> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visibility");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 314);
exit(1);
}
var5 = self->attrs[COLOR_model__MClass___64dmclass_type].val; /* @mclass_type on <self:MClass> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass_type");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 370);
exit(1);
}
var6 = self->attrs[COLOR_abstract_compiler__MClass___64dc_name_cache].val; /* @c_name_cache on <self:MClass> */
}
/* runtime class model__MClassDef */
const struct class class_model__MClassDef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClassDef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MClassDef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClassDef:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClassDef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClassDef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MClassDef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MClassDef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClassDef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClassDef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClassDef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MClassDef__to_s, /* pointer to model:MClassDef:model#MClassDef#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClassDef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClassDef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClassDef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClassDef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClassDef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MClassDef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MClassDef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MClassDef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MClassDef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MClassDef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MClassDef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClassDef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClassDef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClassDef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MClassDef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MClassDef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClassDef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClassDef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MClassDef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MClassDef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MClassDef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClassDef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClassDef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClassDef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClassDef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClassDef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClassDef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClassDef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClassDef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClassDef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClassDef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MClassDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MClassDef:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MClassDef:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MClassDef:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MClassDef:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MClassDef:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MClassDef:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MClassDef:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MClassDef__mmodule, /* pointer to model:MClassDef:model#MClassDef#mmodule */
(nitmethod_t)VIRTUAL_model__MClassDef__mmodule_61d, /* pointer to model:MClassDef:model#MClassDef#mmodule= */
(nitmethod_t)VIRTUAL_model__MClassDef__mclass, /* pointer to model:MClassDef:model#MClassDef#mclass */
(nitmethod_t)VIRTUAL_model__MClassDef__mclass_61d, /* pointer to model:MClassDef:model#MClassDef#mclass= */
(nitmethod_t)VIRTUAL_model__MClassDef__bound_mtype, /* pointer to model:MClassDef:model#MClassDef#bound_mtype */
(nitmethod_t)VIRTUAL_model__MClassDef__bound_mtype_61d, /* pointer to model:MClassDef:model#MClassDef#bound_mtype= */
(nitmethod_t)VIRTUAL_model__MClassDef__parameter_names, /* pointer to model:MClassDef:model#MClassDef#parameter_names */
(nitmethod_t)VIRTUAL_model__MClassDef__parameter_names_61d, /* pointer to model:MClassDef:model#MClassDef#parameter_names= */
(nitmethod_t)VIRTUAL_model__MClassDef__location, /* pointer to model:MClassDef:model#MClassDef#location */
(nitmethod_t)VIRTUAL_model__MClassDef__location_61d, /* pointer to model:MClassDef:model#MClassDef#location= */
(nitmethod_t)VIRTUAL_model__MClassDef__to_s_61d, /* pointer to model:MClassDef:model#MClassDef#to_s= */
(nitmethod_t)VIRTUAL_model__MClassDef__init, /* pointer to model:MClassDef:model#MClassDef#init */
(nitmethod_t)VIRTUAL_model__MClassDef__supertypes, /* pointer to model:MClassDef:model#MClassDef#supertypes */
(nitmethod_t)VIRTUAL_model__MClassDef__supertypes_61d, /* pointer to model:MClassDef:model#MClassDef#supertypes= */
(nitmethod_t)VIRTUAL_model__MClassDef__set_supertypes, /* pointer to model:MClassDef:model#MClassDef#set_supertypes */
(nitmethod_t)VIRTUAL_model__MClassDef__add_in_hierarchy, /* pointer to model:MClassDef:model#MClassDef#add_in_hierarchy */
(nitmethod_t)VIRTUAL_model__MClassDef__in_hierarchy, /* pointer to model:MClassDef:model#MClassDef#in_hierarchy */
(nitmethod_t)VIRTUAL_model__MClassDef__in_hierarchy_61d, /* pointer to model:MClassDef:model#MClassDef#in_hierarchy= */
(nitmethod_t)VIRTUAL_model__MClassDef__is_intro, /* pointer to model:MClassDef:model#MClassDef#is_intro */
(nitmethod_t)VIRTUAL_model__MClassDef__intro_mproperties, /* pointer to model:MClassDef:model#MClassDef#intro_mproperties */
(nitmethod_t)VIRTUAL_model__MClassDef__intro_mproperties_61d, /* pointer to model:MClassDef:model#MClassDef#intro_mproperties= */
(nitmethod_t)VIRTUAL_model__MClassDef__mpropdefs, /* pointer to model:MClassDef:model#MClassDef#mpropdefs */
(nitmethod_t)VIRTUAL_model__MClassDef__mpropdefs_61d, /* pointer to model:MClassDef:model#MClassDef#mpropdefs= */
}
};
/* allocate MClassDef */
val* NEW_model__MClassDef(const struct type* type) {
val* self /* : MClassDef */;
val* var /* : Array[MClassType] */;
val* var1 /* : null */;
val* var2 /* : Array[MProperty] */;
val* var3 /* : Array[MPropDef] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClassDef;
var = NEW_array__Array(&type_array__Arraymodel__MClassType);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[MClassType]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_model__MClassDef___64dsupertypes].val = var; /* @supertypes on <self:MClassDef exact> */
var1 = NULL;
self->attrs[COLOR_model__MClassDef___64din_hierarchy].val = var1; /* @in_hierarchy on <self:MClassDef exact> */
var2 = NEW_array__Array(&type_array__Arraymodel__MProperty);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[MProperty]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_model__MClassDef___64dintro_mproperties].val = var2; /* @intro_mproperties on <self:MClassDef exact> */
var3 = NEW_array__Array(&type_array__Arraymodel__MPropDef);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[MPropDef]>*/;
CHECK_NEW_array__Array(var3);
self->attrs[COLOR_model__MClassDef___64dmpropdefs].val = var3; /* @mpropdefs on <self:MClassDef exact> */
return self;
}
/* allocate MClassDef */
void CHECK_NEW_model__MClassDef(val* self) {
val* var /* : MModule */;
val* var1 /* : MClass */;
val* var2 /* : MClassType */;
val* var3 /* : Array[String] */;
val* var4 /* : Location */;
val* var5 /* : String */;
var = self->attrs[COLOR_model__MClassDef___64dmmodule].val; /* @mmodule on <self:MClassDef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 415);
exit(1);
}
var1 = self->attrs[COLOR_model__MClassDef___64dmclass].val; /* @mclass on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 418);
exit(1);
}
var2 = self->attrs[COLOR_model__MClassDef___64dbound_mtype].val; /* @bound_mtype on <self:MClassDef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @bound_mtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 421);
exit(1);
}
var3 = self->attrs[COLOR_model__MClassDef___64dparameter_names].val; /* @parameter_names on <self:MClassDef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @parameter_names");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 433);
exit(1);
}
var4 = self->attrs[COLOR_model__MClassDef___64dlocation].val; /* @location on <self:MClassDef> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 436);
exit(1);
}
var5 = self->attrs[COLOR_model__MClassDef___64dto_s].val; /* @to_s on <self:MClassDef> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 439);
exit(1);
}
}
/* runtime class model__MClassType */
const struct class class_model__MClassType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClassType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MClassType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClassType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClassType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClassType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MClassType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MClassType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClassType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClassType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClassType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MClassType__to_s, /* pointer to model:MClassType:model#MClassType#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClassType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClassType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClassType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClassType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClassType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MClassType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MClassType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MClassType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MClassType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MClassType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MClassType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClassType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClassType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClassType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MClassType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MClassType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClassType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClassType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MClassType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MClassType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MClassType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClassType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClassType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClassType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClassType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClassType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClassType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClassType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClassType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClassType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClassType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MClassType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MClassType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MClassType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MClassType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MClassType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MClassType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MClassType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MClassType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MClassType:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MClassType:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MClassType__model, /* pointer to model:MClassType:model#MClassType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MClassType:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MClassType__anchor_to, /* pointer to model:MClassType:model#MClassType#anchor_to */
(nitmethod_t)VIRTUAL_model__MClassType__need_anchor, /* pointer to model:MClassType:model#MClassType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MClassType:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MClassType__resolve_for, /* pointer to model:MClassType:model#MClassType#resolve_for */
(nitmethod_t)VIRTUAL_model__MClassType__can_resolve_for, /* pointer to model:MClassType:model#MClassType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MType__as_nullable, /* pointer to model:MClassType:model#MType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MClassType:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MClassType:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MType__depth, /* pointer to model:MClassType:model#MType#depth */
(nitmethod_t)VIRTUAL_model__MType__length, /* pointer to model:MClassType:model#MType#length */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclassdefs, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclasses, /* pointer to model:MClassType:model#MClassType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mtypes, /* pointer to model:MClassType:model#MClassType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MClassType:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MClassType:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__cname, /* pointer to model:MClassType:nitni_base#MClassType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__cname_blind, /* pointer to model:MClassType:nitni_base#MClassType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__mangled_cname, /* pointer to model:MClassType:nitni_base#MClassType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__is_cprimitive, /* pointer to model:MClassType:nitni_base#MClassType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MClassType__ctype, /* pointer to model:MClassType:abstract_compiler#MClassType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MClassType__ctypename, /* pointer to model:MClassType:abstract_compiler#MClassType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MClassType__c_name, /* pointer to model:MClassType:abstract_compiler#MClassType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MClassType:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MClassType:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MClassType:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MClassType:compiler_ffi#MType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MClassType:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MClassType__mclass, /* pointer to model:MClassType:model#MClassType#mclass */
(nitmethod_t)VIRTUAL_model__MClassType__mclass_61d, /* pointer to model:MClassType:model#MClassType#mclass= */
(nitmethod_t)VIRTUAL_model__MClassType__init, /* pointer to model:MClassType:model#MClassType#init */
(nitmethod_t)VIRTUAL_model__MClassType__arguments, /* pointer to model:MClassType:model#MClassType#arguments */
(nitmethod_t)VIRTUAL_model__MClassType__arguments_61d, /* pointer to model:MClassType:model#MClassType#arguments= */
(nitmethod_t)VIRTUAL_model__MClassType__collect_things, /* pointer to model:MClassType:model#MClassType#collect_things */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclassdefs_cache, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs_cache */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclassdefs_cache_61d, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs_cache= */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclasses_cache, /* pointer to model:MClassType:model#MClassType#collect_mclasses_cache */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclasses_cache_61d, /* pointer to model:MClassType:model#MClassType#collect_mclasses_cache= */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mtypes_cache, /* pointer to model:MClassType:model#MClassType#collect_mtypes_cache */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mtypes_cache_61d, /* pointer to model:MClassType:model#MClassType#collect_mtypes_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MClassType__compile_nitni_type, /* pointer to model:MClassType:compiler_ffi#MClassType#compile_nitni_type */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MClassType:model#MType#anchor_to */
}
};
/* allocate MClassType */
val* NEW_model__MClassType(const struct type* type) {
val* self /* : MClassType */;
val* var /* : null */;
val* var1 /* : Array[MType] */;
val* var2 /* : HashMap[MModule, Set[MClassDef]] */;
val* var3 /* : HashMap[MModule, Set[MClass]] */;
val* var4 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClassType;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MClassType exact> */
var1 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[MType]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_model__MClassType___64darguments].val = var1; /* @arguments on <self:MClassType exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassDef);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[MModule, Set[MClassDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var2);
self->attrs[COLOR_model__MClassType___64dcollect_mclassdefs_cache].val = var2; /* @collect_mclassdefs_cache on <self:MClassType exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClass);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[MModule, Set[MClass]]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_model__MClassType___64dcollect_mclasses_cache].val = var3; /* @collect_mclasses_cache on <self:MClassType exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassType);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[MModule, Set[MClassType]]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_model__MClassType___64dcollect_mtypes_cache].val = var4; /* @collect_mtypes_cache on <self:MClassType exact> */
return self;
}
/* allocate MClassType */
void CHECK_NEW_model__MClassType(val* self) {
val* var /* : nullable String */;
val* var1 /* : MClass */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MClassType> */
var1 = self->attrs[COLOR_model__MClassType___64dmclass].val; /* @mclass on <self:MClassType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 900);
exit(1);
}
}
/* runtime class model__MGenericType */
const struct class class_model__MGenericType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MGenericType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MGenericType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MGenericType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MGenericType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MGenericType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MGenericType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MGenericType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MGenericType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MGenericType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MGenericType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MGenericType__to_s, /* pointer to model:MGenericType:model#MGenericType#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MGenericType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MGenericType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MGenericType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MGenericType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MGenericType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MGenericType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MGenericType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MGenericType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MGenericType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MGenericType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MGenericType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MGenericType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MGenericType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MGenericType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MGenericType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MGenericType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MGenericType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MGenericType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MGenericType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MGenericType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MGenericType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MGenericType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MGenericType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MGenericType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MGenericType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MGenericType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MGenericType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MGenericType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MGenericType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MGenericType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MGenericType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MGenericType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MGenericType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MGenericType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MGenericType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MGenericType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MGenericType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MGenericType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MGenericType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MGenericType:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MGenericType:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MClassType__model, /* pointer to model:MGenericType:model#MClassType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MGenericType:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MClassType__anchor_to, /* pointer to model:MGenericType:model#MClassType#anchor_to */
(nitmethod_t)VIRTUAL_model__MGenericType__need_anchor, /* pointer to model:MGenericType:model#MGenericType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MGenericType:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MGenericType__resolve_for, /* pointer to model:MGenericType:model#MGenericType#resolve_for */
(nitmethod_t)VIRTUAL_model__MGenericType__can_resolve_for, /* pointer to model:MGenericType:model#MGenericType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MType__as_nullable, /* pointer to model:MGenericType:model#MType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MGenericType:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MGenericType:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MGenericType__depth, /* pointer to model:MGenericType:model#MGenericType#depth */
(nitmethod_t)VIRTUAL_model__MGenericType__length, /* pointer to model:MGenericType:model#MGenericType#length */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclassdefs, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclasses, /* pointer to model:MGenericType:model#MClassType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mtypes, /* pointer to model:MGenericType:model#MClassType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MGenericType:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MGenericType:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MGenericType__cname, /* pointer to model:MGenericType:nitni_base#MGenericType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__cname_blind, /* pointer to model:MGenericType:nitni_base#MClassType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MGenericType__mangled_cname, /* pointer to model:MGenericType:nitni_base#MGenericType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__is_cprimitive, /* pointer to model:MGenericType:nitni_base#MClassType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MClassType__ctype, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MClassType__ctypename, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MGenericType__c_name, /* pointer to model:MGenericType:abstract_compiler#MGenericType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MGenericType:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MGenericType:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MGenericType:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MGenericType:compiler_ffi#MType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MGenericType:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MClassType__mclass, /* pointer to model:MGenericType:model#MClassType#mclass */
(nitmethod_t)VIRTUAL_model__MClassType__mclass_61d, /* pointer to model:MGenericType:model#MClassType#mclass= */
(nitmethod_t)VIRTUAL_model__MClassType__init, /* pointer to model:MGenericType:model#MClassType#init */
(nitmethod_t)VIRTUAL_model__MClassType__arguments, /* pointer to model:MGenericType:model#MClassType#arguments */
(nitmethod_t)VIRTUAL_model__MClassType__arguments_61d, /* pointer to model:MGenericType:model#MClassType#arguments= */
(nitmethod_t)VIRTUAL_model__MClassType__collect_things, /* pointer to model:MGenericType:model#MClassType#collect_things */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclassdefs_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs_cache */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclassdefs_cache_61d, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs_cache= */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclasses_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_cache */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mclasses_cache_61d, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_cache= */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mtypes_cache, /* pointer to model:MGenericType:model#MClassType#collect_mtypes_cache */
(nitmethod_t)VIRTUAL_model__MClassType__collect_mtypes_cache_61d, /* pointer to model:MGenericType:model#MClassType#collect_mtypes_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MClassType__compile_nitni_type, /* pointer to model:MGenericType:compiler_ffi#MClassType#compile_nitni_type */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MGenericType:model#MType#anchor_to */
(nitmethod_t)VIRTUAL_model__MGenericType__init, /* pointer to model:MGenericType:model#MGenericType#init */
(nitmethod_t)VIRTUAL_model__MGenericType__to_s_61d, /* pointer to model:MGenericType:model#MGenericType#to_s= */
(nitmethod_t)VIRTUAL_model__MGenericType__need_anchor_61d, /* pointer to model:MGenericType:model#MGenericType#need_anchor= */
(nitmethod_t)VIRTUAL_abstract_compiler__MClassType__c_name, /* pointer to model:MGenericType:abstract_compiler#MClassType#c_name */
(nitmethod_t)VIRTUAL_nitni_base__MClassType__mangled_cname, /* pointer to model:MGenericType:nitni_base#MClassType#mangled_cname */
}
};
/* allocate MGenericType */
val* NEW_model__MGenericType(const struct type* type) {
val* self /* : MGenericType */;
val* var /* : null */;
val* var1 /* : Array[MType] */;
val* var2 /* : HashMap[MModule, Set[MClassDef]] */;
val* var3 /* : HashMap[MModule, Set[MClass]] */;
val* var4 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MGenericType;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MGenericType exact> */
var1 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[MType]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_model__MClassType___64darguments].val = var1; /* @arguments on <self:MGenericType exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassDef);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[MModule, Set[MClassDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var2);
self->attrs[COLOR_model__MClassType___64dcollect_mclassdefs_cache].val = var2; /* @collect_mclassdefs_cache on <self:MGenericType exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClass);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[MModule, Set[MClass]]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_model__MClassType___64dcollect_mclasses_cache].val = var3; /* @collect_mclasses_cache on <self:MGenericType exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassType);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[MModule, Set[MClassType]]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_model__MClassType___64dcollect_mtypes_cache].val = var4; /* @collect_mtypes_cache on <self:MGenericType exact> */
return self;
}
/* allocate MGenericType */
void CHECK_NEW_model__MGenericType(val* self) {
val* var /* : nullable String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
short int var3 /* : Bool */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MGenericType> */
var1 = self->attrs[COLOR_model__MClassType___64dmclass].val; /* @mclass on <self:MGenericType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 900);
exit(1);
}
var2 = self->attrs[COLOR_model__MGenericType___64dto_s].val; /* @to_s on <self:MGenericType> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1015);
exit(1);
}
var3 = self->attrs[COLOR_model__MGenericType___64dneed_anchor].s; /* @need_anchor on <self:MGenericType> */
}
/* runtime class model__MVirtualType */
const struct class class_model__MVirtualType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MVirtualType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MVirtualType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MVirtualType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MVirtualType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MVirtualType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MVirtualType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MVirtualType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MVirtualType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MVirtualType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MVirtualType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MVirtualType__to_s, /* pointer to model:MVirtualType:model#MVirtualType#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MVirtualType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MVirtualType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MVirtualType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MVirtualType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MVirtualType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MVirtualType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MVirtualType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MVirtualType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MVirtualType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MVirtualType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MVirtualType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MVirtualType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MVirtualType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MVirtualType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MVirtualType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MVirtualType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MVirtualType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MVirtualType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MVirtualType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MVirtualType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MVirtualType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MVirtualType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MVirtualType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MVirtualType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MVirtualType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MVirtualType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MVirtualType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MVirtualType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MVirtualType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MVirtualType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MVirtualType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MVirtualType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MVirtualType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MVirtualType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MVirtualType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MVirtualType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MVirtualType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MVirtualType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MVirtualType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MVirtualType:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MVirtualType:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MVirtualType__model, /* pointer to model:MVirtualType:model#MVirtualType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MVirtualType:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MVirtualType:model#MType#anchor_to */
(nitmethod_t)VIRTUAL_model__MType__need_anchor, /* pointer to model:MVirtualType:model#MType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MVirtualType:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MVirtualType__resolve_for, /* pointer to model:MVirtualType:model#MVirtualType#resolve_for */
(nitmethod_t)VIRTUAL_model__MVirtualType__can_resolve_for, /* pointer to model:MVirtualType:model#MVirtualType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MType__as_nullable, /* pointer to model:MVirtualType:model#MType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MVirtualType:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MVirtualType:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MType__depth, /* pointer to model:MVirtualType:model#MType#depth */
(nitmethod_t)VIRTUAL_model__MType__length, /* pointer to model:MVirtualType:model#MType#length */
(nitmethod_t)VIRTUAL_model__MType__collect_mclassdefs, /* pointer to model:MVirtualType:model#MType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MType__collect_mclasses, /* pointer to model:MVirtualType:model#MType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MType__collect_mtypes, /* pointer to model:MVirtualType:model#MType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MVirtualType:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MVirtualType:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname, /* pointer to model:MVirtualType:nitni_base#MType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname_blind, /* pointer to model:MVirtualType:nitni_base#MType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MVirtualType__mangled_cname, /* pointer to model:MVirtualType:nitni_base#MVirtualType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__is_cprimitive, /* pointer to model:MVirtualType:nitni_base#MType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctype, /* pointer to model:MVirtualType:abstract_compiler#MType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctypename, /* pointer to model:MVirtualType:abstract_compiler#MType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MVirtualType__c_name, /* pointer to model:MVirtualType:abstract_compiler#MVirtualType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MVirtualType:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MVirtualType:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MVirtualType:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MVirtualType:compiler_ffi#MType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MVirtualType:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MVirtualType__mproperty, /* pointer to model:MVirtualType:model#MVirtualType#mproperty */
(nitmethod_t)VIRTUAL_model__MVirtualType__mproperty_61d, /* pointer to model:MVirtualType:model#MVirtualType#mproperty= */
(nitmethod_t)VIRTUAL_model__MVirtualType__lookup_bound, /* pointer to model:MVirtualType:model#MVirtualType#lookup_bound */
(nitmethod_t)VIRTUAL_model__MVirtualType__init, /* pointer to model:MVirtualType:model#MVirtualType#init */
}
};
/* allocate MVirtualType */
val* NEW_model__MVirtualType(const struct type* type) {
val* self /* : MVirtualType */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MVirtualType;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MVirtualType exact> */
return self;
}
/* allocate MVirtualType */
void CHECK_NEW_model__MVirtualType(val* self) {
val* var /* : nullable String */;
val* var1 /* : MProperty */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MVirtualType> */
var1 = self->attrs[COLOR_model__MVirtualType___64dmproperty].val; /* @mproperty on <self:MVirtualType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1066);
exit(1);
}
}
/* runtime class model__MParameterType */
const struct class class_model__MParameterType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MParameterType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MParameterType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MParameterType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MParameterType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MParameterType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MParameterType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MParameterType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MParameterType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MParameterType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MParameterType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MParameterType__to_s, /* pointer to model:MParameterType:model#MParameterType#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MParameterType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MParameterType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MParameterType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MParameterType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MParameterType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MParameterType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MParameterType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MParameterType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MParameterType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MParameterType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MParameterType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MParameterType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MParameterType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MParameterType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MParameterType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MParameterType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MParameterType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MParameterType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MParameterType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MParameterType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MParameterType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MParameterType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MParameterType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MParameterType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MParameterType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MParameterType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MParameterType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MParameterType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MParameterType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MParameterType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MParameterType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MParameterType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MParameterType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MParameterType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MParameterType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MParameterType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MParameterType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MParameterType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MParameterType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MParameterType:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MParameterType:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MParameterType__model, /* pointer to model:MParameterType:model#MParameterType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MParameterType:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MParameterType:model#MType#anchor_to */
(nitmethod_t)VIRTUAL_model__MType__need_anchor, /* pointer to model:MParameterType:model#MType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MParameterType:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MParameterType__resolve_for, /* pointer to model:MParameterType:model#MParameterType#resolve_for */
(nitmethod_t)VIRTUAL_model__MParameterType__can_resolve_for, /* pointer to model:MParameterType:model#MParameterType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MType__as_nullable, /* pointer to model:MParameterType:model#MType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MParameterType:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MParameterType:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MType__depth, /* pointer to model:MParameterType:model#MType#depth */
(nitmethod_t)VIRTUAL_model__MType__length, /* pointer to model:MParameterType:model#MType#length */
(nitmethod_t)VIRTUAL_model__MType__collect_mclassdefs, /* pointer to model:MParameterType:model#MType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MType__collect_mclasses, /* pointer to model:MParameterType:model#MType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MType__collect_mtypes, /* pointer to model:MParameterType:model#MType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MParameterType:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MParameterType:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname, /* pointer to model:MParameterType:nitni_base#MType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname_blind, /* pointer to model:MParameterType:nitni_base#MType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MType__mangled_cname, /* pointer to model:MParameterType:nitni_base#MType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__is_cprimitive, /* pointer to model:MParameterType:nitni_base#MType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctype, /* pointer to model:MParameterType:abstract_compiler#MType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctypename, /* pointer to model:MParameterType:abstract_compiler#MType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MParameterType__c_name, /* pointer to model:MParameterType:abstract_compiler#MParameterType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MParameterType:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MParameterType:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MParameterType:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MParameterType:compiler_ffi#MType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MParameterType:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MParameterType__mclass, /* pointer to model:MParameterType:model#MParameterType#mclass */
(nitmethod_t)VIRTUAL_model__MParameterType__mclass_61d, /* pointer to model:MParameterType:model#MParameterType#mclass= */
(nitmethod_t)VIRTUAL_model__MParameterType__rank, /* pointer to model:MParameterType:model#MParameterType#rank */
(nitmethod_t)VIRTUAL_model__MParameterType__rank_61d, /* pointer to model:MParameterType:model#MParameterType#rank= */
(nitmethod_t)VIRTUAL_model__MParameterType__lookup_bound, /* pointer to model:MParameterType:model#MParameterType#lookup_bound */
(nitmethod_t)VIRTUAL_model__MParameterType__init, /* pointer to model:MParameterType:model#MParameterType#init */
}
};
/* allocate MParameterType */
val* NEW_model__MParameterType(const struct type* type) {
val* self /* : MParameterType */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MParameterType;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MParameterType exact> */
return self;
}
/* allocate MParameterType */
void CHECK_NEW_model__MParameterType(val* self) {
val* var /* : nullable String */;
val* var1 /* : MClass */;
long var2 /* : Int */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MParameterType> */
var1 = self->attrs[COLOR_model__MParameterType___64dmclass].val; /* @mclass on <self:MParameterType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1180);
exit(1);
}
var2 = self->attrs[COLOR_model__MParameterType___64drank].l; /* @rank on <self:MParameterType> */
}
/* runtime class model__MNullableType */
const struct class class_model__MNullableType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MNullableType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MNullableType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MNullableType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MNullableType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MNullableType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MNullableType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MNullableType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MNullableType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MNullableType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MNullableType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MNullableType__to_s, /* pointer to model:MNullableType:model#MNullableType#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MNullableType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MNullableType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MNullableType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MNullableType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MNullableType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MNullableType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MNullableType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MNullableType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MNullableType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MNullableType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MNullableType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MNullableType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MNullableType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MNullableType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MNullableType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MNullableType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MNullableType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MNullableType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MNullableType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MNullableType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MNullableType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MNullableType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MNullableType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MNullableType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MNullableType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MNullableType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MNullableType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MNullableType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MNullableType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MNullableType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MNullableType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MNullableType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MNullableType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MNullableType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MNullableType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MNullableType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MNullableType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MNullableType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MNullableType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MNullableType:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MNullableType:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MNullableType__model, /* pointer to model:MNullableType:model#MNullableType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MNullableType:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MNullableType:model#MType#anchor_to */
(nitmethod_t)VIRTUAL_model__MNullableType__need_anchor, /* pointer to model:MNullableType:model#MNullableType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MNullableType:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MNullableType__resolve_for, /* pointer to model:MNullableType:model#MNullableType#resolve_for */
(nitmethod_t)VIRTUAL_model__MNullableType__can_resolve_for, /* pointer to model:MNullableType:model#MNullableType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MNullableType__as_nullable, /* pointer to model:MNullableType:model#MNullableType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MNullableType:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MNullableType:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MNullableType__depth, /* pointer to model:MNullableType:model#MNullableType#depth */
(nitmethod_t)VIRTUAL_model__MNullableType__length, /* pointer to model:MNullableType:model#MNullableType#length */
(nitmethod_t)VIRTUAL_model__MNullableType__collect_mclassdefs, /* pointer to model:MNullableType:model#MNullableType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MNullableType__collect_mclasses, /* pointer to model:MNullableType:model#MNullableType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MNullableType__collect_mtypes, /* pointer to model:MNullableType:model#MNullableType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MNullableType:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MNullableType:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MNullableType__cname, /* pointer to model:MNullableType:nitni_base#MNullableType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MNullableType__cname_blind, /* pointer to model:MNullableType:nitni_base#MNullableType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MNullableType__mangled_cname, /* pointer to model:MNullableType:nitni_base#MNullableType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MNullableType__is_cprimitive, /* pointer to model:MNullableType:nitni_base#MNullableType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctype, /* pointer to model:MNullableType:abstract_compiler#MType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctypename, /* pointer to model:MNullableType:abstract_compiler#MType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MNullableType__c_name, /* pointer to model:MNullableType:abstract_compiler#MNullableType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MNullableType:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MNullableType:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MNullableType:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MNullableType__compile_extern_helper_functions, /* pointer to model:MNullableType:compiler_ffi#MNullableType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MNullableType:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MNullableType__mtype, /* pointer to model:MNullableType:model#MNullableType#mtype */
(nitmethod_t)VIRTUAL_model__MNullableType__mtype_61d, /* pointer to model:MNullableType:model#MNullableType#mtype= */
(nitmethod_t)VIRTUAL_model__MNullableType__init, /* pointer to model:MNullableType:model#MNullableType#init */
(nitmethod_t)VIRTUAL_model__MNullableType__to_s_61d, /* pointer to model:MNullableType:model#MNullableType#to_s= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MNullableType:compiler_ffi#MType#compile_extern_helper_functions */
}
};
/* allocate MNullableType */
val* NEW_model__MNullableType(const struct type* type) {
val* self /* : MNullableType */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MNullableType;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MNullableType exact> */
return self;
}
/* allocate MNullableType */
void CHECK_NEW_model__MNullableType(val* self) {
val* var /* : nullable String */;
val* var1 /* : MType */;
val* var2 /* : String */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MNullableType> */
var1 = self->attrs[COLOR_model__MNullableType___64dmtype].val; /* @mtype on <self:MNullableType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1284);
exit(1);
}
var2 = self->attrs[COLOR_model__MNullableType___64dto_s].val; /* @to_s on <self:MNullableType> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1295);
exit(1);
}
}
/* runtime class model__MNullType */
const struct class class_model__MNullType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MNullType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MNullType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MNullType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MNullType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MNullType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MNullType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MNullType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MNullType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MNullType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MNullType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MNullType__to_s, /* pointer to model:MNullType:model#MNullType#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MNullType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MNullType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MNullType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MNullType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MNullType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MNullType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MNullType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MNullType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MNullType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MNullType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MNullType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MNullType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MNullType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MNullType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MNullType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MNullType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MNullType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MNullType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MNullType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MNullType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MNullType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MNullType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MNullType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MNullType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MNullType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MNullType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MNullType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MNullType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MNullType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MNullType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MNullType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MNullType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MNullType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MNullType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MNullType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MNullType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MNullType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MNullType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MNullType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MNullType:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MNullType:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MNullType__model, /* pointer to model:MNullType:model#MNullType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MNullType:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MNullType:model#MType#anchor_to */
(nitmethod_t)VIRTUAL_model__MNullType__need_anchor, /* pointer to model:MNullType:model#MNullType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MNullType:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MNullType__resolve_for, /* pointer to model:MNullType:model#MNullType#resolve_for */
(nitmethod_t)VIRTUAL_model__MNullType__can_resolve_for, /* pointer to model:MNullType:model#MNullType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MNullType__as_nullable, /* pointer to model:MNullType:model#MNullType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MNullType:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MNullType:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MType__depth, /* pointer to model:MNullType:model#MType#depth */
(nitmethod_t)VIRTUAL_model__MType__length, /* pointer to model:MNullType:model#MType#length */
(nitmethod_t)VIRTUAL_model__MNullType__collect_mclassdefs, /* pointer to model:MNullType:model#MNullType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MNullType__collect_mclasses, /* pointer to model:MNullType:model#MNullType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MNullType__collect_mtypes, /* pointer to model:MNullType:model#MNullType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MNullType:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MNullType:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname, /* pointer to model:MNullType:nitni_base#MType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname_blind, /* pointer to model:MNullType:nitni_base#MType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MType__mangled_cname, /* pointer to model:MNullType:nitni_base#MType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__is_cprimitive, /* pointer to model:MNullType:nitni_base#MType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctype, /* pointer to model:MNullType:abstract_compiler#MType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctypename, /* pointer to model:MNullType:abstract_compiler#MType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name, /* pointer to model:MNullType:abstract_compiler#MType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MNullType:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MNullType:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MNullType:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MNullType:compiler_ffi#MType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MNullType:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MNullType__model_61d, /* pointer to model:MNullType:model#MNullType#model= */
(nitmethod_t)VIRTUAL_model__MNullType__init, /* pointer to model:MNullType:model#MNullType#init */
}
};
/* allocate MNullType */
val* NEW_model__MNullType(const struct type* type) {
val* self /* : MNullType */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MNullType;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MNullType exact> */
return self;
}
/* allocate MNullType */
void CHECK_NEW_model__MNullType(val* self) {
val* var /* : nullable String */;
val* var1 /* : Model */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MNullType> */
var1 = self->attrs[COLOR_model__MNullType___64dmodel].val; /* @model on <self:MNullType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1338);
exit(1);
}
}
/* runtime class model__MSignature */
const struct class class_model__MSignature = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MSignature:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MSignature:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MSignature:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MSignature:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MSignature:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MSignature:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MSignature:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MSignature:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MSignature:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MSignature:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MSignature__to_s, /* pointer to model:MSignature:model#MSignature#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MSignature:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MSignature:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MSignature:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MSignature:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MSignature:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MSignature:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MSignature:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MSignature:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MSignature:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MSignature:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MSignature:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MSignature:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MSignature:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MSignature:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MSignature:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MSignature:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MSignature:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MSignature:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MSignature:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MSignature:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MSignature:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MSignature:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MSignature:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MSignature:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MSignature:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MSignature:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MSignature:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MSignature:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MSignature:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MSignature:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MSignature:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MSignature:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MSignature:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MSignature:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MSignature:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MSignature:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MSignature:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MSignature:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MSignature:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to model:MSignature:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to model:MSignature:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_model__MType__model, /* pointer to model:MSignature:model#MType#model */
(nitmethod_t)VIRTUAL_model__MType__is_subtype, /* pointer to model:MSignature:model#MType#is_subtype */
(nitmethod_t)VIRTUAL_model__MType__anchor_to, /* pointer to model:MSignature:model#MType#anchor_to */
(nitmethod_t)VIRTUAL_model__MType__need_anchor, /* pointer to model:MSignature:model#MType#need_anchor */
(nitmethod_t)VIRTUAL_model__MType__supertype_to, /* pointer to model:MSignature:model#MType#supertype_to */
(nitmethod_t)VIRTUAL_model__MSignature__resolve_for, /* pointer to model:MSignature:model#MSignature#resolve_for */
(nitmethod_t)VIRTUAL_model__MType__can_resolve_for, /* pointer to model:MSignature:model#MType#can_resolve_for */
(nitmethod_t)VIRTUAL_model__MType__as_nullable, /* pointer to model:MSignature:model#MType#as_nullable */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache, /* pointer to model:MSignature:model#MType#as_nullable_cache */
(nitmethod_t)VIRTUAL_model__MType__as_nullable_cache_61d, /* pointer to model:MSignature:model#MType#as_nullable_cache= */
(nitmethod_t)VIRTUAL_model__MSignature__depth, /* pointer to model:MSignature:model#MSignature#depth */
(nitmethod_t)VIRTUAL_model__MSignature__length, /* pointer to model:MSignature:model#MSignature#length */
(nitmethod_t)VIRTUAL_model__MType__collect_mclassdefs, /* pointer to model:MSignature:model#MType#collect_mclassdefs */
(nitmethod_t)VIRTUAL_model__MType__collect_mclasses, /* pointer to model:MSignature:model#MType#collect_mclasses */
(nitmethod_t)VIRTUAL_model__MType__collect_mtypes, /* pointer to model:MSignature:model#MType#collect_mtypes */
(nitmethod_t)VIRTUAL_model__MType__has_mproperty, /* pointer to model:MSignature:model#MType#has_mproperty */
(nitmethod_t)VIRTUAL_model__MType__init, /* pointer to model:MSignature:model#MType#init */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname, /* pointer to model:MSignature:nitni_base#MType#cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__cname_blind, /* pointer to model:MSignature:nitni_base#MType#cname_blind */
(nitmethod_t)VIRTUAL_nitni_base__MType__mangled_cname, /* pointer to model:MSignature:nitni_base#MType#mangled_cname */
(nitmethod_t)VIRTUAL_nitni_base__MType__is_cprimitive, /* pointer to model:MSignature:nitni_base#MType#is_cprimitive */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctype, /* pointer to model:MSignature:abstract_compiler#MType#ctype */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__ctypename, /* pointer to model:MSignature:abstract_compiler#MType#ctypename */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name, /* pointer to model:MSignature:abstract_compiler#MType#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache, /* pointer to model:MSignature:abstract_compiler#MType#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MType__c_name_cache_61d, /* pointer to model:MSignature:abstract_compiler#MType#c_name_cache= */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_type, /* pointer to model:MSignature:compiler_ffi#MType#compile_extern_type */
(nitmethod_t)VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions, /* pointer to model:MSignature:compiler_ffi#MType#compile_extern_helper_functions */
(nitmethod_t)VIRTUAL_separate_compiler__MType__const_color, /* pointer to model:MSignature:separate_compiler#MType#const_color */
(nitmethod_t)VIRTUAL_model__MSignature__mparameters, /* pointer to model:MSignature:model#MSignature#mparameters */
(nitmethod_t)VIRTUAL_model__MSignature__mparameters_61d, /* pointer to model:MSignature:model#MSignature#mparameters= */
(nitmethod_t)VIRTUAL_model__MSignature__return_mtype, /* pointer to model:MSignature:model#MSignature#return_mtype */
(nitmethod_t)VIRTUAL_model__MSignature__return_mtype_61d, /* pointer to model:MSignature:model#MSignature#return_mtype= */
(nitmethod_t)VIRTUAL_model__MSignature__init, /* pointer to model:MSignature:model#MSignature#init */
(nitmethod_t)VIRTUAL_model__MSignature__vararg_rank, /* pointer to model:MSignature:model#MSignature#vararg_rank */
(nitmethod_t)VIRTUAL_model__MSignature__vararg_rank_61d, /* pointer to model:MSignature:model#MSignature#vararg_rank= */
(nitmethod_t)VIRTUAL_model__MSignature__arity, /* pointer to model:MSignature:model#MSignature#arity */
}
};
/* allocate MSignature */
val* NEW_model__MSignature(const struct type* type) {
val* self /* : MSignature */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MSignature;
var = NULL;
self->attrs[COLOR_model__MType___64das_nullable_cache].val = var; /* @as_nullable_cache on <self:MSignature exact> */
return self;
}
/* allocate MSignature */
void CHECK_NEW_model__MSignature(val* self) {
val* var /* : nullable String */;
val* var1 /* : Array[MParameter] */;
val* var2 /* : nullable MType */;
long var3 /* : Int */;
var = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MSignature> */
var1 = self->attrs[COLOR_model__MSignature___64dmparameters].val; /* @mparameters on <self:MSignature> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mparameters");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1360);
exit(1);
}
var2 = self->attrs[COLOR_model__MSignature___64dreturn_mtype].val; /* @return_mtype on <self:MSignature> */
var3 = self->attrs[COLOR_model__MSignature___64dvararg_rank].l; /* @vararg_rank on <self:MSignature> */
}
/* runtime class model__MParameter */
const struct class class_model__MParameter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MParameter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MParameter:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MParameter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MParameter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MParameter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MParameter:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MParameter:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MParameter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MParameter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MParameter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to model:MParameter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MParameter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MParameter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MParameter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MParameter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MParameter:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MParameter:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MParameter:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MParameter:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MParameter:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MParameter:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MParameter:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MParameter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MParameter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MParameter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MParameter:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MParameter:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MParameter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MParameter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MParameter:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MParameter:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MParameter:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MParameter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MParameter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MParameter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MParameter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MParameter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MParameter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MParameter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MParameter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MParameter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MParameter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MParameter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MParameter:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MParameter:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MParameter:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MParameter:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MParameter:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MParameter:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MParameter:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MParameter__name, /* pointer to model:MParameter:model#MParameter#name */
(nitmethod_t)VIRTUAL_model__MParameter__name_61d, /* pointer to model:MParameter:model#MParameter#name= */
(nitmethod_t)VIRTUAL_model__MParameter__mtype, /* pointer to model:MParameter:model#MParameter#mtype */
(nitmethod_t)VIRTUAL_model__MParameter__mtype_61d, /* pointer to model:MParameter:model#MParameter#mtype= */
(nitmethod_t)VIRTUAL_model__MParameter__is_vararg, /* pointer to model:MParameter:model#MParameter#is_vararg */
(nitmethod_t)VIRTUAL_model__MParameter__is_vararg_61d, /* pointer to model:MParameter:model#MParameter#is_vararg= */
(nitmethod_t)VIRTUAL_model__MParameter__resolve_for, /* pointer to model:MParameter:model#MParameter#resolve_for */
(nitmethod_t)VIRTUAL_model__MParameter__init, /* pointer to model:MParameter:model#MParameter#init */
}
};
/* allocate MParameter */
val* NEW_model__MParameter(const struct type* type) {
val* self /* : MParameter */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MParameter;
return self;
}
/* allocate MParameter */
void CHECK_NEW_model__MParameter(val* self) {
val* var /* : String */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
var = self->attrs[COLOR_model__MParameter___64dname].val; /* @name on <self:MParameter> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1455);
exit(1);
}
var1 = self->attrs[COLOR_model__MParameter___64dmtype].val; /* @mtype on <self:MParameter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1458);
exit(1);
}
var2 = self->attrs[COLOR_model__MParameter___64dis_vararg].s; /* @is_vararg on <self:MParameter> */
}
/* runtime class model__MMethod */
const struct class class_model__MMethod = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MMethod:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MMethod:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MMethod:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MMethod:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MMethod:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MMethod:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MMethod:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MMethod:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MMethod:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MMethod:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MProperty__to_s, /* pointer to model:MMethod:model#MProperty#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MMethod:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MMethod:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MMethod:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MMethod:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MMethod:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MMethod:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MMethod:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MMethod:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MMethod:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MMethod:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MMethod:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MMethod:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MMethod:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MMethod:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MMethod:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MMethod:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MMethod:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MMethod:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MMethod:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MMethod:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MMethod:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MMethod:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MMethod:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MMethod:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MMethod:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MMethod:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MMethod:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MMethod:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MMethod:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MMethod:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MMethod:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MMethod:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MMethod:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MMethod:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MMethod:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MMethod:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MMethod:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MMethod:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MMethod:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MProperty__intro_mclassdef, /* pointer to model:MMethod:model#MProperty#intro_mclassdef */
(nitmethod_t)VIRTUAL_model__MProperty__intro_mclassdef_61d, /* pointer to model:MMethod:model#MProperty#intro_mclassdef= */
(nitmethod_t)VIRTUAL_model__MProperty__name, /* pointer to model:MMethod:model#MProperty#name */
(nitmethod_t)VIRTUAL_model__MProperty__name_61d, /* pointer to model:MMethod:model#MProperty#name= */
(nitmethod_t)VIRTUAL_model__MProperty__full_name, /* pointer to model:MMethod:model#MProperty#full_name */
(nitmethod_t)VIRTUAL_model__MProperty__visibility, /* pointer to model:MMethod:model#MProperty#visibility */
(nitmethod_t)VIRTUAL_model__MProperty__visibility_61d, /* pointer to model:MMethod:model#MProperty#visibility= */
(nitmethod_t)VIRTUAL_model__MProperty__init, /* pointer to model:MMethod:model#MProperty#init */
(nitmethod_t)VIRTUAL_model__MProperty__mpropdefs, /* pointer to model:MMethod:model#MProperty#mpropdefs */
(nitmethod_t)VIRTUAL_model__MProperty__mpropdefs_61d, /* pointer to model:MMethod:model#MProperty#mpropdefs= */
(nitmethod_t)VIRTUAL_model__MProperty__intro, /* pointer to model:MMethod:model#MProperty#intro */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions, /* pointer to model:MMethod:model#MProperty#lookup_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions_cache, /* pointer to model:MMethod:model#MProperty#lookup_definitions_cache */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions_cache_61d, /* pointer to model:MMethod:model#MProperty#lookup_definitions_cache= */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_super_definitions, /* pointer to model:MMethod:model#MProperty#lookup_super_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_first_definition, /* pointer to model:MMethod:model#MProperty#lookup_first_definition */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions_cache, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions_cache_61d, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name, /* pointer to model:MMethod:abstract_compiler#MProperty#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name_cache, /* pointer to model:MMethod:abstract_compiler#MProperty#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d, /* pointer to model:MMethod:abstract_compiler#MProperty#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__MProperty__const_color, /* pointer to model:MMethod:separate_compiler#MProperty#const_color */
(nitmethod_t)VIRTUAL_model__MMethod__init, /* pointer to model:MMethod:model#MMethod#init */
(nitmethod_t)VIRTUAL_model__MMethod__is_init, /* pointer to model:MMethod:model#MMethod#is_init */
(nitmethod_t)VIRTUAL_model__MMethod__is_init_61d, /* pointer to model:MMethod:model#MMethod#is_init= */
(nitmethod_t)VIRTUAL_model__MMethod__is_new, /* pointer to model:MMethod:model#MMethod#is_new */
(nitmethod_t)VIRTUAL_model__MMethod__is_new_61d, /* pointer to model:MMethod:model#MMethod#is_new= */
(nitmethod_t)VIRTUAL_model__MMethod__is_init_for, /* pointer to model:MMethod:model#MMethod#is_init_for */
(nitmethod_t)VIRTUAL_nitni_base__MMethod__short_cname, /* pointer to model:MMethod:nitni_base#MMethod#short_cname */
(nitmethod_t)VIRTUAL_nitni_utilities__MMethod__build_cname, /* pointer to model:MMethod:nitni_utilities#MMethod#build_cname */
(nitmethod_t)VIRTUAL_nitni_utilities__MMethod__build_csignature, /* pointer to model:MMethod:nitni_utilities#MMethod#build_csignature */
(nitmethod_t)VIRTUAL_nitni_utilities__MMethod__build_ccall, /* pointer to model:MMethod:nitni_utilities#MMethod#build_ccall */
(nitmethod_t)VIRTUAL_nitni_utilities__MMethod__build_ccall_from_c, /* pointer to model:MMethod:nitni_utilities#MMethod#build_ccall_from_c */
(nitmethod_t)VIRTUAL_nitni_utilities__MMethod__build_ccall_intern, /* pointer to model:MMethod:nitni_utilities#MMethod#build_ccall_intern */
}
};
/* allocate MMethod */
val* NEW_model__MMethod(const struct type* type) {
val* self /* : MMethod */;
val* var /* : Array[MMethodDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MMethod;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[MMethodDef]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_model__MProperty___64dmpropdefs].val = var; /* @mpropdefs on <self:MMethod exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var1->class->vft[COLOR_more_collections__HashMap2__init]))(var1) /* init on <var1:HashMap2[MModule, MType, Array[MMethodDef]]>*/;
CHECK_NEW_more_collections__HashMap2(var1);
self->attrs[COLOR_model__MProperty___64dlookup_definitions_cache].val = var1; /* @lookup_definitions_cache on <self:MMethod exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var2->class->vft[COLOR_more_collections__HashMap2__init]))(var2) /* init on <var2:HashMap2[MModule, MType, Array[MMethodDef]]>*/;
CHECK_NEW_more_collections__HashMap2(var2);
self->attrs[COLOR_model__MProperty___64dlookup_all_definitions_cache].val = var2; /* @lookup_all_definitions_cache on <self:MMethod exact> */
var3 = 0;
self->attrs[COLOR_model__MMethod___64dis_init].s = var3; /* @is_init on <self:MMethod exact> */
var4 = 0;
self->attrs[COLOR_model__MMethod___64dis_new].s = var4; /* @is_new on <self:MMethod exact> */
return self;
}
/* allocate MMethod */
void CHECK_NEW_model__MMethod(val* self) {
val* var /* : MClassDef */;
val* var1 /* : String */;
val* var2 /* : MVisibility */;
val* var3 /* : nullable String */;
var = self->attrs[COLOR_model__MProperty___64dintro_mclassdef].val; /* @intro_mclassdef on <self:MMethod> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1489);
exit(1);
}
var1 = self->attrs[COLOR_model__MProperty___64dname].val; /* @name on <self:MMethod> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1494);
exit(1);
}
var2 = self->attrs[COLOR_model__MProperty___64dvisibility].val; /* @visibility on <self:MMethod> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visibility");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1504);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val; /* @c_name_cache on <self:MMethod> */
}
/* runtime class model__MAttribute */
const struct class class_model__MAttribute = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MAttribute:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MAttribute:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MAttribute:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MAttribute:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MAttribute:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MAttribute:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MAttribute:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MAttribute:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MAttribute:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MAttribute:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MProperty__to_s, /* pointer to model:MAttribute:model#MProperty#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MAttribute:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MAttribute:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MAttribute:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MAttribute:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MAttribute:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MAttribute:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MAttribute:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MAttribute:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MAttribute:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MAttribute:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MAttribute:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MAttribute:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MAttribute:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MAttribute:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MAttribute:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MAttribute:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MAttribute:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MAttribute:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MAttribute:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MAttribute:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MAttribute:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MAttribute:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MAttribute:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MAttribute:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MAttribute:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MAttribute:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MAttribute:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MAttribute:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MAttribute:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MAttribute:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MAttribute:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MAttribute:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MAttribute:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MAttribute:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MAttribute:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MAttribute:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MAttribute:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MAttribute:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MAttribute:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MProperty__intro_mclassdef, /* pointer to model:MAttribute:model#MProperty#intro_mclassdef */
(nitmethod_t)VIRTUAL_model__MProperty__intro_mclassdef_61d, /* pointer to model:MAttribute:model#MProperty#intro_mclassdef= */
(nitmethod_t)VIRTUAL_model__MProperty__name, /* pointer to model:MAttribute:model#MProperty#name */
(nitmethod_t)VIRTUAL_model__MProperty__name_61d, /* pointer to model:MAttribute:model#MProperty#name= */
(nitmethod_t)VIRTUAL_model__MProperty__full_name, /* pointer to model:MAttribute:model#MProperty#full_name */
(nitmethod_t)VIRTUAL_model__MProperty__visibility, /* pointer to model:MAttribute:model#MProperty#visibility */
(nitmethod_t)VIRTUAL_model__MProperty__visibility_61d, /* pointer to model:MAttribute:model#MProperty#visibility= */
(nitmethod_t)VIRTUAL_model__MProperty__init, /* pointer to model:MAttribute:model#MProperty#init */
(nitmethod_t)VIRTUAL_model__MProperty__mpropdefs, /* pointer to model:MAttribute:model#MProperty#mpropdefs */
(nitmethod_t)VIRTUAL_model__MProperty__mpropdefs_61d, /* pointer to model:MAttribute:model#MProperty#mpropdefs= */
(nitmethod_t)VIRTUAL_model__MProperty__intro, /* pointer to model:MAttribute:model#MProperty#intro */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions_cache, /* pointer to model:MAttribute:model#MProperty#lookup_definitions_cache */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions_cache_61d, /* pointer to model:MAttribute:model#MProperty#lookup_definitions_cache= */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_super_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_super_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_first_definition, /* pointer to model:MAttribute:model#MProperty#lookup_first_definition */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions_cache, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions_cache_61d, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name, /* pointer to model:MAttribute:abstract_compiler#MProperty#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name_cache, /* pointer to model:MAttribute:abstract_compiler#MProperty#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d, /* pointer to model:MAttribute:abstract_compiler#MProperty#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__MProperty__const_color, /* pointer to model:MAttribute:separate_compiler#MProperty#const_color */
(nitmethod_t)VIRTUAL_model__MAttribute__init, /* pointer to model:MAttribute:model#MAttribute#init */
}
};
/* allocate MAttribute */
val* NEW_model__MAttribute(const struct type* type) {
val* self /* : MAttribute */;
val* var /* : Array[MAttributeDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MAttribute;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[MAttributeDef]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_model__MProperty___64dmpropdefs].val = var; /* @mpropdefs on <self:MAttribute exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var1->class->vft[COLOR_more_collections__HashMap2__init]))(var1) /* init on <var1:HashMap2[MModule, MType, Array[MAttributeDef]]>*/;
CHECK_NEW_more_collections__HashMap2(var1);
self->attrs[COLOR_model__MProperty___64dlookup_definitions_cache].val = var1; /* @lookup_definitions_cache on <self:MAttribute exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var2->class->vft[COLOR_more_collections__HashMap2__init]))(var2) /* init on <var2:HashMap2[MModule, MType, Array[MAttributeDef]]>*/;
CHECK_NEW_more_collections__HashMap2(var2);
self->attrs[COLOR_model__MProperty___64dlookup_all_definitions_cache].val = var2; /* @lookup_all_definitions_cache on <self:MAttribute exact> */
return self;
}
/* allocate MAttribute */
void CHECK_NEW_model__MAttribute(val* self) {
val* var /* : MClassDef */;
val* var1 /* : String */;
val* var2 /* : MVisibility */;
val* var3 /* : nullable String */;
var = self->attrs[COLOR_model__MProperty___64dintro_mclassdef].val; /* @intro_mclassdef on <self:MAttribute> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1489);
exit(1);
}
var1 = self->attrs[COLOR_model__MProperty___64dname].val; /* @name on <self:MAttribute> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1494);
exit(1);
}
var2 = self->attrs[COLOR_model__MProperty___64dvisibility].val; /* @visibility on <self:MAttribute> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visibility");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1504);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val; /* @c_name_cache on <self:MAttribute> */
}
/* runtime class model__MVirtualTypeProp */
const struct class class_model__MVirtualTypeProp = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MVirtualTypeProp:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MVirtualTypeProp:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MVirtualTypeProp:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MVirtualTypeProp:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MVirtualTypeProp:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MVirtualTypeProp:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MVirtualTypeProp:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MVirtualTypeProp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MVirtualTypeProp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MVirtualTypeProp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MProperty__to_s, /* pointer to model:MVirtualTypeProp:model#MProperty#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MVirtualTypeProp:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MVirtualTypeProp:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MVirtualTypeProp:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MVirtualTypeProp:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MVirtualTypeProp:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MVirtualTypeProp:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MVirtualTypeProp:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MVirtualTypeProp:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MVirtualTypeProp:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MVirtualTypeProp:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MVirtualTypeProp:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MVirtualTypeProp:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MVirtualTypeProp:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MVirtualTypeProp:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MVirtualTypeProp:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MVirtualTypeProp:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MVirtualTypeProp:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MVirtualTypeProp:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MVirtualTypeProp:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MVirtualTypeProp:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MVirtualTypeProp:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MVirtualTypeProp:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MVirtualTypeProp:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MVirtualTypeProp:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MVirtualTypeProp:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MVirtualTypeProp:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MVirtualTypeProp:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MVirtualTypeProp:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MVirtualTypeProp:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MVirtualTypeProp:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MVirtualTypeProp:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MVirtualTypeProp:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MVirtualTypeProp:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MVirtualTypeProp:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MProperty__intro_mclassdef, /* pointer to model:MVirtualTypeProp:model#MProperty#intro_mclassdef */
(nitmethod_t)VIRTUAL_model__MProperty__intro_mclassdef_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#intro_mclassdef= */
(nitmethod_t)VIRTUAL_model__MProperty__name, /* pointer to model:MVirtualTypeProp:model#MProperty#name */
(nitmethod_t)VIRTUAL_model__MProperty__name_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#name= */
(nitmethod_t)VIRTUAL_model__MProperty__full_name, /* pointer to model:MVirtualTypeProp:model#MProperty#full_name */
(nitmethod_t)VIRTUAL_model__MProperty__visibility, /* pointer to model:MVirtualTypeProp:model#MProperty#visibility */
(nitmethod_t)VIRTUAL_model__MProperty__visibility_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#visibility= */
(nitmethod_t)VIRTUAL_model__MProperty__init, /* pointer to model:MVirtualTypeProp:model#MProperty#init */
(nitmethod_t)VIRTUAL_model__MProperty__mpropdefs, /* pointer to model:MVirtualTypeProp:model#MProperty#mpropdefs */
(nitmethod_t)VIRTUAL_model__MProperty__mpropdefs_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#mpropdefs= */
(nitmethod_t)VIRTUAL_model__MProperty__intro, /* pointer to model:MVirtualTypeProp:model#MProperty#intro */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions_cache, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions_cache */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_definitions_cache_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions_cache= */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_super_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_super_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_first_definition, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_first_definition */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions_cache, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)VIRTUAL_model__MProperty__lookup_all_definitions_cache_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name, /* pointer to model:MVirtualTypeProp:abstract_compiler#MProperty#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name_cache, /* pointer to model:MVirtualTypeProp:abstract_compiler#MProperty#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d, /* pointer to model:MVirtualTypeProp:abstract_compiler#MProperty#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__MProperty__const_color, /* pointer to model:MVirtualTypeProp:separate_compiler#MProperty#const_color */
(nitmethod_t)VIRTUAL_model__MVirtualTypeProp__init, /* pointer to model:MVirtualTypeProp:model#MVirtualTypeProp#init */
(nitmethod_t)VIRTUAL_model__MVirtualTypeProp__mvirtualtype, /* pointer to model:MVirtualTypeProp:model#MVirtualTypeProp#mvirtualtype */
(nitmethod_t)VIRTUAL_model__MVirtualTypeProp__mvirtualtype_61d, /* pointer to model:MVirtualTypeProp:model#MVirtualTypeProp#mvirtualtype= */
}
};
/* allocate MVirtualTypeProp */
val* NEW_model__MVirtualTypeProp(const struct type* type) {
val* self /* : MVirtualTypeProp */;
val* var /* : Array[MVirtualTypeDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var3 /* : MVirtualType */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MVirtualTypeProp;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[MVirtualTypeDef]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_model__MProperty___64dmpropdefs].val = var; /* @mpropdefs on <self:MVirtualTypeProp exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var1->class->vft[COLOR_more_collections__HashMap2__init]))(var1) /* init on <var1:HashMap2[MModule, MType, Array[MVirtualTypeDef]]>*/;
CHECK_NEW_more_collections__HashMap2(var1);
self->attrs[COLOR_model__MProperty___64dlookup_definitions_cache].val = var1; /* @lookup_definitions_cache on <self:MVirtualTypeProp exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var2->class->vft[COLOR_more_collections__HashMap2__init]))(var2) /* init on <var2:HashMap2[MModule, MType, Array[MVirtualTypeDef]]>*/;
CHECK_NEW_more_collections__HashMap2(var2);
self->attrs[COLOR_model__MProperty___64dlookup_all_definitions_cache].val = var2; /* @lookup_all_definitions_cache on <self:MVirtualTypeProp exact> */
var3 = NEW_model__MVirtualType(&type_model__MVirtualType);
((void (*)(val*, val*))(var3->class->vft[COLOR_model__MVirtualType__init]))(var3, self) /* init on <var3:MVirtualType>*/;
CHECK_NEW_model__MVirtualType(var3);
self->attrs[COLOR_model__MVirtualTypeProp___64dmvirtualtype].val = var3; /* @mvirtualtype on <self:MVirtualTypeProp exact> */
return self;
}
/* allocate MVirtualTypeProp */
void CHECK_NEW_model__MVirtualTypeProp(val* self) {
val* var /* : MClassDef */;
val* var1 /* : String */;
val* var2 /* : MVisibility */;
val* var3 /* : nullable String */;
var = self->attrs[COLOR_model__MProperty___64dintro_mclassdef].val; /* @intro_mclassdef on <self:MVirtualTypeProp> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1489);
exit(1);
}
var1 = self->attrs[COLOR_model__MProperty___64dname].val; /* @name on <self:MVirtualTypeProp> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1494);
exit(1);
}
var2 = self->attrs[COLOR_model__MProperty___64dvisibility].val; /* @visibility on <self:MVirtualTypeProp> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visibility");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1504);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val; /* @c_name_cache on <self:MVirtualTypeProp> */
}
/* runtime class model__MMethodDef */
const struct class class_model__MMethodDef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MMethodDef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MMethodDef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MMethodDef:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MMethodDef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MMethodDef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MMethodDef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MMethodDef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MMethodDef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MMethodDef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MMethodDef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MPropDef__to_s, /* pointer to model:MMethodDef:model#MPropDef#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MMethodDef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MMethodDef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MMethodDef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MMethodDef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MMethodDef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MMethodDef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MMethodDef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MMethodDef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MMethodDef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MMethodDef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MMethodDef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MMethodDef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MMethodDef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MMethodDef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MMethodDef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MMethodDef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MMethodDef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MMethodDef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MMethodDef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MMethodDef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MMethodDef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MMethodDef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MMethodDef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MMethodDef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MMethodDef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MMethodDef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MMethodDef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MMethodDef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MMethodDef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MMethodDef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MMethodDef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MMethodDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MMethodDef:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MMethodDef:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MMethodDef:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MMethodDef:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MMethodDef:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MMethodDef:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MMethodDef:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MPropDef__location, /* pointer to model:MMethodDef:model#MPropDef#location */
(nitmethod_t)VIRTUAL_model__MPropDef__location_61d, /* pointer to model:MMethodDef:model#MPropDef#location= */
(nitmethod_t)VIRTUAL_model__MPropDef__mclassdef, /* pointer to model:MMethodDef:model#MPropDef#mclassdef */
(nitmethod_t)VIRTUAL_model__MPropDef__mclassdef_61d, /* pointer to model:MMethodDef:model#MPropDef#mclassdef= */
(nitmethod_t)VIRTUAL_model__MPropDef__mproperty, /* pointer to model:MMethodDef:model#MPropDef#mproperty */
(nitmethod_t)VIRTUAL_model__MPropDef__mproperty_61d, /* pointer to model:MMethodDef:model#MPropDef#mproperty= */
(nitmethod_t)VIRTUAL_model__MPropDef__init, /* pointer to model:MMethodDef:model#MPropDef#init */
(nitmethod_t)VIRTUAL_model__MPropDef__to_s_61d, /* pointer to model:MMethodDef:model#MPropDef#to_s= */
(nitmethod_t)VIRTUAL_model__MPropDef__is_intro, /* pointer to model:MMethodDef:model#MPropDef#is_intro */
(nitmethod_t)VIRTUAL_model__MPropDef__lookup_next_definition, /* pointer to model:MMethodDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)VIRTUAL_typing__MPropDef__has_supercall, /* pointer to model:MMethodDef:typing#MPropDef#has_supercall */
(nitmethod_t)VIRTUAL_typing__MPropDef__has_supercall_61d, /* pointer to model:MMethodDef:typing#MPropDef#has_supercall= */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name_cache, /* pointer to model:MMethodDef:abstract_compiler#MPropDef#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d, /* pointer to model:MMethodDef:abstract_compiler#MPropDef#c_name_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name, /* pointer to model:MMethodDef:abstract_compiler#MPropDef#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__MPropDef__const_color, /* pointer to model:MMethodDef:separate_compiler#MPropDef#const_color */
(nitmethod_t)VIRTUAL_model__MMethodDef__init, /* pointer to model:MMethodDef:model#MMethodDef#init */
(nitmethod_t)VIRTUAL_model__MMethodDef__msignature, /* pointer to model:MMethodDef:model#MMethodDef#msignature */
(nitmethod_t)VIRTUAL_model__MMethodDef__msignature_61d, /* pointer to model:MMethodDef:model#MMethodDef#msignature= */
(nitmethod_t)VIRTUAL_model__MMethodDef__is_abstract, /* pointer to model:MMethodDef:model#MMethodDef#is_abstract */
(nitmethod_t)VIRTUAL_model__MMethodDef__is_abstract_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_abstract= */
(nitmethod_t)VIRTUAL_nitni_base__MMethodDef__cname, /* pointer to model:MMethodDef:nitni_base#MMethodDef#cname */
(nitmethod_t)VIRTUAL_nitni_base__MMethodDef__impl_cname, /* pointer to model:MMethodDef:nitni_base#MMethodDef#impl_cname */
(nitmethod_t)VIRTUAL_nitni_base__MMethodDef__super_cname, /* pointer to model:MMethodDef:nitni_base#MMethodDef#super_cname */
(nitmethod_t)VIRTUAL_abstract_compiler__MMethodDef__can_inline, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#can_inline */
(nitmethod_t)VIRTUAL_abstract_compiler__MMethodDef__compile_inside_to_c, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#compile_inside_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__MMethodDef__compile_parameter_check, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#compile_parameter_check */
(nitmethod_t)VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function */
(nitmethod_t)VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function_cache */
(nitmethod_t)VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function */
(nitmethod_t)VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function_cache */
(nitmethod_t)VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function_cache= */
}
};
/* allocate MMethodDef */
val* NEW_model__MMethodDef(const struct type* type) {
val* self /* : MMethodDef */;
short int var /* : Bool */;
val* var1 /* : null */;
short int var2 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MMethodDef;
var = 0;
self->attrs[COLOR_typing__MPropDef___64dhas_supercall].s = var; /* @has_supercall on <self:MMethodDef exact> */
var1 = NULL;
self->attrs[COLOR_model__MMethodDef___64dmsignature].val = var1; /* @msignature on <self:MMethodDef exact> */
var2 = 0;
self->attrs[COLOR_model__MMethodDef___64dis_abstract].s = var2; /* @is_abstract on <self:MMethodDef exact> */
return self;
}
/* allocate MMethodDef */
void CHECK_NEW_model__MMethodDef(val* self) {
val* var /* : Location */;
val* var1 /* : MClassDef */;
val* var2 /* : MProperty */;
val* var3 /* : String */;
val* var4 /* : nullable String */;
val* var5 /* : nullable SeparateRuntimeFunction */;
val* var6 /* : nullable VirtualRuntimeFunction */;
var = self->attrs[COLOR_model__MPropDef___64dlocation].val; /* @location on <self:MMethodDef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1779);
exit(1);
}
var1 = self->attrs[COLOR_model__MPropDef___64dmclassdef].val; /* @mclassdef on <self:MMethodDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1782);
exit(1);
}
var2 = self->attrs[COLOR_model__MPropDef___64dmproperty].val; /* @mproperty on <self:MMethodDef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1785);
exit(1);
}
var3 = self->attrs[COLOR_model__MPropDef___64dto_s].val; /* @to_s on <self:MMethodDef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1798);
exit(1);
}
var4 = self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val; /* @c_name_cache on <self:MMethodDef> */
var5 = self->attrs[COLOR_separate_compiler__MMethodDef___64dseparate_runtime_function_cache].val; /* @separate_runtime_function_cache on <self:MMethodDef> */
var6 = self->attrs[COLOR_separate_compiler__MMethodDef___64dvirtual_runtime_function_cache].val; /* @virtual_runtime_function_cache on <self:MMethodDef> */
}
/* runtime class model__MAttributeDef */
const struct class class_model__MAttributeDef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MAttributeDef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MAttributeDef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MAttributeDef:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MAttributeDef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MAttributeDef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MAttributeDef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MAttributeDef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MAttributeDef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MAttributeDef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MAttributeDef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MPropDef__to_s, /* pointer to model:MAttributeDef:model#MPropDef#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MAttributeDef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MAttributeDef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MAttributeDef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MAttributeDef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MAttributeDef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MAttributeDef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MAttributeDef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MAttributeDef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MAttributeDef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MAttributeDef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MAttributeDef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MAttributeDef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MAttributeDef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MAttributeDef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MAttributeDef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MAttributeDef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MAttributeDef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MAttributeDef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MAttributeDef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MAttributeDef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MAttributeDef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MAttributeDef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MAttributeDef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MAttributeDef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MAttributeDef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MAttributeDef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MAttributeDef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MAttributeDef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MAttributeDef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MAttributeDef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MAttributeDef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MAttributeDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MAttributeDef:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MAttributeDef:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MAttributeDef:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MAttributeDef:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MAttributeDef:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MAttributeDef:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MAttributeDef:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MPropDef__location, /* pointer to model:MAttributeDef:model#MPropDef#location */
(nitmethod_t)VIRTUAL_model__MPropDef__location_61d, /* pointer to model:MAttributeDef:model#MPropDef#location= */
(nitmethod_t)VIRTUAL_model__MPropDef__mclassdef, /* pointer to model:MAttributeDef:model#MPropDef#mclassdef */
(nitmethod_t)VIRTUAL_model__MPropDef__mclassdef_61d, /* pointer to model:MAttributeDef:model#MPropDef#mclassdef= */
(nitmethod_t)VIRTUAL_model__MPropDef__mproperty, /* pointer to model:MAttributeDef:model#MPropDef#mproperty */
(nitmethod_t)VIRTUAL_model__MPropDef__mproperty_61d, /* pointer to model:MAttributeDef:model#MPropDef#mproperty= */
(nitmethod_t)VIRTUAL_model__MPropDef__init, /* pointer to model:MAttributeDef:model#MPropDef#init */
(nitmethod_t)VIRTUAL_model__MPropDef__to_s_61d, /* pointer to model:MAttributeDef:model#MPropDef#to_s= */
(nitmethod_t)VIRTUAL_model__MPropDef__is_intro, /* pointer to model:MAttributeDef:model#MPropDef#is_intro */
(nitmethod_t)VIRTUAL_model__MPropDef__lookup_next_definition, /* pointer to model:MAttributeDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)VIRTUAL_typing__MPropDef__has_supercall, /* pointer to model:MAttributeDef:typing#MPropDef#has_supercall */
(nitmethod_t)VIRTUAL_typing__MPropDef__has_supercall_61d, /* pointer to model:MAttributeDef:typing#MPropDef#has_supercall= */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name_cache, /* pointer to model:MAttributeDef:abstract_compiler#MPropDef#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d, /* pointer to model:MAttributeDef:abstract_compiler#MPropDef#c_name_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name, /* pointer to model:MAttributeDef:abstract_compiler#MPropDef#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__MPropDef__const_color, /* pointer to model:MAttributeDef:separate_compiler#MPropDef#const_color */
(nitmethod_t)VIRTUAL_model__MAttributeDef__init, /* pointer to model:MAttributeDef:model#MAttributeDef#init */
(nitmethod_t)VIRTUAL_model__MAttributeDef__static_mtype, /* pointer to model:MAttributeDef:model#MAttributeDef#static_mtype */
(nitmethod_t)VIRTUAL_model__MAttributeDef__static_mtype_61d, /* pointer to model:MAttributeDef:model#MAttributeDef#static_mtype= */
}
};
/* allocate MAttributeDef */
val* NEW_model__MAttributeDef(const struct type* type) {
val* self /* : MAttributeDef */;
short int var /* : Bool */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MAttributeDef;
var = 0;
self->attrs[COLOR_typing__MPropDef___64dhas_supercall].s = var; /* @has_supercall on <self:MAttributeDef exact> */
var1 = NULL;
self->attrs[COLOR_model__MAttributeDef___64dstatic_mtype].val = var1; /* @static_mtype on <self:MAttributeDef exact> */
return self;
}
/* allocate MAttributeDef */
void CHECK_NEW_model__MAttributeDef(val* self) {
val* var /* : Location */;
val* var1 /* : MClassDef */;
val* var2 /* : MProperty */;
val* var3 /* : String */;
val* var4 /* : nullable String */;
var = self->attrs[COLOR_model__MPropDef___64dlocation].val; /* @location on <self:MAttributeDef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1779);
exit(1);
}
var1 = self->attrs[COLOR_model__MPropDef___64dmclassdef].val; /* @mclassdef on <self:MAttributeDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1782);
exit(1);
}
var2 = self->attrs[COLOR_model__MPropDef___64dmproperty].val; /* @mproperty on <self:MAttributeDef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1785);
exit(1);
}
var3 = self->attrs[COLOR_model__MPropDef___64dto_s].val; /* @to_s on <self:MAttributeDef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1798);
exit(1);
}
var4 = self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val; /* @c_name_cache on <self:MAttributeDef> */
}
/* runtime class model__MVirtualTypeDef */
const struct class class_model__MVirtualTypeDef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MVirtualTypeDef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MVirtualTypeDef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MVirtualTypeDef:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MVirtualTypeDef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MVirtualTypeDef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MVirtualTypeDef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MVirtualTypeDef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MVirtualTypeDef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MVirtualTypeDef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MVirtualTypeDef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MPropDef__to_s, /* pointer to model:MVirtualTypeDef:model#MPropDef#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MVirtualTypeDef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MVirtualTypeDef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MVirtualTypeDef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MVirtualTypeDef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MVirtualTypeDef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MVirtualTypeDef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MVirtualTypeDef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MVirtualTypeDef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MVirtualTypeDef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MVirtualTypeDef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MVirtualTypeDef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MVirtualTypeDef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MVirtualTypeDef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MVirtualTypeDef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MVirtualTypeDef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MVirtualTypeDef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MVirtualTypeDef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MVirtualTypeDef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MVirtualTypeDef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MVirtualTypeDef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MVirtualTypeDef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MVirtualTypeDef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MVirtualTypeDef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MVirtualTypeDef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MVirtualTypeDef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MVirtualTypeDef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MVirtualTypeDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MVirtualTypeDef:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MVirtualTypeDef:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MVirtualTypeDef:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MVirtualTypeDef:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MVirtualTypeDef:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MVirtualTypeDef:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MVirtualTypeDef:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MPropDef__location, /* pointer to model:MVirtualTypeDef:model#MPropDef#location */
(nitmethod_t)VIRTUAL_model__MPropDef__location_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#location= */
(nitmethod_t)VIRTUAL_model__MPropDef__mclassdef, /* pointer to model:MVirtualTypeDef:model#MPropDef#mclassdef */
(nitmethod_t)VIRTUAL_model__MPropDef__mclassdef_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#mclassdef= */
(nitmethod_t)VIRTUAL_model__MPropDef__mproperty, /* pointer to model:MVirtualTypeDef:model#MPropDef#mproperty */
(nitmethod_t)VIRTUAL_model__MPropDef__mproperty_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#mproperty= */
(nitmethod_t)VIRTUAL_model__MPropDef__init, /* pointer to model:MVirtualTypeDef:model#MPropDef#init */
(nitmethod_t)VIRTUAL_model__MPropDef__to_s_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#to_s= */
(nitmethod_t)VIRTUAL_model__MPropDef__is_intro, /* pointer to model:MVirtualTypeDef:model#MPropDef#is_intro */
(nitmethod_t)VIRTUAL_model__MPropDef__lookup_next_definition, /* pointer to model:MVirtualTypeDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)VIRTUAL_typing__MPropDef__has_supercall, /* pointer to model:MVirtualTypeDef:typing#MPropDef#has_supercall */
(nitmethod_t)VIRTUAL_typing__MPropDef__has_supercall_61d, /* pointer to model:MVirtualTypeDef:typing#MPropDef#has_supercall= */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name_cache, /* pointer to model:MVirtualTypeDef:abstract_compiler#MPropDef#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d, /* pointer to model:MVirtualTypeDef:abstract_compiler#MPropDef#c_name_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__MPropDef__c_name, /* pointer to model:MVirtualTypeDef:abstract_compiler#MPropDef#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__MPropDef__const_color, /* pointer to model:MVirtualTypeDef:separate_compiler#MPropDef#const_color */
(nitmethod_t)VIRTUAL_model__MVirtualTypeDef__init, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#init */
(nitmethod_t)VIRTUAL_model__MVirtualTypeDef__bound, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#bound */
(nitmethod_t)VIRTUAL_model__MVirtualTypeDef__bound_61d, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#bound= */
}
};
/* allocate MVirtualTypeDef */
val* NEW_model__MVirtualTypeDef(const struct type* type) {
val* self /* : MVirtualTypeDef */;
short int var /* : Bool */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MVirtualTypeDef;
var = 0;
self->attrs[COLOR_typing__MPropDef___64dhas_supercall].s = var; /* @has_supercall on <self:MVirtualTypeDef exact> */
var1 = NULL;
self->attrs[COLOR_model__MVirtualTypeDef___64dbound].val = var1; /* @bound on <self:MVirtualTypeDef exact> */
return self;
}
/* allocate MVirtualTypeDef */
void CHECK_NEW_model__MVirtualTypeDef(val* self) {
val* var /* : Location */;
val* var1 /* : MClassDef */;
val* var2 /* : MProperty */;
val* var3 /* : String */;
val* var4 /* : nullable String */;
var = self->attrs[COLOR_model__MPropDef___64dlocation].val; /* @location on <self:MVirtualTypeDef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1779);
exit(1);
}
var1 = self->attrs[COLOR_model__MPropDef___64dmclassdef].val; /* @mclassdef on <self:MVirtualTypeDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1782);
exit(1);
}
var2 = self->attrs[COLOR_model__MPropDef___64dmproperty].val; /* @mproperty on <self:MVirtualTypeDef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1785);
exit(1);
}
var3 = self->attrs[COLOR_model__MPropDef___64dto_s].val; /* @to_s on <self:MVirtualTypeDef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1798);
exit(1);
}
var4 = self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val; /* @c_name_cache on <self:MVirtualTypeDef> */
}
/* runtime class model__MClassKind */
const struct class class_model__MClassKind = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClassKind:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model:MClassKind:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClassKind:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClassKind:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClassKind:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model:MClassKind:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model:MClassKind:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClassKind:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClassKind:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClassKind:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MClassKind__to_s, /* pointer to model:MClassKind:model#MClassKind#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClassKind:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClassKind:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClassKind:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClassKind:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClassKind:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model:MClassKind:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model:MClassKind:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model:MClassKind:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model:MClassKind:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model:MClassKind:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model:MClassKind:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClassKind:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClassKind:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClassKind:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model:MClassKind:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model:MClassKind:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClassKind:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClassKind:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model:MClassKind:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model:MClassKind:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model:MClassKind:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClassKind:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClassKind:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClassKind:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClassKind:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClassKind:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClassKind:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClassKind:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClassKind:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClassKind:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClassKind:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model:MClassKind:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model:MClassKind:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model:MClassKind:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model:MClassKind:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model:MClassKind:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model:MClassKind:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model:MClassKind:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model:MClassKind:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model__MClassKind__to_s_61d, /* pointer to model:MClassKind:model#MClassKind#to_s= */
(nitmethod_t)VIRTUAL_model__MClassKind__need_init, /* pointer to model:MClassKind:model#MClassKind#need_init */
(nitmethod_t)VIRTUAL_model__MClassKind__need_init_61d, /* pointer to model:MClassKind:model#MClassKind#need_init= */
(nitmethod_t)VIRTUAL_model__MClassKind__init, /* pointer to model:MClassKind:model#MClassKind#init */
}
};
/* allocate MClassKind */
val* NEW_model__MClassKind(const struct type* type) {
val* self /* : MClassKind */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClassKind;
return self;
}
/* allocate MClassKind */
void CHECK_NEW_model__MClassKind(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
var = self->attrs[COLOR_model__MClassKind___64dto_s].val; /* @to_s on <self:MClassKind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1886);
exit(1);
}
var1 = self->attrs[COLOR_model__MClassKind___64dneed_init].s; /* @need_init on <self:MClassKind> */
}
/* runtime class poset__POSet */
const struct class class_poset__POSet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to poset:POSet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to poset:POSet:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to poset:POSet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to poset:POSet:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to poset:POSet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to poset:POSet:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to poset:POSet:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to poset:POSet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to poset:POSet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to poset:POSet:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to poset:POSet:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to poset:POSet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to poset:POSet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to poset:POSet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to poset:POSet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to poset:POSet:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to poset:POSet:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to poset:POSet:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to poset:POSet:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to poset:POSet:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to poset:POSet:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to poset:POSet:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to poset:POSet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to poset:POSet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to poset:POSet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to poset:POSet:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to poset:POSet:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to poset:POSet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to poset:POSet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to poset:POSet:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to poset:POSet:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to poset:POSet:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to poset:POSet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to poset:POSet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to poset:POSet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to poset:POSet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to poset:POSet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to poset:POSet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to poset:POSet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to poset:POSet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to poset:POSet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to poset:POSet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to poset:POSet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to poset:POSet:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to poset:POSet:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to poset:POSet:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to poset:POSet:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to poset:POSet:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to poset:POSet:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to poset:POSet:cpp#Object#from_cpp_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_poset__POSet__iterator, /* pointer to poset:POSet:poset#POSet#iterator */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__is_empty, /* pointer to poset:POSet:abstract_collection#Collection#is_empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__length, /* pointer to poset:POSet:abstract_collection#Collection#length */
(nitmethod_t)VIRTUAL_poset__POSet__has, /* pointer to poset:POSet:poset#POSet#has */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_only, /* pointer to poset:POSet:abstract_collection#Collection#has_only */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__count, /* pointer to poset:POSet:abstract_collection#Collection#count */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__first, /* pointer to poset:POSet:abstract_collection#Collection#first */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to poset:POSet:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to poset:POSet:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to poset:POSet:string#Collection#join */
(nitmethod_t)VIRTUAL_math__Collection__rand, /* pointer to poset:POSet:math#Collection#rand */
(nitmethod_t)VIRTUAL_poset__POSet__compare, /* pointer to poset:POSet:poset#POSet#compare */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__sort, /* pointer to poset:POSet:sorter#AbstractSorter#sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__sub_sort, /* pointer to poset:POSet:sorter#AbstractSorter#sub_sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__quick_sort, /* pointer to poset:POSet:sorter#AbstractSorter#quick_sort */
(nitmethod_t)VIRTUAL_sorter__AbstractSorter__bubble_sort, /* pointer to poset:POSet:sorter#AbstractSorter#bubble_sort */
(nitmethod_t)VIRTUAL_poset__POSet__elements, /* pointer to poset:POSet:poset#POSet#elements */
(nitmethod_t)VIRTUAL_poset__POSet__elements_61d, /* pointer to poset:POSet:poset#POSet#elements= */
(nitmethod_t)VIRTUAL_poset__POSet__add_node, /* pointer to poset:POSet:poset#POSet#add_node */
(nitmethod_t)VIRTUAL_poset__POSet___91d_93d, /* pointer to poset:POSet:poset#POSet#[] */
(nitmethod_t)VIRTUAL_poset__POSet__add_edge, /* pointer to poset:POSet:poset#POSet#add_edge */
(nitmethod_t)VIRTUAL_poset__POSet__has_edge, /* pointer to poset:POSet:poset#POSet#has_edge */
(nitmethod_t)VIRTUAL_poset__POSet__has_direct_edge, /* pointer to poset:POSet:poset#POSet#has_direct_edge */
(nitmethod_t)VIRTUAL_poset__POSet__show_dot, /* pointer to poset:POSet:poset#POSet#show_dot */
(nitmethod_t)VIRTUAL_poset__POSet__init, /* pointer to poset:POSet:poset#POSet#init */
}
};
/* allocate POSet[Object] */
val* NEW_poset__POSet(const struct type* type) {
val* self /* : POSet[Object] */;
val* var /* : HashMap[Object, POSetElement[Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSet;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapposet__POSet_FT0poset__POSetElementposet__POSet_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, POSetElement[Object]]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_poset__POSet___64delements].val = var; /* @elements on <self:POSet[Object] exact> */
return self;
}
/* allocate POSet[Object] */
void CHECK_NEW_poset__POSet(val* self) {
}
/* runtime class poset__POSetElement */
const struct class class_poset__POSetElement = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to poset:POSetElement:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to poset:POSetElement:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to poset:POSetElement:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to poset:POSetElement:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to poset:POSetElement:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to poset:POSetElement:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to poset:POSetElement:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to poset:POSetElement:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to poset:POSetElement:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to poset:POSetElement:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to poset:POSetElement:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to poset:POSetElement:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to poset:POSetElement:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to poset:POSetElement:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to poset:POSetElement:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to poset:POSetElement:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to poset:POSetElement:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to poset:POSetElement:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to poset:POSetElement:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to poset:POSetElement:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to poset:POSetElement:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to poset:POSetElement:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to poset:POSetElement:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to poset:POSetElement:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to poset:POSetElement:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to poset:POSetElement:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to poset:POSetElement:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to poset:POSetElement:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to poset:POSetElement:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to poset:POSetElement:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to poset:POSetElement:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to poset:POSetElement:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to poset:POSetElement:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to poset:POSetElement:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to poset:POSetElement:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to poset:POSetElement:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to poset:POSetElement:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to poset:POSetElement:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to poset:POSetElement:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to poset:POSetElement:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to poset:POSetElement:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to poset:POSetElement:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to poset:POSetElement:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to poset:POSetElement:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to poset:POSetElement:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to poset:POSetElement:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to poset:POSetElement:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to poset:POSetElement:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to poset:POSetElement:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to poset:POSetElement:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_poset__POSetElement__poset, /* pointer to poset:POSetElement:poset#POSetElement#poset */
(nitmethod_t)VIRTUAL_poset__POSetElement__poset_61d, /* pointer to poset:POSetElement:poset#POSetElement#poset= */
(nitmethod_t)VIRTUAL_poset__POSetElement__element, /* pointer to poset:POSetElement:poset#POSetElement#element */
(nitmethod_t)VIRTUAL_poset__POSetElement__element_61d, /* pointer to poset:POSetElement:poset#POSetElement#element= */
(nitmethod_t)VIRTUAL_poset__POSetElement__tos, /* pointer to poset:POSetElement:poset#POSetElement#tos */
(nitmethod_t)VIRTUAL_poset__POSetElement__tos_61d, /* pointer to poset:POSetElement:poset#POSetElement#tos= */
(nitmethod_t)VIRTUAL_poset__POSetElement__froms, /* pointer to poset:POSetElement:poset#POSetElement#froms */
(nitmethod_t)VIRTUAL_poset__POSetElement__froms_61d, /* pointer to poset:POSetElement:poset#POSetElement#froms= */
(nitmethod_t)VIRTUAL_poset__POSetElement__dtos, /* pointer to poset:POSetElement:poset#POSetElement#dtos */
(nitmethod_t)VIRTUAL_poset__POSetElement__dtos_61d, /* pointer to poset:POSetElement:poset#POSetElement#dtos= */
(nitmethod_t)VIRTUAL_poset__POSetElement__dfroms, /* pointer to poset:POSetElement:poset#POSetElement#dfroms */
(nitmethod_t)VIRTUAL_poset__POSetElement__dfroms_61d, /* pointer to poset:POSetElement:poset#POSetElement#dfroms= */
(nitmethod_t)VIRTUAL_poset__POSetElement__count, /* pointer to poset:POSetElement:poset#POSetElement#count */
(nitmethod_t)VIRTUAL_poset__POSetElement__count_61d, /* pointer to poset:POSetElement:poset#POSetElement#count= */
(nitmethod_t)VIRTUAL_poset__POSetElement__greaters, /* pointer to poset:POSetElement:poset#POSetElement#greaters */
(nitmethod_t)VIRTUAL_poset__POSetElement__direct_greaters, /* pointer to poset:POSetElement:poset#POSetElement#direct_greaters */
(nitmethod_t)VIRTUAL_poset__POSetElement__smallers, /* pointer to poset:POSetElement:poset#POSetElement#smallers */
(nitmethod_t)VIRTUAL_poset__POSetElement__direct_smallers, /* pointer to poset:POSetElement:poset#POSetElement#direct_smallers */
(nitmethod_t)VIRTUAL_poset__POSetElement___60d_61d, /* pointer to poset:POSetElement:poset#POSetElement#<= */
(nitmethod_t)VIRTUAL_poset__POSetElement___60d, /* pointer to poset:POSetElement:poset#POSetElement#< */
(nitmethod_t)VIRTUAL_poset__POSetElement__init, /* pointer to poset:POSetElement:poset#POSetElement#init */
}
};
/* allocate POSetElement[Object] */
val* NEW_poset__POSetElement(const struct type* type) {
val* self /* : POSetElement[Object] */;
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSetElement;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_poset__POSetElement___64dtos].val = var; /* @tos on <self:POSetElement[Object] exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_poset__POSetElement___64dfroms].val = var1; /* @froms on <self:POSetElement[Object] exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_poset__POSetElement___64ddtos].val = var2; /* @dtos on <self:POSetElement[Object] exact> */
var3 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashSet__init]))(var3) /* init on <var3:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var3);
self->attrs[COLOR_poset__POSetElement___64ddfroms].val = var3; /* @dfroms on <self:POSetElement[Object] exact> */
return self;
}
/* allocate POSetElement[Object] */
void CHECK_NEW_poset__POSetElement(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : Object */;
long var2 /* : Int */;
var = self->attrs[COLOR_poset__POSetElement___64dposet].val; /* @poset on <self:POSetElement[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 181);
exit(1);
}
var1 = self->attrs[COLOR_poset__POSetElement___64delement].val; /* @element on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @element");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 184);
exit(1);
}
var2 = self->attrs[COLOR_poset__POSetElement___64dcount].l; /* @count on <self:POSetElement[Object]> */
}
/* runtime class model_base__Model */
const struct class class_model_base__Model = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model_base:Model:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model_base:Model:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model_base:Model:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model_base:Model:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model_base:Model:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model_base:Model:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model_base:Model:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model_base:Model:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model_base:Model:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model_base:Model:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to model_base:Model:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model_base:Model:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model_base:Model:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model_base:Model:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model_base:Model:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model_base:Model:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model_base:Model:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model_base:Model:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model_base:Model:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model_base:Model:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model_base:Model:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model_base:Model:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model_base:Model:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model_base:Model:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model_base:Model:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model_base:Model:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model_base:Model:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model_base:Model:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model_base:Model:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model_base:Model:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model_base:Model:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model_base:Model:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model_base:Model:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model_base:Model:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model_base:Model:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model_base:Model:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model_base:Model:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model_base:Model:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model_base:Model:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model_base:Model:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model_base:Model:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model_base:Model:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model_base:Model:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model_base:Model:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model_base:Model:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model_base:Model:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model_base:Model:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model_base:Model:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model_base:Model:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model_base:Model:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model_base__Model__mmodules, /* pointer to model_base:Model:model_base#Model#mmodules */
(nitmethod_t)VIRTUAL_model_base__Model__mmodules_61d, /* pointer to model_base:Model:model_base#Model#mmodules= */
(nitmethod_t)VIRTUAL_model_base__Model__mmodule_nesting_hierarchy, /* pointer to model_base:Model:model_base#Model#mmodule_nesting_hierarchy */
(nitmethod_t)VIRTUAL_model_base__Model__mmodule_nesting_hierarchy_61d, /* pointer to model_base:Model:model_base#Model#mmodule_nesting_hierarchy= */
(nitmethod_t)VIRTUAL_model_base__Model__mmodule_importation_hierarchy, /* pointer to model_base:Model:model_base#Model#mmodule_importation_hierarchy */
(nitmethod_t)VIRTUAL_model_base__Model__mmodule_importation_hierarchy_61d, /* pointer to model_base:Model:model_base#Model#mmodule_importation_hierarchy= */
(nitmethod_t)VIRTUAL_model_base__Model__mmodules_by_name, /* pointer to model_base:Model:model_base#Model#mmodules_by_name */
(nitmethod_t)VIRTUAL_model_base__Model__mmodules_by_name_61d, /* pointer to model_base:Model:model_base#Model#mmodules_by_name= */
(nitmethod_t)VIRTUAL_model_base__Model__get_mmodules_by_name, /* pointer to model_base:Model:model_base#Model#get_mmodules_by_name */
(nitmethod_t)VIRTUAL_model_base__Model__init, /* pointer to model_base:Model:model_base#Model#init */
(nitmethod_t)VIRTUAL_model__Model__mclasses, /* pointer to model_base:Model:model#Model#mclasses */
(nitmethod_t)VIRTUAL_model__Model__mclasses_61d, /* pointer to model_base:Model:model#Model#mclasses= */
(nitmethod_t)VIRTUAL_model__Model__mproperties, /* pointer to model_base:Model:model#Model#mproperties */
(nitmethod_t)VIRTUAL_model__Model__mproperties_61d, /* pointer to model_base:Model:model#Model#mproperties= */
(nitmethod_t)VIRTUAL_model__Model__mclassdef_hierarchy, /* pointer to model_base:Model:model#Model#mclassdef_hierarchy */
(nitmethod_t)VIRTUAL_model__Model__mclassdef_hierarchy_61d, /* pointer to model_base:Model:model#Model#mclassdef_hierarchy= */
(nitmethod_t)VIRTUAL_model__Model__intro_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#intro_mtype_specialization_hierarchy */
(nitmethod_t)VIRTUAL_model__Model__intro_mtype_specialization_hierarchy_61d, /* pointer to model_base:Model:model#Model#intro_mtype_specialization_hierarchy= */
(nitmethod_t)VIRTUAL_model__Model__full_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#full_mtype_specialization_hierarchy */
(nitmethod_t)VIRTUAL_model__Model__full_mtype_specialization_hierarchy_61d, /* pointer to model_base:Model:model#Model#full_mtype_specialization_hierarchy= */
(nitmethod_t)VIRTUAL_model__Model__mclasses_by_name, /* pointer to model_base:Model:model#Model#mclasses_by_name */
(nitmethod_t)VIRTUAL_model__Model__mclasses_by_name_61d, /* pointer to model_base:Model:model#Model#mclasses_by_name= */
(nitmethod_t)VIRTUAL_model__Model__get_mclasses_by_name, /* pointer to model_base:Model:model#Model#get_mclasses_by_name */
(nitmethod_t)VIRTUAL_model__Model__mproperties_by_name, /* pointer to model_base:Model:model#Model#mproperties_by_name */
(nitmethod_t)VIRTUAL_model__Model__mproperties_by_name_61d, /* pointer to model_base:Model:model#Model#mproperties_by_name= */
(nitmethod_t)VIRTUAL_model__Model__get_mproperties_by_name, /* pointer to model_base:Model:model#Model#get_mproperties_by_name */
(nitmethod_t)VIRTUAL_model__Model__null_type, /* pointer to model_base:Model:model#Model#null_type */
(nitmethod_t)VIRTUAL_model__Model__null_type_61d, /* pointer to model_base:Model:model#Model#null_type= */
}
};
/* allocate Model */
val* NEW_model_base__Model(const struct type* type) {
val* self /* : Model */;
val* var /* : Array[MModule] */;
val* var1 /* : POSet[MModule] */;
val* var2 /* : POSet[MModule] */;
val* var3 /* : MultiHashMap[String, MModule] */;
val* var4 /* : Array[MClass] */;
val* var5 /* : Array[MProperty] */;
val* var6 /* : POSet[MClassDef] */;
val* var7 /* : POSet[MClassType] */;
val* var8 /* : POSet[MClassType] */;
val* var9 /* : MultiHashMap[String, MClass] */;
val* var10 /* : MultiHashMap[String, MProperty] */;
val* var11 /* : MNullType */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model_base__Model;
var = NEW_array__Array(&type_array__Arraymodel_base__MModule);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[MModule]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_model_base__Model___64dmmodules].val = var; /* @mmodules on <self:Model exact> */
var1 = NEW_poset__POSet(&type_poset__POSetmodel_base__MModule);
((void (*)(val*))(var1->class->vft[COLOR_poset__POSet__init]))(var1) /* init on <var1:POSet[MModule]>*/;
CHECK_NEW_poset__POSet(var1);
self->attrs[COLOR_model_base__Model___64dmmodule_nesting_hierarchy].val = var1; /* @mmodule_nesting_hierarchy on <self:Model exact> */
var2 = NEW_poset__POSet(&type_poset__POSetmodel_base__MModule);
((void (*)(val*))(var2->class->vft[COLOR_poset__POSet__init]))(var2) /* init on <var2:POSet[MModule]>*/;
CHECK_NEW_poset__POSet(var2);
self->attrs[COLOR_model_base__Model___64dmmodule_importation_hierarchy].val = var2; /* @mmodule_importation_hierarchy on <self:Model exact> */
var3 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMapstring__Stringmodel_base__MModule);
((void (*)(val*))(var3->class->vft[COLOR_more_collections__MultiHashMap__init]))(var3) /* init on <var3:MultiHashMap[String, MModule]>*/;
CHECK_NEW_more_collections__MultiHashMap(var3);
self->attrs[COLOR_model_base__Model___64dmmodules_by_name].val = var3; /* @mmodules_by_name on <self:Model exact> */
var4 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[MClass]>*/;
CHECK_NEW_array__Array(var4);
self->attrs[COLOR_model__Model___64dmclasses].val = var4; /* @mclasses on <self:Model exact> */
var5 = NEW_array__Array(&type_array__Arraymodel__MProperty);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[MProperty]>*/;
CHECK_NEW_array__Array(var5);
self->attrs[COLOR_model__Model___64dmproperties].val = var5; /* @mproperties on <self:Model exact> */
var6 = NEW_poset__POSet(&type_poset__POSetmodel__MClassDef);
((void (*)(val*))(var6->class->vft[COLOR_poset__POSet__init]))(var6) /* init on <var6:POSet[MClassDef]>*/;
CHECK_NEW_poset__POSet(var6);
self->attrs[COLOR_model__Model___64dmclassdef_hierarchy].val = var6; /* @mclassdef_hierarchy on <self:Model exact> */
var7 = NEW_poset__POSet(&type_poset__POSetmodel__MClassType);
((void (*)(val*))(var7->class->vft[COLOR_poset__POSet__init]))(var7) /* init on <var7:POSet[MClassType]>*/;
CHECK_NEW_poset__POSet(var7);
self->attrs[COLOR_model__Model___64dintro_mtype_specialization_hierarchy].val = var7; /* @intro_mtype_specialization_hierarchy on <self:Model exact> */
var8 = NEW_poset__POSet(&type_poset__POSetmodel__MClassType);
((void (*)(val*))(var8->class->vft[COLOR_poset__POSet__init]))(var8) /* init on <var8:POSet[MClassType]>*/;
CHECK_NEW_poset__POSet(var8);
self->attrs[COLOR_model__Model___64dfull_mtype_specialization_hierarchy].val = var8; /* @full_mtype_specialization_hierarchy on <self:Model exact> */
var9 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMapstring__Stringmodel__MClass);
((void (*)(val*))(var9->class->vft[COLOR_more_collections__MultiHashMap__init]))(var9) /* init on <var9:MultiHashMap[String, MClass]>*/;
CHECK_NEW_more_collections__MultiHashMap(var9);
self->attrs[COLOR_model__Model___64dmclasses_by_name].val = var9; /* @mclasses_by_name on <self:Model exact> */
var10 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMapstring__Stringmodel__MProperty);
((void (*)(val*))(var10->class->vft[COLOR_more_collections__MultiHashMap__init]))(var10) /* init on <var10:MultiHashMap[String, MProperty]>*/;
CHECK_NEW_more_collections__MultiHashMap(var10);
self->attrs[COLOR_model__Model___64dmproperties_by_name].val = var10; /* @mproperties_by_name on <self:Model exact> */
var11 = NEW_model__MNullType(&type_model__MNullType);
((void (*)(val*, val*))(var11->class->vft[COLOR_model__MNullType__init]))(var11, self) /* init on <var11:MNullType>*/;
CHECK_NEW_model__MNullType(var11);
self->attrs[COLOR_model__Model___64dnull_type].val = var11; /* @null_type on <self:Model exact> */
return self;
}
/* allocate Model */
void CHECK_NEW_model_base__Model(val* self) {
}
/* runtime class model_base__MModule */
const struct class class_model_base__MModule = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model_base:MModule:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model_base:MModule:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model_base:MModule:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model_base:MModule:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model_base:MModule:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model_base:MModule:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model_base:MModule:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model_base:MModule:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model_base:MModule:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model_base:MModule:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model_base__MModule__to_s, /* pointer to model_base:MModule:model_base#MModule#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model_base:MModule:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model_base:MModule:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model_base:MModule:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model_base:MModule:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model_base:MModule:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model_base:MModule:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model_base:MModule:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model_base:MModule:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model_base:MModule:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model_base:MModule:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model_base:MModule:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model_base:MModule:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model_base:MModule:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model_base:MModule:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model_base:MModule:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model_base:MModule:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model_base:MModule:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model_base:MModule:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model_base:MModule:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model_base:MModule:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model_base:MModule:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model_base:MModule:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model_base:MModule:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model_base:MModule:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model_base:MModule:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model_base:MModule:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model_base:MModule:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model_base:MModule:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model_base:MModule:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model_base:MModule:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model_base:MModule:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model_base:MModule:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model_base:MModule:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model_base:MModule:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model_base:MModule:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model_base:MModule:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model_base:MModule:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model_base:MModule:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model_base:MModule:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model_base__MModule__model, /* pointer to model_base:MModule:model_base#MModule#model */
(nitmethod_t)VIRTUAL_model_base__MModule__model_61d, /* pointer to model_base:MModule:model_base#MModule#model= */
(nitmethod_t)VIRTUAL_model_base__MModule__direct_owner, /* pointer to model_base:MModule:model_base#MModule#direct_owner */
(nitmethod_t)VIRTUAL_model_base__MModule__direct_owner_61d, /* pointer to model_base:MModule:model_base#MModule#direct_owner= */
(nitmethod_t)VIRTUAL_model_base__MModule__name, /* pointer to model_base:MModule:model_base#MModule#name */
(nitmethod_t)VIRTUAL_model_base__MModule__name_61d, /* pointer to model_base:MModule:model_base#MModule#name= */
(nitmethod_t)VIRTUAL_model_base__MModule__location, /* pointer to model_base:MModule:model_base#MModule#location */
(nitmethod_t)VIRTUAL_model_base__MModule__location_61d, /* pointer to model_base:MModule:model_base#MModule#location= */
(nitmethod_t)VIRTUAL_model_base__MModule__in_nesting, /* pointer to model_base:MModule:model_base#MModule#in_nesting */
(nitmethod_t)VIRTUAL_model_base__MModule__in_nesting_61d, /* pointer to model_base:MModule:model_base#MModule#in_nesting= */
(nitmethod_t)VIRTUAL_model_base__MModule__in_importation, /* pointer to model_base:MModule:model_base#MModule#in_importation */
(nitmethod_t)VIRTUAL_model_base__MModule__in_importation_61d, /* pointer to model_base:MModule:model_base#MModule#in_importation= */
(nitmethod_t)VIRTUAL_model_base__MModule__full_name, /* pointer to model_base:MModule:model_base#MModule#full_name */
(nitmethod_t)VIRTUAL_model_base__MModule__init, /* pointer to model_base:MModule:model_base#MModule#init */
(nitmethod_t)VIRTUAL_model_base__MModule__set_imported_mmodules, /* pointer to model_base:MModule:model_base#MModule#set_imported_mmodules */
(nitmethod_t)VIRTUAL_model_base__MModule__intrude_mmodules, /* pointer to model_base:MModule:model_base#MModule#intrude_mmodules */
(nitmethod_t)VIRTUAL_model_base__MModule__intrude_mmodules_61d, /* pointer to model_base:MModule:model_base#MModule#intrude_mmodules= */
(nitmethod_t)VIRTUAL_model_base__MModule__public_mmodules, /* pointer to model_base:MModule:model_base#MModule#public_mmodules */
(nitmethod_t)VIRTUAL_model_base__MModule__public_mmodules_61d, /* pointer to model_base:MModule:model_base#MModule#public_mmodules= */
(nitmethod_t)VIRTUAL_model_base__MModule__private_mmodules, /* pointer to model_base:MModule:model_base#MModule#private_mmodules */
(nitmethod_t)VIRTUAL_model_base__MModule__private_mmodules_61d, /* pointer to model_base:MModule:model_base#MModule#private_mmodules= */
(nitmethod_t)VIRTUAL_model_base__MModule__visibility_for, /* pointer to model_base:MModule:model_base#MModule#visibility_for */
(nitmethod_t)VIRTUAL_model_base__MModule__set_visibility_for, /* pointer to model_base:MModule:model_base#MModule#set_visibility_for */
(nitmethod_t)VIRTUAL_model_base__MModule__public_owner, /* pointer to model_base:MModule:model_base#MModule#public_owner */
(nitmethod_t)VIRTUAL_model_base__MModule__is_visible, /* pointer to model_base:MModule:model_base#MModule#is_visible */
(nitmethod_t)VIRTUAL_model__MModule__intro_mclasses, /* pointer to model_base:MModule:model#MModule#intro_mclasses */
(nitmethod_t)VIRTUAL_model__MModule__intro_mclasses_61d, /* pointer to model_base:MModule:model#MModule#intro_mclasses= */
(nitmethod_t)VIRTUAL_model__MModule__mclassdefs, /* pointer to model_base:MModule:model#MModule#mclassdefs */
(nitmethod_t)VIRTUAL_model__MModule__mclassdefs_61d, /* pointer to model_base:MModule:model#MModule#mclassdefs= */
(nitmethod_t)VIRTUAL_model__MModule__has_mclass, /* pointer to model_base:MModule:model#MModule#has_mclass */
(nitmethod_t)VIRTUAL_model__MModule__flatten_mclass_hierarchy, /* pointer to model_base:MModule:model#MModule#flatten_mclass_hierarchy */
(nitmethod_t)VIRTUAL_model__MModule__linearize_mclasses, /* pointer to model_base:MModule:model#MModule#linearize_mclasses */
(nitmethod_t)VIRTUAL_model__MModule__linearize_mclassdefs, /* pointer to model_base:MModule:model#MModule#linearize_mclassdefs */
(nitmethod_t)VIRTUAL_model__MModule__linearize_mpropdefs, /* pointer to model_base:MModule:model#MModule#linearize_mpropdefs */
(nitmethod_t)VIRTUAL_model__MModule__flatten_mclass_hierarchy_cache, /* pointer to model_base:MModule:model#MModule#flatten_mclass_hierarchy_cache */
(nitmethod_t)VIRTUAL_model__MModule__flatten_mclass_hierarchy_cache_61d, /* pointer to model_base:MModule:model#MModule#flatten_mclass_hierarchy_cache= */
(nitmethod_t)VIRTUAL_model__MModule__object_type, /* pointer to model_base:MModule:model#MModule#object_type */
(nitmethod_t)VIRTUAL_model__MModule__object_type_cache, /* pointer to model_base:MModule:model#MModule#object_type_cache */
(nitmethod_t)VIRTUAL_model__MModule__object_type_cache_61d, /* pointer to model_base:MModule:model#MModule#object_type_cache= */
(nitmethod_t)VIRTUAL_model__MModule__bool_type, /* pointer to model_base:MModule:model#MModule#bool_type */
(nitmethod_t)VIRTUAL_model__MModule__bool_type_cache, /* pointer to model_base:MModule:model#MModule#bool_type_cache */
(nitmethod_t)VIRTUAL_model__MModule__bool_type_cache_61d, /* pointer to model_base:MModule:model#MModule#bool_type_cache= */
(nitmethod_t)VIRTUAL_model__MModule__sys_type, /* pointer to model_base:MModule:model#MModule#sys_type */
(nitmethod_t)VIRTUAL_model__MModule__get_primitive_class, /* pointer to model_base:MModule:model#MModule#get_primitive_class */
(nitmethod_t)VIRTUAL_model__MModule__try_get_primitive_method, /* pointer to model_base:MModule:model#MModule#try_get_primitive_method */
(nitmethod_t)VIRTUAL_header_dependency__MModule__header_dependencies_cache, /* pointer to model_base:MModule:header_dependency#MModule#header_dependencies_cache */
(nitmethod_t)VIRTUAL_header_dependency__MModule__header_dependencies_cache_61d, /* pointer to model_base:MModule:header_dependency#MModule#header_dependencies_cache= */
(nitmethod_t)VIRTUAL_header_dependency__MModule__header_dependencies, /* pointer to model_base:MModule:header_dependency#MModule#header_dependencies */
(nitmethod_t)VIRTUAL_header_dependency__MModule__compute_header_dependencies, /* pointer to model_base:MModule:header_dependency#MModule#compute_header_dependencies */
(nitmethod_t)VIRTUAL_common_ffi__MModule__uses_ffi, /* pointer to model_base:MModule:common_ffi#MModule#uses_ffi */
(nitmethod_t)VIRTUAL_common_ffi__MModule__uses_ffi_61d, /* pointer to model_base:MModule:common_ffi#MModule#uses_ffi= */
(nitmethod_t)VIRTUAL_abstract_compiler__MModule__properties, /* pointer to model_base:MModule:abstract_compiler#MModule#properties */
(nitmethod_t)VIRTUAL_abstract_compiler__MModule__properties_cache, /* pointer to model_base:MModule:abstract_compiler#MModule#properties_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MModule__properties_cache_61d, /* pointer to model_base:MModule:abstract_compiler#MModule#properties_cache= */
}
};
/* allocate MModule */
val* NEW_model_base__MModule(const struct type* type) {
val* self /* : MModule */;
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
val* var2 /* : HashSet[MModule] */;
val* var3 /* : Array[MClass] */;
val* var4 /* : Array[MClassDef] */;
val* var5 /* : null */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : HashMap[MClass, Set[MProperty]] */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model_base__MModule;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel_base__MModule);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MModule]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_model_base__MModule___64dintrude_mmodules].val = var; /* @intrude_mmodules on <self:MModule exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel_base__MModule);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MModule]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_model_base__MModule___64dpublic_mmodules].val = var1; /* @public_mmodules on <self:MModule exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel_base__MModule);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MModule]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_model_base__MModule___64dprivate_mmodules].val = var2; /* @private_mmodules on <self:MModule exact> */
var3 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[MClass]>*/;
CHECK_NEW_array__Array(var3);
self->attrs[COLOR_model__MModule___64dintro_mclasses].val = var3; /* @intro_mclasses on <self:MModule exact> */
var4 = NEW_array__Array(&type_array__Arraymodel__MClassDef);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[MClassDef]>*/;
CHECK_NEW_array__Array(var4);
self->attrs[COLOR_model__MModule___64dmclassdefs].val = var4; /* @mclassdefs on <self:MModule exact> */
var5 = NULL;
self->attrs[COLOR_model__MModule___64dflatten_mclass_hierarchy_cache].val = var5; /* @flatten_mclass_hierarchy_cache on <self:MModule exact> */
var6 = NULL;
self->attrs[COLOR_header_dependency__MModule___64dheader_dependencies_cache].val = var6; /* @header_dependencies_cache on <self:MModule exact> */
var7 = 0;
self->attrs[COLOR_common_ffi__MModule___64duses_ffi].s = var7; /* @uses_ffi on <self:MModule exact> */
var8 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty);
((void (*)(val*))(var8->class->vft[COLOR_hash_collection__HashMap__init]))(var8) /* init on <var8:HashMap[MClass, Set[MProperty]]>*/;
CHECK_NEW_hash_collection__HashMap(var8);
self->attrs[COLOR_abstract_compiler__MModule___64dproperties_cache].val = var8; /* @properties_cache on <self:MModule exact> */
return self;
}
/* allocate MModule */
void CHECK_NEW_model_base__MModule(val* self) {
val* var /* : Model */;
val* var1 /* : nullable MModule */;
val* var2 /* : String */;
val* var3 /* : Location */;
val* var4 /* : POSetElement[MModule] */;
val* var5 /* : POSetElement[MModule] */;
val* var6 /* : nullable MClassType */;
val* var7 /* : nullable MClassType */;
var = self->attrs[COLOR_model_base__MModule___64dmodel].val; /* @model on <self:MModule> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 56);
exit(1);
}
var1 = self->attrs[COLOR_model_base__MModule___64ddirect_owner].val; /* @direct_owner on <self:MModule> */
var2 = self->attrs[COLOR_model_base__MModule___64dname].val; /* @name on <self:MModule> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 62);
exit(1);
}
var3 = self->attrs[COLOR_model_base__MModule___64dlocation].val; /* @location on <self:MModule> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 65);
exit(1);
}
var4 = self->attrs[COLOR_model_base__MModule___64din_nesting].val; /* @in_nesting on <self:MModule> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_nesting");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 71);
exit(1);
}
var5 = self->attrs[COLOR_model_base__MModule___64din_importation].val; /* @in_importation on <self:MModule> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_importation");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 74);
exit(1);
}
var6 = self->attrs[COLOR_model__MModule___64dobject_type_cache].val; /* @object_type_cache on <self:MModule> */
var7 = self->attrs[COLOR_model__MModule___64dbool_type_cache].val; /* @bool_type_cache on <self:MModule> */
}
/* runtime class model_base__MVisibility */
const struct class class_model_base__MVisibility = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model_base:MVisibility:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to model_base:MVisibility:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model_base:MVisibility:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model_base:MVisibility:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model_base:MVisibility:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to model_base:MVisibility:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to model_base:MVisibility:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model_base:MVisibility:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model_base:MVisibility:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model_base:MVisibility:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model_base__MVisibility__to_s, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model_base:MVisibility:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model_base:MVisibility:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model_base:MVisibility:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model_base:MVisibility:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model_base:MVisibility:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to model_base:MVisibility:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to model_base:MVisibility:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to model_base:MVisibility:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to model_base:MVisibility:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to model_base:MVisibility:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to model_base:MVisibility:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model_base:MVisibility:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model_base:MVisibility:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model_base:MVisibility:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to model_base:MVisibility:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to model_base:MVisibility:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model_base:MVisibility:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model_base:MVisibility:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to model_base:MVisibility:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to model_base:MVisibility:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to model_base:MVisibility:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model_base:MVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model_base:MVisibility:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model_base:MVisibility:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model_base:MVisibility:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model_base:MVisibility:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model_base:MVisibility:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model_base:MVisibility:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model_base:MVisibility:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model_base:MVisibility:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model_base:MVisibility:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to model_base:MVisibility:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to model_base:MVisibility:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to model_base:MVisibility:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to model_base:MVisibility:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to model_base:MVisibility:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to model_base:MVisibility:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to model_base:MVisibility:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to model_base:MVisibility:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_model_base__MVisibility___60d, /* pointer to model_base:MVisibility:model_base#MVisibility#< */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#<= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#>= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d, /* pointer to model_base:MVisibility:kernel#Comparable#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to model_base:MVisibility:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_kernel__Comparable__is_between, /* pointer to model_base:MVisibility:kernel#Comparable#is_between */
(nitmethod_t)VIRTUAL_kernel__Comparable__max, /* pointer to model_base:MVisibility:kernel#Comparable#max */
(nitmethod_t)VIRTUAL_kernel__Comparable__min, /* pointer to model_base:MVisibility:kernel#Comparable#min */
(nitmethod_t)VIRTUAL_model_base__MVisibility__to_s_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s= */
(nitmethod_t)VIRTUAL_model_base__MVisibility__level, /* pointer to model_base:MVisibility:model_base#MVisibility#level */
(nitmethod_t)VIRTUAL_model_base__MVisibility__level_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#level= */
(nitmethod_t)VIRTUAL_model_base__MVisibility__init, /* pointer to model_base:MVisibility:model_base#MVisibility#init */
}
};
/* allocate MVisibility */
val* NEW_model_base__MVisibility(const struct type* type) {
val* self /* : MVisibility */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model_base__MVisibility;
return self;
}
/* allocate MVisibility */
void CHECK_NEW_model_base__MVisibility(val* self) {
val* var /* : String */;
long var1 /* : Int */;
var = self->attrs[COLOR_model_base__MVisibility___64dto_s].val; /* @to_s on <self:MVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 200);
exit(1);
}
var1 = self->attrs[COLOR_model_base__MVisibility___64dlevel].l; /* @level on <self:MVisibility> */
}
/* runtime class more_collections__MultiHashMap */
const struct class class_more_collections__MultiHashMap = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to more_collections:MultiHashMap:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to more_collections:MultiHashMap:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to more_collections:MultiHashMap:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to more_collections:MultiHashMap:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to more_collections:MultiHashMap:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to more_collections:MultiHashMap:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to more_collections:MultiHashMap:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to more_collections:MultiHashMap:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to more_collections:MultiHashMap:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to more_collections:MultiHashMap:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to more_collections:MultiHashMap:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to more_collections:MultiHashMap:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to more_collections:MultiHashMap:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to more_collections:MultiHashMap:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to more_collections:MultiHashMap:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to more_collections:MultiHashMap:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to more_collections:MultiHashMap:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to more_collections:MultiHashMap:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to more_collections:MultiHashMap:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to more_collections:MultiHashMap:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to more_collections:MultiHashMap:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to more_collections:MultiHashMap:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to more_collections:MultiHashMap:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to more_collections:MultiHashMap:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to more_collections:MultiHashMap:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to more_collections:MultiHashMap:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to more_collections:MultiHashMap:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to more_collections:MultiHashMap:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to more_collections:MultiHashMap:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to more_collections:MultiHashMap:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to more_collections:MultiHashMap:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to more_collections:MultiHashMap:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to more_collections:MultiHashMap:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to more_collections:MultiHashMap:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to more_collections:MultiHashMap:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to more_collections:MultiHashMap:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to more_collections:MultiHashMap:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to more_collections:MultiHashMap:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to more_collections:MultiHashMap:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to more_collections:MultiHashMap:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to more_collections:MultiHashMap:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to more_collections:MultiHashMap:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to more_collections:MultiHashMap:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to more_collections:MultiHashMap:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to more_collections:MultiHashMap:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_hash_collection__HashMap___91d_93d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[] */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__get_or_default, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#get_or_default */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__has_key, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#has_key */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__iterator, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__values, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#values */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__keys, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#keys */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__is_empty, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__length, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#length */
(nitmethod_t)VIRTUAL_hash_collection__HashMap___91d_93d_61d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[]= */
(nitmethod_t)VIRTUAL_abstract_collection__Map__recover_with, /* pointer to more_collections:MultiHashMap:abstract_collection#Map#recover_with */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__clear, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#clear */
(nitmethod_t)VIRTUAL_string__Map__join, /* pointer to more_collections:MultiHashMap:string#Map#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArrayCapable__calloc_array, /* pointer to more_collections:MultiHashMap:array#ArrayCapable#calloc_array */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__first_item, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#first_item */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__index_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at_idx, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__store, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#store */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__remove_node, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__raz, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#raz */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__enlarge, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__init, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__init, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__keys_61d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#keys= */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__values_61d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#values= */
(nitmethod_t)VIRTUAL_more_collections__MultiHashMap__add_one, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#add_one */
(nitmethod_t)VIRTUAL_more_collections__MultiHashMap__init, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#init */
}
};
/* allocate MultiHashMap[Object, nullable Object] */
val* NEW_more_collections__MultiHashMap(const struct type* type) {
val* self /* : MultiHashMap[Object, nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMapKeys[Object, Array[nullable Object]] */;
val* var8 /* : HashMapValues[Object, Array[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__MultiHashMap;
var = NULL;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var; /* _array on <self:MultiHashMap[Object, nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:MultiHashMap[Object, nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:MultiHashMap[Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:MultiHashMap[Object, nullable Object] exact> */
var4 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:MultiHashMap[Object, nullable Object] exact> */
var5 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:MultiHashMap[Object, nullable Object] exact> */
var6 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:MultiHashMap[Object, nullable Object] exact> */
var7 = NEW_hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_hash_collection__HashMapKeyshash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
((void (*)(val*, val*))(var7->class->vft[COLOR_hash_collection__HashMapKeys__init]))(var7, self) /* init on <var7:HashMapKeys[Object, Array[nullable Object]]>*/;
CHECK_NEW_hash_collection__HashMapKeys(var7);
self->attrs[COLOR_hash_collection__HashMap___64dkeys].val = var7; /* @keys on <self:MultiHashMap[Object, nullable Object] exact> */
var8 = NEW_hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_hash_collection__HashMapValueshash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
((void (*)(val*, val*))(var8->class->vft[COLOR_hash_collection__HashMapValues__init]))(var8, self) /* init on <var8:HashMapValues[Object, Array[nullable Object]]>*/;
CHECK_NEW_hash_collection__HashMapValues(var8);
self->attrs[COLOR_hash_collection__HashMap___64dvalues].val = var8; /* @values on <self:MultiHashMap[Object, nullable Object] exact> */
return self;
}
/* allocate MultiHashMap[Object, nullable Object] */
void CHECK_NEW_more_collections__MultiHashMap(val* self) {
}
/* runtime class more_collections__HashMap2 */
const struct class class_more_collections__HashMap2 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to more_collections:HashMap2:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to more_collections:HashMap2:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to more_collections:HashMap2:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to more_collections:HashMap2:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to more_collections:HashMap2:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to more_collections:HashMap2:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to more_collections:HashMap2:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to more_collections:HashMap2:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to more_collections:HashMap2:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to more_collections:HashMap2:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to more_collections:HashMap2:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to more_collections:HashMap2:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to more_collections:HashMap2:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to more_collections:HashMap2:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to more_collections:HashMap2:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to more_collections:HashMap2:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to more_collections:HashMap2:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to more_collections:HashMap2:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to more_collections:HashMap2:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to more_collections:HashMap2:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to more_collections:HashMap2:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to more_collections:HashMap2:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to more_collections:HashMap2:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to more_collections:HashMap2:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to more_collections:HashMap2:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to more_collections:HashMap2:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to more_collections:HashMap2:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to more_collections:HashMap2:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to more_collections:HashMap2:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to more_collections:HashMap2:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to more_collections:HashMap2:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to more_collections:HashMap2:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to more_collections:HashMap2:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to more_collections:HashMap2:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to more_collections:HashMap2:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to more_collections:HashMap2:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to more_collections:HashMap2:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to more_collections:HashMap2:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to more_collections:HashMap2:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to more_collections:HashMap2:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to more_collections:HashMap2:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to more_collections:HashMap2:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to more_collections:HashMap2:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to more_collections:HashMap2:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to more_collections:HashMap2:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to more_collections:HashMap2:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to more_collections:HashMap2:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to more_collections:HashMap2:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to more_collections:HashMap2:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to more_collections:HashMap2:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_more_collections__HashMap2__level1, /* pointer to more_collections:HashMap2:more_collections#HashMap2#level1 */
(nitmethod_t)VIRTUAL_more_collections__HashMap2__level1_61d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#level1= */
(nitmethod_t)VIRTUAL_more_collections__HashMap2___91d_93d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[] */
(nitmethod_t)VIRTUAL_more_collections__HashMap2___91d_93d_61d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[]= */
(nitmethod_t)VIRTUAL_more_collections__HashMap2__init, /* pointer to more_collections:HashMap2:more_collections#HashMap2#init */
}
};
/* allocate HashMap2[Object, Object, nullable Object] */
val* NEW_more_collections__HashMap2(const struct type* type) {
val* self /* : HashMap2[Object, Object, nullable Object] */;
val* var /* : HashMap[Object, HashMap[Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap2;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap2_FT0hash_collection__HashMapmore_collections__HashMap2_FT1more_collections__HashMap2_FT2]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, HashMap[Object, nullable Object]]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_more_collections__HashMap2___64dlevel1].val = var; /* @level1 on <self:HashMap2[Object, Object, nullable Object] exact> */
return self;
}
/* allocate HashMap2[Object, Object, nullable Object] */
void CHECK_NEW_more_collections__HashMap2(val* self) {
}
/* runtime class more_collections__HashMap3 */
const struct class class_more_collections__HashMap3 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to more_collections:HashMap3:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to more_collections:HashMap3:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to more_collections:HashMap3:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to more_collections:HashMap3:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to more_collections:HashMap3:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to more_collections:HashMap3:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to more_collections:HashMap3:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to more_collections:HashMap3:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to more_collections:HashMap3:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to more_collections:HashMap3:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to more_collections:HashMap3:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to more_collections:HashMap3:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to more_collections:HashMap3:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to more_collections:HashMap3:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to more_collections:HashMap3:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to more_collections:HashMap3:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to more_collections:HashMap3:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to more_collections:HashMap3:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to more_collections:HashMap3:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to more_collections:HashMap3:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to more_collections:HashMap3:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to more_collections:HashMap3:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to more_collections:HashMap3:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to more_collections:HashMap3:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to more_collections:HashMap3:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to more_collections:HashMap3:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to more_collections:HashMap3:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to more_collections:HashMap3:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to more_collections:HashMap3:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to more_collections:HashMap3:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to more_collections:HashMap3:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to more_collections:HashMap3:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to more_collections:HashMap3:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to more_collections:HashMap3:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to more_collections:HashMap3:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to more_collections:HashMap3:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to more_collections:HashMap3:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to more_collections:HashMap3:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to more_collections:HashMap3:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to more_collections:HashMap3:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to more_collections:HashMap3:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to more_collections:HashMap3:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to more_collections:HashMap3:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to more_collections:HashMap3:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to more_collections:HashMap3:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to more_collections:HashMap3:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to more_collections:HashMap3:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to more_collections:HashMap3:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to more_collections:HashMap3:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to more_collections:HashMap3:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_more_collections__HashMap3__level1, /* pointer to more_collections:HashMap3:more_collections#HashMap3#level1 */
(nitmethod_t)VIRTUAL_more_collections__HashMap3__level1_61d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#level1= */
(nitmethod_t)VIRTUAL_more_collections__HashMap3___91d_93d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[] */
(nitmethod_t)VIRTUAL_more_collections__HashMap3___91d_93d_61d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[]= */
(nitmethod_t)VIRTUAL_more_collections__HashMap3__init, /* pointer to more_collections:HashMap3:more_collections#HashMap3#init */
}
};
/* allocate HashMap3[Object, Object, Object, nullable Object] */
val* NEW_more_collections__HashMap3(const struct type* type) {
val* self /* : HashMap3[Object, Object, Object, nullable Object] */;
val* var /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap3;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap3_FT0more_collections__HashMap2more_collections__HashMap3_FT1more_collections__HashMap3_FT2more_collections__HashMap3_FT3]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_more_collections__HashMap3___64dlevel1].val = var; /* @level1 on <self:HashMap3[Object, Object, Object, nullable Object] exact> */
return self;
}
/* allocate HashMap3[Object, Object, Object, nullable Object] */
void CHECK_NEW_more_collections__HashMap3(val* self) {
}
/* runtime class opts__OptionText */
/* allocate OptionText */
val* NEW_opts__OptionText(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "OptionText is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate OptionText */
void CHECK_NEW_opts__OptionText(val* self) {
fprintf(stderr, "Runtime error: %s", "OptionText is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class opts__OptionBool */
const struct class class_opts__OptionBool = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionBool:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to opts:OptionBool:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionBool:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionBool:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionBool:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to opts:OptionBool:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to opts:OptionBool:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionBool:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionBool:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionBool:kernel#Object#hash */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionBool:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionBool:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionBool:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionBool:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionBool:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionBool:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to opts:OptionBool:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to opts:OptionBool:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to opts:OptionBool:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to opts:OptionBool:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to opts:OptionBool:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to opts:OptionBool:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionBool:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionBool:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionBool:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to opts:OptionBool:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to opts:OptionBool:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionBool:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionBool:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to opts:OptionBool:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to opts:OptionBool:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to opts:OptionBool:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionBool:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionBool:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionBool:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionBool:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionBool:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionBool:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionBool:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionBool:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionBool:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionBool:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to opts:OptionBool:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to opts:OptionBool:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to opts:OptionBool:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to opts:OptionBool:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to opts:OptionBool:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to opts:OptionBool:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to opts:OptionBool:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to opts:OptionBool:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionBool:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionBool:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionBool:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionBool:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__mandatory_61d, /* pointer to opts:OptionBool:opts#Option#mandatory= */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionBool:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionBool:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionBool:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__default_value, /* pointer to opts:OptionBool:opts#Option#default_value */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionBool:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionBool:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__add_aliases, /* pointer to opts:OptionBool:opts#Option#add_aliases */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionBool:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__Option__pretty_default, /* pointer to opts:OptionBool:opts#Option#pretty_default */
(nitmethod_t)VIRTUAL_opts__OptionBool__read_param, /* pointer to opts:OptionBool:opts#OptionBool#read_param */
(nitmethod_t)VIRTUAL_opts__OptionBool__init, /* pointer to opts:OptionBool:opts#OptionBool#init */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionBool:opts#Option#read_param */
}
};
/* allocate OptionBool */
val* NEW_opts__OptionBool(const struct type* type) {
val* self /* : OptionBool */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionBool;
return self;
}
/* allocate OptionBool */
void CHECK_NEW_opts__OptionBool(val* self) {
val* var /* : Array[String] */;
val* var1 /* : String */;
val* var2 /* : Array[String] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
var = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionBool> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 19);
exit(1);
}
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:OptionBool> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _helptext");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 25);
exit(1);
}
var2 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionBool> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 28);
exit(1);
}
var3 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:OptionBool> */
var4 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:OptionBool> */
var5 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:OptionBool> */
var6 = self->attrs[COLOR_opts__Option___default_value].val; /* _default_value on <self:OptionBool> */
}
/* runtime class opts__OptionCount */
const struct class class_opts__OptionCount = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionCount:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to opts:OptionCount:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionCount:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionCount:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionCount:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to opts:OptionCount:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to opts:OptionCount:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionCount:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionCount:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionCount:kernel#Object#hash */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionCount:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionCount:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionCount:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionCount:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionCount:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionCount:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to opts:OptionCount:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to opts:OptionCount:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to opts:OptionCount:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to opts:OptionCount:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to opts:OptionCount:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to opts:OptionCount:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionCount:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionCount:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionCount:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to opts:OptionCount:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to opts:OptionCount:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionCount:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionCount:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to opts:OptionCount:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to opts:OptionCount:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to opts:OptionCount:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionCount:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionCount:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionCount:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionCount:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionCount:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionCount:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionCount:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionCount:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionCount:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionCount:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to opts:OptionCount:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to opts:OptionCount:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to opts:OptionCount:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to opts:OptionCount:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to opts:OptionCount:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to opts:OptionCount:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to opts:OptionCount:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to opts:OptionCount:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionCount:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionCount:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionCount:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionCount:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__mandatory_61d, /* pointer to opts:OptionCount:opts#Option#mandatory= */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionCount:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionCount:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionCount:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__default_value, /* pointer to opts:OptionCount:opts#Option#default_value */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionCount:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionCount:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__add_aliases, /* pointer to opts:OptionCount:opts#Option#add_aliases */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionCount:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__Option__pretty_default, /* pointer to opts:OptionCount:opts#Option#pretty_default */
(nitmethod_t)VIRTUAL_opts__OptionCount__read_param, /* pointer to opts:OptionCount:opts#OptionCount#read_param */
(nitmethod_t)VIRTUAL_opts__OptionCount__init, /* pointer to opts:OptionCount:opts#OptionCount#init */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionCount:opts#Option#read_param */
}
};
/* allocate OptionCount */
val* NEW_opts__OptionCount(const struct type* type) {
val* self /* : OptionCount */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionCount;
return self;
}
/* allocate OptionCount */
void CHECK_NEW_opts__OptionCount(val* self) {
val* var /* : Array[String] */;
val* var1 /* : String */;
val* var2 /* : Array[String] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
var = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionCount> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 19);
exit(1);
}
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:OptionCount> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _helptext");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 25);
exit(1);
}
var2 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionCount> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 28);
exit(1);
}
var3 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:OptionCount> */
var4 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:OptionCount> */
var5 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:OptionCount> */
var6 = self->attrs[COLOR_opts__Option___default_value].val; /* _default_value on <self:OptionCount> */
}
/* runtime class opts__OptionString */
const struct class class_opts__OptionString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to opts:OptionString:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionString:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to opts:OptionString:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to opts:OptionString:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionString:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionString:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to opts:OptionString:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to opts:OptionString:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to opts:OptionString:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to opts:OptionString:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to opts:OptionString:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to opts:OptionString:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to opts:OptionString:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to opts:OptionString:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to opts:OptionString:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to opts:OptionString:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to opts:OptionString:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to opts:OptionString:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to opts:OptionString:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to opts:OptionString:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to opts:OptionString:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to opts:OptionString:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to opts:OptionString:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to opts:OptionString:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to opts:OptionString:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionString:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionString:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionString:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionString:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__mandatory_61d, /* pointer to opts:OptionString:opts#Option#mandatory= */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionString:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionString:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionString:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__default_value, /* pointer to opts:OptionString:opts#Option#default_value */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionString:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionString:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__add_aliases, /* pointer to opts:OptionString:opts#Option#add_aliases */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionString:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__Option__pretty_default, /* pointer to opts:OptionString:opts#Option#pretty_default */
(nitmethod_t)VIRTUAL_opts__OptionParameter__read_param, /* pointer to opts:OptionString:opts#OptionParameter#read_param */
(nitmethod_t)VIRTUAL_opts__OptionString__convert, /* pointer to opts:OptionString:opts#OptionString#convert */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory, /* pointer to opts:OptionString:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory_61d, /* pointer to opts:OptionString:opts#OptionParameter#parameter_mandatory= */
(nitmethod_t)VIRTUAL_opts__OptionParameter__init_opt, /* pointer to opts:OptionString:opts#OptionParameter#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionString:opts#Option#read_param */
(nitmethod_t)VIRTUAL_opts__OptionString__init, /* pointer to opts:OptionString:opts#OptionString#init */
}
};
/* allocate OptionString */
val* NEW_opts__OptionString(const struct type* type) {
val* self /* : OptionString */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionString;
return self;
}
/* allocate OptionString */
void CHECK_NEW_opts__OptionString(val* self) {
val* var /* : Array[String] */;
val* var1 /* : String */;
val* var2 /* : Array[String] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
var = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionString> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 19);
exit(1);
}
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:OptionString> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _helptext");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 25);
exit(1);
}
var2 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionString> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 28);
exit(1);
}
var3 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:OptionString> */
var4 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:OptionString> */
var5 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:OptionString> */
var6 = self->attrs[COLOR_opts__Option___default_value].val; /* _default_value on <self:OptionString> */
var7 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionString> */
}
/* runtime class opts__OptionEnum */
/* allocate OptionEnum */
val* NEW_opts__OptionEnum(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "OptionEnum is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate OptionEnum */
void CHECK_NEW_opts__OptionEnum(val* self) {
fprintf(stderr, "Runtime error: %s", "OptionEnum is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class opts__OptionInt */
/* allocate OptionInt */
val* NEW_opts__OptionInt(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "OptionInt is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate OptionInt */
void CHECK_NEW_opts__OptionInt(val* self) {
fprintf(stderr, "Runtime error: %s", "OptionInt is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class opts__OptionArray */
const struct class class_opts__OptionArray = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionArray:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to opts:OptionArray:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionArray:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionArray:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionArray:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to opts:OptionArray:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to opts:OptionArray:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionArray:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionArray:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionArray:kernel#Object#hash */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionArray:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionArray:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionArray:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionArray:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionArray:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionArray:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to opts:OptionArray:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to opts:OptionArray:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to opts:OptionArray:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to opts:OptionArray:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to opts:OptionArray:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to opts:OptionArray:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionArray:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionArray:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionArray:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to opts:OptionArray:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to opts:OptionArray:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionArray:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionArray:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to opts:OptionArray:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to opts:OptionArray:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to opts:OptionArray:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionArray:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionArray:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionArray:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionArray:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionArray:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionArray:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionArray:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionArray:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionArray:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionArray:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to opts:OptionArray:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to opts:OptionArray:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to opts:OptionArray:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to opts:OptionArray:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to opts:OptionArray:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to opts:OptionArray:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to opts:OptionArray:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to opts:OptionArray:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionArray:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionArray:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionArray:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionArray:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__mandatory_61d, /* pointer to opts:OptionArray:opts#Option#mandatory= */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionArray:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionArray:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionArray:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__default_value, /* pointer to opts:OptionArray:opts#Option#default_value */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionArray:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionArray:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__add_aliases, /* pointer to opts:OptionArray:opts#Option#add_aliases */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionArray:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__Option__pretty_default, /* pointer to opts:OptionArray:opts#Option#pretty_default */
(nitmethod_t)VIRTUAL_opts__OptionParameter__read_param, /* pointer to opts:OptionArray:opts#OptionParameter#read_param */
(nitmethod_t)VIRTUAL_opts__OptionArray__convert, /* pointer to opts:OptionArray:opts#OptionArray#convert */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory, /* pointer to opts:OptionArray:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory_61d, /* pointer to opts:OptionArray:opts#OptionParameter#parameter_mandatory= */
(nitmethod_t)VIRTUAL_opts__OptionParameter__init_opt, /* pointer to opts:OptionArray:opts#OptionParameter#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionArray:opts#Option#read_param */
(nitmethod_t)VIRTUAL_opts__OptionArray__init, /* pointer to opts:OptionArray:opts#OptionArray#init */
}
};
/* allocate OptionArray */
val* NEW_opts__OptionArray(const struct type* type) {
val* self /* : OptionArray */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionArray;
return self;
}
/* allocate OptionArray */
void CHECK_NEW_opts__OptionArray(val* self) {
val* var /* : Array[String] */;
val* var1 /* : String */;
val* var2 /* : Array[String] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
val* var8 /* : Array[String] */;
var = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionArray> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 19);
exit(1);
}
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:OptionArray> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _helptext");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 25);
exit(1);
}
var2 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionArray> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 28);
exit(1);
}
var3 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:OptionArray> */
var4 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:OptionArray> */
var5 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:OptionArray> */
var6 = self->attrs[COLOR_opts__Option___default_value].val; /* _default_value on <self:OptionArray> */
var7 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionArray> */
var8 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 221);
exit(1);
}
}
/* runtime class opts__OptionContext */
const struct class class_opts__OptionContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to opts:OptionContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to opts:OptionContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to opts:OptionContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to opts:OptionContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to opts:OptionContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to opts:OptionContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to opts:OptionContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to opts:OptionContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to opts:OptionContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to opts:OptionContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to opts:OptionContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to opts:OptionContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to opts:OptionContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to opts:OptionContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to opts:OptionContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to opts:OptionContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to opts:OptionContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to opts:OptionContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to opts:OptionContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to opts:OptionContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to opts:OptionContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to opts:OptionContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to opts:OptionContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_opts__OptionContext__options, /* pointer to opts:OptionContext:opts#OptionContext#options */
(nitmethod_t)VIRTUAL_opts__OptionContext__rest, /* pointer to opts:OptionContext:opts#OptionContext#rest */
(nitmethod_t)VIRTUAL_opts__OptionContext__errors, /* pointer to opts:OptionContext:opts#OptionContext#errors */
(nitmethod_t)VIRTUAL_opts__OptionContext__usage, /* pointer to opts:OptionContext:opts#OptionContext#usage */
(nitmethod_t)VIRTUAL_opts__OptionContext__parse, /* pointer to opts:OptionContext:opts#OptionContext#parse */
(nitmethod_t)VIRTUAL_opts__OptionContext__parse_intern, /* pointer to opts:OptionContext:opts#OptionContext#parse_intern */
(nitmethod_t)VIRTUAL_opts__OptionContext__add_option, /* pointer to opts:OptionContext:opts#OptionContext#add_option */
(nitmethod_t)VIRTUAL_opts__OptionContext__init, /* pointer to opts:OptionContext:opts#OptionContext#init */
(nitmethod_t)VIRTUAL_opts__OptionContext__build, /* pointer to opts:OptionContext:opts#OptionContext#build */
(nitmethod_t)VIRTUAL_opts__OptionContext__get_errors, /* pointer to opts:OptionContext:opts#OptionContext#get_errors */
}
};
/* allocate OptionContext */
val* NEW_opts__OptionContext(const struct type* type) {
val* self /* : OptionContext */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionContext;
return self;
}
/* allocate OptionContext */
void CHECK_NEW_opts__OptionContext(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : Map[String, Option] */;
var = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 230);
exit(1);
}
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _rest");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 231);
exit(1);
}
var2 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 232);
exit(1);
}
var3 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _optmap");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 234);
exit(1);
}
}
/* runtime class toolcontext__Message */
const struct class class_toolcontext__Message = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:Message:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to toolcontext:Message:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:Message:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:Message:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:Message:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to toolcontext:Message:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to toolcontext:Message:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:Message:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:Message:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:Message:kernel#Object#hash */
(nitmethod_t)VIRTUAL_toolcontext__Message__to_s, /* pointer to toolcontext:Message:toolcontext#Message#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:Message:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:Message:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:Message:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:Message:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:Message:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to toolcontext:Message:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to toolcontext:Message:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to toolcontext:Message:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to toolcontext:Message:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to toolcontext:Message:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to toolcontext:Message:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to toolcontext:Message:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to toolcontext:Message:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to toolcontext:Message:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to toolcontext:Message:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to toolcontext:Message:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to toolcontext:Message:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to toolcontext:Message:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to toolcontext:Message:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to toolcontext:Message:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to toolcontext:Message:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:Message:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:Message:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:Message:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:Message:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:Message:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to toolcontext:Message:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to toolcontext:Message:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to toolcontext:Message:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to toolcontext:Message:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to toolcontext:Message:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to toolcontext:Message:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to toolcontext:Message:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to toolcontext:Message:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to toolcontext:Message:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to toolcontext:Message:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to toolcontext:Message:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to toolcontext:Message:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to toolcontext:Message:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_toolcontext__Message___60d, /* pointer to toolcontext:Message:toolcontext#Message#< */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d, /* pointer to toolcontext:Message:kernel#Comparable#<= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d_61d, /* pointer to toolcontext:Message:kernel#Comparable#>= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d, /* pointer to toolcontext:Message:kernel#Comparable#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to toolcontext:Message:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_kernel__Comparable__is_between, /* pointer to toolcontext:Message:kernel#Comparable#is_between */
(nitmethod_t)VIRTUAL_kernel__Comparable__max, /* pointer to toolcontext:Message:kernel#Comparable#max */
(nitmethod_t)VIRTUAL_kernel__Comparable__min, /* pointer to toolcontext:Message:kernel#Comparable#min */
(nitmethod_t)VIRTUAL_toolcontext__Message__location, /* pointer to toolcontext:Message:toolcontext#Message#location */
(nitmethod_t)VIRTUAL_toolcontext__Message__location_61d, /* pointer to toolcontext:Message:toolcontext#Message#location= */
(nitmethod_t)VIRTUAL_toolcontext__Message__text, /* pointer to toolcontext:Message:toolcontext#Message#text */
(nitmethod_t)VIRTUAL_toolcontext__Message__text_61d, /* pointer to toolcontext:Message:toolcontext#Message#text= */
(nitmethod_t)VIRTUAL_toolcontext__Message__to_color_string, /* pointer to toolcontext:Message:toolcontext#Message#to_color_string */
(nitmethod_t)VIRTUAL_toolcontext__Message__init, /* pointer to toolcontext:Message:toolcontext#Message#init */
}
};
/* allocate Message */
val* NEW_toolcontext__Message(const struct type* type) {
val* self /* : Message */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_toolcontext__Message;
return self;
}
/* allocate Message */
void CHECK_NEW_toolcontext__Message(val* self) {
val* var /* : nullable Location */;
val* var1 /* : String */;
var = self->attrs[COLOR_toolcontext__Message___64dlocation].val; /* @location on <self:Message> */
var1 = self->attrs[COLOR_toolcontext__Message___64dtext].val; /* @text on <self:Message> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @text");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 30);
exit(1);
}
}
/* runtime class toolcontext__ToolContext */
const struct class class_toolcontext__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to toolcontext:ToolContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to toolcontext:ToolContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:ToolContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to toolcontext:ToolContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:ToolContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:ToolContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:ToolContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:ToolContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:ToolContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to toolcontext:ToolContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to toolcontext:ToolContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to toolcontext:ToolContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to toolcontext:ToolContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to toolcontext:ToolContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to toolcontext:ToolContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to toolcontext:ToolContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to toolcontext:ToolContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to toolcontext:ToolContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to toolcontext:ToolContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to toolcontext:ToolContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to toolcontext:ToolContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to toolcontext:ToolContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to toolcontext:ToolContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to toolcontext:ToolContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to toolcontext:ToolContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to toolcontext:ToolContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to toolcontext:ToolContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to toolcontext:ToolContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to toolcontext:ToolContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to toolcontext:ToolContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to toolcontext:ToolContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to toolcontext:ToolContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to toolcontext:ToolContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to toolcontext:ToolContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to toolcontext:ToolContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__log_directory, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__log_directory_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__messages, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__messages_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__message_sorter, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__message_sorter_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__check_errors, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_errors */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__fatal_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#fatal_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#info */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__option_context, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__option_context_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warn, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warn_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_quiet, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_quiet_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_dir_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_help, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_help_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_version_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_verbose, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_verbose_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_no_color, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_no_color_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__process_options, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#process_options */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_module, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_module */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_classdef, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_classdef */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_propdef, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_propdef */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_stmts, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_stmts */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_expr, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_expr */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_something, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_something */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases_61d, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases= */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases_list, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases_list */
(nitmethod_t)VIRTUAL_phase__ToolContext__run_phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ToolContext__simple_misc_analysis_phase, /* pointer to toolcontext:ToolContext:simple_misc_analysis#ToolContext#simple_misc_analysis_phase */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ToolContext__simple_misc_analysis_phase_61d, /* pointer to toolcontext:ToolContext:simple_misc_analysis#ToolContext#simple_misc_analysis_phase= */
(nitmethod_t)VIRTUAL_literal__ToolContext__literal_phase, /* pointer to toolcontext:ToolContext:literal#ToolContext#literal_phase */
(nitmethod_t)VIRTUAL_literal__ToolContext__literal_phase_61d, /* pointer to toolcontext:ToolContext:literal#ToolContext#literal_phase= */
(nitmethod_t)VIRTUAL_scope__ToolContext__scope_phase, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase */
(nitmethod_t)VIRTUAL_scope__ToolContext__scope_phase_61d, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase= */
(nitmethod_t)VIRTUAL_flow__ToolContext__flow_phase, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase */
(nitmethod_t)VIRTUAL_flow__ToolContext__flow_phase_61d, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase= */
(nitmethod_t)VIRTUAL_local_var_init__ToolContext__local_var_init_phase, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase */
(nitmethod_t)VIRTUAL_local_var_init__ToolContext__local_var_init_phase_61d, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_path, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_path */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_path_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_path= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_metamodel */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_metamodel= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_parse, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_parse */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_parse_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_parse= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder_real, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder_real */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder_real_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder_real= */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase_61d, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase= */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase_61d, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase= */
(nitmethod_t)VIRTUAL_cached__ToolContext__cached_phase, /* pointer to toolcontext:ToolContext:cached#ToolContext#cached_phase */
(nitmethod_t)VIRTUAL_cached__ToolContext__cached_phase_61d, /* pointer to toolcontext:ToolContext:cached#ToolContext#cached_phase= */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase_61d, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase= */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase_61d, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase= */
(nitmethod_t)VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase, /* pointer to toolcontext:ToolContext:div_by_zero#ToolContext#div_by_zero_phase */
(nitmethod_t)VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase_61d, /* pointer to toolcontext:ToolContext:div_by_zero#ToolContext#div_by_zero_phase= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ToolContext__verify_nitni_callback_phase, /* pointer to toolcontext:ToolContext:nitni_callbacks#ToolContext#verify_nitni_callback_phase */
(nitmethod_t)VIRTUAL_nitni_callbacks__ToolContext__verify_nitni_callback_phase_61d, /* pointer to toolcontext:ToolContext:nitni_callbacks#ToolContext#verify_nitni_callback_phase= */
(nitmethod_t)VIRTUAL_transform__ToolContext__transform_phase, /* pointer to toolcontext:ToolContext:transform#ToolContext#transform_phase */
(nitmethod_t)VIRTUAL_transform__ToolContext__transform_phase_61d, /* pointer to toolcontext:ToolContext:transform#ToolContext#transform_phase= */
(nitmethod_t)VIRTUAL_frontend__ToolContext__dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#dummy */
(nitmethod_t)VIRTUAL_frontend__ToolContext__dummy_61d, /* pointer to toolcontext:ToolContext:frontend#ToolContext#dummy= */
(nitmethod_t)VIRTUAL_frontend__ToolContext__do_dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#do_dummy */
(nitmethod_t)VIRTUAL_frontend__ToolContext__run_global_phases, /* pointer to toolcontext:ToolContext:frontend#ToolContext#run_global_phases */
(nitmethod_t)VIRTUAL_ffi_base__ToolContext__ffi_language_assignation_phase, /* pointer to toolcontext:ToolContext:ffi_base#ToolContext#ffi_language_assignation_phase */
(nitmethod_t)VIRTUAL_ffi_base__ToolContext__ffi_language_assignation_phase_61d, /* pointer to toolcontext:ToolContext:ffi_base#ToolContext#ffi_language_assignation_phase= */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_ast, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_ast */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_ast_61d, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_ast= */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_model, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_model */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_model_61d, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_model= */
(nitmethod_t)VIRTUAL_header_dependency__ToolContext__header_dependancy_phase, /* pointer to toolcontext:ToolContext:header_dependency#ToolContext#header_dependancy_phase */
(nitmethod_t)VIRTUAL_header_dependency__ToolContext__header_dependancy_phase_61d, /* pointer to toolcontext:ToolContext:header_dependency#ToolContext#header_dependancy_phase= */
(nitmethod_t)VIRTUAL_pkgconfig__ToolContext__pkgconfig_phase, /* pointer to toolcontext:ToolContext:pkgconfig#ToolContext#pkgconfig_phase */
(nitmethod_t)VIRTUAL_pkgconfig__ToolContext__pkgconfig_phase_61d, /* pointer to toolcontext:ToolContext:pkgconfig#ToolContext#pkgconfig_phase= */
(nitmethod_t)VIRTUAL_c_compiler_options__ToolContext__c_compiler_options_phase, /* pointer to toolcontext:ToolContext:c_compiler_options#ToolContext#c_compiler_options_phase */
(nitmethod_t)VIRTUAL_c_compiler_options__ToolContext__c_compiler_options_phase_61d, /* pointer to toolcontext:ToolContext:c_compiler_options#ToolContext#c_compiler_options_phase= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_output, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_output_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_cc, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_cc_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_cc_path, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_cc_path */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_cc_path_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_cc_path= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_make_flags, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_make_flags_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_hardening, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_hardening_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_shortcut_range */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_shortcut_range= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_initialization, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_initialization */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_initialization_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_initialization= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_other */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_other= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_typing_test_metrics */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_typing_test_metrics= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_separate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_separate */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_separate_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_separate= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_inline_intern */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_inline_intern= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_union_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_union_attribute= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_shortcut_equate */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_shortcut_equate= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_coloring_numbers */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_coloring_numbers= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_bm_typing, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_bm_typing */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_bm_typing_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_bm_typing= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phmod_typing, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phmod_typing */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phmod_typing_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phmod_typing= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phand_typing, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phand_typing */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phand_typing_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phand_typing= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_tables_metrics */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_tables_metrics= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_erasure */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure_61d, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_erasure= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast_61d, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__init, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__init, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#init */
}
};
/* allocate ToolContext */
val* NEW_toolcontext__ToolContext(const struct type* type) {
val* self /* : ToolContext */;
long var /* : Int */;
long var1 /* : Int */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : Array[Message] */;
val* var7 /* : ComparableSorter[Message] */;
val* var8 /* : OptionContext */;
val* var9 /* : OptionCount */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[String] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[String] */;
val* var28 /* : OptionBool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[String] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[String] */;
val* var47 /* : OptionBool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Array[String] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[String] */;
val* var61 /* : OptionString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : Array[String] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[String] */;
val* var75 /* : OptionBool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var96 /* : Array[String] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[String] */;
val* var99 /* : OptionBool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : Array[String] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[String] */;
val* var113 /* : OptionCount */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : Array[String] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[String] */;
val* var132 /* : OptionBool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : Array[String] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[String] */;
val* var146 /* : OptionBool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : Array[String] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[String] */;
long var160 /* : Int */;
val* var161 /* : POSet[Phase] */;
val* var162 /* : SimpleMiscAnalysisPhase */;
val* var163 /* : null */;
val* var164 /* : LiteralPhase */;
val* var165 /* : null */;
val* var166 /* : ScopePhase */;
val* var167 /* : null */;
val* var168 /* : FlowPhase */;
val* var169 /* : Array[Phase] */;
long var170 /* : Int */;
val* var_ /* var : Array[Phase] */;
val* var171 /* : Phase */;
val* var172 /* : LocalVarInitPhase */;
val* var173 /* : Array[Phase] */;
long var174 /* : Int */;
val* var_175 /* var : Array[Phase] */;
val* var176 /* : Phase */;
val* var177 /* : OptionArray */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : Array[String] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[String] */;
val* var196 /* : OptionBool */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : String */;
val* var207 /* : Array[String] */;
long var208 /* : Int */;
val* var209 /* : NativeArray[String] */;
val* var210 /* : OptionBool */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
val* var221 /* : Array[String] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[String] */;
val* var224 /* : null */;
val* var225 /* : ModelizeClassPhase */;
val* var226 /* : null */;
val* var227 /* : ModelizePropertyPhase */;
val* var228 /* : Array[Phase] */;
long var229 /* : Int */;
val* var_230 /* var : Array[Phase] */;
val* var231 /* : Phase */;
val* var232 /* : CachedPhase */;
val* var233 /* : Array[Phase] */;
long var234 /* : Int */;
val* var_235 /* var : Array[Phase] */;
val* var236 /* : Phase */;
val* var237 /* : TypingPhase */;
val* var238 /* : Array[Phase] */;
long var239 /* : Int */;
val* var_240 /* var : Array[Phase] */;
val* var241 /* : Phase */;
val* var242 /* : Phase */;
val* var243 /* : Phase */;
val* var244 /* : AutoSuperInitPhase */;
val* var245 /* : Array[Phase] */;
long var246 /* : Int */;
val* var_247 /* var : Array[Phase] */;
val* var248 /* : Phase */;
val* var249 /* : DivByZeroPhase */;
val* var250 /* : Array[Phase] */;
long var251 /* : Int */;
val* var_252 /* var : Array[Phase] */;
val* var253 /* : Phase */;
val* var254 /* : Phase */;
val* var255 /* : VerifyNitniCallbacksPhase */;
val* var256 /* : Array[Phase] */;
long var257 /* : Int */;
val* var_258 /* var : Array[Phase] */;
val* var259 /* : Phase */;
val* var260 /* : TransformPhase */;
val* var261 /* : Array[Phase] */;
long var262 /* : Int */;
val* var_263 /* var : Array[Phase] */;
val* var264 /* : Phase */;
val* var265 /* : Phase */;
val* var266 /* : FFILanguageAssignationPhase */;
val* var267 /* : null */;
val* var268 /* : ExternClassesTypingPhaseAst */;
val* var269 /* : Array[Phase] */;
long var270 /* : Int */;
val* var_271 /* var : Array[Phase] */;
val* var272 /* : Phase */;
val* var273 /* : ExternClassesTypingPhaseModel */;
val* var274 /* : Array[Phase] */;
long var275 /* : Int */;
val* var_276 /* var : Array[Phase] */;
val* var277 /* : Phase */;
val* var278 /* : Phase */;
val* var279 /* : HeaderDependancyPhase */;
val* var280 /* : Array[Phase] */;
long var281 /* : Int */;
val* var_282 /* var : Array[Phase] */;
val* var283 /* : Phase */;
val* var284 /* : Phase */;
val* var285 /* : PkgconfigPhase */;
val* var286 /* : null */;
short int var287 /* : Bool */;
val* var288 /* : CCompilerOptionsPhase */;
val* var289 /* : null */;
val* var290 /* : OptionString */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : String */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : String */;
val* var306 /* : Array[String] */;
long var307 /* : Int */;
val* var308 /* : NativeArray[String] */;
val* var309 /* : OptionBool */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : String */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : NativeString */;
long var318 /* : Int */;
val* var319 /* : String */;
val* var320 /* : Array[String] */;
long var321 /* : Int */;
val* var322 /* : NativeArray[String] */;
val* var323 /* : OptionArray */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : String */;
val* var334 /* : Array[String] */;
long var335 /* : Int */;
val* var336 /* : NativeArray[String] */;
val* var337 /* : OptionString */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : String */;
val* var348 /* : Array[String] */;
long var349 /* : Int */;
val* var350 /* : NativeArray[String] */;
val* var351 /* : OptionString */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : String */;
val* var362 /* : Array[String] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[String] */;
val* var365 /* : OptionBool */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : String */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : String */;
val* var376 /* : Array[String] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[String] */;
val* var379 /* : OptionBool */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : String */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
long var388 /* : Int */;
val* var389 /* : String */;
val* var390 /* : Array[String] */;
long var391 /* : Int */;
val* var392 /* : NativeArray[String] */;
val* var393 /* : OptionBool */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : String */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : String */;
val* var404 /* : Array[String] */;
long var405 /* : Int */;
val* var406 /* : NativeArray[String] */;
val* var407 /* : OptionBool */;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : NativeString */;
long var411 /* : Int */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : String */;
val* var418 /* : Array[String] */;
long var419 /* : Int */;
val* var420 /* : NativeArray[String] */;
val* var421 /* : OptionBool */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : String */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : String */;
val* var432 /* : Array[String] */;
long var433 /* : Int */;
val* var434 /* : NativeArray[String] */;
val* var435 /* : OptionBool */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
long var439 /* : Int */;
val* var440 /* : String */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
long var444 /* : Int */;
val* var445 /* : String */;
val* var446 /* : Array[String] */;
long var447 /* : Int */;
val* var448 /* : NativeArray[String] */;
val* var449 /* : OptionBool */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : String */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : String */;
val* var460 /* : Array[String] */;
long var461 /* : Int */;
val* var462 /* : NativeArray[String] */;
val* var463 /* : OptionBool */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
long var467 /* : Int */;
val* var468 /* : String */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
long var472 /* : Int */;
val* var473 /* : String */;
val* var474 /* : Array[String] */;
long var475 /* : Int */;
val* var476 /* : NativeArray[String] */;
val* var477 /* : OptionBool */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : String */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : String */;
val* var488 /* : Array[String] */;
long var489 /* : Int */;
val* var490 /* : NativeArray[String] */;
val* var491 /* : OptionBool */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : String */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : String */;
val* var502 /* : Array[String] */;
long var503 /* : Int */;
val* var504 /* : NativeArray[String] */;
val* var505 /* : OptionBool */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : String */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : String */;
val* var516 /* : Array[String] */;
long var517 /* : Int */;
val* var518 /* : NativeArray[String] */;
val* var519 /* : OptionBool */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
long var523 /* : Int */;
val* var524 /* : String */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
long var528 /* : Int */;
val* var529 /* : String */;
val* var530 /* : Array[String] */;
long var531 /* : Int */;
val* var532 /* : NativeArray[String] */;
val* var533 /* : OptionBool */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
long var542 /* : Int */;
val* var543 /* : String */;
val* var544 /* : Array[String] */;
long var545 /* : Int */;
val* var546 /* : NativeArray[String] */;
val* var547 /* : OptionBool */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : String */;
val* var558 /* : Array[String] */;
long var559 /* : Int */;
val* var560 /* : NativeArray[String] */;
val* var561 /* : OptionBool */;
static val* varonce562;
val* var563 /* : String */;
char* var564 /* : NativeString */;
long var565 /* : Int */;
val* var566 /* : String */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
long var570 /* : Int */;
val* var571 /* : String */;
val* var572 /* : Array[String] */;
long var573 /* : Int */;
val* var574 /* : NativeArray[String] */;
val* var575 /* : OptionBool */;
static val* varonce576;
val* var577 /* : String */;
char* var578 /* : NativeString */;
long var579 /* : Int */;
val* var580 /* : String */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : NativeString */;
long var584 /* : Int */;
val* var585 /* : String */;
val* var586 /* : Array[String] */;
long var587 /* : Int */;
val* var588 /* : NativeArray[String] */;
val* var589 /* : OptionBool */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : NativeString */;
long var593 /* : Int */;
val* var594 /* : String */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
long var598 /* : Int */;
val* var599 /* : String */;
val* var600 /* : Array[String] */;
long var601 /* : Int */;
val* var602 /* : NativeArray[String] */;
val* var603 /* : OptionBool */;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : NativeString */;
long var607 /* : Int */;
val* var608 /* : String */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
long var612 /* : Int */;
val* var613 /* : String */;
val* var614 /* : Array[String] */;
long var615 /* : Int */;
val* var616 /* : NativeArray[String] */;
val* var617 /* : OptionBool */;
static val* varonce618;
val* var619 /* : String */;
char* var620 /* : NativeString */;
long var621 /* : Int */;
val* var622 /* : String */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
long var626 /* : Int */;
val* var627 /* : String */;
val* var628 /* : Array[String] */;
long var629 /* : Int */;
val* var630 /* : NativeArray[String] */;
self = nit_alloc(sizeof(struct instance) + 65*sizeof(nitattribute_t));
self->type = type;
self->class = &class_toolcontext__ToolContext;
var = 0;
self->attrs[COLOR_toolcontext__ToolContext___64derror_count].l = var; /* @error_count on <self:ToolContext exact> */
var1 = 0;
self->attrs[COLOR_toolcontext__ToolContext___64dwarning_count].l = var1; /* @warning_count on <self:ToolContext exact> */
if (varonce) {
var2 = varonce;
} else {
var3 = "logs";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
self->attrs[COLOR_toolcontext__ToolContext___64dlog_directory].val = var2; /* @log_directory on <self:ToolContext exact> */
var6 = NEW_array__Array(&type_array__Arraytoolcontext__Message);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Message]>*/;
CHECK_NEW_array__Array(var6);
self->attrs[COLOR_toolcontext__ToolContext___64dmessages].val = var6; /* @messages on <self:ToolContext exact> */
var7 = NEW_sorter__ComparableSorter(&type_sorter__ComparableSortertoolcontext__Message);
((void (*)(val*))(var7->class->vft[COLOR_sorter__ComparableSorter__init]))(var7) /* init on <var7:ComparableSorter[Message]>*/;
CHECK_NEW_sorter__ComparableSorter(var7);
self->attrs[COLOR_toolcontext__ToolContext___64dmessage_sorter].val = var7; /* @message_sorter on <self:ToolContext exact> */
var8 = NEW_opts__OptionContext(&type_opts__OptionContext);
((void (*)(val*))(var8->class->vft[COLOR_opts__OptionContext__init]))(var8) /* init on <var8:OptionContext>*/;
CHECK_NEW_opts__OptionContext(var8);
self->attrs[COLOR_toolcontext__ToolContext___64doption_context].val = var8; /* @option_context on <self:ToolContext exact> */
var9 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce10) {
var11 = varonce10;
} else {
var12 = "Show warnings";
var13 = 13;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "-W";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "--warn";
var23 = 6;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var25 = array_instance Array[String] */
var26 = 2;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[String]>*/;
CHECK_NEW_array__Array(var25);
}
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_opts__OptionCount__init]))(var9, var11, var25) /* init on <var9:OptionCount>*/;
CHECK_NEW_opts__OptionCount(var9);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_warn].val = var9; /* @opt_warn on <self:ToolContext exact> */
var28 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Do not show warnings";
var32 = 20;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "-q";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "--quiet";
var42 = 7;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var44 = array_instance Array[String] */
var45 = 2;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[String]>*/;
CHECK_NEW_array__Array(var44);
}
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_opts__OptionBool__init]))(var28, var30, var44) /* init on <var28:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var28);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_quiet].val = var28; /* @opt_quiet on <self:ToolContext exact> */
var47 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Generate various log files";
var51 = 26;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "--log";
var56 = 5;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var58 = array_instance Array[String] */
var59 = 1;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[String]>*/;
CHECK_NEW_array__Array(var58);
}
((void (*)(val*, val*, val*))(var47->class->vft[COLOR_opts__OptionBool__init]))(var47, var49, var58) /* init on <var47:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var47);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_log].val = var47; /* @opt_log on <self:ToolContext exact> */
var61 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce62) {
var63 = varonce62;
} else {
var64 = "Directory where to generate log files";
var65 = 37;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "--log-dir";
var70 = 9;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var72 = array_instance Array[String] */
var73 = 1;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var68;
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[String]>*/;
CHECK_NEW_array__Array(var72);
}
((void (*)(val*, val*, val*))(var61->class->vft[COLOR_opts__OptionString__init]))(var61, var63, var72) /* init on <var61:OptionString>*/;
CHECK_NEW_opts__OptionString(var61);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_log_dir].val = var61; /* @opt_log_dir on <self:ToolContext exact> */
var75 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce76) {
var77 = varonce76;
} else {
var78 = "Show Help (This screen)";
var79 = 23;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = "-h";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "-?";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "--help";
var94 = 6;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var96 = array_instance Array[String] */
var97 = 3;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var98)->values[2] = (val*) var92;
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[String]>*/;
CHECK_NEW_array__Array(var96);
}
((void (*)(val*, val*, val*))(var75->class->vft[COLOR_opts__OptionBool__init]))(var75, var77, var96) /* init on <var75:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var75);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_help].val = var75; /* @opt_help on <self:ToolContext exact> */
var99 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce100) {
var101 = varonce100;
} else {
var102 = "Show version and exit";
var103 = 21;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "--version";
var108 = 9;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var110 = array_instance Array[String] */
var111 = 1;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var106;
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[String]>*/;
CHECK_NEW_array__Array(var110);
}
((void (*)(val*, val*, val*))(var99->class->vft[COLOR_opts__OptionBool__init]))(var99, var101, var110) /* init on <var99:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var99);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_version].val = var99; /* @opt_version on <self:ToolContext exact> */
var113 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce114) {
var115 = varonce114;
} else {
var116 = "Verbose";
var117 = 7;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "-v";
var122 = 2;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "--verbose";
var127 = 9;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var129 = array_instance Array[String] */
var130 = 2;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var120;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var125;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[String]>*/;
CHECK_NEW_array__Array(var129);
}
((void (*)(val*, val*, val*))(var113->class->vft[COLOR_opts__OptionCount__init]))(var113, var115, var129) /* init on <var113:OptionCount>*/;
CHECK_NEW_opts__OptionCount(var113);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_verbose].val = var113; /* @opt_verbose on <self:ToolContext exact> */
var132 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce133) {
var134 = varonce133;
} else {
var135 = "Stop on first error";
var136 = 19;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "--stop-on-first-error";
var141 = 21;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var143 = array_instance Array[String] */
var144 = 1;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var139;
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[String]>*/;
CHECK_NEW_array__Array(var143);
}
((void (*)(val*, val*, val*))(var132->class->vft[COLOR_opts__OptionBool__init]))(var132, var134, var143) /* init on <var132:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var132);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_stop_on_first_error].val = var132; /* @opt_stop_on_first_error on <self:ToolContext exact> */
var146 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce147) {
var148 = varonce147;
} else {
var149 = "Do not use color to display errors and warnings";
var150 = 47;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "--no-color";
var155 = 10;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var157 = array_instance Array[String] */
var158 = 1;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var153;
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[String]>*/;
CHECK_NEW_array__Array(var157);
}
((void (*)(val*, val*, val*))(var146->class->vft[COLOR_opts__OptionBool__init]))(var146, var148, var157) /* init on <var146:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var146);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_no_color].val = var146; /* @opt_no_color on <self:ToolContext exact> */
var160 = 0;
self->attrs[COLOR_toolcontext__ToolContext___64dverbose_level].l = var160; /* @verbose_level on <self:ToolContext exact> */
var161 = NEW_poset__POSet(&type_poset__POSetphase__Phase);
((void (*)(val*))(var161->class->vft[COLOR_poset__POSet__init]))(var161) /* init on <var161:POSet[Phase]>*/;
CHECK_NEW_poset__POSet(var161);
self->attrs[COLOR_phase__ToolContext___64dphases].val = var161; /* @phases on <self:ToolContext exact> */
var162 = NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(&type_simple_misc_analysis__SimpleMiscAnalysisPhase);
var163 = NULL;
((void (*)(val*, val*, val*))(var162->class->vft[COLOR_phase__Phase__init]))(var162, self, var163) /* init on <var162:SimpleMiscAnalysisPhase>*/;
CHECK_NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(var162);
self->attrs[COLOR_simple_misc_analysis__ToolContext___64dsimple_misc_analysis_phase].val = var162; /* @simple_misc_analysis_phase on <self:ToolContext exact> */
var164 = NEW_literal__LiteralPhase(&type_literal__LiteralPhase);
var165 = NULL;
((void (*)(val*, val*, val*))(var164->class->vft[COLOR_phase__Phase__init]))(var164, self, var165) /* init on <var164:LiteralPhase>*/;
CHECK_NEW_literal__LiteralPhase(var164);
self->attrs[COLOR_literal__ToolContext___64dliteral_phase].val = var164; /* @literal_phase on <self:ToolContext exact> */
var166 = NEW_scope__ScopePhase(&type_scope__ScopePhase);
var167 = NULL;
((void (*)(val*, val*, val*))(var166->class->vft[COLOR_phase__Phase__init]))(var166, self, var167) /* init on <var166:ScopePhase>*/;
CHECK_NEW_scope__ScopePhase(var166);
self->attrs[COLOR_scope__ToolContext___64dscope_phase].val = var166; /* @scope_phase on <self:ToolContext exact> */
var168 = NEW_flow__FlowPhase(&type_flow__FlowPhase);
var169 = NEW_array__Array(&type_array__Arrayphase__Phase);
var170 = 1;
((void (*)(val*, long))(var169->class->vft[COLOR_array__Array__with_capacity]))(var169, var170) /* with_capacity on <var169:Array[Phase]>*/;
CHECK_NEW_array__Array(var169);
var_ = var169;
var171 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ToolContext__scope_phase]))(self) /* scope_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var171) /* push on <var_:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var168->class->vft[COLOR_phase__Phase__init]))(var168, self, var_) /* init on <var168:FlowPhase>*/;
CHECK_NEW_flow__FlowPhase(var168);
self->attrs[COLOR_flow__ToolContext___64dflow_phase].val = var168; /* @flow_phase on <self:ToolContext exact> */
var172 = NEW_local_var_init__LocalVarInitPhase(&type_local_var_init__LocalVarInitPhase);
var173 = NEW_array__Array(&type_array__Arrayphase__Phase);
var174 = 1;
((void (*)(val*, long))(var173->class->vft[COLOR_array__Array__with_capacity]))(var173, var174) /* with_capacity on <var173:Array[Phase]>*/;
CHECK_NEW_array__Array(var173);
var_175 = var173;
var176 = ((val* (*)(val*))(self->class->vft[COLOR_flow__ToolContext__flow_phase]))(self) /* flow_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_175->class->vft[COLOR_abstract_collection__Sequence__push]))(var_175, var176) /* push on <var_175:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var172->class->vft[COLOR_phase__Phase__init]))(var172, self, var_175) /* init on <var172:LocalVarInitPhase>*/;
CHECK_NEW_local_var_init__LocalVarInitPhase(var172);
self->attrs[COLOR_local_var_init__ToolContext___64dlocal_var_init_phase].val = var172; /* @local_var_init_phase on <self:ToolContext exact> */
var177 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce178) {
var179 = varonce178;
} else {
var180 = "Set include path for loaders (may be used more than once)";
var181 = 57;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "-I";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "--path";
var191 = 6;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var193 = array_instance Array[String] */
var194 = 2;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var184;
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var189;
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[String]>*/;
CHECK_NEW_array__Array(var193);
}
((void (*)(val*, val*, val*))(var177->class->vft[COLOR_opts__OptionArray__init]))(var177, var179, var193) /* init on <var177:OptionArray>*/;
CHECK_NEW_opts__OptionArray(var177);
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_path].val = var177; /* @opt_path on <self:ToolContext exact> */
var196 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce197) {
var198 = varonce197;
} else {
var199 = "Stop after meta-model processing";
var200 = 32;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "--only-metamodel";
var205 = 16;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var207 = array_instance Array[String] */
var208 = 1;
var209 = NEW_array__NativeArray(var208, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var209)->values[0] = (val*) var203;
((void (*)(val*, val*, long))(var207->class->vft[COLOR_array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[String]>*/;
CHECK_NEW_array__Array(var207);
}
((void (*)(val*, val*, val*))(var196->class->vft[COLOR_opts__OptionBool__init]))(var196, var198, var207) /* init on <var196:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var196);
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_metamodel].val = var196; /* @opt_only_metamodel on <self:ToolContext exact> */
var210 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce211) {
var212 = varonce211;
} else {
var213 = "Only proceed to parse step of loaders";
var214 = 37;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "--only-parse";
var219 = 12;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var221 = array_instance Array[String] */
var222 = 1;
var223 = NEW_array__NativeArray(var222, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var223)->values[0] = (val*) var217;
((void (*)(val*, val*, long))(var221->class->vft[COLOR_array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[String]>*/;
CHECK_NEW_array__Array(var221);
}
((void (*)(val*, val*, val*))(var210->class->vft[COLOR_opts__OptionBool__init]))(var210, var212, var221) /* init on <var210:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var210);
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_parse].val = var210; /* @opt_only_parse on <self:ToolContext exact> */
var224 = NULL;
self->attrs[COLOR_modelbuilder__ToolContext___64dmodelbuilder_real].val = var224; /* @modelbuilder_real on <self:ToolContext exact> */
var225 = NEW_modelize_class__ModelizeClassPhase(&type_modelize_class__ModelizeClassPhase);
var226 = NULL;
((void (*)(val*, val*, val*))(var225->class->vft[COLOR_phase__Phase__init]))(var225, self, var226) /* init on <var225:ModelizeClassPhase>*/;
CHECK_NEW_modelize_class__ModelizeClassPhase(var225);
self->attrs[COLOR_modelize_class__ToolContext___64dmodelize_class_phase].val = var225; /* @modelize_class_phase on <self:ToolContext exact> */
var227 = NEW_modelize_property__ModelizePropertyPhase(&type_modelize_property__ModelizePropertyPhase);
var228 = NEW_array__Array(&type_array__Arrayphase__Phase);
var229 = 1;
((void (*)(val*, long))(var228->class->vft[COLOR_array__Array__with_capacity]))(var228, var229) /* with_capacity on <var228:Array[Phase]>*/;
CHECK_NEW_array__Array(var228);
var_230 = var228;
var231 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_230->class->vft[COLOR_abstract_collection__Sequence__push]))(var_230, var231) /* push on <var_230:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var227->class->vft[COLOR_phase__Phase__init]))(var227, self, var_230) /* init on <var227:ModelizePropertyPhase>*/;
CHECK_NEW_modelize_property__ModelizePropertyPhase(var227);
self->attrs[COLOR_modelize_property__ToolContext___64dmodelize_property_phase].val = var227; /* @modelize_property_phase on <self:ToolContext exact> */
var232 = NEW_cached__CachedPhase(&type_cached__CachedPhase);
var233 = NEW_array__Array(&type_array__Arrayphase__Phase);
var234 = 1;
((void (*)(val*, long))(var233->class->vft[COLOR_array__Array__with_capacity]))(var233, var234) /* with_capacity on <var233:Array[Phase]>*/;
CHECK_NEW_array__Array(var233);
var_235 = var233;
var236 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_235->class->vft[COLOR_abstract_collection__Sequence__push]))(var_235, var236) /* push on <var_235:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var232->class->vft[COLOR_cached__CachedPhase__init]))(var232, self, var_235) /* init on <var232:CachedPhase>*/;
CHECK_NEW_cached__CachedPhase(var232);
self->attrs[COLOR_cached__ToolContext___64dcached_phase].val = var232; /* @cached_phase on <self:ToolContext exact> */
var237 = NEW_typing__TypingPhase(&type_typing__TypingPhase);
var238 = NEW_array__Array(&type_array__Arrayphase__Phase);
var239 = 3;
((void (*)(val*, long))(var238->class->vft[COLOR_array__Array__with_capacity]))(var238, var239) /* with_capacity on <var238:Array[Phase]>*/;
CHECK_NEW_array__Array(var238);
var_240 = var238;
var241 = ((val* (*)(val*))(self->class->vft[COLOR_flow__ToolContext__flow_phase]))(self) /* flow_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__Sequence__push]))(var_240, var241) /* push on <var_240:Array[Phase]>*/;
var242 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__Sequence__push]))(var_240, var242) /* push on <var_240:Array[Phase]>*/;
var243 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__ToolContext__local_var_init_phase]))(self) /* local_var_init_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__Sequence__push]))(var_240, var243) /* push on <var_240:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var237->class->vft[COLOR_phase__Phase__init]))(var237, self, var_240) /* init on <var237:TypingPhase>*/;
CHECK_NEW_typing__TypingPhase(var237);
self->attrs[COLOR_typing__ToolContext___64dtyping_phase].val = var237; /* @typing_phase on <self:ToolContext exact> */
var244 = NEW_auto_super_init__AutoSuperInitPhase(&type_auto_super_init__AutoSuperInitPhase);
var245 = NEW_array__Array(&type_array__Arrayphase__Phase);
var246 = 1;
((void (*)(val*, long))(var245->class->vft[COLOR_array__Array__with_capacity]))(var245, var246) /* with_capacity on <var245:Array[Phase]>*/;
CHECK_NEW_array__Array(var245);
var_247 = var245;
var248 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_247->class->vft[COLOR_abstract_collection__Sequence__push]))(var_247, var248) /* push on <var_247:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var244->class->vft[COLOR_phase__Phase__init]))(var244, self, var_247) /* init on <var244:AutoSuperInitPhase>*/;
CHECK_NEW_auto_super_init__AutoSuperInitPhase(var244);
self->attrs[COLOR_auto_super_init__ToolContext___64dauto_super_init_phase].val = var244; /* @auto_super_init_phase on <self:ToolContext exact> */
var249 = NEW_div_by_zero__DivByZeroPhase(&type_div_by_zero__DivByZeroPhase);
var250 = NEW_array__Array(&type_array__Arrayphase__Phase);
var251 = 2;
((void (*)(val*, long))(var250->class->vft[COLOR_array__Array__with_capacity]))(var250, var251) /* with_capacity on <var250:Array[Phase]>*/;
CHECK_NEW_array__Array(var250);
var_252 = var250;
var253 = ((val* (*)(val*))(self->class->vft[COLOR_literal__ToolContext__literal_phase]))(self) /* literal_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_252->class->vft[COLOR_abstract_collection__Sequence__push]))(var_252, var253) /* push on <var_252:Array[Phase]>*/;
var254 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_252->class->vft[COLOR_abstract_collection__Sequence__push]))(var_252, var254) /* push on <var_252:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var249->class->vft[COLOR_phase__Phase__init]))(var249, self, var_252) /* init on <var249:DivByZeroPhase>*/;
CHECK_NEW_div_by_zero__DivByZeroPhase(var249);
self->attrs[COLOR_div_by_zero__ToolContext___64ddiv_by_zero_phase].val = var249; /* @div_by_zero_phase on <self:ToolContext exact> */
var255 = NEW_nitni_callbacks__VerifyNitniCallbacksPhase(&type_nitni_callbacks__VerifyNitniCallbacksPhase);
var256 = NEW_array__Array(&type_array__Arrayphase__Phase);
var257 = 1;
((void (*)(val*, long))(var256->class->vft[COLOR_array__Array__with_capacity]))(var256, var257) /* with_capacity on <var256:Array[Phase]>*/;
CHECK_NEW_array__Array(var256);
var_258 = var256;
var259 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_258->class->vft[COLOR_abstract_collection__Sequence__push]))(var_258, var259) /* push on <var_258:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var255->class->vft[COLOR_phase__Phase__init]))(var255, self, var_258) /* init on <var255:VerifyNitniCallbacksPhase>*/;
CHECK_NEW_nitni_callbacks__VerifyNitniCallbacksPhase(var255);
self->attrs[COLOR_nitni_callbacks__ToolContext___64dverify_nitni_callback_phase].val = var255; /* @verify_nitni_callback_phase on <self:ToolContext exact> */
var260 = NEW_transform__TransformPhase(&type_transform__TransformPhase);
var261 = NEW_array__Array(&type_array__Arrayphase__Phase);
var262 = 2;
((void (*)(val*, long))(var261->class->vft[COLOR_array__Array__with_capacity]))(var261, var262) /* with_capacity on <var261:Array[Phase]>*/;
CHECK_NEW_array__Array(var261);
var_263 = var261;
var264 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_263->class->vft[COLOR_abstract_collection__Sequence__push]))(var_263, var264) /* push on <var_263:Array[Phase]>*/;
var265 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__ToolContext__auto_super_init_phase]))(self) /* auto_super_init_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_263->class->vft[COLOR_abstract_collection__Sequence__push]))(var_263, var265) /* push on <var_263:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var260->class->vft[COLOR_phase__Phase__init]))(var260, self, var_263) /* init on <var260:TransformPhase>*/;
CHECK_NEW_transform__TransformPhase(var260);
self->attrs[COLOR_transform__ToolContext___64dtransform_phase].val = var260; /* @transform_phase on <self:ToolContext exact> */
var266 = NEW_ffi_base__FFILanguageAssignationPhase(&type_ffi_base__FFILanguageAssignationPhase);
var267 = NULL;
((void (*)(val*, val*, val*))(var266->class->vft[COLOR_phase__Phase__init]))(var266, self, var267) /* init on <var266:FFILanguageAssignationPhase>*/;
CHECK_NEW_ffi_base__FFILanguageAssignationPhase(var266);
self->attrs[COLOR_ffi_base__ToolContext___64dffi_language_assignation_phase].val = var266; /* @ffi_language_assignation_phase on <self:ToolContext exact> */
var268 = NEW_extern_classes__ExternClassesTypingPhaseAst(&type_extern_classes__ExternClassesTypingPhaseAst);
var269 = NEW_array__Array(&type_array__Arrayphase__Phase);
var270 = 1;
((void (*)(val*, long))(var269->class->vft[COLOR_array__Array__with_capacity]))(var269, var270) /* with_capacity on <var269:Array[Phase]>*/;
CHECK_NEW_array__Array(var269);
var_271 = var269;
var272 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ToolContext__ffi_language_assignation_phase]))(self) /* ffi_language_assignation_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_271->class->vft[COLOR_abstract_collection__Sequence__push]))(var_271, var272) /* push on <var_271:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var268->class->vft[COLOR_phase__Phase__init]))(var268, self, var_271) /* init on <var268:ExternClassesTypingPhaseAst>*/;
CHECK_NEW_extern_classes__ExternClassesTypingPhaseAst(var268);
self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_ast].val = var268; /* @extern_classes_typing_phase_ast on <self:ToolContext exact> */
var273 = NEW_extern_classes__ExternClassesTypingPhaseModel(&type_extern_classes__ExternClassesTypingPhaseModel);
var274 = NEW_array__Array(&type_array__Arrayphase__Phase);
var275 = 2;
((void (*)(val*, long))(var274->class->vft[COLOR_array__Array__with_capacity]))(var274, var275) /* with_capacity on <var274:Array[Phase]>*/;
CHECK_NEW_array__Array(var274);
var_276 = var274;
var277 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__ToolContext__extern_classes_typing_phase_ast]))(self) /* extern_classes_typing_phase_ast on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_276->class->vft[COLOR_abstract_collection__Sequence__push]))(var_276, var277) /* push on <var_276:Array[Phase]>*/;
var278 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_276->class->vft[COLOR_abstract_collection__Sequence__push]))(var_276, var278) /* push on <var_276:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var273->class->vft[COLOR_phase__Phase__init]))(var273, self, var_276) /* init on <var273:ExternClassesTypingPhaseModel>*/;
CHECK_NEW_extern_classes__ExternClassesTypingPhaseModel(var273);
self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_model].val = var273; /* @extern_classes_typing_phase_model on <self:ToolContext exact> */
var279 = NEW_header_dependency__HeaderDependancyPhase(&type_header_dependency__HeaderDependancyPhase);
var280 = NEW_array__Array(&type_array__Arrayphase__Phase);
var281 = 2;
((void (*)(val*, long))(var280->class->vft[COLOR_array__Array__with_capacity]))(var280, var281) /* with_capacity on <var280:Array[Phase]>*/;
CHECK_NEW_array__Array(var280);
var_282 = var280;
var283 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ToolContext__ffi_language_assignation_phase]))(self) /* ffi_language_assignation_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_282->class->vft[COLOR_abstract_collection__Sequence__push]))(var_282, var283) /* push on <var_282:Array[Phase]>*/;
var284 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_282->class->vft[COLOR_abstract_collection__Sequence__push]))(var_282, var284) /* push on <var_282:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var279->class->vft[COLOR_phase__Phase__init]))(var279, self, var_282) /* init on <var279:HeaderDependancyPhase>*/;
CHECK_NEW_header_dependency__HeaderDependancyPhase(var279);
self->attrs[COLOR_header_dependency__ToolContext___64dheader_dependancy_phase].val = var279; /* @header_dependancy_phase on <self:ToolContext exact> */
var285 = NEW_pkgconfig__PkgconfigPhase(&type_pkgconfig__PkgconfigPhase);
var286 = NULL;
((void (*)(val*, val*, val*))(var285->class->vft[COLOR_phase__Phase__init]))(var285, self, var286) /* init on <var285:PkgconfigPhase>*/;
CHECK_NEW_pkgconfig__PkgconfigPhase(var285);
self->attrs[COLOR_pkgconfig__ToolContext___64dpkgconfig_phase].val = var285; /* @pkgconfig_phase on <self:ToolContext exact> */
var287 = ((short int (*)(val*))(self->class->vft[COLOR_frontend__ToolContext__do_dummy]))(self) /* do_dummy on <self:ToolContext exact>*/;
self->attrs[COLOR_frontend__ToolContext___64ddummy].s = var287; /* @dummy on <self:ToolContext exact> */
var288 = NEW_c_compiler_options__CCompilerOptionsPhase(&type_c_compiler_options__CCompilerOptionsPhase);
var289 = NULL;
((void (*)(val*, val*, val*))(var288->class->vft[COLOR_phase__Phase__init]))(var288, self, var289) /* init on <var288:CCompilerOptionsPhase>*/;
CHECK_NEW_c_compiler_options__CCompilerOptionsPhase(var288);
self->attrs[COLOR_c_compiler_options__ToolContext___64dc_compiler_options_phase].val = var288; /* @c_compiler_options_phase on <self:ToolContext exact> */
var290 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce291) {
var292 = varonce291;
} else {
var293 = "Output file";
var294 = 11;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = "-o";
var299 = 2;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "--output";
var304 = 8;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
var306 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var306 = array_instance Array[String] */
var307 = 2;
var308 = NEW_array__NativeArray(var307, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var308)->values[0] = (val*) var297;
((struct instance_array__NativeArray*)var308)->values[1] = (val*) var302;
((void (*)(val*, val*, long))(var306->class->vft[COLOR_array__Array__with_native]))(var306, var308, var307) /* with_native on <var306:Array[String]>*/;
CHECK_NEW_array__Array(var306);
}
((void (*)(val*, val*, val*))(var290->class->vft[COLOR_opts__OptionString__init]))(var290, var292, var306) /* init on <var290:OptionString>*/;
CHECK_NEW_opts__OptionString(var290);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val = var290; /* @opt_output on <self:ToolContext exact> */
var309 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce310) {
var311 = varonce310;
} else {
var312 = "Do not invoke C compiler";
var313 = 24;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
if (varonce315) {
var316 = varonce315;
} else {
var317 = "--no-cc";
var318 = 7;
var319 = string__NativeString__to_s_with_length(var317, var318);
var316 = var319;
varonce315 = var316;
}
var320 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var320 = array_instance Array[String] */
var321 = 1;
var322 = NEW_array__NativeArray(var321, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var322)->values[0] = (val*) var316;
((void (*)(val*, val*, long))(var320->class->vft[COLOR_array__Array__with_native]))(var320, var322, var321) /* with_native on <var320:Array[String]>*/;
CHECK_NEW_array__Array(var320);
}
((void (*)(val*, val*, val*))(var309->class->vft[COLOR_opts__OptionBool__init]))(var309, var311, var320) /* init on <var309:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var309);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_cc].val = var309; /* @opt_no_cc on <self:ToolContext exact> */
var323 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce324) {
var325 = varonce324;
} else {
var326 = "Set include path for C header files (may be used more than once)";
var327 = 64;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = "--cc-path";
var332 = 9;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var334 = array_instance Array[String] */
var335 = 1;
var336 = NEW_array__NativeArray(var335, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var336)->values[0] = (val*) var330;
((void (*)(val*, val*, long))(var334->class->vft[COLOR_array__Array__with_native]))(var334, var336, var335) /* with_native on <var334:Array[String]>*/;
CHECK_NEW_array__Array(var334);
}
((void (*)(val*, val*, val*))(var323->class->vft[COLOR_opts__OptionArray__init]))(var323, var325, var334) /* init on <var323:OptionArray>*/;
CHECK_NEW_opts__OptionArray(var323);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_cc_path].val = var323; /* @opt_cc_path on <self:ToolContext exact> */
var337 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce338) {
var339 = varonce338;
} else {
var340 = "Additional options to make";
var341 = 26;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "--make-flags";
var346 = 12;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
var348 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var348 = array_instance Array[String] */
var349 = 1;
var350 = NEW_array__NativeArray(var349, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var350)->values[0] = (val*) var344;
((void (*)(val*, val*, long))(var348->class->vft[COLOR_array__Array__with_native]))(var348, var350, var349) /* with_native on <var348:Array[String]>*/;
CHECK_NEW_array__Array(var348);
}
((void (*)(val*, val*, val*))(var337->class->vft[COLOR_opts__OptionString__init]))(var337, var339, var348) /* init on <var337:OptionString>*/;
CHECK_NEW_opts__OptionString(var337);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_make_flags].val = var337; /* @opt_make_flags on <self:ToolContext exact> */
var351 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce352) {
var353 = varonce352;
} else {
var354 = "Directory used to generate temporary files";
var355 = 42;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
if (varonce357) {
var358 = varonce357;
} else {
var359 = "--compile-dir";
var360 = 13;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var362 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var362 = array_instance Array[String] */
var363 = 1;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var358;
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[String]>*/;
CHECK_NEW_array__Array(var362);
}
((void (*)(val*, val*, val*))(var351->class->vft[COLOR_opts__OptionString__init]))(var351, var353, var362) /* init on <var351:OptionString>*/;
CHECK_NEW_opts__OptionString(var351);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_compile_dir].val = var351; /* @opt_compile_dir on <self:ToolContext exact> */
var365 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce366) {
var367 = varonce366;
} else {
var368 = "Generate contracts in the C code against bugs in the compiler";
var369 = 61;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = "--hardening";
var374 = 11;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var376 = array_instance Array[String] */
var377 = 1;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var372;
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[String]>*/;
CHECK_NEW_array__Array(var376);
}
((void (*)(val*, val*, val*))(var365->class->vft[COLOR_opts__OptionBool__init]))(var365, var367, var376) /* init on <var365:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var365);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_hardening].val = var365; /* @opt_hardening on <self:ToolContext exact> */
var379 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce380) {
var381 = varonce380;
} else {
var382 = "Always insantiate a range and its iterator on \'for\' loops";
var383 = 57;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
if (varonce385) {
var386 = varonce385;
} else {
var387 = "--no-shortcut-range";
var388 = 19;
var389 = string__NativeString__to_s_with_length(var387, var388);
var386 = var389;
varonce385 = var386;
}
var390 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var390 = array_instance Array[String] */
var391 = 1;
var392 = NEW_array__NativeArray(var391, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var392)->values[0] = (val*) var386;
((void (*)(val*, val*, long))(var390->class->vft[COLOR_array__Array__with_native]))(var390, var392, var391) /* with_native on <var390:Array[String]>*/;
CHECK_NEW_array__Array(var390);
}
((void (*)(val*, val*, val*))(var379->class->vft[COLOR_opts__OptionBool__init]))(var379, var381, var390) /* init on <var379:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var379);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_shortcut_range].val = var379; /* @opt_no_shortcut_range on <self:ToolContext exact> */
var393 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce394) {
var395 = varonce394;
} else {
var396 = "Disable type tests of covariant parameters (dangerous)";
var397 = 54;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
if (varonce399) {
var400 = varonce399;
} else {
var401 = "--no-check-covariance";
var402 = 21;
var403 = string__NativeString__to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
var404 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var404 = array_instance Array[String] */
var405 = 1;
var406 = NEW_array__NativeArray(var405, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var406)->values[0] = (val*) var400;
((void (*)(val*, val*, long))(var404->class->vft[COLOR_array__Array__with_native]))(var404, var406, var405) /* with_native on <var404:Array[String]>*/;
CHECK_NEW_array__Array(var404);
}
((void (*)(val*, val*, val*))(var393->class->vft[COLOR_opts__OptionBool__init]))(var393, var395, var404) /* init on <var393:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var393);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_covariance].val = var393; /* @opt_no_check_covariance on <self:ToolContext exact> */
var407 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce408) {
var409 = varonce408;
} else {
var410 = "Disable isset tests at the end of constructors (dangerous)";
var411 = 58;
var412 = string__NativeString__to_s_with_length(var410, var411);
var409 = var412;
varonce408 = var409;
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = "--no-check-initialization";
var416 = 25;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
var418 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var418 = array_instance Array[String] */
var419 = 1;
var420 = NEW_array__NativeArray(var419, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var420)->values[0] = (val*) var414;
((void (*)(val*, val*, long))(var418->class->vft[COLOR_array__Array__with_native]))(var418, var420, var419) /* with_native on <var418:Array[String]>*/;
CHECK_NEW_array__Array(var418);
}
((void (*)(val*, val*, val*))(var407->class->vft[COLOR_opts__OptionBool__init]))(var407, var409, var418) /* init on <var407:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var407);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_initialization].val = var407; /* @opt_no_check_initialization on <self:ToolContext exact> */
var421 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce422) {
var423 = varonce422;
} else {
var424 = "Disable the evaluation of explicit \'assert\' and \'as\' (dangerous)";
var425 = 64;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
if (varonce427) {
var428 = varonce427;
} else {
var429 = "--no-check-assert";
var430 = 17;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
var432 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var432 = array_instance Array[String] */
var433 = 1;
var434 = NEW_array__NativeArray(var433, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var434)->values[0] = (val*) var428;
((void (*)(val*, val*, long))(var432->class->vft[COLOR_array__Array__with_native]))(var432, var434, var433) /* with_native on <var432:Array[String]>*/;
CHECK_NEW_array__Array(var432);
}
((void (*)(val*, val*, val*))(var421->class->vft[COLOR_opts__OptionBool__init]))(var421, var423, var432) /* init on <var421:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var421);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_assert].val = var421; /* @opt_no_check_assert on <self:ToolContext exact> */
var435 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce436) {
var437 = varonce436;
} else {
var438 = "Disable implicit casts on unsafe expression usage (dangerous)";
var439 = 61;
var440 = string__NativeString__to_s_with_length(var438, var439);
var437 = var440;
varonce436 = var437;
}
if (varonce441) {
var442 = varonce441;
} else {
var443 = "--no-check-autocast";
var444 = 19;
var445 = string__NativeString__to_s_with_length(var443, var444);
var442 = var445;
varonce441 = var442;
}
var446 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var446 = array_instance Array[String] */
var447 = 1;
var448 = NEW_array__NativeArray(var447, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var448)->values[0] = (val*) var442;
((void (*)(val*, val*, long))(var446->class->vft[COLOR_array__Array__with_native]))(var446, var448, var447) /* with_native on <var446:Array[String]>*/;
CHECK_NEW_array__Array(var446);
}
((void (*)(val*, val*, val*))(var435->class->vft[COLOR_opts__OptionBool__init]))(var435, var437, var446) /* init on <var435:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var435);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_autocast].val = var435; /* @opt_no_check_autocast on <self:ToolContext exact> */
var449 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce450) {
var451 = varonce450;
} else {
var452 = "Disable implicit tests: unset attribute, null receiver (dangerous)";
var453 = 66;
var454 = string__NativeString__to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = "--no-check-other";
var458 = 16;
var459 = string__NativeString__to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
var460 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var460 = array_instance Array[String] */
var461 = 1;
var462 = NEW_array__NativeArray(var461, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var462)->values[0] = (val*) var456;
((void (*)(val*, val*, long))(var460->class->vft[COLOR_array__Array__with_native]))(var460, var462, var461) /* with_native on <var460:Array[String]>*/;
CHECK_NEW_array__Array(var460);
}
((void (*)(val*, val*, val*))(var449->class->vft[COLOR_opts__OptionBool__init]))(var449, var451, var460) /* init on <var449:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var449);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_other].val = var449; /* @opt_no_check_other on <self:ToolContext exact> */
var463 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce464) {
var465 = varonce464;
} else {
var466 = "Enable static and dynamic count of all type tests";
var467 = 49;
var468 = string__NativeString__to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
if (varonce469) {
var470 = varonce469;
} else {
var471 = "--typing-test-metrics";
var472 = 21;
var473 = string__NativeString__to_s_with_length(var471, var472);
var470 = var473;
varonce469 = var470;
}
var474 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var474 = array_instance Array[String] */
var475 = 1;
var476 = NEW_array__NativeArray(var475, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var476)->values[0] = (val*) var470;
((void (*)(val*, val*, long))(var474->class->vft[COLOR_array__Array__with_native]))(var474, var476, var475) /* with_native on <var474:Array[String]>*/;
CHECK_NEW_array__Array(var474);
}
((void (*)(val*, val*, val*))(var463->class->vft[COLOR_opts__OptionBool__init]))(var463, var465, var474) /* init on <var463:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var463);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_typing_test_metrics].val = var463; /* @opt_typing_test_metrics on <self:ToolContext exact> */
var477 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce478) {
var479 = varonce478;
} else {
var480 = "Use separate compilation";
var481 = 24;
var482 = string__NativeString__to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
if (varonce483) {
var484 = varonce483;
} else {
var485 = "--separate";
var486 = 10;
var487 = string__NativeString__to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
var488 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var488 = array_instance Array[String] */
var489 = 1;
var490 = NEW_array__NativeArray(var489, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var490)->values[0] = (val*) var484;
((void (*)(val*, val*, long))(var488->class->vft[COLOR_array__Array__with_native]))(var488, var490, var489) /* with_native on <var488:Array[String]>*/;
CHECK_NEW_array__Array(var488);
}
((void (*)(val*, val*, val*))(var477->class->vft[COLOR_opts__OptionBool__init]))(var477, var479, var488) /* init on <var477:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var477);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_separate].val = var477; /* @opt_separate on <self:ToolContext exact> */
var491 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce492) {
var493 = varonce492;
} else {
var494 = "Do not inline call to intern methods";
var495 = 36;
var496 = string__NativeString__to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
if (varonce497) {
var498 = varonce497;
} else {
var499 = "--no-inline-intern";
var500 = 18;
var501 = string__NativeString__to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
var502 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var502 = array_instance Array[String] */
var503 = 1;
var504 = NEW_array__NativeArray(var503, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var504)->values[0] = (val*) var498;
((void (*)(val*, val*, long))(var502->class->vft[COLOR_array__Array__with_native]))(var502, var504, var503) /* with_native on <var502:Array[String]>*/;
CHECK_NEW_array__Array(var502);
}
((void (*)(val*, val*, val*))(var491->class->vft[COLOR_opts__OptionBool__init]))(var491, var493, var502) /* init on <var491:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var491);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_inline_intern].val = var491; /* @opt_no_inline_intern on <self:ToolContext exact> */
var505 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce506) {
var507 = varonce506;
} else {
var508 = "Put primitive attibutes in a box instead of an union";
var509 = 52;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
if (varonce511) {
var512 = varonce511;
} else {
var513 = "--no-union-attribute";
var514 = 20;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
var516 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var516 = array_instance Array[String] */
var517 = 1;
var518 = NEW_array__NativeArray(var517, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var518)->values[0] = (val*) var512;
((void (*)(val*, val*, long))(var516->class->vft[COLOR_array__Array__with_native]))(var516, var518, var517) /* with_native on <var516:Array[String]>*/;
CHECK_NEW_array__Array(var516);
}
((void (*)(val*, val*, val*))(var505->class->vft[COLOR_opts__OptionBool__init]))(var505, var507, var516) /* init on <var505:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var505);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_union_attribute].val = var505; /* @opt_no_union_attribute on <self:ToolContext exact> */
var519 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce520) {
var521 = varonce520;
} else {
var522 = "Always call == in a polymorphic way";
var523 = 35;
var524 = string__NativeString__to_s_with_length(var522, var523);
var521 = var524;
varonce520 = var521;
}
if (varonce525) {
var526 = varonce525;
} else {
var527 = "--no-shortcut-equal";
var528 = 19;
var529 = string__NativeString__to_s_with_length(var527, var528);
var526 = var529;
varonce525 = var526;
}
var530 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var530 = array_instance Array[String] */
var531 = 1;
var532 = NEW_array__NativeArray(var531, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var532)->values[0] = (val*) var526;
((void (*)(val*, val*, long))(var530->class->vft[COLOR_array__Array__with_native]))(var530, var532, var531) /* with_native on <var530:Array[String]>*/;
CHECK_NEW_array__Array(var530);
}
((void (*)(val*, val*, val*))(var519->class->vft[COLOR_opts__OptionBool__init]))(var519, var521, var530) /* init on <var519:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var519);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_shortcut_equate].val = var519; /* @opt_no_shortcut_equate on <self:ToolContext exact> */
var533 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce534) {
var535 = varonce534;
} else {
var536 = "Inline colors and ids";
var537 = 21;
var538 = string__NativeString__to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "--inline-coloring-numbers";
var542 = 25;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
var544 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var544 = array_instance Array[String] */
var545 = 1;
var546 = NEW_array__NativeArray(var545, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var546)->values[0] = (val*) var540;
((void (*)(val*, val*, long))(var544->class->vft[COLOR_array__Array__with_native]))(var544, var546, var545) /* with_native on <var544:Array[String]>*/;
CHECK_NEW_array__Array(var544);
}
((void (*)(val*, val*, val*))(var533->class->vft[COLOR_opts__OptionBool__init]))(var533, var535, var544) /* init on <var533:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var533);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_inline_coloring_numbers].val = var533; /* @opt_inline_coloring_numbers on <self:ToolContext exact> */
var547 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce548) {
var549 = varonce548;
} else {
var550 = "Colorize items incrementaly, used to simulate binary matrix typing";
var551 = 66;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = "--bm-typing";
var556 = 11;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
var558 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var558 = array_instance Array[String] */
var559 = 1;
var560 = NEW_array__NativeArray(var559, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var560)->values[0] = (val*) var554;
((void (*)(val*, val*, long))(var558->class->vft[COLOR_array__Array__with_native]))(var558, var560, var559) /* with_native on <var558:Array[String]>*/;
CHECK_NEW_array__Array(var558);
}
((void (*)(val*, val*, val*))(var547->class->vft[COLOR_opts__OptionBool__init]))(var547, var549, var558) /* init on <var547:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var547);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_bm_typing].val = var547; /* @opt_bm_typing on <self:ToolContext exact> */
var561 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce562) {
var563 = varonce562;
} else {
var564 = "Replace coloration by perfect hashing (with mod operator)";
var565 = 57;
var566 = string__NativeString__to_s_with_length(var564, var565);
var563 = var566;
varonce562 = var563;
}
if (varonce567) {
var568 = varonce567;
} else {
var569 = "--phmod-typing";
var570 = 14;
var571 = string__NativeString__to_s_with_length(var569, var570);
var568 = var571;
varonce567 = var568;
}
var572 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var572 = array_instance Array[String] */
var573 = 1;
var574 = NEW_array__NativeArray(var573, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var574)->values[0] = (val*) var568;
((void (*)(val*, val*, long))(var572->class->vft[COLOR_array__Array__with_native]))(var572, var574, var573) /* with_native on <var572:Array[String]>*/;
CHECK_NEW_array__Array(var572);
}
((void (*)(val*, val*, val*))(var561->class->vft[COLOR_opts__OptionBool__init]))(var561, var563, var572) /* init on <var561:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var561);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phmod_typing].val = var561; /* @opt_phmod_typing on <self:ToolContext exact> */
var575 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce576) {
var577 = varonce576;
} else {
var578 = "Replace coloration by perfect hashing (with and operator)";
var579 = 57;
var580 = string__NativeString__to_s_with_length(var578, var579);
var577 = var580;
varonce576 = var577;
}
if (varonce581) {
var582 = varonce581;
} else {
var583 = "--phand-typing";
var584 = 14;
var585 = string__NativeString__to_s_with_length(var583, var584);
var582 = var585;
varonce581 = var582;
}
var586 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var586 = array_instance Array[String] */
var587 = 1;
var588 = NEW_array__NativeArray(var587, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var588)->values[0] = (val*) var582;
((void (*)(val*, val*, long))(var586->class->vft[COLOR_array__Array__with_native]))(var586, var588, var587) /* with_native on <var586:Array[String]>*/;
CHECK_NEW_array__Array(var586);
}
((void (*)(val*, val*, val*))(var575->class->vft[COLOR_opts__OptionBool__init]))(var575, var577, var586) /* init on <var575:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var575);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phand_typing].val = var575; /* @opt_phand_typing on <self:ToolContext exact> */
var589 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce590) {
var591 = varonce590;
} else {
var592 = "Enable static size measuring of tables used for vft, typing and resolution";
var593 = 74;
var594 = string__NativeString__to_s_with_length(var592, var593);
var591 = var594;
varonce590 = var591;
}
if (varonce595) {
var596 = varonce595;
} else {
var597 = "--tables-metrics";
var598 = 16;
var599 = string__NativeString__to_s_with_length(var597, var598);
var596 = var599;
varonce595 = var596;
}
var600 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var600 = array_instance Array[String] */
var601 = 1;
var602 = NEW_array__NativeArray(var601, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var602)->values[0] = (val*) var596;
((void (*)(val*, val*, long))(var600->class->vft[COLOR_array__Array__with_native]))(var600, var602, var601) /* with_native on <var600:Array[String]>*/;
CHECK_NEW_array__Array(var600);
}
((void (*)(val*, val*, val*))(var589->class->vft[COLOR_opts__OptionBool__init]))(var589, var591, var600) /* init on <var589:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var589);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_tables_metrics].val = var589; /* @opt_tables_metrics on <self:ToolContext exact> */
var603 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce604) {
var605 = varonce604;
} else {
var606 = "Erase generic types";
var607 = 19;
var608 = string__NativeString__to_s_with_length(var606, var607);
var605 = var608;
varonce604 = var605;
}
if (varonce609) {
var610 = varonce609;
} else {
var611 = "--erasure";
var612 = 9;
var613 = string__NativeString__to_s_with_length(var611, var612);
var610 = var613;
varonce609 = var610;
}
var614 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var614 = array_instance Array[String] */
var615 = 1;
var616 = NEW_array__NativeArray(var615, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var616)->values[0] = (val*) var610;
((void (*)(val*, val*, long))(var614->class->vft[COLOR_array__Array__with_native]))(var614, var616, var615) /* with_native on <var614:Array[String]>*/;
CHECK_NEW_array__Array(var614);
}
((void (*)(val*, val*, val*))(var603->class->vft[COLOR_opts__OptionBool__init]))(var603, var605, var614) /* init on <var603:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var603);
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_erasure].val = var603; /* @opt_erasure on <self:ToolContext exact> */
var617 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce618) {
var619 = varonce618;
} else {
var620 = "Disable implicit casts on unsafe return with erasure-typing policy (dangerous)";
var621 = 78;
var622 = string__NativeString__to_s_with_length(var620, var621);
var619 = var622;
varonce618 = var619;
}
if (varonce623) {
var624 = varonce623;
} else {
var625 = "--no-check-erasure-cast";
var626 = 23;
var627 = string__NativeString__to_s_with_length(var625, var626);
var624 = var627;
varonce623 = var624;
}
var628 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var628 = array_instance Array[String] */
var629 = 1;
var630 = NEW_array__NativeArray(var629, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var630)->values[0] = (val*) var624;
((void (*)(val*, val*, long))(var628->class->vft[COLOR_array__Array__with_native]))(var628, var630, var629) /* with_native on <var628:Array[String]>*/;
CHECK_NEW_array__Array(var628);
}
((void (*)(val*, val*, val*))(var617->class->vft[COLOR_opts__OptionBool__init]))(var617, var619, var628) /* init on <var617:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var617);
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_no_check_erasure_cast].val = var617; /* @opt_no_check_erasure_cast on <self:ToolContext exact> */
return self;
}
/* allocate ToolContext */
void CHECK_NEW_toolcontext__ToolContext(val* self) {
}
/* runtime class phase__AnnotationPhaseVisitor */
const struct class class_phase__AnnotationPhaseVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to phase:AnnotationPhaseVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to phase:AnnotationPhaseVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to phase:AnnotationPhaseVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to phase:AnnotationPhaseVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to phase:AnnotationPhaseVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to phase:AnnotationPhaseVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to phase:AnnotationPhaseVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to phase:AnnotationPhaseVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to phase:AnnotationPhaseVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to phase:AnnotationPhaseVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to phase:AnnotationPhaseVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to phase:AnnotationPhaseVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to phase:AnnotationPhaseVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to phase:AnnotationPhaseVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to phase:AnnotationPhaseVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to phase:AnnotationPhaseVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to phase:AnnotationPhaseVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to phase:AnnotationPhaseVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to phase:AnnotationPhaseVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to phase:AnnotationPhaseVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to phase:AnnotationPhaseVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to phase:AnnotationPhaseVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to phase:AnnotationPhaseVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to phase:AnnotationPhaseVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__visit, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__phase, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#phase */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__phase_61d, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#phase= */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__init, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#init */
}
};
/* allocate AnnotationPhaseVisitor */
val* NEW_phase__AnnotationPhaseVisitor(const struct type* type) {
val* self /* : AnnotationPhaseVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_phase__AnnotationPhaseVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AnnotationPhaseVisitor exact> */
return self;
}
/* allocate AnnotationPhaseVisitor */
void CHECK_NEW_phase__AnnotationPhaseVisitor(val* self) {
val* var /* : Phase */;
var = self->attrs[COLOR_phase__AnnotationPhaseVisitor___64dphase].val; /* @phase on <self:AnnotationPhaseVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @phase");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 93);
exit(1);
}
}
/* runtime class simple_misc_analysis__SimpleMiscAnalysisPhase */
const struct class class_simple_misc_analysis__SimpleMiscAnalysisPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscAnalysisPhase__process_nmodule, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate SimpleMiscAnalysisPhase */
val* NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(const struct type* type) {
val* self /* : SimpleMiscAnalysisPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_simple_misc_analysis__SimpleMiscAnalysisPhase;
return self;
}
/* allocate SimpleMiscAnalysisPhase */
void CHECK_NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:SimpleMiscAnalysisPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:SimpleMiscAnalysisPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class simple_misc_analysis__SimpleMiscVisitor */
const struct class class_simple_misc_analysis__SimpleMiscVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to simple_misc_analysis:SimpleMiscVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to simple_misc_analysis:SimpleMiscVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to simple_misc_analysis:SimpleMiscVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to simple_misc_analysis:SimpleMiscVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to simple_misc_analysis:SimpleMiscVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__visit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__once_count, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#once_count */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__once_count_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#once_count= */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__toolcontext, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#toolcontext */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__warning, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#warning */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__init, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#init */
}
};
/* allocate SimpleMiscVisitor */
val* NEW_simple_misc_analysis__SimpleMiscVisitor(const struct type* type) {
val* self /* : SimpleMiscVisitor */;
val* var /* : null */;
long var1 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_simple_misc_analysis__SimpleMiscVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:SimpleMiscVisitor exact> */
var1 = 0;
self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64donce_count].l = var1; /* @once_count on <self:SimpleMiscVisitor exact> */
return self;
}
/* allocate SimpleMiscVisitor */
void CHECK_NEW_simple_misc_analysis__SimpleMiscVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64dtoolcontext].val; /* @toolcontext on <self:SimpleMiscVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/simple_misc_analysis.nit", 57);
exit(1);
}
}
/* runtime class literal__LiteralPhase */
const struct class class_literal__LiteralPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to literal:LiteralPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to literal:LiteralPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to literal:LiteralPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to literal:LiteralPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to literal:LiteralPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to literal:LiteralPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to literal:LiteralPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to literal:LiteralPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to literal:LiteralPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to literal:LiteralPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to literal:LiteralPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to literal:LiteralPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to literal:LiteralPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to literal:LiteralPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to literal:LiteralPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to literal:LiteralPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to literal:LiteralPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to literal:LiteralPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to literal:LiteralPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to literal:LiteralPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to literal:LiteralPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to literal:LiteralPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to literal:LiteralPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to literal:LiteralPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to literal:LiteralPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to literal:LiteralPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to literal:LiteralPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to literal:LiteralPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_literal__LiteralPhase__process_nmodule, /* pointer to literal:LiteralPhase:literal#LiteralPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to literal:LiteralPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to literal:LiteralPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to literal:LiteralPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to literal:LiteralPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate LiteralPhase */
val* NEW_literal__LiteralPhase(const struct type* type) {
val* self /* : LiteralPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_literal__LiteralPhase;
return self;
}
/* allocate LiteralPhase */
void CHECK_NEW_literal__LiteralPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:LiteralPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:LiteralPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class literal__LiteralVisitor */
const struct class class_literal__LiteralVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to literal:LiteralVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to literal:LiteralVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to literal:LiteralVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to literal:LiteralVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to literal:LiteralVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to literal:LiteralVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to literal:LiteralVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to literal:LiteralVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to literal:LiteralVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to literal:LiteralVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to literal:LiteralVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to literal:LiteralVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to literal:LiteralVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to literal:LiteralVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to literal:LiteralVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to literal:LiteralVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to literal:LiteralVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to literal:LiteralVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to literal:LiteralVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to literal:LiteralVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to literal:LiteralVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to literal:LiteralVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to literal:LiteralVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to literal:LiteralVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to literal:LiteralVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to literal:LiteralVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__visit, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__toolcontext, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__toolcontext_61d, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__init, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#init */
}
};
/* allocate LiteralVisitor */
val* NEW_literal__LiteralVisitor(const struct type* type) {
val* self /* : LiteralVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_literal__LiteralVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LiteralVisitor exact> */
return self;
}
/* allocate LiteralVisitor */
void CHECK_NEW_literal__LiteralVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_literal__LiteralVisitor___64dtoolcontext].val; /* @toolcontext on <self:LiteralVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/literal.nit", 47);
exit(1);
}
}
/* runtime class scope__ScopePhase */
const struct class class_scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopePhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ScopePhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:ScopePhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopePhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopePhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ScopePhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ScopePhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopePhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopePhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopePhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopePhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopePhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopePhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopePhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ScopePhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ScopePhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ScopePhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ScopePhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:ScopePhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:ScopePhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ScopePhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ScopePhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ScopePhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:ScopePhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:ScopePhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ScopePhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ScopePhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:ScopePhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:ScopePhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:ScopePhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopePhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopePhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopePhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopePhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopePhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopePhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopePhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopePhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopePhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopePhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:ScopePhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:ScopePhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:ScopePhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:ScopePhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:ScopePhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:ScopePhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:ScopePhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:ScopePhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to scope:ScopePhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to scope:ScopePhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to scope:ScopePhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to scope:ScopePhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to scope:ScopePhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_scope__ScopePhase__process_npropdef, /* pointer to scope:ScopePhase:scope#ScopePhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to scope:ScopePhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to scope:ScopePhase:frontend#Phase#process_mainmodule */
}
};
/* allocate ScopePhase */
val* NEW_scope__ScopePhase(const struct type* type) {
val* self /* : ScopePhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ScopePhase;
return self;
}
/* allocate ScopePhase */
void CHECK_NEW_scope__ScopePhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ScopePhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ScopePhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class scope__Variable */
const struct class class_scope__Variable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Variable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:Variable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:Variable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Variable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Variable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:Variable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:Variable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Variable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_scope__Variable__to_s, /* pointer to scope:Variable:scope#Variable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Variable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Variable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Variable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Variable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Variable:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:Variable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:Variable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:Variable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:Variable:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:Variable:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:Variable:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:Variable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:Variable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:Variable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:Variable:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:Variable:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:Variable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:Variable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:Variable:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:Variable:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:Variable:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Variable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Variable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Variable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Variable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Variable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Variable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Variable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Variable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Variable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Variable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:Variable:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:Variable:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:Variable:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:Variable:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:Variable:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:Variable:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:Variable:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:Variable:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__Variable__name, /* pointer to scope:Variable:scope#Variable#name */
(nitmethod_t)VIRTUAL_scope__Variable__name_61d, /* pointer to scope:Variable:scope#Variable#name= */
(nitmethod_t)VIRTUAL_scope__Variable__init, /* pointer to scope:Variable:scope#Variable#init */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type, /* pointer to scope:Variable:typing#Variable#declared_type */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type_61d, /* pointer to scope:Variable:typing#Variable#declared_type= */
}
};
/* allocate Variable */
val* NEW_scope__Variable(const struct type* type) {
val* self /* : Variable */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Variable;
return self;
}
/* allocate Variable */
void CHECK_NEW_scope__Variable(val* self) {
val* var /* : String */;
val* var1 /* : nullable MType */;
var = self->attrs[COLOR_scope__Variable___64dname].val; /* @name on <self:Variable> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 36);
exit(1);
}
var1 = self->attrs[COLOR_typing__Variable___64ddeclared_type].val; /* @declared_type on <self:Variable> */
}
/* runtime class scope__EscapeMark */
const struct class class_scope__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:EscapeMark:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:EscapeMark:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:EscapeMark:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:EscapeMark:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:EscapeMark:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:EscapeMark:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:EscapeMark:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:EscapeMark:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:EscapeMark:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:EscapeMark:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:EscapeMark:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:EscapeMark:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:EscapeMark:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:EscapeMark:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:EscapeMark:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:EscapeMark:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:EscapeMark:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:EscapeMark:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:EscapeMark:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:EscapeMark:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:EscapeMark:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:EscapeMark:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:EscapeMark:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:EscapeMark:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:EscapeMark:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:EscapeMark:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:EscapeMark:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:EscapeMark:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:EscapeMark:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:EscapeMark:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:EscapeMark:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:EscapeMark:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:EscapeMark:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:EscapeMark:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:EscapeMark:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:EscapeMark:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:EscapeMark:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:EscapeMark:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:EscapeMark:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:EscapeMark:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:EscapeMark:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:EscapeMark:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:EscapeMark:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:EscapeMark:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:EscapeMark:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:EscapeMark:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:EscapeMark:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:EscapeMark:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name, /* pointer to scope:EscapeMark:scope#EscapeMark#name */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#name= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__for_loop, /* pointer to scope:EscapeMark:scope#EscapeMark#for_loop */
(nitmethod_t)VIRTUAL_scope__EscapeMark__for_loop_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#for_loop= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continues, /* pointer to scope:EscapeMark:scope#EscapeMark#continues */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continues_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#continues= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__breaks, /* pointer to scope:EscapeMark:scope#EscapeMark#breaks */
(nitmethod_t)VIRTUAL_scope__EscapeMark__breaks_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#breaks= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__init, /* pointer to scope:EscapeMark:scope#EscapeMark#init */
}
};
/* allocate EscapeMark */
val* NEW_scope__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : Array[AContinueExpr] */;
val* var1 /* : Array[ABreakExpr] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__EscapeMark;
var = NEW_array__Array(&type_array__Arrayparser_nodes__AContinueExpr);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[AContinueExpr]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_scope__EscapeMark___64dcontinues].val = var; /* @continues on <self:EscapeMark exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__ABreakExpr);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[ABreakExpr]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_scope__EscapeMark___64dbreaks].val = var1; /* @breaks on <self:EscapeMark exact> */
return self;
}
/* allocate EscapeMark */
void CHECK_NEW_scope__EscapeMark(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
var = self->attrs[COLOR_scope__EscapeMark___64dname].val; /* @name on <self:EscapeMark> */
var1 = self->attrs[COLOR_scope__EscapeMark___64dfor_loop].s; /* @for_loop on <self:EscapeMark> */
}
/* runtime class scope__ScopeVisitor */
const struct class class_scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ScopeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ScopeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ScopeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ScopeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ScopeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ScopeVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:ScopeVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:ScopeVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ScopeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ScopeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ScopeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:ScopeVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:ScopeVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ScopeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ScopeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:ScopeVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:ScopeVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:ScopeVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:ScopeVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:ScopeVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:ScopeVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:ScopeVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:ScopeVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__visit, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__selfvariable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__selfvariable_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__init, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__scopes, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__scopes_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__register_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#register_variable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__search_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_variable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__enter_visit_block, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#enter_visit_block */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__search_label, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_label */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__make_escape_mark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#make_escape_mark */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__get_escapemark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#get_escapemark */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__error, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#error */
}
};
/* allocate ScopeVisitor */
val* NEW_scope__ScopeVisitor(const struct type* type) {
val* self /* : ScopeVisitor */;
val* var /* : null */;
val* var1 /* : Variable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : List[Scope] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ScopeVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ScopeVisitor exact> */
var1 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var2 = varonce;
} else {
var3 = "self";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var1->class->vft[COLOR_scope__Variable__init]))(var1, var2) /* init on <var1:Variable>*/;
CHECK_NEW_scope__Variable(var1);
self->attrs[COLOR_scope__ScopeVisitor___64dselfvariable].val = var1; /* @selfvariable on <self:ScopeVisitor exact> */
var6 = NEW_list__List(&type_list__Listscope__Scope);
((void (*)(val*))(var6->class->vft[COLOR_list__List__init]))(var6) /* init on <var6:List[Scope]>*/;
CHECK_NEW_list__List(var6);
self->attrs[COLOR_scope__ScopeVisitor___64dscopes].val = var6; /* @scopes on <self:ScopeVisitor exact> */
return self;
}
/* allocate ScopeVisitor */
void CHECK_NEW_scope__ScopeVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_scope__ScopeVisitor___64dtoolcontext].val; /* @toolcontext on <self:ScopeVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 68);
exit(1);
}
}
/* runtime class scope__Scope */
const struct class class_scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Scope:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:Scope:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:Scope:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Scope:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Scope:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:Scope:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:Scope:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Scope:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:Scope:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Scope:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Scope:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Scope:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Scope:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Scope:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:Scope:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:Scope:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:Scope:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:Scope:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:Scope:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:Scope:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:Scope:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:Scope:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:Scope:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:Scope:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:Scope:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:Scope:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:Scope:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:Scope:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:Scope:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:Scope:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Scope:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Scope:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Scope:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Scope:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Scope:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Scope:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Scope:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Scope:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Scope:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Scope:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:Scope:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:Scope:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:Scope:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:Scope:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:Scope:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:Scope:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:Scope:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:Scope:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__Scope__variables, /* pointer to scope:Scope:scope#Scope#variables */
(nitmethod_t)VIRTUAL_scope__Scope__variables_61d, /* pointer to scope:Scope:scope#Scope#variables= */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark, /* pointer to scope:Scope:scope#Scope#escapemark */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark_61d, /* pointer to scope:Scope:scope#Scope#escapemark= */
(nitmethod_t)VIRTUAL_scope__Scope__get_variable, /* pointer to scope:Scope:scope#Scope#get_variable */
(nitmethod_t)VIRTUAL_scope__Scope__init, /* pointer to scope:Scope:scope#Scope#init */
}
};
/* allocate Scope */
val* NEW_scope__Scope(const struct type* type) {
val* self /* : Scope */;
val* var /* : HashMap[String, Variable] */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Scope;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringscope__Variable);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[String, Variable]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_scope__Scope___64dvariables].val = var; /* @variables on <self:Scope exact> */
var1 = NULL;
self->attrs[COLOR_scope__Scope___64descapemark].val = var1; /* @escapemark on <self:Scope exact> */
return self;
}
/* allocate Scope */
void CHECK_NEW_scope__Scope(val* self) {
}
/* runtime class flow__FlowPhase */
const struct class class_flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to flow:FlowPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to flow:FlowPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to flow:FlowPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to flow:FlowPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to flow:FlowPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to flow:FlowPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to flow:FlowPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to flow:FlowPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to flow:FlowPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to flow:FlowPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to flow:FlowPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to flow:FlowPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to flow:FlowPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to flow:FlowPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to flow:FlowPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to flow:FlowPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to flow:FlowPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to flow:FlowPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to flow:FlowPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to flow:FlowPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_flow__FlowPhase__process_npropdef, /* pointer to flow:FlowPhase:flow#FlowPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to flow:FlowPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to flow:FlowPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate FlowPhase */
val* NEW_flow__FlowPhase(const struct type* type) {
val* self /* : FlowPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowPhase;
return self;
}
/* allocate FlowPhase */
void CHECK_NEW_flow__FlowPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:FlowPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:FlowPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class flow__FlowVisitor */
const struct class class_flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to flow:FlowVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to flow:FlowVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to flow:FlowVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to flow:FlowVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to flow:FlowVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to flow:FlowVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to flow:FlowVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to flow:FlowVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to flow:FlowVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to flow:FlowVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to flow:FlowVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to flow:FlowVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to flow:FlowVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to flow:FlowVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to flow:FlowVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__current_flow_context, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__current_flow_context_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__toolcontext, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__toolcontext_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__init, /* pointer to flow:FlowVisitor:flow#FlowVisitor#init */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__first, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__first_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit_expr, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit_expr */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__flows, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__flows_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__printflow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#printflow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_sub_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_merge_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_merge_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_true_false_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_sub_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_true_false_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_unreachable_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_unreachable_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__merge_continues_to, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_continues_to */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__merge_breaks, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_breaks */
}
};
/* allocate FlowVisitor */
val* NEW_flow__FlowVisitor(const struct type* type) {
val* self /* : FlowVisitor */;
val* var /* : null */;
val* var1 /* : Array[FlowContext] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:FlowVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_flow__FlowVisitor___64dflows].val = var1; /* @flows on <self:FlowVisitor exact> */
return self;
}
/* allocate FlowVisitor */
void CHECK_NEW_flow__FlowVisitor(val* self) {
val* var /* : FlowContext */;
val* var1 /* : ToolContext */;
val* var2 /* : nullable ANode */;
var = self->attrs[COLOR_flow__FlowVisitor___64dcurrent_flow_context].val; /* @current_flow_context on <self:FlowVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @current_flow_context");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 39);
exit(1);
}
var1 = self->attrs[COLOR_flow__FlowVisitor___64dtoolcontext].val; /* @toolcontext on <self:FlowVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/flow.nit", 41);
exit(1);
}
var2 = self->attrs[COLOR_flow__FlowVisitor___64dfirst].val; /* @first on <self:FlowVisitor> */
}
/* runtime class flow__FlowContext */
const struct class class_flow__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to flow:FlowContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to flow:FlowContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to flow:FlowContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to flow:FlowContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to flow:FlowContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to flow:FlowContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to flow:FlowContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to flow:FlowContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to flow:FlowContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to flow:FlowContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to flow:FlowContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to flow:FlowContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to flow:FlowContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to flow:FlowContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to flow:FlowContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_flow__FlowContext__previous, /* pointer to flow:FlowContext:flow#FlowContext#previous */
(nitmethod_t)VIRTUAL_flow__FlowContext__previous_61d, /* pointer to flow:FlowContext:flow#FlowContext#previous= */
(nitmethod_t)VIRTUAL_flow__FlowContext__loops, /* pointer to flow:FlowContext:flow#FlowContext#loops */
(nitmethod_t)VIRTUAL_flow__FlowContext__loops_61d, /* pointer to flow:FlowContext:flow#FlowContext#loops= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_marked_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_marked_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_already_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_already_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_start, /* pointer to flow:FlowContext:flow#FlowContext#is_start */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_start_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_start= */
(nitmethod_t)VIRTUAL_flow__FlowContext__node, /* pointer to flow:FlowContext:flow#FlowContext#node */
(nitmethod_t)VIRTUAL_flow__FlowContext__node_61d, /* pointer to flow:FlowContext:flow#FlowContext#node= */
(nitmethod_t)VIRTUAL_flow__FlowContext__name, /* pointer to flow:FlowContext:flow#FlowContext#name */
(nitmethod_t)VIRTUAL_flow__FlowContext__name_61d, /* pointer to flow:FlowContext:flow#FlowContext#name= */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_true, /* pointer to flow:FlowContext:flow#FlowContext#when_true */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_true_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_true= */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_false, /* pointer to flow:FlowContext:flow#FlowContext#when_false */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_false_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_false= */
(nitmethod_t)VIRTUAL_flow__FlowContext__add_previous, /* pointer to flow:FlowContext:flow#FlowContext#add_previous */
(nitmethod_t)VIRTUAL_flow__FlowContext__add_loop, /* pointer to flow:FlowContext:flow#FlowContext#add_loop */
(nitmethod_t)VIRTUAL_flow__FlowContext__init, /* pointer to flow:FlowContext:flow#FlowContext#init */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__set_vars, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__set_vars_61d, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars= */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__is_variable_set, /* pointer to flow:FlowContext:local_var_init#FlowContext#is_variable_set */
(nitmethod_t)VIRTUAL_typing__FlowContext__vars, /* pointer to flow:FlowContext:typing#FlowContext#vars */
(nitmethod_t)VIRTUAL_typing__FlowContext__vars_61d, /* pointer to flow:FlowContext:typing#FlowContext#vars= */
(nitmethod_t)VIRTUAL_typing__FlowContext__cache, /* pointer to flow:FlowContext:typing#FlowContext#cache */
(nitmethod_t)VIRTUAL_typing__FlowContext__cache_61d, /* pointer to flow:FlowContext:typing#FlowContext#cache= */
(nitmethod_t)VIRTUAL_typing__FlowContext__set_var, /* pointer to flow:FlowContext:typing#FlowContext#set_var */
(nitmethod_t)VIRTUAL_typing__FlowContext__collect_types, /* pointer to flow:FlowContext:typing#FlowContext#collect_types */
}
};
/* allocate FlowContext */
val* NEW_flow__FlowContext(const struct type* type) {
val* self /* : FlowContext */;
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : null */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : HashSet[Variable] */;
val* var11 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : HashMap[Variable, nullable Array[nullable MType]] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowContext;
var = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[FlowContext]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_flow__FlowContext___64dprevious].val = var; /* @previous on <self:FlowContext exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_flow__FlowContext___64dloops].val = var1; /* @loops on <self:FlowContext exact> */
var2 = 0;
self->attrs[COLOR_flow__FlowContext___64dis_marked_unreachable].s = var2; /* @is_marked_unreachable on <self:FlowContext exact> */
var3 = 0;
self->attrs[COLOR_flow__FlowContext___64dis_already_unreachable].s = var3; /* @is_already_unreachable on <self:FlowContext exact> */
var4 = 0;
self->attrs[COLOR_flow__FlowContext___64dis_start].s = var4; /* @is_start on <self:FlowContext exact> */
var5 = NULL;
self->attrs[COLOR_flow__FlowContext___64dnode].val = var5; /* @node on <self:FlowContext exact> */
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
self->attrs[COLOR_flow__FlowContext___64dname].val = var6; /* @name on <self:FlowContext exact> */
self->attrs[COLOR_flow__FlowContext___64dwhen_true].val = self; /* @when_true on <self:FlowContext exact> */
self->attrs[COLOR_flow__FlowContext___64dwhen_false].val = self; /* @when_false on <self:FlowContext exact> */
var10 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetscope__Variable);
((void (*)(val*))(var10->class->vft[COLOR_hash_collection__HashSet__init]))(var10) /* init on <var10:HashSet[Variable]>*/;
CHECK_NEW_hash_collection__HashSet(var10);
self->attrs[COLOR_local_var_init__FlowContext___64dset_vars].val = var10; /* @set_vars on <self:FlowContext exact> */
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_model__MType);
((void (*)(val*))(var11->class->vft[COLOR_hash_collection__HashMap__init]))(var11) /* init on <var11:HashMap[Variable, nullable MType]>*/;
CHECK_NEW_hash_collection__HashMap(var11);
self->attrs[COLOR_typing__FlowContext___64dvars].val = var11; /* @vars on <self:FlowContext exact> */
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashMap__init]))(var12) /* init on <var12:HashMap[Variable, nullable Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var12);
self->attrs[COLOR_typing__FlowContext___64dcache].val = var12; /* @cache on <self:FlowContext exact> */
return self;
}
/* allocate FlowContext */
void CHECK_NEW_flow__FlowContext(val* self) {
}
/* runtime class local_var_init__LocalVarInitPhase */
const struct class class_local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to local_var_init:LocalVarInitPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to local_var_init:LocalVarInitPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to local_var_init:LocalVarInitPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to local_var_init:LocalVarInitPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to local_var_init:LocalVarInitPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to local_var_init:LocalVarInitPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to local_var_init:LocalVarInitPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to local_var_init:LocalVarInitPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to local_var_init:LocalVarInitPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to local_var_init:LocalVarInitPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to local_var_init:LocalVarInitPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to local_var_init:LocalVarInitPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to local_var_init:LocalVarInitPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to local_var_init:LocalVarInitPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to local_var_init:LocalVarInitPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to local_var_init:LocalVarInitPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to local_var_init:LocalVarInitPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to local_var_init:LocalVarInitPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to local_var_init:LocalVarInitPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitPhase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init#LocalVarInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate LocalVarInitPhase */
val* NEW_local_var_init__LocalVarInitPhase(const struct type* type) {
val* self /* : LocalVarInitPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_local_var_init__LocalVarInitPhase;
return self;
}
/* allocate LocalVarInitPhase */
void CHECK_NEW_local_var_init__LocalVarInitPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:LocalVarInitPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:LocalVarInitPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class local_var_init__LocalVarInitVisitor */
const struct class class_local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to local_var_init:LocalVarInitVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to local_var_init:LocalVarInitVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to local_var_init:LocalVarInitVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to local_var_init:LocalVarInitVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to local_var_init:LocalVarInitVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to local_var_init:LocalVarInitVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to local_var_init:LocalVarInitVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to local_var_init:LocalVarInitVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__init, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#init */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars= */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_unset, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_unset */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_set */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__check_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#check_is_set */
}
};
/* allocate LocalVarInitVisitor */
val* NEW_local_var_init__LocalVarInitVisitor(const struct type* type) {
val* self /* : LocalVarInitVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[Variable] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_local_var_init__LocalVarInitVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LocalVarInitVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetscope__Variable);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[Variable]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dmaybe_unset_vars].val = var1; /* @maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* allocate LocalVarInitVisitor */
void CHECK_NEW_local_var_init__LocalVarInitVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dtoolcontext].val; /* @toolcontext on <self:LocalVarInitVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/local_var_init.nit", 47);
exit(1);
}
}
