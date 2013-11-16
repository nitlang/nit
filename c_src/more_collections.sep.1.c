#include "more_collections.sep.0.h"
/* method more_collections#MultiHashMap#add_one for (self: MultiHashMap[Object, nullable Object], Object, nullable Object) */
void more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
val* var_k /* var k: Object */;
val* var_v /* var v: nullable Object */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : Array[nullable Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[nullable Object] */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 22);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 22);
exit(1);
}
var_k = p0;
var_v = p1;
var5 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead__has_key]))(self, var_k) /* has_key on <self:MultiHashMap[Object, nullable Object]>*/;
if (var5){
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(self, var_k) /* [] on <self:MultiHashMap[Object, nullable Object]>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_v) /* add on <var6:nullable Object(Array[nullable Object])>*/;
} else {
var7 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymore_collections__MultiHashMap_FT1]);
{ /* var7 = array_instance Array[MultiHashMap#1] */
var8 = 1;
var9 = NEW_array__NativeArray(var8, self->type->resolution_table->types[COLOR_array__NativeArraymore_collections__MultiHashMap_FT1]);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var_v;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[nullable Object]>*/;
CHECK_NEW_array__Array(var7);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(self, var_k, var7) /* []= on <self:MultiHashMap[Object, nullable Object]>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @level1", "lib/more_collections.nit", 38);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 38);
exit(1);
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var6 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap[Object, nullable Object]] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : nullable Object */;
val* var_level2 /* var level2: HashMap[Object, nullable Object] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : null */;
val* var14 /* : nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 40);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 40);
exit(1);
}
var_k1 = p0;
var_k2 = p1;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self) /* level1 on <self:HashMap2[Object, Object, nullable Object]>*/;
var_level1 = var6;
var7 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var8 = !var7;
if (var8){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var_level2 = var10;
var11 = ((short int (*)(val*, val*))(var_level2->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level2, var_k2) /* has_key on <var_level2:HashMap[Object, nullable Object]>*/;
var12 = !var11;
if (var12){
var13 = NULL;
var = var13;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*, val*))(var_level2->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level2, var_k2) /* [] on <var_level2:HashMap[Object, nullable Object]>*/;
var = var14;
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
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const struct type* type_struct8;
short int is_nullable;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_v /* var v: nullable Object */;
val* var9 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap[Object, nullable Object]] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[Object, nullable Object] */;
val* var_level2 /* var level2: HashMap[Object, nullable Object] */;
val* var13 /* : nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 51);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 51);
exit(1);
}
/* Covariant cast for argument 2 (v) <p2:nullable Object> isa HashMap2#2 */
/* <p2:nullable Object> isa HashMap2#2 */
type_struct8 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT2];
cltype6 = type_struct8->color;
idtype7 = type_struct8->id;
is_nullable = type_struct8->is_nullable;
if(p2 == NULL) {
var5 = is_nullable;
} else {
if(cltype6 >= p2->type->table_size) {
var5 = 0;
} else {
var5 = p2->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 51);
exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_v = p2;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap2__level1]))(self) /* level1 on <self:HashMap2[Object, Object, nullable Object]>*/;
var_level1 = var9;
var10 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var11 = !var10;
if (var11){
var12 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap2_FT1more_collections__HashMap2_FT2]);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashMap__init]))(var12) /* init on <var12:HashMap[Object, nullable Object]>*/;
CHECK_NEW_hash_collection__HashMap(var12);
var_level2 = var12;
((void (*)(val*, val*, val*))(var_level1->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_level1, var_k1, var_level2) /* []= on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
} else {
var13 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/;
var_level2 = var13;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @level1", "lib/more_collections.nit", 68);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 68);
exit(1);
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const struct type* type_struct9;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_k3 /* var k3: Object */;
val* var10 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : null */;
val* var14 /* : nullable Object */;
val* var_level2 /* var level2: HashMap2[Object, Object, nullable Object] */;
val* var15 /* : nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 70);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 70);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 70);
exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self) /* level1 on <self:HashMap3[Object, Object, Object, nullable Object]>*/;
var_level1 = var10;
var11 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var12 = !var11;
if (var12){
var13 = NULL;
var = var13;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var_level2 = var14;
var15 = ((val* (*)(val*, val*, val*))(var_level2->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var_level2, var_k2, var_k3) /* [] on <var_level2:HashMap2[Object, Object, nullable Object]>*/;
var = var15;
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
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const struct type* type_struct8;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
short int is_nullable;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_k3 /* var k3: Object */;
val* var_v /* var v: nullable Object */;
val* var13 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : HashMap2[Object, Object, nullable Object] */;
val* var_level2 /* var level2: HashMap2[Object, Object, nullable Object] */;
val* var17 /* : nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 80);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 80);
exit(1);
}
/* Covariant cast for argument 2 (k3) <p2:Object> isa HashMap3#2 */
/* <p2:Object> isa HashMap3#2 */
type_struct8 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT2];
cltype6 = type_struct8->color;
idtype7 = type_struct8->id;
if(cltype6 >= p2->type->table_size) {
var5 = 0;
} else {
var5 = p2->type->type_table[cltype6] == idtype7;
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 80);
exit(1);
}
/* Covariant cast for argument 3 (v) <p3:nullable Object> isa HashMap3#3 */
/* <p3:nullable Object> isa HashMap3#3 */
type_struct12 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT3];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
is_nullable = type_struct12->is_nullable;
if(p3 == NULL) {
var9 = is_nullable;
} else {
if(cltype10 >= p3->type->table_size) {
var9 = 0;
} else {
var9 = p3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/more_collections.nit", 80);
exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var_v = p3;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_more_collections__HashMap3__level1]))(self) /* level1 on <self:HashMap3[Object, Object, Object, nullable Object]>*/;
var_level1 = var13;
var14 = ((short int (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_level1, var_k1) /* has_key on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var15 = !var14;
if (var15){
var16 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2more_collections__HashMap3_FT1more_collections__HashMap3_FT2more_collections__HashMap3_FT3]);
((void (*)(val*))(var16->class->vft[COLOR_more_collections__HashMap2__init]))(var16) /* init on <var16:HashMap2[Object, Object, nullable Object]>*/;
CHECK_NEW_more_collections__HashMap2(var16);
var_level2 = var16;
((void (*)(val*, val*, val*))(var_level1->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_level1, var_k1, var_level2) /* []= on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
} else {
var17 = ((val* (*)(val*, val*))(var_level1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_level1, var_k1) /* [] on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/;
var_level2 = var17;
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
