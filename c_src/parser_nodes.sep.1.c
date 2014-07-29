#include "parser_nodes.sep.0.h"
/* method parser_nodes#ANode#location for (self: ANode): Location */
val* parser_nodes__ANode__location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 27);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#location for (self: Object): Location */
val* VIRTUAL_parser_nodes__ANode__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = parser_nodes__ANode__location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#hot_location for (self: ANode): Location */
val* parser_nodes__ANode__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
{
var1 = parser_nodes__ANode__location(self);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 533);
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
/* method parser_nodes#ANode#init for (self: ANode) */
void parser_nodes__ANode__init(val* self) {
RET_LABEL:;
}
/* method parser_nodes#ANode#init for (self: Object) */
void VIRTUAL_parser_nodes__ANode__init(val* self) {
{ /* Inline parser_nodes#ANode#init (self) on <self:Object(ANode)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: ANode, ANode, nullable ANode) */
void parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 96);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
{ /* Inline parser_nodes#ANode#replace_child (self,p0,p1) on <self:Object(ANode)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 96);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 117);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 118);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 122);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_nodes__ANode__visit_all(val* self, val* p0) {
const char* var_class_name;
{ /* Inline parser_nodes#ANode#visit_all (self,p0) on <self:Object(ANode)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 122);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 131);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 131);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#items for (self: ANodes[ANode]): Array[ANode] */
val* parser_nodes__ANodes__items(val* self) {
val* var /* : Array[ANode] */;
val* var1 /* : Array[ANode] */;
var1 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArrayRead__length(var1);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
/* Covariant cast for argument 0 (e) <p0:ANode> isa Sequence#0 */
/* <p0:ANode> isa Sequence#0 */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 136);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
/* Covariant cast for argument 0 (e) <p0:ANode> isa Sequence#0 */
/* <p0:ANode> isa Sequence#0 */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 147);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
/* Covariant cast for argument 0 (e) <p0:ANode> isa Collection#0 */
/* <p0:ANode> isa Collection#0 */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 158);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#items (self) on <self:ANodes[ANode]> */
var4 = self->attrs[COLOR_parser_nodes__ANodes___items].val; /* _items on <self:ANodes[ANode]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
/* Covariant cast for argument 1 (e) <p1:ANode> isa Sequence#0 */
/* <p1:ANode> isa Sequence#0 */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
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
/* Covariant cast for argument 0 (e) <p0:ANode> isa ANodes#0 */
/* <p0:ANode> isa ANodes#0 */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ANodes#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 177);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 131);
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
/* Covariant cast for argument 0 (e) <p0:ANode> isa ANodes#0 */
/* <p0:ANode> isa ANodes#0 */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ANodes#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 182);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 131);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 184);
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
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
var_nodes = p0;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var2 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 131);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_parent = var;
{
var3 = ((val* (*)(val*))(var_nodes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_nodes) /* iterator on <var_nodes:Collection[Object]>*/;
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
}
var_n = var5;
/* <var_n:Object> isa ANodes#0 */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__ANodes_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_n->type->table_size) {
var6 = 0;
} else {
var6 = var_n->type->type_table[cltype] == idtype;
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 193);
show_backtrace(1);
}
{
abstract_collection__Sequence__add(self, var_n); /* Direct call abstract_collection#Sequence#add on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_n,var_parent) on <var_n:Object(ANode)> */
var_n->attrs[COLOR_parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_n:Object(ANode)> */
RET_LABEL7:(void)0;
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
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
val* var4 /* : Range[Int] */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Discrete */;
val* var8 /* : Discrete */;
val* var9 /* : Iterator[Discrete] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
long var_i /* var i: Int */;
long var12 /* : Int */;
val* var13 /* : ANode */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ANodes#parent (self) on <self:ANodes[ANode]> */
var3 = self->attrs[COLOR_parser_nodes__ANodes___parent].val; /* _parent on <self:ANodes[ANode]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 131);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_parent = var1;
var4 = NEW_range__Range(&type_range__Rangekernel__Int);
var5 = 0;
{
var6 = parser_nodes__ANodes__length(self);
}
{
var7 = BOX_kernel__Int(var5); /* autobox from Int to Discrete */
var8 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
range__Range__without_last(var4, var7, var8); /* Direct call range#Range#without_last on <var4:Range[Int]>*/
}
{
var9 = range__Range__iterator(var4);
}
for(;;) {
{
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[Discrete]>*/;
}
if(!var10) break;
{
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[Discrete]>*/;
}
var12 = ((struct instance_kernel__Int*)var11)->value; /* autounbox from nullable Object to Int */;
var_i = var12;
{
var13 = parser_nodes__ANodes___91d_93d(self, var_i);
}
{
{ /* Inline kernel#Object#== (var13,var_old_child) on <var13:ANode> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:ANode> */
var19 = var13 == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var20 = NULL;
if (var_new_child == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_new_child,var20) on <var_new_child:nullable ANode> */
var_other24 = var20;
{
var26 = ((short int (*)(val*, val*))(var_new_child->class->vft[COLOR_kernel__Object___61d_61d]))(var_new_child, var_other24) /* == on <var_new_child:nullable ANode(ANode)>*/;
var25 = var26;
}
var27 = !var25;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
/* <var_new_child:nullable ANode(ANode)> isa ANodes#0 */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__ANodes_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_new_child->type->table_size) {
var28 = 0;
} else {
var28 = var_new_child->type->type_table[cltype] == idtype;
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 205);
show_backtrace(1);
}
{
parser_nodes__ANodes___91d_93d_61d(self, var_i, var_new_child); /* Direct call parser_nodes#ANodes#[]= on <self:ANodes[ANode]>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_new_child,var_parent) on <var_new_child:nullable ANode(ANode)> */
var_new_child->attrs[COLOR_parser_nodes__ANode___parent].val = var_parent; /* _parent on <var_new_child:nullable ANode(ANode)> */
RET_LABEL29:(void)0;
}
}
} else {
{
parser_nodes__ANodes__remove_at(self, var_i); /* Direct call parser_nodes#ANodes#remove_at on <self:ANodes[ANode]>*/
}
}
var30 = 1;
var = var30;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
var31 = 0;
var = var31;
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
val* var /* : Iterator[ANode] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: ANode */;
var_v = p0;
{
var = parser_nodes__ANodes__iterator(self);
}
for(;;) {
{
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[ANode]>*/;
}
if(!var1) break;
{
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[ANode]>*/;
}
var_n = var2;
{
parser_nodes__Visitor__enter_visit(var_v, var_n); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_nodes#ANodes#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_nodes__ANodes__visit_all(val* self, val* p0) {
parser_nodes__ANodes__visit_all(self, p0); /* Direct call parser_nodes#ANodes#visit_all on <self:Object(ANodes[ANode])>*/
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__init(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANodes___parent].val = p0; /* _parent on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__init(val* self, val* p0) {
{ /* Inline parser_nodes#ANodes#init (self,p0) on <self:Object(ANodes[ANode])> */
self->attrs[COLOR_parser_nodes__ANodes___parent].val = p0; /* _parent on <self:Object(ANodes[ANode])> */
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
/* method parser_nodes#Prod#location= for (self: Prod, Location) */
void parser_nodes__Prod__location_61d(val* self, val* p0) {
val* var_l /* var l: Location */;
var_l = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_l; /* _location on <self:Prod> */
RET_LABEL:;
}
/* method parser_nodes#Prod#location= for (self: Object, Location) */
void VIRTUAL_parser_nodes__Prod__location_61d(val* self, val* p0) {
parser_nodes__Prod__location_61d(self, p0); /* Direct call parser_nodes#Prod#location= on <self:Object(Prod)>*/
RET_LABEL:;
}
/* method parser_nodes#Prod#n_annotations for (self: Prod): nullable AAnnotations */
val* parser_nodes__Prod__n_annotations(val* self) {
val* var /* : nullable AAnnotations */;
val* var1 /* : nullable AAnnotations */;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Prod> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#n_annotations for (self: Object): nullable AAnnotations */
val* VIRTUAL_parser_nodes__Prod__n_annotations(val* self) {
val* var /* : nullable AAnnotations */;
val* var1 /* : nullable AAnnotations */;
var1 = parser_nodes__Prod__n_annotations(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Prod#n_annotations= for (self: Prod, nullable AAnnotations) */
void parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
var_n_annotations = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:Prod> */
RET_LABEL:;
}
/* method parser_nodes#Prod#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
parser_nodes__Prod__n_annotations_61d(self, p0); /* Direct call parser_nodes#Prod#n_annotations= on <self:Object(Prod)>*/
RET_LABEL:;
}
/* method parser_nodes#Prod#replace_with for (self: Prod, ANode) */
void parser_nodes__Prod__replace_with(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable Location */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Location */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 282);
show_backtrace(1);
}
var1 = var_n->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_n:ANode(Prod)> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = location__Location___61d_61d(var1, var2);
var3 = var4;
}
if (var3){
var5 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:Prod> */
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Visitor#current_node for (self: Object): nullable ANode */
val* VIRTUAL_parser_nodes__Visitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = parser_nodes__Visitor__current_node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Visitor#init for (self: Visitor) */
void parser_nodes__Visitor__init(val* self) {
RET_LABEL:;
}
/* method parser_nodes#Visitor#init for (self: Object) */
void VIRTUAL_parser_nodes__Visitor__init(val* self) {
{ /* Inline parser_nodes#Visitor#init (self) on <self:Object(Visitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
BREAK_label: (void)0;
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
BREAK_label: (void)0;
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
BREAK_label: (void)0;
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
BREAK_label: (void)0;
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
BREAK_label: (void)0;
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
BREAK_label: (void)0;
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl for (self: Object): nullable AModuledecl */
val* VIRTUAL_parser_nodes__AModule__n_moduledecl(val* self) {
val* var /* : nullable AModuledecl */;
val* var1 /* : nullable AModuledecl */;
var1 = parser_nodes__AModule__n_moduledecl(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 697);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 697);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 698);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 698);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__AModuledecl__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = parser_nodes__AModuledecl__n_doc(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 719);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_name for (self: Object): AModuleName */
val* VIRTUAL_parser_nodes__AModuledecl__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = parser_nodes__AModuledecl__n_name(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 733);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__AStdImport__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = parser_nodes__AStdImport__n_visibility(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 739);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_name for (self: Object): AModuleName */
val* VIRTUAL_parser_nodes__AStdImport__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = parser_nodes__AStdImport__n_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AClassdef#n_propdefs for (self: AClassdef): ANodes[APropdef] */
val* parser_nodes__AClassdef__n_propdefs(val* self) {
val* var /* : ANodes[APropdef] */;
val* var1 /* : ANodes[APropdef] */;
var1 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AClassdef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__AStdClassdef__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = parser_nodes__AStdClassdef__n_doc(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AStdClassdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__AStdClassdef__n_kwredef(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 816);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__AStdClassdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = parser_nodes__AStdClassdef__n_visibility(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 819);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_classkind for (self: Object): AClasskind */
val* VIRTUAL_parser_nodes__AStdClassdef__n_classkind(val* self) {
val* var /* : AClasskind */;
val* var1 /* : AClasskind */;
var1 = parser_nodes__AStdClassdef__n_classkind(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_id for (self: Object): nullable TClassid */
val* VIRTUAL_parser_nodes__AStdClassdef__n_id(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = parser_nodes__AStdClassdef__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 828);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 828);
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
val* var2 /* : Location */;
{
var1 = parser_nodes__AStdClassdef__n_id(self);
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 832);
show_backtrace(1);
} else {
var2 = parser_nodes__ANode__location(var1);
}
var = var2;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 896);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_id for (self: Object): TClassid */
val* VIRTUAL_parser_nodes__AFormaldef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = parser_nodes__AFormaldef__n_id(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AFormaldef__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = parser_nodes__AFormaldef__n_type(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 912);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ASuperclass__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ASuperclass__n_type(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_doc for (self: Object): nullable ADoc */
val* VIRTUAL_parser_nodes__APropdef__n_doc(val* self) {
val* var /* : nullable ADoc */;
val* var1 /* : nullable ADoc */;
var1 = parser_nodes__APropdef__n_doc(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__APropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__APropdef__n_kwredef(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_visibility for (self: Object): nullable AVisibility */
val* VIRTUAL_parser_nodes__APropdef__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = parser_nodes__APropdef__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id for (self: AAttrPropdef): nullable TAttrid */
val* parser_nodes__AAttrPropdef__n_id(val* self) {
val* var /* : nullable TAttrid */;
val* var1 /* : nullable TAttrid */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val; /* _n_id on <self:AAttrPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id for (self: Object): nullable TAttrid */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_id(val* self) {
val* var /* : nullable TAttrid */;
val* var1 /* : nullable TAttrid */;
var1 = parser_nodes__AAttrPropdef__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: AAttrPropdef): nullable TId */
val* parser_nodes__AAttrPropdef__n_id2(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_id2(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = parser_nodes__AAttrPropdef__n_id2(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = parser_nodes__AAttrPropdef__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_readable for (self: AAttrPropdef): nullable AAble */
val* parser_nodes__AAttrPropdef__n_readable(val* self) {
val* var /* : nullable AAble */;
val* var1 /* : nullable AAble */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val; /* _n_readable on <self:AAttrPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_readable for (self: Object): nullable AAble */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_readable(val* self) {
val* var /* : nullable AAble */;
val* var1 /* : nullable AAble */;
var1 = parser_nodes__AAttrPropdef__n_readable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_writable for (self: AAttrPropdef): nullable AAble */
val* parser_nodes__AAttrPropdef__n_writable(val* self) {
val* var /* : nullable AAble */;
val* var1 /* : nullable AAble */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val; /* _n_writable on <self:AAttrPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_writable for (self: Object): nullable AAble */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_writable(val* self) {
val* var /* : nullable AAble */;
val* var1 /* : nullable AAble */;
var1 = parser_nodes__AAttrPropdef__n_writable(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AAttrPropdef__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#hot_location for (self: AAttrPropdef): Location */
val* parser_nodes__AAttrPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable TAttrid */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable TAttrid */;
val* var10 /* : Location */;
val* var11 /* : nullable TId */;
val* var12 /* : Location */;
{
var1 = parser_nodes__AAttrPropdef__n_id(self);
}
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable TAttrid> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable TAttrid(TAttrid)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var9 = parser_nodes__AAttrPropdef__n_id(self);
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 965);
show_backtrace(1);
} else {
var10 = parser_nodes__ANode__location(var9);
}
var = var10;
goto RET_LABEL;
} else {
{
var11 = parser_nodes__AAttrPropdef__n_id2(self);
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 965);
show_backtrace(1);
} else {
var12 = parser_nodes__ANode__location(var11);
}
var = var12;
goto RET_LABEL;
}
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
/* method parser_nodes#AMethPropdef#n_kwmeth= for (self: AMethPropdef, nullable TKwmeth) */
void parser_nodes__AMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
var_n_kwmeth = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwmeth= for (self: Object, nullable TKwmeth) */
void VIRTUAL_parser_nodes__AMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_kwmeth_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_kwmeth= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwinit for (self: AMethPropdef): nullable TKwinit */
val* parser_nodes__AMethPropdef__n_kwinit(val* self) {
val* var /* : nullable TKwinit */;
val* var1 /* : nullable TKwinit */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwinit for (self: Object): nullable TKwinit */
val* VIRTUAL_parser_nodes__AMethPropdef__n_kwinit(val* self) {
val* var /* : nullable TKwinit */;
val* var1 /* : nullable TKwinit */;
var1 = parser_nodes__AMethPropdef__n_kwinit(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwinit= for (self: AMethPropdef, nullable TKwinit) */
void parser_nodes__AMethPropdef__n_kwinit_61d(val* self, val* p0) {
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
var_n_kwinit = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwinit= for (self: Object, nullable TKwinit) */
void VIRTUAL_parser_nodes__AMethPropdef__n_kwinit_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_kwinit_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_kwinit= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwnew for (self: AMethPropdef): nullable TKwnew */
val* parser_nodes__AMethPropdef__n_kwnew(val* self) {
val* var /* : nullable TKwnew */;
val* var1 /* : nullable TKwnew */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwnew for (self: Object): nullable TKwnew */
val* VIRTUAL_parser_nodes__AMethPropdef__n_kwnew(val* self) {
val* var /* : nullable TKwnew */;
val* var1 /* : nullable TKwnew */;
var1 = parser_nodes__AMethPropdef__n_kwnew(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwnew= for (self: AMethPropdef, nullable TKwnew) */
void parser_nodes__AMethPropdef__n_kwnew_61d(val* self, val* p0) {
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
var_n_kwnew = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwnew= for (self: Object, nullable TKwnew) */
void VIRTUAL_parser_nodes__AMethPropdef__n_kwnew_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_kwnew_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_kwnew= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_methid for (self: AMethPropdef): nullable AMethid */
val* parser_nodes__AMethPropdef__n_methid(val* self) {
val* var /* : nullable AMethid */;
val* var1 /* : nullable AMethid */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_methid for (self: Object): nullable AMethid */
val* VIRTUAL_parser_nodes__AMethPropdef__n_methid(val* self) {
val* var /* : nullable AMethid */;
val* var1 /* : nullable AMethid */;
var1 = parser_nodes__AMethPropdef__n_methid(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_signature for (self: Object): nullable ASignature */
val* VIRTUAL_parser_nodes__AMethPropdef__n_signature(val* self) {
val* var /* : nullable ASignature */;
val* var1 /* : nullable ASignature */;
var1 = parser_nodes__AMethPropdef__n_signature(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AMethPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AMethPropdef__n_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_block= for (self: AMethPropdef, nullable AExpr) */
void parser_nodes__AMethPropdef__n_block_61d(val* self, val* p0) {
val* var_n_block /* var n_block: nullable AExpr */;
var_n_block = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AMethPropdef__n_block_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_block_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_block= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern for (self: AMethPropdef): nullable TString */
val* parser_nodes__AMethPropdef__n_extern(val* self) {
val* var /* : nullable TString */;
val* var1 /* : nullable TString */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val; /* _n_extern on <self:AMethPropdef> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern for (self: Object): nullable TString */
val* VIRTUAL_parser_nodes__AMethPropdef__n_extern(val* self) {
val* var /* : nullable TString */;
val* var1 /* : nullable TString */;
var1 = parser_nodes__AMethPropdef__n_extern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_extern= for (self: AMethPropdef, nullable TString) */
void parser_nodes__AMethPropdef__n_extern_61d(val* self, val* p0) {
val* var_n_extern /* var n_extern: nullable TString */;
var_n_extern = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val = var_n_extern; /* _n_extern on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern= for (self: Object, nullable TString) */
void VIRTUAL_parser_nodes__AMethPropdef__n_extern_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_extern_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_extern= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern_calls= for (self: AMethPropdef, nullable AExternCalls) */
void parser_nodes__AMethPropdef__n_extern_calls_61d(val* self, val* p0) {
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
var_n_extern_calls = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_nodes__AMethPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_extern_calls_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_extern_calls= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block= for (self: AMethPropdef, nullable AExternCodeBlock) */
void parser_nodes__AMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
var_n_extern_code_block = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_nodes__AMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_extern_code_block_61d(self, p0); /* Direct call parser_nodes#AMethPropdef#n_extern_code_block= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#hot_location for (self: AMethPropdef): Location */
val* parser_nodes__AMethPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable AMethid */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AMethid */;
val* var10 /* : Location */;
val* var11 /* : nullable TKwinit */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable TKwinit */;
val* var20 /* : Location */;
val* var21 /* : nullable TKwnew */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable TKwnew */;
val* var30 /* : Location */;
val* var31 /* : Location */;
{
var1 = parser_nodes__AMethPropdef__n_methid(self);
}
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable AMethid> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable AMethid(AMethid)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var9 = parser_nodes__AMethPropdef__n_methid(self);
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1003);
show_backtrace(1);
} else {
var10 = parser_nodes__ANode__location(var9);
}
var = var10;
goto RET_LABEL;
} else {
{
var11 = parser_nodes__AMethPropdef__n_kwinit(self);
}
var12 = NULL;
if (var11 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var11,var12) on <var11:nullable TKwinit> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_other) /* == on <var11:nullable TKwinit(TKwinit)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
var19 = parser_nodes__AMethPropdef__n_kwinit(self);
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1005);
show_backtrace(1);
} else {
var20 = parser_nodes__ANode__location(var19);
}
var = var20;
goto RET_LABEL;
} else {
{
var21 = parser_nodes__AMethPropdef__n_kwnew(self);
}
var22 = NULL;
if (var21 == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var21,var22) on <var21:nullable TKwnew> */
var_other = var22;
{
var27 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_other) /* == on <var21:nullable TKwnew(TKwnew)>*/;
var26 = var27;
}
var28 = !var26;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
var29 = parser_nodes__AMethPropdef__n_kwnew(self);
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1007);
show_backtrace(1);
} else {
var30 = parser_nodes__ANode__location(var29);
}
var = var30;
goto RET_LABEL;
} else {
{
var31 = parser_nodes__ANode__location(self);
}
var = var31;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1073);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1073);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_id for (self: Object): TClassid */
val* VIRTUAL_parser_nodes__ATypePropdef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = parser_nodes__ATypePropdef__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1175);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ATypePropdef__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ATypePropdef__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAble#n_visibility for (self: AAble): nullable AVisibility */
val* parser_nodes__AAble__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AAble> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAble#n_visibility for (self: Object): nullable AVisibility */
val* VIRTUAL_parser_nodes__AAble__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = parser_nodes__AAble__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAble#n_visibility= for (self: AAble, nullable AVisibility) */
void parser_nodes__AAble__n_visibility_61d(val* self, val* p0) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
var_n_visibility = p0;
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAble> */
RET_LABEL:;
}
/* method parser_nodes#AAble#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_nodes__AAble__n_visibility_61d(val* self, val* p0) {
parser_nodes__AAble__n_visibility_61d(self, p0); /* Direct call parser_nodes#AAble#n_visibility= on <self:Object(AAble)>*/
RET_LABEL:;
}
/* method parser_nodes#AAble#n_kwredef for (self: AAble): nullable TKwredef */
val* parser_nodes__AAble__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AAble> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAble#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AAble__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__AAble__n_kwredef(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1218);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIdMethid#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AIdMethid__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AIdMethid__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__ASignature__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = parser_nodes__ASignature__n_type(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1374);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AParam__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AParam__n_id(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AParam__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = parser_nodes__AParam__n_type(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_dotdotdot for (self: Object): nullable TDotdotdot */
val* VIRTUAL_parser_nodes__AParam__n_dotdotdot(val* self) {
val* var /* : nullable TDotdotdot */;
val* var1 /* : nullable TDotdotdot */;
var1 = parser_nodes__AParam__n_dotdotdot(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_kwnullable for (self: Object): nullable TKwnullable */
val* VIRTUAL_parser_nodes__AType__n_kwnullable(val* self) {
val* var /* : nullable TKwnullable */;
val* var1 /* : nullable TKwnullable */;
var1 = parser_nodes__AType__n_kwnullable(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1394);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_id for (self: Object): TClassid */
val* VIRTUAL_parser_nodes__AType__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = parser_nodes__AType__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__ALabel__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = parser_nodes__ALabel__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_expr for (self: ABlockExpr): ANodes[AExpr] */
val* parser_nodes__ABlockExpr__n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1438);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AVardeclExpr__n_id(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_type for (self: Object): nullable AType */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_type(val* self) {
val* var /* : nullable AType */;
val* var1 /* : nullable AType */;
var1 = parser_nodes__AVardeclExpr__n_type(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AVardeclExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AReturnExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AReturnExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabelable#n_label for (self: Object): nullable ALabel */
val* VIRTUAL_parser_nodes__ALabelable__n_label(val* self) {
val* var /* : nullable ALabel */;
val* var1 /* : nullable ALabel */;
var1 = parser_nodes__ALabelable__n_label(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABreakExpr#n_expr for (self: ABreakExpr): nullable AExpr */
val* parser_nodes__ABreakExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABreakExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__ABreakExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__ABreakExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AContinueExpr#n_expr for (self: AContinueExpr): nullable AExpr */
val* parser_nodes__AContinueExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AContinueExpr#n_expr for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AContinueExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AContinueExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__ADoExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__ADoExpr__n_block(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1530);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AIfExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_then for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AIfExpr__n_then(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AIfExpr__n_then(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_else for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AIfExpr__n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AIfExpr__n_else(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1548);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AIfexprExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1554);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_then for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_then(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AIfexprExpr__n_then(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1560);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_else for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_else(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AIfexprExpr__n_else(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1573);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AWhileExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AWhileExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AWhileExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AWhileExpr__n_block(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__ALoopExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__ALoopExpr__n_block(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1606);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AForExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AForExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AForExpr__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AForExpr__n_block(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_id for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__AAssertExpr__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = parser_nodes__AAssertExpr__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1627);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAssertExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAssertExpr__n_expr(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_else for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AAssertExpr__n_else(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AAssertExpr__n_else(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1639);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_assign for (self: Object): TAssign */
val* VIRTUAL_parser_nodes__AAssignFormExpr__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = parser_nodes__AAssignFormExpr__n_assign(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1642);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_value for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAssignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAssignFormExpr__n_value(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1651);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op for (self: Object): AAssignOp */
val* VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op(val* self) {
val* var /* : AAssignOp */;
val* var1 /* : AAssignOp */;
var1 = parser_nodes__AReassignFormExpr__n_assign_op(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1654);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_value for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AReassignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AReassignFormExpr__n_value(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1674);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASendExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ASendExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ASendExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1685);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ABinopExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ABinopExpr__n_expr2(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1699);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AOrExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1702);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AOrExpr__n_expr2(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1711);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAndExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAndExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1714);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAndExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAndExpr__n_expr2(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1723);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrElseExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AOrElseExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1726);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AOrElseExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AOrElseExpr__n_expr2(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1735);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AImpliesExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AImpliesExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1738);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AImpliesExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AImpliesExpr__n_expr2(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1750);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ANotExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ANotExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1799);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AIsaExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AIsaExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1802);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AIsaExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AIsaExpr__n_type(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1853);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ANewExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ANewExpr__n_type(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_id for (self: Object): nullable TId */
val* VIRTUAL_parser_nodes__ANewExpr__n_id(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = parser_nodes__ANewExpr__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1861);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ANewExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__ANewExpr__n_args(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1872);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAttrFormExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAttrFormExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1877);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_id for (self: Object): TAttrid */
val* VIRTUAL_parser_nodes__AAttrFormExpr__n_id(val* self) {
val* var /* : TAttrid */;
val* var1 /* : TAttrid */;
var1 = parser_nodes__AAttrFormExpr__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1900);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__ACallFormExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__ACallFormExpr__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1905);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ACallFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__ACallFormExpr__n_args(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1955);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ASuperExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__ASuperExpr__n_args(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1968);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__AInitExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__AInitExpr__n_args(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1977);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ABraFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__ABraFormExpr__n_args(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2032);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ARangeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ARangeExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2035);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ARangeExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ARangeExpr__n_expr2(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2068);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__AArrayExpr__n_exprs(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__AArrayExpr__n_exprs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADecIntExpr#n_number for (self: ADecIntExpr): TNumber */
val* parser_nodes__ADecIntExpr__n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2119);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADecIntExpr#n_number for (self: Object): TNumber */
val* VIRTUAL_parser_nodes__ADecIntExpr__n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = parser_nodes__ADecIntExpr__n_number(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2127);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AHexIntExpr#n_hex_number for (self: Object): THexNumber */
val* VIRTUAL_parser_nodes__AHexIntExpr__n_hex_number(val* self) {
val* var /* : THexNumber */;
val* var1 /* : THexNumber */;
var1 = parser_nodes__AHexIntExpr__n_hex_number(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2135);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float for (self: Object): TFloat */
val* VIRTUAL_parser_nodes__AFloatExpr__n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
var1 = parser_nodes__AFloatExpr__n_float(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2143);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char for (self: Object): TChar */
val* VIRTUAL_parser_nodes__ACharExpr__n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
var1 = parser_nodes__ACharExpr__n_char(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2151);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: Object): Token */
val* VIRTUAL_parser_nodes__AStringFormExpr__n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = parser_nodes__AStringFormExpr__n_string(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProxyExpr#n_expr for (self: AProxyExpr): AExpr */
val* parser_nodes__AProxyExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AProxyExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2200);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProxyExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AProxyExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AProxyExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2209);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAsCastExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2218);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AAsCastExpr__n_type(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2230);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAsNotnullExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#init for (self: AExprs) */
void parser_nodes__AExprs__init(val* self) {
{
{ /* Inline parser_nodes#ANode#init (self) on <self:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_nodes#AExprs#init for (self: Object) */
void VIRTUAL_parser_nodes__AExprs__init(val* self) {
parser_nodes__AExprs__init(self); /* Direct call parser_nodes#AExprs#init on <self:Object(AExprs)>*/
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: ADebugTypeExpr): AExpr */
val* parser_nodes__ADebugTypeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2288);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ADebugTypeExpr__n_expr(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2291);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ADebugTypeExpr__n_type(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad for (self: Object): nullable TQuad */
val* VIRTUAL_parser_nodes__AModuleName__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = parser_nodes__AModuleName__n_quad(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2349);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2349);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2351);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AModuleName__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AModuleName__n_id(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2380);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2380);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2391);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2391);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2403);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2403);
show_backtrace(1);
}
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AAnnotation__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__AAnnotation__n_kwredef(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_visibility for (self: Object): nullable AVisibility */
val* VIRTUAL_parser_nodes__AAnnotation__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = parser_nodes__AAnnotation__n_visibility(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2421);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid for (self: Object): AAtid */
val* VIRTUAL_parser_nodes__AAnnotation__n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
var1 = parser_nodes__AAnnotation__n_atid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args for (self: AAnnotation): ANodes[AAtArg] */
val* parser_nodes__AAnnotation__n_args(val* self) {
val* var /* : ANodes[AAtArg] */;
val* var1 /* : ANodes[AAtArg] */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args for (self: Object): ANodes[AAtArg] */
val* VIRTUAL_parser_nodes__AAnnotation__n_args(val* self) {
val* var /* : ANodes[AAtArg] */;
val* var1 /* : ANodes[AAtArg] */;
val* var3 /* : ANodes[AAtArg] */;
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:Object(AAnnotation)> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:Object(AAnnotation)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprAtArg#n_expr for (self: AExprAtArg): AExpr */
val* parser_nodes__AExprAtArg__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2445);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprAtArg#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AExprAtArg__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AExprAtArg__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id for (self: AAtid): Token */
val* parser_nodes__AAtid__n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AAtid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2455);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id for (self: Object): Token */
val* VIRTUAL_parser_nodes__AAtid__n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = parser_nodes__AAtid__n_id(self);
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
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base for (self: Object): nullable AModule */
val* VIRTUAL_parser_nodes__Start__n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = parser_nodes__Start__n_base(self);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2485);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof for (self: Object): EOF */
val* VIRTUAL_parser_nodes__Start__n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
var1 = parser_nodes__Start__n_eof(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#init for (self: Start, nullable AModule, EOF) */
void parser_nodes__Start__init(val* self, val* p0, val* p1) {
val* var_n_base /* var n_base: nullable AModule */;
val* var_n_eof /* var n_eof: EOF */;
{
{ /* Inline parser_nodes#ANode#init (self) on <self:Start> */
RET_LABEL1:(void)0;
}
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
