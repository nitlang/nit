#include "poset.sep.0.h"
/* method poset#POSet#iterator for (self: POSet[nullable Object]): Iterator[nullable Object] */
val* poset___poset__POSet___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var3 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var4 /* : RemovableCollection[nullable Object] */;
val* var5 /* : Iterator[nullable Object] */;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var1);
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var4); /* iterator on <var4:RemovableCollection[nullable Object]>*/
}
var = var5;
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
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method poset#POSet#has for (self: POSet[nullable Object], nullable Object): Bool */
short int poset___poset__POSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
val* var1 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var3 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var4 /* : RemovableCollection[nullable Object] */;
short int var5 /* : Bool */;
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var3 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var1);
}
{
var5 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var4, var_e); /* has on <var4:RemovableCollection[nullable Object]>*/
}
var = var5;
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
short int var6 /* : Bool */;
val* var7 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var9 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var10 /* : nullable Object */;
val* var11 /* : POSetElement[nullable Object] */;
val* var12 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var14 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
long var15 /* : Int */;
val* var_poe /* var poe: POSetElement[nullable Object] */;
val* var16 /* : HashSet[nullable Object] */;
val* var18 /* : HashSet[nullable Object] */;
val* var19 /* : HashSet[nullable Object] */;
val* var21 /* : HashSet[nullable Object] */;
val* var22 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var24 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 87);
fatal_exit(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var2);
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var5, var_e); /* has on <var5:RemovableCollection[nullable Object]>*/
}
if (var6){
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var9 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var7, var_e);
}
var = var10;
goto RET_LABEL;
} else {
}
var11 = NEW_poset__POSetElement(self->type->resolution_table->types[COLOR_poset__POSetElement__poset__POSet___35dE]);
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var14 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var12);
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_poset__POSetElement__poset_61d]))(var11, self); /* poset= on <var11:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_poset__POSetElement__element_61d]))(var11, var_e); /* element= on <var11:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_poset__POSetElement__count_61d]))(var11, var15); /* count= on <var11:POSetElement[nullable Object]>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:POSetElement[nullable Object]>*/
}
var_poe = var11;
{
{ /* Inline poset#POSetElement#tos (var_poe) on <var_poe:POSetElement[nullable Object]> */
var18 = var_poe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_poe:POSetElement[nullable Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var16, var_e); /* Direct call hash_collection#HashSet#add on <var16:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#froms (var_poe) on <var_poe:POSetElement[nullable Object]> */
var21 = var_poe->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_poe:POSetElement[nullable Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var19, var_e); /* Direct call hash_collection#HashSet#add on <var19:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var24 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var22, var_e, var_poe); /* Direct call hash_collection#HashMap#[]= on <var22:HashMap[nullable Object, POSetElement[nullable Object]]>*/
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
short int var6 /* : Bool */;
val* var7 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var9 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var10 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 101);
fatal_exit(1);
}
var_e = p0;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var2);
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var5, var_e); /* has on <var5:RemovableCollection[nullable Object]>*/
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 115);
fatal_exit(1);
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var9 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var7, var_e);
}
var = var10;
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
val* var43 /* : HashSet[nullable Object] */;
val* var45 /* : HashSet[nullable Object] */;
short int var46 /* : Bool */;
val* var_to_remove /* var to_remove: nullable Array[nullable Object] */;
val* var47 /* : HashSet[nullable Object] */;
val* var49 /* : HashSet[nullable Object] */;
val* var_50 /* var : HashSet[nullable Object] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : Iterator[nullable Object] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
val* var55 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var57 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var58 /* : nullable Object */;
val* var_xe /* var xe: POSetElement[nullable Object] */;
val* var59 /* : HashSet[nullable Object] */;
val* var61 /* : HashSet[nullable Object] */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : Array[nullable Object] */;
val* var66 /* : HashSet[nullable Object] */;
val* var68 /* : HashSet[nullable Object] */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var_75 /* var : Array[nullable Object] */;
val* var76 /* : ArrayIterator[nullable Object] */;
val* var_77 /* var : ArrayIterator[nullable Object] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_x80 /* var x: nullable Object */;
val* var81 /* : HashSet[nullable Object] */;
val* var83 /* : HashSet[nullable Object] */;
val* var85 /* : HashSet[nullable Object] */;
val* var87 /* : HashSet[nullable Object] */;
val* var_88 /* var : HashSet[nullable Object] */;
val* var89 /* : Iterator[nullable Object] */;
val* var_90 /* var : Iterator[nullable Object] */;
short int var91 /* : Bool */;
val* var92 /* : nullable Object */;
val* var_x93 /* var x: nullable Object */;
val* var94 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var96 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var97 /* : nullable Object */;
val* var_xe98 /* var xe: POSetElement[nullable Object] */;
val* var99 /* : HashSet[nullable Object] */;
val* var101 /* : HashSet[nullable Object] */;
short int var102 /* : Bool */;
val* var103 /* : HashSet[nullable Object] */;
val* var105 /* : HashSet[nullable Object] */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : Array[nullable Object] */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var_115 /* var : Array[nullable Object] */;
val* var116 /* : ArrayIterator[nullable Object] */;
val* var_117 /* var : ArrayIterator[nullable Object] */;
short int var118 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_x120 /* var x: nullable Object */;
val* var121 /* : HashSet[nullable Object] */;
val* var123 /* : HashSet[nullable Object] */;
val* var125 /* : HashSet[nullable Object] */;
val* var127 /* : HashSet[nullable Object] */;
val* var128 /* : HashSet[nullable Object] */;
val* var130 /* : HashSet[nullable Object] */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 119);
fatal_exit(1);
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
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 119);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
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
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[nullable Object]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[nullable Object]>*/
}
var_ff = var19;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var22 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
var30 = ((short int(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_29); /* is_ok on <var_29:Iterator[nullable Object]>*/
}
if (var30){
{
var31 = ((val*(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_29); /* item on <var_29:Iterator[nullable Object]>*/
}
var_tt = var31;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var34 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var39, var_tt); /* Direct call hash_collection#HashSet#add on <var39:HashSet[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_29); /* next on <var_29:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_29); /* finish on <var_29:Iterator[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#tos (var_te) on <var_te:POSetElement[nullable Object]> */
var45 = var_te->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_te:POSetElement[nullable Object]> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var43, var_f);
}
if (var46){
goto RET_LABEL;
} else {
}
var_to_remove = ((val*)NULL);
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[nullable Object]> */
var49 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[nullable Object]> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_50 = var47;
{
var51 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_50);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:Iterator[nullable Object]>*/
}
if (var53){
{
var54 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:Iterator[nullable Object]>*/
}
var_x = var54;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var57 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var55, var_x);
}
var_xe = var58;
{
{ /* Inline poset#POSetElement#tos (var_xe) on <var_xe:POSetElement[nullable Object]> */
var61 = var_xe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_xe:POSetElement[nullable Object]> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var59, var_f);
}
if (var62){
if (var_to_remove == NULL) {
var63 = 1; /* is null */
} else {
var63 = 0; /* arg is null but recv is not */
}
if (0) {
var64 = standard___standard__Array___standard__kernel__Object___61d_61d(var_to_remove, ((val*)NULL));
var63 = var64;
}
if (var63){
var65 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__poset__POSet___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var65); /* Direct call array#Array#init on <var65:Array[nullable Object]>*/
}
var_to_remove = var65;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_to_remove, var_x); /* Direct call array#Array#add on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
{
{ /* Inline poset#POSetElement#dtos (var_xe) on <var_xe:POSetElement[nullable Object]> */
var68 = var_xe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_xe:POSetElement[nullable Object]> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var66, var_t); /* Direct call hash_collection#HashSet#remove on <var66:HashSet[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label69;
}
}
BREAK_label69: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:Iterator[nullable Object]>*/
}
if (var_to_remove == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_to_remove,((val*)NULL)) on <var_to_remove:nullable Array[nullable Object]> */
var_other = ((val*)NULL);
{
var73 = ((short int(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_to_remove, var_other); /* == on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
var_75 = var_to_remove;
{
var76 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_75);
}
var_77 = var76;
for(;;) {
{
var78 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_77);
}
if (var78){
{
var79 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_77);
}
var_x80 = var79;
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[nullable Object]> */
var83 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[nullable Object]> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var81, var_x80); /* Direct call hash_collection#HashSet#remove on <var81:HashSet[nullable Object]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_77); /* Direct call array#ArrayIterator#next on <var_77:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label84;
}
}
BREAK_label84: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_77); /* Direct call array#ArrayIterator#finish on <var_77:ArrayIterator[nullable Object]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_to_remove); /* Direct call array#AbstractArray#clear on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var87 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_88 = var85;
{
var89 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_88);
}
var_90 = var89;
for(;;) {
{
var91 = ((short int(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_90); /* is_ok on <var_90:Iterator[nullable Object]>*/
}
if (var91){
{
var92 = ((val*(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_90); /* item on <var_90:Iterator[nullable Object]>*/
}
var_x93 = var92;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var96 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var94, var_x93);
}
var_xe98 = var97;
{
{ /* Inline poset#POSetElement#froms (var_xe98) on <var_xe98:POSetElement[nullable Object]> */
var101 = var_xe98->attrs[COLOR_poset__POSetElement___froms].val; /* _froms on <var_xe98:POSetElement[nullable Object]> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _froms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var99, var_t);
}
if (var102){
{
{ /* Inline poset#POSetElement#dfroms (var_xe98) on <var_xe98:POSetElement[nullable Object]> */
var105 = var_xe98->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_xe98:POSetElement[nullable Object]> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var103, var_f); /* Direct call hash_collection#HashSet#remove on <var103:HashSet[nullable Object]>*/
}
if (var_to_remove == NULL) {
var106 = 1; /* is null */
} else {
var106 = 0; /* arg is null but recv is not */
}
if (0) {
var107 = standard___standard__Array___standard__kernel__Object___61d_61d(var_to_remove, ((val*)NULL));
var106 = var107;
}
if (var106){
var108 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__poset__POSet___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var108); /* Direct call array#Array#init on <var108:Array[nullable Object]>*/
}
var_to_remove = var108;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_to_remove, var_x93); /* Direct call array#Array#add on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_90); /* next on <var_90:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_90); /* finish on <var_90:Iterator[nullable Object]>*/
}
if (var_to_remove == NULL) {
var110 = 0; /* is null */
} else {
var110 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_to_remove,((val*)NULL)) on <var_to_remove:nullable Array[nullable Object]> */
var_other = ((val*)NULL);
{
var113 = ((short int(*)(val* self, val* p0))(var_to_remove->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_to_remove, var_other); /* == on <var_to_remove:nullable Array[nullable Object](Array[nullable Object])>*/
}
var114 = !var113;
var111 = var114;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
if (var110){
var_115 = var_to_remove;
{
var116 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_115);
}
var_117 = var116;
for(;;) {
{
var118 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_117);
}
if (var118){
{
var119 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_117);
}
var_x120 = var119;
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var123 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var121, var_x120); /* Direct call hash_collection#HashSet#remove on <var121:HashSet[nullable Object]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_117); /* Direct call array#ArrayIterator#next on <var_117:ArrayIterator[nullable Object]>*/
}
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_117); /* Direct call array#ArrayIterator#finish on <var_117:ArrayIterator[nullable Object]>*/
}
} else {
}
{
{ /* Inline poset#POSetElement#dtos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var127 = var_fe->attrs[COLOR_poset__POSetElement___dtos].val; /* _dtos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dtos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var125, var_t); /* Direct call hash_collection#HashSet#add on <var125:HashSet[nullable Object]>*/
}
{
{ /* Inline poset#POSetElement#dfroms (var_te) on <var_te:POSetElement[nullable Object]> */
var130 = var_te->attrs[COLOR_poset__POSetElement___dfroms].val; /* _dfroms on <var_te:POSetElement[nullable Object]> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dfroms");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var128, var_f); /* Direct call hash_collection#HashSet#add on <var128:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method poset#POSet#has_edge for (self: POSet[nullable Object], nullable Object, nullable Object): Bool */
short int poset___poset__POSet___has_edge(val* self, val* p0, val* p1) {
short int var /* : Bool */;
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
val* var_f /* var f: nullable Object */;
val* var_t /* var t: nullable Object */;
val* var8 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var10 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var11 /* : RemovableCollection[nullable Object] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var16 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var17 /* : nullable Object */;
val* var_fe /* var fe: POSetElement[nullable Object] */;
val* var18 /* : HashSet[nullable Object] */;
val* var20 /* : HashSet[nullable Object] */;
short int var21 /* : Bool */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 208);
fatal_exit(1);
}
/* Covariant cast for argument 1 (t) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 208);
fatal_exit(1);
}
var_f = p0;
var_t = p1;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var10 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var8);
}
{
var12 = ((short int(*)(val* self, val* p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var11, var_f); /* has on <var11:RemovableCollection[nullable Object]>*/
}
var13 = !var12;
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var16 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var14, var_f);
}
var_fe = var17;
{
{ /* Inline poset#POSetElement#tos (var_fe) on <var_fe:POSetElement[nullable Object]> */
var20 = var_fe->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <var_fe:POSetElement[nullable Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var18, var_t);
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
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
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var31 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var32 /* : nullable Object */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var38 /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
val* var39 /* : nullable Object */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 284);
fatal_exit(1);
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
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 284);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var10 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
{
{ /* Inline kernel#Int#!= (var_res,0l) on <var_res:Int> */
var27 = var_res == 0l;
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var31 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var29, var_a);
}
{
{ /* Inline poset#POSetElement#count (var32) on <var32:nullable Object(POSetElement[nullable Object])> */
var35 = var32->attrs[COLOR_poset__POSetElement___count].l; /* _count on <var32:nullable Object(POSetElement[nullable Object])> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline poset#POSet#elements (self) on <self:POSet[nullable Object]> */
var38 = self->attrs[COLOR_poset__POSet___elements].val; /* _elements on <self:POSet[nullable Object]> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elements");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 82);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var36, var_b);
}
{
{ /* Inline poset#POSetElement#count (var39) on <var39:nullable Object(POSetElement[nullable Object])> */
var42 = var39->attrs[COLOR_poset__POSetElement___count].l; /* _count on <var39:nullable Object(POSetElement[nullable Object])> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = standard___standard__Int___Comparable___60d_61d_62d(var33, var40);
}
var = var43;
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 370);
fatal_exit(1);
}
var_elements = p0;
{
var2 = ((val*(*)(val* self))((((long)var_elements&3)?class_info[((long)var_elements&3)]:var_elements->class)->vft[COLOR_standard__array__Collection__to_a]))(var_elements); /* to_a on <var_elements:Collection[nullable Object]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 400);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 400);
fatal_exit(1);
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 403);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 407);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 408);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 409);
fatal_exit(1);
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 465);
fatal_exit(1);
}
var_t = p0;
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[nullable Object]> */
var4 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 480);
fatal_exit(1);
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
var7 = ((short int(*)(val* self, val* p0))((((long)var_t&3)?class_info[((long)var_t&3)]:var_t->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_t, var3); /* != on <var_t:nullable Object>*/
var6 = var7;
}
var_ = var6;
if (var6){
{
{ /* Inline poset#POSetElement#tos (self) on <self:POSetElement[nullable Object]> */
var10 = self->attrs[COLOR_poset__POSetElement___tos].val; /* _tos on <self:POSetElement[nullable Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tos");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 406);
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_poset___poset__POSetElement___standard__kernel__Object__init]))(self); /* init on <self:POSetElement[nullable Object]>*/
}
RET_LABEL:;
}
