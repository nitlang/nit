#include "poset.sep.0.h"
/* method poset#POSet#iterator for (self: POSet[nullable Object]): Iterator[nullable Object] */
val* poset___poset__POSet___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var3 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var4 /* : RemovableCollection[nullable Object] */;
val* var6 /* : RemovableCollection[nullable Object] */;
val* var7 /* : Iterator[nullable Object] */;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var1) on <var1:HashMap[nullable Object, POSetElement[nullable Object]]> */
var6 = var1->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <var1:HashMap[nullable Object, POSetElement[nullable Object]]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:RemovableCollection[nullable Object]>*/;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#elements for (self: POSet[nullable Object]): HashMap[nullable Object, POSetElement[nullable Object]] */
val* poset___poset__POSet___elements(val* self) {
val* var /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var1 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
var1 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#has for (self: POSet[nullable Object], nullable Object): Bool */
short int poset___poset__POSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var4 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var5 /* : RemovableCollection[nullable Object] */;
val* var7 /* : RemovableCollection[nullable Object] */;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 85);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var2) on <var2:HashMap[nullable Object, POSetElement[nullable Object]]> */
var7 = var2->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <var2:HashMap[nullable Object, POSetElement[nullable Object]]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var5, var_e) /* has on <var5:RemovableCollection[nullable Object]>*/;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_node for (self: POSet[nullable Object], nullable Object): POSetElement[nullable Object] */
val* poset___poset__POSet___add_node(val* self, val* p0) {
val* var /* : POSetElement[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var4 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var5 /* : RemovableCollection[nullable Object] */;
val* var7 /* : RemovableCollection[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var11 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : POSetElement[nullable Object] */;
val* var14 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var16 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
long var17 /* : Int */;
val* var_poe /* var poe: POSetElement[nullable Object] */;
val* var18 /* : HashSet[nullable Object] */;
val* var20 /* : HashSet[nullable Object] */;
val* var21 /* : HashSet[nullable Object] */;
val* var23 /* : HashSet[nullable Object] */;
val* var24 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var26 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 87);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var2) on <var2:HashMap[nullable Object, POSetElement[nullable Object]]> */
var7 = var2->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <var2:HashMap[nullable Object, POSetElement[nullable Object]]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var5, var_e) /* has on <var5:RemovableCollection[nullable Object]>*/;
}
if (var8){
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var11 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var9, var_e);
}
var = var12;
goto RET_LABEL;
} else {
}
var13 = NEW_poset__POSetElement(self->type->resolution_table->types[COLOR_poset__POSetElement__poset__POSet___35dE]);
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var16 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var14);
}
{
((void (*)(val* self, val* p0))(var13->class->vft[COLOR_poset__POSetElement__poset_61d]))(var13, self) /* poset= on <var13:POSetElement[nullable Object]>*/;
}
{
((void (*)(val* self, val* p0))(var13->class->vft[COLOR_poset__POSetElement__element_61d]))(var13, var_e) /* element= on <var13:POSetElement[nullable Object]>*/;
}
{
((void (*)(val* self, long p0))(var13->class->vft[COLOR_poset__POSetElement__count_61d]))(var13, var17) /* count= on <var13:POSetElement[nullable Object]>*/;
}
{
((void (*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13) /* init on <var13:POSetElement[nullable Object]>*/;
}
var_poe = var13;
{
{ /* Inline poset#POSetElement#tos (var_poe) on <var_poe:POSetElement[nullable Object]> */
var20 = var_poe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_poe:POSetElement[nullable Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var18, var_e); /* Direct call hash_collection#HashSet#add on <var18:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#froms (var_poe) on <var_poe:POSetElement[nullable Object]> */
var23 = var_poe->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_poe:POSetElement[nullable Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 390);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var21, var_e); /* Direct call hash_collection#HashSet#add on <var21:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var26 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var24, var_e, var_poe); /* Direct call hash_collection#HashMap#[]= on <var24:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
var = var_poe;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#[] for (self: POSet[nullable Object], nullable Object): POSetElement[nullable Object] */
val* poset___poset__POSet____91d_93d(val* self, val* p0) {
val* var /* : POSetElement[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var4 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var5 /* : RemovableCollection[nullable Object] */;
val* var7 /* : RemovableCollection[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var11 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var12 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 101);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var2) on <var2:HashMap[nullable Object, POSetElement[nullable Object]]> */
var7 = var2->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <var2:HashMap[nullable Object, POSetElement[nullable Object]]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var5, var_e) /* has on <var5:RemovableCollection[nullable Object]>*/;
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 115);
show_backtrace(1);
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var11 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var9, var_e);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#add_edge for (self: POSet[nullable Object], nullable Object, nullable Object) */
void poset___poset__POSet___add_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
val* var_f /* var f: nullable Object */;
val* var_t /* var t: nullable Object */;
val* var7 /* : POSetElement[nullable Object] */;
val* var_fe /* var fe: POSetElement[nullable Object] */;
val* var8 /* : POSetElement[nullable Object] */;
val* var_te /* var te: POSetElement[nullable Object] */;
val* var9 /* : HashSet[nullable Object] */;
val* var11 /* : HashSet[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : HashSet[nullable Object] */;
val* var15 /* : HashSet[nullable Object] */;
val* var_ /* var : HashSet[nullable Object] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_ff /* var ff: nullable Object */;
val* var20 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var22 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var23 /* : nullable Object */;
val* var_ffe /* var ffe: POSetElement[nullable Object] */;
val* var24 /* : HashSet[nullable Object] */;
val* var26 /* : HashSet[nullable Object] */;
val* var_27 /* var : HashSet[nullable Object] */;
val* var28 /* : Iterator[nullable Object] */;
val* var_29 /* var : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_tt /* var tt: nullable Object */;
val* var32 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var34 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var35 /* : nullable Object */;
val* var_tte /* var tte: POSetElement[nullable Object] */;
val* var36 /* : HashSet[nullable Object] */;
val* var38 /* : HashSet[nullable Object] */;
val* var39 /* : HashSet[nullable Object] */;
val* var41 /* : HashSet[nullable Object] */;
val* var45 /* : HashSet[nullable Object] */;
val* var47 /* : HashSet[nullable Object] */;
short int var48 /* : Bool */;
val* var49 /* : HashSet[nullable Object] */;
val* var51 /* : HashSet[nullable Object] */;
val* var52 /* : Array[nullable Object] */;
val* var_53 /* var : Array[nullable Object] */;
val* var54 /* : ArrayIterator[nullable Object] */;
val* var_55 /* var : ArrayIterator[nullable Object] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
val* var58 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var60 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var61 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[nullable Object] */;
val* var62 /* : HashSet[nullable Object] */;
val* var64 /* : HashSet[nullable Object] */;
short int var65 /* : Bool */;
val* var66 /* : HashSet[nullable Object] */;
val* var68 /* : HashSet[nullable Object] */;
val* var69 /* : HashSet[nullable Object] */;
val* var71 /* : HashSet[nullable Object] */;
val* var74 /* : HashSet[nullable Object] */;
val* var76 /* : HashSet[nullable Object] */;
val* var77 /* : Array[nullable Object] */;
val* var_78 /* var : Array[nullable Object] */;
val* var79 /* : ArrayIterator[nullable Object] */;
val* var_80 /* var : ArrayIterator[nullable Object] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_x83 /* var x: nullable Object */;
val* var84 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var86 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var87 /* : nullable Object */;
val* var_xe88 /* var xe: POSetElement[nullable Object] */;
val* var89 /* : HashSet[nullable Object] */;
val* var91 /* : HashSet[nullable Object] */;
short int var92 /* : Bool */;
val* var93 /* : HashSet[nullable Object] */;
val* var95 /* : HashSet[nullable Object] */;
val* var96 /* : HashSet[nullable Object] */;
val* var98 /* : HashSet[nullable Object] */;
val* var101 /* : HashSet[nullable Object] */;
val* var103 /* : HashSet[nullable Object] */;
val* var104 /* : HashSet[nullable Object] */;
val* var106 /* : HashSet[nullable Object] */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 119);
show_backtrace(1);
}
/* Covariant cast for argument 1 (t) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 119);
show_backtrace(1);
}
var_f = p0;
var_t = p1;
{
var7 = poset___poset__POSet___add_node(self, var_f);
}
var_fe = var7;
{
var8 = poset___poset__POSet___add_node(self, var_t);
}
var_te = var8;
{
{ /* Inline poset#POSetElement#tos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var11 = var_fe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var9, var_t);
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSetElement#froms (var_fe) on <var_fe:POSetElement[nullable Object]> */
var15 = var_fe->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 390);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ = var13;
{
var16 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17) /* is_ok on <var_17:Iterator[nullable Object]>*/;
}
if (var18){
{
var19 = ((val* (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17) /* item on <var_17:Iterator[nullable Object]>*/;
}
var_ff = var19;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var22 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var20, var_ff);
}
var_ffe = var23;
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[nullable Object]> */
var26 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[nullable Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
{
var28 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_27);
}
var_29 = var28;
for(;;) {
{
var30 = ((short int (*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_29) /* is_ok on <var_29:Iterator[nullable Object]>*/;
}
if (var30){
{
var31 = ((val* (*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_29) /* item on <var_29:Iterator[nullable Object]>*/;
}
var_tt = var31;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var34 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var32, var_tt);
}
var_tte = var35;
{
{ /* Inline poset#POSetElement#froms (var_tte) on <var_tte:POSetElement[nullable Object]> */
var38 = var_tte->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_tte:POSetElement[nullable Object]> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 390);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var36, var_ff); /* Direct call hash_collection#HashSet#add on <var36:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#tos (var_ffe) on <var_ffe:POSetElement[nullable Object]> */
var41 = var_ffe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_ffe:POSetElement[nullable Object]> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var39, var_tt); /* Direct call hash_collection#HashSet#add on <var39:HashSet[nullable Object]>*/
}
{
((void (*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_29) /* next on <var_29:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_29) on <var_29:Iterator[nullable Object]> */
RET_LABEL42:(void)0;
}
}
{
((void (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17) /* next on <var_17:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_17) on <var_17:Iterator[nullable Object]> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[nullable Object]> */
var47 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[nullable Object]> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var45, var_f);
}
if (var48){
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[nullable Object]> */
var51 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[nullable Object]> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 392);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = standard__array___Collection___to_a(var49);
}
var_53 = var52;
{
var54 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_53);
}
var_55 = var54;
for(;;) {
{
var56 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_55);
}
if (var56){
{
var57 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_55);
}
var_x = var57;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var60 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var58, var_x);
}
var_xe = var61;
{
{ /* Inline poset#POSetElement#tos (var_xe) on <var_xe:POSetElement[nullable Object]> */
var64 = var_xe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_xe:POSetElement[nullable Object]> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var62, var_f);
}
if (var65){
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[nullable Object]> */
var68 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[nullable Object]> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 392);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var66, var_x); /* Direct call hash_collection#HashSet#remove on <var66:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_xe) on <var_xe:POSetElement[nullable Object]> */
var71 = var_xe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_xe:POSetElement[nullable Object]> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 391);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var69, var_t); /* Direct call hash_collection#HashSet#remove on <var69:HashSet[nullable Object]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_55); /* Direct call array#ArrayIterator#next on <var_55:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label72;
}
}
BREAK_label72: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_55) on <var_55:ArrayIterator[nullable Object]> */
RET_LABEL73:(void)0;
}
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var76 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 391);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = standard__array___Collection___to_a(var74);
}
var_78 = var77;
{
var79 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_78);
}
var_80 = var79;
for(;;) {
{
var81 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_80);
}
if (var81){
{
var82 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_80);
}
var_x83 = var82;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var86 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var84, var_x83);
}
var_xe88 = var87;
{
{ /* Inline poset#POSetElement#froms (var_xe88) on <var_xe88:POSetElement[nullable Object]> */
var91 = var_xe88->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_xe88:POSetElement[nullable Object]> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 390);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var89, var_t);
}
if (var92){
{
{ /* Inline poset#POSetElement#dfroms (var_xe88) on <var_xe88:POSetElement[nullable Object]> */
var95 = var_xe88->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_xe88:POSetElement[nullable Object]> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 392);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var93, var_f); /* Direct call hash_collection#HashSet#remove on <var93:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var98 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 391);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var96, var_x83); /* Direct call hash_collection#HashSet#remove on <var96:HashSet[nullable Object]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_80); /* Direct call array#ArrayIterator#next on <var_80:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label99;
}
}
BREAK_label99: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_80) on <var_80:ArrayIterator[nullable Object]> */
RET_LABEL100:(void)0;
}
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var103 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 391);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var101, var_t); /* Direct call hash_collection#HashSet#add on <var101:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[nullable Object]> */
var106 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[nullable Object]> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 392);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var104, var_f); /* Direct call hash_collection#HashSet#add on <var104:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method poset#POSet#compare for (self: POSet[nullable Object], nullable Object, nullable Object): Int */
long poset___poset__POSet___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
val* var8 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var10 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var11 /* : nullable Object */;
val* var_ae /* var ae: POSetElement[nullable Object] */;
val* var12 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var14 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var15 /* : nullable Object */;
val* var_be /* var be: POSetElement[nullable Object] */;
val* var16 /* : HashSet[nullable Object] */;
val* var18 /* : HashSet[nullable Object] */;
long var19 /* : Int */;
val* var20 /* : HashSet[nullable Object] */;
val* var22 /* : HashSet[nullable Object] */;
long var23 /* : Int */;
long var24 /* : Int */;
long var_res /* var res: Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var32 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var39 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var40 /* : nullable Object */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 267);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 267);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var10 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var8, var_a);
}
var_ae = var11;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var14 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var12, var_b);
}
var_be = var15;
{
{ /* Inline poset#POSetElement#tos (var_ae) on <var_ae:POSetElement[nullable Object]> */
var18 = var_ae->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_ae:POSetElement[nullable Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = standard___standard__HashSet___standard__abstract_collection__Collection__length(var16);
}
{
{ /* Inline poset#POSetElement#tos (var_be) on <var_be:POSetElement[nullable Object]> */
var22 = var_be->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_be:POSetElement[nullable Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashSet___standard__abstract_collection__Collection__length(var20);
}
{
var24 = standard___standard__Int___Comparable___60d_61d_62d(var19, var23);
}
var_res = var24;
var25 = 0;
{
{ /* Inline kernel#Int#!= (var_res,var25) on <var_res:Int> */
var28 = var_res == var25;
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var32 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var30, var_a);
}
{
{ /* Inline poset#POSetElement#count (var33) on <var33:nullable Object(POSetElement[nullable Object])> */
var36 = var33->attrs[COLOR_poset__POSetElement___count].l; /* _count on <var33:nullable Object(POSetElement[nullable Object])> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var39 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var37, var_b);
}
{
{ /* Inline poset#POSetElement#count (var40) on <var40:nullable Object(POSetElement[nullable Object])> */
var43 = var40->attrs[COLOR_poset__POSetElement___count].l; /* _count on <var40:nullable Object(POSetElement[nullable Object])> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = standard___standard__Int___Comparable___60d_61d_62d(var34, var41);
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSet#linearize for (self: POSet[nullable Object], Collection[nullable Object]): Array[nullable Object] */
val* poset___poset__POSet___linearize(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Collection[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_lin /* var lin: Array[nullable Object] */;
/* Covariant cast for argument 0 (elements) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__poset__POSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 353);
show_backtrace(1);
}
var_elements = p0;
{
var2 = standard__array___Collection___to_a(var_elements);
}
var_lin = var2;
{
standard___standard__Comparator___sort(self, var_lin); /* Direct call sorter#Comparator#sort on <self:POSet[nullable Object]>*/
}
var = var_lin;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset for (self: POSetElement[nullable Object]): POSet[nullable Object] */
val* poset___poset__POSetElement___poset(val* self) {
val* var /* : POSet[nullable Object] */;
val* var1 /* : POSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 383);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#poset= for (self: POSetElement[nullable Object], POSet[nullable Object]) */
void poset___poset__POSetElement___poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[nullable Object]> isa POSet[E] */
/* <p0:POSet[nullable Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet__poset__POSetElement___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 383);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___poset].val = p0; /* _poset on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#element for (self: POSetElement[nullable Object]): nullable Object */
val* poset___poset__POSetElement___element(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#element= for (self: POSetElement[nullable Object], nullable Object) */
void poset___poset__POSetElement___element_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement___35dE];
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 386);
show_backtrace(1);
}
self->attrs[COLOR_poset__POSetElement___element].val = p0; /* _element on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#tos for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___tos(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#froms for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___froms(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 390);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dtos for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___dtos(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 391);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#dfroms for (self: POSetElement[nullable Object]): HashSet[nullable Object] */
val* poset___poset__POSetElement___dfroms(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <self:POSetElement[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 392);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count for (self: POSetElement[nullable Object]): Int */
long poset___poset__POSetElement___count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_poset__POSetElement___count].l; /* _count on <self:POSetElement[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#count= for (self: POSetElement[nullable Object], Int) */
void poset___poset__POSetElement___count_61d(val* self, long p0) {
self->attrs[COLOR_poset__POSetElement___count].l = p0; /* _count on <self:POSetElement[nullable Object]> */
RET_LABEL:;
}
/* method poset#POSetElement#greaters for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___greaters(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
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
/* method poset#POSetElement#direct_greaters for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___direct_greaters(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
{
{ /* Inline poset#POSetElement#dtos (self) on <self:POSetElement[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <self:POSetElement[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 391);
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
/* method poset#POSetElement#smallers for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___smallers(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
{
{ /* Inline poset#POSetElement#froms (self) on <self:POSetElement[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <self:POSetElement[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 390);
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
/* method poset#POSetElement#direct_smallers for (self: POSetElement[nullable Object]): Collection[nullable Object] */
val* poset___poset__POSetElement___direct_smallers(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
{
{ /* Inline poset#POSetElement#dfroms (self) on <self:POSetElement[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <self:POSetElement[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 392);
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
/* method poset#POSetElement#<= for (self: POSetElement[nullable Object], nullable Object): Bool */
short int poset___poset__POSetElement____60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_t /* var t: nullable Object */;
val* var2 /* : HashSet[nullable Object] */;
val* var4 /* : HashSet[nullable Object] */;
short int var5 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement___35dE];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 448);
show_backtrace(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var2, var_t);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method poset#POSetElement#< for (self: POSetElement[nullable Object], nullable Object): Bool */
short int poset___poset__POSetElement____60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_t /* var t: nullable Object */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : HashSet[nullable Object] */;
val* var10 /* : HashSet[nullable Object] */;
short int var11 /* : Bool */;
/* Covariant cast for argument 0 (t) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetElement___35dE];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 463);
show_backtrace(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#element (self) on <self:POSetElement[nullable Object]> */
var5 = self->attrs[COLOR_poset__POSetElement___element].val; /* _element on <self:POSetElement[nullable Object]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var_t == NULL) {
var6 = (var3 != NULL);
} else {
var7 = ((short int (*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_t, var3) /* != on <var_t:nullable Object>*/;
var6 = var7;
}
var_ = var6;
if (var6){
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[nullable Object]> */
var10 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 389);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var8, var_t);
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
/* method poset#POSetElement#init for (self: POSetElement[nullable Object]) */
void poset___poset__POSetElement___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_poset___poset__POSetElement___standard__kernel__Object__init]))(self) /* init on <self:POSetElement[nullable Object]>*/;
}
RET_LABEL:;
}
