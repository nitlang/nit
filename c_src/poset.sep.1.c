#include "poset.sep.0.h"
/* method poset#POSet#iterator for (self: POSet[Object]): Iterator[Object] */
val* poset__POSet__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : HashMap[Object, POSetElement[Object]] */;
val* var3 /* : HashMap[Object, POSetElement[Object]] */;
val* var4 /* : RemovableCollection[Object] */;
val* var6 /* : RemovableCollection[Object] */;
val* var7 /* : Iterator[nullable Object] */;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var3 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var1) on <var1:HashMap[Object, POSetElement[Object]]> */
var6 = var1->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var1:HashMap[Object, POSetElement[Object]]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:RemovableCollection[Object]>*/;
}
var = var7;
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
var1 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
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
val* var3 /* : HashMap[Object, POSetElement[Object]] */;
{ /* Inline poset#POSet#elements (self) on <self:Object(POSet[Object])> */
var3 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:Object(POSet[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
val* var4 /* : HashMap[Object, POSetElement[Object]] */;
val* var5 /* : RemovableCollection[Object] */;
val* var7 /* : RemovableCollection[Object] */;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 36);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var2) on <var2:HashMap[Object, POSetElement[Object]]> */
var7 = var2->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var2:HashMap[Object, POSetElement[Object]]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var_e) /* has on <var5:RemovableCollection[Object]>*/;
}
var = var8;
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
val* var4 /* : HashMap[Object, POSetElement[Object]] */;
val* var5 /* : RemovableCollection[Object] */;
val* var7 /* : RemovableCollection[Object] */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[Object, POSetElement[Object]] */;
val* var11 /* : HashMap[Object, POSetElement[Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : POSetElement[Object] */;
val* var14 /* : HashMap[Object, POSetElement[Object]] */;
val* var16 /* : HashMap[Object, POSetElement[Object]] */;
long var17 /* : Int */;
val* var_poe /* var poe: POSetElement[Object] */;
val* var18 /* : HashSet[Object] */;
val* var20 /* : HashSet[Object] */;
val* var21 /* : HashSet[Object] */;
val* var23 /* : HashSet[Object] */;
val* var24 /* : HashMap[Object, POSetElement[Object]] */;
val* var26 /* : HashMap[Object, POSetElement[Object]] */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 38);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var2) on <var2:HashMap[Object, POSetElement[Object]]> */
var7 = var2->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var2:HashMap[Object, POSetElement[Object]]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var_e) /* has on <var5:RemovableCollection[Object]>*/;
}
if (var8){
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var11 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = hash_collection__HashMap___91d_93d(var9, var_e);
}
var = var12;
goto RET_LABEL;
} else {
}
var13 = NEW_poset__POSetElement(self->type->resolution_table->types[COLOR_poset__POSetElementposet__POSet_FT0]);
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var16 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = hash_collection__HashMap__length(var14);
}
{
((void (*)(val*, val*))(var13->class->vft[COLOR_poset__POSetElement__poset_61d]))(var13, self) /* poset= on <var13:POSetElement[Object]>*/;
}
{
((void (*)(val*, val*))(var13->class->vft[COLOR_poset__POSetElement__element_61d]))(var13, var_e) /* element= on <var13:POSetElement[Object]>*/;
}
{
((void (*)(val*, long))(var13->class->vft[COLOR_poset__POSetElement__count_61d]))(var13, var17) /* count= on <var13:POSetElement[Object]>*/;
}
{
((void (*)(val*))(var13->class->vft[COLOR_kernel__Object__init]))(var13) /* init on <var13:POSetElement[Object]>*/;
}
var_poe = var13;
{
{ /* Inline poset#POSetElement#tos (var_poe) on <var_poe:POSetElement[Object]> */
var20 = var_poe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_poe:POSetElement[Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
hash_collection__HashSet__add(var18, var_e); /* Direct call hash_collection#HashSet#add on <var18:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#froms (var_poe) on <var_poe:POSetElement[Object]> */
var23 = var_poe->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_poe:POSetElement[Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
hash_collection__HashSet__add(var21, var_e); /* Direct call hash_collection#HashSet#add on <var21:HashSet[Object]>*/
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var26 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var24, var_e, var_poe); /* Direct call hash_collection#HashMap#[]= on <var24:HashMap[Object, POSetElement[Object]]>*/
}
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
val* var4 /* : HashMap[Object, POSetElement[Object]] */;
val* var5 /* : RemovableCollection[Object] */;
val* var7 /* : RemovableCollection[Object] */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[Object, POSetElement[Object]] */;
val* var11 /* : HashMap[Object, POSetElement[Object]] */;
val* var12 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 52);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var2) on <var2:HashMap[Object, POSetElement[Object]]> */
var7 = var2->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var2:HashMap[Object, POSetElement[Object]]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var_e) /* has on <var5:RemovableCollection[Object]>*/;
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 65);
show_backtrace(1);
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var11 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = hash_collection__HashMap___91d_93d(var9, var_e);
}
var = var12;
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
val* var10 /* : HashSet[Object] */;
short int var11 /* : Bool */;
val* var12 /* : HashSet[Object] */;
val* var14 /* : HashSet[Object] */;
val* var_ /* var : HashSet[Object] */;
val* var15 /* : Iterator[Object] */;
val* var_16 /* var : Iterator[Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_ff /* var ff: Object */;
val* var19 /* : HashMap[Object, POSetElement[Object]] */;
val* var21 /* : HashMap[Object, POSetElement[Object]] */;
val* var22 /* : nullable Object */;
val* var_ffe /* var ffe: POSetElement[Object] */;
val* var23 /* : HashSet[Object] */;
val* var25 /* : HashSet[Object] */;
val* var_26 /* var : HashSet[Object] */;
val* var27 /* : Iterator[Object] */;
val* var_28 /* var : Iterator[Object] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_tt /* var tt: Object */;
val* var31 /* : HashMap[Object, POSetElement[Object]] */;
val* var33 /* : HashMap[Object, POSetElement[Object]] */;
val* var34 /* : nullable Object */;
val* var_tte /* var tte: POSetElement[Object] */;
val* var35 /* : HashSet[Object] */;
val* var37 /* : HashSet[Object] */;
val* var38 /* : HashSet[Object] */;
val* var40 /* : HashSet[Object] */;
val* var44 /* : HashSet[Object] */;
val* var46 /* : HashSet[Object] */;
short int var47 /* : Bool */;
val* var48 /* : HashSet[Object] */;
val* var50 /* : HashSet[Object] */;
val* var51 /* : Array[nullable Object] */;
val* var_52 /* var : Array[Object] */;
val* var53 /* : ArrayIterator[nullable Object] */;
val* var_54 /* var : ArrayIterator[Object] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_x /* var x: Object */;
val* var57 /* : HashMap[Object, POSetElement[Object]] */;
val* var59 /* : HashMap[Object, POSetElement[Object]] */;
val* var60 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[Object] */;
val* var61 /* : HashSet[Object] */;
val* var63 /* : HashSet[Object] */;
short int var64 /* : Bool */;
val* var65 /* : HashSet[Object] */;
val* var67 /* : HashSet[Object] */;
val* var68 /* : HashSet[Object] */;
val* var70 /* : HashSet[Object] */;
val* var73 /* : HashSet[Object] */;
val* var75 /* : HashSet[Object] */;
val* var76 /* : Array[nullable Object] */;
val* var_77 /* var : Array[Object] */;
val* var78 /* : ArrayIterator[nullable Object] */;
val* var_79 /* var : ArrayIterator[Object] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_x82 /* var x: Object */;
val* var83 /* : HashMap[Object, POSetElement[Object]] */;
val* var85 /* : HashMap[Object, POSetElement[Object]] */;
val* var86 /* : nullable Object */;
val* var_xe87 /* var xe: POSetElement[Object] */;
val* var88 /* : HashSet[Object] */;
val* var90 /* : HashSet[Object] */;
short int var91 /* : Bool */;
val* var92 /* : HashSet[Object] */;
val* var94 /* : HashSet[Object] */;
val* var95 /* : HashSet[Object] */;
val* var97 /* : HashSet[Object] */;
val* var100 /* : HashSet[Object] */;
val* var102 /* : HashSet[Object] */;
val* var103 /* : HashSet[Object] */;
val* var105 /* : HashSet[Object] */;
/* Covariant cast for argument 0 (f) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 69);
show_backtrace(1);
}
/* Covariant cast for argument 1 (t) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 69);
show_backtrace(1);
}
var_f = p0;
var_t = p1;
{
var6 = poset__POSet__add_node(self, var_f);
}
var_fe = var6;
{
var7 = poset__POSet__add_node(self, var_t);
}
var_te = var7;
{
{ /* Inline poset#POSetElement#tos (var_fe) on <var_fe:POSetElement[Object]> */
var10 = var_fe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_fe:POSetElement[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = hash_collection__HashSet__has(var8, var_t);
}
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSetElement#froms (var_fe) on <var_fe:POSetElement[Object]> */
var14 = var_fe->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_fe:POSetElement[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = hash_collection__HashSet__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[Object]>*/;
}
if (var17){
{
var18 = ((val* (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[Object]>*/;
}
var_ff = var18;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var21 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = hash_collection__HashMap___91d_93d(var19, var_ff);
}
var_ffe = var22;
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[Object]> */
var25 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[Object]> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
{
var27 = hash_collection__HashSet__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = ((short int (*)(val*))(var_28->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_28) /* is_ok on <var_28:Iterator[Object]>*/;
}
if (var29){
{
var30 = ((val* (*)(val*))(var_28->class->vft[COLOR_abstract_collection__Iterator__item]))(var_28) /* item on <var_28:Iterator[Object]>*/;
}
var_tt = var30;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var33 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = hash_collection__HashMap___91d_93d(var31, var_tt);
}
var_tte = var34;
{
{ /* Inline poset#POSetElement#froms (var_tte) on <var_tte:POSetElement[Object]> */
var37 = var_tte->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_tte:POSetElement[Object]> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
hash_collection__HashSet__add(var35, var_ff); /* Direct call hash_collection#HashSet#add on <var35:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#tos (var_ffe) on <var_ffe:POSetElement[Object]> */
var40 = var_ffe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_ffe:POSetElement[Object]> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
hash_collection__HashSet__add(var38, var_tt); /* Direct call hash_collection#HashSet#add on <var38:HashSet[Object]>*/
}
{
((void (*)(val*))(var_28->class->vft[COLOR_abstract_collection__Iterator__next]))(var_28) /* next on <var_28:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:Iterator[Object]> */
RET_LABEL41:(void)0;
}
}
{
((void (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[Object]>*/;
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:Iterator[Object]> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[Object]> */
var46 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[Object]> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = hash_collection__HashSet__has(var44, var_f);
}
if (var47){
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[Object]> */
var50 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[Object]> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = array__Collection__to_a(var48);
}
var_52 = var51;
{
var53 = array__AbstractArrayRead__iterator(var_52);
}
var_54 = var53;
for(;;) {
{
var55 = array__ArrayIterator__is_ok(var_54);
}
if (var55){
{
var56 = array__ArrayIterator__item(var_54);
}
var_x = var56;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var59 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = hash_collection__HashMap___91d_93d(var57, var_x);
}
var_xe = var60;
{
{ /* Inline poset#POSetElement#tos (var_xe) on <var_xe:POSetElement[Object]> */
var63 = var_xe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_xe:POSetElement[Object]> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = hash_collection__HashSet__has(var61, var_f);
}
if (var64){
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[Object]> */
var67 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[Object]> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
hash_collection__HashSet__remove(var65, var_x); /* Direct call hash_collection#HashSet#remove on <var65:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_xe) on <var_xe:POSetElement[Object]> */
var70 = var_xe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_xe:POSetElement[Object]> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
hash_collection__HashSet__remove(var68, var_t); /* Direct call hash_collection#HashSet#remove on <var68:HashSet[Object]>*/
}
} else {
}
{
array__ArrayIterator__next(var_54); /* Direct call array#ArrayIterator#next on <var_54:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label71;
}
}
BREAK_label71: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_54) on <var_54:ArrayIterator[Object]> */
RET_LABEL72:(void)0;
}
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[Object]> */
var75 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[Object]> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = array__Collection__to_a(var73);
}
var_77 = var76;
{
var78 = array__AbstractArrayRead__iterator(var_77);
}
var_79 = var78;
for(;;) {
{
var80 = array__ArrayIterator__is_ok(var_79);
}
if (var80){
{
var81 = array__ArrayIterator__item(var_79);
}
var_x82 = var81;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var85 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = hash_collection__HashMap___91d_93d(var83, var_x82);
}
var_xe87 = var86;
{
{ /* Inline poset#POSetElement#froms (var_xe87) on <var_xe87:POSetElement[Object]> */
var90 = var_xe87->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_xe87:POSetElement[Object]> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = hash_collection__HashSet__has(var88, var_t);
}
if (var91){
{
{ /* Inline poset#POSetElement#dfroms (var_xe87) on <var_xe87:POSetElement[Object]> */
var94 = var_xe87->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_xe87:POSetElement[Object]> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
hash_collection__HashSet__remove(var92, var_f); /* Direct call hash_collection#HashSet#remove on <var92:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[Object]> */
var97 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[Object]> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
hash_collection__HashSet__remove(var95, var_x82); /* Direct call hash_collection#HashSet#remove on <var95:HashSet[Object]>*/
}
} else {
}
{
array__ArrayIterator__next(var_79); /* Direct call array#ArrayIterator#next on <var_79:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label98;
}
}
BREAK_label98: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_79) on <var_79:ArrayIterator[Object]> */
RET_LABEL99:(void)0;
}
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[Object]> */
var102 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[Object]> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
hash_collection__HashSet__add(var100, var_t); /* Direct call hash_collection#HashSet#add on <var100:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[Object]> */
var105 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[Object]> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
hash_collection__HashSet__add(var103, var_f); /* Direct call hash_collection#HashSet#add on <var103:HashSet[Object]>*/
}
RET_LABEL:;
}
/* method poset#POSet#add_edge for (self: Object, Object, Object) */
void VIRTUAL_poset__POSet__add_edge(val* self, val* p0, val* p1) {
poset__POSet__add_edge(self, p0, p1); /* Direct call poset#POSet#add_edge on <self:Object(POSet[Object])>*/
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
val* var9 /* : HashMap[Object, POSetElement[Object]] */;
val* var10 /* : nullable Object */;
val* var_ae /* var ae: POSetElement[Object] */;
val* var11 /* : HashMap[Object, POSetElement[Object]] */;
val* var13 /* : HashMap[Object, POSetElement[Object]] */;
val* var14 /* : nullable Object */;
val* var_be /* var be: POSetElement[Object] */;
val* var15 /* : HashSet[Object] */;
val* var17 /* : HashSet[Object] */;
long var18 /* : Int */;
val* var19 /* : HashSet[Object] */;
val* var21 /* : HashSet[Object] */;
long var22 /* : Int */;
long var23 /* : Int */;
long var_res /* var res: Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap[Object, POSetElement[Object]] */;
val* var32 /* : HashMap[Object, POSetElement[Object]] */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : HashMap[Object, POSetElement[Object]] */;
val* var39 /* : HashMap[Object, POSetElement[Object]] */;
val* var40 /* : nullable Object */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 153);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 153);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var9 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = hash_collection__HashMap___91d_93d(var7, var_a);
}
var_ae = var10;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var13 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = hash_collection__HashMap___91d_93d(var11, var_b);
}
var_be = var14;
{
{ /* Inline poset#POSetElement#tos (var_ae) on <var_ae:POSetElement[Object]> */
var17 = var_ae->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_ae:POSetElement[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = hash_collection__HashSet__length(var15);
}
{
{ /* Inline poset#POSetElement#tos (var_be) on <var_be:POSetElement[Object]> */
var21 = var_be->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_be:POSetElement[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = hash_collection__HashSet__length(var19);
}
{
var23 = kernel__Int___60d_61d_62d(var18, var22);
}
var_res = var23;
var24 = 0;
{
{ /* Inline kernel#Int#!= (var_res,var24) on <var_res:Int> */
var28 = var_res == var24;
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var32 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = hash_collection__HashMap___91d_93d(var30, var_a);
}
{
{ /* Inline poset#POSetElement#count (var33) on <var33:nullable Object(POSetElement[Object])> */
var36 = var33->attrs[COLOR_poset__POSetElement___count].l; /* _count on <var33:nullable Object(POSetElement[Object])> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var39 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 33);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = hash_collection__HashMap___91d_93d(var37, var_b);
}
{
{ /* Inline poset#POSetElement#count (var40) on <var40:nullable Object(POSetElement[Object])> */
var43 = var40->attrs[COLOR_poset__POSetElement___count].l; /* _count on <var40:nullable Object(POSetElement[Object])> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = kernel__Int___60d_61d_62d(var34, var41);
}
var = var44;
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
/* method poset#POSet#linearize for (self: POSet[Object], Collection[Object]): Array[Object] */
val* poset__POSet__linearize(val* self, val* p0) {
val* var /* : Array[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Collection[Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_lin /* var lin: Array[Object] */;
/* Covariant cast for argument 0 (elements) <p0:Collection[Object]> isa Collection[E] */
/* <p0:Collection[Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionposet__POSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 218);
show_backtrace(1);
}
var_elements = p0;
{
var2 = array__Collection__to_a(var_elements);
}
var_lin = var2;
{
sorter__Comparator__sort(self, var_lin); /* Direct call sorter#Comparator#sort on <self:POSet[Object]>*/
}
var = var_lin;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#linearize for (self: Object, Collection[Object]): Array[Object] */
val* VIRTUAL_poset__POSet__linearize(val* self, val* p0) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = poset__POSet__linearize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset for (self: POSetElement[Object]): POSet[Object] */
val* poset__POSetElement__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 239);
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
val* var3 /* : POSet[Object] */;
{ /* Inline poset#POSetElement#poset (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <self:Object(POSetElement[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 239);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
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
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 239);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___poset].val = p0; /* _poset on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#poset= for (self: Object, POSet[Object]) */
void VIRTUAL_poset__POSetElement__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline poset#POSetElement#poset= (self,p0) on <self:Object(POSetElement[Object])> */
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetposet__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 239);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___poset].val = p0; /* _poset on <self:Object(POSetElement[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method poset#POSetElement#element for (self: POSetElement[Object]): Object */
val* poset__POSetElement__element(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _element");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 242);
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
val* var3 /* : Object */;
{ /* Inline poset#POSetElement#element (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:Object(POSetElement[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _element");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 242);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
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
/* Covariant cast for argument 0 (element) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 242);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___element].val = p0; /* _element on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#element= for (self: Object, Object) */
void VIRTUAL_poset__POSetElement__element_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline poset#POSetElement#element= (self,p0) on <self:Object(POSetElement[Object])> */
/* Covariant cast for argument 0 (element) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 242);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___element].val = p0; /* _element on <self:Object(POSetElement[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method poset#POSetElement#tos for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__tos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
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
val* var3 /* : HashSet[Object] */;
{ /* Inline poset#POSetElement#tos (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:Object(POSetElement[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#froms for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__froms(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
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
val* var3 /* : HashSet[Object] */;
{ /* Inline poset#POSetElement#froms (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <self:Object(POSetElement[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dtos for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__dtos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
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
val* var3 /* : HashSet[Object] */;
{ /* Inline poset#POSetElement#dtos (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <self:Object(POSetElement[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dfroms for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__dfroms(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
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
val* var3 /* : HashSet[Object] */;
{ /* Inline poset#POSetElement#dfroms (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <self:Object(POSetElement[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count for (self: POSetElement[Object]): Int */
long poset__POSetElement__count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_poset__POSetElement___count].l; /* _count on <self:POSetElement[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count for (self: Object): Int */
long VIRTUAL_poset__POSetElement__count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline poset#POSetElement#count (self) on <self:Object(POSetElement[Object])> */
var3 = self->attrs[COLOR_poset__POSetElement___count].l; /* _count on <self:Object(POSetElement[Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count= for (self: POSetElement[Object], Int) */
void poset__POSetElement__count_61d(val* self, long p0) {
self->attrs[COLOR_poset__POSetElement___count].l = p0; /* _count on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#count= for (self: Object, Int) */
void VIRTUAL_poset__POSetElement__count_61d(val* self, long p0) {
{ /* Inline poset#POSetElement#count= (self,p0) on <self:Object(POSetElement[Object])> */
self->attrs[COLOR_poset__POSetElement___count].l = p0; /* _count on <self:Object(POSetElement[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method poset#POSetElement#greaters for (self: POSetElement[Object]): Collection[Object] */
val* poset__POSetElement__greaters(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
val* var3 /* : HashSet[Object] */;
{
{ /* Inline poset#POSetElement#dtos (self) on <self:POSetElement[Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <self:POSetElement[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 247);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
val* var3 /* : HashSet[Object] */;
{
{ /* Inline poset#POSetElement#froms (self) on <self:POSetElement[Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <self:POSetElement[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 246);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
val* var3 /* : HashSet[Object] */;
{
{ /* Inline poset#POSetElement#dfroms (self) on <self:POSetElement[Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <self:POSetElement[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 248);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
val* var4 /* : HashSet[Object] */;
short int var5 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 280);
show_backtrace(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[Object]> */
var4 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = hash_collection__HashSet__has(var2, var_t);
}
var = var5;
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
val* var5 /* : Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : HashSet[Object] */;
val* var10 /* : HashSet[Object] */;
short int var11 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 286);
show_backtrace(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#element (self) on <self:POSetElement[Object]> */
var5 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _element");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 242);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var7 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___33d_61d]))(var_t, var3) /* != on <var_t:Object>*/;
var6 = var7;
}
var_ = var6;
if (var6){
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[Object]> */
var10 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 245);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = hash_collection__HashSet__has(var8, var_t);
}
var2 = var11;
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
/* method poset#POSetElement#init for (self: POSetElement[Object]) */
void poset__POSetElement__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_poset__POSetElement__init]))(self) /* init on <self:POSetElement[Object]>*/;
}
RET_LABEL:;
}
/* method poset#POSetElement#init for (self: Object) */
void VIRTUAL_poset__POSetElement__init(val* self) {
{ /* Inline poset#POSetElement#init (self) on <self:Object(POSetElement[Object])> */
{
((void (*)(val*))(self->class->vft[COLOR_poset__POSetElement__init]))(self) /* init on <self:Object(POSetElement[Object])>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
