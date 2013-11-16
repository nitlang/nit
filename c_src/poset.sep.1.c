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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @elements", "lib/poset.nit", 31);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 31);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 34);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 36);
exit(1);
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
CHECK_NEW_poset__POSetElement(var7);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 50);
exit(1);
}
var_e = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__keys]))(var2) /* keys on <var2:HashMap[Object, POSetElement[Object]]>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_e) /* has on <var3:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/poset.nit", 63);
exit(1);
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
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
val* var_f /* var f: Object */;
val* var_t /* var t: Object */;
val* var5 /* : POSetElement[Object] */;
val* var_fe /* var fe: POSetElement[Object] */;
val* var6 /* : POSetElement[Object] */;
val* var_te /* var te: POSetElement[Object] */;
val* var7 /* : HashSet[Object] */;
short int var8 /* : Bool */;
val* var9 /* : HashSet[Object] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_ff /* var ff: Object */;
val* var13 /* : HashMap[Object, POSetElement[Object]] */;
val* var14 /* : nullable Object */;
val* var_ffe /* var ffe: POSetElement[Object] */;
val* var15 /* : HashSet[Object] */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_tt /* var tt: Object */;
val* var19 /* : HashMap[Object, POSetElement[Object]] */;
val* var20 /* : nullable Object */;
val* var_tte /* var tte: POSetElement[Object] */;
val* var21 /* : HashSet[Object] */;
val* var22 /* : HashSet[Object] */;
val* var24 /* : HashSet[Object] */;
short int var25 /* : Bool */;
val* var26 /* : HashSet[Object] */;
val* var27 /* : Array[nullable Object] */;
val* var28 /* : Iterator[nullable Object] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_x /* var x: Object */;
val* var31 /* : HashMap[Object, POSetElement[Object]] */;
val* var32 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[Object] */;
val* var33 /* : HashSet[Object] */;
short int var34 /* : Bool */;
val* var35 /* : HashSet[Object] */;
val* var36 /* : HashSet[Object] */;
val* var38 /* : HashSet[Object] */;
val* var39 /* : Array[nullable Object] */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_x43 /* var x: Object */;
val* var44 /* : HashMap[Object, POSetElement[Object]] */;
val* var45 /* : nullable Object */;
val* var_xe46 /* var xe: POSetElement[Object] */;
val* var47 /* : HashSet[Object] */;
short int var48 /* : Bool */;
val* var49 /* : HashSet[Object] */;
val* var50 /* : HashSet[Object] */;
val* var52 /* : HashSet[Object] */;
val* var53 /* : HashSet[Object] */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 67);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 67);
exit(1);
}
var_f = p0;
var_t = p1;
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_poset__POSet__add_node]))(self, var_f) /* add_node on <self:POSet[Object]>*/;
var_fe = var5;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_poset__POSet__add_node]))(self, var_t) /* add_node on <self:POSet[Object]>*/;
var_te = var6;
var7 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__tos]))(var_fe) /* tos on <var_fe:POSetElement[Object]>*/;
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__Collection__has]))(var7, var_t) /* has on <var7:HashSet[Object]>*/;
if (var8){
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__froms]))(var_fe) /* froms on <var_fe:POSetElement[Object]>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:HashSet[Object]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_ff = var12;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var14 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_ff) /* [] on <var13:HashMap[Object, POSetElement[Object]]>*/;
var_ffe = var14;
var15 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__tos]))(var_te) /* tos on <var_te:POSetElement[Object]>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Collection__iterator]))(var15) /* iterator on <var15:HashSet[Object]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_tt = var18;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var20 = ((val* (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var19, var_tt) /* [] on <var19:HashMap[Object, POSetElement[Object]]>*/;
var_tte = var20;
var21 = ((val* (*)(val*))(var_tte->class->vft[COLOR_poset__POSetElement__froms]))(var_tte) /* froms on <var_tte:POSetElement[Object]>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var21, var_ff) /* add on <var21:HashSet[Object]>*/;
var22 = ((val* (*)(val*))(var_ffe->class->vft[COLOR_poset__POSetElement__tos]))(var_ffe) /* tos on <var_ffe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var22, var_tt) /* add on <var22:HashSet[Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label23: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label23: (void)0;
var24 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__tos]))(var_te) /* tos on <var_te:POSetElement[Object]>*/;
var25 = ((short int (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__Collection__has]))(var24, var_f) /* has on <var24:HashSet[Object]>*/;
if (var25){
goto RET_LABEL;
} else {
}
var26 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te) /* dfroms on <var_te:POSetElement[Object]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_array__Collection__to_a]))(var26) /* to_a on <var26:HashSet[Object]>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__iterator]))(var27) /* iterator on <var27:Array[nullable Object](Array[Object])>*/;
for(;;) {
var29 = ((short int (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var28) /* is_ok on <var28:Iterator[nullable Object]>*/;
if(!var29) break;
var30 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__item]))(var28) /* item on <var28:Iterator[nullable Object]>*/;
var_x = var30;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var32 = ((val* (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var31, var_x) /* [] on <var31:HashMap[Object, POSetElement[Object]]>*/;
var_xe = var32;
var33 = ((val* (*)(val*))(var_xe->class->vft[COLOR_poset__POSetElement__tos]))(var_xe) /* tos on <var_xe:POSetElement[Object]>*/;
var34 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_abstract_collection__Collection__has]))(var33, var_f) /* has on <var33:HashSet[Object]>*/;
if (var34){
var35 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te) /* dfroms on <var_te:POSetElement[Object]>*/;
((void (*)(val*, val*))(var35->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var35, var_x) /* remove on <var35:HashSet[Object]>*/;
var36 = ((val* (*)(val*))(var_xe->class->vft[COLOR_poset__POSetElement__dtos]))(var_xe) /* dtos on <var_xe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var36->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var36, var_t) /* remove on <var36:HashSet[Object]>*/;
} else {
}
CONTINUE_label37: (void)0;
((void (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__next]))(var28) /* next on <var28:Iterator[nullable Object]>*/;
}
BREAK_label37: (void)0;
var38 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_array__Collection__to_a]))(var38) /* to_a on <var38:HashSet[Object]>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Collection__iterator]))(var39) /* iterator on <var39:Array[nullable Object](Array[Object])>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var_x43 = var42;
var44 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var45 = ((val* (*)(val*, val*))(var44->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var44, var_x43) /* [] on <var44:HashMap[Object, POSetElement[Object]]>*/;
var_xe46 = var45;
var47 = ((val* (*)(val*))(var_xe46->class->vft[COLOR_poset__POSetElement__froms]))(var_xe46) /* froms on <var_xe46:POSetElement[Object]>*/;
var48 = ((short int (*)(val*, val*))(var47->class->vft[COLOR_abstract_collection__Collection__has]))(var47, var_t) /* has on <var47:HashSet[Object]>*/;
if (var48){
var49 = ((val* (*)(val*))(var_xe46->class->vft[COLOR_poset__POSetElement__dfroms]))(var_xe46) /* dfroms on <var_xe46:POSetElement[Object]>*/;
((void (*)(val*, val*))(var49->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var49, var_f) /* remove on <var49:HashSet[Object]>*/;
var50 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var50, var_x43) /* remove on <var50:HashSet[Object]>*/;
} else {
}
CONTINUE_label51: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label51: (void)0;
var52 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
((void (*)(val*, val*))(var52->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var52, var_t) /* add on <var52:HashSet[Object]>*/;
var53 = ((val* (*)(val*))(var_te->class->vft[COLOR_poset__POSetElement__dfroms]))(var_te) /* dfroms on <var_te:POSetElement[Object]>*/;
((void (*)(val*, val*))(var53->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var53, var_f) /* add on <var53:HashSet[Object]>*/;
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_f /* var f: Object */;
val* var_t /* var t: Object */;
val* var6 /* : HashMap[Object, POSetElement[Object]] */;
val* var7 /* : Collection[Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Object, POSetElement[Object]] */;
val* var12 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[Object] */;
val* var13 /* : HashSet[Object] */;
short int var14 /* : Bool */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 109);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 109);
exit(1);
}
var_f = p0;
var_t = p1;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__MapRead__keys]))(var6) /* keys on <var6:HashMap[Object, POSetElement[Object]]>*/;
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__Collection__has]))(var7, var_f) /* has on <var7:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
var9 = !var8;
if (var9){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_f) /* [] on <var11:HashMap[Object, POSetElement[Object]]>*/;
var_fe = var12;
var13 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__tos]))(var_fe) /* tos on <var_fe:POSetElement[Object]>*/;
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__Collection__has]))(var13, var_t) /* has on <var13:HashSet[Object]>*/;
var = var14;
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_f /* var f: Object */;
val* var_t /* var t: Object */;
val* var6 /* : HashMap[Object, POSetElement[Object]] */;
val* var7 /* : Collection[Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Object, POSetElement[Object]] */;
val* var12 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[Object] */;
val* var13 /* : HashSet[Object] */;
short int var14 /* : Bool */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 118);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 118);
exit(1);
}
var_f = p0;
var_t = p1;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__MapRead__keys]))(var6) /* keys on <var6:HashMap[Object, POSetElement[Object]]>*/;
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__Collection__has]))(var7, var_f) /* has on <var7:Collection[Object](HashMapKeys[Object, POSetElement[Object]])>*/;
var9 = !var8;
if (var9){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_f) /* [] on <var11:HashMap[Object, POSetElement[Object]]>*/;
var_fe = var12;
var13 = ((val* (*)(val*))(var_fe->class->vft[COLOR_poset__POSetElement__dtos]))(var_fe) /* dtos on <var_fe:POSetElement[Object]>*/;
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__Collection__has]))(var13, var_t) /* has on <var13:HashSet[Object]>*/;
var = var14;
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
CHECK_NEW_array__Array(var10);
}
((void (*)(val*, val*, val*))(var->class->vft[COLOR_exec__OProcess__init]))(var, var1, var10) /* init on <var:OProcess>*/;
CHECK_NEW_exec__OProcess(var);
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
CHECK_NEW_array__Array(var33);
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
CHECK_NEW_array__Array(var59);
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
CHECK_NEW_array__Array(var78);
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var6 /* : HashMap[Object, POSetElement[Object]] */;
val* var7 /* : nullable Object */;
val* var_ae /* var ae: POSetElement[Object] */;
val* var8 /* : HashMap[Object, POSetElement[Object]] */;
val* var9 /* : nullable Object */;
val* var_be /* var be: POSetElement[Object] */;
val* var10 /* : HashSet[Object] */;
long var11 /* : Int */;
val* var12 /* : HashSet[Object] */;
long var13 /* : Int */;
long var14 /* : Int */;
long var_res /* var res: Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Object, POSetElement[Object]] */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
val* var23 /* : HashMap[Object, POSetElement[Object]] */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var26 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 151);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 151);
exit(1);
}
var_a = p0;
var_b = p1;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_a) /* [] on <var6:HashMap[Object, POSetElement[Object]]>*/;
var_ae = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var9 = ((val* (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var8, var_b) /* [] on <var8:HashMap[Object, POSetElement[Object]]>*/;
var_be = var9;
var10 = ((val* (*)(val*))(var_ae->class->vft[COLOR_poset__POSetElement__tos]))(var_ae) /* tos on <var_ae:POSetElement[Object]>*/;
var11 = ((long (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__length]))(var10) /* length on <var10:HashSet[Object]>*/;
var12 = ((val* (*)(val*))(var_be->class->vft[COLOR_poset__POSetElement__tos]))(var_be) /* tos on <var_be:POSetElement[Object]>*/;
var13 = ((long (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__length]))(var12) /* length on <var12:HashSet[Object]>*/;
var14 = kernel__Int___60d_61d_62d(var11, var13);
var_res = var14;
var15 = 0;
{ /* Inline kernel#Int#!= (var_res,var15) */
var18 = var_res == var15;
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
var = var_res;
goto RET_LABEL;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var21 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var20, var_a) /* [] on <var20:HashMap[Object, POSetElement[Object]]>*/;
var22 = ((long (*)(val*))(var21->class->vft[COLOR_poset__POSetElement__count]))(var21) /* count on <var21:nullable Object(POSetElement[Object])>*/;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_poset__POSet__elements]))(self) /* elements on <self:POSet[Object]>*/;
var24 = ((val* (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var23, var_b) /* [] on <var23:HashMap[Object, POSetElement[Object]]>*/;
var25 = ((long (*)(val*))(var24->class->vft[COLOR_poset__POSetElement__count]))(var24) /* count on <var24:nullable Object(POSetElement[Object])>*/;
var26 = kernel__Int___60d_61d_62d(var22, var25);
var = var26;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset", "lib/poset.nit", 181);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 181);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @element", "lib/poset.nit", 184);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 184);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @tos", "lib/poset.nit", 187);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 187);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @froms", "lib/poset.nit", 188);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 188);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @dtos", "lib/poset.nit", 189);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 189);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @dfroms", "lib/poset.nit", 190);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 190);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 222);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 228);
exit(1);
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
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 168);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/poset.nit", 168);
exit(1);
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
