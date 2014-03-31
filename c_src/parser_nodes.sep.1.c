#include "parser_nodes.sep.0.h"
/* method parser_nodes#ANode#location for (self: ANode): Location */
val* parser_nodes__ANode__location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:ANode> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 27);
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
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:ANode>*/;
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
val* var /* : Location */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Location */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
var_message = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ANode>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = " ";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:ANode>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = ": ";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\n";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ANode>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "0;32";
var20 = 4;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_location__Location__colored_line]))(var16, var18) /* colored_line on <var16:Location>*/;
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 7;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var1;
((struct instance_array__NativeArray*)var25)->values[2] = (val*) var5;
((struct instance_array__NativeArray*)var25)->values[3] = (val*) var7;
((struct instance_array__NativeArray*)var25)->values[4] = (val*) var_message;
((struct instance_array__NativeArray*)var25)->values[5] = (val*) var12;
((struct instance_array__NativeArray*)var25)->values[6] = (val*) var22;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var26) /* print on <self:ANode>*/;
RET_LABEL:;
}
/* method parser_nodes#ANode#debug for (self: Object, String) */
void VIRTUAL_parser_nodes__ANode__debug(val* self, val* p0) {
parser_nodes__ANode__debug(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANode#parent for (self: ANode): nullable ANode */
val* parser_nodes__ANode__parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_parser_nodes__ANode___64dparent].val; /* @parent on <self:ANode> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#parent for (self: Object): nullable ANode */
val* VIRTUAL_parser_nodes__ANode__parent(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = parser_nodes__ANode__parent(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANode#parent= for (self: ANode, nullable ANode) */
void parser_nodes__ANode__parent_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = p0; /* @parent on <self:ANode> */
RET_LABEL:;
}
/* method parser_nodes#ANode#parent= for (self: Object, nullable ANode) */
void VIRTUAL_parser_nodes__ANode__parent_61d(val* self, val* p0) {
parser_nodes__ANode__parent_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANode#init for (self: ANode) */
void parser_nodes__ANode__init(val* self) {
RET_LABEL:;
}
/* method parser_nodes#ANode#init for (self: Object) */
void VIRTUAL_parser_nodes__ANode__init(val* self) {
parser_nodes__ANode__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: ANode, ANode, nullable ANode) */
void parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "replace_child", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 44);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
parser_nodes__ANode__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_nodes#ANode#detach for (self: ANode) */
void parser_nodes__ANode__detach(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
val* var4 /* : null */;
val* var5 /* : null */;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:ANode>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 54);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:ANode>*/;
var4 = NULL;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 55);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_nodes__ANode__replace_child]))(var3, self, var4) /* replace_child on <var3:nullable ANode>*/;
}
var5 = NULL;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(self, var5) /* parent= on <self:ANode>*/;
RET_LABEL:;
}
/* method parser_nodes#ANode#detach for (self: Object) */
void VIRTUAL_parser_nodes__ANode__detach(val* self) {
parser_nodes__ANode__detach(self);
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: ANode, ANode) */
void parser_nodes__ANode__replace_with(val* self, val* p0) {
val* var_node /* var node: ANode */;
val* var /* : nullable ANode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
val* var4 /* : null */;
var_node = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:ANode>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 65);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:ANode>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 66);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_nodes__ANode__replace_child]))(var3, self, var_node) /* replace_child on <var3:nullable ANode>*/;
}
var4 = NULL;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(self, var4) /* parent= on <self:ANode>*/;
RET_LABEL:;
}
/* method parser_nodes#ANode#replace_with for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANode__replace_with(val* self, val* p0) {
parser_nodes__ANode__replace_with(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: ANode, Visitor) */
void parser_nodes__ANode__visit_all(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "visit_all", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 70);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#ANode#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_nodes__ANode__visit_all(val* self, val* p0) {
parser_nodes__ANode__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANodes#parent for (self: ANodes[ANode]): ANode */
val* parser_nodes__ANodes__parent(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_parser_nodes__ANodes___64dparent].val; /* @parent on <self:ANodes[ANode]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @parent");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 79);
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
var1 = parser_nodes__ANodes__parent(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#parent= for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__parent_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANodes___64dparent].val = p0; /* @parent on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#parent= for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__parent_61d(val* self, val* p0) {
parser_nodes__ANodes__parent_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANodes#items for (self: ANodes[ANode]): Array[ANode] */
val* parser_nodes__ANodes__items(val* self) {
val* var /* : Array[ANode] */;
val* var1 /* : Array[ANode] */;
var1 = self->attrs[COLOR_parser_nodes__ANodes___64ditems].val; /* @items on <self:ANodes[ANode]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 80);
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
var1 = parser_nodes__ANodes__items(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANodes#items= for (self: ANodes[ANode], Array[ANode]) */
void parser_nodes__ANodes__items_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (items) <p0:Array[ANode]> isa Array[ANodes#0] */
/* <p0:Array[ANode]> isa Array[ANodes#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arrayparser_nodes__ANodes_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[ANodes#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 80);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANodes___64ditems].val = p0; /* @items on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#items= for (self: Object, Array[ANode]) */
void VIRTUAL_parser_nodes__ANodes__items_61d(val* self, val* p0) {
parser_nodes__ANodes__items_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANodes#iterator for (self: ANodes[ANode]): Iterator[ANode] */
val* parser_nodes__ANodes__iterator(val* self) {
val* var /* : Iterator[ANode] */;
val* var1 /* : Array[ANode] */;
val* var2 /* : Iterator[nullable Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Array[ANode]>*/;
var = var2;
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
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[ANode]>*/;
var = var2;
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
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:Array[ANode]>*/;
var = var2;
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 84);
show_backtrace(1);
}
var_e = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_add]))(self, var_e) /* hook_add on <self:ANodes[ANode]>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Sequence__push]))(var1, var_e) /* push on <var1:Array[ANode]>*/;
RET_LABEL:;
}
/* method parser_nodes#ANodes#push for (self: Object, nullable Object) */
void VIRTUAL_parser_nodes__ANodes__push(val* self, val* p0) {
parser_nodes__ANodes__push(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANodes#pop for (self: ANodes[ANode]): ANode */
val* parser_nodes__ANodes__pop(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var2 /* : nullable Object */;
val* var_res /* var res: ANode */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Sequence__pop]))(var1) /* pop on <var1:Array[ANode]>*/;
var_res = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_remove]))(self, var_res) /* hook_remove on <self:ANodes[ANode]>*/;
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 95);
show_backtrace(1);
}
var_e = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_add]))(self, var_e) /* hook_add on <self:ANodes[ANode]>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Sequence__unshift]))(var1, var_e) /* unshift on <var1:Array[ANode]>*/;
RET_LABEL:;
}
/* method parser_nodes#ANodes#unshift for (self: Object, nullable Object) */
void VIRTUAL_parser_nodes__ANodes__unshift(val* self, val* p0) {
parser_nodes__ANodes__unshift(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANodes#shift for (self: ANodes[ANode]): ANode */
val* parser_nodes__ANodes__shift(val* self) {
val* var /* : ANode */;
val* var1 /* : Array[ANode] */;
val* var2 /* : nullable Object */;
val* var_res /* var res: ANode */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Sequence__shift]))(var1) /* shift on <var1:Array[ANode]>*/;
var_res = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_remove]))(self, var_res) /* hook_remove on <self:ANodes[ANode]>*/;
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
short int var3 /* : Bool */;
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
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 106);
show_backtrace(1);
}
var_e = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_e) /* has on <var2:Array[ANode]>*/;
var = var3;
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
val* var2 /* : nullable Object */;
var_index = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var2 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var_index) /* [] on <var1:Array[ANode]>*/;
var = var2;
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
val* var1 /* : nullable Object */;
val* var2 /* : Array[ANode] */;
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
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 114);
show_backtrace(1);
}
var_index = p0;
var_e = p1;
var1 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_index) /* [] on <self:ANodes[ANode]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_remove]))(self, var1) /* hook_remove on <self:ANodes[ANode]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_add]))(self, var_e) /* hook_add on <self:ANodes[ANode]>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
((void (*)(val*, long, val*))(var2->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var2, var_index, var_e) /* []= on <var2:Array[ANode]>*/;
RET_LABEL:;
}
/* method parser_nodes#ANodes#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_parser_nodes__ANodes___91d_93d_61d(val* self, long p0, val* p1) {
parser_nodes__ANodes___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method parser_nodes#ANodes#remove_at for (self: ANodes[ANode], Int) */
void parser_nodes__ANodes__remove_at(val* self, long p0) {
long var_index /* var index: Int */;
val* var /* : Array[ANode] */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[ANode] */;
var_index = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
var1 = ((val* (*)(val*, long))(var->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var, var_index) /* [] on <var:Array[ANode]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANodes__hook_remove]))(self, var1) /* hook_remove on <self:ANodes[ANode]>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__items]))(self) /* items on <self:ANodes[ANode]>*/;
((void (*)(val*, long))(var2->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var2, var_index) /* remove_at on <var2:Array[ANode]>*/;
RET_LABEL:;
}
/* method parser_nodes#ANodes#remove_at for (self: Object, Int) */
void VIRTUAL_parser_nodes__ANodes__remove_at(val* self, long p0) {
parser_nodes__ANodes__remove_at(self, p0);
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ANodes#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 125);
show_backtrace(1);
}
var_e = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__parent]))(self) /* parent on <self:ANodes[ANode]>*/;
((void (*)(val*, val*))(var_e->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_e, var1) /* parent= on <var_e:ANode>*/;
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_add for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__hook_add(val* self, val* p0) {
parser_nodes__ANodes__hook_add(self, p0);
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
val* var2 /* : ANode */;
short int var3 /* : Bool */;
val* var4 /* : null */;
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ANodes#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 130);
show_backtrace(1);
}
var_e = p0;
var1 = ((val* (*)(val*))(var_e->class->vft[COLOR_parser_nodes__ANode__parent]))(var_e) /* parent on <var_e:ANode>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANodes__parent]))(self) /* parent on <self:ANodes[ANode]>*/;
if (var1 == NULL) {
var3 = 0; /* <var2:ANode> cannot be null */
} else {
var3 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var2) /* == on <var1:nullable ANode>*/;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 132);
show_backtrace(1);
}
var4 = NULL;
((void (*)(val*, val*))(var_e->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_e, var4) /* parent= on <var_e:ANode>*/;
RET_LABEL:;
}
/* method parser_nodes#ANodes#hook_remove for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__hook_remove(val* self, val* p0) {
parser_nodes__ANodes__hook_remove(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: ANodes[ANode], ANode) */
void parser_nodes__ANodes__init(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANodes___64dparent].val = p0; /* @parent on <self:ANodes[ANode]> */
RET_LABEL:;
}
/* method parser_nodes#ANodes#init for (self: Object, ANode) */
void VIRTUAL_parser_nodes__ANodes__init(val* self, val* p0) {
parser_nodes__ANodes__init(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Token#text for (self: Token): String */
val* parser_nodes__Token__text(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "text", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 142);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#text for (self: Object): String */
val* VIRTUAL_parser_nodes__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_nodes__Token__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#text= for (self: Token, String) */
void parser_nodes__Token__text_61d(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "text=", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 144);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#Token#text= for (self: Object, String) */
void VIRTUAL_parser_nodes__Token__text_61d(val* self, val* p0) {
parser_nodes__Token__text_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token for (self: Token): nullable Token */
val* parser_nodes__Token__prev_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:Token> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#prev_token for (self: Object): nullable Token */
val* VIRTUAL_parser_nodes__Token__prev_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = parser_nodes__Token__prev_token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#prev_token= for (self: Token, nullable Token) */
void parser_nodes__Token__prev_token_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Token___64dprev_token].val = p0; /* @prev_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#prev_token= for (self: Object, nullable Token) */
void VIRTUAL_parser_nodes__Token__prev_token_61d(val* self, val* p0) {
parser_nodes__Token__prev_token_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Token#next_token for (self: Token): nullable Token */
val* parser_nodes__Token__next_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:Token> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#next_token for (self: Object): nullable Token */
val* VIRTUAL_parser_nodes__Token__next_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = parser_nodes__Token__next_token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Token#next_token= for (self: Token, nullable Token) */
void parser_nodes__Token__next_token_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Token___64dnext_token].val = p0; /* @next_token on <self:Token> */
RET_LABEL:;
}
/* method parser_nodes#Token#next_token= for (self: Object, nullable Token) */
void VIRTUAL_parser_nodes__Token__next_token_61d(val* self, val* p0) {
parser_nodes__Token__next_token_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Token#to_s for (self: Token): String */
val* parser_nodes__Token__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "\'";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:Token>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
parser_nodes__Token__visit_all(self, p0);
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
parser_nodes__Token__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_nodes#Token#init for (self: Token) */
void parser_nodes__Token__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__init]))(self) /* init on <self:Token>*/;
RET_LABEL:;
}
/* method parser_nodes#Token#init for (self: Object) */
void VIRTUAL_parser_nodes__Token__init(val* self) {
parser_nodes__Token__init(self);
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
parser_nodes__Prod__location_61d(self, p0);
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
var1 = parser_nodes__Prod__n_annotations(self);
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
parser_nodes__Prod__n_annotations_61d(self, p0);
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
val* var4 /* : nullable Location */;
var_n = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Prod__replace_with]))(self, p0) /* replace_with on <self:Prod>*/;
/* <var_n:ANode> isa Prod */
cltype = type_parser_nodes__Prod.color;
idtype = type_parser_nodes__Prod.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 175);
show_backtrace(1);
}
var1 = var_n->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_n:ANode(Prod)> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:Prod> */
var_n->attrs[COLOR_parser_nodes__ANode___location].val = var4; /* _location on <var_n:ANode(Prod)> */
} else {
}
RET_LABEL:;
}
/* method parser_nodes#Prod#replace_with for (self: Object, ANode) */
void VIRTUAL_parser_nodes__Prod__replace_with(val* self, val* p0) {
parser_nodes__Prod__replace_with(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Prod#init for (self: Prod) */
void parser_nodes__Prod__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__init]))(self) /* init on <self:Prod>*/;
RET_LABEL:;
}
/* method parser_nodes#Prod#init for (self: Object) */
void VIRTUAL_parser_nodes__Prod__init(val* self) {
parser_nodes__Prod__init(self);
RET_LABEL:;
}
/* method parser_nodes#Visitor#visit for (self: Visitor, ANode) */
void parser_nodes__Visitor__visit(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "visit", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 182);
show_backtrace(1);
RET_LABEL:;
}
/* method parser_nodes#Visitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_nodes__Visitor__visit(val* self, val* p0) {
parser_nodes__Visitor__visit(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Visitor, nullable ANode) */
void parser_nodes__Visitor__enter_visit(val* self, val* p0) {
val* var_e /* var e: nullable ANode */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_e = p0;
var = NULL;
if (var_e == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_parser_nodes__Visitor___current_node].val; /* _current_node on <self:Visitor> */
var_old = var2;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var_e; /* _current_node on <self:Visitor> */
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Visitor__visit]))(self, var_e) /* visit on <self:Visitor>*/;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var_old; /* _current_node on <self:Visitor> */
RET_LABEL:;
}
/* method parser_nodes#Visitor#enter_visit for (self: Object, nullable ANode) */
void VIRTUAL_parser_nodes__Visitor__enter_visit(val* self, val* p0) {
parser_nodes__Visitor__enter_visit(self, p0);
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
var1 = parser_nodes__Visitor__current_node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Visitor#current_node= for (self: Visitor, nullable ANode) */
void parser_nodes__Visitor__current_node_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = p0; /* _current_node on <self:Visitor> */
RET_LABEL:;
}
/* method parser_nodes#Visitor#current_node= for (self: Object, nullable ANode) */
void VIRTUAL_parser_nodes__Visitor__current_node_61d(val* self, val* p0) {
parser_nodes__Visitor__current_node_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Visitor#init for (self: Visitor) */
void parser_nodes__Visitor__init(val* self) {
RET_LABEL:;
}
/* method parser_nodes#Visitor#init for (self: Object) */
void VIRTUAL_parser_nodes__Visitor__init(val* self) {
parser_nodes__Visitor__init(self);
RET_LABEL:;
}
/* method parser_nodes#TEol#to_s for (self: TEol): String */
val* parser_nodes__TEol__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
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
/* method parser_nodes#TEol#init for (self: TEol) */
void parser_nodes__TEol__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TEol>*/;
RET_LABEL:;
}
/* method parser_nodes#TEol#init for (self: Object) */
void VIRTUAL_parser_nodes__TEol__init(val* self) {
parser_nodes__TEol__init(self);
RET_LABEL:;
}
/* method parser_nodes#TComment#init for (self: TComment) */
void parser_nodes__TComment__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TComment>*/;
RET_LABEL:;
}
/* method parser_nodes#TComment#init for (self: Object) */
void VIRTUAL_parser_nodes__TComment__init(val* self) {
parser_nodes__TComment__init(self);
RET_LABEL:;
}
/* method parser_nodes#TokenKeyword#to_s for (self: TokenKeyword): String */
val* parser_nodes__TokenKeyword__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "keyword \'";
var5 = 9;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TokenKeyword>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TokenKeyword#init for (self: TokenKeyword) */
void parser_nodes__TokenKeyword__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TokenKeyword>*/;
RET_LABEL:;
}
/* method parser_nodes#TokenKeyword#init for (self: Object) */
void VIRTUAL_parser_nodes__TokenKeyword__init(val* self) {
parser_nodes__TokenKeyword__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwpackage#init for (self: TKwpackage) */
void parser_nodes__TKwpackage__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwpackage>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwpackage#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwpackage__init(val* self) {
parser_nodes__TKwpackage__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwmodule#init for (self: TKwmodule) */
void parser_nodes__TKwmodule__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwmodule>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwmodule#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwmodule__init(val* self) {
parser_nodes__TKwmodule__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwimport#init for (self: TKwimport) */
void parser_nodes__TKwimport__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwimport>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwimport#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwimport__init(val* self) {
parser_nodes__TKwimport__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwclass#init for (self: TKwclass) */
void parser_nodes__TKwclass__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwclass>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwclass#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwclass__init(val* self) {
parser_nodes__TKwclass__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwabstract#init for (self: TKwabstract) */
void parser_nodes__TKwabstract__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwabstract>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwabstract#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwabstract__init(val* self) {
parser_nodes__TKwabstract__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwinterface#init for (self: TKwinterface) */
void parser_nodes__TKwinterface__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwinterface>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwinterface#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwinterface__init(val* self) {
parser_nodes__TKwinterface__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwenum#init for (self: TKwenum) */
void parser_nodes__TKwenum__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwenum>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwenum#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwenum__init(val* self) {
parser_nodes__TKwenum__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwend#init for (self: TKwend) */
void parser_nodes__TKwend__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwend>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwend#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwend__init(val* self) {
parser_nodes__TKwend__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwmeth#init for (self: TKwmeth) */
void parser_nodes__TKwmeth__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwmeth>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwmeth#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwmeth__init(val* self) {
parser_nodes__TKwmeth__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwtype#init for (self: TKwtype) */
void parser_nodes__TKwtype__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwtype>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwtype#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwtype__init(val* self) {
parser_nodes__TKwtype__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwinit#init for (self: TKwinit) */
void parser_nodes__TKwinit__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwinit>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwinit#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwinit__init(val* self) {
parser_nodes__TKwinit__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwredef#init for (self: TKwredef) */
void parser_nodes__TKwredef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwredef>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwredef#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwredef__init(val* self) {
parser_nodes__TKwredef__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwis#init for (self: TKwis) */
void parser_nodes__TKwis__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwis>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwis#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwis__init(val* self) {
parser_nodes__TKwis__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwdo#init for (self: TKwdo) */
void parser_nodes__TKwdo__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwdo>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwdo#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwdo__init(val* self) {
parser_nodes__TKwdo__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwreadable#init for (self: TKwreadable) */
void parser_nodes__TKwreadable__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwreadable>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwreadable#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwreadable__init(val* self) {
parser_nodes__TKwreadable__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwwritable#init for (self: TKwwritable) */
void parser_nodes__TKwwritable__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwwritable>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwwritable#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwwritable__init(val* self) {
parser_nodes__TKwwritable__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwvar#init for (self: TKwvar) */
void parser_nodes__TKwvar__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwvar>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwvar#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwvar__init(val* self) {
parser_nodes__TKwvar__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwintern#init for (self: TKwintern) */
void parser_nodes__TKwintern__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwintern>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwintern#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwintern__init(val* self) {
parser_nodes__TKwintern__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwextern#init for (self: TKwextern) */
void parser_nodes__TKwextern__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwextern>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwextern#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwextern__init(val* self) {
parser_nodes__TKwextern__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwprotected#init for (self: TKwprotected) */
void parser_nodes__TKwprotected__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwprotected>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwprotected#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwprotected__init(val* self) {
parser_nodes__TKwprotected__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwprivate#init for (self: TKwprivate) */
void parser_nodes__TKwprivate__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwprivate>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwprivate#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwprivate__init(val* self) {
parser_nodes__TKwprivate__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwintrude#init for (self: TKwintrude) */
void parser_nodes__TKwintrude__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwintrude>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwintrude#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwintrude__init(val* self) {
parser_nodes__TKwintrude__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwif#init for (self: TKwif) */
void parser_nodes__TKwif__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwif>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwif#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwif__init(val* self) {
parser_nodes__TKwif__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwthen#init for (self: TKwthen) */
void parser_nodes__TKwthen__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwthen>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwthen#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwthen__init(val* self) {
parser_nodes__TKwthen__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwelse#init for (self: TKwelse) */
void parser_nodes__TKwelse__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwelse>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwelse#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwelse__init(val* self) {
parser_nodes__TKwelse__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwwhile#init for (self: TKwwhile) */
void parser_nodes__TKwwhile__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwwhile>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwwhile#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwwhile__init(val* self) {
parser_nodes__TKwwhile__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwloop#init for (self: TKwloop) */
void parser_nodes__TKwloop__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwloop>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwloop#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwloop__init(val* self) {
parser_nodes__TKwloop__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwfor#init for (self: TKwfor) */
void parser_nodes__TKwfor__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwfor>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwfor#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwfor__init(val* self) {
parser_nodes__TKwfor__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwin#init for (self: TKwin) */
void parser_nodes__TKwin__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwin>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwin#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwin__init(val* self) {
parser_nodes__TKwin__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwand#init for (self: TKwand) */
void parser_nodes__TKwand__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwand>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwand#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwand__init(val* self) {
parser_nodes__TKwand__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwor#init for (self: TKwor) */
void parser_nodes__TKwor__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwor>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwor#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwor__init(val* self) {
parser_nodes__TKwor__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwimplies#init for (self: TKwimplies) */
void parser_nodes__TKwimplies__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwimplies>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwimplies#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwimplies__init(val* self) {
parser_nodes__TKwimplies__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwnot#init for (self: TKwnot) */
void parser_nodes__TKwnot__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwnot>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwnot#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwnot__init(val* self) {
parser_nodes__TKwnot__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwreturn#init for (self: TKwreturn) */
void parser_nodes__TKwreturn__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwreturn>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwreturn#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwreturn__init(val* self) {
parser_nodes__TKwreturn__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwcontinue#init for (self: TKwcontinue) */
void parser_nodes__TKwcontinue__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwcontinue>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwcontinue#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwcontinue__init(val* self) {
parser_nodes__TKwcontinue__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwbreak#init for (self: TKwbreak) */
void parser_nodes__TKwbreak__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwbreak>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwbreak#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwbreak__init(val* self) {
parser_nodes__TKwbreak__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwabort#init for (self: TKwabort) */
void parser_nodes__TKwabort__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwabort>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwabort#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwabort__init(val* self) {
parser_nodes__TKwabort__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwassert#init for (self: TKwassert) */
void parser_nodes__TKwassert__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwassert>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwassert#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwassert__init(val* self) {
parser_nodes__TKwassert__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwnew#init for (self: TKwnew) */
void parser_nodes__TKwnew__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwnew>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwnew#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwnew__init(val* self) {
parser_nodes__TKwnew__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwisa#init for (self: TKwisa) */
void parser_nodes__TKwisa__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwisa>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwisa#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwisa__init(val* self) {
parser_nodes__TKwisa__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwonce#init for (self: TKwonce) */
void parser_nodes__TKwonce__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwonce>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwonce#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwonce__init(val* self) {
parser_nodes__TKwonce__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwsuper#init for (self: TKwsuper) */
void parser_nodes__TKwsuper__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwsuper>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwsuper#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwsuper__init(val* self) {
parser_nodes__TKwsuper__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwself#init for (self: TKwself) */
void parser_nodes__TKwself__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwself>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwself#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwself__init(val* self) {
parser_nodes__TKwself__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwtrue#init for (self: TKwtrue) */
void parser_nodes__TKwtrue__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwtrue>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwtrue#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwtrue__init(val* self) {
parser_nodes__TKwtrue__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwfalse#init for (self: TKwfalse) */
void parser_nodes__TKwfalse__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwfalse>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwfalse#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwfalse__init(val* self) {
parser_nodes__TKwfalse__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwnull#init for (self: TKwnull) */
void parser_nodes__TKwnull__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwnull>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwnull#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwnull__init(val* self) {
parser_nodes__TKwnull__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwas#init for (self: TKwas) */
void parser_nodes__TKwas__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwas>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwas#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwas__init(val* self) {
parser_nodes__TKwas__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwnullable#init for (self: TKwnullable) */
void parser_nodes__TKwnullable__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwnullable>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwnullable#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwnullable__init(val* self) {
parser_nodes__TKwnullable__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwisset#init for (self: TKwisset) */
void parser_nodes__TKwisset__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwisset>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwisset#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwisset__init(val* self) {
parser_nodes__TKwisset__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwlabel#init for (self: TKwlabel) */
void parser_nodes__TKwlabel__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenKeyword__init]))(self) /* init on <self:TKwlabel>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwlabel#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwlabel__init(val* self) {
parser_nodes__TKwlabel__init(self);
RET_LABEL:;
}
/* method parser_nodes#TKwdebug#init for (self: TKwdebug) */
void parser_nodes__TKwdebug__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TKwdebug>*/;
RET_LABEL:;
}
/* method parser_nodes#TKwdebug#init for (self: Object) */
void VIRTUAL_parser_nodes__TKwdebug__init(val* self) {
parser_nodes__TKwdebug__init(self);
RET_LABEL:;
}
/* method parser_nodes#TOpar#init for (self: TOpar) */
void parser_nodes__TOpar__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TOpar>*/;
RET_LABEL:;
}
/* method parser_nodes#TOpar#init for (self: Object) */
void VIRTUAL_parser_nodes__TOpar__init(val* self) {
parser_nodes__TOpar__init(self);
RET_LABEL:;
}
/* method parser_nodes#TCpar#init for (self: TCpar) */
void parser_nodes__TCpar__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TCpar>*/;
RET_LABEL:;
}
/* method parser_nodes#TCpar#init for (self: Object) */
void VIRTUAL_parser_nodes__TCpar__init(val* self) {
parser_nodes__TCpar__init(self);
RET_LABEL:;
}
/* method parser_nodes#TObra#init for (self: TObra) */
void parser_nodes__TObra__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TObra>*/;
RET_LABEL:;
}
/* method parser_nodes#TObra#init for (self: Object) */
void VIRTUAL_parser_nodes__TObra__init(val* self) {
parser_nodes__TObra__init(self);
RET_LABEL:;
}
/* method parser_nodes#TCbra#init for (self: TCbra) */
void parser_nodes__TCbra__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TCbra>*/;
RET_LABEL:;
}
/* method parser_nodes#TCbra#init for (self: Object) */
void VIRTUAL_parser_nodes__TCbra__init(val* self) {
parser_nodes__TCbra__init(self);
RET_LABEL:;
}
/* method parser_nodes#TComma#init for (self: TComma) */
void parser_nodes__TComma__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TComma>*/;
RET_LABEL:;
}
/* method parser_nodes#TComma#init for (self: Object) */
void VIRTUAL_parser_nodes__TComma__init(val* self) {
parser_nodes__TComma__init(self);
RET_LABEL:;
}
/* method parser_nodes#TColumn#init for (self: TColumn) */
void parser_nodes__TColumn__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TColumn>*/;
RET_LABEL:;
}
/* method parser_nodes#TColumn#init for (self: Object) */
void VIRTUAL_parser_nodes__TColumn__init(val* self) {
parser_nodes__TColumn__init(self);
RET_LABEL:;
}
/* method parser_nodes#TQuad#init for (self: TQuad) */
void parser_nodes__TQuad__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TQuad>*/;
RET_LABEL:;
}
/* method parser_nodes#TQuad#init for (self: Object) */
void VIRTUAL_parser_nodes__TQuad__init(val* self) {
parser_nodes__TQuad__init(self);
RET_LABEL:;
}
/* method parser_nodes#TAssign#init for (self: TAssign) */
void parser_nodes__TAssign__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TAssign>*/;
RET_LABEL:;
}
/* method parser_nodes#TAssign#init for (self: Object) */
void VIRTUAL_parser_nodes__TAssign__init(val* self) {
parser_nodes__TAssign__init(self);
RET_LABEL:;
}
/* method parser_nodes#TokenOperator#to_s for (self: TokenOperator): String */
val* parser_nodes__TokenOperator__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "operator \'";
var5 = 10;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TokenOperator>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TokenOperator#init for (self: TokenOperator) */
void parser_nodes__TokenOperator__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TokenOperator>*/;
RET_LABEL:;
}
/* method parser_nodes#TokenOperator#init for (self: Object) */
void VIRTUAL_parser_nodes__TokenOperator__init(val* self) {
parser_nodes__TokenOperator__init(self);
RET_LABEL:;
}
/* method parser_nodes#TPluseq#init for (self: TPluseq) */
void parser_nodes__TPluseq__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TPluseq>*/;
RET_LABEL:;
}
/* method parser_nodes#TPluseq#init for (self: Object) */
void VIRTUAL_parser_nodes__TPluseq__init(val* self) {
parser_nodes__TPluseq__init(self);
RET_LABEL:;
}
/* method parser_nodes#TMinuseq#init for (self: TMinuseq) */
void parser_nodes__TMinuseq__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TMinuseq>*/;
RET_LABEL:;
}
/* method parser_nodes#TMinuseq#init for (self: Object) */
void VIRTUAL_parser_nodes__TMinuseq__init(val* self) {
parser_nodes__TMinuseq__init(self);
RET_LABEL:;
}
/* method parser_nodes#TDotdotdot#init for (self: TDotdotdot) */
void parser_nodes__TDotdotdot__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TDotdotdot>*/;
RET_LABEL:;
}
/* method parser_nodes#TDotdotdot#init for (self: Object) */
void VIRTUAL_parser_nodes__TDotdotdot__init(val* self) {
parser_nodes__TDotdotdot__init(self);
RET_LABEL:;
}
/* method parser_nodes#TDotdot#init for (self: TDotdot) */
void parser_nodes__TDotdot__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TDotdot>*/;
RET_LABEL:;
}
/* method parser_nodes#TDotdot#init for (self: Object) */
void VIRTUAL_parser_nodes__TDotdot__init(val* self) {
parser_nodes__TDotdot__init(self);
RET_LABEL:;
}
/* method parser_nodes#TDot#init for (self: TDot) */
void parser_nodes__TDot__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TDot>*/;
RET_LABEL:;
}
/* method parser_nodes#TDot#init for (self: Object) */
void VIRTUAL_parser_nodes__TDot__init(val* self) {
parser_nodes__TDot__init(self);
RET_LABEL:;
}
/* method parser_nodes#TPlus#init for (self: TPlus) */
void parser_nodes__TPlus__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TPlus>*/;
RET_LABEL:;
}
/* method parser_nodes#TPlus#init for (self: Object) */
void VIRTUAL_parser_nodes__TPlus__init(val* self) {
parser_nodes__TPlus__init(self);
RET_LABEL:;
}
/* method parser_nodes#TMinus#init for (self: TMinus) */
void parser_nodes__TMinus__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TMinus>*/;
RET_LABEL:;
}
/* method parser_nodes#TMinus#init for (self: Object) */
void VIRTUAL_parser_nodes__TMinus__init(val* self) {
parser_nodes__TMinus__init(self);
RET_LABEL:;
}
/* method parser_nodes#TStar#init for (self: TStar) */
void parser_nodes__TStar__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TStar>*/;
RET_LABEL:;
}
/* method parser_nodes#TStar#init for (self: Object) */
void VIRTUAL_parser_nodes__TStar__init(val* self) {
parser_nodes__TStar__init(self);
RET_LABEL:;
}
/* method parser_nodes#TSlash#init for (self: TSlash) */
void parser_nodes__TSlash__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TSlash>*/;
RET_LABEL:;
}
/* method parser_nodes#TSlash#init for (self: Object) */
void VIRTUAL_parser_nodes__TSlash__init(val* self) {
parser_nodes__TSlash__init(self);
RET_LABEL:;
}
/* method parser_nodes#TPercent#init for (self: TPercent) */
void parser_nodes__TPercent__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TPercent>*/;
RET_LABEL:;
}
/* method parser_nodes#TPercent#init for (self: Object) */
void VIRTUAL_parser_nodes__TPercent__init(val* self) {
parser_nodes__TPercent__init(self);
RET_LABEL:;
}
/* method parser_nodes#TEq#init for (self: TEq) */
void parser_nodes__TEq__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TEq>*/;
RET_LABEL:;
}
/* method parser_nodes#TEq#init for (self: Object) */
void VIRTUAL_parser_nodes__TEq__init(val* self) {
parser_nodes__TEq__init(self);
RET_LABEL:;
}
/* method parser_nodes#TNe#init for (self: TNe) */
void parser_nodes__TNe__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TNe>*/;
RET_LABEL:;
}
/* method parser_nodes#TNe#init for (self: Object) */
void VIRTUAL_parser_nodes__TNe__init(val* self) {
parser_nodes__TNe__init(self);
RET_LABEL:;
}
/* method parser_nodes#TLt#init for (self: TLt) */
void parser_nodes__TLt__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TLt>*/;
RET_LABEL:;
}
/* method parser_nodes#TLt#init for (self: Object) */
void VIRTUAL_parser_nodes__TLt__init(val* self) {
parser_nodes__TLt__init(self);
RET_LABEL:;
}
/* method parser_nodes#TLe#init for (self: TLe) */
void parser_nodes__TLe__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TLe>*/;
RET_LABEL:;
}
/* method parser_nodes#TLe#init for (self: Object) */
void VIRTUAL_parser_nodes__TLe__init(val* self) {
parser_nodes__TLe__init(self);
RET_LABEL:;
}
/* method parser_nodes#TLl#init for (self: TLl) */
void parser_nodes__TLl__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TLl>*/;
RET_LABEL:;
}
/* method parser_nodes#TLl#init for (self: Object) */
void VIRTUAL_parser_nodes__TLl__init(val* self) {
parser_nodes__TLl__init(self);
RET_LABEL:;
}
/* method parser_nodes#TGt#init for (self: TGt) */
void parser_nodes__TGt__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TGt>*/;
RET_LABEL:;
}
/* method parser_nodes#TGt#init for (self: Object) */
void VIRTUAL_parser_nodes__TGt__init(val* self) {
parser_nodes__TGt__init(self);
RET_LABEL:;
}
/* method parser_nodes#TGe#init for (self: TGe) */
void parser_nodes__TGe__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TGe>*/;
RET_LABEL:;
}
/* method parser_nodes#TGe#init for (self: Object) */
void VIRTUAL_parser_nodes__TGe__init(val* self) {
parser_nodes__TGe__init(self);
RET_LABEL:;
}
/* method parser_nodes#TGg#init for (self: TGg) */
void parser_nodes__TGg__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TGg>*/;
RET_LABEL:;
}
/* method parser_nodes#TGg#init for (self: Object) */
void VIRTUAL_parser_nodes__TGg__init(val* self) {
parser_nodes__TGg__init(self);
RET_LABEL:;
}
/* method parser_nodes#TStarship#init for (self: TStarship) */
void parser_nodes__TStarship__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TStarship>*/;
RET_LABEL:;
}
/* method parser_nodes#TStarship#init for (self: Object) */
void VIRTUAL_parser_nodes__TStarship__init(val* self) {
parser_nodes__TStarship__init(self);
RET_LABEL:;
}
/* method parser_nodes#TBang#init for (self: TBang) */
void parser_nodes__TBang__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenOperator__init]))(self) /* init on <self:TBang>*/;
RET_LABEL:;
}
/* method parser_nodes#TBang#init for (self: Object) */
void VIRTUAL_parser_nodes__TBang__init(val* self) {
parser_nodes__TBang__init(self);
RET_LABEL:;
}
/* method parser_nodes#TAt#init for (self: TAt) */
void parser_nodes__TAt__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TAt>*/;
RET_LABEL:;
}
/* method parser_nodes#TAt#init for (self: Object) */
void VIRTUAL_parser_nodes__TAt__init(val* self) {
parser_nodes__TAt__init(self);
RET_LABEL:;
}
/* method parser_nodes#TClassid#to_s for (self: TClassid): String */
val* parser_nodes__TClassid__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "type identifier \'";
var5 = 17;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TClassid>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TClassid#init for (self: TClassid) */
void parser_nodes__TClassid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TClassid>*/;
RET_LABEL:;
}
/* method parser_nodes#TClassid#init for (self: Object) */
void VIRTUAL_parser_nodes__TClassid__init(val* self) {
parser_nodes__TClassid__init(self);
RET_LABEL:;
}
/* method parser_nodes#TId#to_s for (self: TId): String */
val* parser_nodes__TId__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "identifier \'";
var5 = 12;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TId>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TId#init for (self: TId) */
void parser_nodes__TId__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TId>*/;
RET_LABEL:;
}
/* method parser_nodes#TId#init for (self: Object) */
void VIRTUAL_parser_nodes__TId__init(val* self) {
parser_nodes__TId__init(self);
RET_LABEL:;
}
/* method parser_nodes#TAttrid#to_s for (self: TAttrid): String */
val* parser_nodes__TAttrid__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "attribute \'";
var5 = 11;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TAttrid>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TAttrid#init for (self: TAttrid) */
void parser_nodes__TAttrid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TAttrid>*/;
RET_LABEL:;
}
/* method parser_nodes#TAttrid#init for (self: Object) */
void VIRTUAL_parser_nodes__TAttrid__init(val* self) {
parser_nodes__TAttrid__init(self);
RET_LABEL:;
}
/* method parser_nodes#TokenLiteral#to_s for (self: TokenLiteral): String */
val* parser_nodes__TokenLiteral__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "literal value \'";
var5 = 15;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TokenLiteral>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TokenLiteral#init for (self: TokenLiteral) */
void parser_nodes__TokenLiteral__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TokenLiteral>*/;
RET_LABEL:;
}
/* method parser_nodes#TokenLiteral#init for (self: Object) */
void VIRTUAL_parser_nodes__TokenLiteral__init(val* self) {
parser_nodes__TokenLiteral__init(self);
RET_LABEL:;
}
/* method parser_nodes#TNumber#init for (self: TNumber) */
void parser_nodes__TNumber__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TNumber>*/;
RET_LABEL:;
}
/* method parser_nodes#TNumber#init for (self: Object) */
void VIRTUAL_parser_nodes__TNumber__init(val* self) {
parser_nodes__TNumber__init(self);
RET_LABEL:;
}
/* method parser_nodes#TFloat#init for (self: TFloat) */
void parser_nodes__TFloat__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TFloat>*/;
RET_LABEL:;
}
/* method parser_nodes#TFloat#init for (self: Object) */
void VIRTUAL_parser_nodes__TFloat__init(val* self) {
parser_nodes__TFloat__init(self);
RET_LABEL:;
}
/* method parser_nodes#TChar#init for (self: TChar) */
void parser_nodes__TChar__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TChar>*/;
RET_LABEL:;
}
/* method parser_nodes#TChar#init for (self: Object) */
void VIRTUAL_parser_nodes__TChar__init(val* self) {
parser_nodes__TChar__init(self);
RET_LABEL:;
}
/* method parser_nodes#TString#init for (self: TString) */
void parser_nodes__TString__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TString>*/;
RET_LABEL:;
}
/* method parser_nodes#TString#init for (self: Object) */
void VIRTUAL_parser_nodes__TString__init(val* self) {
parser_nodes__TString__init(self);
RET_LABEL:;
}
/* method parser_nodes#TStartString#init for (self: TStartString) */
void parser_nodes__TStartString__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TStartString>*/;
RET_LABEL:;
}
/* method parser_nodes#TStartString#init for (self: Object) */
void VIRTUAL_parser_nodes__TStartString__init(val* self) {
parser_nodes__TStartString__init(self);
RET_LABEL:;
}
/* method parser_nodes#TMidString#init for (self: TMidString) */
void parser_nodes__TMidString__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TMidString>*/;
RET_LABEL:;
}
/* method parser_nodes#TMidString#init for (self: Object) */
void VIRTUAL_parser_nodes__TMidString__init(val* self) {
parser_nodes__TMidString__init(self);
RET_LABEL:;
}
/* method parser_nodes#TEndString#init for (self: TEndString) */
void parser_nodes__TEndString__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__TokenLiteral__init]))(self) /* init on <self:TEndString>*/;
RET_LABEL:;
}
/* method parser_nodes#TEndString#init for (self: Object) */
void VIRTUAL_parser_nodes__TEndString__init(val* self) {
parser_nodes__TEndString__init(self);
RET_LABEL:;
}
/* method parser_nodes#TBadString#to_s for (self: TBadString): String */
val* parser_nodes__TBadString__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "malformed string ";
var5 = 17;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TBadString>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TBadString#init for (self: TBadString) */
void parser_nodes__TBadString__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TBadString>*/;
RET_LABEL:;
}
/* method parser_nodes#TBadString#init for (self: Object) */
void VIRTUAL_parser_nodes__TBadString__init(val* self) {
parser_nodes__TBadString__init(self);
RET_LABEL:;
}
/* method parser_nodes#TBadChar#to_s for (self: TBadChar): String */
val* parser_nodes__TBadChar__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "malformed character ";
var5 = 20;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TBadChar>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
/* method parser_nodes#TBadChar#init for (self: TBadChar) */
void parser_nodes__TBadChar__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TBadChar>*/;
RET_LABEL:;
}
/* method parser_nodes#TBadChar#init for (self: Object) */
void VIRTUAL_parser_nodes__TBadChar__init(val* self) {
parser_nodes__TBadChar__init(self);
RET_LABEL:;
}
/* method parser_nodes#TExternCodeSegment#init for (self: TExternCodeSegment) */
void parser_nodes__TExternCodeSegment__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:TExternCodeSegment>*/;
RET_LABEL:;
}
/* method parser_nodes#TExternCodeSegment#init for (self: Object) */
void VIRTUAL_parser_nodes__TExternCodeSegment__init(val* self) {
parser_nodes__TExternCodeSegment__init(self);
RET_LABEL:;
}
/* method parser_nodes#EOF#to_s for (self: EOF): String */
val* parser_nodes__EOF__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
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
/* method parser_nodes#EOF#init for (self: EOF) */
void parser_nodes__EOF__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__init]))(self) /* init on <self:EOF>*/;
RET_LABEL:;
}
/* method parser_nodes#EOF#init for (self: Object) */
void VIRTUAL_parser_nodes__EOF__init(val* self) {
parser_nodes__EOF__init(self);
RET_LABEL:;
}
/* method parser_nodes#AError#init for (self: AError) */
void parser_nodes__AError__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__EOF__init]))(self) /* init on <self:AError>*/;
RET_LABEL:;
}
/* method parser_nodes#AError#init for (self: Object) */
void VIRTUAL_parser_nodes__AError__init(val* self) {
parser_nodes__AError__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALexerError#init for (self: ALexerError) */
void parser_nodes__ALexerError__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AError__init]))(self) /* init on <self:ALexerError>*/;
RET_LABEL:;
}
/* method parser_nodes#ALexerError#init for (self: Object) */
void VIRTUAL_parser_nodes__ALexerError__init(val* self) {
parser_nodes__ALexerError__init(self);
RET_LABEL:;
}
/* method parser_nodes#AParserError#init for (self: AParserError) */
void parser_nodes__AParserError__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AError__init]))(self) /* init on <self:AParserError>*/;
RET_LABEL:;
}
/* method parser_nodes#AParserError#init for (self: Object) */
void VIRTUAL_parser_nodes__AParserError__init(val* self) {
parser_nodes__AParserError__init(self);
RET_LABEL:;
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
var1 = parser_nodes__AModule__n_moduledecl(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_moduledecl= for (self: AModule, nullable AModuledecl) */
void parser_nodes__AModule__n_moduledecl_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = p0; /* _n_moduledecl on <self:AModule> */
RET_LABEL:;
}
/* method parser_nodes#AModule#n_moduledecl= for (self: Object, nullable AModuledecl) */
void VIRTUAL_parser_nodes__AModule__n_moduledecl_61d(val* self, val* p0) {
parser_nodes__AModule__n_moduledecl_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AModule#n_imports for (self: AModule): ANodes[AImport] */
val* parser_nodes__AModule__n_imports(val* self) {
val* var /* : ANodes[AImport] */;
val* var1 /* : ANodes[AImport] */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 580);
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
var1 = parser_nodes__AModule__n_imports(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_extern_code_blocks for (self: AModule): ANodes[AExternCodeBlock] */
val* parser_nodes__AModule__n_extern_code_blocks(val* self) {
val* var /* : ANodes[AExternCodeBlock] */;
val* var1 /* : ANodes[AExternCodeBlock] */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 581);
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
var1 = parser_nodes__AModule__n_extern_code_blocks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#n_classdefs for (self: AModule): ANodes[AClassdef] */
val* parser_nodes__AModule__n_classdefs(val* self) {
val* var /* : ANodes[AClassdef] */;
val* var1 /* : ANodes[AClassdef] */;
var1 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 582);
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
var1 = parser_nodes__AModule__n_classdefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModule#init for (self: AModule) */
void parser_nodes__AModule__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AModule>*/;
RET_LABEL:;
}
/* method parser_nodes#AModule#init for (self: Object) */
void VIRTUAL_parser_nodes__AModule__init(val* self) {
parser_nodes__AModule__init(self);
RET_LABEL:;
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
var1 = parser_nodes__AModuledecl__n_doc(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_doc= for (self: AModuledecl, nullable ADoc) */
void parser_nodes__AModuledecl__n_doc_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = p0; /* _n_doc on <self:AModuledecl> */
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_nodes__AModuledecl__n_doc_61d(val* self, val* p0) {
parser_nodes__AModuledecl__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_kwmodule for (self: AModuledecl): TKwmodule */
val* parser_nodes__AModuledecl__n_kwmodule(val* self) {
val* var /* : TKwmodule */;
val* var1 /* : TKwmodule */;
var1 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmodule");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 589);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_kwmodule for (self: Object): TKwmodule */
val* VIRTUAL_parser_nodes__AModuledecl__n_kwmodule(val* self) {
val* var /* : TKwmodule */;
val* var1 /* : TKwmodule */;
var1 = parser_nodes__AModuledecl__n_kwmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_kwmodule= for (self: AModuledecl, TKwmodule) */
void parser_nodes__AModuledecl__n_kwmodule_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val = p0; /* _n_kwmodule on <self:AModuledecl> */
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_kwmodule= for (self: Object, TKwmodule) */
void VIRTUAL_parser_nodes__AModuledecl__n_kwmodule_61d(val* self, val* p0) {
parser_nodes__AModuledecl__n_kwmodule_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_name for (self: AModuledecl): AModuleName */
val* parser_nodes__AModuledecl__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_name");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 590);
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
var1 = parser_nodes__AModuledecl__n_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuledecl#n_name= for (self: AModuledecl, AModuleName) */
void parser_nodes__AModuledecl__n_name_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val = p0; /* _n_name on <self:AModuledecl> */
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#n_name= for (self: Object, AModuleName) */
void VIRTUAL_parser_nodes__AModuledecl__n_name_61d(val* self, val* p0) {
parser_nodes__AModuledecl__n_name_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#init for (self: AModuledecl) */
void parser_nodes__AModuledecl__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AModuledecl>*/;
RET_LABEL:;
}
/* method parser_nodes#AModuledecl#init for (self: Object) */
void VIRTUAL_parser_nodes__AModuledecl__init(val* self) {
parser_nodes__AModuledecl__init(self);
RET_LABEL:;
}
/* method parser_nodes#AImport#init for (self: AImport) */
void parser_nodes__AImport__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AImport>*/;
RET_LABEL:;
}
/* method parser_nodes#AImport#init for (self: Object) */
void VIRTUAL_parser_nodes__AImport__init(val* self) {
parser_nodes__AImport__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_visibility for (self: AStdImport): AVisibility */
val* parser_nodes__AStdImport__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 601);
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
var1 = parser_nodes__AStdImport__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_visibility= for (self: AStdImport, AVisibility) */
void parser_nodes__AStdImport__n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val = p0; /* _n_visibility on <self:AStdImport> */
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_nodes__AStdImport__n_visibility_61d(val* self, val* p0) {
parser_nodes__AStdImport__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_kwimport for (self: AStdImport): TKwimport */
val* parser_nodes__AStdImport__n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 602);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_kwimport for (self: Object): TKwimport */
val* VIRTUAL_parser_nodes__AStdImport__n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = parser_nodes__AStdImport__n_kwimport(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_kwimport= for (self: AStdImport, TKwimport) */
void parser_nodes__AStdImport__n_kwimport_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val = p0; /* _n_kwimport on <self:AStdImport> */
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_nodes__AStdImport__n_kwimport_61d(val* self, val* p0) {
parser_nodes__AStdImport__n_kwimport_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_name for (self: AStdImport): AModuleName */
val* parser_nodes__AStdImport__n_name(val* self) {
val* var /* : AModuleName */;
val* var1 /* : AModuleName */;
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_name");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 603);
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
var1 = parser_nodes__AStdImport__n_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdImport#n_name= for (self: AStdImport, AModuleName) */
void parser_nodes__AStdImport__n_name_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdImport___n_name].val = p0; /* _n_name on <self:AStdImport> */
RET_LABEL:;
}
/* method parser_nodes#AStdImport#n_name= for (self: Object, AModuleName) */
void VIRTUAL_parser_nodes__AStdImport__n_name_61d(val* self, val* p0) {
parser_nodes__AStdImport__n_name_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdImport#init for (self: AStdImport) */
void parser_nodes__AStdImport__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AImport__init]))(self) /* init on <self:AStdImport>*/;
RET_LABEL:;
}
/* method parser_nodes#AStdImport#init for (self: Object) */
void VIRTUAL_parser_nodes__AStdImport__init(val* self) {
parser_nodes__AStdImport__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_visibility for (self: ANoImport): AVisibility */
val* parser_nodes__ANoImport__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 609);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__ANoImport__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = parser_nodes__ANoImport__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_visibility= for (self: ANoImport, AVisibility) */
void parser_nodes__ANoImport__n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val = p0; /* _n_visibility on <self:ANoImport> */
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_nodes__ANoImport__n_visibility_61d(val* self, val* p0) {
parser_nodes__ANoImport__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_kwimport for (self: ANoImport): TKwimport */
val* parser_nodes__ANoImport__n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 610);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_kwimport for (self: Object): TKwimport */
val* VIRTUAL_parser_nodes__ANoImport__n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = parser_nodes__ANoImport__n_kwimport(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_kwimport= for (self: ANoImport, TKwimport) */
void parser_nodes__ANoImport__n_kwimport_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val = p0; /* _n_kwimport on <self:ANoImport> */
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_nodes__ANoImport__n_kwimport_61d(val* self, val* p0) {
parser_nodes__ANoImport__n_kwimport_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_kwend for (self: ANoImport): TKwend */
val* parser_nodes__ANoImport__n_kwend(val* self) {
val* var /* : TKwend */;
val* var1 /* : TKwend */;
var1 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwend");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 611);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_kwend for (self: Object): TKwend */
val* VIRTUAL_parser_nodes__ANoImport__n_kwend(val* self) {
val* var /* : TKwend */;
val* var1 /* : TKwend */;
var1 = parser_nodes__ANoImport__n_kwend(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANoImport#n_kwend= for (self: ANoImport, TKwend) */
void parser_nodes__ANoImport__n_kwend_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val = p0; /* _n_kwend on <self:ANoImport> */
RET_LABEL:;
}
/* method parser_nodes#ANoImport#n_kwend= for (self: Object, TKwend) */
void VIRTUAL_parser_nodes__ANoImport__n_kwend_61d(val* self, val* p0) {
parser_nodes__ANoImport__n_kwend_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANoImport#init for (self: ANoImport) */
void parser_nodes__ANoImport__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AImport__init]))(self) /* init on <self:ANoImport>*/;
RET_LABEL:;
}
/* method parser_nodes#ANoImport#init for (self: Object) */
void VIRTUAL_parser_nodes__ANoImport__init(val* self) {
parser_nodes__ANoImport__init(self);
RET_LABEL:;
}
/* method parser_nodes#AVisibility#init for (self: AVisibility) */
void parser_nodes__AVisibility__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AVisibility>*/;
RET_LABEL:;
}
/* method parser_nodes#AVisibility#init for (self: Object) */
void VIRTUAL_parser_nodes__AVisibility__init(val* self) {
parser_nodes__AVisibility__init(self);
RET_LABEL:;
}
/* method parser_nodes#APublicVisibility#init for (self: APublicVisibility) */
void parser_nodes__APublicVisibility__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVisibility__init]))(self) /* init on <self:APublicVisibility>*/;
RET_LABEL:;
}
/* method parser_nodes#APublicVisibility#init for (self: Object) */
void VIRTUAL_parser_nodes__APublicVisibility__init(val* self) {
parser_nodes__APublicVisibility__init(self);
RET_LABEL:;
}
/* method parser_nodes#APrivateVisibility#n_kwprivate for (self: APrivateVisibility): TKwprivate */
val* parser_nodes__APrivateVisibility__n_kwprivate(val* self) {
val* var /* : TKwprivate */;
val* var1 /* : TKwprivate */;
var1 = self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwprivate");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 628);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APrivateVisibility#n_kwprivate for (self: Object): TKwprivate */
val* VIRTUAL_parser_nodes__APrivateVisibility__n_kwprivate(val* self) {
val* var /* : TKwprivate */;
val* var1 /* : TKwprivate */;
var1 = parser_nodes__APrivateVisibility__n_kwprivate(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APrivateVisibility#n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void parser_nodes__APrivateVisibility__n_kwprivate_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val = p0; /* _n_kwprivate on <self:APrivateVisibility> */
RET_LABEL:;
}
/* method parser_nodes#APrivateVisibility#n_kwprivate= for (self: Object, TKwprivate) */
void VIRTUAL_parser_nodes__APrivateVisibility__n_kwprivate_61d(val* self, val* p0) {
parser_nodes__APrivateVisibility__n_kwprivate_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#APrivateVisibility#init for (self: APrivateVisibility) */
void parser_nodes__APrivateVisibility__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVisibility__init]))(self) /* init on <self:APrivateVisibility>*/;
RET_LABEL:;
}
/* method parser_nodes#APrivateVisibility#init for (self: Object) */
void VIRTUAL_parser_nodes__APrivateVisibility__init(val* self) {
parser_nodes__APrivateVisibility__init(self);
RET_LABEL:;
}
/* method parser_nodes#AProtectedVisibility#n_kwprotected for (self: AProtectedVisibility): TKwprotected */
val* parser_nodes__AProtectedVisibility__n_kwprotected(val* self) {
val* var /* : TKwprotected */;
val* var1 /* : TKwprotected */;
var1 = self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwprotected");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 632);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProtectedVisibility#n_kwprotected for (self: Object): TKwprotected */
val* VIRTUAL_parser_nodes__AProtectedVisibility__n_kwprotected(val* self) {
val* var /* : TKwprotected */;
val* var1 /* : TKwprotected */;
var1 = parser_nodes__AProtectedVisibility__n_kwprotected(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProtectedVisibility#n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void parser_nodes__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val = p0; /* _n_kwprotected on <self:AProtectedVisibility> */
RET_LABEL:;
}
/* method parser_nodes#AProtectedVisibility#n_kwprotected= for (self: Object, TKwprotected) */
void VIRTUAL_parser_nodes__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0) {
parser_nodes__AProtectedVisibility__n_kwprotected_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AProtectedVisibility#init for (self: AProtectedVisibility) */
void parser_nodes__AProtectedVisibility__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVisibility__init]))(self) /* init on <self:AProtectedVisibility>*/;
RET_LABEL:;
}
/* method parser_nodes#AProtectedVisibility#init for (self: Object) */
void VIRTUAL_parser_nodes__AProtectedVisibility__init(val* self) {
parser_nodes__AProtectedVisibility__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIntrudeVisibility#n_kwintrude for (self: AIntrudeVisibility): TKwintrude */
val* parser_nodes__AIntrudeVisibility__n_kwintrude(val* self) {
val* var /* : TKwintrude */;
val* var1 /* : TKwintrude */;
var1 = self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwintrude");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 636);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIntrudeVisibility#n_kwintrude for (self: Object): TKwintrude */
val* VIRTUAL_parser_nodes__AIntrudeVisibility__n_kwintrude(val* self) {
val* var /* : TKwintrude */;
val* var1 /* : TKwintrude */;
var1 = parser_nodes__AIntrudeVisibility__n_kwintrude(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIntrudeVisibility#n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void parser_nodes__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val = p0; /* _n_kwintrude on <self:AIntrudeVisibility> */
RET_LABEL:;
}
/* method parser_nodes#AIntrudeVisibility#n_kwintrude= for (self: Object, TKwintrude) */
void VIRTUAL_parser_nodes__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0) {
parser_nodes__AIntrudeVisibility__n_kwintrude_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIntrudeVisibility#init for (self: AIntrudeVisibility) */
void parser_nodes__AIntrudeVisibility__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVisibility__init]))(self) /* init on <self:AIntrudeVisibility>*/;
RET_LABEL:;
}
/* method parser_nodes#AIntrudeVisibility#init for (self: Object) */
void VIRTUAL_parser_nodes__AIntrudeVisibility__init(val* self) {
parser_nodes__AIntrudeVisibility__init(self);
RET_LABEL:;
}
/* method parser_nodes#AClassdef#n_propdefs for (self: AClassdef): ANodes[APropdef] */
val* parser_nodes__AClassdef__n_propdefs(val* self) {
val* var /* : ANodes[APropdef] */;
val* var1 /* : ANodes[APropdef] */;
var1 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 643);
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
var1 = parser_nodes__AClassdef__n_propdefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AClassdef#init for (self: AClassdef) */
void parser_nodes__AClassdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AClassdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AClassdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AClassdef__init(val* self) {
parser_nodes__AClassdef__init(self);
RET_LABEL:;
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
var1 = parser_nodes__AStdClassdef__n_doc(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_doc= for (self: AStdClassdef, nullable ADoc) */
void parser_nodes__AStdClassdef__n_doc_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = p0; /* _n_doc on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_nodes__AStdClassdef__n_doc_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_doc_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AStdClassdef__n_kwredef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwredef= for (self: AStdClassdef, nullable TKwredef) */
void parser_nodes__AStdClassdef__n_kwredef_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = p0; /* _n_kwredef on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_nodes__AStdClassdef__n_kwredef_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_visibility for (self: AStdClassdef): AVisibility */
val* parser_nodes__AStdClassdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 651);
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
var1 = parser_nodes__AStdClassdef__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_visibility= for (self: AStdClassdef, AVisibility) */
void parser_nodes__AStdClassdef__n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val = p0; /* _n_visibility on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_nodes__AStdClassdef__n_visibility_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_classkind for (self: AStdClassdef): AClasskind */
val* parser_nodes__AStdClassdef__n_classkind(val* self) {
val* var /* : AClasskind */;
val* var1 /* : AClasskind */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classkind");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 652);
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
var1 = parser_nodes__AStdClassdef__n_classkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_classkind= for (self: AStdClassdef, AClasskind) */
void parser_nodes__AStdClassdef__n_classkind_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val = p0; /* _n_classkind on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_classkind= for (self: Object, AClasskind) */
void VIRTUAL_parser_nodes__AStdClassdef__n_classkind_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_classkind_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AStdClassdef__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_id= for (self: AStdClassdef, nullable TClassid) */
void parser_nodes__AStdClassdef__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = p0; /* _n_id on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_id= for (self: Object, nullable TClassid) */
void VIRTUAL_parser_nodes__AStdClassdef__n_id_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_formaldefs for (self: AStdClassdef): ANodes[AFormaldef] */
val* parser_nodes__AStdClassdef__n_formaldefs(val* self) {
val* var /* : ANodes[AFormaldef] */;
val* var1 /* : ANodes[AFormaldef] */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 654);
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
var1 = parser_nodes__AStdClassdef__n_formaldefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block for (self: AStdClassdef): nullable AExternCodeBlock */
val* parser_nodes__AStdClassdef__n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block for (self: Object): nullable AExternCodeBlock */
val* VIRTUAL_parser_nodes__AStdClassdef__n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = parser_nodes__AStdClassdef__n_extern_code_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void parser_nodes__AStdClassdef__n_extern_code_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = p0; /* _n_extern_code_block on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_nodes__AStdClassdef__n_extern_code_block_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_extern_code_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_superclasses for (self: AStdClassdef): ANodes[ASuperclass] */
val* parser_nodes__AStdClassdef__n_superclasses(val* self) {
val* var /* : ANodes[ASuperclass] */;
val* var1 /* : ANodes[ASuperclass] */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 656);
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
var1 = parser_nodes__AStdClassdef__n_superclasses(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwend for (self: AStdClassdef): TKwend */
val* parser_nodes__AStdClassdef__n_kwend(val* self) {
val* var /* : TKwend */;
val* var1 /* : TKwend */;
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwend");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 657);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwend for (self: Object): TKwend */
val* VIRTUAL_parser_nodes__AStdClassdef__n_kwend(val* self) {
val* var /* : TKwend */;
val* var1 /* : TKwend */;
var1 = parser_nodes__AStdClassdef__n_kwend(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStdClassdef#n_kwend= for (self: AStdClassdef, TKwend) */
void parser_nodes__AStdClassdef__n_kwend_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val = p0; /* _n_kwend on <self:AStdClassdef> */
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#n_kwend= for (self: Object, TKwend) */
void VIRTUAL_parser_nodes__AStdClassdef__n_kwend_61d(val* self, val* p0) {
parser_nodes__AStdClassdef__n_kwend_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#hot_location for (self: AStdClassdef): Location */
val* parser_nodes__AStdClassdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable TClassid */;
val* var2 /* : Location */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AStdClassdef__n_id]))(self) /* n_id on <self:AStdClassdef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 658);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__ANode__location]))(var1) /* location on <var1:nullable TClassid>*/;
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
/* method parser_nodes#AStdClassdef#init for (self: AStdClassdef) */
void parser_nodes__AStdClassdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClassdef__init]))(self) /* init on <self:AStdClassdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AStdClassdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AStdClassdef__init(val* self) {
parser_nodes__AStdClassdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#ATopClassdef#init for (self: ATopClassdef) */
void parser_nodes__ATopClassdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClassdef__init]))(self) /* init on <self:ATopClassdef>*/;
RET_LABEL:;
}
/* method parser_nodes#ATopClassdef#init for (self: Object) */
void VIRTUAL_parser_nodes__ATopClassdef__init(val* self) {
parser_nodes__ATopClassdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMainClassdef#init for (self: AMainClassdef) */
void parser_nodes__AMainClassdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClassdef__init]))(self) /* init on <self:AMainClassdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AMainClassdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AMainClassdef__init(val* self) {
parser_nodes__AMainClassdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AClasskind#init for (self: AClasskind) */
void parser_nodes__AClasskind__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AClasskind>*/;
RET_LABEL:;
}
/* method parser_nodes#AClasskind#init for (self: Object) */
void VIRTUAL_parser_nodes__AClasskind__init(val* self) {
parser_nodes__AClasskind__init(self);
RET_LABEL:;
}
/* method parser_nodes#AConcreteClasskind#n_kwclass for (self: AConcreteClasskind): TKwclass */
val* parser_nodes__AConcreteClasskind__n_kwclass(val* self) {
val* var /* : TKwclass */;
val* var1 /* : TKwclass */;
var1 = self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwclass");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 677);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteClasskind#n_kwclass for (self: Object): TKwclass */
val* VIRTUAL_parser_nodes__AConcreteClasskind__n_kwclass(val* self) {
val* var /* : TKwclass */;
val* var1 /* : TKwclass */;
var1 = parser_nodes__AConcreteClasskind__n_kwclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteClasskind#n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void parser_nodes__AConcreteClasskind__n_kwclass_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val = p0; /* _n_kwclass on <self:AConcreteClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AConcreteClasskind#n_kwclass= for (self: Object, TKwclass) */
void VIRTUAL_parser_nodes__AConcreteClasskind__n_kwclass_61d(val* self, val* p0) {
parser_nodes__AConcreteClasskind__n_kwclass_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AConcreteClasskind#init for (self: AConcreteClasskind) */
void parser_nodes__AConcreteClasskind__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClasskind__init]))(self) /* init on <self:AConcreteClasskind>*/;
RET_LABEL:;
}
/* method parser_nodes#AConcreteClasskind#init for (self: Object) */
void VIRTUAL_parser_nodes__AConcreteClasskind__init(val* self) {
parser_nodes__AConcreteClasskind__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#n_kwabstract for (self: AAbstractClasskind): TKwabstract */
val* parser_nodes__AAbstractClasskind__n_kwabstract(val* self) {
val* var /* : TKwabstract */;
val* var1 /* : TKwabstract */;
var1 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabstract");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 681);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbstractClasskind#n_kwabstract for (self: Object): TKwabstract */
val* VIRTUAL_parser_nodes__AAbstractClasskind__n_kwabstract(val* self) {
val* var /* : TKwabstract */;
val* var1 /* : TKwabstract */;
var1 = parser_nodes__AAbstractClasskind__n_kwabstract(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbstractClasskind#n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void parser_nodes__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val = p0; /* _n_kwabstract on <self:AAbstractClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#n_kwabstract= for (self: Object, TKwabstract) */
void VIRTUAL_parser_nodes__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0) {
parser_nodes__AAbstractClasskind__n_kwabstract_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#n_kwclass for (self: AAbstractClasskind): TKwclass */
val* parser_nodes__AAbstractClasskind__n_kwclass(val* self) {
val* var /* : TKwclass */;
val* var1 /* : TKwclass */;
var1 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwclass");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 682);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbstractClasskind#n_kwclass for (self: Object): TKwclass */
val* VIRTUAL_parser_nodes__AAbstractClasskind__n_kwclass(val* self) {
val* var /* : TKwclass */;
val* var1 /* : TKwclass */;
var1 = parser_nodes__AAbstractClasskind__n_kwclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbstractClasskind#n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void parser_nodes__AAbstractClasskind__n_kwclass_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val = p0; /* _n_kwclass on <self:AAbstractClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#n_kwclass= for (self: Object, TKwclass) */
void VIRTUAL_parser_nodes__AAbstractClasskind__n_kwclass_61d(val* self, val* p0) {
parser_nodes__AAbstractClasskind__n_kwclass_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#init for (self: AAbstractClasskind) */
void parser_nodes__AAbstractClasskind__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClasskind__init]))(self) /* init on <self:AAbstractClasskind>*/;
RET_LABEL:;
}
/* method parser_nodes#AAbstractClasskind#init for (self: Object) */
void VIRTUAL_parser_nodes__AAbstractClasskind__init(val* self) {
parser_nodes__AAbstractClasskind__init(self);
RET_LABEL:;
}
/* method parser_nodes#AInterfaceClasskind#n_kwinterface for (self: AInterfaceClasskind): TKwinterface */
val* parser_nodes__AInterfaceClasskind__n_kwinterface(val* self) {
val* var /* : TKwinterface */;
val* var1 /* : TKwinterface */;
var1 = self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinterface");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 686);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInterfaceClasskind#n_kwinterface for (self: Object): TKwinterface */
val* VIRTUAL_parser_nodes__AInterfaceClasskind__n_kwinterface(val* self) {
val* var /* : TKwinterface */;
val* var1 /* : TKwinterface */;
var1 = parser_nodes__AInterfaceClasskind__n_kwinterface(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInterfaceClasskind#n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void parser_nodes__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val = p0; /* _n_kwinterface on <self:AInterfaceClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AInterfaceClasskind#n_kwinterface= for (self: Object, TKwinterface) */
void VIRTUAL_parser_nodes__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0) {
parser_nodes__AInterfaceClasskind__n_kwinterface_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInterfaceClasskind#init for (self: AInterfaceClasskind) */
void parser_nodes__AInterfaceClasskind__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClasskind__init]))(self) /* init on <self:AInterfaceClasskind>*/;
RET_LABEL:;
}
/* method parser_nodes#AInterfaceClasskind#init for (self: Object) */
void VIRTUAL_parser_nodes__AInterfaceClasskind__init(val* self) {
parser_nodes__AInterfaceClasskind__init(self);
RET_LABEL:;
}
/* method parser_nodes#AEnumClasskind#n_kwenum for (self: AEnumClasskind): TKwenum */
val* parser_nodes__AEnumClasskind__n_kwenum(val* self) {
val* var /* : TKwenum */;
val* var1 /* : TKwenum */;
var1 = self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwenum");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 690);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEnumClasskind#n_kwenum for (self: Object): TKwenum */
val* VIRTUAL_parser_nodes__AEnumClasskind__n_kwenum(val* self) {
val* var /* : TKwenum */;
val* var1 /* : TKwenum */;
var1 = parser_nodes__AEnumClasskind__n_kwenum(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEnumClasskind#n_kwenum= for (self: AEnumClasskind, TKwenum) */
void parser_nodes__AEnumClasskind__n_kwenum_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val = p0; /* _n_kwenum on <self:AEnumClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AEnumClasskind#n_kwenum= for (self: Object, TKwenum) */
void VIRTUAL_parser_nodes__AEnumClasskind__n_kwenum_61d(val* self, val* p0) {
parser_nodes__AEnumClasskind__n_kwenum_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AEnumClasskind#init for (self: AEnumClasskind) */
void parser_nodes__AEnumClasskind__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClasskind__init]))(self) /* init on <self:AEnumClasskind>*/;
RET_LABEL:;
}
/* method parser_nodes#AEnumClasskind#init for (self: Object) */
void VIRTUAL_parser_nodes__AEnumClasskind__init(val* self) {
parser_nodes__AEnumClasskind__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#n_kwextern for (self: AExternClasskind): TKwextern */
val* parser_nodes__AExternClasskind__n_kwextern(val* self) {
val* var /* : TKwextern */;
val* var1 /* : TKwextern */;
var1 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwextern");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 694);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternClasskind#n_kwextern for (self: Object): TKwextern */
val* VIRTUAL_parser_nodes__AExternClasskind__n_kwextern(val* self) {
val* var /* : TKwextern */;
val* var1 /* : TKwextern */;
var1 = parser_nodes__AExternClasskind__n_kwextern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternClasskind#n_kwextern= for (self: AExternClasskind, TKwextern) */
void parser_nodes__AExternClasskind__n_kwextern_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val = p0; /* _n_kwextern on <self:AExternClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#n_kwextern= for (self: Object, TKwextern) */
void VIRTUAL_parser_nodes__AExternClasskind__n_kwextern_61d(val* self, val* p0) {
parser_nodes__AExternClasskind__n_kwextern_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#n_kwclass for (self: AExternClasskind): nullable TKwclass */
val* parser_nodes__AExternClasskind__n_kwclass(val* self) {
val* var /* : nullable TKwclass */;
val* var1 /* : nullable TKwclass */;
var1 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternClasskind#n_kwclass for (self: Object): nullable TKwclass */
val* VIRTUAL_parser_nodes__AExternClasskind__n_kwclass(val* self) {
val* var /* : nullable TKwclass */;
val* var1 /* : nullable TKwclass */;
var1 = parser_nodes__AExternClasskind__n_kwclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternClasskind#n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void parser_nodes__AExternClasskind__n_kwclass_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = p0; /* _n_kwclass on <self:AExternClasskind> */
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#n_kwclass= for (self: Object, nullable TKwclass) */
void VIRTUAL_parser_nodes__AExternClasskind__n_kwclass_61d(val* self, val* p0) {
parser_nodes__AExternClasskind__n_kwclass_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#init for (self: AExternClasskind) */
void parser_nodes__AExternClasskind__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AClasskind__init]))(self) /* init on <self:AExternClasskind>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternClasskind#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternClasskind__init(val* self) {
parser_nodes__AExternClasskind__init(self);
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#n_id for (self: AFormaldef): TClassid */
val* parser_nodes__AFormaldef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 701);
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
var1 = parser_nodes__AFormaldef__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_id= for (self: AFormaldef, TClassid) */
void parser_nodes__AFormaldef__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val = p0; /* _n_id on <self:AFormaldef> */
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_nodes__AFormaldef__n_id_61d(val* self, val* p0) {
parser_nodes__AFormaldef__n_id_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AFormaldef__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFormaldef#n_type= for (self: AFormaldef, nullable AType) */
void parser_nodes__AFormaldef__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = p0; /* _n_type on <self:AFormaldef> */
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_nodes__AFormaldef__n_type_61d(val* self, val* p0) {
parser_nodes__AFormaldef__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#init for (self: AFormaldef) */
void parser_nodes__AFormaldef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AFormaldef>*/;
RET_LABEL:;
}
/* method parser_nodes#AFormaldef#init for (self: Object) */
void VIRTUAL_parser_nodes__AFormaldef__init(val* self) {
parser_nodes__AFormaldef__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASuperclass#n_kwsuper for (self: ASuperclass): TKwsuper */
val* parser_nodes__ASuperclass__n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 709);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_kwsuper for (self: Object): TKwsuper */
val* VIRTUAL_parser_nodes__ASuperclass__n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = parser_nodes__ASuperclass__n_kwsuper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_kwsuper= for (self: ASuperclass, TKwsuper) */
void parser_nodes__ASuperclass__n_kwsuper_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val = p0; /* _n_kwsuper on <self:ASuperclass> */
RET_LABEL:;
}
/* method parser_nodes#ASuperclass#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_nodes__ASuperclass__n_kwsuper_61d(val* self, val* p0) {
parser_nodes__ASuperclass__n_kwsuper_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASuperclass#n_type for (self: ASuperclass): AType */
val* parser_nodes__ASuperclass__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 710);
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
var1 = parser_nodes__ASuperclass__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperclass#n_type= for (self: ASuperclass, AType) */
void parser_nodes__ASuperclass__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val = p0; /* _n_type on <self:ASuperclass> */
RET_LABEL:;
}
/* method parser_nodes#ASuperclass#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ASuperclass__n_type_61d(val* self, val* p0) {
parser_nodes__ASuperclass__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASuperclass#init for (self: ASuperclass) */
void parser_nodes__ASuperclass__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:ASuperclass>*/;
RET_LABEL:;
}
/* method parser_nodes#ASuperclass#init for (self: Object) */
void VIRTUAL_parser_nodes__ASuperclass__init(val* self) {
parser_nodes__ASuperclass__init(self);
RET_LABEL:;
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
var1 = parser_nodes__APropdef__n_doc(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APropdef#n_doc= for (self: APropdef, nullable ADoc) */
void parser_nodes__APropdef__n_doc_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = p0; /* _n_doc on <self:APropdef> */
RET_LABEL:;
}
/* method parser_nodes#APropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_nodes__APropdef__n_doc_61d(val* self, val* p0) {
parser_nodes__APropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#APropdef#init for (self: APropdef) */
void parser_nodes__APropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:APropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#APropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__APropdef__init(val* self) {
parser_nodes__APropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_kwredef for (self: AAttrPropdef): nullable TKwredef */
val* parser_nodes__AAttrPropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__AAttrPropdef__n_kwredef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_kwredef= for (self: AAttrPropdef, nullable TKwredef) */
void parser_nodes__AAttrPropdef__n_kwredef_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val = p0; /* _n_kwredef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_kwredef_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_visibility for (self: AAttrPropdef): AVisibility */
val* parser_nodes__AAttrPropdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 724);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = parser_nodes__AAttrPropdef__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_visibility= for (self: AAttrPropdef, AVisibility) */
void parser_nodes__AAttrPropdef__n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val = p0; /* _n_visibility on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_visibility_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_kwvar for (self: AAttrPropdef): TKwvar */
val* parser_nodes__AAttrPropdef__n_kwvar(val* self) {
val* var /* : TKwvar */;
val* var1 /* : TKwvar */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 725);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_kwvar for (self: Object): TKwvar */
val* VIRTUAL_parser_nodes__AAttrPropdef__n_kwvar(val* self) {
val* var /* : TKwvar */;
val* var1 /* : TKwvar */;
var1 = parser_nodes__AAttrPropdef__n_kwvar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_kwvar= for (self: AAttrPropdef, TKwvar) */
void parser_nodes__AAttrPropdef__n_kwvar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val = p0; /* _n_kwvar on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_kwvar_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_kwvar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_id for (self: AAttrPropdef): nullable TAttrid */
val* parser_nodes__AAttrPropdef__n_id(val* self) {
val* var /* : nullable TAttrid */;
val* var1 /* : nullable TAttrid */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val; /* _n_id on <self:AAttrPropdef> */
var = var1;
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
/* method parser_nodes#AAttrPropdef#n_id= for (self: AAttrPropdef, nullable TAttrid) */
void parser_nodes__AAttrPropdef__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val = p0; /* _n_id on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_id= for (self: Object, nullable TAttrid) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_id_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_id2 for (self: AAttrPropdef): nullable TId */
val* parser_nodes__AAttrPropdef__n_id2(val* self) {
val* var /* : nullable TId */;
val* var1 /* : nullable TId */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
var = var1;
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
/* method parser_nodes#AAttrPropdef#n_id2= for (self: AAttrPropdef, nullable TId) */
void parser_nodes__AAttrPropdef__n_id2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = p0; /* _n_id2 on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_id2= for (self: Object, nullable TId) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_id2_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_id2_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AAttrPropdef__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_type= for (self: AAttrPropdef, nullable AType) */
void parser_nodes__AAttrPropdef__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = p0; /* _n_type on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_type_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_readable for (self: AAttrPropdef): nullable AAble */
val* parser_nodes__AAttrPropdef__n_readable(val* self) {
val* var /* : nullable AAble */;
val* var1 /* : nullable AAble */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val; /* _n_readable on <self:AAttrPropdef> */
var = var1;
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
/* method parser_nodes#AAttrPropdef#n_readable= for (self: AAttrPropdef, nullable AAble) */
void parser_nodes__AAttrPropdef__n_readable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val = p0; /* _n_readable on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_readable= for (self: Object, nullable AAble) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_readable_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_readable_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_writable for (self: AAttrPropdef): nullable AAble */
val* parser_nodes__AAttrPropdef__n_writable(val* self) {
val* var /* : nullable AAble */;
val* var1 /* : nullable AAble */;
var1 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val; /* _n_writable on <self:AAttrPropdef> */
var = var1;
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
/* method parser_nodes#AAttrPropdef#n_writable= for (self: AAttrPropdef, nullable AAble) */
void parser_nodes__AAttrPropdef__n_writable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val = p0; /* _n_writable on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_writable= for (self: Object, nullable AAble) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_writable_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_writable_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AAttrPropdef__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrPropdef#n_expr= for (self: AAttrPropdef, nullable AExpr) */
void parser_nodes__AAttrPropdef__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = p0; /* _n_expr on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AAttrPropdef__n_expr_61d(val* self, val* p0) {
parser_nodes__AAttrPropdef__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#hot_location for (self: AAttrPropdef): Location */
val* parser_nodes__AAttrPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable TAttrid */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TAttrid */;
val* var5 /* : Location */;
val* var6 /* : nullable TId */;
val* var7 /* : Location */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 741);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__ANode__location]))(var4) /* location on <var4:nullable TAttrid>*/;
}
var = var5;
goto RET_LABEL;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id2]))(self) /* n_id2 on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 741);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_parser_nodes__ANode__location]))(var6) /* location on <var6:nullable TId>*/;
}
var = var7;
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
/* method parser_nodes#AAttrPropdef#init for (self: AAttrPropdef) */
void parser_nodes__AAttrPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APropdef__init]))(self) /* init on <self:AAttrPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AAttrPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AAttrPropdef__init(val* self) {
parser_nodes__AAttrPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwredef for (self: AMethPropdef): nullable TKwredef */
val* parser_nodes__AMethPropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__AMethPropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__AMethPropdef__n_kwredef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_kwredef= for (self: AMethPropdef, nullable TKwredef) */
void parser_nodes__AMethPropdef__n_kwredef_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = p0; /* _n_kwredef on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_nodes__AMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_visibility for (self: AMethPropdef): nullable AVisibility */
val* parser_nodes__AMethPropdef__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_visibility for (self: Object): nullable AVisibility */
val* VIRTUAL_parser_nodes__AMethPropdef__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = parser_nodes__AMethPropdef__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_visibility= for (self: AMethPropdef, nullable AVisibility) */
void parser_nodes__AMethPropdef__n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = p0; /* _n_visibility on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_nodes__AMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AMethPropdef__n_methid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_methid= for (self: AMethPropdef, nullable AMethid) */
void parser_nodes__AMethPropdef__n_methid_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = p0; /* _n_methid on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_nodes__AMethPropdef__n_methid_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_methid_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AMethPropdef__n_signature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMethPropdef#n_signature= for (self: AMethPropdef, nullable ASignature) */
void parser_nodes__AMethPropdef__n_signature_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = p0; /* _n_signature on <self:AMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_nodes__AMethPropdef__n_signature_61d(val* self, val* p0) {
parser_nodes__AMethPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#hot_location for (self: AMethPropdef): Location */
val* parser_nodes__AMethPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : nullable AMethid */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AMethid */;
val* var5 /* : Location */;
val* var6 /* : Location */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_methid]))(self) /* n_methid on <self:AMethPropdef>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_methid]))(self) /* n_methid on <self:AMethPropdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 755);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__ANode__location]))(var4) /* location on <var4:nullable AMethid>*/;
}
var = var5;
goto RET_LABEL;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AMethPropdef>*/;
var = var6;
goto RET_LABEL;
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
/* method parser_nodes#AMethPropdef#init for (self: AMethPropdef) */
void parser_nodes__AMethPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APropdef__init]))(self) /* init on <self:AMethPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AMethPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AMethPropdef__init(val* self) {
parser_nodes__AMethPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#ADeferredMethPropdef#n_kwmeth for (self: ADeferredMethPropdef): TKwmeth */
val* parser_nodes__ADeferredMethPropdef__n_kwmeth(val* self) {
val* var /* : TKwmeth */;
val* var1 /* : TKwmeth */;
var1 = self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:ADeferredMethPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 766);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADeferredMethPropdef#n_kwmeth for (self: Object): TKwmeth */
val* VIRTUAL_parser_nodes__ADeferredMethPropdef__n_kwmeth(val* self) {
val* var /* : TKwmeth */;
val* var1 /* : TKwmeth */;
var1 = parser_nodes__ADeferredMethPropdef__n_kwmeth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADeferredMethPropdef#n_kwmeth= for (self: ADeferredMethPropdef, TKwmeth) */
void parser_nodes__ADeferredMethPropdef__n_kwmeth_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val = p0; /* _n_kwmeth on <self:ADeferredMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#ADeferredMethPropdef#n_kwmeth= for (self: Object, TKwmeth) */
void VIRTUAL_parser_nodes__ADeferredMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_nodes__ADeferredMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ADeferredMethPropdef#init for (self: ADeferredMethPropdef) */
void parser_nodes__ADeferredMethPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__init]))(self) /* init on <self:ADeferredMethPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#ADeferredMethPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__ADeferredMethPropdef__init(val* self) {
parser_nodes__ADeferredMethPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AInternMethPropdef#n_kwmeth for (self: AInternMethPropdef): TKwmeth */
val* parser_nodes__AInternMethPropdef__n_kwmeth(val* self) {
val* var /* : TKwmeth */;
val* var1 /* : TKwmeth */;
var1 = self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AInternMethPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 772);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInternMethPropdef#n_kwmeth for (self: Object): TKwmeth */
val* VIRTUAL_parser_nodes__AInternMethPropdef__n_kwmeth(val* self) {
val* var /* : TKwmeth */;
val* var1 /* : TKwmeth */;
var1 = parser_nodes__AInternMethPropdef__n_kwmeth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInternMethPropdef#n_kwmeth= for (self: AInternMethPropdef, TKwmeth) */
void parser_nodes__AInternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val = p0; /* _n_kwmeth on <self:AInternMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AInternMethPropdef#n_kwmeth= for (self: Object, TKwmeth) */
void VIRTUAL_parser_nodes__AInternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_nodes__AInternMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInternMethPropdef#init for (self: AInternMethPropdef) */
void parser_nodes__AInternMethPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__init]))(self) /* init on <self:AInternMethPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AInternMethPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AInternMethPropdef__init(val* self) {
parser_nodes__AInternMethPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#n_extern for (self: AExternPropdef): nullable TString */
val* parser_nodes__AExternPropdef__n_extern(val* self) {
val* var /* : nullable TString */;
val* var1 /* : nullable TString */;
var1 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternPropdef#n_extern for (self: Object): nullable TString */
val* VIRTUAL_parser_nodes__AExternPropdef__n_extern(val* self) {
val* var /* : nullable TString */;
val* var1 /* : nullable TString */;
var1 = parser_nodes__AExternPropdef__n_extern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternPropdef#n_extern= for (self: AExternPropdef, nullable TString) */
void parser_nodes__AExternPropdef__n_extern_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = p0; /* _n_extern on <self:AExternPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#n_extern= for (self: Object, nullable TString) */
void VIRTUAL_parser_nodes__AExternPropdef__n_extern_61d(val* self, val* p0) {
parser_nodes__AExternPropdef__n_extern_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#n_extern_calls for (self: AExternPropdef): nullable AExternCalls */
val* parser_nodes__AExternPropdef__n_extern_calls(val* self) {
val* var /* : nullable AExternCalls */;
val* var1 /* : nullable AExternCalls */;
var1 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternPropdef#n_extern_calls for (self: Object): nullable AExternCalls */
val* VIRTUAL_parser_nodes__AExternPropdef__n_extern_calls(val* self) {
val* var /* : nullable AExternCalls */;
val* var1 /* : nullable AExternCalls */;
var1 = parser_nodes__AExternPropdef__n_extern_calls(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternPropdef#n_extern_calls= for (self: AExternPropdef, nullable AExternCalls) */
void parser_nodes__AExternPropdef__n_extern_calls_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = p0; /* _n_extern_calls on <self:AExternPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_nodes__AExternPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_nodes__AExternPropdef__n_extern_calls_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#n_extern_code_block for (self: AExternPropdef): nullable AExternCodeBlock */
val* parser_nodes__AExternPropdef__n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternPropdef#n_extern_code_block for (self: Object): nullable AExternCodeBlock */
val* VIRTUAL_parser_nodes__AExternPropdef__n_extern_code_block(val* self) {
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : nullable AExternCodeBlock */;
var1 = parser_nodes__AExternPropdef__n_extern_code_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternPropdef#n_extern_code_block= for (self: AExternPropdef, nullable AExternCodeBlock) */
void parser_nodes__AExternPropdef__n_extern_code_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = p0; /* _n_extern_code_block on <self:AExternPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_nodes__AExternPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_nodes__AExternPropdef__n_extern_code_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#init for (self: AExternPropdef) */
void parser_nodes__AExternPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__init]))(self) /* init on <self:AExternPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternPropdef__init(val* self) {
parser_nodes__AExternPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternMethPropdef#n_kwmeth for (self: AExternMethPropdef): TKwmeth */
val* parser_nodes__AExternMethPropdef__n_kwmeth(val* self) {
val* var /* : TKwmeth */;
val* var1 /* : TKwmeth */;
var1 = self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 786);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternMethPropdef#n_kwmeth for (self: Object): TKwmeth */
val* VIRTUAL_parser_nodes__AExternMethPropdef__n_kwmeth(val* self) {
val* var /* : TKwmeth */;
val* var1 /* : TKwmeth */;
var1 = parser_nodes__AExternMethPropdef__n_kwmeth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternMethPropdef#n_kwmeth= for (self: AExternMethPropdef, TKwmeth) */
void parser_nodes__AExternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val = p0; /* _n_kwmeth on <self:AExternMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AExternMethPropdef#n_kwmeth= for (self: Object, TKwmeth) */
void VIRTUAL_parser_nodes__AExternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_nodes__AExternMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternMethPropdef#init for (self: AExternMethPropdef) */
void parser_nodes__AExternMethPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__init]))(self) /* init on <self:AExternMethPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternMethPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternMethPropdef__init(val* self) {
parser_nodes__AExternMethPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AConcreteMethPropdef#n_kwmeth for (self: AConcreteMethPropdef): nullable TKwmeth */
val* parser_nodes__AConcreteMethPropdef__n_kwmeth(val* self) {
val* var /* : nullable TKwmeth */;
val* var1 /* : nullable TKwmeth */;
var1 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AConcreteMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteMethPropdef#n_kwmeth for (self: Object): nullable TKwmeth */
val* VIRTUAL_parser_nodes__AConcreteMethPropdef__n_kwmeth(val* self) {
val* var /* : nullable TKwmeth */;
val* var1 /* : nullable TKwmeth */;
var1 = parser_nodes__AConcreteMethPropdef__n_kwmeth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteMethPropdef#n_kwmeth= for (self: AConcreteMethPropdef, nullable TKwmeth) */
void parser_nodes__AConcreteMethPropdef__n_kwmeth_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val = p0; /* _n_kwmeth on <self:AConcreteMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AConcreteMethPropdef#n_kwmeth= for (self: Object, nullable TKwmeth) */
void VIRTUAL_parser_nodes__AConcreteMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_nodes__AConcreteMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AConcreteMethPropdef#n_block for (self: AConcreteMethPropdef): nullable AExpr */
val* parser_nodes__AConcreteMethPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteMethPropdef#n_block for (self: Object): nullable AExpr */
val* VIRTUAL_parser_nodes__AConcreteMethPropdef__n_block(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = parser_nodes__AConcreteMethPropdef__n_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteMethPropdef#n_block= for (self: AConcreteMethPropdef, nullable AExpr) */
void parser_nodes__AConcreteMethPropdef__n_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = p0; /* _n_block on <self:AConcreteMethPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AConcreteMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AConcreteMethPropdef__n_block_61d(val* self, val* p0) {
parser_nodes__AConcreteMethPropdef__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AConcreteMethPropdef#init for (self: AConcreteMethPropdef) */
void parser_nodes__AConcreteMethPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__init]))(self) /* init on <self:AConcreteMethPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AConcreteMethPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AConcreteMethPropdef__init(val* self) {
parser_nodes__AConcreteMethPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AInitPropdef#init for (self: AInitPropdef) */
void parser_nodes__AInitPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__init]))(self) /* init on <self:AInitPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AInitPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AInitPropdef__init(val* self) {
parser_nodes__AInitPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AConcreteInitPropdef#n_kwinit for (self: AConcreteInitPropdef): TKwinit */
val* parser_nodes__AConcreteInitPropdef__n_kwinit(val* self) {
val* var /* : TKwinit */;
val* var1 /* : TKwinit */;
var1 = self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinit");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 805);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteInitPropdef#n_kwinit for (self: Object): TKwinit */
val* VIRTUAL_parser_nodes__AConcreteInitPropdef__n_kwinit(val* self) {
val* var /* : TKwinit */;
val* var1 /* : TKwinit */;
var1 = parser_nodes__AConcreteInitPropdef__n_kwinit(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteInitPropdef#n_kwinit= for (self: AConcreteInitPropdef, TKwinit) */
void parser_nodes__AConcreteInitPropdef__n_kwinit_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val = p0; /* _n_kwinit on <self:AConcreteInitPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AConcreteInitPropdef#n_kwinit= for (self: Object, TKwinit) */
void VIRTUAL_parser_nodes__AConcreteInitPropdef__n_kwinit_61d(val* self, val* p0) {
parser_nodes__AConcreteInitPropdef__n_kwinit_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AConcreteInitPropdef#hot_location for (self: AConcreteInitPropdef): Location */
val* parser_nodes__AConcreteInitPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : TKwinit */;
val* var2 /* : Location */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteInitPropdef__n_kwinit]))(self) /* n_kwinit on <self:AConcreteInitPropdef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__ANode__location]))(var1) /* location on <var1:TKwinit>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteInitPropdef#hot_location for (self: Object): Location */
val* VIRTUAL_parser_nodes__AConcreteInitPropdef__hot_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = parser_nodes__AConcreteInitPropdef__hot_location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AConcreteInitPropdef#init for (self: AConcreteInitPropdef) */
void parser_nodes__AConcreteInitPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__init]))(self) /* init on <self:AConcreteInitPropdef>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AInitPropdef__init]))(self) /* init on <self:AConcreteInitPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AConcreteInitPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AConcreteInitPropdef__init(val* self) {
parser_nodes__AConcreteInitPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternInitPropdef#n_kwnew for (self: AExternInitPropdef): TKwnew */
val* parser_nodes__AExternInitPropdef__n_kwnew(val* self) {
val* var /* : TKwnew */;
val* var1 /* : TKwnew */;
var1 = self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val; /* _n_kwnew on <self:AExternInitPropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnew");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 813);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternInitPropdef#n_kwnew for (self: Object): TKwnew */
val* VIRTUAL_parser_nodes__AExternInitPropdef__n_kwnew(val* self) {
val* var /* : TKwnew */;
val* var1 /* : TKwnew */;
var1 = parser_nodes__AExternInitPropdef__n_kwnew(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternInitPropdef#n_kwnew= for (self: AExternInitPropdef, TKwnew) */
void parser_nodes__AExternInitPropdef__n_kwnew_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val = p0; /* _n_kwnew on <self:AExternInitPropdef> */
RET_LABEL:;
}
/* method parser_nodes#AExternInitPropdef#n_kwnew= for (self: Object, TKwnew) */
void VIRTUAL_parser_nodes__AExternInitPropdef__n_kwnew_61d(val* self, val* p0) {
parser_nodes__AExternInitPropdef__n_kwnew_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternInitPropdef#init for (self: AExternInitPropdef) */
void parser_nodes__AExternInitPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__init]))(self) /* init on <self:AExternInitPropdef>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AInitPropdef__init]))(self) /* init on <self:AExternInitPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternInitPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternInitPropdef__init(val* self) {
parser_nodes__AExternInitPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMainMethPropdef#init for (self: AMainMethPropdef) */
void parser_nodes__AMainMethPropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__init]))(self) /* init on <self:AMainMethPropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#AMainMethPropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__AMainMethPropdef__init(val* self) {
parser_nodes__AMainMethPropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternCalls#n_kwimport for (self: AExternCalls): TKwimport */
val* parser_nodes__AExternCalls__n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 824);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_kwimport for (self: Object): TKwimport */
val* VIRTUAL_parser_nodes__AExternCalls__n_kwimport(val* self) {
val* var /* : TKwimport */;
val* var1 /* : TKwimport */;
var1 = parser_nodes__AExternCalls__n_kwimport(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void parser_nodes__AExternCalls__n_kwimport_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val = p0; /* _n_kwimport on <self:AExternCalls> */
RET_LABEL:;
}
/* method parser_nodes#AExternCalls#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_nodes__AExternCalls__n_kwimport_61d(val* self, val* p0) {
parser_nodes__AExternCalls__n_kwimport_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternCalls#n_extern_calls for (self: AExternCalls): ANodes[AExternCall] */
val* parser_nodes__AExternCalls__n_extern_calls(val* self) {
val* var /* : ANodes[AExternCall] */;
val* var1 /* : ANodes[AExternCall] */;
var1 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 825);
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
var1 = parser_nodes__AExternCalls__n_extern_calls(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCalls#init for (self: AExternCalls) */
void parser_nodes__AExternCalls__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AExternCalls>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternCalls#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternCalls__init(val* self) {
parser_nodes__AExternCalls__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternCall#init for (self: AExternCall) */
void parser_nodes__AExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternCall__init(val* self) {
parser_nodes__AExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#APropExternCall#init for (self: APropExternCall) */
void parser_nodes__APropExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternCall__init]))(self) /* init on <self:APropExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#APropExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__APropExternCall__init(val* self) {
parser_nodes__APropExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALocalPropExternCall#n_methid for (self: ALocalPropExternCall): AMethid */
val* parser_nodes__ALocalPropExternCall__n_methid(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_methid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 835);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALocalPropExternCall#n_methid for (self: Object): AMethid */
val* VIRTUAL_parser_nodes__ALocalPropExternCall__n_methid(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = parser_nodes__ALocalPropExternCall__n_methid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void parser_nodes__ALocalPropExternCall__n_methid_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val = p0; /* _n_methid on <self:ALocalPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ALocalPropExternCall#n_methid= for (self: Object, AMethid) */
void VIRTUAL_parser_nodes__ALocalPropExternCall__n_methid_61d(val* self, val* p0) {
parser_nodes__ALocalPropExternCall__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALocalPropExternCall#init for (self: ALocalPropExternCall) */
void parser_nodes__ALocalPropExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APropExternCall__init]))(self) /* init on <self:ALocalPropExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#ALocalPropExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__ALocalPropExternCall__init(val* self) {
parser_nodes__ALocalPropExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_type for (self: AFullPropExternCall): AType */
val* parser_nodes__AFullPropExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 839);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AFullPropExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AFullPropExternCall__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void parser_nodes__AFullPropExternCall__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val = p0; /* _n_type on <self:AFullPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__AFullPropExternCall__n_type_61d(val* self, val* p0) {
parser_nodes__AFullPropExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_dot for (self: AFullPropExternCall): nullable TDot */
val* parser_nodes__AFullPropExternCall__n_dot(val* self) {
val* var /* : nullable TDot */;
val* var1 /* : nullable TDot */;
var1 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_dot for (self: Object): nullable TDot */
val* VIRTUAL_parser_nodes__AFullPropExternCall__n_dot(val* self) {
val* var /* : nullable TDot */;
val* var1 /* : nullable TDot */;
var1 = parser_nodes__AFullPropExternCall__n_dot(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
void parser_nodes__AFullPropExternCall__n_dot_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = p0; /* _n_dot on <self:AFullPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_dot= for (self: Object, nullable TDot) */
void VIRTUAL_parser_nodes__AFullPropExternCall__n_dot_61d(val* self, val* p0) {
parser_nodes__AFullPropExternCall__n_dot_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_methid for (self: AFullPropExternCall): AMethid */
val* parser_nodes__AFullPropExternCall__n_methid(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_methid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 841);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_methid for (self: Object): AMethid */
val* VIRTUAL_parser_nodes__AFullPropExternCall__n_methid(val* self) {
val* var /* : AMethid */;
val* var1 /* : AMethid */;
var1 = parser_nodes__AFullPropExternCall__n_methid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void parser_nodes__AFullPropExternCall__n_methid_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val = p0; /* _n_methid on <self:AFullPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#n_methid= for (self: Object, AMethid) */
void VIRTUAL_parser_nodes__AFullPropExternCall__n_methid_61d(val* self, val* p0) {
parser_nodes__AFullPropExternCall__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#init for (self: AFullPropExternCall) */
void parser_nodes__AFullPropExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APropExternCall__init]))(self) /* init on <self:AFullPropExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#AFullPropExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__AFullPropExternCall__init(val* self) {
parser_nodes__AFullPropExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#AInitPropExternCall#n_type for (self: AInitPropExternCall): AType */
val* parser_nodes__AInitPropExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 845);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitPropExternCall#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AInitPropExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AInitPropExternCall__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void parser_nodes__AInitPropExternCall__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val = p0; /* _n_type on <self:AInitPropExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AInitPropExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__AInitPropExternCall__n_type_61d(val* self, val* p0) {
parser_nodes__AInitPropExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInitPropExternCall#init for (self: AInitPropExternCall) */
void parser_nodes__AInitPropExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APropExternCall__init]))(self) /* init on <self:AInitPropExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#AInitPropExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__AInitPropExternCall__init(val* self) {
parser_nodes__AInitPropExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASuperExternCall#n_kwsuper for (self: ASuperExternCall): TKwsuper */
val* parser_nodes__ASuperExternCall__n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 849);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExternCall#n_kwsuper for (self: Object): TKwsuper */
val* VIRTUAL_parser_nodes__ASuperExternCall__n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = parser_nodes__ASuperExternCall__n_kwsuper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void parser_nodes__ASuperExternCall__n_kwsuper_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val = p0; /* _n_kwsuper on <self:ASuperExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExternCall#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_nodes__ASuperExternCall__n_kwsuper_61d(val* self, val* p0) {
parser_nodes__ASuperExternCall__n_kwsuper_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASuperExternCall#init for (self: ASuperExternCall) */
void parser_nodes__ASuperExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternCall__init]))(self) /* init on <self:ASuperExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#ASuperExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__ASuperExternCall__init(val* self) {
parser_nodes__ASuperExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACastExternCall#init for (self: ACastExternCall) */
void parser_nodes__ACastExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternCall__init]))(self) /* init on <self:ACastExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#ACastExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__ACastExternCall__init(val* self) {
parser_nodes__ACastExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_from_type for (self: ACastAsExternCall): AType */
val* parser_nodes__ACastAsExternCall__n_from_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_from_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 856);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_from_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ACastAsExternCall__n_from_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ACastAsExternCall__n_from_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_from_type= for (self: ACastAsExternCall, AType) */
void parser_nodes__ACastAsExternCall__n_from_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val = p0; /* _n_from_type on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_from_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ACastAsExternCall__n_from_type_61d(val* self, val* p0) {
parser_nodes__ACastAsExternCall__n_from_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_dot for (self: ACastAsExternCall): nullable TDot */
val* parser_nodes__ACastAsExternCall__n_dot(val* self) {
val* var /* : nullable TDot */;
val* var1 /* : nullable TDot */;
var1 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_dot for (self: Object): nullable TDot */
val* VIRTUAL_parser_nodes__ACastAsExternCall__n_dot(val* self) {
val* var /* : nullable TDot */;
val* var1 /* : nullable TDot */;
var1 = parser_nodes__ACastAsExternCall__n_dot(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_dot= for (self: ACastAsExternCall, nullable TDot) */
void parser_nodes__ACastAsExternCall__n_dot_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = p0; /* _n_dot on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_dot= for (self: Object, nullable TDot) */
void VIRTUAL_parser_nodes__ACastAsExternCall__n_dot_61d(val* self, val* p0) {
parser_nodes__ACastAsExternCall__n_dot_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_kwas for (self: ACastAsExternCall): TKwas */
val* parser_nodes__ACastAsExternCall__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 858);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_kwas for (self: Object): TKwas */
val* VIRTUAL_parser_nodes__ACastAsExternCall__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = parser_nodes__ACastAsExternCall__n_kwas(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_kwas= for (self: ACastAsExternCall, TKwas) */
void parser_nodes__ACastAsExternCall__n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val = p0; /* _n_kwas on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_nodes__ACastAsExternCall__n_kwas_61d(val* self, val* p0) {
parser_nodes__ACastAsExternCall__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_to_type for (self: ACastAsExternCall): AType */
val* parser_nodes__ACastAsExternCall__n_to_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_to_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_to_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ACastAsExternCall__n_to_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ACastAsExternCall__n_to_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACastAsExternCall#n_to_type= for (self: ACastAsExternCall, AType) */
void parser_nodes__ACastAsExternCall__n_to_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val = p0; /* _n_to_type on <self:ACastAsExternCall> */
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#n_to_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ACastAsExternCall__n_to_type_61d(val* self, val* p0) {
parser_nodes__ACastAsExternCall__n_to_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#init for (self: ACastAsExternCall) */
void parser_nodes__ACastAsExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastExternCall__init]))(self) /* init on <self:ACastAsExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#ACastAsExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__ACastAsExternCall__init(val* self) {
parser_nodes__ACastAsExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_type for (self: AAsNullableExternCall): AType */
val* parser_nodes__AAsNullableExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 863);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AAsNullableExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AAsNullableExternCall__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_type= for (self: AAsNullableExternCall, AType) */
void parser_nodes__AAsNullableExternCall__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val = p0; /* _n_type on <self:AAsNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__AAsNullableExternCall__n_type_61d(val* self, val* p0) {
parser_nodes__AAsNullableExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_kwas for (self: AAsNullableExternCall): TKwas */
val* parser_nodes__AAsNullableExternCall__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 864);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_kwas for (self: Object): TKwas */
val* VIRTUAL_parser_nodes__AAsNullableExternCall__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = parser_nodes__AAsNullableExternCall__n_kwas(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_kwas= for (self: AAsNullableExternCall, TKwas) */
void parser_nodes__AAsNullableExternCall__n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val = p0; /* _n_kwas on <self:AAsNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_nodes__AAsNullableExternCall__n_kwas_61d(val* self, val* p0) {
parser_nodes__AAsNullableExternCall__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_kwnullable for (self: AAsNullableExternCall): TKwnullable */
val* parser_nodes__AAsNullableExternCall__n_kwnullable(val* self) {
val* var /* : TKwnullable */;
val* var1 /* : TKwnullable */;
var1 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 865);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_kwnullable for (self: Object): TKwnullable */
val* VIRTUAL_parser_nodes__AAsNullableExternCall__n_kwnullable(val* self) {
val* var /* : TKwnullable */;
val* var1 /* : TKwnullable */;
var1 = parser_nodes__AAsNullableExternCall__n_kwnullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNullableExternCall#n_kwnullable= for (self: AAsNullableExternCall, TKwnullable) */
void parser_nodes__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val = p0; /* _n_kwnullable on <self:AAsNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#n_kwnullable= for (self: Object, TKwnullable) */
void VIRTUAL_parser_nodes__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
parser_nodes__AAsNullableExternCall__n_kwnullable_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#init for (self: AAsNullableExternCall) */
void parser_nodes__AAsNullableExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastExternCall__init]))(self) /* init on <self:AAsNullableExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#AAsNullableExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__AAsNullableExternCall__init(val* self) {
parser_nodes__AAsNullableExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_type for (self: AAsNotNullableExternCall): AType */
val* parser_nodes__AAsNotNullableExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 869);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AAsNotNullableExternCall__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_type= for (self: AAsNotNullableExternCall, AType) */
void parser_nodes__AAsNotNullableExternCall__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val = p0; /* _n_type on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_type_61d(val* self, val* p0) {
parser_nodes__AAsNotNullableExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwas for (self: AAsNotNullableExternCall): TKwas */
val* parser_nodes__AAsNotNullableExternCall__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 870);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwas for (self: Object): TKwas */
val* VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = parser_nodes__AAsNotNullableExternCall__n_kwas(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwas= for (self: AAsNotNullableExternCall, TKwas) */
void parser_nodes__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val = p0; /* _n_kwas on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0) {
parser_nodes__AAsNotNullableExternCall__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnot for (self: AAsNotNullableExternCall): TKwnot */
val* parser_nodes__AAsNotNullableExternCall__n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 871);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnot for (self: Object): TKwnot */
val* VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = parser_nodes__AAsNotNullableExternCall__n_kwnot(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnot= for (self: AAsNotNullableExternCall, TKwnot) */
void parser_nodes__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val = p0; /* _n_kwnot on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0) {
parser_nodes__AAsNotNullableExternCall__n_kwnot_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnullable for (self: AAsNotNullableExternCall): TKwnullable */
val* parser_nodes__AAsNotNullableExternCall__n_kwnullable(val* self) {
val* var /* : TKwnullable */;
val* var1 /* : TKwnullable */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 872);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnullable for (self: Object): TKwnullable */
val* VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_kwnullable(val* self) {
val* var /* : TKwnullable */;
val* var1 /* : TKwnullable */;
var1 = parser_nodes__AAsNotNullableExternCall__n_kwnullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnullable= for (self: AAsNotNullableExternCall, TKwnullable) */
void parser_nodes__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = p0; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#n_kwnullable= for (self: Object, TKwnullable) */
void VIRTUAL_parser_nodes__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
parser_nodes__AAsNotNullableExternCall__n_kwnullable_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#init for (self: AAsNotNullableExternCall) */
void parser_nodes__AAsNotNullableExternCall__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastExternCall__init]))(self) /* init on <self:AAsNotNullableExternCall>*/;
RET_LABEL:;
}
/* method parser_nodes#AAsNotNullableExternCall#init for (self: Object) */
void VIRTUAL_parser_nodes__AAsNotNullableExternCall__init(val* self) {
parser_nodes__AAsNotNullableExternCall__init(self);
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_kwredef for (self: ATypePropdef): nullable TKwredef */
val* parser_nodes__ATypePropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_kwredef for (self: Object): nullable TKwredef */
val* VIRTUAL_parser_nodes__ATypePropdef__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = parser_nodes__ATypePropdef__n_kwredef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_kwredef= for (self: ATypePropdef, nullable TKwredef) */
void parser_nodes__ATypePropdef__n_kwredef_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val = p0; /* _n_kwredef on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_nodes__ATypePropdef__n_kwredef_61d(val* self, val* p0) {
parser_nodes__ATypePropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_visibility for (self: ATypePropdef): AVisibility */
val* parser_nodes__ATypePropdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 879);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_visibility for (self: Object): AVisibility */
val* VIRTUAL_parser_nodes__ATypePropdef__n_visibility(val* self) {
val* var /* : AVisibility */;
val* var1 /* : AVisibility */;
var1 = parser_nodes__ATypePropdef__n_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_visibility= for (self: ATypePropdef, AVisibility) */
void parser_nodes__ATypePropdef__n_visibility_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val = p0; /* _n_visibility on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_nodes__ATypePropdef__n_visibility_61d(val* self, val* p0) {
parser_nodes__ATypePropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_kwtype for (self: ATypePropdef): TKwtype */
val* parser_nodes__ATypePropdef__n_kwtype(val* self) {
val* var /* : TKwtype */;
val* var1 /* : TKwtype */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 880);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_kwtype for (self: Object): TKwtype */
val* VIRTUAL_parser_nodes__ATypePropdef__n_kwtype(val* self) {
val* var /* : TKwtype */;
val* var1 /* : TKwtype */;
var1 = parser_nodes__ATypePropdef__n_kwtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_kwtype= for (self: ATypePropdef, TKwtype) */
void parser_nodes__ATypePropdef__n_kwtype_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = p0; /* _n_kwtype on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_kwtype= for (self: Object, TKwtype) */
void VIRTUAL_parser_nodes__ATypePropdef__n_kwtype_61d(val* self, val* p0) {
parser_nodes__ATypePropdef__n_kwtype_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_id for (self: ATypePropdef): TClassid */
val* parser_nodes__ATypePropdef__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 881);
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
var1 = parser_nodes__ATypePropdef__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_id= for (self: ATypePropdef, TClassid) */
void parser_nodes__ATypePropdef__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = p0; /* _n_id on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_nodes__ATypePropdef__n_id_61d(val* self, val* p0) {
parser_nodes__ATypePropdef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_type for (self: ATypePropdef): AType */
val* parser_nodes__ATypePropdef__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 882);
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
var1 = parser_nodes__ATypePropdef__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypePropdef#n_type= for (self: ATypePropdef, AType) */
void parser_nodes__ATypePropdef__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = p0; /* _n_type on <self:ATypePropdef> */
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ATypePropdef__n_type_61d(val* self, val* p0) {
parser_nodes__ATypePropdef__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#init for (self: ATypePropdef) */
void parser_nodes__ATypePropdef__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__APropdef__init]))(self) /* init on <self:ATypePropdef>*/;
RET_LABEL:;
}
/* method parser_nodes#ATypePropdef#init for (self: Object) */
void VIRTUAL_parser_nodes__ATypePropdef__init(val* self) {
parser_nodes__ATypePropdef__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAble#n_visibility for (self: AAble): nullable AVisibility */
val* parser_nodes__AAble__n_visibility(val* self) {
val* var /* : nullable AVisibility */;
val* var1 /* : nullable AVisibility */;
var1 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AAble> */
var = var1;
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
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = p0; /* _n_visibility on <self:AAble> */
RET_LABEL:;
}
/* method parser_nodes#AAble#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_nodes__AAble__n_visibility_61d(val* self, val* p0) {
parser_nodes__AAble__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAble#n_kwredef for (self: AAble): nullable TKwredef */
val* parser_nodes__AAble__n_kwredef(val* self) {
val* var /* : nullable TKwredef */;
val* var1 /* : nullable TKwredef */;
var1 = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AAble> */
var = var1;
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
/* method parser_nodes#AAble#n_kwredef= for (self: AAble, nullable TKwredef) */
void parser_nodes__AAble__n_kwredef_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = p0; /* _n_kwredef on <self:AAble> */
RET_LABEL:;
}
/* method parser_nodes#AAble#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_nodes__AAble__n_kwredef_61d(val* self, val* p0) {
parser_nodes__AAble__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAble#init for (self: AAble) */
void parser_nodes__AAble__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AAble>*/;
RET_LABEL:;
}
/* method parser_nodes#AAble#init for (self: Object) */
void VIRTUAL_parser_nodes__AAble__init(val* self) {
parser_nodes__AAble__init(self);
RET_LABEL:;
}
/* method parser_nodes#AReadAble#n_kwreadable for (self: AReadAble): TKwreadable */
val* parser_nodes__AReadAble__n_kwreadable(val* self) {
val* var /* : TKwreadable */;
val* var1 /* : TKwreadable */;
var1 = self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val; /* _n_kwreadable on <self:AReadAble> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwreadable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 895);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReadAble#n_kwreadable for (self: Object): TKwreadable */
val* VIRTUAL_parser_nodes__AReadAble__n_kwreadable(val* self) {
val* var /* : TKwreadable */;
val* var1 /* : TKwreadable */;
var1 = parser_nodes__AReadAble__n_kwreadable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReadAble#n_kwreadable= for (self: AReadAble, TKwreadable) */
void parser_nodes__AReadAble__n_kwreadable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val = p0; /* _n_kwreadable on <self:AReadAble> */
RET_LABEL:;
}
/* method parser_nodes#AReadAble#n_kwreadable= for (self: Object, TKwreadable) */
void VIRTUAL_parser_nodes__AReadAble__n_kwreadable_61d(val* self, val* p0) {
parser_nodes__AReadAble__n_kwreadable_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AReadAble#init for (self: AReadAble) */
void parser_nodes__AReadAble__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAble__init]))(self) /* init on <self:AReadAble>*/;
RET_LABEL:;
}
/* method parser_nodes#AReadAble#init for (self: Object) */
void VIRTUAL_parser_nodes__AReadAble__init(val* self) {
parser_nodes__AReadAble__init(self);
RET_LABEL:;
}
/* method parser_nodes#AWriteAble#n_kwwritable for (self: AWriteAble): TKwwritable */
val* parser_nodes__AWriteAble__n_kwwritable(val* self) {
val* var /* : TKwwritable */;
val* var1 /* : TKwwritable */;
var1 = self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val; /* _n_kwwritable on <self:AWriteAble> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwwritable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 901);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWriteAble#n_kwwritable for (self: Object): TKwwritable */
val* VIRTUAL_parser_nodes__AWriteAble__n_kwwritable(val* self) {
val* var /* : TKwwritable */;
val* var1 /* : TKwwritable */;
var1 = parser_nodes__AWriteAble__n_kwwritable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWriteAble#n_kwwritable= for (self: AWriteAble, TKwwritable) */
void parser_nodes__AWriteAble__n_kwwritable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val = p0; /* _n_kwwritable on <self:AWriteAble> */
RET_LABEL:;
}
/* method parser_nodes#AWriteAble#n_kwwritable= for (self: Object, TKwwritable) */
void VIRTUAL_parser_nodes__AWriteAble__n_kwwritable_61d(val* self, val* p0) {
parser_nodes__AWriteAble__n_kwwritable_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AWriteAble#init for (self: AWriteAble) */
void parser_nodes__AWriteAble__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAble__init]))(self) /* init on <self:AWriteAble>*/;
RET_LABEL:;
}
/* method parser_nodes#AWriteAble#init for (self: Object) */
void VIRTUAL_parser_nodes__AWriteAble__init(val* self) {
parser_nodes__AWriteAble__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMethid#init for (self: AMethid) */
void parser_nodes__AMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AMethid__init(val* self) {
parser_nodes__AMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIdMethid#n_id for (self: AIdMethid): TId */
val* parser_nodes__AIdMethid__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 911);
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
var1 = parser_nodes__AIdMethid__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIdMethid#n_id= for (self: AIdMethid, TId) */
void parser_nodes__AIdMethid__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = p0; /* _n_id on <self:AIdMethid> */
RET_LABEL:;
}
/* method parser_nodes#AIdMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__AIdMethid__n_id_61d(val* self, val* p0) {
parser_nodes__AIdMethid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIdMethid#init for (self: AIdMethid) */
void parser_nodes__AIdMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AIdMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AIdMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AIdMethid__init(val* self) {
parser_nodes__AIdMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#APlusMethid#n_plus for (self: APlusMethid): TPlus */
val* parser_nodes__APlusMethid__n_plus(val* self) {
val* var /* : TPlus */;
val* var1 /* : TPlus */;
var1 = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_plus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 915);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusMethid#n_plus for (self: Object): TPlus */
val* VIRTUAL_parser_nodes__APlusMethid__n_plus(val* self) {
val* var /* : TPlus */;
val* var1 /* : TPlus */;
var1 = parser_nodes__APlusMethid__n_plus(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusMethid#n_plus= for (self: APlusMethid, TPlus) */
void parser_nodes__APlusMethid__n_plus_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = p0; /* _n_plus on <self:APlusMethid> */
RET_LABEL:;
}
/* method parser_nodes#APlusMethid#n_plus= for (self: Object, TPlus) */
void VIRTUAL_parser_nodes__APlusMethid__n_plus_61d(val* self, val* p0) {
parser_nodes__APlusMethid__n_plus_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#APlusMethid#init for (self: APlusMethid) */
void parser_nodes__APlusMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:APlusMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#APlusMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__APlusMethid__init(val* self) {
parser_nodes__APlusMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMinusMethid#n_minus for (self: AMinusMethid): TMinus */
val* parser_nodes__AMinusMethid__n_minus(val* self) {
val* var /* : TMinus */;
val* var1 /* : TMinus */;
var1 = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 919);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusMethid#n_minus for (self: Object): TMinus */
val* VIRTUAL_parser_nodes__AMinusMethid__n_minus(val* self) {
val* var /* : TMinus */;
val* var1 /* : TMinus */;
var1 = parser_nodes__AMinusMethid__n_minus(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusMethid#n_minus= for (self: AMinusMethid, TMinus) */
void parser_nodes__AMinusMethid__n_minus_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = p0; /* _n_minus on <self:AMinusMethid> */
RET_LABEL:;
}
/* method parser_nodes#AMinusMethid#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_nodes__AMinusMethid__n_minus_61d(val* self, val* p0) {
parser_nodes__AMinusMethid__n_minus_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AMinusMethid#init for (self: AMinusMethid) */
void parser_nodes__AMinusMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AMinusMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AMinusMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AMinusMethid__init(val* self) {
parser_nodes__AMinusMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStarMethid#n_star for (self: AStarMethid): TStar */
val* parser_nodes__AStarMethid__n_star(val* self) {
val* var /* : TStar */;
val* var1 /* : TStar */;
var1 = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_star");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 923);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarMethid#n_star for (self: Object): TStar */
val* VIRTUAL_parser_nodes__AStarMethid__n_star(val* self) {
val* var /* : TStar */;
val* var1 /* : TStar */;
var1 = parser_nodes__AStarMethid__n_star(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarMethid#n_star= for (self: AStarMethid, TStar) */
void parser_nodes__AStarMethid__n_star_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = p0; /* _n_star on <self:AStarMethid> */
RET_LABEL:;
}
/* method parser_nodes#AStarMethid#n_star= for (self: Object, TStar) */
void VIRTUAL_parser_nodes__AStarMethid__n_star_61d(val* self, val* p0) {
parser_nodes__AStarMethid__n_star_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStarMethid#init for (self: AStarMethid) */
void parser_nodes__AStarMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AStarMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AStarMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AStarMethid__init(val* self) {
parser_nodes__AStarMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASlashMethid#n_slash for (self: ASlashMethid): TSlash */
val* parser_nodes__ASlashMethid__n_slash(val* self) {
val* var /* : TSlash */;
val* var1 /* : TSlash */;
var1 = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_slash");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 927);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASlashMethid#n_slash for (self: Object): TSlash */
val* VIRTUAL_parser_nodes__ASlashMethid__n_slash(val* self) {
val* var /* : TSlash */;
val* var1 /* : TSlash */;
var1 = parser_nodes__ASlashMethid__n_slash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASlashMethid#n_slash= for (self: ASlashMethid, TSlash) */
void parser_nodes__ASlashMethid__n_slash_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = p0; /* _n_slash on <self:ASlashMethid> */
RET_LABEL:;
}
/* method parser_nodes#ASlashMethid#n_slash= for (self: Object, TSlash) */
void VIRTUAL_parser_nodes__ASlashMethid__n_slash_61d(val* self, val* p0) {
parser_nodes__ASlashMethid__n_slash_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASlashMethid#init for (self: ASlashMethid) */
void parser_nodes__ASlashMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ASlashMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ASlashMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ASlashMethid__init(val* self) {
parser_nodes__ASlashMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#APercentMethid#n_percent for (self: APercentMethid): TPercent */
val* parser_nodes__APercentMethid__n_percent(val* self) {
val* var /* : TPercent */;
val* var1 /* : TPercent */;
var1 = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_percent");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 931);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APercentMethid#n_percent for (self: Object): TPercent */
val* VIRTUAL_parser_nodes__APercentMethid__n_percent(val* self) {
val* var /* : TPercent */;
val* var1 /* : TPercent */;
var1 = parser_nodes__APercentMethid__n_percent(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APercentMethid#n_percent= for (self: APercentMethid, TPercent) */
void parser_nodes__APercentMethid__n_percent_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = p0; /* _n_percent on <self:APercentMethid> */
RET_LABEL:;
}
/* method parser_nodes#APercentMethid#n_percent= for (self: Object, TPercent) */
void VIRTUAL_parser_nodes__APercentMethid__n_percent_61d(val* self, val* p0) {
parser_nodes__APercentMethid__n_percent_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#APercentMethid#init for (self: APercentMethid) */
void parser_nodes__APercentMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:APercentMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#APercentMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__APercentMethid__init(val* self) {
parser_nodes__APercentMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AEqMethid#n_eq for (self: AEqMethid): TEq */
val* parser_nodes__AEqMethid__n_eq(val* self) {
val* var /* : TEq */;
val* var1 /* : TEq */;
var1 = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_eq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 935);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEqMethid#n_eq for (self: Object): TEq */
val* VIRTUAL_parser_nodes__AEqMethid__n_eq(val* self) {
val* var /* : TEq */;
val* var1 /* : TEq */;
var1 = parser_nodes__AEqMethid__n_eq(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AEqMethid#n_eq= for (self: AEqMethid, TEq) */
void parser_nodes__AEqMethid__n_eq_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = p0; /* _n_eq on <self:AEqMethid> */
RET_LABEL:;
}
/* method parser_nodes#AEqMethid#n_eq= for (self: Object, TEq) */
void VIRTUAL_parser_nodes__AEqMethid__n_eq_61d(val* self, val* p0) {
parser_nodes__AEqMethid__n_eq_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AEqMethid#init for (self: AEqMethid) */
void parser_nodes__AEqMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AEqMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AEqMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AEqMethid__init(val* self) {
parser_nodes__AEqMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANeMethid#n_ne for (self: ANeMethid): TNe */
val* parser_nodes__ANeMethid__n_ne(val* self) {
val* var /* : TNe */;
val* var1 /* : TNe */;
var1 = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ne");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 939);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANeMethid#n_ne for (self: Object): TNe */
val* VIRTUAL_parser_nodes__ANeMethid__n_ne(val* self) {
val* var /* : TNe */;
val* var1 /* : TNe */;
var1 = parser_nodes__ANeMethid__n_ne(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANeMethid#n_ne= for (self: ANeMethid, TNe) */
void parser_nodes__ANeMethid__n_ne_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = p0; /* _n_ne on <self:ANeMethid> */
RET_LABEL:;
}
/* method parser_nodes#ANeMethid#n_ne= for (self: Object, TNe) */
void VIRTUAL_parser_nodes__ANeMethid__n_ne_61d(val* self, val* p0) {
parser_nodes__ANeMethid__n_ne_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANeMethid#init for (self: ANeMethid) */
void parser_nodes__ANeMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ANeMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ANeMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ANeMethid__init(val* self) {
parser_nodes__ANeMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALeMethid#n_le for (self: ALeMethid): TLe */
val* parser_nodes__ALeMethid__n_le(val* self) {
val* var /* : TLe */;
val* var1 /* : TLe */;
var1 = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_le");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 943);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALeMethid#n_le for (self: Object): TLe */
val* VIRTUAL_parser_nodes__ALeMethid__n_le(val* self) {
val* var /* : TLe */;
val* var1 /* : TLe */;
var1 = parser_nodes__ALeMethid__n_le(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALeMethid#n_le= for (self: ALeMethid, TLe) */
void parser_nodes__ALeMethid__n_le_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = p0; /* _n_le on <self:ALeMethid> */
RET_LABEL:;
}
/* method parser_nodes#ALeMethid#n_le= for (self: Object, TLe) */
void VIRTUAL_parser_nodes__ALeMethid__n_le_61d(val* self, val* p0) {
parser_nodes__ALeMethid__n_le_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALeMethid#init for (self: ALeMethid) */
void parser_nodes__ALeMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ALeMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ALeMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ALeMethid__init(val* self) {
parser_nodes__ALeMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AGeMethid#n_ge for (self: AGeMethid): TGe */
val* parser_nodes__AGeMethid__n_ge(val* self) {
val* var /* : TGe */;
val* var1 /* : TGe */;
var1 = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ge");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 947);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGeMethid#n_ge for (self: Object): TGe */
val* VIRTUAL_parser_nodes__AGeMethid__n_ge(val* self) {
val* var /* : TGe */;
val* var1 /* : TGe */;
var1 = parser_nodes__AGeMethid__n_ge(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGeMethid#n_ge= for (self: AGeMethid, TGe) */
void parser_nodes__AGeMethid__n_ge_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = p0; /* _n_ge on <self:AGeMethid> */
RET_LABEL:;
}
/* method parser_nodes#AGeMethid#n_ge= for (self: Object, TGe) */
void VIRTUAL_parser_nodes__AGeMethid__n_ge_61d(val* self, val* p0) {
parser_nodes__AGeMethid__n_ge_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AGeMethid#init for (self: AGeMethid) */
void parser_nodes__AGeMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AGeMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AGeMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AGeMethid__init(val* self) {
parser_nodes__AGeMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALtMethid#n_lt for (self: ALtMethid): TLt */
val* parser_nodes__ALtMethid__n_lt(val* self) {
val* var /* : TLt */;
val* var1 /* : TLt */;
var1 = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_lt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 951);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALtMethid#n_lt for (self: Object): TLt */
val* VIRTUAL_parser_nodes__ALtMethid__n_lt(val* self) {
val* var /* : TLt */;
val* var1 /* : TLt */;
var1 = parser_nodes__ALtMethid__n_lt(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALtMethid#n_lt= for (self: ALtMethid, TLt) */
void parser_nodes__ALtMethid__n_lt_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = p0; /* _n_lt on <self:ALtMethid> */
RET_LABEL:;
}
/* method parser_nodes#ALtMethid#n_lt= for (self: Object, TLt) */
void VIRTUAL_parser_nodes__ALtMethid__n_lt_61d(val* self, val* p0) {
parser_nodes__ALtMethid__n_lt_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALtMethid#init for (self: ALtMethid) */
void parser_nodes__ALtMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ALtMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ALtMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ALtMethid__init(val* self) {
parser_nodes__ALtMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AGtMethid#n_gt for (self: AGtMethid): TGt */
val* parser_nodes__AGtMethid__n_gt(val* self) {
val* var /* : TGt */;
val* var1 /* : TGt */;
var1 = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 955);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGtMethid#n_gt for (self: Object): TGt */
val* VIRTUAL_parser_nodes__AGtMethid__n_gt(val* self) {
val* var /* : TGt */;
val* var1 /* : TGt */;
var1 = parser_nodes__AGtMethid__n_gt(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGtMethid#n_gt= for (self: AGtMethid, TGt) */
void parser_nodes__AGtMethid__n_gt_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = p0; /* _n_gt on <self:AGtMethid> */
RET_LABEL:;
}
/* method parser_nodes#AGtMethid#n_gt= for (self: Object, TGt) */
void VIRTUAL_parser_nodes__AGtMethid__n_gt_61d(val* self, val* p0) {
parser_nodes__AGtMethid__n_gt_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AGtMethid#init for (self: AGtMethid) */
void parser_nodes__AGtMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AGtMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AGtMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AGtMethid__init(val* self) {
parser_nodes__AGtMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALlMethid#n_ll for (self: ALlMethid): TLl */
val* parser_nodes__ALlMethid__n_ll(val* self) {
val* var /* : TLl */;
val* var1 /* : TLl */;
var1 = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ll");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 959);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALlMethid#n_ll for (self: Object): TLl */
val* VIRTUAL_parser_nodes__ALlMethid__n_ll(val* self) {
val* var /* : TLl */;
val* var1 /* : TLl */;
var1 = parser_nodes__ALlMethid__n_ll(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALlMethid#n_ll= for (self: ALlMethid, TLl) */
void parser_nodes__ALlMethid__n_ll_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = p0; /* _n_ll on <self:ALlMethid> */
RET_LABEL:;
}
/* method parser_nodes#ALlMethid#n_ll= for (self: Object, TLl) */
void VIRTUAL_parser_nodes__ALlMethid__n_ll_61d(val* self, val* p0) {
parser_nodes__ALlMethid__n_ll_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALlMethid#init for (self: ALlMethid) */
void parser_nodes__ALlMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ALlMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ALlMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ALlMethid__init(val* self) {
parser_nodes__ALlMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AGgMethid#n_gg for (self: AGgMethid): TGg */
val* parser_nodes__AGgMethid__n_gg(val* self) {
val* var /* : TGg */;
val* var1 /* : TGg */;
var1 = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gg");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 963);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGgMethid#n_gg for (self: Object): TGg */
val* VIRTUAL_parser_nodes__AGgMethid__n_gg(val* self) {
val* var /* : TGg */;
val* var1 /* : TGg */;
var1 = parser_nodes__AGgMethid__n_gg(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AGgMethid#n_gg= for (self: AGgMethid, TGg) */
void parser_nodes__AGgMethid__n_gg_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = p0; /* _n_gg on <self:AGgMethid> */
RET_LABEL:;
}
/* method parser_nodes#AGgMethid#n_gg= for (self: Object, TGg) */
void VIRTUAL_parser_nodes__AGgMethid__n_gg_61d(val* self, val* p0) {
parser_nodes__AGgMethid__n_gg_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AGgMethid#init for (self: AGgMethid) */
void parser_nodes__AGgMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AGgMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AGgMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AGgMethid__init(val* self) {
parser_nodes__AGgMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#n_obra for (self: ABraMethid): TObra */
val* parser_nodes__ABraMethid__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 967);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraMethid#n_obra for (self: Object): TObra */
val* VIRTUAL_parser_nodes__ABraMethid__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = parser_nodes__ABraMethid__n_obra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void parser_nodes__ABraMethid__n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = p0; /* _n_obra on <self:ABraMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_nodes__ABraMethid__n_obra_61d(val* self, val* p0) {
parser_nodes__ABraMethid__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#n_cbra for (self: ABraMethid): TCbra */
val* parser_nodes__ABraMethid__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 968);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraMethid#n_cbra for (self: Object): TCbra */
val* VIRTUAL_parser_nodes__ABraMethid__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = parser_nodes__ABraMethid__n_cbra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void parser_nodes__ABraMethid__n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = p0; /* _n_cbra on <self:ABraMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_nodes__ABraMethid__n_cbra_61d(val* self, val* p0) {
parser_nodes__ABraMethid__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#init for (self: ABraMethid) */
void parser_nodes__ABraMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ABraMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraMethid__init(val* self) {
parser_nodes__ABraMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStarshipMethid#n_starship for (self: AStarshipMethid): TStarship */
val* parser_nodes__AStarshipMethid__n_starship(val* self) {
val* var /* : TStarship */;
val* var1 /* : TStarship */;
var1 = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_starship");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 972);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarshipMethid#n_starship for (self: Object): TStarship */
val* VIRTUAL_parser_nodes__AStarshipMethid__n_starship(val* self) {
val* var /* : TStarship */;
val* var1 /* : TStarship */;
var1 = parser_nodes__AStarshipMethid__n_starship(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStarshipMethid#n_starship= for (self: AStarshipMethid, TStarship) */
void parser_nodes__AStarshipMethid__n_starship_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = p0; /* _n_starship on <self:AStarshipMethid> */
RET_LABEL:;
}
/* method parser_nodes#AStarshipMethid#n_starship= for (self: Object, TStarship) */
void VIRTUAL_parser_nodes__AStarshipMethid__n_starship_61d(val* self, val* p0) {
parser_nodes__AStarshipMethid__n_starship_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStarshipMethid#init for (self: AStarshipMethid) */
void parser_nodes__AStarshipMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AStarshipMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AStarshipMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AStarshipMethid__init(val* self) {
parser_nodes__AStarshipMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#n_id for (self: AAssignMethid): TId */
val* parser_nodes__AAssignMethid__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 976);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignMethid#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AAssignMethid__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AAssignMethid__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void parser_nodes__AAssignMethid__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = p0; /* _n_id on <self:AAssignMethid> */
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__AAssignMethid__n_id_61d(val* self, val* p0) {
parser_nodes__AAssignMethid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#n_assign for (self: AAssignMethid): TAssign */
val* parser_nodes__AAssignMethid__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 977);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignMethid#n_assign for (self: Object): TAssign */
val* VIRTUAL_parser_nodes__AAssignMethid__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = parser_nodes__AAssignMethid__n_assign(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void parser_nodes__AAssignMethid__n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = p0; /* _n_assign on <self:AAssignMethid> */
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_nodes__AAssignMethid__n_assign_61d(val* self, val* p0) {
parser_nodes__AAssignMethid__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#init for (self: AAssignMethid) */
void parser_nodes__AAssignMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:AAssignMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#AAssignMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__AAssignMethid__init(val* self) {
parser_nodes__AAssignMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_obra for (self: ABraassignMethid): TObra */
val* parser_nodes__ABraassignMethid__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 981);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_obra for (self: Object): TObra */
val* VIRTUAL_parser_nodes__ABraassignMethid__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = parser_nodes__ABraassignMethid__n_obra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void parser_nodes__ABraassignMethid__n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = p0; /* _n_obra on <self:ABraassignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_nodes__ABraassignMethid__n_obra_61d(val* self, val* p0) {
parser_nodes__ABraassignMethid__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_cbra for (self: ABraassignMethid): TCbra */
val* parser_nodes__ABraassignMethid__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 982);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_cbra for (self: Object): TCbra */
val* VIRTUAL_parser_nodes__ABraassignMethid__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = parser_nodes__ABraassignMethid__n_cbra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void parser_nodes__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = p0; /* _n_cbra on <self:ABraassignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_nodes__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
parser_nodes__ABraassignMethid__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_assign for (self: ABraassignMethid): TAssign */
val* parser_nodes__ABraassignMethid__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 983);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_assign for (self: Object): TAssign */
val* VIRTUAL_parser_nodes__ABraassignMethid__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = parser_nodes__ABraassignMethid__n_assign(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void parser_nodes__ABraassignMethid__n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = p0; /* _n_assign on <self:ABraassignMethid> */
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_nodes__ABraassignMethid__n_assign_61d(val* self, val* p0) {
parser_nodes__ABraassignMethid__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#init for (self: ABraassignMethid) */
void parser_nodes__ABraassignMethid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethid__init]))(self) /* init on <self:ABraassignMethid>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraassignMethid#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraassignMethid__init(val* self) {
parser_nodes__ABraassignMethid__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_opar for (self: ASignature): nullable TOpar */
val* parser_nodes__ASignature__n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_opar for (self: Object): nullable TOpar */
val* VIRTUAL_parser_nodes__ASignature__n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = parser_nodes__ASignature__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void parser_nodes__ASignature__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = p0; /* _n_opar on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_nodes__ASignature__n_opar_61d(val* self, val* p0) {
parser_nodes__ASignature__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_params for (self: ASignature): ANodes[AParam] */
val* parser_nodes__ASignature__n_params(val* self) {
val* var /* : ANodes[AParam] */;
val* var1 /* : ANodes[AParam] */;
var1 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 990);
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
var1 = parser_nodes__ASignature__n_params(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_cpar for (self: ASignature): nullable TCpar */
val* parser_nodes__ASignature__n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_cpar for (self: Object): nullable TCpar */
val* VIRTUAL_parser_nodes__ASignature__n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = parser_nodes__ASignature__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void parser_nodes__ASignature__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = p0; /* _n_cpar on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_nodes__ASignature__n_cpar_61d(val* self, val* p0) {
parser_nodes__ASignature__n_cpar_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__ASignature__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASignature#n_type= for (self: ASignature, nullable AType) */
void parser_nodes__ASignature__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = p0; /* _n_type on <self:ASignature> */
RET_LABEL:;
}
/* method parser_nodes#ASignature#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_nodes__ASignature__n_type_61d(val* self, val* p0) {
parser_nodes__ASignature__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASignature#init for (self: ASignature) */
void parser_nodes__ASignature__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:ASignature>*/;
RET_LABEL:;
}
/* method parser_nodes#ASignature#init for (self: Object) */
void VIRTUAL_parser_nodes__ASignature__init(val* self) {
parser_nodes__ASignature__init(self);
RET_LABEL:;
}
/* method parser_nodes#AParam#n_id for (self: AParam): TId */
val* parser_nodes__AParam__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 998);
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
var1 = parser_nodes__AParam__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_id= for (self: AParam, TId) */
void parser_nodes__AParam__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParam___n_id].val = p0; /* _n_id on <self:AParam> */
RET_LABEL:;
}
/* method parser_nodes#AParam#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__AParam__n_id_61d(val* self, val* p0) {
parser_nodes__AParam__n_id_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AParam__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_type= for (self: AParam, nullable AType) */
void parser_nodes__AParam__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParam___n_type].val = p0; /* _n_type on <self:AParam> */
RET_LABEL:;
}
/* method parser_nodes#AParam#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_nodes__AParam__n_type_61d(val* self, val* p0) {
parser_nodes__AParam__n_type_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AParam__n_dotdotdot(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void parser_nodes__AParam__n_dotdotdot_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = p0; /* _n_dotdotdot on <self:AParam> */
RET_LABEL:;
}
/* method parser_nodes#AParam#n_dotdotdot= for (self: Object, nullable TDotdotdot) */
void VIRTUAL_parser_nodes__AParam__n_dotdotdot_61d(val* self, val* p0) {
parser_nodes__AParam__n_dotdotdot_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AParam#init for (self: AParam) */
void parser_nodes__AParam__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AParam>*/;
RET_LABEL:;
}
/* method parser_nodes#AParam#init for (self: Object) */
void VIRTUAL_parser_nodes__AParam__init(val* self) {
parser_nodes__AParam__init(self);
RET_LABEL:;
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
var1 = parser_nodes__AType__n_kwnullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void parser_nodes__AType__n_kwnullable_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = p0; /* _n_kwnullable on <self:AType> */
RET_LABEL:;
}
/* method parser_nodes#AType#n_kwnullable= for (self: Object, nullable TKwnullable) */
void VIRTUAL_parser_nodes__AType__n_kwnullable_61d(val* self, val* p0) {
parser_nodes__AType__n_kwnullable_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AType#n_id for (self: AType): TClassid */
val* parser_nodes__AType__n_id(val* self) {
val* var /* : TClassid */;
val* var1 /* : TClassid */;
var1 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1008);
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
var1 = parser_nodes__AType__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#n_id= for (self: AType, TClassid) */
void parser_nodes__AType__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AType___n_id].val = p0; /* _n_id on <self:AType> */
RET_LABEL:;
}
/* method parser_nodes#AType#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_nodes__AType__n_id_61d(val* self, val* p0) {
parser_nodes__AType__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AType#n_types for (self: AType): ANodes[AType] */
val* parser_nodes__AType__n_types(val* self) {
val* var /* : ANodes[AType] */;
val* var1 /* : ANodes[AType] */;
var1 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1011);
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
var1 = parser_nodes__AType__n_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AType#init for (self: AType) */
void parser_nodes__AType__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AType>*/;
RET_LABEL:;
}
/* method parser_nodes#AType#init for (self: Object) */
void VIRTUAL_parser_nodes__AType__init(val* self) {
parser_nodes__AType__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALabel#n_kwlabel for (self: ALabel): TKwlabel */
val* parser_nodes__ALabel__n_kwlabel(val* self) {
val* var /* : TKwlabel */;
val* var1 /* : TKwlabel */;
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwlabel");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1018);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_kwlabel for (self: Object): TKwlabel */
val* VIRTUAL_parser_nodes__ALabel__n_kwlabel(val* self) {
val* var /* : TKwlabel */;
val* var1 /* : TKwlabel */;
var1 = parser_nodes__ALabel__n_kwlabel(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void parser_nodes__ALabel__n_kwlabel_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = p0; /* _n_kwlabel on <self:ALabel> */
RET_LABEL:;
}
/* method parser_nodes#ALabel#n_kwlabel= for (self: Object, TKwlabel) */
void VIRTUAL_parser_nodes__ALabel__n_kwlabel_61d(val* self, val* p0) {
parser_nodes__ALabel__n_kwlabel_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALabel#n_id for (self: ALabel): TId */
val* parser_nodes__ALabel__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1019);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__ALabel__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__ALabel__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabel#n_id= for (self: ALabel, TId) */
void parser_nodes__ALabel__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = p0; /* _n_id on <self:ALabel> */
RET_LABEL:;
}
/* method parser_nodes#ALabel#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__ALabel__n_id_61d(val* self, val* p0) {
parser_nodes__ALabel__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALabel#init for (self: ALabel) */
void parser_nodes__ALabel__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:ALabel>*/;
RET_LABEL:;
}
/* method parser_nodes#ALabel#init for (self: Object) */
void VIRTUAL_parser_nodes__ALabel__init(val* self) {
parser_nodes__ALabel__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExpr#init for (self: AExpr) */
void parser_nodes__AExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AExpr__init(val* self) {
parser_nodes__AExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#n_expr for (self: ABlockExpr): ANodes[AExpr] */
val* parser_nodes__ABlockExpr__n_expr(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1032);
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
var1 = parser_nodes__ABlockExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_kwend for (self: ABlockExpr): nullable TKwend */
val* parser_nodes__ABlockExpr__n_kwend(val* self) {
val* var /* : nullable TKwend */;
val* var1 /* : nullable TKwend */;
var1 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_kwend for (self: Object): nullable TKwend */
val* VIRTUAL_parser_nodes__ABlockExpr__n_kwend(val* self) {
val* var /* : nullable TKwend */;
val* var1 /* : nullable TKwend */;
var1 = parser_nodes__ABlockExpr__n_kwend(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void parser_nodes__ABlockExpr__n_kwend_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = p0; /* _n_kwend on <self:ABlockExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#n_kwend= for (self: Object, nullable TKwend) */
void VIRTUAL_parser_nodes__ABlockExpr__n_kwend_61d(val* self, val* p0) {
parser_nodes__ABlockExpr__n_kwend_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#init for (self: ABlockExpr) */
void parser_nodes__ABlockExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ABlockExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABlockExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABlockExpr__init(val* self) {
parser_nodes__ABlockExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_kwvar for (self: AVardeclExpr): TKwvar */
val* parser_nodes__AVardeclExpr__n_kwvar(val* self) {
val* var /* : TKwvar */;
val* var1 /* : TKwvar */;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1039);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_kwvar for (self: Object): TKwvar */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_kwvar(val* self) {
val* var /* : TKwvar */;
val* var1 /* : TKwvar */;
var1 = parser_nodes__AVardeclExpr__n_kwvar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, TKwvar) */
void parser_nodes__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = p0; /* _n_kwvar on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_nodes__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
parser_nodes__AVardeclExpr__n_kwvar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_id for (self: AVardeclExpr): TId */
val* parser_nodes__AVardeclExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1040);
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
var1 = parser_nodes__AVardeclExpr__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void parser_nodes__AVardeclExpr__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = p0; /* _n_id on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__AVardeclExpr__n_id_61d(val* self, val* p0) {
parser_nodes__AVardeclExpr__n_id_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AVardeclExpr__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void parser_nodes__AVardeclExpr__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = p0; /* _n_type on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_nodes__AVardeclExpr__n_type_61d(val* self, val* p0) {
parser_nodes__AVardeclExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_assign for (self: AVardeclExpr): nullable TAssign */
val* parser_nodes__AVardeclExpr__n_assign(val* self) {
val* var /* : nullable TAssign */;
val* var1 /* : nullable TAssign */;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_assign for (self: Object): nullable TAssign */
val* VIRTUAL_parser_nodes__AVardeclExpr__n_assign(val* self) {
val* var /* : nullable TAssign */;
val* var1 /* : nullable TAssign */;
var1 = parser_nodes__AVardeclExpr__n_assign(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void parser_nodes__AVardeclExpr__n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = p0; /* _n_assign on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_assign= for (self: Object, nullable TAssign) */
void VIRTUAL_parser_nodes__AVardeclExpr__n_assign_61d(val* self, val* p0) {
parser_nodes__AVardeclExpr__n_assign_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AVardeclExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void parser_nodes__AVardeclExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = p0; /* _n_expr on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AVardeclExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AVardeclExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#init for (self: AVardeclExpr) */
void parser_nodes__AVardeclExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AVardeclExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AVardeclExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AVardeclExpr__init(val* self) {
parser_nodes__AVardeclExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#n_kwreturn for (self: AReturnExpr): nullable TKwreturn */
val* parser_nodes__AReturnExpr__n_kwreturn(val* self) {
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable TKwreturn */;
var1 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_kwreturn for (self: Object): nullable TKwreturn */
val* VIRTUAL_parser_nodes__AReturnExpr__n_kwreturn(val* self) {
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable TKwreturn */;
var1 = parser_nodes__AReturnExpr__n_kwreturn(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void parser_nodes__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = p0; /* _n_kwreturn on <self:AReturnExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#n_kwreturn= for (self: Object, nullable TKwreturn) */
void VIRTUAL_parser_nodes__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
parser_nodes__AReturnExpr__n_kwreturn_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AReturnExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void parser_nodes__AReturnExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = p0; /* _n_expr on <self:AReturnExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AReturnExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AReturnExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#init for (self: AReturnExpr) */
void parser_nodes__AReturnExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AReturnExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AReturnExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AReturnExpr__init(val* self) {
parser_nodes__AReturnExpr__init(self);
RET_LABEL:;
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
var1 = parser_nodes__ALabelable__n_label(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALabelable#n_label= for (self: ALabelable, nullable ALabel) */
void parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = p0; /* _n_label on <self:ALabelable> */
RET_LABEL:;
}
/* method parser_nodes#ALabelable#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
parser_nodes__ALabelable__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALabelable#init for (self: ALabelable) */
void parser_nodes__ALabelable__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:ALabelable>*/;
RET_LABEL:;
}
/* method parser_nodes#ALabelable#init for (self: Object) */
void VIRTUAL_parser_nodes__ALabelable__init(val* self) {
parser_nodes__ALabelable__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#n_kwbreak for (self: ABreakExpr): TKwbreak */
val* parser_nodes__ABreakExpr__n_kwbreak(val* self) {
val* var /* : TKwbreak */;
val* var1 /* : TKwbreak */;
var1 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwbreak");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1065);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABreakExpr#n_kwbreak for (self: Object): TKwbreak */
val* VIRTUAL_parser_nodes__ABreakExpr__n_kwbreak(val* self) {
val* var /* : TKwbreak */;
val* var1 /* : TKwbreak */;
var1 = parser_nodes__ABreakExpr__n_kwbreak(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void parser_nodes__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = p0; /* _n_kwbreak on <self:ABreakExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#n_kwbreak= for (self: Object, TKwbreak) */
void VIRTUAL_parser_nodes__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
parser_nodes__ABreakExpr__n_kwbreak_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#n_expr for (self: ABreakExpr): nullable AExpr */
val* parser_nodes__ABreakExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
var = var1;
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
/* method parser_nodes#ABreakExpr#n_expr= for (self: ABreakExpr, nullable AExpr) */
void parser_nodes__ABreakExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val = p0; /* _n_expr on <self:ABreakExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__ABreakExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__ABreakExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#init for (self: ABreakExpr) */
void parser_nodes__ABreakExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ABreakExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__init]))(self) /* init on <self:ABreakExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABreakExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABreakExpr__init(val* self) {
parser_nodes__ABreakExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAbortExpr#n_kwabort for (self: AAbortExpr): TKwabort */
val* parser_nodes__AAbortExpr__n_kwabort(val* self) {
val* var /* : TKwabort */;
val* var1 /* : TKwabort */;
var1 = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabort");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1072);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbortExpr#n_kwabort for (self: Object): TKwabort */
val* VIRTUAL_parser_nodes__AAbortExpr__n_kwabort(val* self) {
val* var /* : TKwabort */;
val* var1 /* : TKwabort */;
var1 = parser_nodes__AAbortExpr__n_kwabort(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void parser_nodes__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = p0; /* _n_kwabort on <self:AAbortExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAbortExpr#n_kwabort= for (self: Object, TKwabort) */
void VIRTUAL_parser_nodes__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
parser_nodes__AAbortExpr__n_kwabort_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAbortExpr#init for (self: AAbortExpr) */
void parser_nodes__AAbortExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AAbortExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAbortExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAbortExpr__init(val* self) {
parser_nodes__AAbortExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#n_kwcontinue for (self: AContinueExpr): nullable TKwcontinue */
val* parser_nodes__AContinueExpr__n_kwcontinue(val* self) {
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable TKwcontinue */;
var1 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AContinueExpr#n_kwcontinue for (self: Object): nullable TKwcontinue */
val* VIRTUAL_parser_nodes__AContinueExpr__n_kwcontinue(val* self) {
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable TKwcontinue */;
var1 = parser_nodes__AContinueExpr__n_kwcontinue(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void parser_nodes__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = p0; /* _n_kwcontinue on <self:AContinueExpr> */
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#n_kwcontinue= for (self: Object, nullable TKwcontinue) */
void VIRTUAL_parser_nodes__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
parser_nodes__AContinueExpr__n_kwcontinue_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#n_expr for (self: AContinueExpr): nullable AExpr */
val* parser_nodes__AContinueExpr__n_expr(val* self) {
val* var /* : nullable AExpr */;
val* var1 /* : nullable AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
var = var1;
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
/* method parser_nodes#AContinueExpr#n_expr= for (self: AContinueExpr, nullable AExpr) */
void parser_nodes__AContinueExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val = p0; /* _n_expr on <self:AContinueExpr> */
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AContinueExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AContinueExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#init for (self: AContinueExpr) */
void parser_nodes__AContinueExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AContinueExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__init]))(self) /* init on <self:AContinueExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AContinueExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AContinueExpr__init(val* self) {
parser_nodes__AContinueExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#n_kwdo for (self: ADoExpr): TKwdo */
val* parser_nodes__ADoExpr__n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1087);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_kwdo for (self: Object): TKwdo */
val* VIRTUAL_parser_nodes__ADoExpr__n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = parser_nodes__ADoExpr__n_kwdo(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void parser_nodes__ADoExpr__n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = p0; /* _n_kwdo on <self:ADoExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_nodes__ADoExpr__n_kwdo_61d(val* self, val* p0) {
parser_nodes__ADoExpr__n_kwdo_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__ADoExpr__n_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void parser_nodes__ADoExpr__n_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = p0; /* _n_block on <self:ADoExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__ADoExpr__n_block_61d(val* self, val* p0) {
parser_nodes__ADoExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#init for (self: ADoExpr) */
void parser_nodes__ADoExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ADoExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__init]))(self) /* init on <self:ADoExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ADoExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ADoExpr__init(val* self) {
parser_nodes__ADoExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_kwif for (self: AIfExpr): TKwif */
val* parser_nodes__AIfExpr__n_kwif(val* self) {
val* var /* : TKwif */;
val* var1 /* : TKwif */;
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwif");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1094);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_kwif for (self: Object): TKwif */
val* VIRTUAL_parser_nodes__AIfExpr__n_kwif(val* self) {
val* var /* : TKwif */;
val* var1 /* : TKwif */;
var1 = parser_nodes__AIfExpr__n_kwif(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void parser_nodes__AIfExpr__n_kwif_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = p0; /* _n_kwif on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_nodes__AIfExpr__n_kwif_61d(val* self, val* p0) {
parser_nodes__AIfExpr__n_kwif_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_expr for (self: AIfExpr): AExpr */
val* parser_nodes__AIfExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1095);
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
var1 = parser_nodes__AIfExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void parser_nodes__AIfExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = p0; /* _n_expr on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AIfExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AIfExpr__n_expr_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AIfExpr__n_then(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void parser_nodes__AIfExpr__n_then_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = p0; /* _n_then on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_then= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AIfExpr__n_then_61d(val* self, val* p0) {
parser_nodes__AIfExpr__n_then_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AIfExpr__n_else(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void parser_nodes__AIfExpr__n_else_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = p0; /* _n_else on <self:AIfExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AIfExpr__n_else_61d(val* self, val* p0) {
parser_nodes__AIfExpr__n_else_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#init for (self: AIfExpr) */
void parser_nodes__AIfExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AIfExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AIfExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AIfExpr__init(val* self) {
parser_nodes__AIfExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwif for (self: AIfexprExpr): TKwif */
val* parser_nodes__AIfexprExpr__n_kwif(val* self) {
val* var /* : TKwif */;
val* var1 /* : TKwif */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwif");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1103);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwif for (self: Object): TKwif */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_kwif(val* self) {
val* var /* : TKwif */;
val* var1 /* : TKwif */;
var1 = parser_nodes__AIfexprExpr__n_kwif(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void parser_nodes__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = p0; /* _n_kwif on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_nodes__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
parser_nodes__AIfexprExpr__n_kwif_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_expr for (self: AIfexprExpr): AExpr */
val* parser_nodes__AIfexprExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1104);
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
var1 = parser_nodes__AIfexprExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void parser_nodes__AIfexprExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = p0; /* _n_expr on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AIfexprExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AIfexprExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwthen for (self: AIfexprExpr): TKwthen */
val* parser_nodes__AIfexprExpr__n_kwthen(val* self) {
val* var /* : TKwthen */;
val* var1 /* : TKwthen */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwthen");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1105);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwthen for (self: Object): TKwthen */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_kwthen(val* self) {
val* var /* : TKwthen */;
val* var1 /* : TKwthen */;
var1 = parser_nodes__AIfexprExpr__n_kwthen(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void parser_nodes__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = p0; /* _n_kwthen on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwthen= for (self: Object, TKwthen) */
void VIRTUAL_parser_nodes__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
parser_nodes__AIfexprExpr__n_kwthen_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_then for (self: AIfexprExpr): AExpr */
val* parser_nodes__AIfexprExpr__n_then(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_then");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1106);
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
var1 = parser_nodes__AIfexprExpr__n_then(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void parser_nodes__AIfexprExpr__n_then_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = p0; /* _n_then on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_then= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AIfexprExpr__n_then_61d(val* self, val* p0) {
parser_nodes__AIfexprExpr__n_then_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwelse for (self: AIfexprExpr): TKwelse */
val* parser_nodes__AIfexprExpr__n_kwelse(val* self) {
val* var /* : TKwelse */;
val* var1 /* : TKwelse */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwelse");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1107);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwelse for (self: Object): TKwelse */
val* VIRTUAL_parser_nodes__AIfexprExpr__n_kwelse(val* self) {
val* var /* : TKwelse */;
val* var1 /* : TKwelse */;
var1 = parser_nodes__AIfexprExpr__n_kwelse(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void parser_nodes__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = p0; /* _n_kwelse on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_kwelse= for (self: Object, TKwelse) */
void VIRTUAL_parser_nodes__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
parser_nodes__AIfexprExpr__n_kwelse_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_else for (self: AIfexprExpr): AExpr */
val* parser_nodes__AIfexprExpr__n_else(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_else");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1108);
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
var1 = parser_nodes__AIfexprExpr__n_else(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void parser_nodes__AIfexprExpr__n_else_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = p0; /* _n_else on <self:AIfexprExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#n_else= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AIfexprExpr__n_else_61d(val* self, val* p0) {
parser_nodes__AIfexprExpr__n_else_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#init for (self: AIfexprExpr) */
void parser_nodes__AIfexprExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AIfexprExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AIfexprExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AIfexprExpr__init(val* self) {
parser_nodes__AIfexprExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_kwwhile for (self: AWhileExpr): TKwwhile */
val* parser_nodes__AWhileExpr__n_kwwhile(val* self) {
val* var /* : TKwwhile */;
val* var1 /* : TKwwhile */;
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwwhile");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1115);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_kwwhile for (self: Object): TKwwhile */
val* VIRTUAL_parser_nodes__AWhileExpr__n_kwwhile(val* self) {
val* var /* : TKwwhile */;
val* var1 /* : TKwwhile */;
var1 = parser_nodes__AWhileExpr__n_kwwhile(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void parser_nodes__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = p0; /* _n_kwwhile on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_kwwhile= for (self: Object, TKwwhile) */
void VIRTUAL_parser_nodes__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
parser_nodes__AWhileExpr__n_kwwhile_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_expr for (self: AWhileExpr): AExpr */
val* parser_nodes__AWhileExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1116);
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
var1 = parser_nodes__AWhileExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void parser_nodes__AWhileExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = p0; /* _n_expr on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AWhileExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AWhileExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_kwdo for (self: AWhileExpr): TKwdo */
val* parser_nodes__AWhileExpr__n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1117);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_kwdo for (self: Object): TKwdo */
val* VIRTUAL_parser_nodes__AWhileExpr__n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = parser_nodes__AWhileExpr__n_kwdo(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void parser_nodes__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = p0; /* _n_kwdo on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_nodes__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
parser_nodes__AWhileExpr__n_kwdo_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AWhileExpr__n_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void parser_nodes__AWhileExpr__n_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = p0; /* _n_block on <self:AWhileExpr> */
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AWhileExpr__n_block_61d(val* self, val* p0) {
parser_nodes__AWhileExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#init for (self: AWhileExpr) */
void parser_nodes__AWhileExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AWhileExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__init]))(self) /* init on <self:AWhileExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AWhileExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AWhileExpr__init(val* self) {
parser_nodes__AWhileExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#n_kwloop for (self: ALoopExpr): TKwloop */
val* parser_nodes__ALoopExpr__n_kwloop(val* self) {
val* var /* : TKwloop */;
val* var1 /* : TKwloop */;
var1 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwloop");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1125);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_kwloop for (self: Object): TKwloop */
val* VIRTUAL_parser_nodes__ALoopExpr__n_kwloop(val* self) {
val* var /* : TKwloop */;
val* var1 /* : TKwloop */;
var1 = parser_nodes__ALoopExpr__n_kwloop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void parser_nodes__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = p0; /* _n_kwloop on <self:ALoopExpr> */
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#n_kwloop= for (self: Object, TKwloop) */
void VIRTUAL_parser_nodes__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
parser_nodes__ALoopExpr__n_kwloop_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__ALoopExpr__n_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void parser_nodes__ALoopExpr__n_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = p0; /* _n_block on <self:ALoopExpr> */
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__ALoopExpr__n_block_61d(val* self, val* p0) {
parser_nodes__ALoopExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#init for (self: ALoopExpr) */
void parser_nodes__ALoopExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ALoopExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__init]))(self) /* init on <self:ALoopExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ALoopExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ALoopExpr__init(val* self) {
parser_nodes__ALoopExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_kwfor for (self: AForExpr): TKwfor */
val* parser_nodes__AForExpr__n_kwfor(val* self) {
val* var /* : TKwfor */;
val* var1 /* : TKwfor */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwfor");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1133);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_kwfor for (self: Object): TKwfor */
val* VIRTUAL_parser_nodes__AForExpr__n_kwfor(val* self) {
val* var /* : TKwfor */;
val* var1 /* : TKwfor */;
var1 = parser_nodes__AForExpr__n_kwfor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void parser_nodes__AForExpr__n_kwfor_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val = p0; /* _n_kwfor on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_kwfor= for (self: Object, TKwfor) */
void VIRTUAL_parser_nodes__AForExpr__n_kwfor_61d(val* self, val* p0) {
parser_nodes__AForExpr__n_kwfor_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_ids for (self: AForExpr): ANodes[TId] */
val* parser_nodes__AForExpr__n_ids(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ids");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1134);
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
var1 = parser_nodes__AForExpr__n_ids(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr for (self: AForExpr): AExpr */
val* parser_nodes__AForExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1135);
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
var1 = parser_nodes__AForExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_expr= for (self: AForExpr, AExpr) */
void parser_nodes__AForExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val = p0; /* _n_expr on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AForExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AForExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_kwdo for (self: AForExpr): TKwdo */
val* parser_nodes__AForExpr__n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1136);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_kwdo for (self: Object): TKwdo */
val* VIRTUAL_parser_nodes__AForExpr__n_kwdo(val* self) {
val* var /* : TKwdo */;
val* var1 /* : TKwdo */;
var1 = parser_nodes__AForExpr__n_kwdo(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void parser_nodes__AForExpr__n_kwdo_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val = p0; /* _n_kwdo on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_nodes__AForExpr__n_kwdo_61d(val* self, val* p0) {
parser_nodes__AForExpr__n_kwdo_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AForExpr__n_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void parser_nodes__AForExpr__n_block_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = p0; /* _n_block on <self:AForExpr> */
RET_LABEL:;
}
/* method parser_nodes#AForExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AForExpr__n_block_61d(val* self, val* p0) {
parser_nodes__AForExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AForExpr#init for (self: AForExpr) */
void parser_nodes__AForExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AForExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__init]))(self) /* init on <self:AForExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AForExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AForExpr__init(val* self) {
parser_nodes__AForExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_kwassert for (self: AAssertExpr): TKwassert */
val* parser_nodes__AAssertExpr__n_kwassert(val* self) {
val* var /* : TKwassert */;
val* var1 /* : TKwassert */;
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwassert");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1143);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_kwassert for (self: Object): TKwassert */
val* VIRTUAL_parser_nodes__AAssertExpr__n_kwassert(val* self) {
val* var /* : TKwassert */;
val* var1 /* : TKwassert */;
var1 = parser_nodes__AAssertExpr__n_kwassert(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void parser_nodes__AAssertExpr__n_kwassert_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val = p0; /* _n_kwassert on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_kwassert= for (self: Object, TKwassert) */
void VIRTUAL_parser_nodes__AAssertExpr__n_kwassert_61d(val* self, val* p0) {
parser_nodes__AAssertExpr__n_kwassert_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AAssertExpr__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void parser_nodes__AAssertExpr__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = p0; /* _n_id on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_nodes__AAssertExpr__n_id_61d(val* self, val* p0) {
parser_nodes__AAssertExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_expr for (self: AAssertExpr): AExpr */
val* parser_nodes__AAssertExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1145);
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
var1 = parser_nodes__AAssertExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void parser_nodes__AAssertExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val = p0; /* _n_expr on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAssertExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AAssertExpr__n_expr_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__AAssertExpr__n_else(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void parser_nodes__AAssertExpr__n_else_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = p0; /* _n_else on <self:AAssertExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_nodes__AAssertExpr__n_else_61d(val* self, val* p0) {
parser_nodes__AAssertExpr__n_else_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#init for (self: AAssertExpr) */
void parser_nodes__AAssertExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AAssertExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAssertExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAssertExpr__init(val* self) {
parser_nodes__AAssertExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#n_assign for (self: AAssignFormExpr): TAssign */
val* parser_nodes__AAssignFormExpr__n_assign(val* self) {
val* var /* : TAssign */;
val* var1 /* : TAssign */;
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAssignFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1152);
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
var1 = parser_nodes__AAssignFormExpr__n_assign(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_assign= for (self: AAssignFormExpr, TAssign) */
void parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = p0; /* _n_assign on <self:AAssignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
parser_nodes__AAssignFormExpr__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#n_value for (self: AAssignFormExpr): AExpr */
val* parser_nodes__AAssignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAssignFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1153);
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
var1 = parser_nodes__AAssignFormExpr__n_value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAssignFormExpr#n_value= for (self: AAssignFormExpr, AExpr) */
void parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = p0; /* _n_value on <self:AAssignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
parser_nodes__AAssignFormExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#init for (self: AAssignFormExpr) */
void parser_nodes__AAssignFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AAssignFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAssignFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAssignFormExpr__init(val* self) {
parser_nodes__AAssignFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op for (self: AReassignFormExpr): AAssignOp */
val* parser_nodes__AReassignFormExpr__n_assign_op(val* self) {
val* var /* : AAssignOp */;
val* var1 /* : AAssignOp */;
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign_op");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1159);
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
var1 = parser_nodes__AReassignFormExpr__n_assign_op(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op= for (self: AReassignFormExpr, AAssignOp) */
void parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = p0; /* _n_assign_op on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
parser_nodes__AReassignFormExpr__n_assign_op_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#n_value for (self: AReassignFormExpr): AExpr */
val* parser_nodes__AReassignFormExpr__n_value(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1160);
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
var1 = parser_nodes__AReassignFormExpr__n_value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AReassignFormExpr#n_value= for (self: AReassignFormExpr, AExpr) */
void parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = p0; /* _n_value on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
parser_nodes__AReassignFormExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#init for (self: AReassignFormExpr) */
void parser_nodes__AReassignFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AReassignFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AReassignFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AReassignFormExpr__init(val* self) {
parser_nodes__AReassignFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AOnceExpr#n_kwonce for (self: AOnceExpr): TKwonce */
val* parser_nodes__AOnceExpr__n_kwonce(val* self) {
val* var /* : TKwonce */;
val* var1 /* : TKwonce */;
var1 = self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwonce");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1166);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_kwonce for (self: Object): TKwonce */
val* VIRTUAL_parser_nodes__AOnceExpr__n_kwonce(val* self) {
val* var /* : TKwonce */;
val* var1 /* : TKwonce */;
var1 = parser_nodes__AOnceExpr__n_kwonce(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void parser_nodes__AOnceExpr__n_kwonce_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val = p0; /* _n_kwonce on <self:AOnceExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOnceExpr#n_kwonce= for (self: Object, TKwonce) */
void VIRTUAL_parser_nodes__AOnceExpr__n_kwonce_61d(val* self, val* p0) {
parser_nodes__AOnceExpr__n_kwonce_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOnceExpr#init for (self: AOnceExpr) */
void parser_nodes__AOnceExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__init]))(self) /* init on <self:AOnceExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AOnceExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AOnceExpr__init(val* self) {
parser_nodes__AOnceExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASendExpr#n_expr for (self: ASendExpr): AExpr */
val* parser_nodes__ASendExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1173);
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
var1 = parser_nodes__ASendExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASendExpr#n_expr= for (self: ASendExpr, AExpr) */
void parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = p0; /* _n_expr on <self:ASendExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASendExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__ASendExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASendExpr#init for (self: ASendExpr) */
void parser_nodes__ASendExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ASendExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ASendExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASendExpr__init(val* self) {
parser_nodes__ASendExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#n_expr2 for (self: ABinopExpr): AExpr */
val* parser_nodes__ABinopExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1180);
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
var1 = parser_nodes__ABinopExpr__n_expr2(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABinopExpr#n_expr2= for (self: ABinopExpr, AExpr) */
void parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = p0; /* _n_expr2 on <self:ABinopExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
parser_nodes__ABinopExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#init for (self: ABinopExpr) */
void parser_nodes__ABinopExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__init]))(self) /* init on <self:ABinopExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABinopExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABinopExpr__init(val* self) {
parser_nodes__ABinopExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABoolExpr#init for (self: ABoolExpr) */
void parser_nodes__ABoolExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ABoolExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABoolExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABoolExpr__init(val* self) {
parser_nodes__ABoolExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AOrExpr#n_expr for (self: AOrExpr): AExpr */
val* parser_nodes__AOrExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1193);
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
var1 = parser_nodes__AOrExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr= for (self: AOrExpr, AExpr) */
void parser_nodes__AOrExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val = p0; /* _n_expr on <self:AOrExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AOrExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AOrExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOrExpr#n_expr2 for (self: AOrExpr): AExpr */
val* parser_nodes__AOrExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1194);
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
var1 = parser_nodes__AOrExpr__n_expr2(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrExpr#n_expr2= for (self: AOrExpr, AExpr) */
void parser_nodes__AOrExpr__n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val = p0; /* _n_expr2 on <self:AOrExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AOrExpr__n_expr2_61d(val* self, val* p0) {
parser_nodes__AOrExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOrExpr#init for (self: AOrExpr) */
void parser_nodes__AOrExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:AOrExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AOrExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AOrExpr__init(val* self) {
parser_nodes__AOrExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAndExpr#n_expr for (self: AAndExpr): AExpr */
val* parser_nodes__AAndExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1200);
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
var1 = parser_nodes__AAndExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr= for (self: AAndExpr, AExpr) */
void parser_nodes__AAndExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val = p0; /* _n_expr on <self:AAndExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAndExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAndExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AAndExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAndExpr#n_expr2 for (self: AAndExpr): AExpr */
val* parser_nodes__AAndExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1201);
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
var1 = parser_nodes__AAndExpr__n_expr2(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAndExpr#n_expr2= for (self: AAndExpr, AExpr) */
void parser_nodes__AAndExpr__n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val = p0; /* _n_expr2 on <self:AAndExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAndExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAndExpr__n_expr2_61d(val* self, val* p0) {
parser_nodes__AAndExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAndExpr#init for (self: AAndExpr) */
void parser_nodes__AAndExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:AAndExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAndExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAndExpr__init(val* self) {
parser_nodes__AAndExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#n_expr for (self: AOrElseExpr): AExpr */
val* parser_nodes__AOrElseExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1207);
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
var1 = parser_nodes__AOrElseExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr= for (self: AOrElseExpr, AExpr) */
void parser_nodes__AOrElseExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val = p0; /* _n_expr on <self:AOrElseExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AOrElseExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AOrElseExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#n_expr2 for (self: AOrElseExpr): AExpr */
val* parser_nodes__AOrElseExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1208);
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
var1 = parser_nodes__AOrElseExpr__n_expr2(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrElseExpr#n_expr2= for (self: AOrElseExpr, AExpr) */
void parser_nodes__AOrElseExpr__n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val = p0; /* _n_expr2 on <self:AOrElseExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AOrElseExpr__n_expr2_61d(val* self, val* p0) {
parser_nodes__AOrElseExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#init for (self: AOrElseExpr) */
void parser_nodes__AOrElseExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:AOrElseExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AOrElseExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AOrElseExpr__init(val* self) {
parser_nodes__AOrElseExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AImpliesExpr#n_expr for (self: AImpliesExpr): AExpr */
val* parser_nodes__AImpliesExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1214);
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
var1 = parser_nodes__AImpliesExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr= for (self: AImpliesExpr, AExpr) */
void parser_nodes__AImpliesExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val = p0; /* _n_expr on <self:AImpliesExpr> */
RET_LABEL:;
}
/* method parser_nodes#AImpliesExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AImpliesExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AImpliesExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AImpliesExpr#n_expr2 for (self: AImpliesExpr): AExpr */
val* parser_nodes__AImpliesExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1215);
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
var1 = parser_nodes__AImpliesExpr__n_expr2(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AImpliesExpr#n_expr2= for (self: AImpliesExpr, AExpr) */
void parser_nodes__AImpliesExpr__n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val = p0; /* _n_expr2 on <self:AImpliesExpr> */
RET_LABEL:;
}
/* method parser_nodes#AImpliesExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AImpliesExpr__n_expr2_61d(val* self, val* p0) {
parser_nodes__AImpliesExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AImpliesExpr#init for (self: AImpliesExpr) */
void parser_nodes__AImpliesExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:AImpliesExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AImpliesExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AImpliesExpr__init(val* self) {
parser_nodes__AImpliesExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#n_kwnot for (self: ANotExpr): TKwnot */
val* parser_nodes__ANotExpr__n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1221);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_kwnot for (self: Object): TKwnot */
val* VIRTUAL_parser_nodes__ANotExpr__n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = parser_nodes__ANotExpr__n_kwnot(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void parser_nodes__ANotExpr__n_kwnot_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val = p0; /* _n_kwnot on <self:ANotExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_nodes__ANotExpr__n_kwnot_61d(val* self, val* p0) {
parser_nodes__ANotExpr__n_kwnot_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#n_expr for (self: ANotExpr): AExpr */
val* parser_nodes__ANotExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1222);
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
var1 = parser_nodes__ANotExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void parser_nodes__ANotExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val = p0; /* _n_expr on <self:ANotExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__ANotExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__ANotExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#init for (self: ANotExpr) */
void parser_nodes__ANotExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:ANotExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ANotExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ANotExpr__init(val* self) {
parser_nodes__ANotExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AEqExpr#init for (self: AEqExpr) */
void parser_nodes__AEqExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AEqExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AEqExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AEqExpr__init(val* self) {
parser_nodes__AEqExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANeExpr#init for (self: ANeExpr) */
void parser_nodes__ANeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:ANeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ANeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ANeExpr__init(val* self) {
parser_nodes__ANeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALtExpr#init for (self: ALtExpr) */
void parser_nodes__ALtExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:ALtExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ALtExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ALtExpr__init(val* self) {
parser_nodes__ALtExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALeExpr#init for (self: ALeExpr) */
void parser_nodes__ALeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:ALeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ALeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ALeExpr__init(val* self) {
parser_nodes__ALeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ALlExpr#init for (self: ALlExpr) */
void parser_nodes__ALlExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:ALlExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ALlExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ALlExpr__init(val* self) {
parser_nodes__ALlExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AGtExpr#init for (self: AGtExpr) */
void parser_nodes__AGtExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AGtExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AGtExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AGtExpr__init(val* self) {
parser_nodes__AGtExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AGeExpr#init for (self: AGeExpr) */
void parser_nodes__AGeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AGeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AGeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AGeExpr__init(val* self) {
parser_nodes__AGeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AGgExpr#init for (self: AGgExpr) */
void parser_nodes__AGgExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AGgExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AGgExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AGgExpr__init(val* self) {
parser_nodes__AGgExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#n_expr for (self: AIsaExpr): AExpr */
val* parser_nodes__AIsaExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1268);
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
var1 = parser_nodes__AIsaExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void parser_nodes__AIsaExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val = p0; /* _n_expr on <self:AIsaExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AIsaExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AIsaExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#n_type for (self: AIsaExpr): AType */
val* parser_nodes__AIsaExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1269);
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
var1 = parser_nodes__AIsaExpr__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void parser_nodes__AIsaExpr__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val = p0; /* _n_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__AIsaExpr__n_type_61d(val* self, val* p0) {
parser_nodes__AIsaExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#init for (self: AIsaExpr) */
void parser_nodes__AIsaExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:AIsaExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AIsaExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AIsaExpr__init(val* self) {
parser_nodes__AIsaExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#APlusExpr#init for (self: APlusExpr) */
void parser_nodes__APlusExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:APlusExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#APlusExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__APlusExpr__init(val* self) {
parser_nodes__APlusExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMinusExpr#init for (self: AMinusExpr) */
void parser_nodes__AMinusExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AMinusExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AMinusExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AMinusExpr__init(val* self) {
parser_nodes__AMinusExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStarshipExpr#init for (self: AStarshipExpr) */
void parser_nodes__AStarshipExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AStarshipExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AStarshipExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AStarshipExpr__init(val* self) {
parser_nodes__AStarshipExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStarExpr#init for (self: AStarExpr) */
void parser_nodes__AStarExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:AStarExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AStarExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AStarExpr__init(val* self) {
parser_nodes__AStarExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASlashExpr#init for (self: ASlashExpr) */
void parser_nodes__ASlashExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:ASlashExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ASlashExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASlashExpr__init(val* self) {
parser_nodes__ASlashExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#APercentExpr#init for (self: APercentExpr) */
void parser_nodes__APercentExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__init]))(self) /* init on <self:APercentExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#APercentExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__APercentExpr__init(val* self) {
parser_nodes__APercentExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AUminusExpr#n_minus for (self: AUminusExpr): TMinus */
val* parser_nodes__AUminusExpr__n_minus(val* self) {
val* var /* : TMinus */;
val* var1 /* : TMinus */;
var1 = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1305);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUminusExpr#n_minus for (self: Object): TMinus */
val* VIRTUAL_parser_nodes__AUminusExpr__n_minus(val* self) {
val* var /* : TMinus */;
val* var1 /* : TMinus */;
var1 = parser_nodes__AUminusExpr__n_minus(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AUminusExpr#n_minus= for (self: AUminusExpr, TMinus) */
void parser_nodes__AUminusExpr__n_minus_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val = p0; /* _n_minus on <self:AUminusExpr> */
RET_LABEL:;
}
/* method parser_nodes#AUminusExpr#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_nodes__AUminusExpr__n_minus_61d(val* self, val* p0) {
parser_nodes__AUminusExpr__n_minus_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AUminusExpr#init for (self: AUminusExpr) */
void parser_nodes__AUminusExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__init]))(self) /* init on <self:AUminusExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AUminusExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AUminusExpr__init(val* self) {
parser_nodes__AUminusExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_kwnew for (self: ANewExpr): TKwnew */
val* parser_nodes__ANewExpr__n_kwnew(val* self) {
val* var /* : TKwnew */;
val* var1 /* : TKwnew */;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnew");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1311);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_kwnew for (self: Object): TKwnew */
val* VIRTUAL_parser_nodes__ANewExpr__n_kwnew(val* self) {
val* var /* : TKwnew */;
val* var1 /* : TKwnew */;
var1 = parser_nodes__ANewExpr__n_kwnew(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_kwnew= for (self: ANewExpr, TKwnew) */
void parser_nodes__ANewExpr__n_kwnew_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = p0; /* _n_kwnew on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_kwnew= for (self: Object, TKwnew) */
void VIRTUAL_parser_nodes__ANewExpr__n_kwnew_61d(val* self, val* p0) {
parser_nodes__ANewExpr__n_kwnew_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_type for (self: ANewExpr): AType */
val* parser_nodes__ANewExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1312);
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
var1 = parser_nodes__ANewExpr__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_type= for (self: ANewExpr, AType) */
void parser_nodes__ANewExpr__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = p0; /* _n_type on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ANewExpr__n_type_61d(val* self, val* p0) {
parser_nodes__ANewExpr__n_type_61d(self, p0);
RET_LABEL:;
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
var1 = parser_nodes__ANewExpr__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_id= for (self: ANewExpr, nullable TId) */
void parser_nodes__ANewExpr__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = p0; /* _n_id on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_nodes__ANewExpr__n_id_61d(val* self, val* p0) {
parser_nodes__ANewExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_args for (self: ANewExpr): AExprs */
val* parser_nodes__ANewExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1316);
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
var1 = parser_nodes__ANewExpr__n_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANewExpr#n_args= for (self: ANewExpr, AExprs) */
void parser_nodes__ANewExpr__n_args_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = p0; /* _n_args on <self:ANewExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_nodes__ANewExpr__n_args_61d(val* self, val* p0) {
parser_nodes__ANewExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#init for (self: ANewExpr) */
void parser_nodes__ANewExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ANewExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ANewExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ANewExpr__init(val* self) {
parser_nodes__ANewExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#n_expr for (self: AAttrFormExpr): AExpr */
val* parser_nodes__AAttrFormExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1323);
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
var1 = parser_nodes__AAttrFormExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_expr= for (self: AAttrFormExpr, AExpr) */
void parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = p0; /* _n_expr on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AAttrFormExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#n_id for (self: AAttrFormExpr): TAttrid */
val* parser_nodes__AAttrFormExpr__n_id(val* self) {
val* var /* : TAttrid */;
val* var1 /* : TAttrid */;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1326);
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
var1 = parser_nodes__AAttrFormExpr__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAttrFormExpr#n_id= for (self: AAttrFormExpr, TAttrid) */
void parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = p0; /* _n_id on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
parser_nodes__AAttrFormExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#init for (self: AAttrFormExpr) */
void parser_nodes__AAttrFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AAttrFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAttrFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAttrFormExpr__init(val* self) {
parser_nodes__AAttrFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAttrExpr#init for (self: AAttrExpr) */
void parser_nodes__AAttrExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__init]))(self) /* init on <self:AAttrExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAttrExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAttrExpr__init(val* self) {
parser_nodes__AAttrExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAttrAssignExpr#init for (self: AAttrAssignExpr) */
void parser_nodes__AAttrAssignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__init]))(self) /* init on <self:AAttrAssignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__init]))(self) /* init on <self:AAttrAssignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAttrAssignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAttrAssignExpr__init(val* self) {
parser_nodes__AAttrAssignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#n_id for (self: ACallFormExpr): TId */
val* parser_nodes__ACallFormExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1345);
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
var1 = parser_nodes__ACallFormExpr__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_id= for (self: ACallFormExpr, TId) */
void parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = p0; /* _n_id on <self:ACallFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
parser_nodes__ACallFormExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#n_args for (self: ACallFormExpr): AExprs */
val* parser_nodes__ACallFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1348);
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
var1 = parser_nodes__ACallFormExpr__n_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACallFormExpr#n_args= for (self: ACallFormExpr, AExprs) */
void parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = p0; /* _n_args on <self:ACallFormExpr> */
RET_LABEL:;
}
