#include "nit__parser_nodes.sep.0.h"
/* method parser_nodes#ANode#location for (self: ANode): Location */
val* nit___nit__ANode___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
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
/* method parser_nodes#ANode#debug for (self: ANode, String) */
void nit___nit__ANode___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Location */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Location */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : String */;
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
var3 = standard__file___Sys___stderr(var);
}
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ": ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var4)->values[3]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\n";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var4)->values[5]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var4)->values[7]=var18;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self); /* hot_location on <self:ANode>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__Object__to_s]))(var21); /* to_s on <var21:Location>*/
}
((struct instance_standard__NativeArray*)var4)->values[0]=var22;
{
var23 = standard__string___Object___class_name(self);
}
((struct instance_standard__NativeArray*)var4)->values[2]=var23;
((struct instance_standard__NativeArray*)var4)->values[4]=var_message;
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(self); /* hot_location on <self:ANode>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "0;32";
var28 = standard___standard__NativeString___to_s_with_length(var27, 4l);
var26 = var28;
varonce25 = var26;
}
{
var29 = nit___nit__Location___colored_line(var24, var26);
}
((struct instance_standard__NativeArray*)var4)->values[6]=var29;
{
var30 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
standard___standard__FileWriter___standard__stream__Writer__write(var3, var30); /* Direct call file#FileWriter#write on <var3:Writer>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 101);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: ANode, ANode) */
void nit___nit__ANode___replace_with(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable ANode */;
val* var10 /* : nullable ANode */;
var_node = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable ANode> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable ANode(ANode)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 122);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var10 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 123);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0, val* p1))(var8->class->vft[COLOR_nit__parser_nodes__ANode__replace_child]))(var8, self, var_node); /* replace_child on <var8:nullable ANode>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (self,((val*)NULL)) on <self:ANode> */
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <self:ANode> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: ANode, Visitor) */
void nit___nit__ANode___visit_all(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 127);
fatal_exit(1);
RET_LABEL:;
}
/* method parser_nodes#ANodes#parent for (self: ANodes[ANode]): ANode */
val* nit___nit__ANodes___parent(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 203);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 208);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 219);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
/* method parser_nodes#ANodes#has for (self: ANodes[ANode], nullable Object): Bool */
short int nit___nit__ANodes___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
short int var4 /* : Bool */;
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var1, var_e);
}
var = var4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 238);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 204);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 249);
fatal_exit(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 203);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 254);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 203);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 256);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ANode#parent= (var_e,((val*)NULL)) on <var_e:ANode> */
var_e->attrs[COLOR_nit__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <var_e:ANode> */
RET_LABEL13:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 203);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
var_ = var_nodes;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[Object]>*/
}
var_n = var6;
/* <var_n:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var_n&3)?type_info[((long)var_n&3)]:var_n->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_n&3)?type_info[((long)var_n&3)]:var_n->type)->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 265);
fatal_exit(1);
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
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[Object]>*/
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
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : ANode */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other18 /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct;
long var25 /* : Int */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 203);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_parent = var1;
var_i = 0l;
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__length(self);
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(self, var_i);
}
{
{ /* Inline kernel#Object#== (var9,var_old_child) on <var9:ANode> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var9,var_other) on <var9:ANode> */
var14 = var9 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_new_child,((val*)NULL)) on <var_new_child:nullable ANode> */
var_other18 = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_new_child->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_new_child, var_other18); /* == on <var_new_child:nullable ANode(ANode)>*/
}
var20 = !var19;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
/* <var_new_child:nullable ANode(ANode)> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__ANodes___35dE];
cltype22 = type_struct->color;
idtype23 = type_struct->id;
if(cltype22 >= var_new_child->type->table_size) {
var21 = 0;
} else {
var21 = var_new_child->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 277);
fatal_exit(1);
}
{
nit___nit__ANodes___standard__abstract_collection__Sequence___91d_93d_61d(self, var_i, var_new_child); /* Direct call parser_nodes#ANodes#[]= on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_new_child,var_parent) on <var_new_child:nullable ANode(ANode)> */
var_new_child->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_new_child:nullable ANode(ANode)> */
RET_LABEL24:(void)0;
}
}
} else {
{
nit___nit__ANodes___standard__abstract_collection__Sequence__remove_at(self, var_i); /* Direct call parser_nodes#ANodes#remove_at on <self:ANodes[ANode]>*/
}
}
var = 1;
goto RET_LABEL;
} else {
}
{
var25 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var25;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 0;
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
var2 = ((short int(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_1); /* is_ok on <var_1:Iterator[ANode]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_1); /* item on <var_1:Iterator[ANode]>*/
}
var_n = var3;
{
nit___nit__Visitor___enter_visit(var_v, var_n); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_1); /* next on <var_1:Iterator[ANode]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_1); /* finish on <var_1:Iterator[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: ANodes[ANode]) */
void nit___nit__ANodes___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ANodes___standard__kernel__Object__init]))(self); /* init on <self:ANodes[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token= for (self: Token, nullable Token) */
void nit___nit__Token___prev_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = p0; /* _prev_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#next_token for (self: Token): nullable Token */
val* nit___nit__Token___next_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__Token___next_token].val; /* _next_token on <self:Token> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#next_token= for (self: Token, nullable Token) */
void nit___nit__Token___next_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = p0; /* _next_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#is_loose= for (self: Token, Bool) */
void nit___nit__Token___is_loose_61d(val* self, short int p0) {
self->attrs[COLOR_nit__parser_nodes__Token___is_loose].s = p0; /* _is_loose on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#prev_looses for (self: Token): Array[Token] */
val* nit___nit__Token___prev_looses(val* self) {
val* var /* : Array[Token] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Token] */;
val* var3 /* : Array[Token] */;
var1 = self->attrs[COLOR_nit__parser_nodes__Token___prev_looses].val != NULL; /* _prev_looses on <self:Token> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__parser_nodes__Token___prev_looses].val; /* _prev_looses on <self:Token> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _prev_looses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 333);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Array(&type_standard__Array__nit__Token);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Token]>*/
}
self->attrs[COLOR_nit__parser_nodes__Token___prev_looses].val = var3; /* _prev_looses on <self:Token> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#next_looses for (self: Token): Array[Token] */
val* nit___nit__Token___next_looses(val* self) {
val* var /* : Array[Token] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Token] */;
val* var3 /* : Array[Token] */;
var1 = self->attrs[COLOR_nit__parser_nodes__Token___next_looses].val != NULL; /* _next_looses on <self:Token> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__parser_nodes__Token___next_looses].val; /* _next_looses on <self:Token> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _next_looses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 338);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Array(&type_standard__Array__nit__Token);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Token]>*/
}
self->attrs[COLOR_nit__parser_nodes__Token___next_looses].val = var3; /* _next_looses on <self:Token> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#to_s for (self: Token): String */
val* nit___nit__Token___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "\'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
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
/* method parser_nodes#SourceFile#first_token for (self: SourceFile): nullable Token */
val* nit__parser_nodes___SourceFile___first_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val; /* _first_token on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
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
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[AAnnotation] */;
val* var12 /* : ANodes[AAnnotation] */;
val* var_ /* var : ANodes[AAnnotation] */;
val* var13 /* : Iterator[ANode] */;
val* var_14 /* var : Iterator[AAnnotation] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var17 /* : String */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
val* var24 /* : ANodes[APropdef] */;
val* var26 /* : ANodes[APropdef] */;
val* var_27 /* var : ANodes[APropdef] */;
val* var28 /* : Iterator[ANode] */;
val* var_29 /* var : Iterator[APropdef] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_na32 /* var na: APropdef */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : String */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
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
if (var_nas == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nas,((val*)NULL)) on <var_nas:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_nas->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nas, var_other); /* == on <var_nas:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#AAnnotations#n_items (var_nas) on <var_nas:nullable AAnnotations(AAnnotations)> */
var12 = var_nas->attrs[COLOR_nit__parser_nodes__AAnnotations___n_items].val; /* _n_items on <var_nas:nullable AAnnotations(AAnnotations)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2968);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[AAnnotation]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[AAnnotation]>*/
}
var_na = var16;
{
var17 = nit___nit__AAnnotation___name(var_na);
}
{
{ /* Inline kernel#Object#!= (var17,var_name) on <var17:String> */
var_other = var_name;
{
var20 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var_other); /* == on <var17:String>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_na); /* Direct call array#Array#add on <var_res:Array[AAnnotation]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[AAnnotation]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[AAnnotation]>*/
}
} else {
}
/* <self:Prod> isa AClassdef */
cltype = type_nit__AClassdef.color;
idtype = type_nit__AClassdef.id;
if(cltype >= self->type->table_size) {
var23 = 0;
} else {
var23 = self->type->type_table[cltype] == idtype;
}
if (var23){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:Prod(AClassdef)> */
var26 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:Prod(AClassdef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
{
var28 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_27);
}
var_29 = var28;
for(;;) {
{
var30 = ((short int(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_29); /* is_ok on <var_29:Iterator[APropdef]>*/
}
if (var30){
{
var31 = ((val*(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_29); /* item on <var_29:Iterator[APropdef]>*/
}
var_na32 = var31;
/* <var_na32:APropdef> isa AAnnotPropdef */
cltype34 = type_nit__AAnnotPropdef.color;
idtype35 = type_nit__AAnnotPropdef.id;
if(cltype34 >= var_na32->type->table_size) {
var33 = 0;
} else {
var33 = var_na32->type->type_table[cltype34] == idtype35;
}
if (var33){
{
var36 = nit___nit__AAnnotation___name(var_na32);
}
{
{ /* Inline kernel#Object#!= (var36,var_name) on <var36:String> */
var_other = var_name;
{
var39 = ((short int(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var36, var_other); /* == on <var36:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
goto BREAK_label41;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_na32); /* Direct call array#Array#add on <var_res:Array[AAnnotation]>*/
}
} else {
}
BREAK_label41: (void)0;
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_29); /* next on <var_29:Iterator[APropdef]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_29); /* finish on <var_29:Iterator[APropdef]>*/
}
} else {
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__Prod___ANode__replace_with]))(self, p0); /* replace_with on <self:Prod>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 401);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 402);
fatal_exit(1);
}
var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val = var5; /* _location on <var_n:ANode(Prod)> */
} else {
}
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Visitor, nullable ANode) */
void nit___nit__Visitor___enter_visit(val* self, val* p0) {
val* var_e /* var e: nullable ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_e = p0;
if (var_e == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable ANode(ANode)> */
var5 = var_e == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var_old = var6;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var_e; /* _current_node on <self:Visitor> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__Visitor__visit]))(self, var_e); /* visit on <self:Visitor>*/
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
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "end of line";
var3 = standard___standard__NativeString___to_s_with_length(var2, 11l);
var1 = var3;
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
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "keyword \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 9l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenOperator#to_s for (self: TokenOperator): String */
val* nit___nit__TokenOperator___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "operator \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 10l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TClassid#to_s for (self: TClassid): String */
val* nit___nit__TClassid___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "type identifier \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 17l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TId#to_s for (self: TId): String */
val* nit___nit__TId___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "identifier \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 12l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TAttrid#to_s for (self: TAttrid): String */
val* nit___nit__TAttrid___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "attribute \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 11l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenLiteral#to_s for (self: TokenLiteral): String */
val* nit___nit__TokenLiteral___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "literal value \'";
var5 = standard___standard__NativeString___to_s_with_length(var4, 15l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadString#to_s for (self: TBadString): String */
val* nit___nit__TBadString___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "malformed string ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 17l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadChar#to_s for (self: TBadChar): String */
val* nit___nit__TBadChar___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "malformed character ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 20l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = nit__lexer_work___Token___text(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
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
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "end of file";
var3 = standard___standard__NativeString___to_s_with_length(var2, 11l);
var1 = var3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1090);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1093);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1120);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1128);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1138);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APublicVisibility#init for (self: APublicVisibility) */
void nit___nit__APublicVisibility___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__APublicVisibility___standard__kernel__Object__init]))(self); /* init on <self:APublicVisibility>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1198);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1207);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block for (self: AStdClassdef): nullable AExternCodeBlock */
val* nit___nit__AStdClassdef___n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_superclasses for (self: AStdClassdef): Array[ASuperPropdef] */
val* nit___nit__AStdClassdef___n_superclasses(val* self) {
val* var /* : Array[ASuperPropdef] */;
val* var1 /* : Array[ASuperPropdef] */;
val* var_ /* var : Array[ASuperPropdef] */;
val* var2 /* : ANodes[APropdef] */;
val* var4 /* : ANodes[APropdef] */;
val* var_5 /* var : ANodes[APropdef] */;
val* var6 /* : Iterator[ANode] */;
val* var_7 /* var : Iterator[APropdef] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_d /* var d: APropdef */;
short int var10 /* : Bool */;
int cltype;
int idtype;
var1 = NEW_standard__Array(&type_standard__Array__nit__ASuperPropdef);
{
standard___standard__Array___with_capacity(var1, 1l); /* Direct call array#Array#with_capacity on <var1:Array[ASuperPropdef]>*/
}
var_ = var1;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var4 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_5 = var2;
{
var6 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_5);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[APropdef]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[APropdef]>*/
}
var_d = var9;
/* <var_d:APropdef> isa ASuperPropdef */
cltype = type_nit__ASuperPropdef.color;
idtype = type_nit__ASuperPropdef.id;
if(cltype >= var_d->type->table_size) {
var10 = 0;
} else {
var10 = var_d->type->type_table[cltype] == idtype;
}
if (var10){
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_d); /* Direct call array#AbstractArray#push on <var_:Array[ASuperPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[APropdef]>*/
}
var = var_;
goto RET_LABEL;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1223);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var1) on <var1:nullable TClassid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var1:nullable TClassid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1291);
fatal_exit(1);
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
/* method parser_nodes#AAttrPropdef#n_id2 for (self: AAttrPropdef): TId */
val* nit___nit__AAttrPropdef___n_id2(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1311);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1311);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
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
/* method parser_nodes#AMethPropdef#n_extern_calls for (self: AMethPropdef): nullable AExternCalls */
val* nit___nit__AMethPropdef___n_extern_calls(val* self) {
val* var /* : nullable AExternCalls */;
val* var1 /* : nullable AExternCalls */;
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AMethid */;
val* var11 /* : nullable AMethid */;
val* var12 /* : Location */;
val* var14 /* : Location */;
val* var15 /* : nullable TKwinit */;
val* var17 /* : nullable TKwinit */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable TKwinit */;
val* var25 /* : nullable TKwinit */;
val* var26 /* : Location */;
val* var28 /* : Location */;
val* var29 /* : nullable TKwnew */;
val* var31 /* : nullable TKwnew */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable TKwnew */;
val* var39 /* : nullable TKwnew */;
val* var40 /* : Location */;
val* var42 /* : Location */;
val* var43 /* : Location */;
val* var45 /* : Location */;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable AMethid> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable AMethid(AMethid)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var11 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1375);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var9) on <var9:nullable AMethid> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var9:nullable AMethid> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var15,((val*)NULL)) on <var15:nullable TKwinit> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:nullable TKwinit(TKwinit)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var25 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1377);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var23) on <var23:nullable TKwinit> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var23:nullable TKwinit> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var31 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var29,((val*)NULL)) on <var29:nullable TKwnew> */
var_other = ((val*)NULL);
{
var35 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var_other); /* == on <var29:nullable TKwnew(TKwnew)>*/
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var39 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1379);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var37) on <var37:nullable TKwnew> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var42 = var37->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var37:nullable TKwnew> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var = var40;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var45 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var = var43;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperPropdef#n_type for (self: ASuperPropdef): AType */
val* nit___nit__ASuperPropdef___n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <self:ASuperPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1403);
fatal_exit(1);
}
var = var1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1415);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1527);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1544);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1707);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1723);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
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
/* method parser_nodes#ABlockExpr#n_expr for (self: ABlockExpr): ANodes[AExpr] */
val* nit___nit__ABlockExpr___n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1773);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1880);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1886);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1892);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1904);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1934);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1940);
fatal_exit(1);
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
/* method parser_nodes#AWithExpr#n_expr for (self: AWithExpr): AExpr */
val* nit___nit__AWithExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1958);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWithExpr#n_block for (self: AWithExpr): nullable AExpr */
val* nit___nit__AWithExpr___n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1978);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1992);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1995);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2003);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2017);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_op for (self: ABinopExpr): Token */
val* nit___nit__ABinopExpr___n_op(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ABinopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2033);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2036);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2093);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEqExpr#operator for (self: AEqExpr): String */
val* nit___nit__AEqExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "==";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANeExpr#operator for (self: ANeExpr): String */
val* nit___nit__ANeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "!=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALtExpr#operator for (self: ALtExpr): String */
val* nit___nit__ALtExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALeExpr#operator for (self: ALeExpr): String */
val* nit___nit__ALeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALlExpr#operator for (self: ALlExpr): String */
val* nit___nit__ALlExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<<";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGtExpr#operator for (self: AGtExpr): String */
val* nit___nit__AGtExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGeExpr#operator for (self: AGeExpr): String */
val* nit___nit__AGeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">=";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGgExpr#operator for (self: AGgExpr): String */
val* nit___nit__AGgExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2149);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2155);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusExpr#operator for (self: APlusExpr): String */
val* nit___nit__APlusExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "+";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusExpr#operator for (self: AMinusExpr): String */
val* nit___nit__AMinusExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "-";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarshipExpr#operator for (self: AStarshipExpr): String */
val* nit___nit__AStarshipExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<=>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarExpr#operator for (self: AStarExpr): String */
val* nit___nit__AStarExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarstarExpr#operator for (self: AStarstarExpr): String */
val* nit___nit__AStarstarExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "**";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASlashExpr#operator for (self: ASlashExpr): String */
val* nit___nit__ASlashExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APercentExpr#operator for (self: APercentExpr): String */
val* nit___nit__APercentExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "%";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APipeExpr#operator for (self: APipeExpr): String */
val* nit___nit__APipeExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACaretExpr#operator for (self: ACaretExpr): String */
val* nit___nit__ACaretExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "^";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAmpExpr#operator for (self: AAmpExpr): String */
val* nit___nit__AAmpExpr___ABinopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "&";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUminusExpr#operator for (self: AUminusExpr): String */
val* nit___nit__AUminusExpr___AUnaryopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "-";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUplusExpr#operator for (self: AUplusExpr): String */
val* nit___nit__AUplusExpr___AUnaryopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "+";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUtildeExpr#operator for (self: AUtildeExpr): String */
val* nit___nit__AUtildeExpr___AUnaryopExpr__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "~";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_kwnew for (self: ANewExpr): TKwnew */
val* nit___nit__ANewExpr___n_kwnew(val* self) {
val* var /* : TKwnew */;
val* var1 /* : TKwnew */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2252);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2255);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2261);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2272);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2292);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2295);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2344);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_kwinit for (self: AInitExpr): TKwinit */
val* nit___nit__AInitExpr___n_kwinit(val* self) {
val* var /* : TKwinit */;
val* var1 /* : TKwinit */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2353);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2356);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2364);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2417);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2423);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
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
/* method parser_nodes#ADecIntExpr#n_number for (self: ADecIntExpr): TNumber */
val* nit___nit__ADecIntExpr___n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2512);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2520);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinIntExpr#n_bin_number for (self: ABinIntExpr): TBinNumber */
val* nit___nit__ABinIntExpr___n_bin_number(val* self) {
val* var /* : TBinNumber */;
val* var1 /* : TBinNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinIntExpr___n_bin_number].val; /* _n_bin_number on <self:ABinIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2528);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOctIntExpr#n_oct_number for (self: AOctIntExpr): TOctNumber */
val* nit___nit__AOctIntExpr___n_oct_number(val* self) {
val* var /* : TOctNumber */;
val* var1 /* : TOctNumber */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOctIntExpr___n_oct_number].val; /* _n_oct_number on <self:AOctIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2536);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADecByteExpr#n_bytenum for (self: ADecByteExpr): TBytenum */
val* nit___nit__ADecByteExpr___n_bytenum(val* self) {
val* var /* : TBytenum */;
val* var1 /* : TBytenum */;
var1 = self->attrs[COLOR_nit__parser_nodes__ADecByteExpr___n_bytenum].val; /* _n_bytenum on <self:ADecByteExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2549);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AHexByteExpr#n_hex_bytenum for (self: AHexByteExpr): THexBytenum */
val* nit___nit__AHexByteExpr___n_hex_bytenum(val* self) {
val* var /* : THexBytenum */;
val* var1 /* : THexBytenum */;
var1 = self->attrs[COLOR_nit__parser_nodes__AHexByteExpr___n_hex_bytenum].val; /* _n_hex_bytenum on <self:AHexByteExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2557);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinByteExpr#n_bin_bytenum for (self: ABinByteExpr): TBinBytenum */
val* nit___nit__ABinByteExpr___n_bin_bytenum(val* self) {
val* var /* : TBinBytenum */;
val* var1 /* : TBinBytenum */;
var1 = self->attrs[COLOR_nit__parser_nodes__ABinByteExpr___n_bin_bytenum].val; /* _n_bin_bytenum on <self:ABinByteExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2565);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOctByteExpr#n_oct_bytenum for (self: AOctByteExpr): TOctBytenum */
val* nit___nit__AOctByteExpr___n_oct_bytenum(val* self) {
val* var /* : TOctBytenum */;
val* var1 /* : TOctBytenum */;
var1 = self->attrs[COLOR_nit__parser_nodes__AOctByteExpr___n_oct_bytenum].val; /* _n_oct_bytenum on <self:AOctByteExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2573);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2581);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2589);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2597);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2626);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2637);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2648);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2665);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2692);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANamedargExpr#n_id for (self: ANamedargExpr): TId */
val* nit___nit__ANamedargExpr___n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2703);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANamedargExpr#n_expr for (self: ANamedargExpr): AExpr */
val* nit___nit__ANamedargExpr___n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2709);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2717);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2760);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2763);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusAssignOp#operator for (self: APlusAssignOp): String */
val* nit___nit__APlusAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "+";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusAssignOp#operator for (self: AMinusAssignOp): String */
val* nit___nit__AMinusAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "-";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarAssignOp#operator for (self: AStarAssignOp): String */
val* nit___nit__AStarAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASlashAssignOp#operator for (self: ASlashAssignOp): String */
val* nit___nit__ASlashAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APercentAssignOp#operator for (self: APercentAssignOp): String */
val* nit___nit__APercentAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "%";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarstarAssignOp#operator for (self: AStarstarAssignOp): String */
val* nit___nit__AStarstarAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "**";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APipeAssignOp#operator for (self: APipeAssignOp): String */
val* nit___nit__APipeAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACaretAssignOp#operator for (self: ACaretAssignOp): String */
val* nit___nit__ACaretAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "^";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAmpAssignOp#operator for (self: AAmpAssignOp): String */
val* nit___nit__AAmpAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "&";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALlAssignOp#operator for (self: ALlAssignOp): String */
val* nit___nit__ALlAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "<<";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGgAssignOp#operator for (self: AGgAssignOp): String */
val* nit___nit__AGgAssignOp___AAssignOp__operator(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ">>";
var3 = standard___standard__NativeString___to_s_with_length(var2, 2l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2897);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2900);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_string for (self: AInLanguage): TString */
val* nit___nit__AInLanguage___n_string(val* self) {
val* var /* : TString */;
val* var1 /* : TString */;
var1 = self->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2911);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_in_language for (self: AExternCodeBlock): nullable AInLanguage */
val* nit___nit__AExternCodeBlock___n_in_language(val* self) {
val* var /* : nullable AInLanguage */;
val* var1 /* : nullable AInLanguage */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment for (self: AExternCodeBlock): TExternCodeSegment */
val* nit___nit__AExternCodeBlock___n_extern_code_segment(val* self) {
val* var /* : TExternCodeSegment */;
val* var1 /* : TExternCodeSegment */;
var1 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2922);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2933);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2945);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2968);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2982);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2982);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 3005);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 3005);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 3037);
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Start___standard__kernel__Object__init]))(self); /* init on <self:Start>*/
}
RET_LABEL:;
}
