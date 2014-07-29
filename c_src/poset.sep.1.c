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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 34);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
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
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const struct type* type_struct22;
const char* var_class_name23;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
val* var_poe /* var poe: POSetElement[Object] */;
val* var29 /* : HashSet[Object] */;
val* var31 /* : HashSet[Object] */;
val* var32 /* : HashSet[Object] */;
val* var34 /* : HashSet[Object] */;
val* var35 /* : HashMap[Object, POSetElement[Object]] */;
val* var37 /* : HashMap[Object, POSetElement[Object]] */;
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 36);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
{ /* Inline poset#POSetElement#init (var13,self,var_e,var17) on <var13:POSetElement[Object]> */
/* Covariant cast for argument 0 (poset) <self:POSet[Object]> isa POSet[POSetElement#0] */
/* <self:POSet[Object]> isa POSet[POSetElement#0] */
type_struct22 = var13->type->resolution_table->types[COLOR_poset__POSetposet__POSetElement_FT0];
cltype20 = type_struct22->color;
idtype21 = type_struct22->id;
if(cltype20 >= self->type->table_size) {
var19 = 0;
} else {
var19 = self->type->type_table[cltype20] == idtype21;
}
if (unlikely(!var19)) {
var_class_name23 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetElement#0]", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 175);
show_backtrace(1);
}
/* Covariant cast for argument 1 (element) <var_e:Object> isa POSetElement#0 */
/* <var_e:Object> isa POSetElement#0 */
type_struct27 = var13->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= var_e->type->table_size) {
var24 = 0;
} else {
var24 = var_e->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = var_e == NULL ? "null" : var_e->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 175);
show_backtrace(1);
}
var13->attrs[COLOR_poset__POSetElement___poset].val = self; /* _poset on <var13:POSetElement[Object]> */
var13->attrs[COLOR_poset__POSetElement___element].val = var_e; /* _element on <var13:POSetElement[Object]> */
var13->attrs[COLOR_poset__POSetElement___count].l = var17; /* _count on <var13:POSetElement[Object]> */
RET_LABEL18:(void)0;
}
}
var_poe = var13;
{
{ /* Inline poset#POSetElement#tos (var_poe) on <var_poe:POSetElement[Object]> */
var31 = var_poe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_poe:POSetElement[Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
hash_collection__HashSet__add(var29, var_e); /* Direct call hash_collection#HashSet#add on <var29:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#froms (var_poe) on <var_poe:POSetElement[Object]> */
var34 = var_poe->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_poe:POSetElement[Object]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
hash_collection__HashSet__add(var32, var_e); /* Direct call hash_collection#HashSet#add on <var32:HashSet[Object]>*/
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var37 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var35, var_e, var_poe); /* Direct call hash_collection#HashMap#[]= on <var35:HashMap[Object, POSetElement[Object]]>*/
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 50);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 63);
show_backtrace(1);
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var11 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
val* var15 /* : Iterator[Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_ff /* var ff: Object */;
val* var18 /* : HashMap[Object, POSetElement[Object]] */;
val* var20 /* : HashMap[Object, POSetElement[Object]] */;
val* var21 /* : nullable Object */;
val* var_ffe /* var ffe: POSetElement[Object] */;
val* var22 /* : HashSet[Object] */;
val* var24 /* : HashSet[Object] */;
val* var25 /* : Iterator[Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_tt /* var tt: Object */;
val* var28 /* : HashMap[Object, POSetElement[Object]] */;
val* var30 /* : HashMap[Object, POSetElement[Object]] */;
val* var31 /* : nullable Object */;
val* var_tte /* var tte: POSetElement[Object] */;
val* var32 /* : HashSet[Object] */;
val* var34 /* : HashSet[Object] */;
val* var35 /* : HashSet[Object] */;
val* var37 /* : HashSet[Object] */;
val* var39 /* : HashSet[Object] */;
val* var41 /* : HashSet[Object] */;
short int var42 /* : Bool */;
val* var43 /* : HashSet[Object] */;
val* var45 /* : HashSet[Object] */;
val* var46 /* : Array[nullable Object] */;
val* var47 /* : ArrayIterator[nullable Object] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_x /* var x: Object */;
val* var50 /* : HashMap[Object, POSetElement[Object]] */;
val* var52 /* : HashMap[Object, POSetElement[Object]] */;
val* var53 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[Object] */;
val* var54 /* : HashSet[Object] */;
val* var56 /* : HashSet[Object] */;
short int var57 /* : Bool */;
val* var58 /* : HashSet[Object] */;
val* var60 /* : HashSet[Object] */;
val* var61 /* : HashSet[Object] */;
val* var63 /* : HashSet[Object] */;
val* var65 /* : HashSet[Object] */;
val* var67 /* : HashSet[Object] */;
val* var68 /* : Array[nullable Object] */;
val* var69 /* : ArrayIterator[nullable Object] */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_x72 /* var x: Object */;
val* var73 /* : HashMap[Object, POSetElement[Object]] */;
val* var75 /* : HashMap[Object, POSetElement[Object]] */;
val* var76 /* : nullable Object */;
val* var_xe77 /* var xe: POSetElement[Object] */;
val* var78 /* : HashSet[Object] */;
val* var80 /* : HashSet[Object] */;
short int var81 /* : Bool */;
val* var82 /* : HashSet[Object] */;
val* var84 /* : HashSet[Object] */;
val* var85 /* : HashSet[Object] */;
val* var87 /* : HashSet[Object] */;
val* var89 /* : HashSet[Object] */;
val* var91 /* : HashSet[Object] */;
val* var92 /* : HashSet[Object] */;
val* var94 /* : HashSet[Object] */;
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 67);
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
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = hash_collection__HashSet__iterator(var12);
}
for(;;) {
{
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[Object]>*/;
}
if(!var16) break;
{
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[Object]>*/;
}
var_ff = var17;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var20 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = hash_collection__HashMap___91d_93d(var18, var_ff);
}
var_ffe = var21;
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[Object]> */
var24 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[Object]> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = hash_collection__HashSet__iterator(var22);
}
for(;;) {
{
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[Object]>*/;
}
if(!var26) break;
{
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[Object]>*/;
}
var_tt = var27;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var30 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = hash_collection__HashMap___91d_93d(var28, var_tt);
}
var_tte = var31;
{
{ /* Inline poset#POSetElement#froms (var_tte) on <var_tte:POSetElement[Object]> */
var34 = var_tte->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_tte:POSetElement[Object]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
hash_collection__HashSet__add(var32, var_ff); /* Direct call hash_collection#HashSet#add on <var32:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#tos (var_ffe) on <var_ffe:POSetElement[Object]> */
var37 = var_ffe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_ffe:POSetElement[Object]> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
hash_collection__HashSet__add(var35, var_tt); /* Direct call hash_collection#HashSet#add on <var35:HashSet[Object]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label38: (void)0;
{
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[Object]>*/;
}
}
BREAK_label38: (void)0;
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[Object]> */
var41 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[Object]> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = hash_collection__HashSet__has(var39, var_f);
}
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[Object]> */
var45 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[Object]> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = array__Collection__to_a(var43);
}
{
var47 = array__AbstractArrayRead__iterator(var46);
}
for(;;) {
{
var48 = array__ArrayIterator__is_ok(var47);
}
if(!var48) break;
{
var49 = array__ArrayIterator__item(var47);
}
var_x = var49;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var52 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = hash_collection__HashMap___91d_93d(var50, var_x);
}
var_xe = var53;
{
{ /* Inline poset#POSetElement#tos (var_xe) on <var_xe:POSetElement[Object]> */
var56 = var_xe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_xe:POSetElement[Object]> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = hash_collection__HashSet__has(var54, var_f);
}
if (var57){
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[Object]> */
var60 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[Object]> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
hash_collection__HashSet__remove(var58, var_x); /* Direct call hash_collection#HashSet#remove on <var58:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_xe) on <var_xe:POSetElement[Object]> */
var63 = var_xe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_xe:POSetElement[Object]> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
hash_collection__HashSet__remove(var61, var_t); /* Direct call hash_collection#HashSet#remove on <var61:HashSet[Object]>*/
}
} else {
}
CONTINUE_label64: (void)0;
{
array__ArrayIterator__next(var47); /* Direct call array#ArrayIterator#next on <var47:ArrayIterator[nullable Object]>*/
}
}
BREAK_label64: (void)0;
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[Object]> */
var67 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[Object]> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = array__Collection__to_a(var65);
}
{
var69 = array__AbstractArrayRead__iterator(var68);
}
for(;;) {
{
var70 = array__ArrayIterator__is_ok(var69);
}
if(!var70) break;
{
var71 = array__ArrayIterator__item(var69);
}
var_x72 = var71;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var75 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = hash_collection__HashMap___91d_93d(var73, var_x72);
}
var_xe77 = var76;
{
{ /* Inline poset#POSetElement#froms (var_xe77) on <var_xe77:POSetElement[Object]> */
var80 = var_xe77->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_xe77:POSetElement[Object]> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = hash_collection__HashSet__has(var78, var_t);
}
if (var81){
{
{ /* Inline poset#POSetElement#dfroms (var_xe77) on <var_xe77:POSetElement[Object]> */
var84 = var_xe77->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_xe77:POSetElement[Object]> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
hash_collection__HashSet__remove(var82, var_f); /* Direct call hash_collection#HashSet#remove on <var82:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[Object]> */
var87 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[Object]> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
hash_collection__HashSet__remove(var85, var_x72); /* Direct call hash_collection#HashSet#remove on <var85:HashSet[Object]>*/
}
} else {
}
CONTINUE_label88: (void)0;
{
array__ArrayIterator__next(var69); /* Direct call array#ArrayIterator#next on <var69:ArrayIterator[nullable Object]>*/
}
}
BREAK_label88: (void)0;
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[Object]> */
var91 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[Object]> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
hash_collection__HashSet__add(var89, var_t); /* Direct call hash_collection#HashSet#add on <var89:HashSet[Object]>*/
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[Object]> */
var94 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[Object]> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
hash_collection__HashSet__add(var92, var_f); /* Direct call hash_collection#HashSet#add on <var92:HashSet[Object]>*/
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 151);
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
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet#0", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 151);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[Object]> */
var9 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 31);
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
/* Covariant cast for argument 0 (elements) <p0:Collection[Object]> isa Collection[POSet#0] */
/* <p0:Collection[Object]> isa Collection[POSet#0] */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[POSet#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 167);
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
/* method poset#POSet#init for (self: POSet[Object]) */
void poset__POSet__init(val* self) {
RET_LABEL:;
}
/* method poset#POSet#init for (self: Object) */
void VIRTUAL_poset__POSet__init(val* self) {
{ /* Inline poset#POSet#init (self) on <self:Object(POSet[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method poset#POSetElement#poset for (self: POSetElement[Object]): POSet[Object] */
val* poset__POSetElement__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 188);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 188);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#element for (self: POSetElement[Object]): Object */
val* poset__POSetElement__element(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _element");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 191);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 191);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#tos for (self: POSetElement[Object]): HashSet[Object] */
val* poset__POSetElement__tos(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 196);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 195);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 197);
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 229);
show_backtrace(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[Object]> */
var4 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 235);
show_backtrace(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#element (self) on <self:POSetElement[Object]> */
var5 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _element");
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 191);
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
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 194);
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetElement#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 175);
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
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 175);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___poset].val = p0; /* _poset on <self:POSetElement[Object]> */
self->attrs[COLOR_poset__POSetElement___element].val = p1; /* _element on <self:POSetElement[Object]> */
self->attrs[COLOR_poset__POSetElement___count].l = p2; /* _count on <self:POSetElement[Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#init for (self: Object, POSet[Object], Object, Int) */
void VIRTUAL_poset__POSetElement__init(val* self, val* p0, val* p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
{ /* Inline poset#POSetElement#init (self,p0,p1,p2) on <self:Object(POSetElement[Object])> */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetElement#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 175);
show_backtrace(1);
}
/* Covariant cast for argument 1 (element) <p1:Object> isa POSetElement#0 */
/* <p1:Object> isa POSetElement#0 */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSetElement_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetElement#0", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/poset.nit", 175);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___poset].val = p0; /* _poset on <self:Object(POSetElement[Object])> */
self->attrs[COLOR_poset__POSetElement___element].val = p1; /* _element on <self:Object(POSetElement[Object])> */
self->attrs[COLOR_poset__POSetElement___count].l = p2; /* _count on <self:Object(POSetElement[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
