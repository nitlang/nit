#include "ordered_tree.sep.0.h"
/* method ordered_tree#OrderedTree#roots for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree__OrderedTree__roots(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___64droots].val; /* @roots on <self:OrderedTree[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @roots");
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 27);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#roots for (self: Object): Array[Object] */
val* VIRTUAL_ordered_tree__OrderedTree__roots(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = ordered_tree__OrderedTree__roots(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#roots= for (self: OrderedTree[Object], Array[Object]) */
void ordered_tree__OrderedTree__roots_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (roots) <p0:Array[Object]> isa Array[OrderedTree#0] */
/* <p0:Array[Object]> isa Array[OrderedTree#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arrayordered_tree__OrderedTree_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[OrderedTree#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 27);
show_backtrace(1);
}
self->attrs[COLOR_ordered_tree__OrderedTree___64droots].val = p0; /* @roots on <self:OrderedTree[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#roots= for (self: Object, Array[Object]) */
void VIRTUAL_ordered_tree__OrderedTree__roots_61d(val* self, val* p0) {
ordered_tree__OrderedTree__roots_61d(self, p0);
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub for (self: OrderedTree[Object]): HashMap[Object, Array[Object]] */
val* ordered_tree__OrderedTree__sub(val* self) {
val* var /* : HashMap[Object, Array[Object]] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___64dsub].val; /* @sub on <self:OrderedTree[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @sub");
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#sub for (self: Object): HashMap[Object, Array[Object]] */
val* VIRTUAL_ordered_tree__OrderedTree__sub(val* self) {
val* var /* : HashMap[Object, Array[Object]] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
var1 = ordered_tree__OrderedTree__sub(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#sub= for (self: OrderedTree[Object], HashMap[Object, Array[Object]]) */
void ordered_tree__OrderedTree__sub_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (sub) <p0:HashMap[Object, Array[Object]]> isa HashMap[OrderedTree#0, Array[OrderedTree#0]] */
/* <p0:HashMap[Object, Array[Object]]> isa HashMap[OrderedTree#0, Array[OrderedTree#0]] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapordered_tree__OrderedTree_FT0array__Arrayordered_tree__OrderedTree_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[OrderedTree#0, Array[OrderedTree#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 29);
show_backtrace(1);
}
self->attrs[COLOR_ordered_tree__OrderedTree___64dsub].val = p0; /* @sub on <self:OrderedTree[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub= for (self: Object, HashMap[Object, Array[Object]]) */
void VIRTUAL_ordered_tree__OrderedTree__sub_61d(val* self, val* p0) {
ordered_tree__OrderedTree__sub_61d(self, p0);
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#add for (self: OrderedTree[Object], nullable Object, Object) */
void ordered_tree__OrderedTree__add(val* self, val* p0, val* p1) {
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
val* var_p /* var p: nullable Object */;
val* var_e /* var e: Object */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
val* var9 /* : HashMap[Object, Array[Object]] */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Object, Array[Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : HashMap[Object, Array[Object]] */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
/* Covariant cast for argument 0 (p) <p0:nullable Object> isa nullable OrderedTree#0 */
/* <p0:nullable Object> isa nullable OrderedTree#0 */
type_struct = self->type->resolution_table->types[COLOR_nullable_ordered_tree__OrderedTree_FT0];
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
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable OrderedTree#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 31);
show_backtrace(1);
}
/* Covariant cast for argument 1 (e) <p1:Object> isa OrderedTree#0 */
/* <p1:Object> isa OrderedTree#0 */
type_struct4 = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OrderedTree#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 31);
show_backtrace(1);
}
var_p = p0;
var_e = p1;
var6 = NULL;
if (var_p == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self) /* roots on <self:OrderedTree[Object]>*/;
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var8, var_e) /* add on <var8:Array[Object]>*/;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self) /* sub on <self:OrderedTree[Object]>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var9, var_p) /* has_key on <var9:HashMap[Object, Array[Object]]>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self) /* sub on <self:OrderedTree[Object]>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_p) /* [] on <var11:HashMap[Object, Array[Object]]>*/;
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var12, var_e) /* add on <var12:nullable Object(Array[Object])>*/;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self) /* sub on <self:OrderedTree[Object]>*/;
var14 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayordered_tree__OrderedTree_FT0]);
{ /* var14 = array_instance Array[OrderedTree#0] */
var15 = 1;
var16 = NEW_array__NativeArray(var15, self->type->resolution_table->types[COLOR_array__NativeArrayordered_tree__OrderedTree_FT0]);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var_e;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
((void (*)(val*, val*, val*))(var13->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var13, var_p, var14) /* []= on <var13:HashMap[Object, Array[Object]]>*/;
}
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#add for (self: Object, nullable Object, Object) */
void VIRTUAL_ordered_tree__OrderedTree__add(val* self, val* p0, val* p1) {
ordered_tree__OrderedTree__add(self, p0, p1);
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#pretty for (self: OrderedTree[Object], OStream) */
void ordered_tree__OrderedTree__pretty(val* self, val* p0) {
val* var_o /* var o: OStream */;
val* var /* : Array[Object] */;
val* var1 /* : nullable Object */;
val* var_last /* var last: Object */;
val* var2 /* : Array[Object] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_r /* var r: Object */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
var_o = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self) /* roots on <self:OrderedTree[Object]>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var) /* last on <var:Array[Object]>*/;
var_last = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self) /* roots on <self:OrderedTree[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[Object]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_r = var5;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__display]))(self, var_r) /* display on <self:OrderedTree[Object]>*/;
((void (*)(val*, val*))(var_o->class->vft[COLOR_stream__OStream__write]))(var_o, var6) /* write on <var_o:OStream>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "\n";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*))(var_o->class->vft[COLOR_stream__OStream__write]))(var_o, var7) /* write on <var_o:OStream>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "";
var14 = 0;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_pretty]))(self, var_o, var_r, var12) /* sub_pretty on <self:OrderedTree[Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#pretty for (self: Object, OStream) */
void VIRTUAL_ordered_tree__OrderedTree__pretty(val* self, val* p0) {
ordered_tree__OrderedTree__pretty(self, p0);
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub_pretty for (self: OrderedTree[Object], OStream, Object, String) */
void ordered_tree__OrderedTree__sub_pretty(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_o /* var o: OStream */;
val* var_e /* var e: Object */;
val* var_prefix /* var prefix: String */;
val* var1 /* : HashMap[Object, Array[Object]] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Array[Object]] */;
val* var5 /* : nullable Object */;
val* var_subs /* var subs: Array[Object] */;
val* var6 /* : nullable Object */;
val* var_last /* var last: Object */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
/* Covariant cast for argument 1 (e) <p1:Object> isa OrderedTree#0 */
/* <p1:Object> isa OrderedTree#0 */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OrderedTree#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 62);
show_backtrace(1);
}
var_o = p0;
var_e = p1;
var_prefix = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self) /* sub on <self:OrderedTree[Object]>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_e) /* has_key on <var1:HashMap[Object, Array[Object]]>*/;
var3 = !var2;
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self) /* sub on <self:OrderedTree[Object]>*/;
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var4, var_e) /* [] on <var4:HashMap[Object, Array[Object]]>*/;
var_subs = var5;
var6 = ((val* (*)(val*))(var_subs->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_subs) /* last on <var_subs:Array[Object]>*/;
var_last = var6;
var7 = ((val* (*)(val*))(var_subs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_subs) /* iterator on <var_subs:Array[Object]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_e2 = var9;
var10 = ((short int (*)(val*, val*))(var_e2->class->vft[COLOR_kernel__Object___33d_61d]))(var_e2, var_last) /* != on <var_e2:Object>*/;
if (var10){
if (varonce) {
var11 = varonce;
} else {
var12 = "|--";
var13 = 3;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__display]))(self, var_e2) /* display on <self:OrderedTree[Object]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\n";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 4;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var_prefix;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var11;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var15;
((struct instance_array__NativeArray*)var23)->values[3] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(var_o->class->vft[COLOR_stream__OStream__write]))(var_o, var24) /* write on <var_o:OStream>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "|  ";
var28 = 3;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*, val*))(var_prefix->class->vft[COLOR_string__String___43d]))(var_prefix, var26) /* + on <var_prefix:String>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_pretty]))(self, var_o, var_e2, var30) /* sub_pretty on <self:OrderedTree[Object]>*/;
} else {
if (varonce31) {
var32 = varonce31;
} else {
var33 = "`--";
var34 = 3;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__display]))(self, var_e2) /* display on <self:OrderedTree[Object]>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "\n";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 4;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var_prefix;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*))(var_o->class->vft[COLOR_stream__OStream__write]))(var_o, var45) /* write on <var_o:OStream>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "   ";
var49 = 3;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*, val*))(var_prefix->class->vft[COLOR_string__String___43d]))(var_prefix, var47) /* + on <var_prefix:String>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub_pretty]))(self, var_o, var_e2, var51) /* sub_pretty on <self:OrderedTree[Object]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub_pretty for (self: Object, OStream, Object, String) */
void VIRTUAL_ordered_tree__OrderedTree__sub_pretty(val* self, val* p0, val* p1, val* p2) {
ordered_tree__OrderedTree__sub_pretty(self, p0, p1, p2);
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sort_with for (self: OrderedTree[Object], AbstractSorter[Object]) */
void ordered_tree__OrderedTree__sort_with(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_comparator /* var comparator: AbstractSorter[Object] */;
val* var1 /* : Array[Object] */;
val* var2 /* : HashMap[Object, Array[Object]] */;
val* var3 /* : Collection[nullable Object] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_a /* var a: Array[Object] */;
/* Covariant cast for argument 0 (comparator) <p0:AbstractSorter[Object]> isa AbstractSorter[OrderedTree#0] */
/* <p0:AbstractSorter[Object]> isa AbstractSorter[OrderedTree#0] */
type_struct = self->type->resolution_table->types[COLOR_sorter__AbstractSorterordered_tree__OrderedTree_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter[OrderedTree#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 78);
show_backtrace(1);
}
var_comparator = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__roots]))(self) /* roots on <self:OrderedTree[Object]>*/;
((void (*)(val*, val*))(var_comparator->class->vft[COLOR_sorter__AbstractSorter__sort]))(var_comparator, var1) /* sort on <var_comparator:AbstractSorter[Object]>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ordered_tree__OrderedTree__sub]))(self) /* sub on <self:OrderedTree[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__values]))(var2) /* values on <var2:HashMap[Object, Array[Object]]>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Collection[nullable Object](HashMapValues[Object, Array[Object]])>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_a = var6;
((void (*)(val*, val*))(var_comparator->class->vft[COLOR_sorter__AbstractSorter__sort]))(var_comparator, var_a) /* sort on <var_comparator:AbstractSorter[Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sort_with for (self: Object, AbstractSorter[Object]) */
void VIRTUAL_ordered_tree__OrderedTree__sort_with(val* self, val* p0) {
ordered_tree__OrderedTree__sort_with(self, p0);
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#display for (self: OrderedTree[Object], Object): String */
val* ordered_tree__OrderedTree__display(val* self, val* p0) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : String */;
/* Covariant cast for argument 0 (e) <p0:Object> isa OrderedTree#0 */
/* <p0:Object> isa OrderedTree#0 */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OrderedTree#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/ordered_tree.nit", 88);
show_backtrace(1);
}
var_e = p0;
var2 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:Object>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#display for (self: Object, Object): String */
val* VIRTUAL_ordered_tree__OrderedTree__display(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ordered_tree__OrderedTree__display(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#init for (self: OrderedTree[Object]) */
void ordered_tree__OrderedTree__init(val* self) {
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#init for (self: Object) */
void VIRTUAL_ordered_tree__OrderedTree__init(val* self) {
ordered_tree__OrderedTree__init(self);
RET_LABEL:;
}
