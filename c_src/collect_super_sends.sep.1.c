#include "collect_super_sends.sep.0.h"
/* method collect_super_sends#CollectSuperSends#modelbuilder for (self: CollectSuperSends): ModelBuilder */
val* collect_super_sends__CollectSuperSends__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_collect_super_sends__CollectSuperSends___64dmodelbuilder].val; /* @modelbuilder on <self:CollectSuperSends> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/collect_super_sends.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method collect_super_sends#CollectSuperSends#modelbuilder for (self: Object): ModelBuilder */
val* VIRTUAL_collect_super_sends__CollectSuperSends__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = collect_super_sends__CollectSuperSends__modelbuilder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method collect_super_sends#CollectSuperSends#modelbuilder= for (self: CollectSuperSends, ModelBuilder) */
void collect_super_sends__CollectSuperSends__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_collect_super_sends__CollectSuperSends___64dmodelbuilder].val = p0; /* @modelbuilder on <self:CollectSuperSends> */
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_collect_super_sends__CollectSuperSends__modelbuilder_61d(val* self, val* p0) {
collect_super_sends__CollectSuperSends__modelbuilder_61d(self, p0);
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#res for (self: CollectSuperSends): ArraySet[MMethodDef] */
val* collect_super_sends__CollectSuperSends__res(val* self) {
val* var /* : ArraySet[MMethodDef] */;
val* var1 /* : ArraySet[MMethodDef] */;
var1 = self->attrs[COLOR_collect_super_sends__CollectSuperSends___64dres].val; /* @res on <self:CollectSuperSends> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @res");
fprintf(stderr, " (%s:%d)\n", "src/collect_super_sends.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method collect_super_sends#CollectSuperSends#res for (self: Object): ArraySet[MMethodDef] */
val* VIRTUAL_collect_super_sends__CollectSuperSends__res(val* self) {
val* var /* : ArraySet[MMethodDef] */;
val* var1 /* : ArraySet[MMethodDef] */;
var1 = collect_super_sends__CollectSuperSends__res(self);
var = var1;
RET_LABEL:;
return var;
}
/* method collect_super_sends#CollectSuperSends#res= for (self: CollectSuperSends, ArraySet[MMethodDef]) */
void collect_super_sends__CollectSuperSends__res_61d(val* self, val* p0) {
self->attrs[COLOR_collect_super_sends__CollectSuperSends___64dres].val = p0; /* @res on <self:CollectSuperSends> */
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#res= for (self: Object, ArraySet[MMethodDef]) */
void VIRTUAL_collect_super_sends__CollectSuperSends__res_61d(val* self, val* p0) {
collect_super_sends__CollectSuperSends__res_61d(self, p0);
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#mpropdef for (self: CollectSuperSends): nullable MMethodDef */
val* collect_super_sends__CollectSuperSends__mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_collect_super_sends__CollectSuperSends___64dmpropdef].val; /* @mpropdef on <self:CollectSuperSends> */
var = var1;
RET_LABEL:;
return var;
}
/* method collect_super_sends#CollectSuperSends#mpropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_collect_super_sends__CollectSuperSends__mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = collect_super_sends__CollectSuperSends__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method collect_super_sends#CollectSuperSends#mpropdef= for (self: CollectSuperSends, nullable MMethodDef) */
void collect_super_sends__CollectSuperSends__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_collect_super_sends__CollectSuperSends___64dmpropdef].val = p0; /* @mpropdef on <self:CollectSuperSends> */
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#mpropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_collect_super_sends__CollectSuperSends__mpropdef_61d(val* self, val* p0) {
collect_super_sends__CollectSuperSends__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#init for (self: CollectSuperSends, ModelBuilder) */
void collect_super_sends__CollectSuperSends__init(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:CollectSuperSends>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_collect_super_sends__CollectSuperSends__modelbuilder_61d]))(self, var_modelbuilder) /* modelbuilder= on <self:CollectSuperSends>*/;
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#init for (self: Object, ModelBuilder) */
void VIRTUAL_collect_super_sends__CollectSuperSends__init(val* self, val* p0) {
collect_super_sends__CollectSuperSends__init(self, p0);
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#visit for (self: CollectSuperSends, ANode) */
void collect_super_sends__CollectSuperSends__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable MMethodDef */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable MPropDef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var_ /* var : Bool */;
val* var10 /* : nullable MMethod */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable MMethodDef */;
val* var_mprop /* var mprop: nullable MMethodDef */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : ArraySet[MMethodDef] */;
var_n = p0;
/* <var_n:ANode> isa AMethPropdef */
cltype = type_parser_nodes__AMethPropdef.color;
idtype = type_parser_nodes__AMethPropdef.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(self->class->vft[COLOR_collect_super_sends__CollectSuperSends__mpropdef]))(self) /* mpropdef on <self:CollectSuperSends>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/collect_super_sends.nit", 37);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(var_n->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_n) /* mpropdef on <var_n:ANode(AMethPropdef)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_collect_super_sends__CollectSuperSends__mpropdef_61d]))(self, var4) /* mpropdef= on <self:CollectSuperSends>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode(AMethPropdef)>*/;
var5 = NULL;
((void (*)(val*, val*))(self->class->vft[COLOR_collect_super_sends__CollectSuperSends__mpropdef_61d]))(self, var5) /* mpropdef= on <self:CollectSuperSends>*/;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
/* <var_n:ANode> isa ASuperExpr */
cltype8 = type_parser_nodes__ASuperExpr.color;
idtype9 = type_parser_nodes__ASuperExpr.id;
if(cltype8 >= var_n->type->table_size) {
var7 = 0;
} else {
var7 = var_n->type->type_table[cltype8] == idtype9;
}
var_ = var7;
if (var7){
var10 = ((val* (*)(val*))(var_n->class->vft[COLOR_typing__ASuperExpr__mproperty]))(var_n) /* mproperty on <var_n:ANode(ASuperExpr)>*/;
var11 = NULL;
if (var10 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
var6 = var12;
} else {
var6 = var_;
}
if (var6){
var13 = ((val* (*)(val*))(self->class->vft[COLOR_collect_super_sends__CollectSuperSends__mpropdef]))(self) /* mpropdef on <self:CollectSuperSends>*/;
var_mprop = var13;
var14 = NULL;
if (var_mprop == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/collect_super_sends.nit", 46);
show_backtrace(1);
}
var16 = ((val* (*)(val*))(self->class->vft[COLOR_collect_super_sends__CollectSuperSends__res]))(self) /* res on <self:CollectSuperSends>*/;
((void (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var16, var_mprop) /* add on <var16:ArraySet[MMethodDef]>*/;
} else {
}
RET_LABEL:;
}
/* method collect_super_sends#CollectSuperSends#visit for (self: Object, ANode) */
void VIRTUAL_collect_super_sends__CollectSuperSends__visit(val* self, val* p0) {
collect_super_sends__CollectSuperSends__visit(self, p0);
RET_LABEL:;
}
/* method collect_super_sends#ModelBuilder#collect_super_sends for (self: ModelBuilder): Set[MMethodDef] */
val* collect_super_sends__ModelBuilder__collect_super_sends(val* self) {
val* var /* : Set[MMethodDef] */;
val* var1 /* : CollectSuperSends */;
val* var_visitor /* var visitor: CollectSuperSends */;
val* var2 /* : Array[AModule] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var6 /* : ArraySet[MMethodDef] */;
var1 = NEW_collect_super_sends__CollectSuperSends(&type_collect_super_sends__CollectSuperSends);
((void (*)(val*, val*))(var1->class->vft[COLOR_collect_super_sends__CollectSuperSends__init]))(var1, self) /* init on <var1:CollectSuperSends>*/;
var_visitor = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__nmodules]))(self) /* nmodules on <self:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[AModule]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_nmodule = var5;
((void (*)(val*, val*))(var_visitor->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_visitor, var_nmodule) /* enter_visit on <var_visitor:CollectSuperSends>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var6 = ((val* (*)(val*))(var_visitor->class->vft[COLOR_collect_super_sends__CollectSuperSends__res]))(var_visitor) /* res on <var_visitor:CollectSuperSends>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method collect_super_sends#ModelBuilder#collect_super_sends for (self: Object): Set[MMethodDef] */
val* VIRTUAL_collect_super_sends__ModelBuilder__collect_super_sends(val* self) {
val* var /* : Set[MMethodDef] */;
val* var1 /* : Set[MMethodDef] */;
var1 = collect_super_sends__ModelBuilder__collect_super_sends(self);
var = var1;
RET_LABEL:;
return var;
}
