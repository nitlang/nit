#include "more_collections.sep.0.h"
/* method more_collections#MultiHashMap#add_one for (self: MultiHashMap[Object, nullable Object], Object, nullable Object) */
void more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1) {
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
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var8 /* : Array[nullable Object] */;
long var9 /* : Int */;
val* var10 /* : NativeArray[nullable Object] */;
/* Covariant cast for argument 0 (k) <p0:Object> isa MultiHashMap#0 */
/* <p0:Object> isa MultiHashMap#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MultiHashMap#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 22);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa MultiHashMap#1 */
/* <p1:nullable Object> isa MultiHashMap#1 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap_FT1];
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
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MultiHashMap#1", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 22);
show_backtrace(1);
}
var_k = p0;
var_v = p1;
var6 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead__has_key]))(self, var_k) /* has_key on <self:MultiHashMap[Object, nullable Object]>*/;
if (var6){
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(self, var_k) /* [] on <self:MultiHashMap[Object, nullable Object]>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var_v) /* add on <var7:nullable Object(Array[nullable Object])>*/;
} else {
var8 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymore_collections__MultiHashMap_FT1]);
{ /* var8 = array_instance Array[MultiHashMap#1] */
var9 = 1;
var10 = NEW_array__NativeArray(var9, self->type->resolution_table->types[COLOR_array__NativeArraymore_collections__MultiHashMap_FT1]);
((struct instance_array__NativeArray*)var10)->values[0] = (val*) var_v;
((void (*)(val*, val*, long))(var8->class->vft[COLOR_array__Array__with_native]))(var8, var10, var9) /* with_native on <var8:Array[nullable Object]>*/;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(self, var_k, var8) /* []= on <self:MultiHashMap[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method more_collections#MultiHashMap#add_one for (self: Object, Object, nullable Object) */
void VIRTUAL_more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1) {
more_collections__MultiHashMap__add_one(self, p0, p1);
RET_LABEL:;
}
/* method more_collections#MultiHashMap#init for (self: MultiHashMap[Object, nullable Object]) */
void more_collections__MultiHashMap__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_hash_collection__HashMap__init]))(self) /* init on <self:MultiHashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method more_collections#MultiHashMap#init for (self: Object) */
void VIRTUAL_more_collections__MultiHashMap__init(val* self) {
more_collections__MultiHashMap__init(self);
RET_LABEL:;
}
/* method more_collections#HashMap2#level1 for (self: HashMap2[Object, Object, nullable Object]): HashMap[Object, HashMap[Object, nullable Object]] */
val* more_collections__HashMap2__level1(val* self) {
val* var /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap2___64dlevel1].val; /* @level1 on <self:HashMap2[Object, Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @level1");
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 38);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#level1 for (self: Object): HashMap[Object, HashMap[Object, nullable Object]] */
val* VIRTUAL_more_collections__HashMap2__level1(val* self) {
val* var /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
var1 = more_collections__HashMap2__level1(self);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#level1= for (self: HashMap2[Object, Object, nullable Object], HashMap[Object, HashMap[Object, nullable Object]]) */
void more_collections__HashMap2__level1_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (level1) <p0:HashMap[Object, HashMap[Object, nullable Object]]> isa HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]] */
/* <p0:HashMap[Object, HashMap[Object, nullable Object]]> isa HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap2_FT0hash_collection__HashMapmore_collections__HashMap2_FT1more_collections__HashMap2_FT2];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 38);
show_backtrace(1);
}
self->attrs[COLOR_more_collections__HashMap2___64dlevel1].val = p0; /* @level1 on <self:HashMap2[Object, Object, nullable Object]> */
RET_LABEL:;
}
/* method more_collections#HashMap2#level1= for (self: Object, HashMap[Object, HashMap[Object, nullable Object]]) */
void VIRTUAL_more_collections__HashMap2__level1_61d(val* self, val* p0) {
more_collections__HashMap2__level1_61d(self, p0);
RET_LABEL:;
}
/* method more_collections#HashMap2#[] for (self: HashMap2[Object, Object, nullable Object], Object, Object): nullable Object */
val* more_collections__HashMap2___91d_93d(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var7 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap[Object, nullable Object]] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : null */;
val* var11 /* : nullable Object */;
val* var_level2 /* var level2: HashMap[Object, nullable Object] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : null */;
val* var15 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap2#0 */
/* <p0:Object> isa HashMap2#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 40);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap2#1 */
/* <p1:Object> isa HashMap2#1 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#1", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 40);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self) /* level1 on <self:HashMap2[Object, Object, nullable Object]>*/;
var_level1 = var7;
var8 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var9 = !var8;
if (var9){
var10 = NULL;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var_level2 = var11;
var12 = ((short int (*)(val*, val*))(var_level2->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level2, var_k2) /* has_key on <var_level2:HashMap[Object, nullable Object]>*/;
var13 = !var12;
if (var13){
var14 = NULL;
var = var14;
goto RET_LABEL;
} else {
}
var15 = ((val* (*)(val*, val*))(var_level2->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level2, var_k2) /* [] on <var_level2:HashMap[Object, nullable Object]>*/;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[] for (self: Object, Object, Object): nullable Object */
val* VIRTUAL_more_collections__HashMap2___91d_93d(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = more_collections__HashMap2___91d_93d(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[]= for (self: HashMap2[Object, Object, nullable Object], Object, Object, nullable Object) */
void more_collections__HashMap2___91d_93d_61d(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const struct type* type_struct9;
short int is_nullable;
const char* var_class_name10;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_v /* var v: nullable Object */;
val* var11 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap[Object, nullable Object]] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : HashMap[Object, nullable Object] */;
val* var_level2 /* var level2: HashMap[Object, nullable Object] */;
val* var15 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap2#0 */
/* <p0:Object> isa HashMap2#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 51);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap2#1 */
/* <p1:Object> isa HashMap2#1 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#1", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 51);
show_backtrace(1);
}
/* Covariant cast for argument 2 (v) <p2:nullable Object> isa HashMap2#2 */
/* <p2:nullable Object> isa HashMap2#2 */
type_struct9 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT2];
cltype7 = type_struct9->color;
idtype8 = type_struct9->id;
is_nullable = type_struct9->is_nullable;
if(p2 == NULL) {
var6 = is_nullable;
} else {
if(cltype7 >= p2->type->table_size) {
var6 = 0;
} else {
var6 = p2->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
var_class_name10 = p2 == NULL ? "null" : p2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#2", var_class_name10);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 51);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_v = p2;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self) /* level1 on <self:HashMap2[Object, Object, nullable Object]>*/;
var_level1 = var11;
var12 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var13 = !var12;
if (var13){
var14 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap2_FT1more_collections__HashMap2_FT2]);
((void (*)(val*))(var14->class->vft[COLOR_hash_collection__HashMap__init]))(var14) /* init on <var14:HashMap[Object, nullable Object]>*/;
var_level2 = var14;
((void (*)(val*, val*, val*))(var_level1->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_level1, var_k1, var_level2) /* []= on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
} else {
var15 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var_level2 = var15;
}
((void (*)(val*, val*, val*))(var_level2->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_level2, var_k2, var_v) /* []= on <var_level2:HashMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method more_collections#HashMap2#[]= for (self: Object, Object, Object, nullable Object) */
void VIRTUAL_more_collections__HashMap2___91d_93d_61d(val* self, val* p0, val* p1, val* p2) {
more_collections__HashMap2___91d_93d_61d(self, p0, p1, p2);
RET_LABEL:;
}
/* method more_collections#HashMap2#init for (self: HashMap2[Object, Object, nullable Object]) */
void more_collections__HashMap2__init(val* self) {
RET_LABEL:;
}
/* method more_collections#HashMap2#init for (self: Object) */
void VIRTUAL_more_collections__HashMap2__init(val* self) {
more_collections__HashMap2__init(self);
RET_LABEL:;
}
/* method more_collections#HashMap3#level1 for (self: HashMap3[Object, Object, Object, nullable Object]): HashMap[Object, HashMap2[Object, Object, nullable Object]] */
val* more_collections__HashMap3__level1(val* self) {
val* var /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap3___64dlevel1].val; /* @level1 on <self:HashMap3[Object, Object, Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @level1");
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 68);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#level1 for (self: Object): HashMap[Object, HashMap2[Object, Object, nullable Object]] */
val* VIRTUAL_more_collections__HashMap3__level1(val* self) {
val* var /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
var1 = more_collections__HashMap3__level1(self);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#level1= for (self: HashMap3[Object, Object, Object, nullable Object], HashMap[Object, HashMap2[Object, Object, nullable Object]]) */
void more_collections__HashMap3__level1_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (level1) <p0:HashMap[Object, HashMap2[Object, Object, nullable Object]]> isa HashMap[HashMap3#0, HashMap2[HashMap3#1, HashMap3#2, HashMap3#3]] */
/* <p0:HashMap[Object, HashMap2[Object, Object, nullable Object]]> isa HashMap[HashMap3#0, HashMap2[HashMap3#1, HashMap3#2, HashMap3#3]] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap3_FT0more_collections__HashMap2more_collections__HashMap3_FT1more_collections__HashMap3_FT2more_collections__HashMap3_FT3];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMap3#0, HashMap2[HashMap3#1, HashMap3#2, HashMap3#3]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 68);
show_backtrace(1);
}
self->attrs[COLOR_more_collections__HashMap3___64dlevel1].val = p0; /* @level1 on <self:HashMap3[Object, Object, Object, nullable Object]> */
RET_LABEL:;
}
/* method more_collections#HashMap3#level1= for (self: Object, HashMap[Object, HashMap2[Object, Object, nullable Object]]) */
void VIRTUAL_more_collections__HashMap3__level1_61d(val* self, val* p0) {
more_collections__HashMap3__level1_61d(self, p0);
RET_LABEL:;
}
/* method more_collections#HashMap3#[] for (self: HashMap3[Object, Object, Object, nullable Object], Object, Object, Object): nullable Object */
val* more_collections__HashMap3___91d_93d(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_k3 /* var k3: Object */;
val* var12 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : null */;
val* var16 /* : nullable Object */;
val* var_level2 /* var level2: HashMap2[Object, Object, nullable Object] */;
val* var17 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap3#0 */
/* <p0:Object> isa HashMap3#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 70);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap3#1 */
/* <p1:Object> isa HashMap3#1 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#1", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 70);
show_backtrace(1);
}
/* Covariant cast for argument 2 (k3) <p2:Object> isa HashMap3#2 */
/* <p2:Object> isa HashMap3#2 */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT2];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= p2->type->table_size) {
var7 = 0;
} else {
var7 = p2->type->type_table[cltype8] == idtype9;
}
if (!var7) {
var_class_name11 = p2 == NULL ? "null" : p2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#2", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 70);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self) /* level1 on <self:HashMap3[Object, Object, Object, nullable Object]>*/;
var_level1 = var12;
var13 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var14 = !var13;
if (var14){
var15 = NULL;
var = var15;
goto RET_LABEL;
} else {
}
var16 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var_level2 = var16;
var17 = ((val* (*)(val*, val*, val*))(var_level2->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var_level2, var_k2, var_k3) /* [] on <var_level2:HashMap2[Object, Object, nullable Object]>*/;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[] for (self: Object, Object, Object, Object): nullable Object */
val* VIRTUAL_more_collections__HashMap3___91d_93d(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = more_collections__HashMap3___91d_93d(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[]= for (self: HashMap3[Object, Object, Object, nullable Object], Object, Object, Object, nullable Object) */
void more_collections__HashMap3___91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const struct type* type_struct9;
const char* var_class_name10;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
short int is_nullable;
const char* var_class_name15;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_k3 /* var k3: Object */;
val* var_v /* var v: nullable Object */;
val* var16 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : HashMap2[Object, Object, nullable Object] */;
val* var_level2 /* var level2: HashMap2[Object, Object, nullable Object] */;
val* var20 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap3#0 */
/* <p0:Object> isa HashMap3#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 80);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap3#1 */
/* <p1:Object> isa HashMap3#1 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#1", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 80);
show_backtrace(1);
}
/* Covariant cast for argument 2 (k3) <p2:Object> isa HashMap3#2 */
/* <p2:Object> isa HashMap3#2 */
type_struct9 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT2];
cltype7 = type_struct9->color;
idtype8 = type_struct9->id;
if(cltype7 >= p2->type->table_size) {
var6 = 0;
} else {
var6 = p2->type->type_table[cltype7] == idtype8;
}
if (!var6) {
var_class_name10 = p2 == NULL ? "null" : p2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#2", var_class_name10);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 80);
show_backtrace(1);
}
/* Covariant cast for argument 3 (v) <p3:nullable Object> isa HashMap3#3 */
/* <p3:nullable Object> isa HashMap3#3 */
type_struct14 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT3];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
is_nullable = type_struct14->is_nullable;
if(p3 == NULL) {
var11 = is_nullable;
} else {
if(cltype12 >= p3->type->table_size) {
var11 = 0;
} else {
var11 = p3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
var_class_name15 = p3 == NULL ? "null" : p3->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#3", var_class_name15);
fprintf(stderr, " (%s:%d)\n", "lib/more_collections.nit", 80);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var_v = p3;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self) /* level1 on <self:HashMap3[Object, Object, Object, nullable Object]>*/;
var_level1 = var16;
var17 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var18 = !var17;
if (var18){
var19 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2more_collections__HashMap3_FT1more_collections__HashMap3_FT2more_collections__HashMap3_FT3]);
((void (*)(val*))(var19->class->vft[COLOR_more_collections__HashMap2__init]))(var19) /* init on <var19:HashMap2[Object, Object, nullable Object]>*/;
var_level2 = var19;
((void (*)(val*, val*, val*))(var_level1->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_level1, var_k1, var_level2) /* []= on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
} else {
var20 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var_level2 = var20;
}
((void (*)(val*, val*, val*, val*))(var_level2->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var_level2, var_k2, var_k3, var_v) /* []= on <var_level2:HashMap2[Object, Object, nullable Object]>*/;
RET_LABEL:;
}
/* method more_collections#HashMap3#[]= for (self: Object, Object, Object, Object, nullable Object) */
void VIRTUAL_more_collections__HashMap3___91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3) {
more_collections__HashMap3___91d_93d_61d(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method more_collections#HashMap3#init for (self: HashMap3[Object, Object, Object, nullable Object]) */
void more_collections__HashMap3__init(val* self) {
RET_LABEL:;
}
/* method more_collections#HashMap3#init for (self: Object) */
void VIRTUAL_more_collections__HashMap3__init(val* self) {
more_collections__HashMap3__init(self);
RET_LABEL:;
}
