#include "hash_collection.sep.0.h"
/* method hash_collection#HashCollection#first_item for (self: HashCollection[Object, HashNode[Object]]): nullable HashNode[Object] */
val* hash_collection__HashCollection__first_item(val* self) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#first_item for (self: Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashCollection__first_item(val* self) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashCollection__first_item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#index_at for (self: HashCollection[Object, HashNode[Object]], Object): Int */
long hash_collection__HashCollection__index_at(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_i /* var i: Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashCollection#0 */
/* <p0:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 35);
show_backtrace(1);
}
var_k = p0;
var2 = ((long (*)(val*))(var_k->class->vft[COLOR_kernel__Object__hash]))(var_k) /* hash on <var_k:Object>*/;
var3 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{ /* Inline kernel#Int#% (var2,var3) */
var6 = var2 % var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_i = var4;
var7 = 0;
{ /* Inline kernel#Int#< (var_i,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var14 = var_i < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
{ /* Inline kernel#Int#unary - (var_i) */
var17 = -var_i;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_i = var15;
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#index_at for (self: Object, Object): Int */
long VIRTUAL_hash_collection__HashCollection__index_at(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashCollection__index_at(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at for (self: HashCollection[Object, HashNode[Object]], Object): nullable HashNode[Object] */
val* hash_collection__HashCollection__node_at(val* self, val* p0) {
val* var /* : nullable HashNode[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
val* var4 /* : nullable HashNode[Object] */;
long var5 /* : Int */;
val* var6 /* : nullable HashNode[Object] */;
val* var_res /* var res: nullable HashNode[Object] */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashCollection#0 */
/* <p0:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 43);
show_backtrace(1);
}
var_k = p0;
var2 = self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
var3 = ((short int (*)(val*, val*))(var_k->class->vft[COLOR_kernel__Object__is_same_instance]))(var_k, var2) /* is_same_instance on <var_k:Object>*/;
if (var3){
var4 = self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[Object, HashNode[Object]]> */
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((long (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__index_at]))(self, var_k) /* index_at on <self:HashCollection[Object, HashNode[Object]]>*/;
var6 = ((val* (*)(val*, long, val*))(self->class->vft[COLOR_hash_collection__HashCollection__node_at_idx]))(self, var5, var_k) /* node_at_idx on <self:HashCollection[Object, HashNode[Object]]>*/;
var_res = var6;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var_k; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var_res; /* _last_accessed_node on <self:HashCollection[Object, HashNode[Object]]> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at for (self: Object, Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashCollection__node_at(val* self, val* p0) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashCollection__node_at(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at_idx for (self: HashCollection[Object, HashNode[Object]], Int, Object): nullable HashNode[Object] */
val* hash_collection__HashCollection__node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_i /* var i: Int */;
val* var_k /* var k: Object */;
val* var2 /* : nullable NativeArray[nullable HashNode[Object]] */;
val* var3 /* : nullable Object */;
val* var_c /* var c: nullable HashNode[Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : Object */;
val* var_ck /* var ck: Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable HashNode[Object] */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
const char* var_class_name15;
/* Covariant cast for argument 1 (k) <p1:Object> isa HashCollection#0 */
/* <p1:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 55);
show_backtrace(1);
}
var_i = p0;
var_k = p1;
var2 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 58);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*, long))(var2->class->vft[COLOR_array__NativeArray___91d_93d]))(var2, var_i) /* [] on <var2:nullable NativeArray[nullable HashNode[Object]]>*/;
}
var_c = var3;
for(;;) {
var4 = NULL;
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
var6 = var_c->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashNode[Object](HashNode[Object])> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 60);
show_backtrace(1);
}
var_ck = var6;
var8 = ((short int (*)(val*, val*))(var_ck->class->vft[COLOR_kernel__Object__is_same_instance]))(var_ck, var_k) /* is_same_instance on <var_ck:Object>*/;
var_ = var8;
if (var8){
var7 = var_;
} else {
var9 = ((short int (*)(val*, val*))(var_ck->class->vft[COLOR_kernel__Object___61d_61d]))(var_ck, var_k) /* == on <var_ck:Object>*/;
var7 = var9;
}
if (var7){
goto BREAK_label;
} else {
}
var10 = var_c->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashNode[Object](HashNode[Object])> */
/* <var10:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct14 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
if(var10 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var10->type->table_size) {
var11 = 0;
} else {
var11 = var10->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
var_class_name15 = var10 == NULL ? "null" : var10->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name15);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 64);
show_backtrace(1);
}
var_c = var10;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at_idx for (self: Object, Int, Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashCollection__node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashCollection__node_at_idx(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#store for (self: HashCollection[Object, HashNode[Object]], Int, HashNode[Object]) */
void hash_collection__HashCollection__store(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_node /* var node: HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable HashNode[Object] */;
val* var5 /* : nullable HashNode[Object] */;
val* var6 /* : null */;
val* var7 /* : nullable NativeArray[nullable HashNode[Object]] */;
val* var8 /* : nullable Object */;
val* var_next /* var next: nullable HashNode[Object] */;
val* var9 /* : nullable NativeArray[nullable HashNode[Object]] */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const struct type* type_struct16;
const char* var_class_name17;
long var18 /* : Int */;
long var_l /* var l: Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
/* Covariant cast for argument 1 (node) <p1:HashNode[Object]> isa HashCollection#1 */
/* <p1:HashNode[Object]> isa HashCollection#1 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#1", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 69);
show_backtrace(1);
}
var_index = p0;
var_node = p1;
var1 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var_node; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
} else {
var4 = self->attrs[COLOR_hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 76);
show_backtrace(1);
}
var4->attrs[COLOR_hash_collection__HashNode___next_item].val = var_node; /* _next_item on <var4:nullable HashNode[Object]> */
}
var5 = self->attrs[COLOR_hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
var_node->attrs[COLOR_hash_collection__HashNode___prev_item].val = var5; /* _prev_item on <var_node:HashNode[Object]> */
var6 = NULL;
var_node->attrs[COLOR_hash_collection__HashNode___next_item].val = var6; /* _next_item on <var_node:HashNode[Object]> */
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var_node; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
var7 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 83);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*, long))(var7->class->vft[COLOR_array__NativeArray___91d_93d]))(var7, var_index) /* [] on <var7:nullable NativeArray[nullable HashNode[Object]]>*/;
}
var_next = var8;
var9 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 84);
show_backtrace(1);
} else {
((void (*)(val*, long, val*))(var9->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var9, var_index, var_node) /* []= on <var9:nullable NativeArray[nullable HashNode[Object]]>*/;
}
var_node->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:HashNode[Object]> */
var10 = NULL;
if (var_next == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var_next->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
}
var12 = var_node->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_node:HashNode[Object]> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 88);
show_backtrace(1);
}
/* <var12:Object> isa nullable HashCollection#0 */
type_struct16 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype14 = type_struct16->color;
idtype15 = type_struct16->id;
if(cltype14 >= var12->type->table_size) {
var13 = 0;
} else {
var13 = var12->type->type_table[cltype14] == idtype15;
}
if (!var13) {
var_class_name17 = var12 == NULL ? "null" : var12->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#0", var_class_name17);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 88);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var12; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var_node; /* _last_accessed_node on <self:HashCollection[Object, HashNode[Object]]> */
var18 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var_l = var18;
var19 = 1;
{ /* Inline kernel#Int#+ (var_l,var19) */
var22 = var_l + var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
self->attrs[COLOR_hash_collection__HashCollection___length].l = var20; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var23 = 5;
{ /* Inline kernel#Int#+ (var_l,var23) */
var26 = var_l + var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var27 = 3;
{ /* Inline kernel#Int#* (var24,var27) */
var30 = var24 * var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var31 = 2;
{ /* Inline kernel#Int#/ (var28,var31) */
var34 = var28 / var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var_l = var32;
var35 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{ /* Inline kernel#Int#>= (var_l,var35) */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (!var38) {
var_class_name41 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var42 = var_l >= var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
if (var36){
var43 = 2;
{ /* Inline kernel#Int#* (var_l,var43) */
var46 = var_l * var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_hash_collection__HashCollection__enlarge]))(self, var44) /* enlarge on <self:HashCollection[Object, HashNode[Object]]>*/;
} else {
}
RET_LABEL:;
}
/* method hash_collection#HashCollection#store for (self: Object, Int, HashNode[Object]) */
void VIRTUAL_hash_collection__HashCollection__store(val* self, long p0, val* p1) {
hash_collection__HashCollection__store(self, p0, p1);
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: HashCollection[Object, HashNode[Object]], Object) */
void hash_collection__HashCollection__remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[Object] */;
val* var_node /* var node: nullable HashNode[Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable HashNode[Object] */;
val* var_prev /* var prev: nullable HashNode[Object] */;
val* var6 /* : nullable HashNode[Object] */;
val* var_next /* var next: nullable HashNode[Object] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
const char* var_class_name20;
val* var_ /* var : HashCollection[Object, HashNode[Object]] */;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var26 /* : nullable HashNode[Object] */;
val* var27 /* : nullable HashNode[Object] */;
val* var28 /* : null */;
short int var29 /* : Bool */;
val* var30 /* : nullable NativeArray[nullable HashNode[Object]] */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const struct type* type_struct34;
const char* var_class_name35;
val* var36 /* : null */;
short int var37 /* : Bool */;
val* var38 /* : null */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashCollection#0 */
/* <p0:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 100);
show_backtrace(1);
}
var_k = p0;
var1 = ((long (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__index_at]))(self, var_k) /* index_at on <self:HashCollection[Object, HashNode[Object]]>*/;
var_i = var1;
var2 = ((val* (*)(val*, long, val*))(self->class->vft[COLOR_hash_collection__HashCollection__node_at_idx]))(self, var_i, var_k) /* node_at_idx on <self:HashCollection[Object, HashNode[Object]]>*/;
var_node = var2;
var3 = NULL;
if (var_node == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
goto RET_LABEL;
} else {
}
var5 = var_node->attrs[COLOR_hash_collection__HashNode___prev_item].val; /* _prev_item on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_prev = var5;
var6 = var_node->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_next = var6;
var7 = NULL;
if (var_prev == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var_prev->attrs[COLOR_hash_collection__HashNode___next_item].val = var_next; /* _next_item on <var_prev:nullable HashNode[Object](HashNode[Object])> */
} else {
/* <var_next:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct12 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(var_next == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_next->type->table_size) {
var9 = 0;
} else {
var9 = var_next->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
var_class_name13 = var_next == NULL ? "null" : var_next->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 113);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var_next; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
}
var14 = NULL;
if (var_next == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
var_next->attrs[COLOR_hash_collection__HashNode___prev_item].val = var_prev; /* _prev_item on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
/* <var_prev:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct19 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(var_prev == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_prev->type->table_size) {
var16 = 0;
} else {
var16 = var_prev->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
var_class_name20 = var_prev == NULL ? "null" : var_prev->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name20);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 118);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var_prev; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
}
var_ = self;
var21 = var_->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <var_:HashCollection[Object, HashNode[Object]]> */
var22 = 1;
{ /* Inline kernel#Int#- (var21,var22) */
var25 = var21 - var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var_->attrs[COLOR_hash_collection__HashCollection___length].l = var23; /* _length on <var_:HashCollection[Object, HashNode[Object]]> */
var26 = var_node->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_prev = var26;
var27 = var_node->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_next = var27;
var28 = NULL;
if (var_prev == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
var_prev->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_prev:nullable HashNode[Object](HashNode[Object])> */
} else {
var30 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
/* <var_next:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct34 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype32 = type_struct34->color;
idtype33 = type_struct34->id;
if(var_next == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_next->type->table_size) {
var31 = 0;
} else {
var31 = var_next->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
var_class_name35 = var_next == NULL ? "null" : var_next->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name35);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 128);
show_backtrace(1);
}
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 128);
show_backtrace(1);
} else {
((void (*)(val*, long, val*))(var30->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var30, var_i, var_next) /* []= on <var30:nullable NativeArray[nullable HashNode[Object]]>*/;
}
}
var36 = NULL;
if (var_next == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (var37){
var_next->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var_prev; /* _prev_in_bucklet on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
}
var38 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var38; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: Object, Object) */
void VIRTUAL_hash_collection__HashCollection__remove_node(val* self, val* p0) {
hash_collection__HashCollection__remove_node(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: HashCollection[Object, HashNode[Object]]) */
void hash_collection__HashCollection__raz(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_i /* var i: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : nullable NativeArray[nullable HashNode[Object]] */;
val* var11 /* : null */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
val* var17 /* : null */;
val* var18 /* : null */;
val* var19 /* : null */;
var = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
var1 = 1;
{ /* Inline kernel#Int#- (var,var1) */
var4 = var - var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var_i = var2;
for(;;) {
var5 = 0;
{ /* Inline kernel#Int#>= (var_i,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var9 = var_i >= var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (!var6) break;
var10 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
var11 = NULL;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 142);
show_backtrace(1);
} else {
((void (*)(val*, long, val*))(var10->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var10, var_i, var11) /* []= on <var10:nullable NativeArray[nullable HashNode[Object]]>*/;
}
var12 = 1;
{ /* Inline kernel#Int#- (var_i,var12) */
var15 = var_i - var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_i = var13;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var16 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var16; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var17 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var17; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var18 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var18; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
var19 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var19; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: Object) */
void VIRTUAL_hash_collection__HashCollection__raz(val* self) {
hash_collection__HashCollection__raz(self);
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: HashCollection[Object, HashNode[Object]], Int) */
void hash_collection__HashCollection__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_old_cap /* var old_cap: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : null */;
val* var24 /* : NativeArray[nullable Object] */;
val* var_new_array /* var new_array: NativeArray[nullable HashNode[Object]] */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
long var_i /* var i: Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : null */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
val* var50 /* : nullable HashNode[Object] */;
val* var_node /* var node: nullable HashNode[Object] */;
val* var51 /* : null */;
short int var52 /* : Bool */;
val* var53 /* : Object */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const struct type* type_struct;
const char* var_class_name57;
long var58 /* : Int */;
long var_index /* var index: Int */;
val* var59 /* : nullable Object */;
val* var_next /* var next: nullable HashNode[Object] */;
val* var60 /* : null */;
short int var61 /* : Bool */;
val* var62 /* : nullable HashNode[Object] */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const struct type* type_struct66;
const char* var_class_name67;
var_cap = p0;
var = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
var_old_cap = var;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var2 = 1;
{ /* Inline kernel#Int#+ (var1,var2) */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
{ /* Inline kernel#Int#< (var_cap,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var8 = 1; /* easy <var3:Int> isa OTHER*/
if (!var8) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var9 = var_cap < var3;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var10 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var11 = 1;
{ /* Inline kernel#Int#+ (var10,var11) */
var14 = var10 + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_cap = var12;
} else {
}
var15 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{ /* Inline kernel#Int#<= (var_cap,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name21 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var22 = var_cap <= var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
goto RET_LABEL;
} else {
}
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var_cap; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
var23 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var23; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
var24 = ((val* (*)(val*, long))(self->class->vft[COLOR_array__ArrayCapable__calloc_array]))(self, var_cap) /* calloc_array on <self:HashCollection[Object, HashNode[Object]]>*/;
var_new_array = var24;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var_new_array; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
var25 = 1;
{ /* Inline kernel#Int#- (var_cap,var25) */
var28 = var_cap - var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_i = var26;
for(;;) {
var29 = 0;
{ /* Inline kernel#Int#>= (var_i,var29) */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (!var32) {
var_class_name35 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var36 = var_i >= var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
if (!var30) break;
var37 = NULL;
((void (*)(val*, long, val*))(var_new_array->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var_new_array, var_i, var37) /* []= on <var_new_array:NativeArray[nullable HashNode[Object]]>*/;
var38 = 1;
{ /* Inline kernel#Int#- (var_i,var38) */
var41 = var_i - var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var_i = var39;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var42 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{ /* Inline kernel#Int#<= (var42,var_old_cap) */
/* Covariant cast for argument 0 (i) <var_old_cap:Int> isa OTHER */
/* <var_old_cap:Int> isa OTHER */
var45 = 1; /* easy <var_old_cap:Int> isa OTHER*/
if (!var45) {
var_class_name48 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var49 = var42 <= var_old_cap;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (var43){
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var_node = var50;
for(;;) {
var51 = NULL;
if (var_node == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (!var52) break;
var53 = var_node->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_node:nullable HashNode[Object](HashNode[Object])> */
if (var53 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 177);
show_backtrace(1);
}
/* <var53:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype55 = type_struct->color;
idtype56 = type_struct->id;
if(cltype55 >= var53->type->table_size) {
var54 = 0;
} else {
var54 = var53->type->type_table[cltype55] == idtype56;
}
if (!var54) {
var_class_name57 = var53 == NULL ? "null" : var53->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name57);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 177);
show_backtrace(1);
}
var58 = ((long (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__index_at]))(self, var53) /* index_at on <self:HashCollection[Object, HashNode[Object]]>*/;
var_index = var58;
var59 = ((val* (*)(val*, long))(var_new_array->class->vft[COLOR_array__NativeArray___91d_93d]))(var_new_array, var_index) /* [] on <var_new_array:NativeArray[nullable HashNode[Object]]>*/;
var_next = var59;
((void (*)(val*, long, val*))(var_new_array->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var_new_array, var_index, var_node) /* []= on <var_new_array:NativeArray[nullable HashNode[Object]]>*/;
var_node->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var60 = NULL;
if (var_next == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (var61){
var_next->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
}
var62 = var_node->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[Object](HashNode[Object])> */
/* <var62:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct66 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype64 = type_struct66->color;
idtype65 = type_struct66->id;
if(var62 == NULL) {
var63 = 1;
} else {
if(cltype64 >= var62->type->table_size) {
var63 = 0;
} else {
var63 = var62->type->type_table[cltype64] == idtype65;
}
}
if (!var63) {
var_class_name67 = var62 == NULL ? "null" : var62->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name67);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 183);
show_backtrace(1);
}
var_node = var62;
CONTINUE_label68: (void)0;
}
BREAK_label68: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: Object, Int) */
void VIRTUAL_hash_collection__HashCollection__enlarge(val* self, long p0) {
hash_collection__HashCollection__enlarge(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashCollection#init for (self: HashCollection[Object, HashNode[Object]]) */
void hash_collection__HashCollection__init(val* self) {
RET_LABEL:;
}
/* method hash_collection#HashCollection#init for (self: Object) */
void VIRTUAL_hash_collection__HashCollection__init(val* self) {
hash_collection__HashCollection__init(self);
RET_LABEL:;
}
/* method hash_collection#HashNode#next_item for (self: HashNode[Object]): nullable HashNode[Object] */
val* hash_collection__HashNode__next_item(val* self) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = self->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <self:HashNode[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#next_item for (self: Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashNode__next_item(val* self) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashNode__next_item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#next_item= for (self: HashNode[Object], nullable HashNode[Object]) */
void hash_collection__HashNode__next_item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next_item) <p0:nullable HashNode[Object]> isa nullable N */
/* <p0:nullable HashNode[Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashNode_VTN];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 191);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashNode___next_item].val = p0; /* _next_item on <self:HashNode[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#next_item= for (self: Object, nullable HashNode[Object]) */
void VIRTUAL_hash_collection__HashNode__next_item_61d(val* self, val* p0) {
hash_collection__HashNode__next_item_61d(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashNode#prev_item for (self: HashNode[Object]): nullable HashNode[Object] */
val* hash_collection__HashNode__prev_item(val* self) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = self->attrs[COLOR_hash_collection__HashNode___prev_item].val; /* _prev_item on <self:HashNode[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#prev_item for (self: Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashNode__prev_item(val* self) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashNode__prev_item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashNode#prev_item= for (self: HashNode[Object], nullable HashNode[Object]) */
void hash_collection__HashNode__prev_item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev_item) <p0:nullable HashNode[Object]> isa nullable N */
/* <p0:nullable HashNode[Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashNode_VTN];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 192);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashNode___prev_item].val = p0; /* _prev_item on <self:HashNode[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#prev_item= for (self: Object, nullable HashNode[Object]) */
void VIRTUAL_hash_collection__HashNode__prev_item_61d(val* self, val* p0) {
hash_collection__HashNode__prev_item_61d(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: HashNode[Object], Object) */
void hash_collection__HashNode__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashNode#0 */
/* <p0:Object> isa HashNode#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashNode#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 195);
show_backtrace(1);
}
var_k = p0;
self->attrs[COLOR_hash_collection__HashNode___key].val = var_k; /* _key on <self:HashNode[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: Object, Object) */
void VIRTUAL_hash_collection__HashNode__init(val* self, val* p0) {
hash_collection__HashNode__init(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMap#[] for (self: HashMap[Object, nullable Object], Object): nullable Object */
val* hash_collection__HashMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var2 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 207);
show_backtrace(1);
}
var_key = p0;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__node_at]))(self, var_key) /* node_at on <self:HashMap[Object, nullable Object]>*/;
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 211);
show_backtrace(1);
} else {
var5 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#[] for (self: Object, Object): nullable Object */
val* VIRTUAL_hash_collection__HashMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = hash_collection__HashMap___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#iterator for (self: HashMap[Object, nullable Object]): HashMapIterator[Object, nullable Object] */
val* hash_collection__HashMap__iterator(val* self) {
val* var /* : HashMapIterator[Object, nullable Object] */;
val* var1 /* : HashMapIterator[Object, nullable Object] */;
var1 = NEW_hash_collection__HashMapIterator(self->type->resolution_table->types[COLOR_hash_collection__HashMapIteratorhash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
((void (*)(val*, val*))(var1->class->vft[COLOR_hash_collection__HashMapIterator__init]))(var1, self) /* init on <var1:HashMapIterator[Object, nullable Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_hash_collection__HashMap__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : HashMapIterator[Object, nullable Object] */;
var1 = hash_collection__HashMap__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#length for (self: HashMap[Object, nullable Object]): Int */
long hash_collection__HashMap__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashMap[Object, nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashMap__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMap__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#is_empty for (self: HashMap[Object, nullable Object]): Bool */
short int hash_collection__HashMap__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashMap[Object, nullable Object]> */
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMap__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMap__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#[]= for (self: HashMap[Object, nullable Object], Object, nullable Object) */
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_key /* var key: Object */;
val* var_v /* var v: nullable Object */;
long var6 /* : Int */;
long var_i /* var i: Int */;
val* var7 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : HashMapNode[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa Map#0 */
/* <p0:Object> isa Map#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 223);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa Map#1 */
/* <p1:nullable Object> isa Map#1 */
type_struct4 = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map#1", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 223);
show_backtrace(1);
}
var_key = p0;
var_v = p1;
var6 = ((long (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__index_at]))(self, var_key) /* index_at on <self:HashMap[Object, nullable Object]>*/;
var_i = var6;
var7 = ((val* (*)(val*, long, val*))(self->class->vft[COLOR_hash_collection__HashCollection__node_at_idx]))(self, var_i, var_key) /* node_at_idx on <self:HashMap[Object, nullable Object]>*/;
var_c = var7;
var8 = NULL;
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
var_c->attrs[COLOR_hash_collection__HashNode___key].val = var_key; /* _key on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c->attrs[COLOR_hash_collection__HashMapNode___value].val = var_v; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
} else {
var10 = NEW_hash_collection__HashMapNode(self->type->resolution_table->types[COLOR_hash_collection__HashMapNodehash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_hash_collection__HashMapNode__init]))(var10, var_key, var_v) /* init on <var10:HashMapNode[Object, nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_hash_collection__HashCollection__store]))(self, var_i, var10) /* store on <self:HashMap[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method hash_collection#HashMap#[]= for (self: Object, Object, nullable Object) */
void VIRTUAL_hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1) {
hash_collection__HashMap___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method hash_collection#HashMap#clear for (self: HashMap[Object, nullable Object]) */
void hash_collection__HashMap__clear(val* self) {
((void (*)(val*))(self->class->vft[COLOR_hash_collection__HashCollection__raz]))(self) /* raz on <self:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashMap#clear for (self: Object) */
void VIRTUAL_hash_collection__HashMap__clear(val* self) {
hash_collection__HashMap__clear(self);
RET_LABEL:;
}
/* method hash_collection#HashMap#init for (self: HashMap[Object, nullable Object]) */
void hash_collection__HashMap__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
((void (*)(val*))(self->class->vft[COLOR_hash_collection__HashCollection__init]))(self) /* init on <self:HashMap[Object, nullable Object]>*/;
var = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var; /* _capacity on <self:HashMap[Object, nullable Object]> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var1; /* _length on <self:HashMap[Object, nullable Object]> */
var2 = 0;
((void (*)(val*, long))(self->class->vft[COLOR_hash_collection__HashCollection__enlarge]))(self, var2) /* enlarge on <self:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashMap#init for (self: Object) */
void VIRTUAL_hash_collection__HashMap__init(val* self) {
hash_collection__HashMap__init(self);
RET_LABEL:;
}
/* method hash_collection#HashMap#keys for (self: HashMap[Object, nullable Object]): HashMapKeys[Object, nullable Object] */
val* hash_collection__HashMap__keys(val* self) {
val* var /* : HashMapKeys[Object, nullable Object] */;
val* var1 /* : HashMapKeys[Object, nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMap___64dkeys].val; /* @keys on <self:HashMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @keys");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 244);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#keys for (self: Object): Collection[Object] */
val* VIRTUAL_hash_collection__HashMap__keys(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : HashMapKeys[Object, nullable Object] */;
var1 = hash_collection__HashMap__keys(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#keys= for (self: HashMap[Object, nullable Object], HashMapKeys[Object, nullable Object]) */
void hash_collection__HashMap__keys_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (keys) <p0:HashMapKeys[Object, nullable Object]> isa HashMapKeys[HashMap#0, HashMap#1] */
/* <p0:HashMapKeys[Object, nullable Object]> isa HashMapKeys[HashMap#0, HashMap#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapKeyshash_collection__HashMap_FT0hash_collection__HashMap_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMapKeys[HashMap#0, HashMap#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 244);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMap___64dkeys].val = p0; /* @keys on <self:HashMap[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMap#keys= for (self: Object, HashMapKeys[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMap__keys_61d(val* self, val* p0) {
hash_collection__HashMap__keys_61d(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMap#values for (self: HashMap[Object, nullable Object]): HashMapValues[Object, nullable Object] */
val* hash_collection__HashMap__values(val* self) {
val* var /* : HashMapValues[Object, nullable Object] */;
val* var1 /* : HashMapValues[Object, nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMap___64dvalues].val; /* @values on <self:HashMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @values");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values for (self: Object): Collection[nullable Object] */
val* VIRTUAL_hash_collection__HashMap__values(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashMapValues[Object, nullable Object] */;
var1 = hash_collection__HashMap__values(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values= for (self: HashMap[Object, nullable Object], HashMapValues[Object, nullable Object]) */
void hash_collection__HashMap__values_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (values) <p0:HashMapValues[Object, nullable Object]> isa HashMapValues[HashMap#0, HashMap#1] */
/* <p0:HashMapValues[Object, nullable Object]> isa HashMapValues[HashMap#0, HashMap#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapValueshash_collection__HashMap_FT0hash_collection__HashMap_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMapValues[HashMap#0, HashMap#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMap___64dvalues].val = p0; /* @values on <self:HashMap[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMap#values= for (self: Object, HashMapValues[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMap__values_61d(val* self, val* p0) {
hash_collection__HashMap__values_61d(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#map for (self: HashMapKeys[Object, nullable Object]): HashMap[Object, nullable Object] */
val* hash_collection__HashMapKeys__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMapKeys___64dmap].val; /* @map on <self:HashMapKeys[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 251);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map for (self: Object): HashMap[Object, nullable Object] */
val* VIRTUAL_hash_collection__HashMapKeys__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = hash_collection__HashMapKeys__map(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map= for (self: HashMapKeys[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapKeys__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapKeys#0, HashMapKeys#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 251);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapKeys___64dmap].val = p0; /* @map on <self:HashMapKeys[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#map= for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapKeys__map_61d(val* self, val* p0) {
hash_collection__HashMapKeys__map_61d(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#count for (self: HashMapKeys[Object, nullable Object], Object): Int */
long hash_collection__HashMapKeys__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 254);
show_backtrace(1);
}
var_k = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_k) /* has on <self:HashMapKeys[Object, nullable Object]>*/;
if (var2){
var3 = 1;
var = var3;
goto RET_LABEL;
} else {
var4 = 0;
var = var4;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#count for (self: Object, nullable Object): Int */
long VIRTUAL_hash_collection__HashMapKeys__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMapKeys__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#first for (self: HashMapKeys[Object, nullable Object]): Object */
val* hash_collection__HashMapKeys__first(val* self) {
val* var /* : Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var2 /* : nullable HashNode[Object] */;
val* var3 /* : Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
var2 = var1->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 255);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var2:nullable HashNode[Object](nullable HashMapNode[Object, nullable Object])> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 255);
show_backtrace(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#first for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashMapKeys__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashMapKeys__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has for (self: HashMapKeys[Object, nullable Object], Object): Bool */
short int hash_collection__HashMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var3 /* : nullable HashNode[Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 256);
show_backtrace(1);
}
var_k = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_hash_collection__HashCollection__node_at]))(var2, var_k) /* node_at on <var2:HashMap[Object, nullable Object]>*/;
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapKeys__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has_only for (self: HashMapKeys[Object, nullable Object], Object): Bool */
short int hash_collection__HashMapKeys__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
short int var11 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 257);
show_backtrace(1);
}
var_k = p0;
var4 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_k) /* has on <self:HashMapKeys[Object, nullable Object]>*/;
var_ = var4;
if (var4){
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:HashMapKeys[Object, nullable Object]>*/;
var6 = 1;
{ /* Inline kernel#Int#== (var5,var6) */
var9 = var5 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var3 = var7;
} else {
var3 = var_;
}
var_10 = var3;
if (var3){
var2 = var_10;
} else {
var11 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:HashMapKeys[Object, nullable Object]>*/;
var2 = var11;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashMapKeys__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapKeys__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#is_empty for (self: HashMapKeys[Object, nullable Object]): Bool */
short int hash_collection__HashMapKeys__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[Object, nullable Object] */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__is_empty]))(var1) /* is_empty on <var1:HashMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMapKeys__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapKeys__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#length for (self: HashMapKeys[Object, nullable Object]): Int */
long hash_collection__HashMapKeys__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[Object, nullable Object] */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__length]))(var1) /* length on <var1:HashMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashMapKeys__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMapKeys__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#iterator for (self: HashMapKeys[Object, nullable Object]): Iterator[Object] */
val* hash_collection__HashMapKeys__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : MapKeysIterator[Object, nullable Object] */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
var1 = NEW_abstract_collection__MapKeysIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapKeysIteratorhash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1]);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var2) /* iterator on <var2:HashMap[Object, nullable Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapKeysIterator__init]))(var1, var3) /* init on <var1:MapKeysIterator[Object, nullable Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_hash_collection__HashMapKeys__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = hash_collection__HashMapKeys__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#clear for (self: HashMapKeys[Object, nullable Object]) */
void hash_collection__HashMapKeys__clear(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Map__clear]))(var) /* clear on <var:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#clear for (self: Object) */
void VIRTUAL_hash_collection__HashMapKeys__clear(val* self) {
hash_collection__HashMapKeys__clear(self);
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove for (self: HashMapKeys[Object, nullable Object], Object) */
void hash_collection__HashMapKeys__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 265);
show_backtrace(1);
}
var_key = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_hash_collection__HashCollection__remove_node]))(var1, var_key) /* remove_node on <var1:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapKeys__remove(val* self, val* p0) {
hash_collection__HashMapKeys__remove(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove_all for (self: HashMapKeys[Object, nullable Object], Object) */
void hash_collection__HashMapKeys__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 266);
show_backtrace(1);
}
var_key = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapKeys__map]))(self) /* map on <self:HashMapKeys[Object, nullable Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_hash_collection__HashCollection__remove_node]))(var1, var_key) /* remove_node on <var1:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove_all for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapKeys__remove_all(val* self, val* p0) {
hash_collection__HashMapKeys__remove_all(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: HashMapKeys[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapKeys__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapKeys#0, HashMapKeys#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 248);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapKeys___64dmap].val = p0; /* @map on <self:HashMapKeys[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapKeys__init(val* self, val* p0) {
hash_collection__HashMapKeys__init(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapValues#map for (self: HashMapValues[Object, nullable Object]): HashMap[Object, nullable Object] */
val* hash_collection__HashMapValues__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMapValues___64dmap].val; /* @map on <self:HashMapValues[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 272);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#map for (self: Object): HashMap[Object, nullable Object] */
val* VIRTUAL_hash_collection__HashMapValues__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = hash_collection__HashMapValues__map(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#map= for (self: HashMapValues[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapValues__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapValues#0, HashMapValues#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 272);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapValues___64dmap].val = p0; /* @map on <self:HashMapValues[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapValues#map= for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapValues__map_61d(val* self, val* p0) {
hash_collection__HashMapValues__map_61d(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapValues#count for (self: HashMapValues[Object, nullable Object], nullable Object): Int */
long hash_collection__HashMapValues__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_nb /* var nb: Int */;
val* var3 /* : HashMap[Object, nullable Object] */;
val* var4 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
val* var13 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 275);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
var_nb = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var4 = var3->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var3:HashMap[Object, nullable Object]> */
var_c = var4;
for(;;) {
var5 = NULL;
if (var_c == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) break;
var7 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var7 == NULL) {
var8 = (var_item == NULL);
} else {
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var_item) /* == on <var7:nullable Object>*/;
}
if (var8){
var9 = 1;
{ /* Inline kernel#Int#+ (var_nb,var9) */
var12 = var_nb + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var_nb = var10;
} else {
}
var13 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var13;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#count for (self: Object, nullable Object): Int */
long VIRTUAL_hash_collection__HashMapValues__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMapValues__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#first for (self: HashMapValues[Object, nullable Object]): nullable Object */
val* hash_collection__HashMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var2 /* : nullable HashNode[Object] */;
val* var3 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var2 = var1->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 285);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashNode[Object](nullable HashMapNode[Object, nullable Object])> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#first for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = hash_collection__HashMapValues__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has for (self: HashMapValues[Object, nullable Object], nullable Object): Bool */
short int hash_collection__HashMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var3 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashNode[Object] */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 287);
show_backtrace(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var3 = var2->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[Object, nullable Object]> */
var_c = var3;
for(;;) {
var4 = NULL;
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
var6 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var6 == NULL) {
var7 = (var_item == NULL);
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_item) /* == on <var6:nullable Object>*/;
}
if (var7){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
var9 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var9;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var10 = 0;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapValues__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has_only for (self: HashMapValues[Object, nullable Object], nullable Object): Bool */
short int hash_collection__HashMapValues__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var3 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashNode[Object] */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 297);
show_backtrace(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var3 = var2->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[Object, nullable Object]> */
var_c = var3;
for(;;) {
var4 = NULL;
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
var6 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var6 == NULL) {
var7 = (var_item != NULL);
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___33d_61d]))(var6, var_item) /* != on <var6:nullable Object>*/;
}
if (var7){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
}
var9 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var9;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var10 = 1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashMapValues__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapValues__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#is_empty for (self: HashMapValues[Object, nullable Object]): Bool */
short int hash_collection__HashMapValues__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[Object, nullable Object] */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__is_empty]))(var1) /* is_empty on <var1:HashMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMapValues__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapValues__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#length for (self: HashMapValues[Object, nullable Object]): Int */
long hash_collection__HashMapValues__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[Object, nullable Object] */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__length]))(var1) /* length on <var1:HashMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashMapValues__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMapValues__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#iterator for (self: HashMapValues[Object, nullable Object]): Iterator[nullable Object] */
val* hash_collection__HashMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[Object, nullable Object] */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
var1 = NEW_abstract_collection__MapValuesIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapValuesIteratorhash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1]);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var2) /* iterator on <var2:HashMap[Object, nullable Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapValuesIterator__init]))(var1, var3) /* init on <var1:MapValuesIterator[Object, nullable Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_hash_collection__HashMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = hash_collection__HashMapValues__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#clear for (self: HashMapValues[Object, nullable Object]) */
void hash_collection__HashMapValues__clear(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Map__clear]))(var) /* clear on <var:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#clear for (self: Object) */
void VIRTUAL_hash_collection__HashMapValues__clear(val* self) {
hash_collection__HashMapValues__clear(self);
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove for (self: HashMapValues[Object, nullable Object], nullable Object) */
void hash_collection__HashMapValues__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var_map /* var map: HashMap[Object, nullable Object] */;
val* var2 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : Object */;
val* var8 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
/* <p0:nullable Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 314);
show_backtrace(1);
}
var_item = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var_map = var1;
var2 = var_map->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[Object, nullable Object]> */
var_c = var2;
for(;;) {
var3 = NULL;
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) break;
var5 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var5 == NULL) {
var6 = (var_item == NULL);
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_item) /* == on <var5:nullable Object>*/;
}
if (var6){
var7 = var_c->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 320);
show_backtrace(1);
}
((void (*)(val*, val*))(var_map->class->vft[COLOR_hash_collection__HashCollection__remove_node]))(var_map, var7) /* remove_node on <var_map:HashMap[Object, nullable Object]>*/;
goto RET_LABEL;
} else {
}
var8 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var8;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapValues__remove(val* self, val* p0) {
hash_collection__HashMapValues__remove(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove_all for (self: HashMapValues[Object, nullable Object], nullable Object) */
void hash_collection__HashMapValues__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var_map /* var map: HashMap[Object, nullable Object] */;
val* var2 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : Object */;
val* var8 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
/* <p0:nullable Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 327);
show_backtrace(1);
}
var_item = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_hash_collection__HashMapValues__map]))(self) /* map on <self:HashMapValues[Object, nullable Object]>*/;
var_map = var1;
var2 = var_map->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[Object, nullable Object]> */
var_c = var2;
for(;;) {
var3 = NULL;
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) break;
var5 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var5 == NULL) {
var6 = (var_item == NULL);
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_item) /* == on <var5:nullable Object>*/;
}
if (var6){
var7 = var_c->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 333);
show_backtrace(1);
}
((void (*)(val*, val*))(var_map->class->vft[COLOR_hash_collection__HashCollection__remove_node]))(var_map, var7) /* remove_node on <var_map:HashMap[Object, nullable Object]>*/;
} else {
}
var8 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var8;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove_all for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapValues__remove_all(val* self, val* p0) {
hash_collection__HashMapValues__remove_all(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapValues#init for (self: HashMapValues[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapValues__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapValues#0, HashMapValues#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 269);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapValues___64dmap].val = p0; /* @map on <self:HashMapValues[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapValues#init for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapValues__init(val* self, val* p0) {
hash_collection__HashMapValues__init(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: HashMapNode[Object, nullable Object], Object, nullable Object) */
void hash_collection__HashMapNode__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_k /* var k: Object */;
val* var_v /* var v: nullable Object */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashMapNode#0 */
/* <p0:Object> isa HashMapNode#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMapNode#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 345);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa HashMapNode#1 */
/* <p1:nullable Object> isa HashMapNode#1 */
type_struct4 = self->type->resolution_table->types[COLOR_hash_collection__HashMapNode_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMapNode#1", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 345);
show_backtrace(1);
}
var_k = p0;
var_v = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashNode__init]))(self, var_k) /* init on <self:HashMapNode[Object, nullable Object]>*/;
self->attrs[COLOR_hash_collection__HashMapNode___value].val = var_v; /* _value on <self:HashMapNode[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: Object, Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapNode__init(val* self, val* p0, val* p1) {
hash_collection__HashMapNode__init(self, p0, p1);
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#is_ok for (self: HashMapIterator[Object, nullable Object]): Bool */
short int hash_collection__HashMapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[Object, nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMapIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#item for (self: HashMapIterator[Object, nullable Object]): nullable Object */
val* hash_collection__HashMapIterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : nullable Object */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(self) /* is_ok on <self:HashMapIterator[Object, nullable Object]>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 358);
show_backtrace(1);
}
var2 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 359);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashMapNode[Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#item for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashMapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = hash_collection__HashMapIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#key for (self: HashMapIterator[Object, nullable Object]): Object */
val* hash_collection__HashMapIterator__key(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : Object */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(self) /* is_ok on <self:HashMapIterator[Object, nullable Object]>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 370);
show_backtrace(1);
}
var2 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 371);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var2:nullable HashMapNode[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 371);
show_backtrace(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#key for (self: Object): Object */
val* VIRTUAL_hash_collection__HashMapIterator__key(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashMapIterator__key(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#next for (self: HashMapIterator[Object, nullable Object]) */
void hash_collection__HashMapIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[Object, nullable Object] */;
val* var2 /* : nullable HashNode[Object] */;
var = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(self) /* is_ok on <self:HashMapIterator[Object, nullable Object]>*/;
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 376);
show_backtrace(1);
}
var1 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 377);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashMapNode[Object, nullable Object]> */
self->attrs[COLOR_hash_collection__HashMapIterator___node].val = var2; /* _node on <self:HashMapIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#next for (self: Object) */
void VIRTUAL_hash_collection__HashMapIterator__next(val* self) {
hash_collection__HashMapIterator__next(self);
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#init for (self: HashMapIterator[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_map /* var map: HashMap[Object, nullable Object] */;
val* var1 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapIterator#0, HashMapIterator#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapIterator#0, HashMapIterator#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapIterator_FT0hash_collection__HashMapIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapIterator#0, HashMapIterator#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 386);
show_backtrace(1);
}
var_map = p0;
self->attrs[COLOR_hash_collection__HashMapIterator___map].val = var_map; /* _map on <self:HashMapIterator[Object, nullable Object]> */
var1 = ((val* (*)(val*))(var_map->class->vft[COLOR_hash_collection__HashCollection__first_item]))(var_map) /* first_item on <var_map:HashMap[Object, nullable Object]>*/;
self->attrs[COLOR_hash_collection__HashMapIterator___node].val = var1; /* _node on <self:HashMapIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#init for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapIterator__init(val* self, val* p0) {
hash_collection__HashMapIterator__init(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashSet#length for (self: HashSet[Object]): Int */
long hash_collection__HashSet__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashSet[Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashSet__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashSet__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#is_empty for (self: HashSet[Object]): Bool */
short int hash_collection__HashSet__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashSet[Object]> */
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashSet__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashSet__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#first for (self: HashSet[Object]): Object */
val* hash_collection__HashSet__first(val* self) {
val* var /* : Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : nullable HashNode[Object] */;
val* var8 /* : Object */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashSet[Object]> */
var2 = 0;
{ /* Inline kernel#Int#> (var1,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var6 = var1 > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 405);
show_backtrace(1);
}
var7 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashSet[Object]> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 406);
show_backtrace(1);
}
var8 = var7->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var7:nullable HashNode[Object](nullable HashSetNode[Object])> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 406);
show_backtrace(1);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#first for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashSet__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashSet__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#has for (self: HashSet[Object], Object): Bool */
short int hash_collection__HashSet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Object */;
val* var2 /* : nullable HashNode[Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 409);
show_backtrace(1);
}
var_item = p0;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__node_at]))(self, var_item) /* node_at on <self:HashSet[Object]>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashSet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashSet__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#add for (self: HashSet[Object], Object) */
void hash_collection__HashSet__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashSetNode[Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : HashSetNode[Object] */;
/* Covariant cast for argument 0 (item) <p0:Object> isa SimpleCollection#0 */
/* <p0:Object> isa SimpleCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 414);
show_backtrace(1);
}
var_item = p0;
var1 = ((long (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__index_at]))(self, var_item) /* index_at on <self:HashSet[Object]>*/;
var_i = var1;
var2 = ((val* (*)(val*, long, val*))(self->class->vft[COLOR_hash_collection__HashCollection__node_at_idx]))(self, var_i, var_item) /* node_at_idx on <self:HashSet[Object]>*/;
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var_c->attrs[COLOR_hash_collection__HashNode___key].val = var_item; /* _key on <var_c:nullable HashSetNode[Object](HashSetNode[Object])> */
} else {
var5 = NEW_hash_collection__HashSetNode(self->type->resolution_table->types[COLOR_hash_collection__HashSetNodehash_collection__HashSet_FT0]);
((void (*)(val*, val*))(var5->class->vft[COLOR_hash_collection__HashSetNode__init]))(var5, var_item) /* init on <var5:HashSetNode[Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_hash_collection__HashCollection__store]))(self, var_i, var5) /* store on <self:HashSet[Object]>*/;
}
RET_LABEL:;
}
/* method hash_collection#HashSet#add for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashSet__add(val* self, val* p0) {
hash_collection__HashSet__add(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: HashSet[Object], Object) */
void hash_collection__HashSet__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Object */;
/* Covariant cast for argument 0 (item) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 425);
show_backtrace(1);
}
var_item = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashCollection__remove_node]))(self, var_item) /* remove_node on <self:HashSet[Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashSet__remove(val* self, val* p0) {
hash_collection__HashSet__remove(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashSet#clear for (self: HashSet[Object]) */
void hash_collection__HashSet__clear(val* self) {
((void (*)(val*))(self->class->vft[COLOR_hash_collection__HashCollection__raz]))(self) /* raz on <self:HashSet[Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashSet#clear for (self: Object) */
void VIRTUAL_hash_collection__HashSet__clear(val* self) {
hash_collection__HashSet__clear(self);
RET_LABEL:;
}
/* method hash_collection#HashSet#iterator for (self: HashSet[Object]): Iterator[Object] */
val* hash_collection__HashSet__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : HashSetIterator[Object] */;
var1 = NEW_hash_collection__HashSetIterator(self->type->resolution_table->types[COLOR_hash_collection__HashSetIteratorhash_collection__HashSet_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_hash_collection__HashSetIterator__init]))(var1, self) /* init on <var1:HashSetIterator[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_hash_collection__HashSet__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = hash_collection__HashSet__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#init for (self: HashSet[Object]) */
void hash_collection__HashSet__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
((void (*)(val*))(self->class->vft[COLOR_hash_collection__HashCollection__init]))(self) /* init on <self:HashSet[Object]>*/;
var = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var; /* _capacity on <self:HashSet[Object]> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var1; /* _length on <self:HashSet[Object]> */
var2 = 0;
((void (*)(val*, long))(self->class->vft[COLOR_hash_collection__HashCollection__enlarge]))(self, var2) /* enlarge on <self:HashSet[Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashSet#init for (self: Object) */
void VIRTUAL_hash_collection__HashSet__init(val* self) {
hash_collection__HashSet__init(self);
RET_LABEL:;
}
/* method hash_collection#HashSet#from for (self: HashSet[Object], Collection[Object]) */
void hash_collection__HashSet__from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[Object]> isa Collection[HashSet#0] */
/* <p0:Collection[Object]> isa Collection[HashSet#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionhash_collection__HashSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[HashSet#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 438);
show_backtrace(1);
}
var_coll = p0;
((void (*)(val*))(self->class->vft[COLOR_hash_collection__HashSet__init]))(self) /* init on <self:HashSet[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(self, var_coll) /* add_all on <self:HashSet[Object]>*/;
RET_LABEL:;
}
/* method hash_collection#HashSet#from for (self: Object, Collection[Object]) */
void VIRTUAL_hash_collection__HashSet__from(val* self, val* p0) {
hash_collection__HashSet__from(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashSetNode#init for (self: HashSetNode[Object], Object) */
void hash_collection__HashSetNode__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa HashSetNode#0 */
/* <p0:Object> isa HashSetNode#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSetNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSetNode#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 449);
show_backtrace(1);
}
var_e = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_hash_collection__HashNode__init]))(self, p0) /* init on <self:HashSetNode[Object]>*/;
self->attrs[COLOR_hash_collection__HashNode___key].val = var_e; /* _key on <self:HashSetNode[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetNode#init for (self: Object, Object) */
void VIRTUAL_hash_collection__HashSetNode__init(val* self, val* p0) {
hash_collection__HashSetNode__init(self, p0);
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#is_ok for (self: HashSetIterator[Object]): Bool */
short int hash_collection__HashSetIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashSetIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashSetIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#item for (self: HashSetIterator[Object]): Object */
val* hash_collection__HashSetIterator__item(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashSetNode[Object] */;
val* var3 /* : Object */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:HashSetIterator[Object]>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 461);
show_backtrace(1);
}
var2 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 462);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var2:nullable HashSetNode[Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _key");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 462);
show_backtrace(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#item for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashSetIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashSetIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#next for (self: HashSetIterator[Object]) */
void hash_collection__HashSetIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[Object] */;
val* var2 /* : nullable HashNode[Object] */;
var = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:HashSetIterator[Object]>*/;
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 467);
show_backtrace(1);
}
var1 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 468);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashSetNode[Object]> */
self->attrs[COLOR_hash_collection__HashSetIterator___node].val = var2; /* _node on <self:HashSetIterator[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#next for (self: Object) */
void VIRTUAL_hash_collection__HashSetIterator__next(val* self) {
hash_collection__HashSetIterator__next(self);
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#init for (self: HashSetIterator[Object], HashSet[Object]) */
void hash_collection__HashSetIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_set /* var set: HashSet[Object] */;
val* var1 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (set) <p0:HashSet[Object]> isa HashSet[HashSetIterator#0] */
/* <p0:HashSet[Object]> isa HashSet[HashSetIterator#0] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSethash_collection__HashSetIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[HashSetIterator#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 477);
show_backtrace(1);
}
var_set = p0;
self->attrs[COLOR_hash_collection__HashSetIterator___set].val = var_set; /* _set on <self:HashSetIterator[Object]> */
var1 = var_set->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var_set:HashSet[Object]> */
self->attrs[COLOR_hash_collection__HashSetIterator___node].val = var1; /* _node on <self:HashSetIterator[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#init for (self: Object, HashSet[Object]) */
void VIRTUAL_hash_collection__HashSetIterator__init(val* self, val* p0) {
hash_collection__HashSetIterator__init(self, p0);
RET_LABEL:;
}
