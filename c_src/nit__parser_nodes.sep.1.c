#include "nit__parser_nodes.sep.0.h"
/* method parser_nodes#ANode#location for (self: ANode): Location */
val* nit___nit__ANode___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#location= for (self: ANode, Location) */
void nit___nit__ANode___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANode___location].val = p0; /* _location on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#hot_location for (self: ANode): Location */
val* nit___nit__ANode___hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
val* var3 /* : Location */;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ANode> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
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
/* method parser_nodes#ANode#debug for (self: ANode, String) */
void nit___nit__ANode___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : OStream */;
val* var5 /* : OStream */;
val* var6 /* : Location */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Location */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
var_message = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:ANode> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var) on <var:Sys> */
var5 = var->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <var:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1011);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ANode>*/;
}
if (varonce) {
var7 = varonce;
} else {
var8 = " ";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = standard__string___Object___class_name(self);
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ": ";
var15 = 2;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = 1;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ANode>*/;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "0;32";
var26 = 4;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = nit___nit__Location___colored_line(var22, var24);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "\n";
var32 = 1;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 8;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var6;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var7;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var11;
((struct instance_standard__NativeArray*)var36)->values[3] = (val*) var13;
((struct instance_standard__NativeArray*)var36)->values[4] = (val*) var_message;
((struct instance_standard__NativeArray*)var36)->values[5] = (val*) var18;
((struct instance_standard__NativeArray*)var36)->values[6] = (val*) var28;
((struct instance_standard__NativeArray*)var36)->values[7] = (val*) var30;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var3, var37); /* Direct call file#OFStream#write on <var3:OStream>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANode#parent for (self: ANode): nullable ANode */
val* nit___nit__ANode___parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#parent= for (self: ANode, nullable ANode) */
void nit___nit__ANode___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = p0; /* _parent on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: ANode, ANode, nullable ANode) */
void nit___nit__ANode___replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 91);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: ANode, ANode) */
void nit___nit__ANode___replace_with(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable ANode */;
val* var11 /* : nullable ANode */;
val* var12 /* : null */;
var_node = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
if (var == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,var3) on <var:nullable ANode> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other) /* == on <var:nullable ANode(ANode)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 112);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var11 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 113);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0, val* p1))(var9->class->vft[COLOR_nit__parser_nodes__ANode__replace_child]))(var9, self, var_node) /* replace_child on <var9:nullable ANode>*/;
}
var12 = NULL;
{
{ /* Inline parser_nodes#ANode#parent= (self,var12) on <self:ANode> */
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var12; /* _parent on <self:ANode> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: ANode, Visitor) */
void nit___nit__ANode___visit_all(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 117);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANodes#parent for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___parent(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 166);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#parent= for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val = p0; /* _parent on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#items for (self: ANodes[ANode]): Array[ANode] */
val* nit___nit__ANodes___items(val* self) {
val* var /* : Array[ANode] */;
val* var1 /* : Array[ANode] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#iterator for (self: ANodes[ANode]): Iterator[ANode] */
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[ANode] */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : ArrayIterator[nullable Object] */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#length for (self: ANodes[ANode]): Int */
long nit___nit__ANodes___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
long var4 /* : Int */;
long var6 /* : Int */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[ANode]> */
var6 = var1->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var1:Array[ANode]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#is_empty for (self: ANodes[ANode]): Bool */
short int nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
short int var4 /* : Bool */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#push for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___standard__abstract_collection__Sequence__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 171);
show_backtrace(1);
}
var_e = p0;
{
nit___nit__ANodes___hook_add(self, var_e); /* Direct call parser_nodes#ANodes#hook_add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var1, var_e); /* Direct call array#AbstractArray#push on <var1:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#pop for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___standard__abstract_collection__Sequence__pop(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: ANode */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var1);
}
var_res = var4;
{
nit___nit__ANodes___hook_remove(self, var_res); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#unshift for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___standard__abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 182);
show_backtrace(1);
}
var_e = p0;
{
nit___nit__ANodes___hook_add(self, var_e); /* Direct call parser_nodes#ANodes#hook_add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__unshift(var1, var_e); /* Direct call array#AbstractArray#unshift on <var1:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#shift for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___standard__abstract_collection__Sequence__shift(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: ANode */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var1);
}
var_res = var4;
{
nit___nit__ANodes___hook_remove(self, var_res); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#has for (self: ANodes[ANode], ANode): Bool */
short int nit___nit__ANodes___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var2 /* : Array[ANode] */;
val* var4 /* : Array[ANode] */;
short int var5 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 193);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var4 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var2, var_e);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[] for (self: ANodes[ANode], Int): ANode */
val* nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : ANode */;
long var_index /* var index: Int */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : nullable Object */;
var_index = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var1, var_index);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[]= for (self: ANodes[ANode], Int, ANode) */
void nit___nit__ANodes___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_e /* var e: ANode */;
val* var1 /* : ANode */;
val* var2 /* : Array[ANode] */;
val* var4 /* : Array[ANode] */;
/* Covariant cast for argument 1 (e) <p1:ANode> isa E */
/* <p1:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 201);
show_backtrace(1);
}
var_index = p0;
var_e = p1;
{
var1 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(self, var_index);
}
{
nit___nit__ANodes___hook_remove(self, var1); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
{
nit___nit__ANodes___hook_add(self, var_e); /* Direct call parser_nodes#ANodes#hook_add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var4 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var2, var_index, var_e); /* Direct call array#Array#[]= on <var2:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#remove_at for (self: ANodes[ANode], Int) */
void nit___nit__ANodes___standard__abstract_collection__Sequence__remove_at(val* self, long p0) {
long var_index /* var index: Int */;
val* var /* : Array[ANode] */;
val* var2 /* : Array[ANode] */;
val* var3 /* : nullable Object */;
val* var4 /* : Array[ANode] */;
val* var6 /* : Array[ANode] */;
var_index = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var, var_index);
}
{
nit___nit__ANodes___hook_remove(self, var3); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var6 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 167);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__remove_at(var4, var_index); /* Direct call array#AbstractArray#remove_at on <var4:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_add for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___hook_add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : ANode */;
val* var3 /* : ANode */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 212);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 166);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent= (var_e,var1) on <var_e:ANode> */
var_e->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var1; /* _parent on <var_e:ANode> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_remove for (self: ANodes[ANode], ANode) */
void nit___nit__ANodes___hook_remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var4 /* : ANode */;
val* var6 /* : ANode */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : null */;
/* Covariant cast for argument 0 (e) <p0:ANode> isa E */
/* <p0:ANode> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 217);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANode#parent (var_e) on <var_e:ANode> */
var3 = var_e->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var_e:ANode> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var6 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 166);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var1 == NULL) {
var7 = 0; /* <var4:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var1,var4) on <var1:nullable ANode> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ANode(ANode)> */
var12 = var1 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 219);
show_backtrace(1);
}
var13 = NULL;
{
{ /* Inline parser_nodes#ANode#parent= (var_e,var13) on <var_e:ANode> */
var_e->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var13; /* _parent on <var_e:ANode> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#unsafe_add_all for (self: ANodes[ANode], Collection[Object]) */
void nit___nit__ANodes___unsafe_add_all(val* self, val* p0) {
val* var_nodes /* var nodes: Collection[Object] */;
val* var /* : ANode */;
val* var2 /* : ANode */;
val* var_parent /* var parent: ANode */;
val* var_ /* var : Collection[Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
var_nodes = p0;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 166);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
var_ = var_nodes;
{
var3 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[Object]>*/;
}
if (var5){
{
var6 = ((val* (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[Object]>*/;
}
var_n = var6;
/* <var_n:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_n->type->table_size) {
var7 = 0;
} else {
var7 = var_n->type->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 228);
show_backtrace(1);
}
{
standard___standard__Sequence___SimpleCollection__add(self, var_n); /* Direct call abstract_collection#Sequence#add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_n,var_parent) on <var_n:Object(ANode)> */
var_n->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_n:Object(ANode)> */
RET_LABEL8:(void)0;
}
}
{
((void (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:Iterator[Object]> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#replace_child for (self: ANodes[ANode], ANode, nullable ANode): Bool */
short int nit___nit__ANodes___replace_child(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var1 /* : ANode */;
val* var3 /* : ANode */;
val* var_parent /* var parent: ANode */;
long var4 /* : Int */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : ANode */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const struct type* type_struct;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 166);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_parent = var1;
var4 = 0;
var_i = var4;
{
var5 = nit___nit__ANodes___standard__abstract_collection__Collection__length(self);
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(self, var_i);
}
{
{ /* Inline kernel#Object#== (var10,var_old_child) on <var10:ANode> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var10,var_other) on <var10:ANode> */
var15 = var10 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_new_child,var16) on <var_new_child:nullable ANode> */
var_other20 = var16;
{
var21 = ((short int (*)(val* self, val* p0))(var_new_child->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_new_child, var_other20) /* == on <var_new_child:nullable ANode(ANode)>*/;
}
var22 = !var21;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
/* <var_new_child:nullable ANode(ANode)> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype24 = type_struct->color;
idtype25 = type_struct->id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 240);
show_backtrace(1);
}
{
nit___nit__ANodes___standard__abstract_collection__Sequence___91d_93d_61d(self, var_i, var_new_child); /* Direct call parser_nodes#ANodes#[]= on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_new_child,var_parent) on <var_new_child:nullable ANode(ANode)> */
var_new_child->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_new_child:nullable ANode(ANode)> */
RET_LABEL26:(void)0;
}
}
} else {
{
nit___nit__ANodes___standard__abstract_collection__Sequence__remove_at(self, var_i); /* Direct call parser_nodes#ANodes#remove_at on <self:ANodes[ANode]>*/
}
}
var27 = 1;
var = var27;
goto RET_LABEL;
} else {
}
var28 = 1;
{
var29 = standard___standard__Int___Discrete__successor(var_i, var28);
}
var_i = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var30 = 0;
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#visit_all for (self: ANodes[ANode], Visitor) */
void nit___nit__ANodes___visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var_ /* var : ANodes[ANode] */;
val* var /* : Iterator[ANode] */;
val* var_1 /* var : Iterator[ANode] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: ANode */;
var_v = p0;
var_ = self;
{
var = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_1 = var;
for(;;) {
{
var2 = ((short int (*)(val* self))(var_1->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_1) /* is_ok on <var_1:Iterator[ANode]>*/;
}
if (var2){
{
var3 = ((val* (*)(val* self))(var_1->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_1) /* item on <var_1:Iterator[ANode]>*/;
}
var_n = var3;
{
nit___nit__Visitor___enter_visit(var_v, var_n); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
((void (*)(val* self))(var_1->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_1) /* next on <var_1:Iterator[ANode]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_1) on <var_1:Iterator[ANode]> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: ANodes[ANode]) */
void nit___nit__ANodes___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ANodes___standard__kernel__Object__init]))(self) /* init on <self:ANodes[ANode]>*/;
}
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token= for (self: Token, nullable Token) */
void nit___nit__Token___prev_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = p0; /* _prev_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#next_token= for (self: Token, nullable Token) */
void nit___nit__Token___next_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = p0; /* _next_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#to_s for (self: Token): String */
val* nit___nit__Token___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "\'";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#visit_all for (self: Token, Visitor) */
void nit___nit__Token___ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_nodes#Token#replace_child for (self: Token, ANode, nullable ANode) */
void nit___nit__Token___ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_nodes#SourceFile#first_token= for (self: SourceFile, nullable Token) */
void nit__parser_nodes___SourceFile___first_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val = p0; /* _first_token on <self:SourceFile> */
RET_LABEL:;
}
/* method parser_nodes#SourceFile#last_token= for (self: SourceFile, nullable Token) */
void nit__parser_nodes___SourceFile___last_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = p0; /* _last_token on <self:SourceFile> */
RET_LABEL:;
}
/* method parser_nodes#Prod#n_annotations for (self: Prod): nullable AAnnotations */
val* nit___nit__Prod___n_annotations(val* self) {
val* var /* : nullable AAnnotations */;
val* var1 /* : nullable AAnnotations */;
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Prod> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#n_annotations= for (self: Prod, nullable AAnnotations) */
void nit___nit__Prod___n_annotations_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = p0; /* _n_annotations on <self:Prod> */
RET_LABEL:;
}
/* method parser_nodes#Prod#get_annotations for (self: Prod, String): Array[AAnnotation] */
val* nit___nit__Prod___get_annotations(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
val* var2 /* : nullable AAnnotations */;
val* var4 /* : nullable AAnnotations */;
val* var_nas /* var nas: nullable AAnnotations */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ANodes[AAnnotation] */;
val* var14 /* : ANodes[AAnnotation] */;
val* var_ /* var : ANodes[AAnnotation] */;
val* var15 /* : Iterator[ANode] */;
val* var_16 /* var : Iterator[AAnnotation] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var19 /* : String */;
short int var20 /* : Bool */;
val* var_other22 /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
var_name = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__AAnnotation);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AAnnotation]>*/
}
var_res = var1;
{
{ /* Inline parser_nodes#Prod#n_annotations (self) on <self:Prod> */
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Prod> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_nas = var2;
var5 = NULL;
if (var_nas == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nas,var5) on <var_nas:nullable AAnnotations> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_nas,var_other) on <var_nas:nullable AAnnotations(AAnnotations)> */
var11 = var_nas == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotations#n_items (var_nas) on <var_nas:nullable AAnnotations(AAnnotations)> */
var14 = var_nas->attrs[COLOR_nit__parser_nodes__AAnnotations___n_items].val; /* _n_items on <var_nas:nullable AAnnotations(AAnnotations)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2535);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[AAnnotation]>*/;
}
if (var17){
{
var18 = ((val* (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[AAnnotation]>*/;
}
var_na = var18;
{
var19 = nit___nit__AAnnotation___name(var_na);
}
{
{ /* Inline kernel#Object#!= (var19,var_name) on <var19:String> */
var_other22 = var_name;
{
var23 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var_other22) /* == on <var19:String>*/;
}
var24 = !var23;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_na); /* Direct call array#Array#add on <var_res:Array[AAnnotation]>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[AAnnotation]>*/;
}
} else {
goto BREAK_label25;
}
}
BREAK_label25: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:Iterator[AAnnotation]> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#replace_with for (self: Prod, ANode) */
void nit___nit__Prod___ANode__replace_with(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
var_n = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__Prod___ANode__replace_with]))(self, p0) /* replace_with on <self:Prod>*/;
}
/* <var_n:ANode> isa Prod */
cltype = type_nit__Prod.color;
idtype = type_nit__Prod.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 329);
show_backtrace(1);
}
var2 = var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_n:ANode(Prod)> */
var3 = !var2;
var_ = var3;
if (var3){
var4 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <self:Prod> */
var1 = var4;
} else {
var1 = var_;
}
if (var1){
var5 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:Prod> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 330);
show_backtrace(1);
}
var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val = var5; /* _location on <var_n:ANode(Prod)> */
} else {
}
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Visitor, nullable ANode) */
void nit___nit__Visitor___enter_visit(val* self, val* p0) {
val* var_e /* var e: nullable ANode */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_e = p0;
var = NULL;
if (var_e == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,var) on <var_e:nullable ANode> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable ANode(ANode)> */
var6 = var_e == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var_old = var7;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var_e; /* _current_node on <self:Visitor> */
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Visitor__visit]))(self, var_e) /* visit on <self:Visitor>*/;
}
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var_old; /* _current_node on <self:Visitor> */
RET_LABEL:;
}
/* method parser_nodes#Visitor#current_node for (self: Visitor): nullable ANode */
val* nit___nit__Visitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TEol#to_s for (self: TEol): String */
val* nit___nit__TEol___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "end of line";
var3 = 11;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenKeyword#to_s for (self: TokenKeyword): String */
val* nit___nit__TokenKeyword___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "keyword \'";
var3 = 9;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenOperator#to_s for (self: TokenOperator): String */
val* nit___nit__TokenOperator___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "operator \'";
var3 = 10;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TClassid#to_s for (self: TClassid): String */
val* nit___nit__TClassid___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "type identifier \'";
var3 = 17;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TId#to_s for (self: TId): String */
val* nit___nit__TId___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "identifier \'";
var3 = 12;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TAttrid#to_s for (self: TAttrid): String */
val* nit___nit__TAttrid___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "attribute \'";
var3 = 11;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenLiteral#to_s for (self: TokenLiteral): String */
val* nit___nit__TokenLiteral___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "literal value \'";
var3 = 15;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadString#to_s for (self: TBadString): String */
val* nit___nit__TBadString___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "malformed string ";
var3 = 17;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_standard__NativeArray(var7, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadChar#to_s for (self: TBadChar): String */
val* nit___nit__TBadChar___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "malformed character ";
var3 = 20;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__lexer_work___Token___text(self);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_standard__NativeArray(var7, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#EOF#to_s for (self: EOF): String */
val* nit___nit__EOF___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "end of file";
var3 = 11;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl for (self: AModule): nullable AModuledecl */
val* nit___nit__AModule___n_moduledecl(val* self) {
val* var /* : nullable AModuledecl */;
val* var1 /* : nullable AModuledecl */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_imports for (self: AModule): ANodes[AImport] */
val* nit___nit__AModule___n_imports(val* self) {
val* var /* : ANodes[AImport] */;
val* var1 /* : ANodes[AImport] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 913);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_extern_code_blocks for (self: AModule): ANodes[AExternCodeBlock] */
val* nit___nit__AModule___n_extern_code_blocks(val* self) {
val* var /* : ANodes[AExternCodeBlock] */;
val* var1 /* : ANodes[AExternCodeBlock] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 916);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_classdefs for (self: AModule): ANodes[AClassdef] */
val* nit___nit__AModule___n_classdefs(val* self) {
val* var /* : ANodes[AClassdef] */;
val* var1 /* : ANodes[AClassdef] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADefinition#n_doc for (self: ADefinition): nullable ADoc */
val* nit___nit__ADefinition___n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ADefinition> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADefinition#n_kwredef for (self: ADefinition): nullable TKwredef */
val* nit___nit__ADefinition___n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ADefinition> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADefinition#n_visibility for (self: ADefinition): nullable AVisibility */
val* nit___nit__ADefinition___n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ADefinition> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_name for (self: AModuledecl): AModuleName */
val* nit___nit__AModuledecl___n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 943);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImport#n_visibility for (self: AImport): AVisibility */
val* nit___nit__AImport___n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 951);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_name for (self: AStdImport): AModuleName */
val* nit___nit__AStdImport___n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 961);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APublicVisibility#init for (self: APublicVisibility) */
void nit___nit__APublicVisibility___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__APublicVisibility___standard__kernel__Object__init]))(self) /* init on <self:APublicVisibility>*/;
}
RET_LABEL:;
}
/* method parser_nodes#AClassdef#n_propdefs for (self: AClassdef): ANodes[APropdef] */
val* nit___nit__AClassdef___n_propdefs(val* self) {
val* var /* : ANodes[APropdef] */;
val* var1 /* : ANodes[APropdef] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_classkind for (self: AStdClassdef): AClasskind */
val* nit___nit__AStdClassdef___n_classkind(val* self) {
val* var /* : AClasskind */;
val* var1 /* : AClasskind */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1021);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_id for (self: AStdClassdef): nullable TClassid */
val* nit___nit__AStdClassdef___n_id(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_formaldefs for (self: AStdClassdef): ANodes[AFormaldef] */
val* nit___nit__AStdClassdef___n_formaldefs(val* self) {
val* var /* : ANodes[AFormaldef] */;
val* var1 /* : ANodes[AFormaldef] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_superclasses for (self: AStdClassdef): ANodes[ASuperclass] */
val* nit___nit__AStdClassdef___n_superclasses(val* self) {
val* var /* : ANodes[ASuperclass] */;
val* var1 /* : ANodes[ASuperclass] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#hot_location for (self: AStdClassdef): Location */
val* nit___nit__AStdClassdef___ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable TClassid */;
val* var3 /* : nullable TClassid */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline parser_nodes#AStdClassdef#n_id (self) on <self:AStdClassdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1039);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var1) on <var1:nullable TClassid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var1:nullable TClassid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_id for (self: AFormaldef): TClassid */
val* nit___nit__AFormaldef___n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1107);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_type for (self: AFormaldef): nullable AType */
val* nit___nit__AFormaldef___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_type for (self: ASuperclass): AType */
val* nit___nit__ASuperclass___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1121);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: AAttrPropdef): TId */
val* nit___nit__AAttrPropdef___n_id2(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_type for (self: AAttrPropdef): nullable AType */
val* nit___nit__AAttrPropdef___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_expr for (self: AAttrPropdef): nullable AExpr */
val* nit___nit__AAttrPropdef___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_block for (self: AAttrPropdef): nullable AExpr */
val* nit___nit__AAttrPropdef___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#hot_location for (self: AAttrPropdef): Location */
val* nit___nit__AAttrPropdef___ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var1) on <var1:TId> */
var6 = var1->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var1:TId> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwinit for (self: AMethPropdef): nullable TKwinit */
val* nit___nit__AMethPropdef___n_kwinit(val* self) {
val* var /* : nullable TKwinit */;
val* var1 /* : nullable TKwinit */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwnew for (self: AMethPropdef): nullable TKwnew */
val* nit___nit__AMethPropdef___n_kwnew(val* self) {
val* var /* : nullable TKwnew */;
val* var1 /* : nullable TKwnew */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_methid for (self: AMethPropdef): nullable AMethid */
val* nit___nit__AMethPropdef___n_methid(val* self) {
val* var /* : nullable AMethid */;
val* var1 /* : nullable AMethid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_signature for (self: AMethPropdef): nullable ASignature */
val* nit___nit__AMethPropdef___n_signature(val* self) {
val* var /* : nullable ASignature */;
val* var1 /* : nullable ASignature */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_block for (self: AMethPropdef): nullable AExpr */
val* nit___nit__AMethPropdef___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block for (self: AMethPropdef): nullable AExternCodeBlock */
val* nit___nit__AMethPropdef___n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#hot_location for (self: AMethPropdef): Location */
val* nit___nit__AMethPropdef___ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable AMethid */;
val* var3 /* : nullable AMethid */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AMethid */;
val* var12 /* : nullable AMethid */;
val* var13 /* : Location */;
val* var15 /* : Location */;
val* var16 /* : nullable TKwinit */;
val* var18 /* : nullable TKwinit */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable TKwinit */;
val* var27 /* : nullable TKwinit */;
val* var28 /* : Location */;
val* var30 /* : Location */;
val* var31 /* : nullable TKwnew */;
val* var33 /* : nullable TKwnew */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable TKwnew */;
val* var42 /* : nullable TKwnew */;
val* var43 /* : Location */;
val* var45 /* : Location */;
val* var46 /* : Location */;
val* var48 /* : Location */;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable AMethid> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable AMethid(AMethid)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var12 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1187);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var10) on <var10:nullable AMethid> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var10:nullable AMethid> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = NULL;
if (var16 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var16,var19) on <var16:nullable TKwinit> */
var_other = var19;
{
var23 = ((short int (*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_other) /* == on <var16:nullable TKwinit(TKwinit)>*/;
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var27 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var25) on <var25:nullable TKwinit> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var30 = var25->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var25:nullable TKwinit> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var = var28;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var33 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = NULL;
if (var31 == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var31,var34) on <var31:nullable TKwnew> */
var_other = var34;
{
var38 = ((short int (*)(val* self, val* p0))(var31->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var31, var_other) /* == on <var31:nullable TKwnew(TKwnew)>*/;
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var42 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1191);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var40) on <var40:nullable TKwnew> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var45 = var40->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var40:nullable TKwnew> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var = var43;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var48 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var = var46;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_extern_calls for (self: AExternCalls): ANodes[AExternCall] */
val* nit___nit__AExternCalls___n_extern_calls(val* self) {
val* var /* : ANodes[AExternCall] */;
val* var1 /* : ANodes[AExternCall] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1210);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_id for (self: ATypePropdef): TClassid */
val* nit___nit__ATypePropdef___n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1322);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_type for (self: ATypePropdef): AType */
val* nit___nit__ATypePropdef___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1325);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIdMethid#n_id for (self: AIdMethid): TId */
val* nit___nit__AIdMethid___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1339);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_params for (self: ASignature): ANodes[AParam] */
val* nit___nit__ASignature___n_params(val* self) {
val* var /* : ANodes[AParam] */;
val* var1 /* : ANodes[AParam] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_type for (self: ASignature): nullable AType */
val* nit___nit__ASignature___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_id for (self: AParam): TId */
val* nit___nit__AParam___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1520);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_type for (self: AParam): nullable AType */
val* nit___nit__AParam___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_dotdotdot for (self: AParam): nullable TDotdotdot */
val* nit___nit__AParam___n_dotdotdot(val* self) {
val* var /* : nullable TDotdotdot */;
val* var1 /* : nullable TDotdotdot */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_kwnullable for (self: AType): nullable TKwnullable */
val* nit___nit__AType___n_kwnullable(val* self) {
val* var /* : nullable TKwnullable */;
val* var1 /* : nullable TKwnullable */;
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_id for (self: AType): TClassid */
val* nit___nit__AType___n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1536);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_types for (self: AType): ANodes[AType] */
val* nit___nit__AType___n_types(val* self) {
val* var /* : ANodes[AType] */;
val* var1 /* : ANodes[AType] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id for (self: ALabel): nullable TId */
val* nit___nit__ALabel___n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#init for (self: ALabel) */
void nit___nit__ALabel___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ALabel___standard__kernel__Object__init]))(self) /* init on <self:ALabel>*/;
}
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#n_expr for (self: ABlockExpr): ANodes[AExpr] */
val* nit___nit__ABlockExpr___n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_id for (self: AVardeclExpr): TId */
val* nit___nit__AVardeclExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1580);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_type for (self: AVardeclExpr): nullable AType */
val* nit___nit__AVardeclExpr___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_expr for (self: AVardeclExpr): nullable AExpr */
val* nit___nit__AVardeclExpr___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_expr for (self: AReturnExpr): nullable AExpr */
val* nit___nit__AReturnExpr___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabelable#n_label for (self: ALabelable): nullable ALabel */
val* nit___nit__ALabelable___n_label(val* self) {
val* var /* : nullable ALabel */;
val* var1 /* : nullable ALabel */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALabelable> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEscapeExpr#n_expr for (self: AEscapeExpr): nullable AExpr */
val* nit___nit__AEscapeExpr___n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_block for (self: ADoExpr): nullable AExpr */
val* nit___nit__ADoExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_expr for (self: AIfExpr): AExpr */
val* nit___nit__AIfExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1664);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_then for (self: AIfExpr): nullable AExpr */
val* nit___nit__AIfExpr___n_then(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_else for (self: AIfExpr): nullable AExpr */
val* nit___nit__AIfExpr___n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_expr for (self: AIfexprExpr): AExpr */
val* nit___nit__AIfexprExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1681);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_then for (self: AIfexprExpr): AExpr */
val* nit___nit__AIfexprExpr___n_then(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1687);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_else for (self: AIfexprExpr): AExpr */
val* nit___nit__AIfexprExpr___n_else(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_expr for (self: AWhileExpr): AExpr */
val* nit___nit__AWhileExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1705);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_block for (self: AWhileExpr): nullable AExpr */
val* nit___nit__AWhileExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_block for (self: ALoopExpr): nullable AExpr */
val* nit___nit__ALoopExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_ids for (self: AForExpr): ANodes[TId] */
val* nit___nit__AForExpr___n_ids(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1735);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr for (self: AForExpr): AExpr */
val* nit___nit__AForExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_block for (self: AForExpr): nullable AExpr */
val* nit___nit__AForExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_id for (self: AAssertExpr): nullable TId */
val* nit___nit__AAssertExpr___n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_expr for (self: AAssertExpr): AExpr */
val* nit___nit__AAssertExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_else for (self: AAssertExpr): nullable AExpr */
val* nit___nit__AAssertExpr___n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_assign for (self: AAssignFormExpr): TAssign */
val* nit___nit__AAssignFormExpr___n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAssignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1769);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_value for (self: AAssignFormExpr): AExpr */
val* nit___nit__AAssignFormExpr___n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAssignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op for (self: AReassignFormExpr): AAssignOp */
val* nit___nit__AReassignFormExpr___n_assign_op(val* self) {
val* var /* : AAssignOp */;
val* var1 /* : AAssignOp */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1780);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_value for (self: AReassignFormExpr): AExpr */
val* nit___nit__AReassignFormExpr___n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_expr for (self: AOnceExpr): AExpr */
val* nit___nit__AOnceExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1794);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASendExpr#n_expr for (self: ASendExpr): AExpr */
val* nit___nit__ASendExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_expr2 for (self: ABinopExpr): AExpr */
val* nit___nit__ABinopExpr___n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1809);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinBoolExpr#n_expr for (self: ABinBoolExpr): AExpr */
val* nit___nit__ABinBoolExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:ABinBoolExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinBoolExpr#n_expr2 for (self: ABinBoolExpr): AExpr */
val* nit___nit__ABinBoolExpr___n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:ABinBoolExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_expr for (self: ANotExpr): AExpr */
val* nit___nit__ANotExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr for (self: AIsaExpr): AExpr */
val* nit___nit__AIsaExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1905);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_type for (self: AIsaExpr): AType */
val* nit___nit__AIsaExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1908);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_type for (self: ANewExpr): AType */
val* nit___nit__ANewExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1962);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_id for (self: ANewExpr): nullable TId */
val* nit___nit__ANewExpr___n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_args for (self: ANewExpr): AExprs */
val* nit___nit__ANewExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1968);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_expr for (self: AAttrFormExpr): AExpr */
val* nit___nit__AAttrFormExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_id for (self: AAttrFormExpr): TAttrid */
val* nit___nit__AAttrFormExpr___n_id(val* self) {
val* var /* : TAttrid */;
val* var1 /* : TAttrid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1979);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_id for (self: ACallFormExpr): TId */
val* nit___nit__ACallFormExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_args for (self: ACallFormExpr): AExprs */
val* nit___nit__ACallFormExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args for (self: ASuperExpr): AExprs */
val* nit___nit__ASuperExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2051);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args for (self: AInitExpr): AExprs */
val* nit___nit__AInitExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2063);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: ABraFormExpr): AExprs */
val* nit___nit__ABraFormExpr___n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2071);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: ARangeExpr): AExpr */
val* nit___nit__ARangeExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: ARangeExpr): AExpr */
val* nit___nit__ARangeExpr___n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: AArrayExpr): ANodes[AExpr] */
val* nit___nit__AArrayExpr___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_type for (self: AArrayExpr): nullable AType */
val* nit___nit__AArrayExpr___n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASelfExpr#init for (self: ASelfExpr) */
void nit___nit__ASelfExpr___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ASelfExpr___standard__kernel__Object__init]))(self) /* init on <self:ASelfExpr>*/;
}
RET_LABEL:;
}
/* method parser_nodes#ADecIntExpr#n_number for (self: ADecIntExpr): TNumber */
val* nit___nit__ADecIntExpr___n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2216);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AHexIntExpr#n_hex_number for (self: AHexIntExpr): THexNumber */
val* nit___nit__AHexIntExpr___n_hex_number(val* self) {
val* var /* : THexNumber */;
val* var1 /* : THexNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2224);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float for (self: AFloatExpr): TFloat */
val* nit___nit__AFloatExpr___n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
var1 = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2232);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char for (self: ACharExpr): TChar */
val* nit___nit__ACharExpr___n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
var1 = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2240);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: AStringFormExpr): Token */
val* nit___nit__AStringFormExpr___n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2248);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperstringExpr#n_exprs for (self: ASuperstringExpr): ANodes[AExpr] */
val* nit___nit__ASuperstringExpr___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2277);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_expr for (self: AParExpr): AExpr */
val* nit___nit__AParExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2288);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastForm#n_expr for (self: AAsCastForm): AExpr */
val* nit___nit__AAsCastForm___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastForm> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2299);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: AAsCastExpr): AType */
val* nit___nit__AAsCastExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2316);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarargExpr#n_expr for (self: AVarargExpr): AExpr */
val* nit___nit__AVarargExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2343);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AManyExpr#n_exprs for (self: AManyExpr): ANodes[AExpr] */
val* nit___nit__AManyExpr___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2354);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: ADebugTypeExpr): AExpr */
val* nit___nit__ADebugTypeExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2397);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: ADebugTypeExpr): AType */
val* nit___nit__ADebugTypeExpr___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2400);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#n_exprs for (self: AExprs): ANodes[AExpr] */
val* nit___nit__AExprs___n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad for (self: AModuleName): nullable TQuad */
val* nit___nit__AModuleName___n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_path for (self: AModuleName): ANodes[TId] */
val* nit___nit__AModuleName___n_path(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2467);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id for (self: AModuleName): TId */
val* nit___nit__AModuleName___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2470);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_id for (self: AQualified): ANodes[TId] */
val* nit___nit__AQualified___n_id(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2503);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoc#n_comment for (self: ADoc): ANodes[TComment] */
val* nit___nit__ADoc___n_comment(val* self) {
val* var /* : ANodes[TComment] */;
val* var1 /* : ANodes[TComment] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2515);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_items for (self: AAnnotations): ANodes[AAnnotation] */
val* nit___nit__AAnnotations___n_items(val* self) {
val* var /* : ANodes[AAnnotation] */;
val* var1 /* : ANodes[AAnnotation] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2535);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid for (self: AAnnotation): AAtid */
val* nit___nit__AAnnotation___n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2546);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args for (self: AAnnotation): ANodes[AExpr] */
val* nit___nit__AAnnotation___n_args(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2552);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#name for (self: AAnnotation): String */
val* nit___nit__AAnnotation___name(val* self) {
val* var /* : String */;
val* var1 /* : AAtid */;
val* var3 /* : AAtid */;
val* var4 /* : Token */;
val* var6 /* : Token */;
val* var7 /* : String */;
{
{ /* Inline parser_nodes#AAnnotation#n_atid (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2546);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AAtid#n_id (var1) on <var1:AAtid> */
var6 = var1->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <var1:AAtid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2569);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__lexer_work___Token___text(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id for (self: AAtid): Token */
val* nit___nit__AAtid___n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AAtid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2569);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base for (self: Start): nullable AModule */
val* nit___nit__Start___n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = self->attrs[COLOR_nit__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base= for (self: Start, nullable AModule) */
void nit___nit__Start___n_base_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Start___n_base].val = p0; /* _n_base on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#n_eof for (self: Start): EOF */
val* nit___nit__Start___n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
var1 = self->attrs[COLOR_nit__parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2601);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof= for (self: Start, EOF) */
void nit___nit__Start___n_eof_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Start___n_eof].val = p0; /* _n_eof on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#init for (self: Start) */
void nit___nit__Start___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__Start___standard__kernel__Object__init]))(self) /* init on <self:Start>*/;
}
RET_LABEL:;
}
