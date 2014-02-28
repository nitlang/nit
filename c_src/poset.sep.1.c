#include "poset.sep.0.h"
/* method poset#POSet#iterator for (self: POSet[Object]): Iterator[Object] */
val* poset__POSet__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : HashMap[Object, POSetElement[Object]] */;
val* var2 /* : Collection[Object] */;
val* var3 /* : Iterator[nullable Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__keys]))(var1) /* keys on <var1:HashMap[Object, POSetElement[Object]]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_poset__POSet__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = poset__POSet__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#elements for (self: POSet[Object]): HashMap[Object, POSetElement[Object]] */
val* poset__POSet__elements(val* self) {
val* var /* : HashMap[Object, POSetElement[Object]] */;
val* var1 /* : HashMap[Object, POSetElement[Object]] */;
var1 = self->attrs[COLOR_poset__POSet___64delements].val; /* @elements on <self:POSet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @elements");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#elements for (self: Object): HashMap[Object, POSetElement[Object]] */
val* VIRTUAL_poset__POSet__elements(val* self) {
val* var /* : HashMap[Object, POSetElement[Object]] */;
val* var1 /* : HashMap[Object, POSetElement[Object]] */;
var1 = poset__POSet__elements(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#elements= for (self: POSet[Object], HashMap[Object, POSetElement[Object]]) */
void poset__POSet__elements_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (elements) <p0:HashMap[Object, POSetElement[Object]]> isa HashMap[POSet#0, POSetElement[POSet#0]] */
/* <p0:HashMap[Object, POSetElement[Object]]> isa HashMap[POSet#0, POSetElement[POSet#0]] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapposet__POSet_FT0poset__POSetElementposet__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[POSet#0, POSetElement[POSet#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSet___64delements].val = p0; /* @elements on <self:POSet[Object]> */
RET_LABEL:;
}
/* method poset#POSet#elements= for (self: Object, HashMap[Object, POSetElement[Object]]) */
void VIRTUAL_poset__POSet__elements_61d(val* self, val* p0) {
poset__POSet__elements_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSet#has for (self: POSet[Object], Object): Bool */
short int poset__POSet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : HashMap[Object, POSetElement[Object]] */;
val* var3 /* : Collection[Object] */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:Object> isa Collection#0 */
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
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 34);
show_backtrace(1);
}
var_e = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__keys]))(var2) /* keys on <var2:HashMap[Object, POSetElement[Object]]>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_e) /* has on <var3:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_poset__POSet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = poset__POSet__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_node for (self: POSet[Object], Object): POSetElement[Object] */
val* poset__POSet__add_node(val* self, val* p0) {
val* var /* : POSetElement[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : HashMap[Object, POSetElement[Object]] */;
val* var3 /* : Collection[Object] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Object, POSetElement[Object]] */;
val* var6 /* : nullable Object */;
val* var7 /* : POSetElement[Object] */;
val* var8 /* : HashMap[Object, POSetElement[Object]] */;
long var9 /* : Int */;
val* var_poe /* var poe: POSetElement[Object] */;
val* var10 /* : HashSet[Object] */;
val* var11 /* : HashSet[Object] */;
val* var12 /* : HashMap[Object, POSetElement[Object]] */;
/* Covariant cast for argument 0 (e) <p0:Object> isa POSet#0 */
/* <p0:Object> isa POSet#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 36);
show_backtrace(1);
}
var_e = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__keys]))(var2) /* keys on <var2:HashMap[Object, POSetElement[Object]]>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_e) /* has on <var3:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_e) /* [] on <var5:HashMap[Object, POSetElement[Object]]>*/;
var = var6;
goto RET_LABEL;
} else {
}
var7 = NEW_poset__POSetElement(self->type->resolution_table->types[COLOR_poset__POSetElementposet__POSet_FT0]);
var8 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var9 = ((long (*)(val*))(var8->class->vft[COLOR_abstract_collection__MapRead__length]))(var8) /* length on <var8:HashMap[Object, POSetElement[Object]]>*/;
((void (*)(val*, val*, val*, long))(var7->class->vft[COLOR_poset__POSetElement__init]))(var7, self, var_e, var9) /* init on <var7:POSetElement[Object]>*/;
var_poe = var7;
var10 = ((val* (*)(val*))(var_poe->class->vft[COLOR_poset__POSetElement__tos]))(var_poe) /* tos on <var_poe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var_e) /* add on <var10:HashSet[Object]>*/;
var11 = ((val* (*)(val*))(var_poe->class->vft[COLOR_poset__POSetElement__froms]))(var_poe) /* froms on <var_poe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var_e) /* add on <var11:HashSet[Object]>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var12, var_e, var_poe) /* []= on <var12:HashMap[Object, POSetElement[Object]]>*/;
var = var_poe;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_node for (self: Object, Object): POSetElement[Object] */
val* VIRTUAL_poset__POSet__add_node(val* self, val* p0) {
val* var /* : POSetElement[Object] */;
val* var1 /* : POSetElement[Object] */;
var1 = poset__POSet__add_node(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#[] for (self: POSet[Object], Object): POSetElement[Object] */
val* poset__POSet___91d_93d(val* self, val* p0) {
val* var /* : POSetElement[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : HashMap[Object, POSetElement[Object]] */;
val* var3 /* : Collection[Object] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Object, POSetElement[Object]] */;
val* var6 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa POSet#0 */
/* <p0:Object> isa POSet#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 50);
show_backtrace(1);
}
var_e = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__keys]))(var2) /* keys on <var2:HashMap[Object, POSetElement[Object]]>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_e) /* has on <var3:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 63);
show_backtrace(1);
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_e) /* [] on <var5:HashMap[Object, POSetElement[Object]]>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#[] for (self: Object, Object): POSetElement[Object] */
val* VIRTUAL_poset__POSet___91d_93d(val* self, val* p0) {
val* var /* : POSetElement[Object] */;
val* var1 /* : POSetElement[Object] */;
var1 = poset__POSet___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_edge for (self: POSet[Object], Object, Object) */
void poset__POSet__add_edge(val* self, val* p0, val* p1) {
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
val* var_f /* var f: Object */;
val* var_t /* var t: Object */;
val* var6 /* : POSetElement[Object] */;
val* var_fe /* var fe: POSetElement[Object] */;
val* var7 /* : POSetElement[Object] */;
val* var_te /* var te: POSetElement[Object] */;
val* var8 /* : HashSet[Object] */;
short int var9 /* : Bool */;
val* var10 /* : HashSet[Object] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_ff /* var ff: Object */;
val* var14 /* : HashMap[Object, POSetElement[Object]] */;
val* var15 /* : nullable Object */;
val* var_ffe /* var ffe: POSetElement[Object] */;
val* var16 /* : HashSet[Object] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_tt /* var tt: Object */;
val* var20 /* : HashMap[Object, POSetElement[Object]] */;
val* var21 /* : nullable Object */;
val* var_tte /* var tte: POSetElement[Object] */;
val* var22 /* : HashSet[Object] */;
val* var23 /* : HashSet[Object] */;
val* var25 /* : HashSet[Object] */;
short int var26 /* : Bool */;
val* var27 /* : HashSet[Object] */;
val* var28 /* : Array[nullable Object] */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_x /* var x: Object */;
val* var32 /* : HashMap[Object, POSetElement[Object]] */;
val* var33 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[Object] */;
val* var34 /* : HashSet[Object] */;
short int var35 /* : Bool */;
val* var36 /* : HashSet[Object] */;
val* var37 /* : HashSet[Object] */;
val* var39 /* : HashSet[Object] */;
val* var40 /* : Array[nullable Object] */;
val* var41 /* : Iterator[nullable Object] */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_x44 /* var x: Object */;
val* var45 /* : HashMap[Object, POSetElement[Object]] */;
val* var46 /* : nullable Object */;
val* var_xe47 /* var xe: POSetElement[Object] */;
val* var48 /* : HashSet[Object] */;
short int var49 /* : Bool */;
val* var50 /* : HashSet[Object] */;
val* var51 /* : HashSet[Object] */;
val* var53 /* : HashSet[Object] */;
val* var54 /* : HashSet[Object] */;
/* Covariant cast for argument 0 (f) <p0:Object> isa POSet#0 */
/* <p0:Object> isa POSet#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 67);
show_backtrace(1);
}
/* Covariant cast for argument 1 (t) <p1:Object> isa POSet#0 */
/* <p1:Object> isa POSet#0 */
type_struct4 = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 67);
show_backtrace(1);
}
var_f = p0;
var_t = p1;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_poset__POSet__add_node]))(self, var_f) /* add_node on <self:POSet[Object]>*/;
var_fe = var6;
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_poset__POSet__add_node]))(self, var_t) /* add_node on <self:POSet[Object]>*/;
var_te = var7;
var8 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__tos]))(var_fe) /* tos on <var_fe:POSetElement[Object]>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__Collection__has]))(var8, var_t) /* has on <var8:HashSet[Object]>*/;
if (var9){
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__froms]))(var_fe) /* froms on <var_fe:POSetElement[Object]>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:HashSet[Object]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_ff = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var15 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_ff) /* [] on <var14:HashMap[Object, POSetElement[Object]]>*/;
var_ffe = var15;
var16 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__tos]))(var_te) /* tos on <var_te:POSetElement[Object]>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:HashSet[Object]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_tt = var19;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var21 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var20, var_tt) /* [] on <var20:HashMap[Object, POSetElement[Object]]>*/;
var_tte = var21;
var22 = ((val* (*)(val*))(var_tte->class->vft[COLOR_poset__POSetElement__froms]))(var_tte) /* froms on <var_tte:POSetElement[Object]>*/;
((void (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var22, var_ff) /* add on <var22:HashSet[Object]>*/;
var23 = ((val* (*)(val*))(var_ffe->class->vft[COLOR_poset__POSetElement__tos]))(var_ffe) /* tos on <var_ffe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var_tt) /* add on <var23:HashSet[Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label24: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label24: (void)0;
var25 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__tos]))(var_te) /* tos on <var_te:POSetElement[Object]>*/;
var26 = ((short int (*)(val*, val*))(var25->class->vft[COLOR_abstract_collection__Collection__has]))(var25, var_f) /* has on <var25:HashSet[Object]>*/;
if (var26){
goto RET_LABEL;
} else {
}
var27 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te) /* dfroms on <var_te:POSetElement[Object]>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_array__Collection__to_a]))(var27) /* to_a on <var27:HashSet[Object]>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:Array[nullable Object](Array[Object])>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_x = var31;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var33 = ((val* (*)(val*, val*))(var32->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var32, var_x) /* [] on <var32:HashMap[Object, POSetElement[Object]]>*/;
var_xe = var33;
var34 = ((val* (*)(val*))(var_xe->class->vft[COLOR_poset__POSetElement__tos]))(var_xe) /* tos on <var_xe:POSetElement[Object]>*/;
var35 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_abstract_collection__Collection__has]))(var34, var_f) /* has on <var34:HashSet[Object]>*/;
if (var35){
var36 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te) /* dfroms on <var_te:POSetElement[Object]>*/;
((void (*)(val*, val*))(var36->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var36, var_x) /* remove on <var36:HashSet[Object]>*/;
var37 = ((val* (*)(val*))(var_xe->class->vft[COLOR_poset__POSetElement__dtos]))(var_xe) /* dtos on <var_xe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var37->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var37, var_t) /* remove on <var37:HashSet[Object]>*/;
} else {
}
CONTINUE_label38: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label38: (void)0;
var39 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_array__Collection__to_a]))(var39) /* to_a on <var39:HashSet[Object]>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Collection__iterator]))(var40) /* iterator on <var40:Array[nullable Object](Array[Object])>*/;
for(;;) {
var42 = ((short int (*)(val*))(var41->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var41) /* is_ok on <var41:Iterator[nullable Object]>*/;
if(!var42) break;
var43 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Iterator__item]))(var41) /* item on <var41:Iterator[nullable Object]>*/;
var_x44 = var43;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var46 = ((val* (*)(val*, val*))(var45->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var45, var_x44) /* [] on <var45:HashMap[Object, POSetElement[Object]]>*/;
var_xe47 = var46;
var48 = ((val* (*)(val*))(var_xe47->class->vft[COLOR_poset__POSetElement__froms]))(var_xe47) /* froms on <var_xe47:POSetElement[Object]>*/;
var49 = ((short int (*)(val*, val*))(var48->class->vft[COLOR_abstract_collection__Collection__has]))(var48, var_t) /* has on <var48:HashSet[Object]>*/;
if (var49){
var50 = ((val* (*)(val*))(var_xe47->class->vft[COLOR_poset__POSetElement__dfroms]))(var_xe47) /* dfroms on <var_xe47:POSetElement[Object]>*/;
((void (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var50, var_f) /* remove on <var50:HashSet[Object]>*/;
var51 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var51->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var51, var_x44) /* remove on <var51:HashSet[Object]>*/;
} else {
}
CONTINUE_label52: (void)0;
((void (*)(val*))(var41->class->vft[COLOR_abstract_collection__Iterator__next]))(var41) /* next on <var41:Iterator[nullable Object]>*/;
}
BREAK_label52: (void)0;
var53 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var53->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var53, var_t) /* add on <var53:HashSet[Object]>*/;
var54 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te) /* dfroms on <var_te:POSetElement[Object]>*/;
((void (*)(val*, val*))(var54->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var54, var_f) /* add on <var54:HashSet[Object]>*/;
RET_LABEL:;
}
/* method poset#POSet#add_edge for (self: Object, Object, Object) */
void VIRTUAL_poset__POSet__add_edge(val* self, val* p0, val* p1) {
poset__POSet__add_edge(self, p0, p1);
RET_LABEL:;
}
/* method poset#POSet#has_edge for (self: POSet[Object], Object, Object): Bool */
short int poset__POSet__has_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
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
val* var_f /* var f: Object */;
val* var_t /* var t: Object */;
val* var7 /* : HashMap[Object, POSetElement[Object]] */;
val* var8 /* : Collection[Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[Object, POSetElement[Object]] */;
val* var13 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[Object] */;
val* var14 /* : HashSet[Object] */;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (f) <p0:Object> isa POSet#0 */
/* <p0:Object> isa POSet#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 109);
show_backtrace(1);
}
/* Covariant cast for argument 1 (t) <p1:Object> isa POSet#0 */
/* <p1:Object> isa POSet#0 */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 109);
show_backtrace(1);
}
var_f = p0;
var_t = p1;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__MapRead__keys]))(var7) /* keys on <var7:HashMap[Object, POSetElement[Object]]>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__Collection__has]))(var8, var_f) /* has on <var8:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
var10 = !var9;
if (var10){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var13 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var12, var_f) /* [] on <var12:HashMap[Object, POSetElement[Object]]>*/;
var_fe = var13;
var14 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__tos]))(var_fe) /* tos on <var_fe:POSetElement[Object]>*/;
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__Collection__has]))(var14, var_t) /* has on <var14:HashSet[Object]>*/;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#has_edge for (self: Object, Object, Object): Bool */
short int VIRTUAL_poset__POSet__has_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = poset__POSet__has_edge(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#has_direct_edge for (self: POSet[Object], Object, Object): Bool */
short int poset__POSet__has_direct_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
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
val* var_f /* var f: Object */;
val* var_t /* var t: Object */;
val* var7 /* : HashMap[Object, POSetElement[Object]] */;
val* var8 /* : Collection[Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[Object, POSetElement[Object]] */;
val* var13 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[Object] */;
val* var14 /* : HashSet[Object] */;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (f) <p0:Object> isa POSet#0 */
/* <p0:Object> isa POSet#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 118);
show_backtrace(1);
}
/* Covariant cast for argument 1 (t) <p1:Object> isa POSet#0 */
/* <p1:Object> isa POSet#0 */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 118);
show_backtrace(1);
}
var_f = p0;
var_t = p1;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__MapRead__keys]))(var7) /* keys on <var7:HashMap[Object, POSetElement[Object]]>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__Collection__has]))(var8, var_f) /* has on <var8:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
var10 = !var9;
if (var10){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var13 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var12, var_f) /* [] on <var12:HashMap[Object, POSetElement[Object]]>*/;
var_fe = var13;
var14 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__Collection__has]))(var14, var_t) /* has on <var14:HashSet[Object]>*/;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#has_direct_edge for (self: Object, Object, Object): Bool */
short int VIRTUAL_poset__POSet__has_direct_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = poset__POSet__has_direct_edge(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#show_dot for (self: POSet[Object]) */
void poset__POSet__show_dot(val* self) {
val* var /* : OProcess */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[String] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[String] */;
val* var_f /* var f: OProcess */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : HashMap[Object, POSetElement[Object]] */;
val* var19 /* : Collection[Object] */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_x /* var x: Object */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
val* var37 /* : HashMap[Object, POSetElement[Object]] */;
val* var38 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[Object] */;
val* var39 /* : HashSet[Object] */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_y /* var y: Object */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
var = NEW_exec__OProcess(&type_exec__OProcess);
if (varonce) {
var1 = varonce;
} else {
var2 = "dot";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "-Txlib";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var10 = array_instance Array[String] */
var11 = 1;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var->class->vft[COLOR_exec__OProcess__init]))(var, var1, var10) /* init on <var:OProcess>*/;
var_f = var;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "digraph {\n";
var16 = 10;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_f->class->vft[COLOR_stream__OStream__write]))(var_f, var14) /* write on <var_f:OProcess>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__MapRead__keys]))(var18) /* keys on <var18:HashMap[Object, POSetElement[Object]]>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var19) /* iterator on <var19:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_x = var22;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "\";\n";
var31 = 3;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var_x;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*))(var_f->class->vft[COLOR_stream__OStream__write]))(var_f, var36) /* write on <var_f:OProcess>*/;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var38 = ((val* (*)(val*, val*))(var37->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var37, var_x) /* [] on <var37:HashMap[Object, POSetElement[Object]]>*/;
var_xe = var38;
var39 = ((val* (*)(val*))(var_xe->class->vft[COLOR_poset__POSetElement__dtos]))(var_xe) /* dtos on <var_xe:POSetElement[Object]>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Collection__iterator]))(var39) /* iterator on <var39:HashSet[Object]>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var_y = var42;
var43 = ((short int (*)(val*, val*, val*))(self->class->vft[COLOR_poset__POSet__has_edge]))(self, var_y, var_x) /* has_edge on <self:POSet[Object]>*/;
if (var43){
if (varonce44) {
var45 = varonce44;
} else {
var46 = "\"";
var47 = 1;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "\" -> \"";
var52 = 6;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\"[dir=both];\n";
var57 = 13;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 5;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var_x;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var50;
((struct instance_array__NativeArray*)var61)->values[3] = (val*) var_y;
((struct instance_array__NativeArray*)var61)->values[4] = (val*) var55;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(var_f->class->vft[COLOR_stream__OStream__write]))(var_f, var62) /* write on <var_f:OProcess>*/;
} else {
if (varonce63) {
var64 = varonce63;
} else {
var65 = "\"";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "\" -> \"";
var71 = 6;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "\";\n";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 5;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var_x;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var69;
((struct instance_array__NativeArray*)var80)->values[3] = (val*) var_y;
((struct instance_array__NativeArray*)var80)->values[4] = (val*) var74;
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
((void (*)(val*, val*))(var_f->class->vft[COLOR_stream__OStream__write]))(var_f, var81) /* write on <var_f:OProcess>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label82: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label82: (void)0;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "}\n";
var86 = 2;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
((void (*)(val*, val*))(var_f->class->vft[COLOR_stream__OStream__write]))(var_f, var84) /* write on <var_f:OProcess>*/;
RET_LABEL:;
}
/* method poset#POSet#show_dot for (self: Object) */
void VIRTUAL_poset__POSet__show_dot(val* self) {
poset__POSet__show_dot(self);
RET_LABEL:;
}
/* method poset#POSet#compare for (self: POSet[Object], Object, Object): Int */
long poset__POSet__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
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
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var7 /* : HashMap[Object, POSetElement[Object]] */;
val* var8 /* : nullable Object */;
val* var_ae /* var ae: POSetElement[Object] */;
val* var9 /* : HashMap[Object, POSetElement[Object]] */;
val* var10 /* : nullable Object */;
val* var_be /* var be: POSetElement[Object] */;
val* var11 /* : HashSet[Object] */;
long var12 /* : Int */;
val* var13 /* : HashSet[Object] */;
long var14 /* : Int */;
long var15 /* : Int */;
long var_res /* var res: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[Object, POSetElement[Object]] */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
val* var24 /* : HashMap[Object, POSetElement[Object]] */;
val* var25 /* : nullable Object */;
long var26 /* : Int */;
long var27 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa POSet#0 */
/* <p0:Object> isa POSet#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 151);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa POSet#0 */
/* <p1:Object> isa POSet#0 */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 151);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var8 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var7, var_a) /* [] on <var7:HashMap[Object, POSetElement[Object]]>*/;
var_ae = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var10 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var9, var_b) /* [] on <var9:HashMap[Object, POSetElement[Object]]>*/;
var_be = var10;
var11 = ((val* (*)(val*))(var_ae->class->vft[COLOR_poset__POSetElement__tos]))(var_ae) /* tos on <var_ae:POSetElement[Object]>*/;
var12 = ((long (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__length]))(var11) /* length on <var11:HashSet[Object]>*/;
var13 = ((val* (*)(val*))(var_be->class->vft[COLOR_poset__POSetElement__tos]))(var_be) /* tos on <var_be:POSetElement[Object]>*/;
var14 = ((long (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__length]))(var13) /* length on <var13:HashSet[Object]>*/;
var15 = kernel__Int___60d_61d_62d(var12, var14);
var_res = var15;
var16 = 0;
{ /* Inline kernel#Int#!= (var_res,var16) */
var19 = var_res == var16;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var = var_res;
goto RET_LABEL;
} else {
}
var21 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var22 = ((val* (*)(val*, val*))(var21->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var21, var_a) /* [] on <var21:HashMap[Object, POSetElement[Object]]>*/;
var23 = ((long (*)(val*))(var22->class->vft[COLOR_poset__POSetElement__count]))(var22) /* count on <var22:nullable Object(POSetElement[Object])>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var25 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var24, var_b) /* [] on <var24:HashMap[Object, POSetElement[Object]]>*/;
var26 = ((long (*)(val*))(var25->class->vft[COLOR_poset__POSetElement__count]))(var25) /* count on <var25:nullable Object(POSetElement[Object])>*/;
var27 = kernel__Int___60d_61d_62d(var23, var26);
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_poset__POSet__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = poset__POSet__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#init for (self: POSet[Object]) */
void poset__POSet__init(val* self) {
RET_LABEL:;
}
/* method poset#POSet#init for (self: Object) */
void VIRTUAL_poset__POSet__init(val* self) {
poset__POSet__init(self);
RET_LABEL:;
}
/* method poset#POSetElement#poset for (self: POSetElement[Object]): POSet[Object] */
val* poset__POSetElement__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___64dposet].val; /* @poset on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 181);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset for (self: Object): POSet[Object] */
val* VIRTUAL_poset__POSetElement__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = poset__POSetElement__poset(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset= for (self: POSetElement[Object], POSet[Object]) */
void poset__POSetElement__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetElement#0] */
/* <p0:POSet[Object]> isa POSet[POSetElement#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetElement#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 181);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64dposet].val = p0; /* @poset on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#poset= for (self: Object, POSet[Object]) */
void VIRTUAL_poset__POSetElement__poset_61d(val* self, val* p0) {
poset__POSetElement__poset_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#element for (self: POSetElement[Object]): Object */
val* poset__POSetElement__element(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = self->attrs[COLOR_poset__POSetElement___64delement].val; /* @element on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @element");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 184);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#element for (self: Object): Object */
val* VIRTUAL_poset__POSetElement__element(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = poset__POSetElement__element(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#element= for (self: POSetElement[Object], Object) */
void poset__POSetElement__element_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (element) <p0:Object> isa POSetElement#0 */
/* <p0:Object> isa POSetElement#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 184);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64delement].val = p0; /* @element on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#element= for (self: Object, Object) */
void VIRTUAL_poset__POSetElement__element_61d(val* self, val* p0) {
poset__POSetElement__element_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#tos for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__tos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___64dtos].val; /* @tos on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @tos");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 187);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#tos for (self: Object): HashSet[Object] */
val* VIRTUAL_poset__POSetElement__tos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = poset__POSetElement__tos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#tos= for (self: POSetElement[Object], HashSet[Object]) */
void poset__POSetElement__tos_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (tos) <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
/* <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[POSetElement#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64dtos].val = p0; /* @tos on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#tos= for (self: Object, HashSet[Object]) */
void VIRTUAL_poset__POSetElement__tos_61d(val* self, val* p0) {
poset__POSetElement__tos_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#froms for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__froms(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___64dfroms].val; /* @froms on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @froms");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 188);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#froms for (self: Object): HashSet[Object] */
val* VIRTUAL_poset__POSetElement__froms(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = poset__POSetElement__froms(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#froms= for (self: POSetElement[Object], HashSet[Object]) */
void poset__POSetElement__froms_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (froms) <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
/* <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[POSetElement#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 188);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64dfroms].val = p0; /* @froms on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#froms= for (self: Object, HashSet[Object]) */
void VIRTUAL_poset__POSetElement__froms_61d(val* self, val* p0) {
poset__POSetElement__froms_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#dtos for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__dtos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___64ddtos].val; /* @dtos on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @dtos");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 189);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dtos for (self: Object): HashSet[Object] */
val* VIRTUAL_poset__POSetElement__dtos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = poset__POSetElement__dtos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dtos= for (self: POSetElement[Object], HashSet[Object]) */
void poset__POSetElement__dtos_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (dtos) <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
/* <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[POSetElement#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64ddtos].val = p0; /* @dtos on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#dtos= for (self: Object, HashSet[Object]) */
void VIRTUAL_poset__POSetElement__dtos_61d(val* self, val* p0) {
poset__POSetElement__dtos_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#dfroms for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__dfroms(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___64ddfroms].val; /* @dfroms on <self:POSetElement[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @dfroms");
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 190);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dfroms for (self: Object): HashSet[Object] */
val* VIRTUAL_poset__POSetElement__dfroms(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = poset__POSetElement__dfroms(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dfroms= for (self: POSetElement[Object], HashSet[Object]) */
void poset__POSetElement__dfroms_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (dfroms) <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
/* <p0:HashSet[Object]> isa HashSet[POSetElement#0] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[POSetElement#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 190);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64ddfroms].val = p0; /* @dfroms on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#dfroms= for (self: Object, HashSet[Object]) */
void VIRTUAL_poset__POSetElement__dfroms_61d(val* self, val* p0) {
poset__POSetElement__dfroms_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#count for (self: POSetElement[Object]): Int */
long poset__POSetElement__count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_poset__POSetElement___64dcount].l; /* @count on <self:POSetElement[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count for (self: Object): Int */
long VIRTUAL_poset__POSetElement__count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = poset__POSetElement__count(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count= for (self: POSetElement[Object], Int) */
void poset__POSetElement__count_61d(val* self, long p0) {
self->attrs[COLOR_poset__POSetElement___64dcount].l = p0; /* @count on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#count= for (self: Object, Int) */
void VIRTUAL_poset__POSetElement__count_61d(val* self, long p0) {
poset__POSetElement__count_61d(self, p0);
RET_LABEL:;
}
/* method poset#POSetElement#greaters for (self: POSetElement[Object]): Collection[Object] */
val* poset__POSetElement__greaters(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__tos]))(self) /* tos on <self:POSetElement[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#greaters for (self: Object): Collection[Object] */
val* VIRTUAL_poset__POSetElement__greaters(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : Collection[Object] */;
var1 = poset__POSetElement__greaters(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#direct_greaters for (self: POSetElement[Object]): Collection[Object] */
val* poset__POSetElement__direct_greaters(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__dtos]))(self) /* dtos on <self:POSetElement[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#direct_greaters for (self: Object): Collection[Object] */
val* VIRTUAL_poset__POSetElement__direct_greaters(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : Collection[Object] */;
var1 = poset__POSetElement__direct_greaters(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#smallers for (self: POSetElement[Object]): Collection[Object] */
val* poset__POSetElement__smallers(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__froms]))(self) /* froms on <self:POSetElement[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#smallers for (self: Object): Collection[Object] */
val* VIRTUAL_poset__POSetElement__smallers(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : Collection[Object] */;
var1 = poset__POSetElement__smallers(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#direct_smallers for (self: POSetElement[Object]): Collection[Object] */
val* poset__POSetElement__direct_smallers(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__dfroms]))(self) /* dfroms on <self:POSetElement[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#direct_smallers for (self: Object): Collection[Object] */
val* VIRTUAL_poset__POSetElement__direct_smallers(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : Collection[Object] */;
var1 = poset__POSetElement__direct_smallers(self);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#<= for (self: POSetElement[Object], Object): Bool */
short int poset__POSetElement___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_t /* var t: Object */;
val* var2 /* : HashSet[Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:Object> isa POSetElement#0 */
/* <p0:Object> isa POSetElement#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 222);
show_backtrace(1);
}
var_t = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__tos]))(self) /* tos on <self:POSetElement[Object]>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_t) /* has on <var2:HashSet[Object]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#<= for (self: Object, Object): Bool */
short int VIRTUAL_poset__POSetElement___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = poset__POSetElement___60d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#< for (self: POSetElement[Object], Object): Bool */
short int poset__POSetElement___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_t /* var t: Object */;
short int var2 /* : Bool */;
val* var3 /* : Object */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : HashSet[Object] */;
short int var6 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:Object> isa POSetElement#0 */
/* <p0:Object> isa POSetElement#0 */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 228);
show_backtrace(1);
}
var_t = p0;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__element]))(self) /* element on <self:POSetElement[Object]>*/;
var4 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___33d_61d]))(var_t, var3) /* != on <var_t:Object>*/;
var_ = var4;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSetElement__tos]))(self) /* tos on <self:POSetElement[Object]>*/;
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var_t) /* has on <var5:HashSet[Object]>*/;
var2 = var6;
} else {
var2 = var_;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#< for (self: Object, Object): Bool */
short int VIRTUAL_poset__POSetElement___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = poset__POSetElement___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#init for (self: POSetElement[Object], POSet[Object], Object, Int) */
void poset__POSetElement__init(val* self, val* p0, val* p1, long p2) {
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
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetElement#0] */
/* <p0:POSet[Object]> isa POSet[POSetElement#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetElement#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 168);
show_backtrace(1);
}
/* Covariant cast for argument 1 (element) <p1:Object> isa POSetElement#0 */
/* <p1:Object> isa POSetElement#0 */
type_struct4 = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/poset.nit", 168);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___64dposet].val = p0; /* @poset on <self:POSetElement[Object]> */
self->attrs[COLOR_poset__POSetElement___64delement].val = p1; /* @element on <self:POSetElement[Object]> */
self->attrs[COLOR_poset__POSetElement___64dcount].l = p2; /* @count on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#init for (self: Object, POSet[Object], Object, Int) */
void VIRTUAL_poset__POSetElement__init(val* self, val* p0, val* p1, long p2) {
poset__POSetElement__init(self, p0, p1, p2);
RET_LABEL:;
}
