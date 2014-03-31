#include "ropes.sep.0.h"
/* method ropes#TupleLeafNodePos#curr_node for (self: TupleLeafNodePos): LeafNode */
val* ropes__TupleLeafNodePos__curr_node(val* self) {
val* var /* : LeafNode */;
val* var1 /* : LeafNode */;
var1 = self->attrs[COLOR_ropes__TupleLeafNodePos___64dcurr_node].val; /* @curr_node on <self:TupleLeafNodePos> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @curr_node");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleLeafNodePos#curr_node for (self: Object): LeafNode */
val* VIRTUAL_ropes__TupleLeafNodePos__curr_node(val* self) {
val* var /* : LeafNode */;
val* var1 /* : LeafNode */;
var1 = ropes__TupleLeafNodePos__curr_node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleLeafNodePos#curr_node= for (self: TupleLeafNodePos, LeafNode) */
void ropes__TupleLeafNodePos__curr_node_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__TupleLeafNodePos___64dcurr_node].val = p0; /* @curr_node on <self:TupleLeafNodePos> */
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#curr_node= for (self: Object, LeafNode) */
void VIRTUAL_ropes__TupleLeafNodePos__curr_node_61d(val* self, val* p0) {
ropes__TupleLeafNodePos__curr_node_61d(self, p0);
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#corrected_pos for (self: TupleLeafNodePos): Int */
long ropes__TupleLeafNodePos__corrected_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_ropes__TupleLeafNodePos___64dcorrected_pos].l; /* @corrected_pos on <self:TupleLeafNodePos> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleLeafNodePos#corrected_pos for (self: Object): Int */
long VIRTUAL_ropes__TupleLeafNodePos__corrected_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__TupleLeafNodePos__corrected_pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleLeafNodePos#corrected_pos= for (self: TupleLeafNodePos, Int) */
void ropes__TupleLeafNodePos__corrected_pos_61d(val* self, long p0) {
self->attrs[COLOR_ropes__TupleLeafNodePos___64dcorrected_pos].l = p0; /* @corrected_pos on <self:TupleLeafNodePos> */
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#corrected_pos= for (self: Object, Int) */
void VIRTUAL_ropes__TupleLeafNodePos__corrected_pos_61d(val* self, long p0) {
ropes__TupleLeafNodePos__corrected_pos_61d(self, p0);
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#visit_stack for (self: TupleLeafNodePos): List[TupleVisitNode] */
val* ropes__TupleLeafNodePos__visit_stack(val* self) {
val* var /* : List[TupleVisitNode] */;
val* var1 /* : List[TupleVisitNode] */;
var1 = self->attrs[COLOR_ropes__TupleLeafNodePos___64dvisit_stack].val; /* @visit_stack on <self:TupleLeafNodePos> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visit_stack");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleLeafNodePos#visit_stack for (self: Object): List[TupleVisitNode] */
val* VIRTUAL_ropes__TupleLeafNodePos__visit_stack(val* self) {
val* var /* : List[TupleVisitNode] */;
val* var1 /* : List[TupleVisitNode] */;
var1 = ropes__TupleLeafNodePos__visit_stack(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleLeafNodePos#visit_stack= for (self: TupleLeafNodePos, List[TupleVisitNode]) */
void ropes__TupleLeafNodePos__visit_stack_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__TupleLeafNodePos___64dvisit_stack].val = p0; /* @visit_stack on <self:TupleLeafNodePos> */
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#visit_stack= for (self: Object, List[TupleVisitNode]) */
void VIRTUAL_ropes__TupleLeafNodePos__visit_stack_61d(val* self, val* p0) {
ropes__TupleLeafNodePos__visit_stack_61d(self, p0);
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#init for (self: TupleLeafNodePos, LeafNode, Int, List[TupleVisitNode]) */
void ropes__TupleLeafNodePos__init(val* self, val* p0, long p1, val* p2) {
self->attrs[COLOR_ropes__TupleLeafNodePos___64dcurr_node].val = p0; /* @curr_node on <self:TupleLeafNodePos> */
self->attrs[COLOR_ropes__TupleLeafNodePos___64dcorrected_pos].l = p1; /* @corrected_pos on <self:TupleLeafNodePos> */
self->attrs[COLOR_ropes__TupleLeafNodePos___64dvisit_stack].val = p2; /* @visit_stack on <self:TupleLeafNodePos> */
RET_LABEL:;
}
/* method ropes#TupleLeafNodePos#init for (self: Object, LeafNode, Int, List[TupleVisitNode]) */
void VIRTUAL_ropes__TupleLeafNodePos__init(val* self, val* p0, long p1, val* p2) {
ropes__TupleLeafNodePos__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method ropes#Rope#str_representation for (self: Rope): nullable String */
val* ropes__Rope__str_representation(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_ropes__Rope___64dstr_representation].val; /* @str_representation on <self:Rope> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#str_representation for (self: Object): nullable String */
val* VIRTUAL_ropes__Rope__str_representation(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = ropes__Rope__str_representation(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#str_representation= for (self: Rope, nullable String) */
void ropes__Rope__str_representation_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__Rope___64dstr_representation].val = p0; /* @str_representation on <self:Rope> */
RET_LABEL:;
}
/* method ropes#Rope#str_representation= for (self: Object, nullable String) */
void VIRTUAL_ropes__Rope__str_representation_61d(val* self, val* p0) {
ropes__Rope__str_representation_61d(self, p0);
RET_LABEL:;
}
/* method ropes#Rope#parent_node for (self: Rope): RopeNode */
val* ropes__Rope__parent_node(val* self) {
val* var /* : RopeNode */;
val* var1 /* : RopeNode */;
var1 = self->attrs[COLOR_ropes__Rope___64dparent_node].val; /* @parent_node on <self:Rope> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @parent_node");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 39);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#parent_node for (self: Object): RopeNode */
val* VIRTUAL_ropes__Rope__parent_node(val* self) {
val* var /* : RopeNode */;
val* var1 /* : RopeNode */;
var1 = ropes__Rope__parent_node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#parent_node= for (self: Rope, RopeNode) */
void ropes__Rope__parent_node_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__Rope___64dparent_node].val = p0; /* @parent_node on <self:Rope> */
RET_LABEL:;
}
/* method ropes#Rope#parent_node= for (self: Object, RopeNode) */
void VIRTUAL_ropes__Rope__parent_node_61d(val* self, val* p0) {
ropes__Rope__parent_node_61d(self, p0);
RET_LABEL:;
}
/* method ropes#Rope#init for (self: Rope) */
void ropes__Rope__init(val* self) {
val* var /* : ConcatNode */;
var = NEW_ropes__ConcatNode(&type_ropes__ConcatNode);
((void (*)(val*))(var->class->vft[COLOR_ropes__ConcatNode__init]))(var) /* init on <var:ConcatNode>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__parent_node_61d]))(self, var) /* parent_node= on <self:Rope>*/;
RET_LABEL:;
}
/* method ropes#Rope#init for (self: Object) */
void VIRTUAL_ropes__Rope__init(val* self) {
ropes__Rope__init(self);
RET_LABEL:;
}
/* method ropes#Rope#with_string for (self: Rope, AbstractString) */
void ropes__Rope__with_string(val* self, val* p0) {
val* var_str /* var str: AbstractString */;
val* var /* : ConcatNode */;
val* var1 /* : RopeNode */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : LeafNode */;
val* var4 /* : RopeNode */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
var_str = p0;
var = NEW_ropes__ConcatNode(&type_ropes__ConcatNode);
((void (*)(val*))(var->class->vft[COLOR_ropes__ConcatNode__init]))(var) /* init on <var:ConcatNode>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__parent_node_61d]))(self, var) /* parent_node= on <self:Rope>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:Rope>*/;
/* <var1:RopeNode> isa ConcatNode */
cltype = type_ropes__ConcatNode.color;
idtype = type_ropes__ConcatNode.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ConcatNode", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 50);
show_backtrace(1);
}
var3 = NEW_ropes__LeafNode(&type_ropes__LeafNode);
((void (*)(val*, val*))(var3->class->vft[COLOR_ropes__LeafNode__init]))(var3, var_str) /* init on <var3:LeafNode>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var1, var3) /* right_child= on <var1:RopeNode(ConcatNode)>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:Rope>*/;
/* <var4:RopeNode> isa ConcatNode */
cltype6 = type_ropes__ConcatNode.color;
idtype7 = type_ropes__ConcatNode.id;
if(cltype6 >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype6] == idtype7;
}
if (!var5) {
var_class_name8 = var4 == NULL ? "null" : var4->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ConcatNode", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 51);
show_backtrace(1);
}
((void (*)(val*))(var4->class->vft[COLOR_ropes__ConcatNode__update_data]))(var4) /* update_data on <var4:RopeNode(ConcatNode)>*/;
RET_LABEL:;
}
/* method ropes#Rope#with_string for (self: Object, AbstractString) */
void VIRTUAL_ropes__Rope__with_string(val* self, val* p0) {
ropes__Rope__with_string(self, p0);
RET_LABEL:;
}
/* method ropes#Rope#chars for (self: Rope): SequenceRead[Char] */
val* ropes__Rope__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : CharRopeView */;
var1 = NEW_ropes__CharRopeView(&type_ropes__CharRopeView);
((void (*)(val*, val*))(var1->class->vft[COLOR_ropes__CharRopeView__init]))(var1, self) /* init on <var1:CharRopeView>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#chars for (self: Object): SequenceRead[Char] */
val* VIRTUAL_ropes__Rope__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : SequenceRead[Char] */;
var1 = ropes__Rope__chars(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#length for (self: Rope): Int */
long ropes__Rope__length(val* self) {
long var /* : Int */;
val* var1 /* : RopeNode */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:Rope>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_ropes__RopeNode__length]))(var1) /* length on <var1:RopeNode>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#length for (self: Object): Int */
long VIRTUAL_ropes__Rope__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__Rope__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#to_s for (self: Rope): String */
val* ropes__Rope__to_s(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__str_representation]))(self) /* str_representation on <self:Rope>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__flatten]))(self) /* flatten on <self:Rope>*/;
var4;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__str_representation]))(self) /* str_representation on <self:Rope>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 70);
show_backtrace(1);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#to_s for (self: Object): String */
val* VIRTUAL_ropes__Rope__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ropes__Rope__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#flatten for (self: Rope): String */
val* ropes__Rope__flatten(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var_native_final_str /* var native_final_str: NativeString */;
long var7 /* : Int */;
char var8 /* : Char */;
long var10 /* : Int */;
long var_offset /* var offset: Int */;
val* var11 /* : DFSRopeLeafIterator */;
val* var_iter /* var iter: DFSRopeLeafIterator */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : nullable Object */;
val* var17 /* : String */;
long var18 /* : Int */;
long var19 /* : Int */;
val* var21 /* : nullable Object */;
val* var22 /* : String */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
val* var28 /* : String */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
var2 = 1;
{ /* Inline kernel#Int#+ (var1,var2) */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var3) /* calloc_string on <self:Rope>*/;
var_native_final_str = var6;
var7 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
var8 = '\0';
{ /* Inline string#NativeString#[]= (var_native_final_str,var7,var8) */
var_native_final_str[var7]=var8;
RET_LABEL9:(void)0;
}
var10 = 0;
var_offset = var10;
var11 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var11->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var11, self) /* init on <var11:DFSRopeLeafIterator>*/;
var_iter = var11;
for(;;) {
var12 = ((short int (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_iter) /* is_ok on <var_iter:DFSRopeLeafIterator>*/;
if (!var12) break;
var13 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_ropes__LeafNode__value]))(var13) /* value on <var13:nullable Object(LeafNode)>*/;
var15 = var14->attrs[COLOR_string__AbstractString___items].str; /* _items on <var14:String> */
var16 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_ropes__LeafNode__value]))(var16) /* value on <var16:nullable Object(LeafNode)>*/;
var18 = ((long (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__length]))(var17) /* length on <var17:String>*/;
var19 = 0;
{ /* Inline string#NativeString#copy_to (var15,var_native_final_str,var18,var19,var_offset) */
memcpy(var_native_final_str+var_offset,var15+var19,var18);
RET_LABEL20:(void)0;
}
var21 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_ropes__LeafNode__value]))(var21) /* value on <var21:nullable Object(LeafNode)>*/;
var23 = ((long (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__length]))(var22) /* length on <var22:String>*/;
{ /* Inline kernel#Int#+ (var_offset,var23) */
var26 = var_offset + var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_offset = var24;
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var27 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
var28 = string__NativeString__to_s_with_length(var_native_final_str, var27);
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#flatten for (self: Object): String */
val* VIRTUAL_ropes__Rope__flatten(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ropes__Rope__flatten(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#get_node_for_pos for (self: Rope, Int): TupleLeafNodePos */
val* ropes__Rope__get_node_for_pos(val* self, long p0) {
val* var /* : TupleLeafNodePos */;
long var_position /* var position: Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : RopeNode */;
val* var_curr_node /* var curr_node: nullable RopeNode */;
val* var16 /* : List[TupleVisitNode] */;
val* var_visit_stack /* var visit_stack: List[TupleVisitNode] */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : TupleVisitNode */;
val* var_curr_visit_tuple /* var curr_visit_tuple: TupleVisitNode */;
short int var21 /* : Bool */;
val* var22 /* : nullable RopeNode */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : nullable RopeNode */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable RopeNode */;
val* var36 /* : nullable RopeNode */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable RopeNode */;
val* var42 /* : null */;
short int var43 /* : Bool */;
val* var44 /* : nullable RopeNode */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
val* var49 /* : nullable RopeNode */;
static val* varonce;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
val* var57 /* : TupleLeafNodePos */;
var_position = p0;
var2 = 0;
{ /* Inline kernel#Int#>= (var_position,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var6 = var_position >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
{ /* Inline kernel#Int#< (var_position,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var14 = var_position < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 96);
show_backtrace(1);
}
var15 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:Rope>*/;
var_curr_node = var15;
var16 = NEW_list__List(&type_list__Listropes__TupleVisitNode);
((void (*)(val*))(var16->class->vft[COLOR_list__List__init]))(var16) /* init on <var16:List[TupleVisitNode]>*/;
var_visit_stack = var16;
for(;;) {
/* <var_curr_node:nullable RopeNode> isa ConcatNode */
cltype18 = type_ropes__ConcatNode.color;
idtype19 = type_ropes__ConcatNode.id;
if(var_curr_node == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_curr_node->type->table_size) {
var17 = 0;
} else {
var17 = var_curr_node->type->type_table[cltype18] == idtype19;
}
}
if (var17){
var20 = NEW_ropes__TupleVisitNode(&type_ropes__TupleVisitNode);
((void (*)(val*, val*))(var20->class->vft[COLOR_ropes__TupleVisitNode__init]))(var20, var_curr_node) /* init on <var20:TupleVisitNode>*/;
var_curr_visit_tuple = var20;
var22 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
var23 = NULL;
if (var22 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (!var24) {
var21 = 0;
} else {
var25 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 107);
show_backtrace(1);
} else {
var26 = ((long (*)(val*))(var25->class->vft[COLOR_ropes__RopeNode__length]))(var25) /* length on <var25:nullable RopeNode>*/;
}
{ /* Inline kernel#Int#< (var_position,var26) */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (!var29) {
var_class_name32 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var33 = var_position < var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var21 = var27;
}
if (var21){
var34 = 1;
((void (*)(val*, short int))(var_curr_visit_tuple->class->vft[COLOR_ropes__TupleVisitNode__left_visited_61d]))(var_curr_visit_tuple, var34) /* left_visited= on <var_curr_visit_tuple:TupleVisitNode>*/;
var35 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
var_curr_node = var35;
} else {
var36 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_curr_node) /* right_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
var37 = NULL;
if (var36 == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
var39 = 1;
((void (*)(val*, short int))(var_curr_visit_tuple->class->vft[COLOR_ropes__TupleVisitNode__left_visited_61d]))(var_curr_visit_tuple, var39) /* left_visited= on <var_curr_visit_tuple:TupleVisitNode>*/;
var40 = 1;
((void (*)(val*, short int))(var_curr_visit_tuple->class->vft[COLOR_ropes__TupleVisitNode__right_visited_61d]))(var_curr_visit_tuple, var40) /* right_visited= on <var_curr_visit_tuple:TupleVisitNode>*/;
var41 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
var42 = NULL;
if (var41 == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (var43){
var44 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
if (var44 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 113);
show_backtrace(1);
} else {
var45 = ((long (*)(val*))(var44->class->vft[COLOR_ropes__RopeNode__length]))(var44) /* length on <var44:nullable RopeNode>*/;
}
{ /* Inline kernel#Int#- (var_position,var45) */
var48 = var_position - var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_position = var46;
} else {
}
var49 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_curr_node) /* right_child on <var_curr_node:nullable RopeNode(ConcatNode)>*/;
var_curr_node = var49;
} else {
if (varonce) {
var50 = varonce;
} else {
var51 = "Fatal Error";
var52 = 11;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce = var50;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var50) /* print on <self:Rope>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 117);
show_backtrace(1);
}
}
((void (*)(val*, val*))(var_visit_stack->class->vft[COLOR_abstract_collection__Sequence__push]))(var_visit_stack, var_curr_visit_tuple) /* push on <var_visit_stack:List[TupleVisitNode]>*/;
} else {
/* <var_curr_node:nullable RopeNode> isa LeafNode */
cltype55 = type_ropes__LeafNode.color;
idtype56 = type_ropes__LeafNode.id;
if(var_curr_node == NULL) {
var54 = 0;
} else {
if(cltype55 >= var_curr_node->type->table_size) {
var54 = 0;
} else {
var54 = var_curr_node->type->type_table[cltype55] == idtype56;
}
}
if (var54){
var57 = NEW_ropes__TupleLeafNodePos(&type_ropes__TupleLeafNodePos);
((void (*)(val*, val*, long, val*))(var57->class->vft[COLOR_ropes__TupleLeafNodePos__init]))(var57, var_curr_node, var_position, var_visit_stack) /* init on <var57:TupleLeafNodePos>*/;
var = var57;
goto RET_LABEL;
} else {
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
return var;
}
/* method ropes#Rope#get_node_for_pos for (self: Object, Int): TupleLeafNodePos */
val* VIRTUAL_ropes__Rope__get_node_for_pos(val* self, long p0) {
val* var /* : TupleLeafNodePos */;
val* var1 /* : TupleLeafNodePos */;
var1 = ropes__Rope__get_node_for_pos(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#+ for (self: Rope, Rope): Rope */
val* ropes__Rope___43d(val* self, val* p0) {
val* var /* : Rope */;
val* var_other /* var other: Rope */;
val* var1 /* : BufferRope */;
val* var_new_rope /* var new_rope: BufferRope */;
val* var2 /* : DFSRopeLeafIterator */;
val* var_first_iter /* var first_iter: DFSRopeLeafIterator */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var6 /* : BufferRope */;
val* var7 /* : DFSRopeLeafIterator */;
val* var_second_iter /* var second_iter: DFSRopeLeafIterator */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : String */;
val* var11 /* : BufferRope */;
var_other = p0;
var1 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__init]))(var1) /* init on <var1:BufferRope>*/;
var_new_rope = var1;
var2 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var2->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var2, self) /* init on <var2:DFSRopeLeafIterator>*/;
var_first_iter = var2;
for(;;) {
var3 = ((short int (*)(val*))(var_first_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_first_iter) /* is_ok on <var_first_iter:DFSRopeLeafIterator>*/;
if (!var3) break;
var4 = ((val* (*)(val*))(var_first_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_first_iter) /* item on <var_first_iter:DFSRopeLeafIterator>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_ropes__LeafNode__value]))(var4) /* value on <var4:nullable Object(LeafNode)>*/;
var6 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var5) /* append on <var_new_rope:BufferRope>*/;
var6;
((void (*)(val*))(var_first_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_first_iter) /* next on <var_first_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var7 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var7->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var7, var_other) /* init on <var7:DFSRopeLeafIterator>*/;
var_second_iter = var7;
for(;;) {
var8 = ((short int (*)(val*))(var_second_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_second_iter) /* is_ok on <var_second_iter:DFSRopeLeafIterator>*/;
if (!var8) break;
var9 = ((val* (*)(val*))(var_second_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_second_iter) /* item on <var_second_iter:DFSRopeLeafIterator>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_ropes__LeafNode__value]))(var9) /* value on <var9:nullable Object(LeafNode)>*/;
var11 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var10) /* append on <var_new_rope:BufferRope>*/;
var11;
((void (*)(val*))(var_second_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_second_iter) /* next on <var_second_iter:DFSRopeLeafIterator>*/;
CONTINUE_label12: (void)0;
}
BREAK_label12: (void)0;
var = var_new_rope;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#+ for (self: Object, Rope): Rope */
val* VIRTUAL_ropes__Rope___43d(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__Rope___43d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#multi_concat for (self: Rope, Array[Rope]): Rope */
val* ropes__Rope__multi_concat(val* self, val* p0) {
val* var /* : Rope */;
val* var_ropes /* var ropes: Array[Rope] */;
val* var1 /* : BufferRope */;
val* var_new_rope /* var new_rope: BufferRope */;
val* var2 /* : Iterator[LeafNode] */;
val* var_self_iter /* var self_iter: Iterator[LeafNode] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var6 /* : BufferRope */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_i /* var i: Rope */;
val* var10 /* : Iterator[LeafNode] */;
val* var_iter /* var iter: Iterator[LeafNode] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var13 /* : String */;
val* var14 /* : BufferRope */;
var_ropes = p0;
var1 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__init]))(var1) /* init on <var1:BufferRope>*/;
var_new_rope = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__iterator]))(self) /* iterator on <self:Rope>*/;
var_self_iter = var2;
for(;;) {
var3 = ((short int (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_self_iter) /* is_ok on <var_self_iter:Iterator[LeafNode]>*/;
if (!var3) break;
var4 = ((val* (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_self_iter) /* item on <var_self_iter:Iterator[LeafNode]>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_ropes__LeafNode__value]))(var4) /* value on <var4:nullable Object(LeafNode)>*/;
var6 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var5) /* append on <var_new_rope:BufferRope>*/;
var6;
((void (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_self_iter) /* next on <var_self_iter:Iterator[LeafNode]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var7 = ((val* (*)(val*))(var_ropes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_ropes) /* iterator on <var_ropes:Array[Rope]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_i = var9;
var10 = ((val* (*)(val*))(var_i->class->vft[COLOR_ropes__Rope__iterator]))(var_i) /* iterator on <var_i:Rope>*/;
var_iter = var10;
for(;;) {
var11 = ((short int (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_iter) /* is_ok on <var_iter:Iterator[LeafNode]>*/;
if (!var11) break;
var12 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:Iterator[LeafNode]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_ropes__LeafNode__value]))(var12) /* value on <var12:nullable Object(LeafNode)>*/;
var14 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var13) /* append on <var_new_rope:BufferRope>*/;
var14;
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:Iterator[LeafNode]>*/;
CONTINUE_label15: (void)0;
}
BREAK_label15: (void)0;
CONTINUE_label16: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label16: (void)0;
var = var_new_rope;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#multi_concat for (self: Object, Array[Rope]): Rope */
val* VIRTUAL_ropes__Rope__multi_concat(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__Rope__multi_concat(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#* for (self: Rope, Int): Rope */
val* ropes__Rope___42d(val* self, long p0) {
val* var /* : Rope */;
long var_repeats /* var repeats: Int */;
val* var1 /* : BufferRope */;
val* var_new_rope /* var new_rope: BufferRope */;
val* var2 /* : String */;
val* var_str /* var str: String */;
val* var3 /* : Range[Int] */;
long var4 /* : Int */;
val* var5 /* : Discrete */;
val* var6 /* : Discrete */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
long var_i /* var i: Int */;
long var10 /* : Int */;
val* var11 /* : BufferRope */;
var_repeats = p0;
var1 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__init]))(var1) /* init on <var1:BufferRope>*/;
var_new_rope = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:Rope>*/;
var_str = var2;
var3 = NEW_range__Range(&type_range__Rangekernel__Int);
var4 = 1;
var5 = BOX_kernel__Int(var4); /* autobox from Int to Discrete */
var6 = BOX_kernel__Int(var_repeats); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_range__Range__init]))(var3, var5, var6) /* init on <var3:Range[Int]>*/;
var7 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Range[Int]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var10 = ((struct instance_kernel__Int*)var9)->value; /* autounbox from nullable Object to Int */;
var_i = var10;
var11 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var_str) /* append on <var_new_rope:BufferRope>*/;
var11;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_new_rope;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#* for (self: Object, Int): Rope */
val* VIRTUAL_ropes__Rope___42d(val* self, long p0) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__Rope___42d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#iterator for (self: Rope): Iterator[LeafNode] */
val* ropes__Rope__iterator(val* self) {
val* var /* : Iterator[LeafNode] */;
val* var1 /* : DFSRopeLeafIterator */;
var1 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var1->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var1, self) /* init on <var1:DFSRopeLeafIterator>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#iterator for (self: Object): Iterator[LeafNode] */
val* VIRTUAL_ropes__Rope__iterator(val* self) {
val* var /* : Iterator[LeafNode] */;
val* var1 /* : Iterator[LeafNode] */;
var1 = ropes__Rope__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#subrope for (self: Rope, Int, Int): Rope */
val* ropes__Rope__subrope(val* self, long p0, long p1) {
val* var /* : Rope */;
long var_index_from /* var index_from: Int */;
long var_count /* var count: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : BufferRope */;
val* var_buffer /* var buffer: BufferRope */;
val* var43 /* : DFSRopeLeafIterator */;
val* var_iter /* var iter: DFSRopeLeafIterator */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
long var_curr_subrope_index /* var curr_subrope_index: Int */;
short int var48 /* : Bool */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var62 /* : String */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : BufferRope */;
val* var75 /* : nullable Object */;
val* var76 /* : String */;
long var77 /* : Int */;
long var78 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
val* var85 /* : nullable Object */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : BufferRope */;
val* var89 /* : nullable Object */;
val* var90 /* : String */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
short int var98 /* : Bool */;
val* var99 /* : nullable Object */;
val* var100 /* : String */;
val* var101 /* : BufferRope */;
val* var102 /* : nullable Object */;
val* var103 /* : String */;
long var104 /* : Int */;
long var105 /* : Int */;
long var107 /* : Int */;
val* var108 /* : nullable Object */;
val* var109 /* : String */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : BufferRope */;
var_index_from = p0;
var_count = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_count,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 205);
show_backtrace(1);
}
var6 = 0;
{ /* Inline kernel#Int#< (var_index_from,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
var_class_name12 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var13 = var_index_from < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
{ /* Inline kernel#Int#+ (var_count,var_index_from) */
var16 = var_count + var_index_from;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_count = var14;
var17 = 0;
{ /* Inline kernel#Int#< (var_count,var17) */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (!var20) {
var_class_name23 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var24 = var_count < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var25 = 0;
var_count = var25;
} else {
}
var26 = 0;
var_index_from = var26;
} else {
}
{ /* Inline kernel#Int#- (var_count,var_index_from) */
var29 = var_count - var_index_from;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var30 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
{ /* Inline kernel#Int#>= (var27,var30) */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (!var33) {
var_class_name36 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var37 = var27 >= var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
var38 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
{ /* Inline kernel#Int#- (var38,var_index_from) */
var41 = var38 - var_index_from;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var_count = var39;
} else {
}
var42 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var42->class->vft[COLOR_ropes__BufferRope__init]))(var42) /* init on <var42:BufferRope>*/;
var_buffer = var42;
var43 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*, long))(var43->class->vft[COLOR_ropes__DFSRopeLeafIterator__with_index]))(var43, self, var_index_from) /* with_index on <var43:DFSRopeLeafIterator>*/;
var_iter = var43;
var44 = ((long (*)(val*))(var_iter->class->vft[COLOR_ropes__RopeIterator__pos]))(var_iter) /* pos on <var_iter:DFSRopeLeafIterator>*/;
{ /* Inline kernel#Int#- (var_index_from,var44) */
var47 = var_index_from - var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var_curr_subrope_index = var45;
for(;;) {
var48 = ((short int (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_iter) /* is_ok on <var_iter:DFSRopeLeafIterator>*/;
if (!var48) break;
var49 = 0;
{ /* Inline kernel#Int#== (var_count,var49) */
var52 = var_count == var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
if (var50){
goto BREAK_label;
} else {
}
var53 = 0;
{ /* Inline kernel#Int#> (var_curr_subrope_index,var53) */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (!var56) {
var_class_name59 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var60 = var_curr_subrope_index > var53;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
if (var54){
var61 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_ropes__LeafNode__value]))(var61) /* value on <var61:nullable Object(LeafNode)>*/;
var63 = ((long (*)(val*))(var62->class->vft[COLOR_abstract_collection__Collection__length]))(var62) /* length on <var62:String>*/;
{ /* Inline kernel#Int#>= (var_count,var63) */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var66 = 1; /* easy <var63:Int> isa OTHER*/
if (!var66) {
var_class_name69 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var70 = var_count >= var63;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
if (var64){
var71 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var72 = ((val* (*)(val*))(var71->class->vft[COLOR_ropes__LeafNode__value]))(var71) /* value on <var71:nullable Object(LeafNode)>*/;
var73 = ((val* (*)(val*, long, long))(var72->class->vft[COLOR_string__AbstractString__substring]))(var72, var_curr_subrope_index, var_count) /* substring on <var72:String>*/;
var74 = ((val* (*)(val*, val*))(var_buffer->class->vft[COLOR_ropes__BufferRope__append]))(var_buffer, var73) /* append on <var_buffer:BufferRope>*/;
var74;
var75 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_ropes__LeafNode__value]))(var75) /* value on <var75:nullable Object(LeafNode)>*/;
var77 = ((long (*)(val*))(var76->class->vft[COLOR_abstract_collection__Collection__length]))(var76) /* length on <var76:String>*/;
{ /* Inline kernel#Int#- (var77,var_curr_subrope_index) */
var80 = var77 - var_curr_subrope_index;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
{ /* Inline kernel#Int#- (var_count,var78) */
var83 = var_count - var78;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var_count = var81;
var84 = 0;
var_curr_subrope_index = var84;
} else {
var85 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var86 = ((val* (*)(val*))(var85->class->vft[COLOR_ropes__LeafNode__value]))(var85) /* value on <var85:nullable Object(LeafNode)>*/;
var87 = ((val* (*)(val*, long, long))(var86->class->vft[COLOR_string__AbstractString__substring]))(var86, var_curr_subrope_index, var_count) /* substring on <var86:String>*/;
var88 = ((val* (*)(val*, val*))(var_buffer->class->vft[COLOR_ropes__BufferRope__append]))(var_buffer, var87) /* append on <var_buffer:BufferRope>*/;
var88;
goto BREAK_label;
}
} else {
var89 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_ropes__LeafNode__value]))(var89) /* value on <var89:nullable Object(LeafNode)>*/;
var91 = ((long (*)(val*))(var90->class->vft[COLOR_abstract_collection__Collection__length]))(var90) /* length on <var90:String>*/;
{ /* Inline kernel#Int#>= (var_count,var91) */
/* Covariant cast for argument 0 (i) <var91:Int> isa OTHER */
/* <var91:Int> isa OTHER */
var94 = 1; /* easy <var91:Int> isa OTHER*/
if (!var94) {
var_class_name97 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var98 = var_count >= var91;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
if (var92){
var99 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var100 = ((val* (*)(val*))(var99->class->vft[COLOR_ropes__LeafNode__value]))(var99) /* value on <var99:nullable Object(LeafNode)>*/;
var101 = ((val* (*)(val*, val*))(var_buffer->class->vft[COLOR_ropes__BufferRope__append]))(var_buffer, var100) /* append on <var_buffer:BufferRope>*/;
var101;
var102 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var103 = ((val* (*)(val*))(var102->class->vft[COLOR_ropes__LeafNode__value]))(var102) /* value on <var102:nullable Object(LeafNode)>*/;
var104 = ((long (*)(val*))(var103->class->vft[COLOR_abstract_collection__Collection__length]))(var103) /* length on <var103:String>*/;
{ /* Inline kernel#Int#- (var_count,var104) */
var107 = var_count - var104;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var_count = var105;
} else {
var108 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var109 = ((val* (*)(val*))(var108->class->vft[COLOR_ropes__LeafNode__value]))(var108) /* value on <var108:nullable Object(LeafNode)>*/;
var110 = 0;
var111 = ((val* (*)(val*, long, long))(var109->class->vft[COLOR_string__AbstractString__substring]))(var109, var110, var_count) /* substring on <var109:String>*/;
var112 = ((val* (*)(val*, val*))(var_buffer->class->vft[COLOR_ropes__BufferRope__append]))(var_buffer, var111) /* append on <var_buffer:BufferRope>*/;
var112;
goto BREAK_label;
}
}
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_buffer;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#subrope for (self: Object, Int, Int): Rope */
val* VIRTUAL_ropes__Rope__subrope(val* self, long p0, long p1) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__Rope__subrope(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#to_upper for (self: Rope): Rope */
val* ropes__Rope__to_upper(val* self) {
val* var /* : Rope */;
val* var1 /* : BufferRope */;
val* var_new_rope /* var new_rope: BufferRope */;
val* var2 /* : DFSRopeLeafIterator */;
val* var_iter /* var iter: DFSRopeLeafIterator */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : BufferRope */;
var1 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__init]))(var1) /* init on <var1:BufferRope>*/;
var_new_rope = var1;
var2 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var2->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var2, self) /* init on <var2:DFSRopeLeafIterator>*/;
var_iter = var2;
for(;;) {
var3 = ((short int (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_iter) /* is_ok on <var_iter:DFSRopeLeafIterator>*/;
if (!var3) break;
var4 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_ropes__LeafNode__value]))(var4) /* value on <var4:nullable Object(LeafNode)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_string__AbstractString__to_upper]))(var5) /* to_upper on <var5:String>*/;
var7 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var6) /* append on <var_new_rope:BufferRope>*/;
var7;
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_new_rope;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#to_upper for (self: Object): Rope */
val* VIRTUAL_ropes__Rope__to_upper(val* self) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__Rope__to_upper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#to_lower for (self: Rope): Rope */
val* ropes__Rope__to_lower(val* self) {
val* var /* : Rope */;
val* var1 /* : BufferRope */;
val* var_new_rope /* var new_rope: BufferRope */;
val* var2 /* : DFSRopeLeafIterator */;
val* var_iter /* var iter: DFSRopeLeafIterator */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : BufferRope */;
var1 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__init]))(var1) /* init on <var1:BufferRope>*/;
var_new_rope = var1;
var2 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var2->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var2, self) /* init on <var2:DFSRopeLeafIterator>*/;
var_iter = var2;
for(;;) {
var3 = ((short int (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_iter) /* is_ok on <var_iter:DFSRopeLeafIterator>*/;
if (!var3) break;
var4 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_ropes__LeafNode__value]))(var4) /* value on <var4:nullable Object(LeafNode)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_string__AbstractString__to_lower]))(var5) /* to_lower on <var5:String>*/;
var7 = ((val* (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_new_rope, var6) /* append on <var_new_rope:BufferRope>*/;
var7;
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_new_rope;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#to_lower for (self: Object): Rope */
val* VIRTUAL_ropes__Rope__to_lower(val* self) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__Rope__to_lower(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#== for (self: Rope, nullable Object): Bool */
short int ropes__Rope___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_6 /* var : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : RopeCharIterator */;
val* var_self_iter /* var self_iter: RopeCharIterator */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : RopeCharIterator */;
val* var_other_iterator /* var other_iterator: RopeCharIterator */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
long var35 /* : Int */;
long var_pos /* var pos: Int */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
var_other = p0;
var2 = NULL;
if (var_other == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
var_ = var3;
if (var3){
var1 = var_;
} else {
/* <var_other:nullable Object(Object)> isa Rope */
cltype = type_ropes__Rope.color;
idtype = type_ropes__Rope.id;
if(cltype >= var_other->type->table_size) {
var5 = 0;
} else {
var5 = var_other->type->type_table[cltype] == idtype;
}
var_6 = var5;
if (var5){
var4 = var_6;
} else {
/* <var_other:nullable Object(Object)> isa AbstractString */
cltype8 = type_string__AbstractString.color;
idtype9 = type_string__AbstractString.id;
if(cltype8 >= var_other->type->table_size) {
var7 = 0;
} else {
var7 = var_other->type->type_table[cltype8] == idtype9;
}
var4 = var7;
}
var10 = !var4;
var1 = var10;
}
if (var1){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
var12 = NEW_ropes__RopeCharIterator(&type_ropes__RopeCharIterator);
((void (*)(val*, val*))(var12->class->vft[COLOR_ropes__RopeCharIterator__init]))(var12, self) /* init on <var12:RopeCharIterator>*/;
var_self_iter = var12;
/* <var_other:nullable Object> isa Rope */
cltype14 = type_ropes__Rope.color;
idtype15 = type_ropes__Rope.id;
if(var_other == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_other->type->table_size) {
var13 = 0;
} else {
var13 = var_other->type->type_table[cltype14] == idtype15;
}
}
if (var13){
var16 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
var17 = ((long (*)(val*))(var_other->class->vft[COLOR_ropes__Rope__length]))(var_other) /* length on <var_other:nullable Object(Rope)>*/;
{ /* Inline kernel#Int#!= (var16,var17) */
var20 = var16 == var17;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var22 = 0;
var = var22;
goto RET_LABEL;
} else {
}
var23 = NEW_ropes__RopeCharIterator(&type_ropes__RopeCharIterator);
((void (*)(val*, val*))(var23->class->vft[COLOR_ropes__RopeCharIterator__init]))(var23, var_other) /* init on <var23:RopeCharIterator>*/;
var_other_iterator = var23;
for(;;) {
var24 = ((short int (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_self_iter) /* is_ok on <var_self_iter:RopeCharIterator>*/;
if (!var24) break;
var25 = ((val* (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_self_iter) /* item on <var_self_iter:RopeCharIterator>*/;
var26 = ((val* (*)(val*))(var_other_iterator->class->vft[COLOR_abstract_collection__Iterator__item]))(var_other_iterator) /* item on <var_other_iterator:RopeCharIterator>*/;
{ /* Inline kernel#Char#!= (var25,var26) */
var29 = var25 == var26 || (((struct instance_kernel__Char*)var25)->value == ((struct instance_kernel__Char*)var26)->value);
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (var27){
var31 = 0;
var = var31;
goto RET_LABEL;
} else {
}
((void (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_self_iter) /* next on <var_self_iter:RopeCharIterator>*/;
((void (*)(val*))(var_other_iterator->class->vft[COLOR_abstract_collection__Iterator__next]))(var_other_iterator) /* next on <var_other_iterator:RopeCharIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
/* <var_other:nullable Object> isa AbstractString */
cltype33 = type_string__AbstractString.color;
idtype34 = type_string__AbstractString.id;
if(var_other == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_other->type->table_size) {
var32 = 0;
} else {
var32 = var_other->type->type_table[cltype33] == idtype34;
}
}
if (var32){
var35 = 0;
var_pos = var35;
var36 = ((long (*)(val*))(self->class->vft[COLOR_ropes__Rope__length]))(self) /* length on <self:Rope>*/;
var37 = ((long (*)(val*))(var_other->class->vft[COLOR_abstract_collection__Collection__length]))(var_other) /* length on <var_other:nullable Object(AbstractString)>*/;
{ /* Inline kernel#Int#!= (var36,var37) */
var40 = var36 == var37;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
if (var38){
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
for(;;) {
var43 = ((short int (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_self_iter) /* is_ok on <var_self_iter:RopeCharIterator>*/;
if (!var43) break;
var44 = ((val* (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_self_iter) /* item on <var_self_iter:RopeCharIterator>*/;
var45 = ((val* (*)(val*, long))(var_other->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_other, var_pos) /* [] on <var_other:nullable Object(AbstractString)>*/;
{ /* Inline kernel#Char#!= (var44,var45) */
var48 = var44 == var45 || (((struct instance_kernel__Char*)var44)->value == ((struct instance_kernel__Char*)var45)->value);
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
if (var46){
var50 = 0;
var = var50;
goto RET_LABEL;
} else {
}
var51 = 1;
{ /* Inline kernel#Int#+ (var_pos,var51) */
var54 = var_pos + var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_pos = var52;
((void (*)(val*))(var_self_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_self_iter) /* next on <var_self_iter:RopeCharIterator>*/;
CONTINUE_label55: (void)0;
}
BREAK_label55: (void)0;
} else {
}
}
var56 = 1;
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_ropes__Rope___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__Rope___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Rope#< for (self: Rope, Rope): Bool */
short int ropes__Rope___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Rope */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_other_iter /* var other_iter: IndexedIterator[Char] */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
char var_i /* var i: Char */;
char var8 /* : Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
char var19 /* : Char */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
char var29 /* : Char */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Rope> isa OTHER */
/* <p0:Rope> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 301);
show_backtrace(1);
}
var_other = p0;
var2 = ((val* (*)(val*))(var_other->class->vft[COLOR_ropes__Rope__chars]))(var_other) /* chars on <var_other:Rope>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:SequenceRead[Char]>*/;
var_other_iter = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__chars]))(self) /* chars on <self:Rope>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:SequenceRead[Char]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var8 = ((struct instance_kernel__Char*)var7)->value; /* autounbox from nullable Object to Char */;
var_i = var8;
var9 = ((short int (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_other_iter) /* is_ok on <var_other_iter:IndexedIterator[Char]>*/;
var10 = !var9;
if (var10){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_other_iter) /* item on <var_other_iter:IndexedIterator[Char]>*/;
{ /* Inline kernel#Char#< (var_i,var12) */
/* Covariant cast for argument 0 (i) <var12:nullable Object(Char)> isa OTHER */
/* <var12:nullable Object(Char)> isa OTHER */
var15 = 1; /* easy <var12:nullable Object(Char)> isa OTHER*/
if (!var15) {
var_class_name18 = var12 == NULL ? "null" : var12->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 437);
show_backtrace(1);
}
var19 = ((struct instance_kernel__Char*)var12)->value; /* autounbox from nullable Object to Char */;
var20 = var_i < var19;
var13 = var20;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var21 = 1;
var = var21;
goto RET_LABEL;
} else {
}
var22 = ((val* (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_other_iter) /* item on <var_other_iter:IndexedIterator[Char]>*/;
{ /* Inline kernel#Char#> (var_i,var22) */
/* Covariant cast for argument 0 (i) <var22:nullable Object(Char)> isa OTHER */
/* <var22:nullable Object(Char)> isa OTHER */
var25 = 1; /* easy <var22:nullable Object(Char)> isa OTHER*/
if (!var25) {
var_class_name28 = var22 == NULL ? "null" : var22->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 439);
show_backtrace(1);
}
var29 = ((struct instance_kernel__Char*)var22)->value; /* autounbox from nullable Object to Char */;
var30 = var_i > var29;
var23 = var30;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
var31 = 0;
var = var31;
goto RET_LABEL;
} else {
}
((void (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_other_iter) /* next on <var_other_iter:IndexedIterator[Char]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var32 = ((short int (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_other_iter) /* is_ok on <var_other_iter:IndexedIterator[Char]>*/;
if (var32){
var33 = 1;
var = var33;
goto RET_LABEL;
} else {
}
var34 = 0;
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Rope#< for (self: Object, Comparable): Bool */
short int VIRTUAL_ropes__Rope___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__Rope___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#is_dirty for (self: BufferRope): Bool */
short int ropes__BufferRope__is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_ropes__BufferRope___64dis_dirty].s; /* @is_dirty on <self:BufferRope> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#is_dirty for (self: Object): Bool */
short int VIRTUAL_ropes__BufferRope__is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__BufferRope__is_dirty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#is_dirty= for (self: BufferRope, Bool) */
void ropes__BufferRope__is_dirty_61d(val* self, short int p0) {
self->attrs[COLOR_ropes__BufferRope___64dis_dirty].s = p0; /* @is_dirty on <self:BufferRope> */
RET_LABEL:;
}
/* method ropes#BufferRope#is_dirty= for (self: Object, Bool) */
void VIRTUAL_ropes__BufferRope__is_dirty_61d(val* self, short int p0) {
ropes__BufferRope__is_dirty_61d(self, p0);
RET_LABEL:;
}
/* method ropes#BufferRope#init for (self: BufferRope) */
void ropes__BufferRope__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_ropes__Rope__init]))(self) /* init on <self:BufferRope>*/;
RET_LABEL:;
}
/* method ropes#BufferRope#init for (self: Object) */
void VIRTUAL_ropes__BufferRope__init(val* self) {
ropes__BufferRope__init(self);
RET_LABEL:;
}
/* method ropes#BufferRope#with_string for (self: BufferRope, AbstractString) */
void ropes__BufferRope__with_string(val* self, val* p0) {
val* var_str /* var str: AbstractString */;
var_str = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__with_string]))(self, p0) /* with_string on <self:BufferRope>*/;
RET_LABEL:;
}
/* method ropes#BufferRope#with_string for (self: Object, AbstractString) */
void VIRTUAL_ropes__BufferRope__with_string(val* self, val* p0) {
ropes__BufferRope__with_string(self, p0);
RET_LABEL:;
}
/* method ropes#BufferRope#rotate_right for (self: BufferRope, ConcatNode) */
void ropes__BufferRope__rotate_right(val* self, val* p0) {
val* var_root /* var root: ConcatNode */;
val* var /* : nullable RopeNode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable RopeNode */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_pivot /* var pivot: ConcatNode */;
val* var5 /* : nullable RopeNode */;
val* var_root_new_left /* var root_new_left: nullable RopeNode */;
val* var6 /* : nullable ConcatNode */;
val* var_root_parent /* var root_parent: nullable ConcatNode */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : nullable RopeNode */;
short int var11 /* : Bool */;
var_root = p0;
var = ((val* (*)(val*))(var_root->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_root) /* left_child on <var_root:ConcatNode>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 353);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var_root->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_root) /* left_child on <var_root:ConcatNode>*/;
/* <var3:nullable RopeNode> isa ConcatNode */
cltype = type_ropes__ConcatNode.color;
idtype = type_ropes__ConcatNode.id;
if(var3 == NULL) {
var4 = 0;
} else {
if(cltype >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ConcatNode", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 354);
show_backtrace(1);
}
var_pivot = var3;
var5 = ((val* (*)(val*))(var_pivot->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_pivot) /* right_child on <var_pivot:ConcatNode>*/;
var_root_new_left = var5;
var6 = ((val* (*)(val*))(var_root->class->vft[COLOR_ropes__RopeNode__parent]))(var_root) /* parent on <var_root:ConcatNode>*/;
var_root_parent = var6;
((void (*)(val*, val*))(var_root->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_root, var_root_new_left) /* left_child= on <var_root:ConcatNode>*/;
((void (*)(val*, val*))(var_pivot->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_pivot, var_root) /* right_child= on <var_pivot:ConcatNode>*/;
var7 = NULL;
if (var_root_parent == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__parent_node_61d]))(self, var_pivot) /* parent_node= on <self:BufferRope>*/;
var9 = NULL;
((void (*)(val*, val*))(var_pivot->class->vft[COLOR_ropes__RopeNode__parent_61d]))(var_pivot, var9) /* parent= on <var_pivot:ConcatNode>*/;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_root_parent) /* left_child on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
if (var10 == NULL) {
var11 = 0; /* <var_root:ConcatNode> cannot be null */
} else {
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_root) /* == on <var10:nullable RopeNode>*/;
}
if (var11){
((void (*)(val*, val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_root_parent, var_pivot) /* left_child= on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
} else {
((void (*)(val*, val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_root_parent, var_pivot) /* right_child= on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
}
((void (*)(val*))(var_root->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_root) /* update_data on <var_root:ConcatNode>*/;
((void (*)(val*))(var_pivot->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_pivot) /* update_data on <var_pivot:ConcatNode>*/;
((void (*)(val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_root_parent) /* update_data on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
RET_LABEL:;
}
/* method ropes#BufferRope#rotate_right for (self: Object, ConcatNode) */
void VIRTUAL_ropes__BufferRope__rotate_right(val* self, val* p0) {
ropes__BufferRope__rotate_right(self, p0);
RET_LABEL:;
}
/* method ropes#BufferRope#rotate_left for (self: BufferRope, ConcatNode) */
void ropes__BufferRope__rotate_left(val* self, val* p0) {
val* var_root /* var root: ConcatNode */;
val* var /* : nullable RopeNode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable RopeNode */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_pivot /* var pivot: ConcatNode */;
val* var5 /* : nullable RopeNode */;
val* var_root_new_right /* var root_new_right: nullable RopeNode */;
val* var6 /* : nullable ConcatNode */;
val* var_root_parent /* var root_parent: nullable ConcatNode */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : nullable RopeNode */;
short int var11 /* : Bool */;
var_root = p0;
var = ((val* (*)(val*))(var_root->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_root) /* right_child on <var_root:ConcatNode>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 386);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var_root->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_root) /* right_child on <var_root:ConcatNode>*/;
/* <var3:nullable RopeNode> isa ConcatNode */
cltype = type_ropes__ConcatNode.color;
idtype = type_ropes__ConcatNode.id;
if(var3 == NULL) {
var4 = 0;
} else {
if(cltype >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ConcatNode", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 387);
show_backtrace(1);
}
var_pivot = var3;
var5 = ((val* (*)(val*))(var_pivot->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_pivot) /* left_child on <var_pivot:ConcatNode>*/;
var_root_new_right = var5;
var6 = ((val* (*)(val*))(var_root->class->vft[COLOR_ropes__RopeNode__parent]))(var_root) /* parent on <var_root:ConcatNode>*/;
var_root_parent = var6;
((void (*)(val*, val*))(var_root->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_root, var_root_new_right) /* right_child= on <var_root:ConcatNode>*/;
((void (*)(val*, val*))(var_pivot->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_pivot, var_root) /* left_child= on <var_pivot:ConcatNode>*/;
var7 = NULL;
if (var_root_parent == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__parent_node_61d]))(self, var_pivot) /* parent_node= on <self:BufferRope>*/;
var9 = NULL;
((void (*)(val*, val*))(var_pivot->class->vft[COLOR_ropes__RopeNode__parent_61d]))(var_pivot, var9) /* parent= on <var_pivot:ConcatNode>*/;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_root_parent) /* left_child on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
if (var10 == NULL) {
var11 = 0; /* <var_root:ConcatNode> cannot be null */
} else {
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_root) /* == on <var10:nullable RopeNode>*/;
}
if (var11){
((void (*)(val*, val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_root_parent, var_pivot) /* left_child= on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
} else {
((void (*)(val*, val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_root_parent, var_pivot) /* right_child= on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
}
((void (*)(val*))(var_root->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_root) /* update_data on <var_root:ConcatNode>*/;
((void (*)(val*))(var_pivot->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_pivot) /* update_data on <var_pivot:ConcatNode>*/;
((void (*)(val*))(var_root_parent->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_root_parent) /* update_data on <var_root_parent:nullable ConcatNode(ConcatNode)>*/;
RET_LABEL:;
}
/* method ropes#BufferRope#rotate_left for (self: Object, ConcatNode) */
void VIRTUAL_ropes__BufferRope__rotate_left(val* self, val* p0) {
ropes__BufferRope__rotate_left(self, p0);
RET_LABEL:;
}
/* method ropes#BufferRope#balance_from_node for (self: BufferRope, nullable ConcatNode) */
void ropes__BufferRope__balance_from_node(val* self, val* p0) {
val* var_parent_node /* var parent_node: nullable ConcatNode */;
val* var /* : null */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var_node_balance /* var node_balance: Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
val* var20 /* : nullable ConcatNode */;
var_parent_node = p0;
for(;;) {
var = NULL;
if (var_parent_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (!var1) break;
((void (*)(val*))(var_parent_node->class->vft[COLOR_ropes__ConcatNode__update_data]))(var_parent_node) /* update_data on <var_parent_node:nullable ConcatNode(ConcatNode)>*/;
var2 = ((long (*)(val*))(var_parent_node->class->vft[COLOR_ropes__RopeNode__balance_factor]))(var_parent_node) /* balance_factor on <var_parent_node:nullable ConcatNode(ConcatNode)>*/;
var_node_balance = var2;
var4 = 1;
{ /* Inline kernel#Int#unary - (var4) */
var7 = -var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
{ /* Inline kernel#Int#< (var_node_balance,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (!var10) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var11 = var_node_balance < var5;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_ = var8;
if (var8){
var3 = var_;
} else {
var12 = 1;
{ /* Inline kernel#Int#> (var_node_balance,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var19 = var_node_balance > var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var3 = var13;
}
if (var3){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__balance_node]))(self, var_parent_node) /* balance_node on <self:BufferRope>*/;
} else {
}
var20 = ((val* (*)(val*))(var_parent_node->class->vft[COLOR_ropes__RopeNode__parent]))(var_parent_node) /* parent on <var_parent_node:nullable ConcatNode(ConcatNode)>*/;
var_parent_node = var20;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#BufferRope#balance_from_node for (self: Object, nullable ConcatNode) */
void VIRTUAL_ropes__BufferRope__balance_from_node(val* self, val* p0) {
ropes__BufferRope__balance_from_node(self, p0);
RET_LABEL:;
}
/* method ropes#BufferRope#balance_node for (self: BufferRope, ConcatNode) */
void ropes__BufferRope__balance_node(val* self, val* p0) {
val* var_node /* var node: ConcatNode */;
long var /* : Int */;
long var_balance_factor /* var balance_factor: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : nullable RopeNode */;
long var10 /* : Int */;
long var_right_balance /* var right_balance: Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : nullable RopeNode */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable RopeNode */;
long var25 /* : Int */;
long var_left_balance /* var left_balance: Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var34 /* : nullable RopeNode */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
var_node = p0;
var = ((long (*)(val*))(var_node->class->vft[COLOR_ropes__RopeNode__balance_factor]))(var_node) /* balance_factor on <var_node:ConcatNode>*/;
var_balance_factor = var;
var1 = 1;
{ /* Inline kernel#Int#unary - (var1) */
var4 = -var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
{ /* Inline kernel#Int#< (var_balance_factor,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var7 = 1; /* easy <var2:Int> isa OTHER*/
if (!var7) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var8 = var_balance_factor < var2;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = ((val* (*)(val*))(var_node->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_node) /* right_child on <var_node:ConcatNode>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 429);
show_backtrace(1);
} else {
var10 = ((long (*)(val*))(var9->class->vft[COLOR_ropes__RopeNode__balance_factor]))(var9) /* balance_factor on <var9:nullable RopeNode>*/;
}
var_right_balance = var10;
var11 = 0;
{ /* Inline kernel#Int#< (var_right_balance,var11) */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (!var14) {
var_class_name17 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var18 = var_right_balance < var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__rotate_left]))(self, var_node) /* rotate_left on <self:BufferRope>*/;
} else {
var19 = ((val* (*)(val*))(var_node->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_node) /* right_child on <var_node:ConcatNode>*/;
/* <var19:nullable RopeNode> isa ConcatNode */
cltype21 = type_ropes__ConcatNode.color;
idtype22 = type_ropes__ConcatNode.id;
if(var19 == NULL) {
var20 = 0;
} else {
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
var_class_name23 = var19 == NULL ? "null" : var19->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ConcatNode", var_class_name23);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 433);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__rotate_right]))(self, var19) /* rotate_right on <self:BufferRope>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__rotate_left]))(self, var_node) /* rotate_left on <self:BufferRope>*/;
}
} else {
var24 = ((val* (*)(val*))(var_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_node) /* left_child on <var_node:ConcatNode>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 437);
show_backtrace(1);
} else {
var25 = ((long (*)(val*))(var24->class->vft[COLOR_ropes__RopeNode__balance_factor]))(var24) /* balance_factor on <var24:nullable RopeNode>*/;
}
var_left_balance = var25;
var26 = 0;
{ /* Inline kernel#Int#> (var_left_balance,var26) */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (!var29) {
var_class_name32 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var33 = var_left_balance > var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (var27){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__rotate_right]))(self, var_node) /* rotate_right on <self:BufferRope>*/;
} else {
var34 = ((val* (*)(val*))(var_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_node) /* left_child on <var_node:ConcatNode>*/;
/* <var34:nullable RopeNode> isa ConcatNode */
cltype36 = type_ropes__ConcatNode.color;
idtype37 = type_ropes__ConcatNode.id;
if(var34 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var34->type->table_size) {
var35 = 0;
} else {
var35 = var34->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
var_class_name38 = var34 == NULL ? "null" : var34->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ConcatNode", var_class_name38);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 441);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__rotate_left]))(self, var34) /* rotate_left on <self:BufferRope>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__rotate_right]))(self, var_node) /* rotate_right on <self:BufferRope>*/;
}
}
RET_LABEL:;
}
/* method ropes#BufferRope#balance_node for (self: Object, ConcatNode) */
void VIRTUAL_ropes__BufferRope__balance_node(val* self, val* p0) {
ropes__BufferRope__balance_node(self, p0);
RET_LABEL:;
}
/* method ropes#BufferRope#append for (self: BufferRope, Collection[Char]): BufferRope */
val* ropes__BufferRope__append(val* self, val* p0) {
val* var /* : BufferRope */;
val* var_str /* var str: Collection[Char] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RopeNode */;
val* var_last_node /* var last_node: RopeNode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var_ /* var : Bool */;
val* var7 /* : nullable RopeNode */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable RopeNode */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : LeafNode */;
val* var15 /* : String */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable ConcatNode */;
val* var_last_node_parent /* var last_node_parent: nullable ConcatNode */;
val* var20 /* : ConcatNode */;
val* var_new_concat /* var new_concat: ConcatNode */;
val* var21 /* : LeafNode */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Buffer */;
long var28 /* : Int */;
val* var_buf /* var buf: Buffer */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
char var_i /* var i: Char */;
char var32 /* : Char */;
val* var33 /* : nullable Object */;
val* var35 /* : BufferRope */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
var_str = p0;
/* <var_str:Collection[Char]> isa AbstractString */
cltype = type_string__AbstractString.color;
idtype = type_string__AbstractString.id;
if(cltype >= var_str->type->table_size) {
var1 = 0;
} else {
var1 = var_str->type->type_table[cltype] == idtype;
}
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:BufferRope>*/;
var_last_node = var2;
for(;;) {
/* <var_last_node:RopeNode> isa ConcatNode */
cltype5 = type_ropes__ConcatNode.color;
idtype6 = type_ropes__ConcatNode.id;
if(cltype5 >= var_last_node->type->table_size) {
var4 = 0;
} else {
var4 = var_last_node->type->type_table[cltype5] == idtype6;
}
var_ = var4;
if (var4){
var7 = ((val* (*)(val*))(var_last_node->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_last_node) /* right_child on <var_last_node:RopeNode(ConcatNode)>*/;
var8 = NULL;
if (var7 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
var3 = var9;
} else {
var3 = var_;
}
if (!var3) break;
var10 = ((val* (*)(val*))(var_last_node->class->vft[COLOR_ropes__ConcatNode__right_child]))(var_last_node) /* right_child on <var_last_node:RopeNode(ConcatNode)>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 458);
show_backtrace(1);
}
var_last_node = var10;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
/* <var_last_node:RopeNode> isa ConcatNode */
cltype12 = type_ropes__ConcatNode.color;
idtype13 = type_ropes__ConcatNode.id;
if(cltype12 >= var_last_node->type->table_size) {
var11 = 0;
} else {
var11 = var_last_node->type->type_table[cltype12] == idtype13;
}
if (var11){
var14 = NEW_ropes__LeafNode(&type_ropes__LeafNode);
var15 = ((val* (*)(val*))(var_str->class->vft[COLOR_string__Object__to_s]))(var_str) /* to_s on <var_str:Collection[Char](AbstractString)>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_ropes__LeafNode__init]))(var14, var15) /* init on <var14:LeafNode>*/;
((void (*)(val*, val*))(var_last_node->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_last_node, var14) /* right_child= on <var_last_node:RopeNode(ConcatNode)>*/;
} else {
/* <var_last_node:RopeNode> isa LeafNode */
cltype17 = type_ropes__LeafNode.color;
idtype18 = type_ropes__LeafNode.id;
if(cltype17 >= var_last_node->type->table_size) {
var16 = 0;
} else {
var16 = var_last_node->type->type_table[cltype17] == idtype18;
}
if (var16){
var19 = ((val* (*)(val*))(var_last_node->class->vft[COLOR_ropes__RopeNode__parent]))(var_last_node) /* parent on <var_last_node:RopeNode(LeafNode)>*/;
var_last_node_parent = var19;
var20 = NEW_ropes__ConcatNode(&type_ropes__ConcatNode);
((void (*)(val*))(var20->class->vft[COLOR_ropes__ConcatNode__init]))(var20) /* init on <var20:ConcatNode>*/;
var_new_concat = var20;
if (var_last_node_parent == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 466);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_last_node_parent->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_last_node_parent, var_new_concat) /* right_child= on <var_last_node_parent:nullable ConcatNode>*/;
}
((void (*)(val*, val*))(var_new_concat->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_new_concat, var_last_node) /* left_child= on <var_new_concat:ConcatNode>*/;
var21 = NEW_ropes__LeafNode(&type_ropes__LeafNode);
var22 = ((val* (*)(val*))(var_str->class->vft[COLOR_string__Object__to_s]))(var_str) /* to_s on <var_str:Collection[Char](AbstractString)>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_ropes__LeafNode__init]))(var21, var22) /* init on <var21:LeafNode>*/;
((void (*)(val*, val*))(var_new_concat->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_new_concat, var21) /* right_child= on <var_new_concat:ConcatNode>*/;
var_last_node = var_new_concat;
} else {
if (varonce) {
var23 = varonce;
} else {
var24 = "Fatal Error, please report to the developers for more insight.";
var25 = 62;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var23) /* print on <self:BufferRope>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 472);
show_backtrace(1);
}
}
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__balance_from_node]))(self, var_last_node) /* balance_from_node on <self:BufferRope>*/;
} else {
var27 = NEW_string__Buffer(&type_string__Buffer);
var28 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:Collection[Char]>*/;
((void (*)(val*, long))(var27->class->vft[COLOR_string__Buffer__with_capacity]))(var27, var28) /* with_capacity on <var27:Buffer>*/;
var_buf = var27;
var29 = ((val* (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_str) /* iterator on <var_str:Collection[Char]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var32 = ((struct instance_kernel__Char*)var31)->value; /* autounbox from nullable Object to Char */;
var_i = var32;
var33 = BOX_kernel__Char(var_i); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_buf->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_buf, var33) /* add on <var_buf:Buffer>*/;
CONTINUE_label34: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label34: (void)0;
var35 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__append]))(self, var_buf) /* append on <self:BufferRope>*/;
var35;
}
var36 = ((short int (*)(val*))(self->class->vft[COLOR_ropes__BufferRope__is_dirty]))(self) /* is_dirty on <self:BufferRope>*/;
var37 = !var36;
if (var37){
var38 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_ropes__BufferRope__is_dirty_61d]))(self, var38) /* is_dirty= on <self:BufferRope>*/;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#append for (self: Object, Collection[Char]): BufferRope */
val* VIRTUAL_ropes__BufferRope__append(val* self, val* p0) {
val* var /* : BufferRope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope__append(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#append_multi for (self: BufferRope, Array[Collection[Char]]): BufferRope */
val* ropes__BufferRope__append_multi(val* self, val* p0) {
val* var /* : BufferRope */;
val* var_strs /* var strs: Array[Collection[Char]] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_i /* var i: Collection[Char] */;
val* var4 /* : BufferRope */;
var_strs = p0;
var1 = ((val* (*)(val*))(var_strs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_strs) /* iterator on <var_strs:Array[Collection[Char]]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_i = var3;
var4 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__append]))(self, var_i) /* append on <self:BufferRope>*/;
var4;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#append_multi for (self: Object, Array[Collection[Char]]): BufferRope */
val* VIRTUAL_ropes__BufferRope__append_multi(val* self, val* p0) {
val* var /* : BufferRope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope__append_multi(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#prepend for (self: BufferRope, Collection[Char]): BufferRope */
val* ropes__BufferRope__prepend(val* self, val* p0) {
val* var /* : BufferRope */;
val* var_str /* var str: Collection[Char] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RopeNode */;
val* var_curr_node /* var curr_node: RopeNode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var_ /* var : Bool */;
val* var7 /* : nullable RopeNode */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable RopeNode */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : LeafNode */;
val* var15 /* : String */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable ConcatNode */;
val* var_parent /* var parent: nullable ConcatNode */;
val* var20 /* : ConcatNode */;
val* var_new_concat /* var new_concat: ConcatNode */;
val* var21 /* : LeafNode */;
val* var22 /* : String */;
val* var_new_leaf /* var new_leaf: LeafNode */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Buffer */;
long var28 /* : Int */;
val* var_buf /* var buf: Buffer */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
char var_i /* var i: Char */;
char var32 /* : Char */;
val* var33 /* : nullable Object */;
val* var35 /* : String */;
val* var36 /* : BufferRope */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
var_str = p0;
/* <var_str:Collection[Char]> isa AbstractString */
cltype = type_string__AbstractString.color;
idtype = type_string__AbstractString.id;
if(cltype >= var_str->type->table_size) {
var1 = 0;
} else {
var1 = var_str->type->type_table[cltype] == idtype;
}
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:BufferRope>*/;
var_curr_node = var2;
for(;;) {
/* <var_curr_node:RopeNode> isa ConcatNode */
cltype5 = type_ropes__ConcatNode.color;
idtype6 = type_ropes__ConcatNode.id;
if(cltype5 >= var_curr_node->type->table_size) {
var4 = 0;
} else {
var4 = var_curr_node->type->type_table[cltype5] == idtype6;
}
var_ = var4;
if (var4){
var7 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:RopeNode(ConcatNode)>*/;
var8 = NULL;
if (var7 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
var3 = var9;
} else {
var3 = var_;
}
if (!var3) break;
var10 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child]))(var_curr_node) /* left_child on <var_curr_node:RopeNode(ConcatNode)>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 505);
show_backtrace(1);
}
var_curr_node = var10;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
/* <var_curr_node:RopeNode> isa ConcatNode */
cltype12 = type_ropes__ConcatNode.color;
idtype13 = type_ropes__ConcatNode.id;
if(cltype12 >= var_curr_node->type->table_size) {
var11 = 0;
} else {
var11 = var_curr_node->type->type_table[cltype12] == idtype13;
}
if (var11){
var14 = NEW_ropes__LeafNode(&type_ropes__LeafNode);
var15 = ((val* (*)(val*))(var_str->class->vft[COLOR_string__Object__to_s]))(var_str) /* to_s on <var_str:Collection[Char](AbstractString)>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_ropes__LeafNode__init]))(var14, var15) /* init on <var14:LeafNode>*/;
((void (*)(val*, val*))(var_curr_node->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_curr_node, var14) /* left_child= on <var_curr_node:RopeNode(ConcatNode)>*/;
} else {
/* <var_curr_node:RopeNode> isa LeafNode */
cltype17 = type_ropes__LeafNode.color;
idtype18 = type_ropes__LeafNode.id;
if(cltype17 >= var_curr_node->type->table_size) {
var16 = 0;
} else {
var16 = var_curr_node->type->type_table[cltype17] == idtype18;
}
if (var16){
var19 = ((val* (*)(val*))(var_curr_node->class->vft[COLOR_ropes__RopeNode__parent]))(var_curr_node) /* parent on <var_curr_node:RopeNode(LeafNode)>*/;
var_parent = var19;
var20 = NEW_ropes__ConcatNode(&type_ropes__ConcatNode);
((void (*)(val*))(var20->class->vft[COLOR_ropes__ConcatNode__init]))(var20) /* init on <var20:ConcatNode>*/;
var_new_concat = var20;
var21 = NEW_ropes__LeafNode(&type_ropes__LeafNode);
var22 = ((val* (*)(val*))(var_str->class->vft[COLOR_string__Object__to_s]))(var_str) /* to_s on <var_str:Collection[Char](AbstractString)>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_ropes__LeafNode__init]))(var21, var22) /* init on <var21:LeafNode>*/;
var_new_leaf = var21;
((void (*)(val*, val*))(var_new_concat->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_new_concat, var_new_leaf) /* left_child= on <var_new_concat:ConcatNode>*/;
((void (*)(val*, val*))(var_new_concat->class->vft[COLOR_ropes__ConcatNode__right_child_61d]))(var_new_concat, var_curr_node) /* right_child= on <var_new_concat:ConcatNode>*/;
if (var_parent == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 516);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_parent->class->vft[COLOR_ropes__ConcatNode__left_child_61d]))(var_parent, var_new_concat) /* left_child= on <var_parent:nullable ConcatNode>*/;
}
var_curr_node = var_new_concat;
} else {
if (varonce) {
var23 = varonce;
} else {
var24 = "Fatal Error";
var25 = 11;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var23) /* print on <self:BufferRope>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 520);
show_backtrace(1);
}
}
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__balance_from_node]))(self, var_curr_node) /* balance_from_node on <self:BufferRope>*/;
} else {
var27 = NEW_string__Buffer(&type_string__Buffer);
var28 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:Collection[Char]>*/;
((void (*)(val*, long))(var27->class->vft[COLOR_string__Buffer__with_capacity]))(var27, var28) /* with_capacity on <var27:Buffer>*/;
var_buf = var27;
var29 = ((val* (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_str) /* iterator on <var_str:Collection[Char]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var32 = ((struct instance_kernel__Char*)var31)->value; /* autounbox from nullable Object to Char */;
var_i = var32;
var33 = BOX_kernel__Char(var_i); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_buf->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_buf, var33) /* add on <var_buf:Buffer>*/;
CONTINUE_label34: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label34: (void)0;
var35 = ((val* (*)(val*))(var_buf->class->vft[COLOR_string__Object__to_s]))(var_buf) /* to_s on <var_buf:Buffer>*/;
var36 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__prepend]))(self, var35) /* prepend on <self:BufferRope>*/;
var36;
}
var37 = ((short int (*)(val*))(self->class->vft[COLOR_ropes__BufferRope__is_dirty]))(self) /* is_dirty on <self:BufferRope>*/;
var38 = !var37;
if (var38){
var39 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_ropes__BufferRope__is_dirty_61d]))(self, var39) /* is_dirty= on <self:BufferRope>*/;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#prepend for (self: Object, Collection[Char]): BufferRope */
val* VIRTUAL_ropes__BufferRope__prepend(val* self, val* p0) {
val* var /* : BufferRope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope__prepend(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#prepend_multi for (self: BufferRope, Array[Collection[Char]]): BufferRope */
val* ropes__BufferRope__prepend_multi(val* self, val* p0) {
val* var /* : BufferRope */;
val* var_strs /* var strs: Array[Collection[Char]] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_i /* var i: Collection[Char] */;
val* var4 /* : BufferRope */;
var_strs = p0;
var1 = ((val* (*)(val*))(var_strs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_strs) /* iterator on <var_strs:Array[Collection[Char]]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_i = var3;
var4 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__prepend]))(self, var_i) /* prepend on <self:BufferRope>*/;
var4;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#prepend_multi for (self: Object, Array[Collection[Char]]): BufferRope */
val* VIRTUAL_ropes__BufferRope__prepend_multi(val* self, val* p0) {
val* var /* : BufferRope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope__prepend_multi(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#concat for (self: BufferRope, Rope): Rope */
val* ropes__BufferRope__concat(val* self, val* p0) {
val* var /* : Rope */;
val* var_str /* var str: Rope */;
val* var1 /* : DFSRopeLeafIterator */;
val* var_other_iter /* var other_iter: DFSRopeLeafIterator */;
val* var2 /* : List[String] */;
val* var_modif_list /* var modif_list: List[String] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var13 /* : BufferRope */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_str = p0;
var1 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var1->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var1, var_str) /* init on <var1:DFSRopeLeafIterator>*/;
var_other_iter = var1;
var2 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var2->class->vft[COLOR_list__List__init]))(var2) /* init on <var2:List[String]>*/;
var_modif_list = var2;
for(;;) {
var3 = ((short int (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_other_iter) /* is_ok on <var_other_iter:DFSRopeLeafIterator>*/;
if (!var3) break;
var4 = ((val* (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_other_iter) /* item on <var_other_iter:DFSRopeLeafIterator>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_ropes__LeafNode__value]))(var4) /* value on <var4:nullable Object(LeafNode)>*/;
((void (*)(val*, val*))(var_modif_list->class->vft[COLOR_abstract_collection__Sequence__push]))(var_modif_list, var5) /* push on <var_modif_list:List[String]>*/;
((void (*)(val*))(var_other_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_other_iter) /* next on <var_other_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
for(;;) {
var6 = ((long (*)(val*))(var_modif_list->class->vft[COLOR_abstract_collection__Collection__length]))(var_modif_list) /* length on <var_modif_list:List[String]>*/;
var7 = 0;
{ /* Inline kernel#Int#> (var6,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var11 = var6 > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (!var8) break;
var12 = ((val* (*)(val*))(var_modif_list->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_modif_list) /* shift on <var_modif_list:List[String]>*/;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__append]))(self, var12) /* append on <self:BufferRope>*/;
var13;
CONTINUE_label14: (void)0;
}
BREAK_label14: (void)0;
var15 = ((short int (*)(val*))(self->class->vft[COLOR_ropes__BufferRope__is_dirty]))(self) /* is_dirty on <self:BufferRope>*/;
var16 = !var15;
if (var16){
var17 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_ropes__BufferRope__is_dirty_61d]))(self, var17) /* is_dirty= on <self:BufferRope>*/;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#concat for (self: Object, Rope): Rope */
val* VIRTUAL_ropes__BufferRope__concat(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__BufferRope__concat(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#freeze for (self: BufferRope): ImmutableRope */
val* ropes__BufferRope__freeze(val* self) {
val* var /* : ImmutableRope */;
val* var1 /* : BufferRope */;
val* var_buffer_rope /* var buffer_rope: BufferRope */;
val* var2 /* : ImmutableRope */;
val* var_new_rope /* var new_rope: ImmutableRope */;
val* var3 /* : DFSRopeLeafIterator */;
val* var_iter /* var iter: DFSRopeLeafIterator */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var6 /* : String */;
val* var7 /* : BufferRope */;
val* var8 /* : RopeNode */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable String */;
var1 = NEW_ropes__BufferRope(&type_ropes__BufferRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__init]))(var1) /* init on <var1:BufferRope>*/;
var_buffer_rope = var1;
var2 = NEW_ropes__ImmutableRope(&type_ropes__ImmutableRope);
((void (*)(val*))(var2->class->vft[COLOR_ropes__ImmutableRope__init]))(var2) /* init on <var2:ImmutableRope>*/;
var_new_rope = var2;
var3 = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var3->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var3, self) /* init on <var3:DFSRopeLeafIterator>*/;
var_iter = var3;
for(;;) {
var4 = ((short int (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_iter) /* is_ok on <var_iter:DFSRopeLeafIterator>*/;
if (!var4) break;
var5 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:DFSRopeLeafIterator>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_ropes__LeafNode__value]))(var5) /* value on <var5:nullable Object(LeafNode)>*/;
var7 = ((val* (*)(val*, val*))(var_buffer_rope->class->vft[COLOR_ropes__BufferRope__append]))(var_buffer_rope, var6) /* append on <var_buffer_rope:BufferRope>*/;
var7;
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:DFSRopeLeafIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var8 = ((val* (*)(val*))(var_buffer_rope->class->vft[COLOR_ropes__Rope__parent_node]))(var_buffer_rope) /* parent_node on <var_buffer_rope:BufferRope>*/;
((void (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__Rope__parent_node_61d]))(var_new_rope, var8) /* parent_node= on <var_new_rope:ImmutableRope>*/;
var9 = ((short int (*)(val*))(self->class->vft[COLOR_ropes__BufferRope__is_dirty]))(self) /* is_dirty on <self:BufferRope>*/;
var10 = !var9;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__str_representation]))(self) /* str_representation on <self:BufferRope>*/;
((void (*)(val*, val*))(var_new_rope->class->vft[COLOR_ropes__Rope__str_representation_61d]))(var_new_rope, var11) /* str_representation= on <var_new_rope:ImmutableRope>*/;
} else {
}
var = var_new_rope;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#freeze for (self: Object): ImmutableRope */
val* VIRTUAL_ropes__BufferRope__freeze(val* self) {
val* var /* : ImmutableRope */;
val* var1 /* : ImmutableRope */;
var1 = ropes__BufferRope__freeze(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#to_immutable for (self: BufferRope): ImmutableRope */
val* ropes__BufferRope__to_immutable(val* self) {
val* var /* : ImmutableRope */;
val* var1 /* : ImmutableRope */;
val* var_immutable_self /* var immutable_self: ImmutableRope */;
val* var2 /* : RopeNode */;
var1 = NEW_ropes__ImmutableRope(&type_ropes__ImmutableRope);
((void (*)(val*))(var1->class->vft[COLOR_ropes__ImmutableRope__init]))(var1) /* init on <var1:ImmutableRope>*/;
var_immutable_self = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__parent_node]))(self) /* parent_node on <self:BufferRope>*/;
((void (*)(val*, val*))(var_immutable_self->class->vft[COLOR_ropes__Rope__parent_node_61d]))(var_immutable_self, var2) /* parent_node= on <var_immutable_self:ImmutableRope>*/;
var = var_immutable_self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#to_immutable for (self: Object): ImmutableRope */
val* VIRTUAL_ropes__BufferRope__to_immutable(val* self) {
val* var /* : ImmutableRope */;
val* var1 /* : ImmutableRope */;
var1 = ropes__BufferRope__to_immutable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#subrope for (self: BufferRope, Int, Int): BufferRope */
val* ropes__BufferRope__subrope(val* self, long p0, long p1) {
val* var /* : BufferRope */;
long var_index_from /* var index_from: Int */;
long var_count /* var count: Int */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_index_from = p0;
var_count = p1;
var1 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_ropes__BufferRope__subrope]))(self, p0, p1) /* subrope on <self:BufferRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 603);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#subrope for (self: Object, Int, Int): Rope */
val* VIRTUAL_ropes__BufferRope__subrope(val* self, long p0, long p1) {
val* var /* : Rope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope__subrope(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#* for (self: BufferRope, Int): BufferRope */
val* ropes__BufferRope___42d(val* self, long p0) {
val* var /* : BufferRope */;
long var_repeats /* var repeats: Int */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_repeats = p0;
var1 = ((val* (*)(val*, long))(self->class->vft[COLOR_ropes__BufferRope___42d]))(self, p0) /* * on <self:BufferRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 608);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#* for (self: Object, Int): Rope */
val* VIRTUAL_ropes__BufferRope___42d(val* self, long p0) {
val* var /* : Rope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope___42d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#+ for (self: BufferRope, Rope): BufferRope */
val* ropes__BufferRope___43d(val* self, val* p0) {
val* var /* : BufferRope */;
val* var_other /* var other: Rope */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_other = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope___43d]))(self, p0) /* + on <self:BufferRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 613);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#+ for (self: Object, Rope): Rope */
val* VIRTUAL_ropes__BufferRope___43d(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope___43d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#multi_concat for (self: BufferRope, Array[Rope]): BufferRope */
val* ropes__BufferRope__multi_concat(val* self, val* p0) {
val* var /* : BufferRope */;
val* var_ropes /* var ropes: Array[Rope] */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_ropes = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__BufferRope__multi_concat]))(self, p0) /* multi_concat on <self:BufferRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 618);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#multi_concat for (self: Object, Array[Rope]): Rope */
val* VIRTUAL_ropes__BufferRope__multi_concat(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : BufferRope */;
var1 = ropes__BufferRope__multi_concat(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#to_s for (self: BufferRope): String */
val* ropes__BufferRope__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : nullable String */;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__str_representation]))(self) /* str_representation on <self:BufferRope>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
var_ = var4;
if (var4){
var1 = var_;
} else {
var5 = ((short int (*)(val*))(self->class->vft[COLOR_ropes__BufferRope__is_dirty]))(self) /* is_dirty on <self:BufferRope>*/;
var1 = var5;
}
if (var1){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__flatten]))(self) /* flatten on <self:BufferRope>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__str_representation_61d]))(self, var6) /* str_representation= on <self:BufferRope>*/;
var7 = 0;
((void (*)(val*, short int))(self->class->vft[COLOR_ropes__BufferRope__is_dirty_61d]))(self, var7) /* is_dirty= on <self:BufferRope>*/;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__Rope__str_representation]))(self) /* str_representation on <self:BufferRope>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 629);
show_backtrace(1);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#BufferRope#to_s for (self: Object): String */
val* VIRTUAL_ropes__BufferRope__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ropes__BufferRope__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#init for (self: ImmutableRope) */
void ropes__ImmutableRope__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_ropes__Rope__init]))(self) /* init on <self:ImmutableRope>*/;
RET_LABEL:;
}
/* method ropes#ImmutableRope#init for (self: Object) */
void VIRTUAL_ropes__ImmutableRope__init(val* self) {
ropes__ImmutableRope__init(self);
RET_LABEL:;
}
/* method ropes#ImmutableRope#with_string for (self: ImmutableRope, AbstractString) */
void ropes__ImmutableRope__with_string(val* self, val* p0) {
val* var_str /* var str: AbstractString */;
var_str = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__Rope__with_string]))(self, p0) /* with_string on <self:ImmutableRope>*/;
RET_LABEL:;
}
/* method ropes#ImmutableRope#with_string for (self: Object, AbstractString) */
void VIRTUAL_ropes__ImmutableRope__with_string(val* self, val* p0) {
ropes__ImmutableRope__with_string(self, p0);
RET_LABEL:;
}
/* method ropes#ImmutableRope#subrope for (self: ImmutableRope, Int, Int): ImmutableRope */
val* ropes__ImmutableRope__subrope(val* self, long p0, long p1) {
val* var /* : ImmutableRope */;
long var_index_from /* var index_from: Int */;
long var_count /* var count: Int */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ImmutableRope */;
var_index_from = p0;
var_count = p1;
var1 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_ropes__ImmutableRope__subrope]))(self, p0, p1) /* subrope on <self:ImmutableRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 654);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__to_immutable]))(var1) /* to_immutable on <var1:Rope(BufferRope)>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#subrope for (self: Object, Int, Int): Rope */
val* VIRTUAL_ropes__ImmutableRope__subrope(val* self, long p0, long p1) {
val* var /* : Rope */;
val* var1 /* : ImmutableRope */;
var1 = ropes__ImmutableRope__subrope(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#* for (self: ImmutableRope, Int): ImmutableRope */
val* ropes__ImmutableRope___42d(val* self, long p0) {
val* var /* : ImmutableRope */;
long var_repeats /* var repeats: Int */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ImmutableRope */;
var_repeats = p0;
var1 = ((val* (*)(val*, long))(self->class->vft[COLOR_ropes__ImmutableRope___42d]))(self, p0) /* * on <self:ImmutableRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 659);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__to_immutable]))(var1) /* to_immutable on <var1:Rope(BufferRope)>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#* for (self: Object, Int): Rope */
val* VIRTUAL_ropes__ImmutableRope___42d(val* self, long p0) {
val* var /* : Rope */;
val* var1 /* : ImmutableRope */;
var1 = ropes__ImmutableRope___42d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#+ for (self: ImmutableRope, Rope): ImmutableRope */
val* ropes__ImmutableRope___43d(val* self, val* p0) {
val* var /* : ImmutableRope */;
val* var_other /* var other: Rope */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ImmutableRope */;
var_other = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__ImmutableRope___43d]))(self, p0) /* + on <self:ImmutableRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 664);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__to_immutable]))(var1) /* to_immutable on <var1:Rope(BufferRope)>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#+ for (self: Object, Rope): Rope */
val* VIRTUAL_ropes__ImmutableRope___43d(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : ImmutableRope */;
var1 = ropes__ImmutableRope___43d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#multi_concat for (self: ImmutableRope, Array[Rope]): ImmutableRope */
val* ropes__ImmutableRope__multi_concat(val* self, val* p0) {
val* var /* : ImmutableRope */;
val* var_ropes /* var ropes: Array[Rope] */;
val* var1 /* : Rope */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : ImmutableRope */;
var_ropes = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_ropes__ImmutableRope__multi_concat]))(self, p0) /* multi_concat on <self:ImmutableRope>*/;
/* <var1:Rope> isa BufferRope */
cltype = type_ropes__BufferRope.color;
idtype = type_ropes__BufferRope.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "BufferRope", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 669);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_ropes__BufferRope__to_immutable]))(var1) /* to_immutable on <var1:Rope(BufferRope)>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ImmutableRope#multi_concat for (self: Object, Array[Rope]): Rope */
val* VIRTUAL_ropes__ImmutableRope__multi_concat(val* self, val* p0) {
val* var /* : Rope */;
val* var1 /* : ImmutableRope */;
var1 = ropes__ImmutableRope__multi_concat(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#target for (self: CharRopeView): Rope */
val* ropes__CharRopeView__target(val* self) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = self->attrs[COLOR_ropes__CharRopeView___64dtarget].val; /* @target on <self:CharRopeView> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @target");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 681);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#target for (self: Object): Rope */
val* VIRTUAL_ropes__CharRopeView__target(val* self) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__CharRopeView__target(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#target= for (self: CharRopeView, Rope) */
void ropes__CharRopeView__target_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__CharRopeView___64dtarget].val = p0; /* @target on <self:CharRopeView> */
RET_LABEL:;
}
/* method ropes#CharRopeView#target= for (self: Object, Rope) */
void VIRTUAL_ropes__CharRopeView__target_61d(val* self, val* p0) {
ropes__CharRopeView__target_61d(self, p0);
RET_LABEL:;
}
/* method ropes#CharRopeView#init for (self: CharRopeView, Rope) */
void ropes__CharRopeView__init(val* self, val* p0) {
val* var_tgt /* var tgt: Rope */;
var_tgt = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__CharRopeView__target_61d]))(self, var_tgt) /* target= on <self:CharRopeView>*/;
RET_LABEL:;
}
/* method ropes#CharRopeView#init for (self: Object, Rope) */
void VIRTUAL_ropes__CharRopeView__init(val* self, val* p0) {
ropes__CharRopeView__init(self, p0);
RET_LABEL:;
}
/* method ropes#CharRopeView#[] for (self: CharRopeView, Int): Char */
char ropes__CharRopeView___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_position /* var position: Int */;
val* var1 /* : Rope */;
val* var2 /* : TupleLeafNodePos */;
val* var_tuple /* var tuple: TupleLeafNodePos */;
val* var3 /* : LeafNode */;
val* var4 /* : String */;
long var5 /* : Int */;
val* var6 /* : nullable Object */;
char var7 /* : Char */;
var_position = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__CharRopeView__target]))(self) /* target on <self:CharRopeView>*/;
var2 = ((val* (*)(val*, long))(var1->class->vft[COLOR_ropes__Rope__get_node_for_pos]))(var1, var_position) /* get_node_for_pos on <var1:Rope>*/;
var_tuple = var2;
var3 = ((val* (*)(val*))(var_tuple->class->vft[COLOR_ropes__TupleLeafNodePos__curr_node]))(var_tuple) /* curr_node on <var_tuple:TupleLeafNodePos>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_ropes__LeafNode__value]))(var3) /* value on <var3:LeafNode>*/;
var5 = ((long (*)(val*))(var_tuple->class->vft[COLOR_ropes__TupleLeafNodePos__corrected_pos]))(var_tuple) /* corrected_pos on <var_tuple:TupleLeafNodePos>*/;
var6 = ((val* (*)(val*, long))(var4->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var4, var5) /* [] on <var4:String>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_ropes__CharRopeView___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = ropes__CharRopeView___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#first for (self: CharRopeView): Char */
char ropes__CharRopeView__first(val* self) {
char var /* : Char */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
char var3 /* : Char */;
var1 = 0;
var2 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var1) /* [] on <self:CharRopeView>*/;
var3 = ((struct instance_kernel__Char*)var2)->value; /* autounbox from nullable Object to Char */;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#first for (self: Object): nullable Object */
val* VIRTUAL_ropes__CharRopeView__first(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = ropes__CharRopeView__first(self);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#index_of for (self: CharRopeView, Char): Int */
long ropes__CharRopeView__index_of(val* self, char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_char /* var char: Char */;
val* var2 /* : RopeCharIterator */;
val* var3 /* : Rope */;
val* var_intern_iter /* var intern_iter: RopeCharIterator */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
char var9 /* : Char */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
/* Covariant cast for argument 0 (char) <p0:Char> isa SequenceRead#0 */
/* <p0:Char> isa SequenceRead#0 */
var1 = 1; /* easy <p0:Char> isa SequenceRead#0*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SequenceRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 697);
show_backtrace(1);
}
var_char = p0;
var2 = NEW_ropes__RopeCharIterator(&type_ropes__RopeCharIterator);
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__CharRopeView__target]))(self) /* target on <self:CharRopeView>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_ropes__RopeCharIterator__init]))(var2, var3) /* init on <var2:RopeCharIterator>*/;
var_intern_iter = var2;
for(;;) {
var4 = ((short int (*)(val*))(var_intern_iter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_intern_iter) /* is_ok on <var_intern_iter:RopeCharIterator>*/;
if (!var4) break;
var5 = ((val* (*)(val*))(var_intern_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_intern_iter) /* item on <var_intern_iter:RopeCharIterator>*/;
{ /* Inline kernel#Char#== (var5,var_char) */
var8 = (var5 != NULL) && (var5->class == &class_kernel__Char);
if (var8) {
var9 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var8 = (var9 == var_char);
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var10 = ((long (*)(val*))(var_intern_iter->class->vft[COLOR_abstract_collection__IndexedIterator__index]))(var_intern_iter) /* index on <var_intern_iter:RopeCharIterator>*/;
var = var10;
goto RET_LABEL;
} else {
}
((void (*)(val*))(var_intern_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_intern_iter) /* next on <var_intern_iter:RopeCharIterator>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var11 = 1;
{ /* Inline kernel#Int#unary - (var11) */
var14 = -var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#index_of for (self: Object, nullable Object): Int */
long VIRTUAL_ropes__CharRopeView__index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = ropes__CharRopeView__index_of(self, var2);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#iterator for (self: CharRopeView): Iterator[Char] */
val* ropes__CharRopeView__iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : RopeCharIterator */;
val* var2 /* : Rope */;
var1 = NEW_ropes__RopeCharIterator(&type_ropes__RopeCharIterator);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__CharRopeView__target]))(self) /* target on <self:CharRopeView>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_ropes__RopeCharIterator__init]))(var1, var2) /* init on <var1:RopeCharIterator>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_ropes__CharRopeView__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Char] */;
var1 = ropes__CharRopeView__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#last for (self: CharRopeView): Char */
char ropes__CharRopeView__last(val* self) {
char var /* : Char */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var6 /* : nullable Object */;
char var7 /* : Char */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:CharRopeView>*/;
var2 = 1;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var3) /* [] on <self:CharRopeView>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#last for (self: Object): nullable Object */
val* VIRTUAL_ropes__CharRopeView__last(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = ropes__CharRopeView__last(self);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#length for (self: CharRopeView): Int */
long ropes__CharRopeView__length(val* self) {
long var /* : Int */;
val* var1 /* : Rope */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__CharRopeView__target]))(self) /* target on <self:CharRopeView>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_ropes__Rope__length]))(var1) /* length on <var1:Rope>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#length for (self: Object): Int */
long VIRTUAL_ropes__CharRopeView__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__CharRopeView__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#count for (self: CharRopeView, Char): Int */
long ropes__CharRopeView__count(val* self, char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_item /* var item: Char */;
long var2 /* : Int */;
long var_count /* var count: Int */;
val* var3 /* : Iterator[nullable Object] */;
val* var_iter /* var iter: Iterator[Char] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var_i /* var i: Char */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:Char> isa Collection#0 */
/* <p0:Char> isa Collection#0 */
var1 = 1; /* easy <p0:Char> isa Collection#0*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 715);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
var_count = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:CharRopeView>*/;
var_iter = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:CharRopeView>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var_i = var7;
{ /* Inline kernel#Char#== (var_i,var_item) */
var10 = var_i == var_item;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var11 = 1;
{ /* Inline kernel#Int#+ (var_count,var11) */
var14 = var_count + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_count = var12;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_count;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#count for (self: Object, nullable Object): Int */
long VIRTUAL_ropes__CharRopeView__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = ropes__CharRopeView__count(self, var2);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#has_only for (self: CharRopeView, Char): Bool */
short int ropes__CharRopeView__has_only(val* self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_item /* var item: Char */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
char var_i /* var i: Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:Char> isa Collection#0 */
/* <p0:Char> isa Collection#0 */
var1 = 1; /* easy <p0:Char> isa Collection#0*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 727);
show_backtrace(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:CharRopeView>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var5 = ((struct instance_kernel__Char*)var4)->value; /* autounbox from nullable Object to Char */;
var_i = var5;
{ /* Inline kernel#Char#!= (var_i,var_item) */
var8 = var_i == var_item;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = 1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_ropes__CharRopeView__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = ropes__CharRopeView__has_only(self, var2);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#is_empty for (self: CharRopeView): Bool */
short int ropes__CharRopeView__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:CharRopeView>*/;
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#is_empty for (self: Object): Bool */
short int VIRTUAL_ropes__CharRopeView__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__CharRopeView__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#to_a for (self: CharRopeView): Array[Char] */
val* ropes__CharRopeView__to_a(val* self) {
val* var /* : Array[Char] */;
val* var1 /* : String */;
val* var2 /* : Array[nullable Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:CharRopeView>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_array__Collection__to_a]))(var1) /* to_a on <var1:String>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#to_a for (self: Object): Array[nullable Object] */
val* VIRTUAL_ropes__CharRopeView__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[Char] */;
var1 = ropes__CharRopeView__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#to_s for (self: CharRopeView): String */
val* ropes__CharRopeView__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Rope */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__CharRopeView__target]))(self) /* target on <self:CharRopeView>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:Rope>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#to_s for (self: Object): String */
val* VIRTUAL_ropes__CharRopeView__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ropes__CharRopeView__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#== for (self: CharRopeView, nullable Object): Bool */
short int ropes__CharRopeView___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Iterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
char var_i /* var i: Char */;
char var15 /* : Char */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
char var20 /* : Char */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa SequenceRead[Char] */
cltype = type_abstract_collection__SequenceReadkernel__Char.color;
idtype = type_abstract_collection__SequenceReadkernel__Char.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var1 = 0;
} else {
var1 = var_other->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:CharRopeView>*/;
{ /* Inline kernel#Int#!= (var4,var_other) */
var7 = (var_other != NULL) && (var_other->class == &class_kernel__Int);
if (var7) {
var8 = ((struct instance_kernel__Int*)var_other)->value; /* autounbox from nullable Object to Int */;
var7 = (var8 == var4);
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(var_other->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_other) /* iterator on <var_other:nullable Object(SequenceRead[Char])>*/;
var_iter = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:CharRopeView>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var15 = ((struct instance_kernel__Char*)var14)->value; /* autounbox from nullable Object to Char */;
var_i = var15;
var16 = ((val* (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_iter) /* item on <var_iter:IndexedIterator[Char]>*/;
{ /* Inline kernel#Char#!= (var_i,var16) */
var19 = (var16 != NULL) && (var16->class == &class_kernel__Char);
if (var19) {
var20 = ((struct instance_kernel__Char*)var16)->value; /* autounbox from nullable Object to Char */;
var19 = (var20 == var_i);
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var22 = 0;
var = var22;
goto RET_LABEL;
} else {
}
((void (*)(val*))(var_iter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_iter) /* next on <var_iter:IndexedIterator[Char]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var23 = 1;
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#CharRopeView#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_ropes__CharRopeView___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__CharRopeView___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#init for (self: TupleVisitNode, ConcatNode) */
void ropes__TupleVisitNode__init(val* self, val* p0) {
val* var_tgt /* var tgt: ConcatNode */;
var_tgt = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__TupleVisitNode__node_61d]))(self, var_tgt) /* node= on <self:TupleVisitNode>*/;
RET_LABEL:;
}
/* method ropes#TupleVisitNode#init for (self: Object, ConcatNode) */
void VIRTUAL_ropes__TupleVisitNode__init(val* self, val* p0) {
ropes__TupleVisitNode__init(self, p0);
RET_LABEL:;
}
/* method ropes#TupleVisitNode#node for (self: TupleVisitNode): ConcatNode */
val* ropes__TupleVisitNode__node(val* self) {
val* var /* : ConcatNode */;
val* var1 /* : ConcatNode */;
var1 = self->attrs[COLOR_ropes__TupleVisitNode___64dnode].val; /* @node on <self:TupleVisitNode> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @node");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 775);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#node for (self: Object): ConcatNode */
val* VIRTUAL_ropes__TupleVisitNode__node(val* self) {
val* var /* : ConcatNode */;
val* var1 /* : ConcatNode */;
var1 = ropes__TupleVisitNode__node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#node= for (self: TupleVisitNode, ConcatNode) */
void ropes__TupleVisitNode__node_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__TupleVisitNode___64dnode].val = p0; /* @node on <self:TupleVisitNode> */
RET_LABEL:;
}
/* method ropes#TupleVisitNode#node= for (self: Object, ConcatNode) */
void VIRTUAL_ropes__TupleVisitNode__node_61d(val* self, val* p0) {
ropes__TupleVisitNode__node_61d(self, p0);
RET_LABEL:;
}
/* method ropes#TupleVisitNode#left_visited for (self: TupleVisitNode): Bool */
short int ropes__TupleVisitNode__left_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_ropes__TupleVisitNode___64dleft_visited].s; /* @left_visited on <self:TupleVisitNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#left_visited for (self: Object): Bool */
short int VIRTUAL_ropes__TupleVisitNode__left_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__TupleVisitNode__left_visited(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#left_visited= for (self: TupleVisitNode, Bool) */
void ropes__TupleVisitNode__left_visited_61d(val* self, short int p0) {
self->attrs[COLOR_ropes__TupleVisitNode___64dleft_visited].s = p0; /* @left_visited on <self:TupleVisitNode> */
RET_LABEL:;
}
/* method ropes#TupleVisitNode#left_visited= for (self: Object, Bool) */
void VIRTUAL_ropes__TupleVisitNode__left_visited_61d(val* self, short int p0) {
ropes__TupleVisitNode__left_visited_61d(self, p0);
RET_LABEL:;
}
/* method ropes#TupleVisitNode#right_visited for (self: TupleVisitNode): Bool */
short int ropes__TupleVisitNode__right_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_ropes__TupleVisitNode___64dright_visited].s; /* @right_visited on <self:TupleVisitNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#right_visited for (self: Object): Bool */
short int VIRTUAL_ropes__TupleVisitNode__right_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__TupleVisitNode__right_visited(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#TupleVisitNode#right_visited= for (self: TupleVisitNode, Bool) */
void ropes__TupleVisitNode__right_visited_61d(val* self, short int p0) {
self->attrs[COLOR_ropes__TupleVisitNode___64dright_visited].s = p0; /* @right_visited on <self:TupleVisitNode> */
RET_LABEL:;
}
/* method ropes#TupleVisitNode#right_visited= for (self: Object, Bool) */
void VIRTUAL_ropes__TupleVisitNode__right_visited_61d(val* self, short int p0) {
ropes__TupleVisitNode__right_visited_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeIterator#target for (self: RopeIterator): Rope */
val* ropes__RopeIterator__target(val* self) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = self->attrs[COLOR_ropes__RopeIterator___target].val; /* _target on <self:RopeIterator> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _target");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 789);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterator#target for (self: Object): Rope */
val* VIRTUAL_ropes__RopeIterator__target(val* self) {
val* var /* : Rope */;
val* var1 /* : Rope */;
var1 = ropes__RopeIterator__target(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterator#pos for (self: RopeIterator): Int */
long ropes__RopeIterator__pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_ropes__RopeIterator___64dpos].l; /* @pos on <self:RopeIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterator#pos for (self: Object): Int */
long VIRTUAL_ropes__RopeIterator__pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeIterator__pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterator#pos= for (self: RopeIterator, Int) */
void ropes__RopeIterator__pos_61d(val* self, long p0) {
self->attrs[COLOR_ropes__RopeIterator___64dpos].l = p0; /* @pos on <self:RopeIterator> */
RET_LABEL:;
}
/* method ropes#RopeIterator#pos= for (self: Object, Int) */
void VIRTUAL_ropes__RopeIterator__pos_61d(val* self, long p0) {
ropes__RopeIterator__pos_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeIterator#init for (self: RopeIterator, Rope) */
void ropes__RopeIterator__init(val* self, val* p0) {
val* var_tgt /* var tgt: Rope */;
var_tgt = p0;
self->attrs[COLOR_ropes__RopeIterator___target].val = var_tgt; /* _target on <self:RopeIterator> */
RET_LABEL:;
}
/* method ropes#RopeIterator#init for (self: Object, Rope) */
void VIRTUAL_ropes__RopeIterator__init(val* self, val* p0) {
ropes__RopeIterator__init(self, p0);
RET_LABEL:;
}
/* method ropes#RopeIterator#with_index for (self: RopeIterator, Rope, Int) */
void ropes__RopeIterator__with_index(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: Rope */;
long var_index /* var index: Int */;
var_tgt = p0;
var_index = p1;
self->attrs[COLOR_ropes__RopeIterator___target].val = var_tgt; /* _target on <self:RopeIterator> */
RET_LABEL:;
}
/* method ropes#RopeIterator#with_index for (self: Object, Rope, Int) */
void VIRTUAL_ropes__RopeIterator__with_index(val* self, val* p0, long p1) {
ropes__RopeIterator__with_index(self, p0, p1);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#sub_str_iter for (self: RopeCharIterator): DFSRopeLeafIterator */
val* ropes__RopeCharIterator__sub_str_iter(val* self) {
val* var /* : DFSRopeLeafIterator */;
val* var1 /* : DFSRopeLeafIterator */;
var1 = self->attrs[COLOR_ropes__RopeCharIterator___64dsub_str_iter].val; /* @sub_str_iter on <self:RopeCharIterator> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @sub_str_iter");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 810);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#sub_str_iter for (self: Object): DFSRopeLeafIterator */
val* VIRTUAL_ropes__RopeCharIterator__sub_str_iter(val* self) {
val* var /* : DFSRopeLeafIterator */;
val* var1 /* : DFSRopeLeafIterator */;
var1 = ropes__RopeCharIterator__sub_str_iter(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#sub_str_iter= for (self: RopeCharIterator, DFSRopeLeafIterator) */
void ropes__RopeCharIterator__sub_str_iter_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__RopeCharIterator___64dsub_str_iter].val = p0; /* @sub_str_iter on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#sub_str_iter= for (self: Object, DFSRopeLeafIterator) */
void VIRTUAL_ropes__RopeCharIterator__sub_str_iter_61d(val* self, val* p0) {
ropes__RopeCharIterator__sub_str_iter_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#abs_pos for (self: RopeCharIterator): Int */
long ropes__RopeCharIterator__abs_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_ropes__RopeCharIterator___64dabs_pos].l; /* @abs_pos on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#abs_pos for (self: Object): Int */
long VIRTUAL_ropes__RopeCharIterator__abs_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeCharIterator__abs_pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#abs_pos= for (self: RopeCharIterator, Int) */
void ropes__RopeCharIterator__abs_pos_61d(val* self, long p0) {
self->attrs[COLOR_ropes__RopeCharIterator___64dabs_pos].l = p0; /* @abs_pos on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#abs_pos= for (self: Object, Int) */
void VIRTUAL_ropes__RopeCharIterator__abs_pos_61d(val* self, long p0) {
ropes__RopeCharIterator__abs_pos_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#sub_pos for (self: RopeCharIterator): Int */
long ropes__RopeCharIterator__sub_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_ropes__RopeCharIterator___64dsub_pos].l; /* @sub_pos on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#sub_pos for (self: Object): Int */
long VIRTUAL_ropes__RopeCharIterator__sub_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeCharIterator__sub_pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#sub_pos= for (self: RopeCharIterator, Int) */
void ropes__RopeCharIterator__sub_pos_61d(val* self, long p0) {
self->attrs[COLOR_ropes__RopeCharIterator___64dsub_pos].l = p0; /* @sub_pos on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#sub_pos= for (self: Object, Int) */
void VIRTUAL_ropes__RopeCharIterator__sub_pos_61d(val* self, long p0) {
ropes__RopeCharIterator__sub_pos_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#curr_substring for (self: RopeCharIterator): nullable String */
val* ropes__RopeCharIterator__curr_substring(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_ropes__RopeCharIterator___64dcurr_substring].val; /* @curr_substring on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#curr_substring for (self: Object): nullable String */
val* VIRTUAL_ropes__RopeCharIterator__curr_substring(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = ropes__RopeCharIterator__curr_substring(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#curr_substring= for (self: RopeCharIterator, nullable String) */
void ropes__RopeCharIterator__curr_substring_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__RopeCharIterator___64dcurr_substring].val = p0; /* @curr_substring on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#curr_substring= for (self: Object, nullable String) */
void VIRTUAL_ropes__RopeCharIterator__curr_substring_61d(val* self, val* p0) {
ropes__RopeCharIterator__curr_substring_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#init for (self: RopeCharIterator, Rope) */
void ropes__RopeCharIterator__init(val* self, val* p0) {
val* var_tgt /* var tgt: Rope */;
val* var /* : DFSRopeLeafIterator */;
val* var1 /* : DFSRopeLeafIterator */;
short int var2 /* : Bool */;
val* var3 /* : DFSRopeLeafIterator */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
var_tgt = p0;
var = NEW_ropes__DFSRopeLeafIterator(&type_ropes__DFSRopeLeafIterator);
((void (*)(val*, val*))(var->class->vft[COLOR_ropes__DFSRopeLeafIterator__init]))(var, var_tgt) /* init on <var:DFSRopeLeafIterator>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter_61d]))(self, var) /* sub_str_iter= on <self:RopeCharIterator>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:DFSRopeLeafIterator>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:DFSRopeLeafIterator>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_ropes__LeafNode__value]))(var4) /* value on <var4:nullable Object(LeafNode)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring_61d]))(self, var5) /* curr_substring= on <self:RopeCharIterator>*/;
} else {
}
RET_LABEL:;
}
/* method ropes#RopeCharIterator#init for (self: Object, Rope) */
void VIRTUAL_ropes__RopeCharIterator__init(val* self, val* p0) {
ropes__RopeCharIterator__init(self, p0);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#item for (self: RopeCharIterator): Char */
char ropes__RopeCharIterator__item(val* self) {
char var /* : Char */;
val* var1 /* : nullable String */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
char var4 /* : Char */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring]))(self) /* curr_substring on <self:RopeCharIterator>*/;
var2 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_pos]))(self) /* sub_pos on <self:RopeCharIterator>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 828);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var2) /* [] on <var1:nullable String>*/;
}
var4 = ((struct instance_kernel__Char*)var3)->value; /* autounbox from nullable Object to Char */;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#item for (self: Object): nullable Object */
val* VIRTUAL_ropes__RopeCharIterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = ropes__RopeCharIterator__item(self);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#is_ok for (self: RopeCharIterator): Bool */
short int ropes__RopeCharIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : DFSRopeLeafIterator */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : DFSRopeLeafIterator */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : nullable String */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
long var13 /* : Int */;
val* var14 /* : nullable String */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:DFSRopeLeafIterator>*/;
if (var2){
var3 = 1;
var = var3;
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:DFSRopeLeafIterator>*/;
var8 = !var7;
var_ = var8;
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring]))(self) /* curr_substring on <self:RopeCharIterator>*/;
var10 = NULL;
if (var9 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
var5 = var11;
} else {
var5 = var_;
}
var_12 = var5;
if (var5){
var13 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_pos]))(self) /* sub_pos on <self:RopeCharIterator>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring]))(self) /* curr_substring on <self:RopeCharIterator>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 833);
show_backtrace(1);
} else {
var15 = ((long (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__length]))(var14) /* length on <var14:nullable String>*/;
}
{ /* Inline kernel#Int#< (var13,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var19 = var13 < var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var4 = var16;
} else {
var4 = var_12;
}
if (var4){
var20 = 1;
var = var20;
goto RET_LABEL;
} else {
}
var21 = 0;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_ropes__RopeCharIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__RopeCharIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#next for (self: RopeCharIterator) */
void ropes__RopeCharIterator__next(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : nullable String */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var_ /* var : RopeCharIterator */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var17 /* : DFSRopeLeafIterator */;
val* var18 /* : DFSRopeLeafIterator */;
short int var19 /* : Bool */;
val* var20 /* : DFSRopeLeafIterator */;
val* var21 /* : nullable Object */;
val* var22 /* : String */;
long var23 /* : Int */;
val* var24 /* : nullable String */;
long var25 /* : Int */;
val* var_26 /* var : RopeCharIterator */;
long var27 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
var = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:RopeCharIterator>*/;
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 839);
show_backtrace(1);
}
var1 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_pos]))(self) /* sub_pos on <self:RopeCharIterator>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring]))(self) /* curr_substring on <self:RopeCharIterator>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 840);
show_backtrace(1);
} else {
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:nullable String>*/;
}
var4 = 1;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
{ /* Inline kernel#Int#< (var1,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (!var10) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var11 = var1 < var5;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var_ = self;
var12 = ((long (*)(val*))(var_->class->vft[COLOR_ropes__RopeCharIterator__sub_pos]))(var_) /* sub_pos on <var_:RopeCharIterator>*/;
var13 = 1;
{ /* Inline kernel#Int#+ (var12,var13) */
var16 = var12 + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
((void (*)(val*, long))(var_->class->vft[COLOR_ropes__RopeCharIterator__sub_pos_61d]))(var_, var14) /* sub_pos= on <var_:RopeCharIterator>*/;
} else {
var17 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:DFSRopeLeafIterator>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:DFSRopeLeafIterator>*/;
if (var19){
var20 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_str_iter]))(self) /* sub_str_iter on <self:RopeCharIterator>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:DFSRopeLeafIterator>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_ropes__LeafNode__value]))(var21) /* value on <var21:nullable Object(LeafNode)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring_61d]))(self, var22) /* curr_substring= on <self:RopeCharIterator>*/;
var23 = 0;
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_pos_61d]))(self, var23) /* sub_pos= on <self:RopeCharIterator>*/;
} else {
var24 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__curr_substring]))(self) /* curr_substring on <self:RopeCharIterator>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 848);
show_backtrace(1);
} else {
var25 = ((long (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__length]))(var24) /* length on <var24:nullable String>*/;
}
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeCharIterator__sub_pos_61d]))(self, var25) /* sub_pos= on <self:RopeCharIterator>*/;
}
}
var_26 = self;
var27 = ((long (*)(val*))(var_26->class->vft[COLOR_ropes__RopeCharIterator__abs_pos]))(var_26) /* abs_pos on <var_26:RopeCharIterator>*/;
var28 = 1;
{ /* Inline kernel#Int#+ (var27,var28) */
var31 = var27 + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
((void (*)(val*, long))(var_26->class->vft[COLOR_ropes__RopeCharIterator__abs_pos_61d]))(var_26, var29) /* abs_pos= on <var_26:RopeCharIterator>*/;
RET_LABEL:;
}
/* method ropes#RopeCharIterator#next for (self: Object) */
void VIRTUAL_ropes__RopeCharIterator__next(val* self) {
ropes__RopeCharIterator__next(self);
RET_LABEL:;
}
/* method ropes#RopeCharIterator#index for (self: RopeCharIterator): Int */
long ropes__RopeCharIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeCharIterator__abs_pos]))(self) /* abs_pos on <self:RopeCharIterator>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#index for (self: Object): Int */
long VIRTUAL_ropes__RopeCharIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeCharIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#visit_stack for (self: DFSRopeLeafIterator): List[TupleVisitNode] */
val* ropes__DFSRopeLeafIterator__visit_stack(val* self) {
val* var /* : List[TupleVisitNode] */;
val* var1 /* : List[TupleVisitNode] */;
var1 = self->attrs[COLOR_ropes__DFSRopeLeafIterator___64dvisit_stack].val; /* @visit_stack on <self:DFSRopeLeafIterator> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visit_stack");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 865);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#visit_stack for (self: Object): List[TupleVisitNode] */
val* VIRTUAL_ropes__DFSRopeLeafIterator__visit_stack(val* self) {
val* var /* : List[TupleVisitNode] */;
val* var1 /* : List[TupleVisitNode] */;
var1 = ropes__DFSRopeLeafIterator__visit_stack(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#visit_stack= for (self: DFSRopeLeafIterator, List[TupleVisitNode]) */
void ropes__DFSRopeLeafIterator__visit_stack_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__DFSRopeLeafIterator___64dvisit_stack].val = p0; /* @visit_stack on <self:DFSRopeLeafIterator> */
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#visit_stack= for (self: Object, List[TupleVisitNode]) */
void VIRTUAL_ropes__DFSRopeLeafIterator__visit_stack_61d(val* self, val* p0) {
ropes__DFSRopeLeafIterator__visit_stack_61d(self, p0);
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#curr_leaf for (self: DFSRopeLeafIterator): nullable LeafNode */
val* ropes__DFSRopeLeafIterator__curr_leaf(val* self) {
val* var /* : nullable LeafNode */;
val* var1 /* : nullable LeafNode */;
var1 = self->attrs[COLOR_ropes__DFSRopeLeafIterator___64dcurr_leaf].val; /* @curr_leaf on <self:DFSRopeLeafIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#curr_leaf for (self: Object): nullable LeafNode */
val* VIRTUAL_ropes__DFSRopeLeafIterator__curr_leaf(val* self) {
val* var /* : nullable LeafNode */;
val* var1 /* : nullable LeafNode */;
var1 = ropes__DFSRopeLeafIterator__curr_leaf(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#curr_leaf= for (self: DFSRopeLeafIterator, nullable LeafNode) */
void ropes__DFSRopeLeafIterator__curr_leaf_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__DFSRopeLeafIterator___64dcurr_leaf].val = p0; /* @curr_leaf on <self:DFSRopeLeafIterator> */
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#curr_leaf= for (self: Object, nullable LeafNode) */
void VIRTUAL_ropes__DFSRopeLeafIterator__curr_leaf_61d(val* self, val* p0) {
ropes__DFSRopeLeafIterator__curr_leaf_61d(self, p0);
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#init for (self: DFSRopeLeafIterator, Rope) */
void ropes__DFSRopeLeafIterator__init(val* self, val* p0) {
val* var_tgt /* var tgt: Rope */;
val* var /* : Rope */;
val* var1 /* : RopeNode */;
val* var_first_node /* var first_node: RopeNode */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : List[TupleVisitNode] */;
val* var4 /* : TupleVisitNode */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
var_tgt = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__RopeIterator__init]))(self, p0) /* init on <self:DFSRopeLeafIterator>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeIterator__target]))(self) /* target on <self:DFSRopeLeafIterator>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_ropes__Rope__parent_node]))(var) /* parent_node on <var:Rope>*/;
var_first_node = var1;
/* <var_first_node:RopeNode> isa ConcatNode */
cltype = type_ropes__ConcatNode.color;
idtype = type_ropes__ConcatNode.id;
if(cltype >= var_first_node->type->table_size) {
var2 = 0;
} else {
var2 = var_first_node->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack]))(self) /* visit_stack on <self:DFSRopeLeafIterator>*/;
var4 = NEW_ropes__TupleVisitNode(&type_ropes__TupleVisitNode);
((void (*)(val*, val*))(var4->class->vft[COLOR_ropes__TupleVisitNode__init]))(var4, var_first_node) /* init on <var4:TupleVisitNode>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Sequence__push]))(var3, var4) /* push on <var3:List[TupleVisitNode]>*/;
} else {
/* <var_first_node:RopeNode> isa LeafNode */
cltype6 = type_ropes__LeafNode.color;
idtype7 = type_ropes__LeafNode.id;
if(cltype6 >= var_first_node->type->table_size) {
var5 = 0;
} else {
var5 = var_first_node->type->type_table[cltype6] == idtype7;
}
if (var5){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf_61d]))(self, var_first_node) /* curr_leaf= on <self:DFSRopeLeafIterator>*/;
goto RET_LABEL;
} else {
}
}
((void (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__next_body]))(self) /* next_body on <self:DFSRopeLeafIterator>*/;
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#init for (self: Object, Rope) */
void VIRTUAL_ropes__DFSRopeLeafIterator__init(val* self, val* p0) {
ropes__DFSRopeLeafIterator__init(self, p0);
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#with_index for (self: DFSRopeLeafIterator, Rope, Int) */
void ropes__DFSRopeLeafIterator__with_index(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: Rope */;
long var_index /* var index: Int */;
val* var /* : Rope */;
val* var1 /* : TupleLeafNodePos */;
val* var_returned_tuple /* var returned_tuple: TupleLeafNodePos */;
val* var2 /* : LeafNode */;
val* var3 /* : List[TupleVisitNode] */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
var_tgt = p0;
var_index = p1;
((void (*)(val*, val*, long))(self->class->vft[COLOR_ropes__RopeIterator__with_index]))(self, p0, p1) /* with_index on <self:DFSRopeLeafIterator>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_ropes__RopeIterator__target]))(self) /* target on <self:DFSRopeLeafIterator>*/;
var1 = ((val* (*)(val*, long))(var->class->vft[COLOR_ropes__Rope__get_node_for_pos]))(var, var_index) /* get_node_for_pos on <var:Rope>*/;
var_returned_tuple = var1;
var2 = ((val* (*)(val*))(var_returned_tuple->class->vft[COLOR_ropes__TupleLeafNodePos__curr_node]))(var_returned_tuple) /* curr_node on <var_returned_tuple:TupleLeafNodePos>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf_61d]))(self, var2) /* curr_leaf= on <self:DFSRopeLeafIterator>*/;
var3 = ((val* (*)(val*))(var_returned_tuple->class->vft[COLOR_ropes__TupleLeafNodePos__visit_stack]))(var_returned_tuple) /* visit_stack on <var_returned_tuple:TupleLeafNodePos>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack_61d]))(self, var3) /* visit_stack= on <self:DFSRopeLeafIterator>*/;
var4 = ((long (*)(val*))(var_returned_tuple->class->vft[COLOR_ropes__TupleLeafNodePos__corrected_pos]))(var_returned_tuple) /* corrected_pos on <var_returned_tuple:TupleLeafNodePos>*/;
{ /* Inline kernel#Int#- (var_index,var4) */
var7 = var_index - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeIterator__pos_61d]))(self, var5) /* pos= on <self:DFSRopeLeafIterator>*/;
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#with_index for (self: Object, Rope, Int) */
void VIRTUAL_ropes__DFSRopeLeafIterator__with_index(val* self, val* p0, long p1) {
ropes__DFSRopeLeafIterator__with_index(self, p0, p1);
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#is_ok for (self: DFSRopeLeafIterator): Bool */
short int ropes__DFSRopeLeafIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable LeafNode */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf]))(self) /* curr_leaf on <self:DFSRopeLeafIterator>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_ropes__DFSRopeLeafIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__DFSRopeLeafIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#next for (self: DFSRopeLeafIterator) */
void ropes__DFSRopeLeafIterator__next(val* self) {
short int var /* : Bool */;
val* var_ /* var : DFSRopeLeafIterator */;
long var1 /* : Int */;
val* var2 /* : nullable LeafNode */;
val* var3 /* : String */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
var = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:DFSRopeLeafIterator>*/;
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 902);
show_backtrace(1);
}
var_ = self;
var1 = ((long (*)(val*))(var_->class->vft[COLOR_ropes__RopeIterator__pos]))(var_) /* pos on <var_:DFSRopeLeafIterator>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf]))(self) /* curr_leaf on <self:DFSRopeLeafIterator>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 903);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_ropes__LeafNode__value]))(var2) /* value on <var2:nullable LeafNode>*/;
}
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:String>*/;
{ /* Inline kernel#Int#+ (var1,var4) */
var7 = var1 + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
((void (*)(val*, long))(var_->class->vft[COLOR_ropes__RopeIterator__pos_61d]))(var_, var5) /* pos= on <var_:DFSRopeLeafIterator>*/;
((void (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__next_body]))(self) /* next_body on <self:DFSRopeLeafIterator>*/;
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#next for (self: Object) */
void VIRTUAL_ropes__DFSRopeLeafIterator__next(val* self) {
ropes__DFSRopeLeafIterator__next(self);
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#next_body for (self: DFSRopeLeafIterator) */
void ropes__DFSRopeLeafIterator__next_body(val* self) {
val* var /* : List[TupleVisitNode] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : List[TupleVisitNode] */;
val* var4 /* : nullable Object */;
val* var_curr_concat_tuple /* var curr_concat_tuple: TupleVisitNode */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ConcatNode */;
val* var9 /* : nullable RopeNode */;
val* var_next_node /* var next_node: nullable RopeNode */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : List[TupleVisitNode] */;
val* var14 /* : TupleVisitNode */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ConcatNode */;
val* var22 /* : nullable RopeNode */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : List[TupleVisitNode] */;
val* var29 /* : TupleVisitNode */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : List[TupleVisitNode] */;
val* var34 /* : nullable Object */;
val* var35 /* : null */;
for(;;) {
var = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack]))(self) /* visit_stack on <self:DFSRopeLeafIterator>*/;
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var) /* is_empty on <var:List[TupleVisitNode]>*/;
var2 = !var1;
if (!var2) break;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack]))(self) /* visit_stack on <self:DFSRopeLeafIterator>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var3) /* last on <var3:List[TupleVisitNode]>*/;
var_curr_concat_tuple = var4;
var5 = ((short int (*)(val*))(var_curr_concat_tuple->class->vft[COLOR_ropes__TupleVisitNode__left_visited]))(var_curr_concat_tuple) /* left_visited on <var_curr_concat_tuple:TupleVisitNode>*/;
var6 = !var5;
if (var6){
var7 = 1;
((void (*)(val*, short int))(var_curr_concat_tuple->class->vft[COLOR_ropes__TupleVisitNode__left_visited_61d]))(var_curr_concat_tuple, var7) /* left_visited= on <var_curr_concat_tuple:TupleVisitNode>*/;
var8 = ((val* (*)(val*))(var_curr_concat_tuple->class->vft[COLOR_ropes__TupleVisitNode__node]))(var_curr_concat_tuple) /* node on <var_curr_concat_tuple:TupleVisitNode>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_ropes__ConcatNode__left_child]))(var8) /* left_child on <var8:ConcatNode>*/;
var_next_node = var9;
var10 = NULL;
if (var_next_node == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (var11){
goto CONTINUE_label;
} else {
}
/* <var_next_node:nullable RopeNode(RopeNode)> isa ConcatNode */
cltype = type_ropes__ConcatNode.color;
idtype = type_ropes__ConcatNode.id;
if(cltype >= var_next_node->type->table_size) {
var12 = 0;
} else {
var12 = var_next_node->type->type_table[cltype] == idtype;
}
if (var12){
var13 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack]))(self) /* visit_stack on <self:DFSRopeLeafIterator>*/;
var14 = NEW_ropes__TupleVisitNode(&type_ropes__TupleVisitNode);
((void (*)(val*, val*))(var14->class->vft[COLOR_ropes__TupleVisitNode__init]))(var14, var_next_node) /* init on <var14:TupleVisitNode>*/;
((void (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__Sequence__push]))(var13, var14) /* push on <var13:List[TupleVisitNode]>*/;
} else {
/* <var_next_node:nullable RopeNode(RopeNode)> isa LeafNode */
cltype16 = type_ropes__LeafNode.color;
idtype17 = type_ropes__LeafNode.id;
if(cltype16 >= var_next_node->type->table_size) {
var15 = 0;
} else {
var15 = var_next_node->type->type_table[cltype16] == idtype17;
}
if (var15){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf_61d]))(self, var_next_node) /* curr_leaf= on <self:DFSRopeLeafIterator>*/;
goto RET_LABEL;
} else {
}
}
} else {
var18 = ((short int (*)(val*))(var_curr_concat_tuple->class->vft[COLOR_ropes__TupleVisitNode__right_visited]))(var_curr_concat_tuple) /* right_visited on <var_curr_concat_tuple:TupleVisitNode>*/;
var19 = !var18;
if (var19){
var20 = 1;
((void (*)(val*, short int))(var_curr_concat_tuple->class->vft[COLOR_ropes__TupleVisitNode__right_visited_61d]))(var_curr_concat_tuple, var20) /* right_visited= on <var_curr_concat_tuple:TupleVisitNode>*/;
var21 = ((val* (*)(val*))(var_curr_concat_tuple->class->vft[COLOR_ropes__TupleVisitNode__node]))(var_curr_concat_tuple) /* node on <var_curr_concat_tuple:TupleVisitNode>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_ropes__ConcatNode__right_child]))(var21) /* right_child on <var21:ConcatNode>*/;
var_next_node = var22;
var23 = NULL;
if (var_next_node == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (var24){
goto CONTINUE_label;
} else {
}
/* <var_next_node:nullable RopeNode(RopeNode)> isa ConcatNode */
cltype26 = type_ropes__ConcatNode.color;
idtype27 = type_ropes__ConcatNode.id;
if(cltype26 >= var_next_node->type->table_size) {
var25 = 0;
} else {
var25 = var_next_node->type->type_table[cltype26] == idtype27;
}
if (var25){
var28 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack]))(self) /* visit_stack on <self:DFSRopeLeafIterator>*/;
var29 = NEW_ropes__TupleVisitNode(&type_ropes__TupleVisitNode);
((void (*)(val*, val*))(var29->class->vft[COLOR_ropes__TupleVisitNode__init]))(var29, var_next_node) /* init on <var29:TupleVisitNode>*/;
((void (*)(val*, val*))(var28->class->vft[COLOR_abstract_collection__Sequence__push]))(var28, var29) /* push on <var28:List[TupleVisitNode]>*/;
} else {
/* <var_next_node:nullable RopeNode(RopeNode)> isa LeafNode */
cltype31 = type_ropes__LeafNode.color;
idtype32 = type_ropes__LeafNode.id;
if(cltype31 >= var_next_node->type->table_size) {
var30 = 0;
} else {
var30 = var_next_node->type->type_table[cltype31] == idtype32;
}
if (var30){
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf_61d]))(self, var_next_node) /* curr_leaf= on <self:DFSRopeLeafIterator>*/;
goto RET_LABEL;
} else {
}
}
} else {
var33 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__visit_stack]))(self) /* visit_stack on <self:DFSRopeLeafIterator>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Sequence__pop]))(var33) /* pop on <var33:List[TupleVisitNode]>*/;
var34;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var35 = NULL;
((void (*)(val*, val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf_61d]))(self, var35) /* curr_leaf= on <self:DFSRopeLeafIterator>*/;
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#next_body for (self: Object) */
void VIRTUAL_ropes__DFSRopeLeafIterator__next_body(val* self) {
ropes__DFSRopeLeafIterator__next_body(self);
RET_LABEL:;
}
/* method ropes#DFSRopeLeafIterator#item for (self: DFSRopeLeafIterator): LeafNode */
val* ropes__DFSRopeLeafIterator__item(val* self) {
val* var /* : LeafNode */;
short int var1 /* : Bool */;
val* var2 /* : nullable LeafNode */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:DFSRopeLeafIterator>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 951);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__DFSRopeLeafIterator__curr_leaf]))(self) /* curr_leaf on <self:DFSRopeLeafIterator>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 952);
show_backtrace(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#DFSRopeLeafIterator#item for (self: Object): nullable Object */
val* VIRTUAL_ropes__DFSRopeLeafIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : LeafNode */;
var1 = ropes__DFSRopeLeafIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#parent for (self: RopeNode): nullable ConcatNode */
val* ropes__RopeNode__parent(val* self) {
val* var /* : nullable ConcatNode */;
val* var1 /* : nullable ConcatNode */;
var1 = self->attrs[COLOR_ropes__RopeNode___64dparent].val; /* @parent on <self:RopeNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#parent for (self: Object): nullable ConcatNode */
val* VIRTUAL_ropes__RopeNode__parent(val* self) {
val* var /* : nullable ConcatNode */;
val* var1 /* : nullable ConcatNode */;
var1 = ropes__RopeNode__parent(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#parent= for (self: RopeNode, nullable ConcatNode) */
void ropes__RopeNode__parent_61d(val* self, val* p0) {
self->attrs[COLOR_ropes__RopeNode___64dparent].val = p0; /* @parent on <self:RopeNode> */
RET_LABEL:;
}
/* method ropes#RopeNode#parent= for (self: Object, nullable ConcatNode) */
void VIRTUAL_ropes__RopeNode__parent_61d(val* self, val* p0) {
ropes__RopeNode__parent_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeNode#height for (self: RopeNode): Int */
long ropes__RopeNode__height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_ropes__RopeNode___64dheight].l; /* @height on <self:RopeNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#height for (self: Object): Int */
long VIRTUAL_ropes__RopeNode__height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeNode__height(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#height= for (self: RopeNode, Int) */
void ropes__RopeNode__height_61d(val* self, long p0) {
self->attrs[COLOR_ropes__RopeNode___64dheight].l = p0; /* @height on <self:RopeNode> */
RET_LABEL:;
}
/* method ropes#RopeNode#height= for (self: Object, Int) */
void VIRTUAL_ropes__RopeNode__height_61d(val* self, long p0) {
ropes__RopeNode__height_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeNode#balance_factor for (self: RopeNode): Int */
long ropes__RopeNode__balance_factor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeNode__height]))(self) /* height on <self:RopeNode>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#balance_factor for (self: Object): Int */
long VIRTUAL_ropes__RopeNode__balance_factor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeNode__balance_factor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#length for (self: RopeNode): Int */
long ropes__RopeNode__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_ropes__RopeNode___length].l; /* _length on <self:RopeNode> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#length for (self: Object): Int */
long VIRTUAL_ropes__RopeNode__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__RopeNode__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeNode#length= for (self: RopeNode, Int) */
void ropes__RopeNode__length_61d(val* self, long p0) {
long var_len /* var len: Int */;
var_len = p0;
self->attrs[COLOR_ropes__RopeNode___length].l = var_len; /* _length on <self:RopeNode> */
RET_LABEL:;
}
/* method ropes#RopeNode#length= for (self: Object, Int) */
void VIRTUAL_ropes__RopeNode__length_61d(val* self, long p0) {
ropes__RopeNode__length_61d(self, p0);
RET_LABEL:;
}
/* method ropes#RopeNode#init for (self: RopeNode) */
void ropes__RopeNode__init(val* self) {
RET_LABEL:;
}
/* method ropes#RopeNode#init for (self: Object) */
void VIRTUAL_ropes__RopeNode__init(val* self) {
ropes__RopeNode__init(self);
RET_LABEL:;
}
/* method ropes#ConcatNode#left_child for (self: ConcatNode): nullable RopeNode */
val* ropes__ConcatNode__left_child(val* self) {
val* var /* : nullable RopeNode */;
val* var1 /* : nullable RopeNode */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable RopeNode */;
val* var5 /* : null */;
var1 = self->attrs[COLOR_ropes__ConcatNode___left_child].val; /* _left_child on <self:ConcatNode> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_ropes__ConcatNode___left_child].val; /* _left_child on <self:ConcatNode> */
var = var4;
goto RET_LABEL;
} else {
var5 = NULL;
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#ConcatNode#left_child for (self: Object): nullable RopeNode */
val* VIRTUAL_ropes__ConcatNode__left_child(val* self) {
val* var /* : nullable RopeNode */;
val* var1 /* : nullable RopeNode */;
var1 = ropes__ConcatNode__left_child(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ConcatNode#right_child for (self: ConcatNode): nullable RopeNode */
val* ropes__ConcatNode__right_child(val* self) {
val* var /* : nullable RopeNode */;
val* var1 /* : nullable RopeNode */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable RopeNode */;
val* var5 /* : null */;
var1 = self->attrs[COLOR_ropes__ConcatNode___right_child].val; /* _right_child on <self:ConcatNode> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_ropes__ConcatNode___right_child].val; /* _right_child on <self:ConcatNode> */
var = var4;
goto RET_LABEL;
} else {
var5 = NULL;
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#ConcatNode#right_child for (self: Object): nullable RopeNode */
val* VIRTUAL_ropes__ConcatNode__right_child(val* self) {
val* var /* : nullable RopeNode */;
val* var1 /* : nullable RopeNode */;
var1 = ropes__ConcatNode__right_child(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ConcatNode#left_child= for (self: ConcatNode, nullable RopeNode) */
void ropes__ConcatNode__left_child_61d(val* self, val* p0) {
val* var_new_node /* var new_node: nullable RopeNode */;
var_new_node = p0;
self->attrs[COLOR_ropes__ConcatNode___left_child].val = var_new_node; /* _left_child on <self:ConcatNode> */
if (var_new_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1010);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_new_node->class->vft[COLOR_ropes__RopeNode__parent_61d]))(var_new_node, self) /* parent= on <var_new_node:nullable RopeNode>*/;
}
((void (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__update_data]))(self) /* update_data on <self:ConcatNode>*/;
RET_LABEL:;
}
/* method ropes#ConcatNode#left_child= for (self: Object, nullable RopeNode) */
void VIRTUAL_ropes__ConcatNode__left_child_61d(val* self, val* p0) {
ropes__ConcatNode__left_child_61d(self, p0);
RET_LABEL:;
}
/* method ropes#ConcatNode#right_child= for (self: ConcatNode, nullable RopeNode) */
void ropes__ConcatNode__right_child_61d(val* self, val* p0) {
val* var_new_node /* var new_node: nullable RopeNode */;
var_new_node = p0;
self->attrs[COLOR_ropes__ConcatNode___right_child].val = var_new_node; /* _right_child on <self:ConcatNode> */
if (var_new_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1017);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_new_node->class->vft[COLOR_ropes__RopeNode__parent_61d]))(var_new_node, self) /* parent= on <var_new_node:nullable RopeNode>*/;
}
((void (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__update_data]))(self) /* update_data on <self:ConcatNode>*/;
RET_LABEL:;
}
/* method ropes#ConcatNode#right_child= for (self: Object, nullable RopeNode) */
void VIRTUAL_ropes__ConcatNode__right_child_61d(val* self, val* p0) {
ropes__ConcatNode__right_child_61d(self, p0);
RET_LABEL:;
}
/* method ropes#ConcatNode#update_data for (self: ConcatNode) */
void ropes__ConcatNode__update_data(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : nullable RopeNode */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var_ /* var : ConcatNode */;
long var5 /* : Int */;
val* var6 /* : nullable RopeNode */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
val* var11 /* : nullable RopeNode */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var21 /* : Bool */;
val* var22 /* : nullable RopeNode */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
val* var28 /* : nullable RopeNode */;
val* var29 /* : null */;
short int var30 /* : Bool */;
val* var_31 /* var : ConcatNode */;
long var32 /* : Int */;
val* var33 /* : nullable RopeNode */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : nullable RopeNode */;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
val* var52 /* : nullable RopeNode */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var57 /* : Int */;
var = 0;
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeNode__length_61d]))(self, var) /* length= on <self:ConcatNode>*/;
var1 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeNode__height_61d]))(self, var1) /* height= on <self:ConcatNode>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__left_child]))(self) /* left_child on <self:ConcatNode>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var_ = self;
var5 = ((long (*)(val*))(var_->class->vft[COLOR_ropes__RopeNode__length]))(var_) /* length on <var_:ConcatNode>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__left_child]))(self) /* left_child on <self:ConcatNode>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1029);
show_backtrace(1);
} else {
var7 = ((long (*)(val*))(var6->class->vft[COLOR_ropes__RopeNode__length]))(var6) /* length on <var6:nullable RopeNode>*/;
}
{ /* Inline kernel#Int#+ (var5,var7) */
var10 = var5 + var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
((void (*)(val*, long))(var_->class->vft[COLOR_ropes__RopeNode__length_61d]))(var_, var8) /* length= on <var_:ConcatNode>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__left_child]))(self) /* left_child on <self:ConcatNode>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1030);
show_backtrace(1);
} else {
var12 = ((long (*)(val*))(var11->class->vft[COLOR_ropes__RopeNode__height]))(var11) /* height on <var11:nullable RopeNode>*/;
}
var13 = 1;
{ /* Inline kernel#Int#+ (var12,var13) */
var16 = var12 + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var17 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeNode__height]))(self) /* height on <self:ConcatNode>*/;
{ /* Inline kernel#Int#> (var14,var17) */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (!var20) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var21 = var14 > var17;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var22 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__left_child]))(self) /* left_child on <self:ConcatNode>*/;
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1030);
show_backtrace(1);
} else {
var23 = ((long (*)(val*))(var22->class->vft[COLOR_ropes__RopeNode__height]))(var22) /* height on <var22:nullable RopeNode>*/;
}
var24 = 1;
{ /* Inline kernel#Int#+ (var23,var24) */
var27 = var23 + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeNode__height_61d]))(self, var25) /* height= on <self:ConcatNode>*/;
} else {
}
} else {
}
var28 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__right_child]))(self) /* right_child on <self:ConcatNode>*/;
var29 = NULL;
if (var28 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (var30){
var_31 = self;
var32 = ((long (*)(val*))(var_31->class->vft[COLOR_ropes__RopeNode__length]))(var_31) /* length on <var_31:ConcatNode>*/;
var33 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__right_child]))(self) /* right_child on <self:ConcatNode>*/;
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1033);
show_backtrace(1);
} else {
var34 = ((long (*)(val*))(var33->class->vft[COLOR_ropes__RopeNode__length]))(var33) /* length on <var33:nullable RopeNode>*/;
}
{ /* Inline kernel#Int#+ (var32,var34) */
var37 = var32 + var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
((void (*)(val*, long))(var_31->class->vft[COLOR_ropes__RopeNode__length_61d]))(var_31, var35) /* length= on <var_31:ConcatNode>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__right_child]))(self) /* right_child on <self:ConcatNode>*/;
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1034);
show_backtrace(1);
} else {
var39 = ((long (*)(val*))(var38->class->vft[COLOR_ropes__RopeNode__height]))(var38) /* height on <var38:nullable RopeNode>*/;
}
var40 = 1;
{ /* Inline kernel#Int#+ (var39,var40) */
var43 = var39 + var40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var44 = ((long (*)(val*))(self->class->vft[COLOR_ropes__RopeNode__height]))(self) /* height on <self:ConcatNode>*/;
{ /* Inline kernel#Int#> (var41,var44) */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (!var47) {
var_class_name50 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var51 = var41 > var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
if (var45){
var52 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__right_child]))(self) /* right_child on <self:ConcatNode>*/;
if (var52 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1034);
show_backtrace(1);
} else {
var53 = ((long (*)(val*))(var52->class->vft[COLOR_ropes__RopeNode__height]))(var52) /* height on <var52:nullable RopeNode>*/;
}
var54 = 1;
{ /* Inline kernel#Int#+ (var53,var54) */
var57 = var53 + var54;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeNode__height_61d]))(self, var55) /* height= on <self:ConcatNode>*/;
} else {
}
} else {
}
RET_LABEL:;
}
/* method ropes#ConcatNode#update_data for (self: Object) */
void VIRTUAL_ropes__ConcatNode__update_data(val* self) {
ropes__ConcatNode__update_data(self);
RET_LABEL:;
}
/* method ropes#ConcatNode#balance_factor for (self: ConcatNode): Int */
long ropes__ConcatNode__balance_factor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_left_height /* var left_height: Int */;
long var2 /* : Int */;
long var_right_height /* var right_height: Int */;
val* var3 /* : nullable RopeNode */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable RopeNode */;
long var7 /* : Int */;
val* var8 /* : nullable RopeNode */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : nullable RopeNode */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
var1 = 0;
var_left_height = var1;
var2 = 0;
var_right_height = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__left_child]))(self) /* left_child on <self:ConcatNode>*/;
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__left_child]))(self) /* left_child on <self:ConcatNode>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1045);
show_backtrace(1);
} else {
var7 = ((long (*)(val*))(var6->class->vft[COLOR_ropes__RopeNode__height]))(var6) /* height on <var6:nullable RopeNode>*/;
}
var_left_height = var7;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__right_child]))(self) /* right_child on <self:ConcatNode>*/;
var9 = NULL;
if (var8 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_ropes__ConcatNode__right_child]))(self) /* right_child on <self:ConcatNode>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1046);
show_backtrace(1);
} else {
var12 = ((long (*)(val*))(var11->class->vft[COLOR_ropes__RopeNode__height]))(var11) /* height on <var11:nullable RopeNode>*/;
}
var_right_height = var12;
} else {
}
{ /* Inline kernel#Int#- (var_left_height,var_right_height) */
var15 = var_left_height - var_right_height;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ConcatNode#balance_factor for (self: Object): Int */
long VIRTUAL_ropes__ConcatNode__balance_factor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ropes__ConcatNode__balance_factor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ConcatNode#init for (self: ConcatNode) */
void ropes__ConcatNode__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_ropes__RopeNode__init]))(self) /* init on <self:ConcatNode>*/;
RET_LABEL:;
}
/* method ropes#ConcatNode#init for (self: Object) */
void VIRTUAL_ropes__ConcatNode__init(val* self) {
ropes__ConcatNode__init(self);
RET_LABEL:;
}
/* method ropes#LeafNode#init for (self: LeafNode, AbstractString) */
void ropes__LeafNode__init(val* self, val* p0) {
val* var_val /* var val: AbstractString */;
val* var /* : String */;
long var1 /* : Int */;
var_val = p0;
((void (*)(val*))(self->class->vft[COLOR_ropes__RopeNode__init]))(self) /* init on <self:LeafNode>*/;
var = ((val* (*)(val*))(var_val->class->vft[COLOR_string__Object__to_s]))(var_val) /* to_s on <var_val:AbstractString>*/;
self->attrs[COLOR_ropes__LeafNode___value].val = var; /* _value on <self:LeafNode> */
var1 = ((long (*)(val*))(var_val->class->vft[COLOR_abstract_collection__Collection__length]))(var_val) /* length on <var_val:AbstractString>*/;
((void (*)(val*, long))(self->class->vft[COLOR_ropes__RopeNode__length_61d]))(self, var1) /* length= on <self:LeafNode>*/;
RET_LABEL:;
}
/* method ropes#LeafNode#init for (self: Object, AbstractString) */
void VIRTUAL_ropes__LeafNode__init(val* self, val* p0) {
ropes__LeafNode__init(self, p0);
RET_LABEL:;
}
/* method ropes#LeafNode#value for (self: LeafNode): String */
val* ropes__LeafNode__value(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_ropes__LeafNode___value].val; /* _value on <self:LeafNode> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _value");
fprintf(stderr, " (%s:%d)\n", "lib/standard/ropes.nit", 1064);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#LeafNode#value for (self: Object): String */
val* VIRTUAL_ropes__LeafNode__value(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ropes__LeafNode__value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#LeafNode#value= for (self: LeafNode, String) */
void ropes__LeafNode__value_61d(val* self, val* p0) {
val* var_val /* var val: String */;
var_val = p0;
self->attrs[COLOR_ropes__LeafNode___value].val = var_val; /* _value on <self:LeafNode> */
RET_LABEL:;
}
/* method ropes#LeafNode#value= for (self: Object, String) */
void VIRTUAL_ropes__LeafNode__value_61d(val* self, val* p0) {
ropes__LeafNode__value_61d(self, p0);
RET_LABEL:;
}
/* method ropes#String#== for (self: String, nullable Object): Bool */
short int ropes__String___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Rope */
cltype = type_ropes__Rope.color;
idtype = type_ropes__Rope.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var1 = 0;
} else {
var1 = var_other->type->type_table[cltype] == idtype;
}
}
if (var1){
var2 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Object___61d_61d]))(var_other, self) /* == on <var_other:nullable Object(Rope)>*/;
var = var2;
goto RET_LABEL;
} else {
var3 = ((short int (*)(val*, val*))(self->class->vft[COLOR_ropes__String___61d_61d]))(self, p0) /* == on <self:String>*/;
var = var3;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#String#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_ropes__String___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__String___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Buffer#== for (self: Buffer, nullable Object): Bool */
short int ropes__Buffer___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Rope */
cltype = type_ropes__Rope.color;
idtype = type_ropes__Rope.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var1 = 0;
} else {
var1 = var_other->type->type_table[cltype] == idtype;
}
}
if (var1){
var2 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Object___61d_61d]))(var_other, self) /* == on <var_other:nullable Object(Rope)>*/;
var = var2;
goto RET_LABEL;
} else {
var3 = ((short int (*)(val*, val*))(self->class->vft[COLOR_ropes__Buffer___61d_61d]))(self, p0) /* == on <self:Buffer>*/;
var = var3;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Buffer#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_ropes__Buffer___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ropes__Buffer___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
