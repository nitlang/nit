#include "parser_nodes.sep.0.h"
/* method parser_nodes#ANode#location for (self: ANode): Location */
val* parser_nodes__ANode__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#location for (self: Object): Location */
val* VIRTUAL_parser_nodes__ANode__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
val* var3 /* : Location */;
{ /* Inline parser_nodes#ANode#location (self) on <self:Object(ANode)> */
var3 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:Object(ANode)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#location= for (self: ANode, Location) */
void parser_nodes__ANode__location_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANode___location].val = p0; /* _location on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#location= for (self: Object, Location) */
void VIRTUAL_parser_nodes__ANode__location_61d(val* self, val* p0) {
{ /* Inline parser_nodes#ANode#location= (self,p0) on <self:Object(ANode)> */
self->attrs[COLOR_parser_nodes__ANode___location].val = p0; /* _location on <self:Object(ANode)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ANode#hot_location for (self: ANode): Location */
val* parser_nodes__ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
val* var3 /* : Location */;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ANode> */
var3 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
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
/* method parser_nodes#ANode#hot_location for (self: Object): Location */
val* VIRTUAL_parser_nodes__ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = parser_nodes__ANode__hot_location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#debug for (self: ANode, String) */
void parser_nodes__ANode__debug(val* self, val* p0) {
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
var5 = var->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <var:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 637);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ANode>*/;
}
if (varonce) {
var7 = varonce;
} else {
var8 = " ";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = string__Object__class_name(self);
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ": ";
var15 = 2;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = 1;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ANode>*/;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "0;32";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = location__Location__colored_line(var22, var24);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "\n";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 8;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var11;
((struct instance_array__NativeArray*)var36)->values[3] = (val*) var13;
((struct instance_array__NativeArray*)var36)->values[4] = (val*) var_message;
((struct instance_array__NativeArray*)var36)->values[5] = (val*) var18;
((struct instance_array__NativeArray*)var36)->values[6] = (val*) var28;
((struct instance_array__NativeArray*)var36)->values[7] = (val*) var30;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
file__OFStream__write(var3, var37); /* Direct call file#OFStream#write on <var3:OStream>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANode#debug for (self: Object, String) */
void VIRTUAL_parser_nodes__ANode__debug(val* self, val* p0) {
parser_nodes__ANode__debug(self, p0); /* Direct call parser_nodes#ANode#debug on <self:Object(ANode)>*/
RET_LABEL:;
}
/* method parser_nodes#ANode#parent for (self: ANode): nullable ANode */
val* parser_nodes__ANode__parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#parent for (self: Object): nullable ANode */
val* VIRTUAL_parser_nodes__ANode__parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
{ /* Inline parser_nodes#ANode#parent (self) on <self:Object(ANode)> */
var3 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:Object(ANode)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#parent= for (self: ANode, nullable ANode) */
void parser_nodes__ANode__parent_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANode___parent].val = p0; /* _parent on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#parent= for (self: Object, nullable ANode) */
void VIRTUAL_parser_nodes__ANode__parent_61d(val* self, val* p0) {
{ /* Inline parser_nodes#ANode#parent= (self,p0) on <self:Object(ANode)> */
self->attrs[COLOR_parser_nodes__ANode___parent].val = p0; /* _parent on <self:Object(ANode)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: ANode, ANode, nullable ANode) */
void parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 91);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
{ /* Inline parser_nodes#ANode#replace_child (self,p0,p1) on <self:Object(ANode)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 91);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: ANode, ANode) */
void parser_nodes__ANode__replace_with(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var13 /* : null */;
var_node = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var2 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
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
var8 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_other) /* == on <var:nullable ANode(ANode)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 112);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ANode> */
var12 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:ANode> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 113);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_parser_nodes__ANode__replace_child]))(var10, self, var_node) /* replace_child on <var10:nullable ANode>*/;
}
var13 = NULL;
{
{ /* Inline parser_nodes#ANode#parent= (self,var13) on <self:ANode> */
self->attrs[COLOR_parser_nodes__ANode___parent].val = var13; /* _parent on <self:ANode> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANode__replace_with(val* self, val* p0) {
parser_nodes__ANode__replace_with(self, p0); /* Direct call parser_nodes#ANode#replace_with on <self:Object(ANode)>*/
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: ANode, Visitor) */
void parser_nodes__ANode__visit_all(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 117);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_nodes__ANode__visit_all(val* self, val* p0) {
const char* var_class_name;
{ /* Inline parser_nodes#ANode#visit_all (self,p0) on <self:Object(ANode)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 117);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#parent for (self: ANodes[ANode]): ANode */
val* parser_nodes__ANodes__parent(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 126);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#parent for (self: Object): ANode */
val* VIRTUAL_parser_nodes__ANodes__parent(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
val* var3 /* : ANode */;
{ /* Inline parser_nodes#ANodes#parent (self) on <self:Object(ANodes[ANode])> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:Object(ANodes[ANode])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 126);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#parent= for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__parent_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANodes___parent].val = p0; /* _parent on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#parent= for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__parent_61d(val* self, val* p0) {
{ /* Inline parser_nodes#ANodes#parent= (self,p0) on <self:Object(ANodes[ANode])> */
self->attrs[COLOR_parser_nodes__ANodes___parent].val = p0; /* _parent on <self:Object(ANodes[ANode])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#items for (self: ANodes[ANode]): Array[ANode] */
val* parser_nodes__ANodes__items(val* self) {
val* var /* : Array[ANode] */;
val* var1 /* : Array[ANode] */;
var1 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#items for (self: Object): Array[ANode] */
val* VIRTUAL_parser_nodes__ANodes__items(val* self) {
val* var /* : Array[ANode] */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
{ /* Inline parser_nodes#ANodes#items (self) on <self:Object(ANodes[ANode])> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:Object(ANodes[ANode])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#iterator for (self: ANodes[ANode]): Iterator[ANode] */
val* parser_nodes__ANodes__iterator(val* self) {
val* var /* : Iterator[ANode] */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : ArrayIterator[nullable Object] */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArrayRead__iterator(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_parser_nodes__ANodes__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[ANode] */;
var1 = parser_nodes__ANodes__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#length for (self: ANodes[ANode]): Int */
long parser_nodes__ANodes__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
long var4 /* : Int */;
long var6 /* : Int */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[ANode]> */
var6 = var1->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var1:Array[ANode]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#length for (self: Object): Int */
long VIRTUAL_parser_nodes__ANodes__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = parser_nodes__ANodes__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#is_empty for (self: ANodes[ANode]): Bool */
short int parser_nodes__ANodes__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
short int var4 /* : Bool */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArrayRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#is_empty for (self: Object): Bool */
short int VIRTUAL_parser_nodes__ANodes__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = parser_nodes__ANodes__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#push for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__push(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 131);
show_backtrace(1);
}
var_e = p0;
{
parser_nodes__ANodes__hook_add(self, var_e); /* Direct call parser_nodes#ANodes#hook_add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
array__AbstractArray__push(var1, var_e); /* Direct call array#AbstractArray#push on <var1:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#push for (self: Object, nullable Object) */
void VIRTUAL_parser_nodes__ANodes__push(val* self, val* p0) {
parser_nodes__ANodes__push(self, p0); /* Direct call parser_nodes#ANodes#push on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#pop for (self: ANodes[ANode]): ANode */
val* parser_nodes__ANodes__pop(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: ANode */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArray__pop(var1);
}
var_res = var4;
{
parser_nodes__ANodes__hook_remove(self, var_res); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#pop for (self: Object): nullable Object */
val* VIRTUAL_parser_nodes__ANodes__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : ANode */;
var1 = parser_nodes__ANodes__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#unshift for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__unshift(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 142);
show_backtrace(1);
}
var_e = p0;
{
parser_nodes__ANodes__hook_add(self, var_e); /* Direct call parser_nodes#ANodes#hook_add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
array__AbstractArray__unshift(var1, var_e); /* Direct call array#AbstractArray#unshift on <var1:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#unshift for (self: Object, nullable Object) */
void VIRTUAL_parser_nodes__ANodes__unshift(val* self, val* p0) {
parser_nodes__ANodes__unshift(self, p0); /* Direct call parser_nodes#ANodes#unshift on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#shift for (self: ANodes[ANode]): ANode */
val* parser_nodes__ANodes__shift(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: ANode */;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArray__shift(var1);
}
var_res = var4;
{
parser_nodes__ANodes__hook_remove(self, var_res); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#shift for (self: Object): nullable Object */
val* VIRTUAL_parser_nodes__ANodes__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : ANode */;
var1 = parser_nodes__ANodes__shift(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#has for (self: ANodes[ANode], ANode): Bool */
short int parser_nodes__ANodes__has(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 153);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var4 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__AbstractArrayRead__has(var2, var_e);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_parser_nodes__ANodes__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = parser_nodes__ANodes__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[] for (self: ANodes[ANode], Int): ANode */
val* parser_nodes__ANodes___91d_93d(val* self, long p0) {
val* var /* : ANode */;
long var_index /* var index: Int */;
val* var1 /* : Array[ANode] */;
val* var3 /* : Array[ANode] */;
val* var4 /* : nullable Object */;
var_index = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__Array___91d_93d(var1, var_index);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_parser_nodes__ANodes___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : ANode */;
var1 = parser_nodes__ANodes___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#[]= for (self: ANodes[ANode], Int, ANode) */
void parser_nodes__ANodes___91d_93d_61d(val* self, long p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 161);
show_backtrace(1);
}
var_index = p0;
var_e = p1;
{
var1 = parser_nodes__ANodes___91d_93d(self, var_index);
}
{
parser_nodes__ANodes__hook_remove(self, var1); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
{
parser_nodes__ANodes__hook_add(self, var_e); /* Direct call parser_nodes#ANodes#hook_add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var4 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
array__Array___91d_93d_61d(var2, var_index, var_e); /* Direct call array#Array#[]= on <var2:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_parser_nodes__ANodes___91d_93d_61d(val* self, long p0, val* p1) {
parser_nodes__ANodes___91d_93d_61d(self, p0, p1); /* Direct call parser_nodes#ANodes#[]= on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#remove_at for (self: ANodes[ANode], Int) */
void parser_nodes__ANodes__remove_at(val* self, long p0) {
long var_index /* var index: Int */;
val* var /* : Array[ANode] */;
val* var2 /* : Array[ANode] */;
val* var3 /* : nullable Object */;
val* var4 /* : Array[ANode] */;
val* var6 /* : Array[ANode] */;
var_index = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var2 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = array__Array___91d_93d(var, var_index);
}
{
parser_nodes__ANodes__hook_remove(self, var3); /* Direct call parser_nodes#ANodes#hook_remove on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var6 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 127);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
array__AbstractArray__remove_at(var4, var_index); /* Direct call array#AbstractArray#remove_at on <var4:Array[ANode]>*/
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#remove_at for (self: Object, Int) */
void VIRTUAL_parser_nodes__ANodes__remove_at(val* self, long p0) {
parser_nodes__ANodes__remove_at(self, p0); /* Direct call parser_nodes#ANodes#remove_at on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_add for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__hook_add(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__ANodes_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 172);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 126);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent= (var_e,var1) on <var_e:ANode> */
var_e->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <var_e:ANode> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_add for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__hook_add(val* self, val* p0) {
parser_nodes__ANodes__hook_add(self, p0); /* Direct call parser_nodes#ANodes#hook_add on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_remove for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__hook_remove(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__ANodes_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 177);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANode#parent (var_e) on <var_e:ANode> */
var3 = var_e->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var_e:ANode> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var6 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 126);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 179);
show_backtrace(1);
}
var13 = NULL;
{
{ /* Inline parser_nodes#ANode#parent= (var_e,var13) on <var_e:ANode> */
var_e->attrs[COLOR_parser_nodes__ANode___parent].val = var13; /* _parent on <var_e:ANode> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_remove for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__hook_remove(val* self, val* p0) {
parser_nodes__ANodes__hook_remove(self, p0); /* Direct call parser_nodes#ANodes#hook_remove on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#unsafe_add_all for (self: ANodes[ANode], Collection[Object]) */
void parser_nodes__ANodes__unsafe_add_all(val* self, val* p0) {
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
var2 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 126);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
var_ = var_nodes;
{
var3 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[Object]>*/;
}
if (var5){
{
var6 = ((val* (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[Object]>*/;
}
var_n = var6;
/* <var_n:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__ANodes_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_n->type->table_size) {
var7 = 0;
} else {
var7 = var_n->type->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 188);
show_backtrace(1);
}
{
abstract_collection__Sequence__add(self, var_n); /* Direct call abstract_collection#Sequence#add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_n,var_parent) on <var_n:Object(ANode)> */
var_n->attrs[COLOR_parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_n:Object(ANode)> */
RET_LABEL8:(void)0;
}
}
{
((void (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[Object]>*/;
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
/* method parser_nodes#ANodes#unsafe_add_all for (self: Object, Collection[Object]) */
void VIRTUAL_parser_nodes__ANodes__unsafe_add_all(val* self, val* p0) {
parser_nodes__ANodes__unsafe_add_all(self, p0); /* Direct call parser_nodes#ANodes#unsafe_add_all on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#replace_child for (self: ANodes[ANode], ANode, nullable ANode): Bool */
short int parser_nodes__ANodes__replace_child(val* self, val* p0, val* p1) {
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
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other21 /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const struct type* type_struct;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 126);
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
var5 = parser_nodes__ANodes__length(self);
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
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
var10 = parser_nodes__ANodes___91d_93d(self, var_i);
}
{
{ /* Inline kernel#Object#== (var10,var_old_child) on <var10:ANode> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var10,var_other) on <var10:ANode> */
var16 = var10 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var17 = NULL;
if (var_new_child == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_new_child,var17) on <var_new_child:nullable ANode> */
var_other21 = var17;
{
var23 = ((short int (*)(val*, val*))(var_new_child->class->vft[COLOR_kernel__Object___61d_61d]))(var_new_child, var_other21) /* == on <var_new_child:nullable ANode(ANode)>*/;
var22 = var23;
}
var24 = !var22;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
/* <var_new_child:nullable ANode(ANode)> isa E */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__ANodes_FT0];
cltype26 = type_struct->color;
idtype27 = type_struct->id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 200);
show_backtrace(1);
}
{
parser_nodes__ANodes___91d_93d_61d(self, var_i, var_new_child); /* Direct call parser_nodes#ANodes#[]= on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_new_child,var_parent) on <var_new_child:nullable ANode(ANode)> */
var_new_child->attrs[COLOR_parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_new_child:nullable ANode(ANode)> */
RET_LABEL28:(void)0;
}
}
} else {
{
parser_nodes__ANodes__remove_at(self, var_i); /* Direct call parser_nodes#ANodes#remove_at on <self:ANodes[ANode]>*/
}
}
var29 = 1;
var = var29;
goto RET_LABEL;
} else {
}
var30 = 1;
{
var31 = kernel__Int__successor(var_i, var30);
}
var_i = var31;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var32 = 0;
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#replace_child for (self: Object, ANode, nullable ANode): Bool */
short int VIRTUAL_parser_nodes__ANodes__replace_child(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = parser_nodes__ANodes__replace_child(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#visit_all for (self: ANodes[ANode], Visitor) */
void parser_nodes__ANodes__visit_all(val* self, val* p0) {
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
var = parser_nodes__ANodes__iterator(var_);
}
var_1 = var;
for(;;) {
{
var2 = ((short int (*)(val*))(var_1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_1) /* is_ok on <var_1:Iterator[ANode]>*/;
}
if (var2){
{
var3 = ((val* (*)(val*))(var_1->class->vft[COLOR_abstract_collection__Iterator__item]))(var_1) /* item on <var_1:Iterator[ANode]>*/;
}
var_n = var3;
{
parser_nodes__Visitor__enter_visit(var_v, var_n); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
((void (*)(val*))(var_1->class->vft[COLOR_abstract_collection__Iterator__next]))(var_1) /* next on <var_1:Iterator[ANode]>*/;
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
/* method parser_nodes#ANodes#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_nodes__ANodes__visit_all(val* self, val* p0) {
parser_nodes__ANodes__visit_all(self, p0); /* Direct call parser_nodes#ANodes#visit_all on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: ANodes[ANode]) */
void parser_nodes__ANodes__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__init]))(self) /* init on <self:ANodes[ANode]>*/;
}
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: Object) */
void VIRTUAL_parser_nodes__ANodes__init(val* self) {
{ /* Inline parser_nodes#ANodes#init (self) on <self:Object(ANodes[ANode])> */
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__init]))(self) /* init on <self:Object(ANodes[ANode])>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token= for (self: Token, nullable Token) */
void parser_nodes__Token__prev_token_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Token___prev_token].val = p0; /* _prev_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token= for (self: Object, nullable Token) */
void VIRTUAL_parser_nodes__Token__prev_token_61d(val* self, val* p0) {
{ /* Inline parser_nodes#Token#prev_token= (self,p0) on <self:Object(Token)> */
self->attrs[COLOR_parser_nodes__Token___prev_token].val = p0; /* _prev_token on <self:Object(Token)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#Token#next_token= for (self: Token, nullable Token) */
void parser_nodes__Token__next_token_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Token___next_token].val = p0; /* _next_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#next_token= for (self: Object, nullable Token) */
void VIRTUAL_parser_nodes__Token__next_token_61d(val* self, val* p0) {
{ /* Inline parser_nodes#Token#next_token= (self,p0) on <self:Object(Token)> */
self->attrs[COLOR_parser_nodes__Token___next_token].val = p0; /* _next_token on <self:Object(Token)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#Token#to_s for (self: Token): String */
val* parser_nodes__Token__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__Token__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__Token__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#visit_all for (self: Token, Visitor) */
void parser_nodes__Token__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_nodes#Token#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_nodes__Token__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
{ /* Inline parser_nodes#Token#visit_all (self,p0) on <self:Object(Token)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#Token#replace_child for (self: Token, ANode, nullable ANode) */
void parser_nodes__Token__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_nodes#Token#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_nodes__Token__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
{ /* Inline parser_nodes#Token#replace_child (self,p0,p1) on <self:Object(Token)> */
var_old_child = p0;
var_new_child = p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#SourceFile#first_token= for (self: SourceFile, nullable Token) */
void parser_nodes__SourceFile__first_token_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__SourceFile___first_token].val = p0; /* _first_token on <self:SourceFile> */
RET_LABEL:;
}
/* method parser_nodes#SourceFile#first_token= for (self: Object, nullable Token) */
void VIRTUAL_parser_nodes__SourceFile__first_token_61d(val* self, val* p0) {
{ /* Inline parser_nodes#SourceFile#first_token= (self,p0) on <self:Object(SourceFile)> */
self->attrs[COLOR_parser_nodes__SourceFile___first_token].val = p0; /* _first_token on <self:Object(SourceFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#SourceFile#last_token= for (self: SourceFile, nullable Token) */
void parser_nodes__SourceFile__last_token_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__SourceFile___last_token].val = p0; /* _last_token on <self:SourceFile> */
RET_LABEL:;
}
/* method parser_nodes#SourceFile#last_token= for (self: Object, nullable Token) */
void VIRTUAL_parser_nodes__SourceFile__last_token_61d(val* self, val* p0) {
{ /* Inline parser_nodes#SourceFile#last_token= (self,p0) on <self:Object(SourceFile)> */
self->attrs[COLOR_parser_nodes__SourceFile___last_token].val = p0; /* _last_token on <self:Object(SourceFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#Prod#n_annotations for (self: Prod): nullable AAnnotations */
val* parser_nodes__Prod__n_annotations(val* self) {
val* var /* : nullable AAnnotations */;
val* var1 /* : nullable AAnnotations */;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Prod> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#n_annotations for (self: Object): nullable AAnnotations */
val* VIRTUAL_parser_nodes__Prod__n_annotations(val* self) {
val* var /* : nullable AAnnotations */;
val* var1 /* : nullable AAnnotations */;
val* var3 /* : nullable AAnnotations */;
{ /* Inline parser_nodes#Prod#n_annotations (self) on <self:Object(Prod)> */
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Object(Prod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#n_annotations= for (self: Prod, nullable AAnnotations) */
void parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = p0; /* _n_annotations on <self:Prod> */
RET_LABEL:;
}
/* method parser_nodes#Prod#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
{ /* Inline parser_nodes#Prod#n_annotations= (self,p0) on <self:Object(Prod)> */
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = p0; /* _n_annotations on <self:Object(Prod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#Prod#replace_with for (self: Prod, ANode) */
void parser_nodes__Prod__replace_with(val* self, val* p0) {
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
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Prod__replace_with]))(self, p0) /* replace_with on <self:Prod>*/;
}
/* <var_n:ANode> isa Prod */
cltype = type_parser_nodes__Prod.color;
idtype = type_parser_nodes__Prod.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 275);
show_backtrace(1);
}
var2 = var_n->attrs[COLOR_parser_nodes__ANode___location].val != NULL; /* _location on <var_n:ANode(Prod)> */
var3 = !var2;
var_ = var3;
if (var3){
var4 = self->attrs[COLOR_parser_nodes__ANode___location].val != NULL; /* _location on <self:Prod> */
var1 = var4;
} else {
var1 = var_;
}
if (var1){
var5 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:Prod> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 276);
show_backtrace(1);
}
var_n->attrs[COLOR_parser_nodes__ANode___location].val = var5; /* _location on <var_n:ANode(Prod)> */
} else {
}
RET_LABEL:;
}
/* method parser_nodes#Prod#replace_with for (self: Object, ANode) */
void VIRTUAL_parser_nodes__Prod__replace_with(val* self, val* p0) {
parser_nodes__Prod__replace_with(self, p0); /* Direct call parser_nodes#Prod#replace_with on <self:Object(Prod)>*/
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Visitor, nullable ANode) */
void parser_nodes__Visitor__enter_visit(val* self, val* p0) {
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
var7 = self->attrs[COLOR_parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var_old = var7;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var_e; /* _current_node on <self:Visitor> */
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Visitor__visit]))(self, var_e) /* visit on <self:Visitor>*/;
}
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var_old; /* _current_node on <self:Visitor> */
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Object, nullable ANode) */
void VIRTUAL_parser_nodes__Visitor__enter_visit(val* self, val* p0) {
parser_nodes__Visitor__enter_visit(self, p0); /* Direct call parser_nodes#Visitor#enter_visit on <self:Object(Visitor)>*/
RET_LABEL:;
}
/* method parser_nodes#Visitor#current_node for (self: Visitor): nullable ANode */
val* parser_nodes__Visitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Visitor#current_node for (self: Object): nullable ANode */
val* VIRTUAL_parser_nodes__Visitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
{ /* Inline parser_nodes#Visitor#current_node (self) on <self:Object(Visitor)> */
var3 = self->attrs[COLOR_parser_nodes__Visitor___current_node].val; /* _current_node on <self:Object(Visitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TEol#to_s for (self: TEol): String */
val* parser_nodes__TEol__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TEol#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TEol__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TEol__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenKeyword#to_s for (self: TokenKeyword): String */
val* parser_nodes__TokenKeyword__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenKeyword#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TokenKeyword__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TokenKeyword__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenOperator#to_s for (self: TokenOperator): String */
val* parser_nodes__TokenOperator__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenOperator#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TokenOperator__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TokenOperator__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TClassid#to_s for (self: TClassid): String */
val* parser_nodes__TClassid__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TClassid#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TClassid__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TClassid__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TId#to_s for (self: TId): String */
val* parser_nodes__TId__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TId#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TId__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TId__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TAttrid#to_s for (self: TAttrid): String */
val* parser_nodes__TAttrid__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TAttrid#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TAttrid__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TAttrid__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenLiteral#to_s for (self: TokenLiteral): String */
val* parser_nodes__TokenLiteral__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "\'";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TokenLiteral#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TokenLiteral__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TokenLiteral__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadString#to_s for (self: TBadString): String */
val* parser_nodes__TBadString__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadString#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TBadString__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TBadString__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadChar#to_s for (self: TBadChar): String */
val* parser_nodes__TBadChar__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = lexer_work__Token__text(self);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#TBadChar#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__TBadChar__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__TBadChar__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#EOF#to_s for (self: EOF): String */
val* parser_nodes__EOF__to_s(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#EOF#to_s for (self: Object): String */
val* VIRTUAL_parser_nodes__EOF__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__EOF__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl for (self: AModule): nullable AModuledecl */
val* parser_nodes__AModule__n_moduledecl(val* self) {
val* var /* : nullable AModuledecl */;
val* var1 /* : nullable AModuledecl */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl for (self: Object): nullable AModuledecl */
val* VIRTUAL_parser_nodes__AModule__n_moduledecl(val* self) {
val* var /* : nullable AModuledecl */;
val* var1 /* : nullable AModuledecl */;
val* var3 /* : nullable AModuledecl */;
{ /* Inline parser_nodes#AModule#n_moduledecl (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:Object(AModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_imports for (self: AModule): ANodes[AImport] */
val* parser_nodes__AModule__n_imports(val* self) {
val* var /* : ANodes[AImport] */;
val* var1 /* : ANodes[AImport] */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_imports for (self: Object): ANodes[AImport] */
val* VIRTUAL_parser_nodes__AModule__n_imports(val* self) {
val* var /* : ANodes[AImport] */;
val* var1 /* : ANodes[AImport] */;
val* var3 /* : ANodes[AImport] */;
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:Object(AModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_extern_code_blocks for (self: AModule): ANodes[AExternCodeBlock] */
val* parser_nodes__AModule__n_extern_code_blocks(val* self) {
val* var /* : ANodes[AExternCodeBlock] */;
val* var1 /* : ANodes[AExternCodeBlock] */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 858);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_extern_code_blocks for (self: Object): ANodes[AExternCodeBlock] */
val* VIRTUAL_parser_nodes__AModule__n_extern_code_blocks(val* self) {
val* var /* : ANodes[AExternCodeBlock] */;
val* var1 /* : ANodes[AExternCodeBlock] */;
val* var3 /* : ANodes[AExternCodeBlock] */;
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:Object(AModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 858);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_classdefs for (self: AModule): ANodes[AClassdef] */
val* parser_nodes__AModule__n_classdefs(val* self) {
val* var /* : ANodes[AClassdef] */;
val* var1 /* : ANodes[AClassdef] */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_classdefs for (self: Object): ANodes[AClassdef] */
val* VIRTUAL_parser_nodes__AModule__n_classdefs(val* self) {
val* var /* : ANodes[AClassdef] */;
val* var1 /* : ANodes[AClassdef] */;
val* var3 /* : ANodes[AClassdef] */;
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:Object(AModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_doc for (self: AModuledecl): nullable ADoc */
val* parser_nodes__AModuledecl__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:AModuledecl> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__AModuledecl__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
val* var3 /* : nullable ADoc */;
{ /* Inline parser_nodes#AModuledecl#n_doc (self) on <self:Object(AModuledecl)> */
var3 = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:Object(AModuledecl)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_name for (self: AModuledecl): AModuleName */
val* parser_nodes__AModuledecl__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 869);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_name for (self: Object): AModuleName */
val* VIRTUAL_parser_nodes__AModuledecl__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
val* var3 /* : AModuleName */;
{ /* Inline parser_nodes#AModuledecl#n_name (self) on <self:Object(AModuledecl)> */
var3 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:Object(AModuledecl)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 869);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_visibility for (self: AStdImport): AVisibility */
val* parser_nodes__AStdImport__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 880);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__AStdImport__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
val* var3 /* : AVisibility */;
{ /* Inline parser_nodes#AStdImport#n_visibility (self) on <self:Object(AStdImport)> */
var3 = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:Object(AStdImport)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 880);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_name for (self: AStdImport): AModuleName */
val* parser_nodes__AStdImport__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_name for (self: Object): AModuleName */
val* VIRTUAL_parser_nodes__AStdImport__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
val* var3 /* : AModuleName */;
{ /* Inline parser_nodes#AStdImport#n_name (self) on <self:Object(AStdImport)> */
var3 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:Object(AStdImport)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APublicVisibility#init for (self: APublicVisibility) */
void parser_nodes__APublicVisibility__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APublicVisibility__init]))(self) /* init on <self:APublicVisibility>*/;
}
RET_LABEL:;
}
/* method parser_nodes#APublicVisibility#init for (self: Object) */
void VIRTUAL_parser_nodes__APublicVisibility__init(val* self) {
{ /* Inline parser_nodes#APublicVisibility#init (self) on <self:Object(APublicVisibility)> */
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APublicVisibility__init]))(self) /* init on <self:Object(APublicVisibility)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#AClassdef#n_propdefs for (self: AClassdef): ANodes[APropdef] */
val* parser_nodes__AClassdef__n_propdefs(val* self) {
val* var /* : ANodes[APropdef] */;
val* var1 /* : ANodes[APropdef] */;
var1 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AClassdef#n_propdefs for (self: Object): ANodes[APropdef] */
val* VIRTUAL_parser_nodes__AClassdef__n_propdefs(val* self) {
val* var /* : ANodes[APropdef] */;
val* var1 /* : ANodes[APropdef] */;
val* var3 /* : ANodes[APropdef] */;
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:Object(AClassdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_doc for (self: AStdClassdef): nullable ADoc */
val* parser_nodes__AStdClassdef__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__AStdClassdef__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
val* var3 /* : nullable ADoc */;
{ /* Inline parser_nodes#AStdClassdef#n_doc (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:Object(AStdClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwredef for (self: AStdClassdef): nullable TKwredef */
val* parser_nodes__AStdClassdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AStdClassdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
val* var3 /* : nullable TKwredef */;
{ /* Inline parser_nodes#AStdClassdef#n_kwredef (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:Object(AStdClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_visibility for (self: AStdClassdef): AVisibility */
val* parser_nodes__AStdClassdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 937);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__AStdClassdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
val* var3 /* : AVisibility */;
{ /* Inline parser_nodes#AStdClassdef#n_visibility (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:Object(AStdClassdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 937);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_classkind for (self: AStdClassdef): AClasskind */
val* parser_nodes__AStdClassdef__n_classkind(val* self) {
val* var /* : AClasskind */;
val* var1 /* : AClasskind */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 938);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_classkind for (self: Object): AClasskind */
val* VIRTUAL_parser_nodes__AStdClassdef__n_classkind(val* self) {
val* var /* : AClasskind */;
val* var1 /* : AClasskind */;
val* var3 /* : AClasskind */;
{ /* Inline parser_nodes#AStdClassdef#n_classkind (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:Object(AStdClassdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 938);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_id for (self: AStdClassdef): nullable TClassid */
val* parser_nodes__AStdClassdef__n_id(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_id for (self: Object): nullable TClassid */
val* VIRTUAL_parser_nodes__AStdClassdef__n_id(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
val* var3 /* : nullable TClassid */;
{ /* Inline parser_nodes#AStdClassdef#n_id (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:Object(AStdClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_formaldefs for (self: AStdClassdef): ANodes[AFormaldef] */
val* parser_nodes__AStdClassdef__n_formaldefs(val* self) {
val* var /* : ANodes[AFormaldef] */;
val* var1 /* : ANodes[AFormaldef] */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_formaldefs for (self: Object): ANodes[AFormaldef] */
val* VIRTUAL_parser_nodes__AStdClassdef__n_formaldefs(val* self) {
val* var /* : ANodes[AFormaldef] */;
val* var1 /* : ANodes[AFormaldef] */;
val* var3 /* : ANodes[AFormaldef] */;
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:Object(AStdClassdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_superclasses for (self: AStdClassdef): ANodes[ASuperclass] */
val* parser_nodes__AStdClassdef__n_superclasses(val* self) {
val* var /* : ANodes[ASuperclass] */;
val* var1 /* : ANodes[ASuperclass] */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_superclasses for (self: Object): ANodes[ASuperclass] */
val* VIRTUAL_parser_nodes__AStdClassdef__n_superclasses(val* self) {
val* var /* : ANodes[ASuperclass] */;
val* var1 /* : ANodes[ASuperclass] */;
val* var3 /* : ANodes[ASuperclass] */;
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:Object(AStdClassdef)> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:Object(AStdClassdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#hot_location for (self: AStdClassdef): Location */
val* parser_nodes__AStdClassdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable TClassid */;
val* var3 /* : nullable TClassid */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline parser_nodes#AStdClassdef#n_id (self) on <self:AStdClassdef> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 944);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var1) on <var1:nullable TClassid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var1:nullable TClassid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
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
/* method parser_nodes#AStdClassdef#hot_location for (self: Object): Location */
val* VIRTUAL_parser_nodes__AStdClassdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = parser_nodes__AStdClassdef__hot_location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_id for (self: AFormaldef): TClassid */
val* parser_nodes__AFormaldef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 997);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_id for (self: Object): TClassid */
val* VIRTUAL_parser_nodes__AFormaldef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
{ /* Inline parser_nodes#AFormaldef#n_id (self) on <self:Object(AFormaldef)> */
var3 = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:Object(AFormaldef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 997);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_type for (self: AFormaldef): nullable AType */
val* parser_nodes__AFormaldef__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AFormaldef__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
{ /* Inline parser_nodes#AFormaldef#n_type (self) on <self:Object(AFormaldef)> */
var3 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:Object(AFormaldef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_type for (self: ASuperclass): AType */
val* parser_nodes__ASuperclass__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1006);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ASuperclass__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
{ /* Inline parser_nodes#ASuperclass#n_type (self) on <self:Object(ASuperclass)> */
var3 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:Object(ASuperclass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1006);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_doc for (self: APropdef): nullable ADoc */
val* parser_nodes__APropdef__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__APropdef__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
val* var3 /* : nullable ADoc */;
{ /* Inline parser_nodes#APropdef#n_doc (self) on <self:Object(APropdef)> */
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:Object(APropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_kwredef for (self: APropdef): nullable TKwredef */
val* parser_nodes__APropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__APropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
val* var3 /* : nullable TKwredef */;
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:Object(APropdef)> */
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:Object(APropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_visibility for (self: APropdef): nullable AVisibility */
val* parser_nodes__APropdef__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_visibility for (self: Object): nullable AVisibility */
val* VIRTUAL_parser_nodes__APropdef__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
val* var3 /* : nullable AVisibility */;
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:Object(APropdef)> */
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:Object(APropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: AAttrPropdef): TId */
val* parser_nodes__AAttrPropdef__n_id2(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1023);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: Object): TId */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_id2(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
val* var3 /* : TId */;
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:Object(AAttrPropdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1023);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_type for (self: AAttrPropdef): nullable AType */
val* parser_nodes__AAttrPropdef__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_expr for (self: AAttrPropdef): nullable AExpr */
val* parser_nodes__AAttrPropdef__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_block for (self: AAttrPropdef): nullable AExpr */
val* parser_nodes__AAttrPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#hot_location for (self: AAttrPropdef): Location */
val* parser_nodes__AAttrPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1023);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var1) on <var1:TId> */
var6 = var1->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var1:TId> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
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
/* method parser_nodes#AAttrPropdef#hot_location for (self: Object): Location */
val* VIRTUAL_parser_nodes__AAttrPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = parser_nodes__AAttrPropdef__hot_location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwinit for (self: AMethPropdef): nullable TKwinit */
val* parser_nodes__AMethPropdef__n_kwinit(val* self) {
val* var /* : nullable TKwinit */;
val* var1 /* : nullable TKwinit */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwinit for (self: Object): nullable TKwinit */
val* VIRTUAL_parser_nodes__AMethPropdef__n_kwinit(val* self) {
val* var /* : nullable TKwinit */;
val* var1 /* : nullable TKwinit */;
val* var3 /* : nullable TKwinit */;
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwnew for (self: AMethPropdef): nullable TKwnew */
val* parser_nodes__AMethPropdef__n_kwnew(val* self) {
val* var /* : nullable TKwnew */;
val* var1 /* : nullable TKwnew */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwnew for (self: Object): nullable TKwnew */
val* VIRTUAL_parser_nodes__AMethPropdef__n_kwnew(val* self) {
val* var /* : nullable TKwnew */;
val* var1 /* : nullable TKwnew */;
val* var3 /* : nullable TKwnew */;
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_methid for (self: AMethPropdef): nullable AMethid */
val* parser_nodes__AMethPropdef__n_methid(val* self) {
val* var /* : nullable AMethid */;
val* var1 /* : nullable AMethid */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_methid for (self: Object): nullable AMethid */
val* VIRTUAL_parser_nodes__AMethPropdef__n_methid(val* self) {
val* var /* : nullable AMethid */;
val* var1 /* : nullable AMethid */;
val* var3 /* : nullable AMethid */;
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_signature for (self: AMethPropdef): nullable ASignature */
val* parser_nodes__AMethPropdef__n_signature(val* self) {
val* var /* : nullable ASignature */;
val* var1 /* : nullable ASignature */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_signature for (self: Object): nullable ASignature */
val* VIRTUAL_parser_nodes__AMethPropdef__n_signature(val* self) {
val* var /* : nullable ASignature */;
val* var1 /* : nullable ASignature */;
val* var3 /* : nullable ASignature */;
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_block for (self: AMethPropdef): nullable AExpr */
val* parser_nodes__AMethPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AMethPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block for (self: AMethPropdef): nullable AExternCodeBlock */
val* parser_nodes__AMethPropdef__n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block for (self: Object): nullable AExternCodeBlock */
val* VIRTUAL_parser_nodes__AMethPropdef__n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
val* var3 /* : nullable AExternCodeBlock */;
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:Object(AMethPropdef)> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:Object(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#hot_location for (self: AMethPropdef): Location */
val* parser_nodes__AMethPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable AMethid */;
val* var3 /* : nullable AMethid */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AMethid */;
val* var13 /* : nullable AMethid */;
val* var14 /* : Location */;
val* var16 /* : Location */;
val* var17 /* : nullable TKwinit */;
val* var19 /* : nullable TKwinit */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable TKwinit */;
val* var29 /* : nullable TKwinit */;
val* var30 /* : Location */;
val* var32 /* : Location */;
val* var33 /* : nullable TKwnew */;
val* var35 /* : nullable TKwnew */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable TKwnew */;
val* var45 /* : nullable TKwnew */;
val* var46 /* : Location */;
val* var48 /* : Location */;
val* var49 /* : Location */;
val* var51 /* : Location */;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
var9 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable AMethid(AMethid)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var13 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1053);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var11) on <var11:nullable AMethid> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var16 = var11->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var11:nullable AMethid> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var19 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = NULL;
if (var17 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var17,var20) on <var17:nullable TKwinit> */
var_other = var20;
{
var25 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_other) /* == on <var17:nullable TKwinit(TKwinit)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var29 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1055);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var27) on <var27:nullable TKwinit> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var32 = var27->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var27:nullable TKwinit> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var = var30;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var35 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = NULL;
if (var33 == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var33,var36) on <var33:nullable TKwnew> */
var_other = var36;
{
var41 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var_other) /* == on <var33:nullable TKwnew(TKwnew)>*/;
var40 = var41;
}
var42 = !var40;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var45 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1057);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var43) on <var43:nullable TKwnew> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var48 = var43->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var43:nullable TKwnew> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var = var46;
goto RET_LABEL;
} else {
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var51 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var = var49;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#hot_location for (self: Object): Location */
val* VIRTUAL_parser_nodes__AMethPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = parser_nodes__AMethPropdef__hot_location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_extern_calls for (self: AExternCalls): ANodes[AExternCall] */
val* parser_nodes__AExternCalls__n_extern_calls(val* self) {
val* var /* : ANodes[AExternCall] */;
val* var1 /* : ANodes[AExternCall] */;
var1 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1073);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_extern_calls for (self: Object): ANodes[AExternCall] */
val* VIRTUAL_parser_nodes__AExternCalls__n_extern_calls(val* self) {
val* var /* : ANodes[AExternCall] */;
val* var1 /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:Object(AExternCalls)> */
var3 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:Object(AExternCalls)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1073);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_id for (self: ATypePropdef): TClassid */
val* parser_nodes__ATypePropdef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1147);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_id for (self: Object): TClassid */
val* VIRTUAL_parser_nodes__ATypePropdef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:Object(ATypePropdef)> */
var3 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:Object(ATypePropdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1147);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_type for (self: ATypePropdef): AType */
val* parser_nodes__ATypePropdef__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1148);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ATypePropdef__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:Object(ATypePropdef)> */
var3 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:Object(ATypePropdef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1148);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIdMethid#n_id for (self: AIdMethid): TId */
val* parser_nodes__AIdMethid__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1160);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIdMethid#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AIdMethid__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
val* var3 /* : TId */;
{ /* Inline parser_nodes#AIdMethid#n_id (self) on <self:Object(AIdMethid)> */
var3 = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:Object(AIdMethid)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1160);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_params for (self: ASignature): ANodes[AParam] */
val* parser_nodes__ASignature__n_params(val* self) {
val* var /* : ANodes[AParam] */;
val* var1 /* : ANodes[AParam] */;
var1 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_params for (self: Object): ANodes[AParam] */
val* VIRTUAL_parser_nodes__ASignature__n_params(val* self) {
val* var /* : ANodes[AParam] */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:Object(ASignature)> */
var3 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:Object(ASignature)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_type for (self: ASignature): nullable AType */
val* parser_nodes__ASignature__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__ASignature__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:Object(ASignature)> */
var3 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:Object(ASignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_id for (self: AParam): TId */
val* parser_nodes__AParam__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1287);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AParam__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
val* var3 /* : TId */;
{ /* Inline parser_nodes#AParam#n_id (self) on <self:Object(AParam)> */
var3 = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:Object(AParam)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1287);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_type for (self: AParam): nullable AType */
val* parser_nodes__AParam__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AParam__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
{ /* Inline parser_nodes#AParam#n_type (self) on <self:Object(AParam)> */
var3 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:Object(AParam)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_dotdotdot for (self: AParam): nullable TDotdotdot */
val* parser_nodes__AParam__n_dotdotdot(val* self) {
val* var /* : nullable TDotdotdot */;
val* var1 /* : nullable TDotdotdot */;
var1 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_dotdotdot for (self: Object): nullable TDotdotdot */
val* VIRTUAL_parser_nodes__AParam__n_dotdotdot(val* self) {
val* var /* : nullable TDotdotdot */;
val* var1 /* : nullable TDotdotdot */;
val* var3 /* : nullable TDotdotdot */;
{ /* Inline parser_nodes#AParam#n_dotdotdot (self) on <self:Object(AParam)> */
var3 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:Object(AParam)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_kwnullable for (self: AType): nullable TKwnullable */
val* parser_nodes__AType__n_kwnullable(val* self) {
val* var /* : nullable TKwnullable */;
val* var1 /* : nullable TKwnullable */;
var1 = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_kwnullable for (self: Object): nullable TKwnullable */
val* VIRTUAL_parser_nodes__AType__n_kwnullable(val* self) {
val* var /* : nullable TKwnullable */;
val* var1 /* : nullable TKwnullable */;
val* var3 /* : nullable TKwnullable */;
{ /* Inline parser_nodes#AType#n_kwnullable (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:Object(AType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_id for (self: AType): TClassid */
val* parser_nodes__AType__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1297);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_id for (self: Object): TClassid */
val* VIRTUAL_parser_nodes__AType__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
{ /* Inline parser_nodes#AType#n_id (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:Object(AType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1297);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_types for (self: AType): ANodes[AType] */
val* parser_nodes__AType__n_types(val* self) {
val* var /* : ANodes[AType] */;
val* var1 /* : ANodes[AType] */;
var1 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_types for (self: Object): ANodes[AType] */
val* VIRTUAL_parser_nodes__AType__n_types(val* self) {
val* var /* : ANodes[AType] */;
val* var1 /* : ANodes[AType] */;
val* var3 /* : ANodes[AType] */;
{ /* Inline parser_nodes#AType#n_types (self) on <self:Object(AType)> */
var3 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:Object(AType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id for (self: ALabel): nullable TId */
val* parser_nodes__ALabel__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__ALabel__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
val* var3 /* : nullable TId */;
{ /* Inline parser_nodes#ALabel#n_id (self) on <self:Object(ALabel)> */
var3 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:Object(ALabel)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#init for (self: ALabel) */
void parser_nodes__ALabel__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabel__init]))(self) /* init on <self:ALabel>*/;
}
RET_LABEL:;
}
/* method parser_nodes#ALabel#init for (self: Object) */
void VIRTUAL_parser_nodes__ALabel__init(val* self) {
{ /* Inline parser_nodes#ALabel#init (self) on <self:Object(ALabel)> */
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabel__init]))(self) /* init on <self:Object(ALabel)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#n_expr for (self: ABlockExpr): ANodes[AExpr] */
val* parser_nodes__ABlockExpr__n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_expr for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__ABlockExpr__n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:Object(ABlockExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:Object(ABlockExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_id for (self: AVardeclExpr): TId */
val* parser_nodes__AVardeclExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1329);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
val* var3 /* : TId */;
{ /* Inline parser_nodes#AVardeclExpr#n_id (self) on <self:Object(AVardeclExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:Object(AVardeclExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1329);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_type for (self: AVardeclExpr): nullable AType */
val* parser_nodes__AVardeclExpr__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
{ /* Inline parser_nodes#AVardeclExpr#n_type (self) on <self:Object(AVardeclExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:Object(AVardeclExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_expr for (self: AVardeclExpr): nullable AExpr */
val* parser_nodes__AVardeclExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:Object(AVardeclExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:Object(AVardeclExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_expr for (self: AReturnExpr): nullable AExpr */
val* parser_nodes__AReturnExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AReturnExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:Object(AReturnExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:Object(AReturnExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabelable#n_label for (self: ALabelable): nullable ALabel */
val* parser_nodes__ALabelable__n_label(val* self) {
val* var /* : nullable ALabel */;
val* var1 /* : nullable ALabel */;
var1 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALabelable> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabelable#n_label for (self: Object): nullable ALabel */
val* VIRTUAL_parser_nodes__ALabelable__n_label(val* self) {
val* var /* : nullable ALabel */;
val* var1 /* : nullable ALabel */;
val* var3 /* : nullable ALabel */;
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:Object(ALabelable)> */
var3 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:Object(ALabelable)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEscapeExpr#n_expr for (self: AEscapeExpr): nullable AExpr */
val* parser_nodes__AEscapeExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEscapeExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AEscapeExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:Object(AEscapeExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:Object(AEscapeExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_block for (self: ADoExpr): nullable AExpr */
val* parser_nodes__ADoExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__ADoExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:Object(ADoExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:Object(ADoExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_expr for (self: AIfExpr): AExpr */
val* parser_nodes__AIfExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1387);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:Object(AIfExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:Object(AIfExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1387);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_then for (self: AIfExpr): nullable AExpr */
val* parser_nodes__AIfExpr__n_then(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_then for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AIfExpr__n_then(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:Object(AIfExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:Object(AIfExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_else for (self: AIfExpr): nullable AExpr */
val* parser_nodes__AIfExpr__n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_else for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AIfExpr__n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:Object(AIfExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:Object(AIfExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_expr for (self: AIfexprExpr): AExpr */
val* parser_nodes__AIfexprExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1396);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:Object(AIfexprExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:Object(AIfexprExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1396);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_then for (self: AIfexprExpr): AExpr */
val* parser_nodes__AIfexprExpr__n_then(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1398);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_then for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_then(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:Object(AIfexprExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:Object(AIfexprExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1398);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_else for (self: AIfexprExpr): AExpr */
val* parser_nodes__AIfexprExpr__n_else(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1400);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_else for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_else(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:Object(AIfexprExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:Object(AIfexprExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1400);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_expr for (self: AWhileExpr): AExpr */
val* parser_nodes__AWhileExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1408);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AWhileExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:Object(AWhileExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:Object(AWhileExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1408);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_block for (self: AWhileExpr): nullable AExpr */
val* parser_nodes__AWhileExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AWhileExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:Object(AWhileExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:Object(AWhileExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_block for (self: ALoopExpr): nullable AExpr */
val* parser_nodes__ALoopExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__ALoopExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:Object(ALoopExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:Object(ALoopExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_ids for (self: AForExpr): ANodes[TId] */
val* parser_nodes__AForExpr__n_ids(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1426);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_ids for (self: Object): ANodes[TId] */
val* VIRTUAL_parser_nodes__AForExpr__n_ids(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:Object(AForExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1426);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr for (self: AForExpr): AExpr */
val* parser_nodes__AForExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1427);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AForExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:Object(AForExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1427);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_block for (self: AForExpr): nullable AExpr */
val* parser_nodes__AForExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AForExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_id for (self: AAssertExpr): nullable TId */
val* parser_nodes__AAssertExpr__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_id for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__AAssertExpr__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
val* var3 /* : nullable TId */;
{ /* Inline parser_nodes#AAssertExpr#n_id (self) on <self:Object(AAssertExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:Object(AAssertExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_expr for (self: AAssertExpr): AExpr */
val* parser_nodes__AAssertExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1437);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAssertExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:Object(AAssertExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:Object(AAssertExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1437);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_else for (self: AAssertExpr): nullable AExpr */
val* parser_nodes__AAssertExpr__n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_else for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AAssertExpr__n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:Object(AAssertExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:Object(AAssertExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_assign for (self: AAssignFormExpr): TAssign */
val* parser_nodes__AAssignFormExpr__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAssignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1444);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_assign for (self: Object): TAssign */
val* VIRTUAL_parser_nodes__AAssignFormExpr__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
val* var3 /* : TAssign */;
{ /* Inline parser_nodes#AAssignFormExpr#n_assign (self) on <self:Object(AAssignFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:Object(AAssignFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1444);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_value for (self: AAssignFormExpr): AExpr */
val* parser_nodes__AAssignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAssignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_value for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAssignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:Object(AAssignFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:Object(AAssignFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op for (self: AReassignFormExpr): AAssignOp */
val* parser_nodes__AReassignFormExpr__n_assign_op(val* self) {
val* var /* : AAssignOp */;
val* var1 /* : AAssignOp */;
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1451);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op for (self: Object): AAssignOp */
val* VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op(val* self) {
val* var /* : AAssignOp */;
val* var1 /* : AAssignOp */;
val* var3 /* : AAssignOp */;
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:Object(AReassignFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:Object(AReassignFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1451);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_value for (self: AReassignFormExpr): AExpr */
val* parser_nodes__AReassignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_value for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AReassignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:Object(AReassignFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:Object(AReassignFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_expr for (self: AOnceExpr): AExpr */
val* parser_nodes__AOnceExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1459);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOnceExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:Object(AOnceExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:Object(AOnceExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1459);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASendExpr#n_expr for (self: ASendExpr): AExpr */
val* parser_nodes__ASendExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASendExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ASendExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:Object(ASendExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:Object(ASendExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_expr2 for (self: ABinopExpr): AExpr */
val* parser_nodes__ABinopExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1473);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ABinopExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (self) on <self:Object(ABinopExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:Object(ABinopExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1473);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr for (self: AOrExpr): AExpr */
val* parser_nodes__AOrExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1486);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AOrExpr#n_expr (self) on <self:Object(AOrExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:Object(AOrExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1486);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr2 for (self: AOrExpr): AExpr */
val* parser_nodes__AOrExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1487);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AOrExpr#n_expr2 (self) on <self:Object(AOrExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:Object(AOrExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1487);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr for (self: AAndExpr): AExpr */
val* parser_nodes__AAndExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1493);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAndExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAndExpr#n_expr (self) on <self:Object(AAndExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:Object(AAndExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1493);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr2 for (self: AAndExpr): AExpr */
val* parser_nodes__AAndExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1494);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAndExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAndExpr#n_expr2 (self) on <self:Object(AAndExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:Object(AAndExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1494);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr for (self: AOrElseExpr): AExpr */
val* parser_nodes__AOrElseExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1500);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrElseExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AOrElseExpr#n_expr (self) on <self:Object(AOrElseExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:Object(AOrElseExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1500);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr2 for (self: AOrElseExpr): AExpr */
val* parser_nodes__AOrElseExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1501);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrElseExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AOrElseExpr#n_expr2 (self) on <self:Object(AOrElseExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:Object(AOrElseExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1501);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr for (self: AImpliesExpr): AExpr */
val* parser_nodes__AImpliesExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1507);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AImpliesExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AImpliesExpr#n_expr (self) on <self:Object(AImpliesExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:Object(AImpliesExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1507);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr2 for (self: AImpliesExpr): AExpr */
val* parser_nodes__AImpliesExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1508);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AImpliesExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AImpliesExpr#n_expr2 (self) on <self:Object(AImpliesExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:Object(AImpliesExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1508);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_expr for (self: ANotExpr): AExpr */
val* parser_nodes__ANotExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1515);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ANotExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:Object(ANotExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:Object(ANotExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1515);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr for (self: AIsaExpr): AExpr */
val* parser_nodes__AIsaExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1561);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIsaExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:Object(AIsaExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:Object(AIsaExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1561);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_type for (self: AIsaExpr): AType */
val* parser_nodes__AIsaExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1562);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AIsaExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
{ /* Inline parser_nodes#AIsaExpr#n_type (self) on <self:Object(AIsaExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:Object(AIsaExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1562);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_type for (self: ANewExpr): AType */
val* parser_nodes__ANewExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1610);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ANewExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
{ /* Inline parser_nodes#ANewExpr#n_type (self) on <self:Object(ANewExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:Object(ANewExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1610);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_id for (self: ANewExpr): nullable TId */
val* parser_nodes__ANewExpr__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_id for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__ANewExpr__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
val* var3 /* : nullable TId */;
{ /* Inline parser_nodes#ANewExpr#n_id (self) on <self:Object(ANewExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:Object(ANewExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_args for (self: ANewExpr): AExprs */
val* parser_nodes__ANewExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ANewExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:Object(ANewExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:Object(ANewExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_expr for (self: AAttrFormExpr): AExpr */
val* parser_nodes__AAttrFormExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAttrFormExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:Object(AAttrFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:Object(AAttrFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_id for (self: AAttrFormExpr): TAttrid */
val* parser_nodes__AAttrFormExpr__n_id(val* self) {
val* var /* : TAttrid */;
val* var1 /* : TAttrid */;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1624);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_id for (self: Object): TAttrid */
val* VIRTUAL_parser_nodes__AAttrFormExpr__n_id(val* self) {
val* var /* : TAttrid */;
val* var1 /* : TAttrid */;
val* var3 /* : TAttrid */;
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:Object(AAttrFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:Object(AAttrFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1624);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_id for (self: ACallFormExpr): TId */
val* parser_nodes__ACallFormExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__ACallFormExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
val* var3 /* : TId */;
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:Object(ACallFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:Object(ACallFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_args for (self: ACallFormExpr): AExprs */
val* parser_nodes__ACallFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ACallFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:Object(ACallFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:Object(ACallFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args for (self: ASuperExpr): AExprs */
val* parser_nodes__ASuperExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1691);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ASuperExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:Object(ASuperExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:Object(ASuperExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1691);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args for (self: AInitExpr): AExprs */
val* parser_nodes__AInitExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1699);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__AInitExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
{ /* Inline parser_nodes#AInitExpr#n_args (self) on <self:Object(AInitExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:Object(AInitExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1699);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: ABraFormExpr): AExprs */
val* parser_nodes__ABraFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1705);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ABraFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
{ /* Inline parser_nodes#ABraFormExpr#n_args (self) on <self:Object(ABraFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:Object(ABraFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1705);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: ARangeExpr): AExpr */
val* parser_nodes__ARangeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ARangeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:Object(ARangeExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:Object(ARangeExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: ARangeExpr): AExpr */
val* parser_nodes__ARangeExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ARangeExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:Object(ARangeExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:Object(ARangeExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: AArrayExpr): AExprs */
val* parser_nodes__AArrayExpr__n_exprs(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1776);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__AArrayExpr__n_exprs(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:Object(AArrayExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:Object(AArrayExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1776);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_type for (self: AArrayExpr): nullable AType */
val* parser_nodes__AArrayExpr__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AArrayExpr__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
val* var3 /* : nullable AType */;
{ /* Inline parser_nodes#AArrayExpr#n_type (self) on <self:Object(AArrayExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:Object(AArrayExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASelfExpr#init for (self: ASelfExpr) */
void parser_nodes__ASelfExpr__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASelfExpr__init]))(self) /* init on <self:ASelfExpr>*/;
}
RET_LABEL:;
}
/* method parser_nodes#ASelfExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASelfExpr__init(val* self) {
{ /* Inline parser_nodes#ASelfExpr#init (self) on <self:Object(ASelfExpr)> */
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASelfExpr__init]))(self) /* init on <self:Object(ASelfExpr)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ADecIntExpr#n_number for (self: ADecIntExpr): TNumber */
val* parser_nodes__ADecIntExpr__n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1814);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADecIntExpr#n_number for (self: Object): TNumber */
val* VIRTUAL_parser_nodes__ADecIntExpr__n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
val* var3 /* : TNumber */;
{ /* Inline parser_nodes#ADecIntExpr#n_number (self) on <self:Object(ADecIntExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:Object(ADecIntExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1814);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AHexIntExpr#n_hex_number for (self: AHexIntExpr): THexNumber */
val* parser_nodes__AHexIntExpr__n_hex_number(val* self) {
val* var /* : THexNumber */;
val* var1 /* : THexNumber */;
var1 = self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1819);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AHexIntExpr#n_hex_number for (self: Object): THexNumber */
val* VIRTUAL_parser_nodes__AHexIntExpr__n_hex_number(val* self) {
val* var /* : THexNumber */;
val* var1 /* : THexNumber */;
val* var3 /* : THexNumber */;
{ /* Inline parser_nodes#AHexIntExpr#n_hex_number (self) on <self:Object(AHexIntExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:Object(AHexIntExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1819);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float for (self: AFloatExpr): TFloat */
val* parser_nodes__AFloatExpr__n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
var1 = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1824);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float for (self: Object): TFloat */
val* VIRTUAL_parser_nodes__AFloatExpr__n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
val* var3 /* : TFloat */;
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:Object(AFloatExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:Object(AFloatExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1824);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char for (self: ACharExpr): TChar */
val* parser_nodes__ACharExpr__n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
var1 = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1829);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char for (self: Object): TChar */
val* VIRTUAL_parser_nodes__ACharExpr__n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
val* var3 /* : TChar */;
{ /* Inline parser_nodes#ACharExpr#n_char (self) on <self:Object(ACharExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:Object(ACharExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1829);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: AStringFormExpr): Token */
val* parser_nodes__AStringFormExpr__n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1834);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: Object): Token */
val* VIRTUAL_parser_nodes__AStringFormExpr__n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var3 /* : Token */;
{ /* Inline parser_nodes#AStringFormExpr#n_string (self) on <self:Object(AStringFormExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:Object(AStringFormExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1834);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperstringExpr#n_exprs for (self: ASuperstringExpr): ANodes[AExpr] */
val* parser_nodes__ASuperstringExpr__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1861);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperstringExpr#n_exprs for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__ASuperstringExpr__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:Object(ASuperstringExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:Object(ASuperstringExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1861);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_expr for (self: AParExpr): AExpr */
val* parser_nodes__AParExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1868);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AParExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:Object(AParExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:Object(AParExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1868);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_expr for (self: AAsCastExpr): AExpr */
val* parser_nodes__AAsCastExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1875);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAsCastExpr#n_expr (self) on <self:Object(AAsCastExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:Object(AAsCastExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1875);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: AAsCastExpr): AType */
val* parser_nodes__AAsCastExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1878);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
{ /* Inline parser_nodes#AAsCastExpr#n_type (self) on <self:Object(AAsCastExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:Object(AAsCastExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1878);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_expr for (self: AAsNotnullExpr): AExpr */
val* parser_nodes__AAsNotnullExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1885);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AAsNotnullExpr#n_expr (self) on <self:Object(AAsNotnullExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:Object(AAsNotnullExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1885);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarargExpr#n_expr for (self: AVarargExpr): AExpr */
val* parser_nodes__AVarargExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1902);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarargExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AVarargExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#AVarargExpr#n_expr (self) on <self:Object(AVarargExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:Object(AVarargExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1902);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AManyExpr#n_exprs for (self: AManyExpr): ANodes[AExpr] */
val* parser_nodes__AManyExpr__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1909);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AManyExpr#n_exprs for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__AManyExpr__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:Object(AManyExpr)> */
var3 = self->attrs[COLOR_parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:Object(AManyExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1909);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: ADebugTypeExpr): AExpr */
val* parser_nodes__ADebugTypeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1939);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
{ /* Inline parser_nodes#ADebugTypeExpr#n_expr (self) on <self:Object(ADebugTypeExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:Object(ADebugTypeExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1939);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: ADebugTypeExpr): AType */
val* parser_nodes__ADebugTypeExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1940);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
{ /* Inline parser_nodes#ADebugTypeExpr#n_type (self) on <self:Object(ADebugTypeExpr)> */
var3 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:Object(ADebugTypeExpr)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1940);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#n_exprs for (self: AExprs): ANodes[AExpr] */
val* parser_nodes__AExprs__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#n_exprs for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__AExprs__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:Object(AExprs)> */
var3 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:Object(AExprs)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad for (self: AModuleName): nullable TQuad */
val* parser_nodes__AModuleName__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad for (self: Object): nullable TQuad */
val* VIRTUAL_parser_nodes__AModuleName__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
val* var3 /* : nullable TQuad */;
{ /* Inline parser_nodes#AModuleName#n_quad (self) on <self:Object(AModuleName)> */
var3 = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:Object(AModuleName)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_path for (self: AModuleName): ANodes[TId] */
val* parser_nodes__AModuleName__n_path(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1989);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_path for (self: Object): ANodes[TId] */
val* VIRTUAL_parser_nodes__AModuleName__n_path(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:Object(AModuleName)> */
var3 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:Object(AModuleName)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1989);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id for (self: AModuleName): TId */
val* parser_nodes__AModuleName__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1990);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AModuleName__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
val* var3 /* : TId */;
{ /* Inline parser_nodes#AModuleName#n_id (self) on <self:Object(AModuleName)> */
var3 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:Object(AModuleName)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1990);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_id for (self: AQualified): ANodes[TId] */
val* parser_nodes__AQualified__n_id(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2011);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_id for (self: Object): ANodes[TId] */
val* VIRTUAL_parser_nodes__AQualified__n_id(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
{ /* Inline parser_nodes#AQualified#n_id (self) on <self:Object(AQualified)> */
var3 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:Object(AQualified)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2011);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoc#n_comment for (self: ADoc): ANodes[TComment] */
val* parser_nodes__ADoc__n_comment(val* self) {
val* var /* : ANodes[TComment] */;
val* var1 /* : ANodes[TComment] */;
var1 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2019);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoc#n_comment for (self: Object): ANodes[TComment] */
val* VIRTUAL_parser_nodes__ADoc__n_comment(val* self) {
val* var /* : ANodes[TComment] */;
val* var1 /* : ANodes[TComment] */;
val* var3 /* : ANodes[TComment] */;
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:Object(ADoc)> */
var3 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:Object(ADoc)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2019);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_items for (self: AAnnotations): ANodes[AAnnotation] */
val* parser_nodes__AAnnotations__n_items(val* self) {
val* var /* : ANodes[AAnnotation] */;
val* var1 /* : ANodes[AAnnotation] */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2027);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_items for (self: Object): ANodes[AAnnotation] */
val* VIRTUAL_parser_nodes__AAnnotations__n_items(val* self) {
val* var /* : ANodes[AAnnotation] */;
val* var1 /* : ANodes[AAnnotation] */;
val* var3 /* : ANodes[AAnnotation] */;
{ /* Inline parser_nodes#AAnnotations#n_items (self) on <self:Object(AAnnotations)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:Object(AAnnotations)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2027);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_doc for (self: AAnnotation): nullable ADoc */
val* parser_nodes__AAnnotation__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val; /* _n_doc on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__AAnnotation__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
val* var3 /* : nullable ADoc */;
{ /* Inline parser_nodes#AAnnotation#n_doc (self) on <self:Object(AAnnotation)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val; /* _n_doc on <self:Object(AAnnotation)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_kwredef for (self: AAnnotation): nullable TKwredef */
val* parser_nodes__AAnnotation__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AAnnotation__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
val* var3 /* : nullable TKwredef */;
{ /* Inline parser_nodes#AAnnotation#n_kwredef (self) on <self:Object(AAnnotation)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val; /* _n_kwredef on <self:Object(AAnnotation)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_visibility for (self: AAnnotation): nullable AVisibility */
val* parser_nodes__AAnnotation__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_visibility for (self: Object): nullable AVisibility */
val* VIRTUAL_parser_nodes__AAnnotation__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
val* var3 /* : nullable AVisibility */;
{ /* Inline parser_nodes#AAnnotation#n_visibility (self) on <self:Object(AAnnotation)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val; /* _n_visibility on <self:Object(AAnnotation)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid for (self: AAnnotation): AAtid */
val* parser_nodes__AAnnotation__n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2037);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid for (self: Object): AAtid */
val* VIRTUAL_parser_nodes__AAnnotation__n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
val* var3 /* : AAtid */;
{ /* Inline parser_nodes#AAnnotation#n_atid (self) on <self:Object(AAnnotation)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:Object(AAnnotation)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2037);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args for (self: AAnnotation): ANodes[AExpr] */
val* parser_nodes__AAnnotation__n_args(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2039);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__AAnnotation__n_args(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:Object(AAnnotation)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:Object(AAnnotation)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2039);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#init for (self: AAnnotation) */
void parser_nodes__AAnnotation__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAnnotation__init]))(self) /* init on <self:AAnnotation>*/;
}
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#init for (self: Object) */
void VIRTUAL_parser_nodes__AAnnotation__init(val* self) {
{ /* Inline parser_nodes#AAnnotation#init (self) on <self:Object(AAnnotation)> */
{
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAnnotation__init]))(self) /* init on <self:Object(AAnnotation)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#AAtid#n_id for (self: AAtid): Token */
val* parser_nodes__AAtid__n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AAtid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2046);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id for (self: Object): Token */
val* VIRTUAL_parser_nodes__AAtid__n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var3 /* : Token */;
{ /* Inline parser_nodes#AAtid#n_id (self) on <self:Object(AAtid)> */
var3 = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:Object(AAtid)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2046);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base for (self: Start): nullable AModule */
val* parser_nodes__Start__n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base for (self: Object): nullable AModule */
val* VIRTUAL_parser_nodes__Start__n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
val* var3 /* : nullable AModule */;
{ /* Inline parser_nodes#Start#n_base (self) on <self:Object(Start)> */
var3 = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Object(Start)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof for (self: Start): EOF */
val* parser_nodes__Start__n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
var1 = self->attrs[COLOR_parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2073);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof for (self: Object): EOF */
val* VIRTUAL_parser_nodes__Start__n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
val* var3 /* : EOF */;
{ /* Inline parser_nodes#Start#n_eof (self) on <self:Object(Start)> */
var3 = self->attrs[COLOR_parser_nodes__Start___n_eof].val; /* _n_eof on <self:Object(Start)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2073);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#init for (self: Start, nullable AModule, EOF) */
void parser_nodes__Start__init(val* self, val* p0, val* p1) {
val* var_n_base /* var n_base: nullable AModule */;
val* var_n_eof /* var n_eof: EOF */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:Start>*/;
}
var_n_base = p0;
var_n_eof = p1;
self->attrs[COLOR_parser_nodes__Start___n_base].val = var_n_base; /* _n_base on <self:Start> */
self->attrs[COLOR_parser_nodes__Start___n_eof].val = var_n_eof; /* _n_eof on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#init for (self: Object, nullable AModule, EOF) */
void VIRTUAL_parser_nodes__Start__init(val* self, val* p0, val* p1) {
parser_nodes__Start__init(self, p0, p1); /* Direct call parser_nodes#Start#init on <self:Object(Start)>*/
RET_LABEL:;
}
