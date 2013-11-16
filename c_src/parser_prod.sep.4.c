#include "parser_prod.sep.0.h"
/* method parser_prod#AInitExpr#visit_all for (self: AInitExpr, Visitor) */
void parser_prod__AInitExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwinit */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8075);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwinit", "src/parser/parser_prod.nit", 8076);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8077);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AInitExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInitExpr__visit_all(val* self, val* p0) {
parser_prod__AInitExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraExpr#empty_init for (self: ABraExpr) */
void parser_prod__ABraExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABraExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABraExpr__empty_init(val* self) {
parser_prod__ABraExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: ABraExpr, nullable AExpr, nullable AExprs, Collection[Object]) */
void parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_closure_defs /* var n_closure_defs: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AClosureDef] */;
var_n_expr = p0;
var_n_args = p1;
var_n_closure_defs = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraExpr__empty_init]))(self) /* empty_init on <self:ABraExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8090);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8091);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8092);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8093);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
var = ((val* (*)(val*))(var_n_closure_defs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_closure_defs) /* iterator on <var_n_closure_defs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AClosureDef */
cltype = type_parser_nodes__AClosureDef.color;
idtype = type_parser_nodes__AClosureDef.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8095);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ABraExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8096);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AClosureDef]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AClosureDef)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: Object, nullable AExpr, nullable AExprs, Collection[Object]) */
void VIRTUAL_parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABraExpr__init_abraexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ABraExpr#replace_child for (self: ABraExpr, ANode, nullable ANode) */
void parser_prod__ABraExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExprs */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Range[Int] */;
long var13 /* : Int */;
val* var14 /* : ANodes[AClosureDef] */;
long var15 /* : Int */;
val* var16 /* : Discrete */;
val* var17 /* : Discrete */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
long var_i /* var i: Int */;
long var21 /* : Int */;
val* var22 /* : ANodes[AClosureDef] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : ANodes[AClosureDef] */;
val* var31 /* : ANodes[AClosureDef] */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8103);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExpr>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8106);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABraExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8109);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8113);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExprs>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype10 = type_parser_nodes__AExprs.color;
idtype11 = type_parser_nodes__AExprs.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8116);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_new_child; /* _n_args on <self:ABraExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8119);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = NEW_range__Range(&type_range__Rangekernel__Int);
var13 = 0;
var14 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ABraExpr> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8123);
exit(1);
}
var15 = ((long (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__length]))(var14) /* length on <var14:ANodes[AClosureDef]>*/;
var16 = BOX_kernel__Int(var13); /* autobox from Int to Discrete */
var17 = BOX_kernel__Int(var15); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_range__Range__without_last]))(var12, var16, var17) /* without_last on <var12:Range[Int]>*/;
CHECK_NEW_range__Range(var12);
var18 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Range[Int]>*/;
for(;;) {
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
if(!var19) break;
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
var21 = ((struct instance_kernel__Int*)var20)->value; /* autounbox from nullable Object to Int */;
var_i = var21;
var22 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ABraExpr> */
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8124);
exit(1);
}
var23 = ((val* (*)(val*, long))(var22->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var22, var_i) /* [] on <var22:ANodes[AClosureDef]>*/;
var24 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_old_child) /* == on <var23:nullable Object(AClosureDef)>*/;
if (var24){
var25 = NULL;
if (var_new_child == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
/* <var_new_child:nullable ANode(ANode)> isa AClosureDef */
cltype28 = type_parser_nodes__AClosureDef.color;
idtype29 = type_parser_nodes__AClosureDef.id;
if(cltype28 >= var_new_child->type->table_size) {
var27 = 0;
} else {
var27 = var_new_child->type->type_table[cltype28] == idtype29;
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8126);
exit(1);
}
var30 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ABraExpr> */
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8127);
exit(1);
}
((void (*)(val*, long, val*))(var30->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var30, var_i, var_new_child) /* []= on <var30:ANodes[AClosureDef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AClosureDef)>*/;
} else {
var31 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ABraExpr> */
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8130);
exit(1);
}
((void (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var31, var_i) /* remove_at on <var31:ANodes[AClosureDef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ABraExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_expr= for (self: ABraExpr, AExpr) */
void parser_prod__ABraExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABraExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_args= for (self: ABraExpr, AExprs) */
void parser_prod__ABraExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ABraExpr__n_args_61d(val* self, val* p0) {
parser_prod__ABraExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraExpr#visit_all for (self: ABraExpr, Visitor) */
void parser_prod__ABraExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : ANodes[AClosureDef] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_n /* var n: AClosureDef */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8151);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8152);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ABraExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8153);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:ANodes[AClosureDef]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_n = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ABraExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraExpr__visit_all(val* self, val* p0) {
parser_prod__ABraExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#empty_init for (self: ABraAssignExpr) */
void parser_prod__ABraAssignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABraAssignExpr__empty_init(val* self) {
parser_prod__ABraAssignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#init_abraassignexpr for (self: ABraAssignExpr, nullable AExpr, nullable AExprs, nullable TAssign, nullable AExpr) */
void parser_prod__ABraAssignExpr__init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_expr = p0;
var_n_args = p1;
var_n_assign = p2;
var_n_value = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraAssignExpr__empty_init]))(self) /* empty_init on <self:ABraAssignExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8169);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraAssignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8170);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8171);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraAssignExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8172);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8173);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ABraAssignExpr> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8174);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8175);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraAssignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8176);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#init_abraassignexpr for (self: Object, nullable AExpr, nullable AExprs, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__ABraAssignExpr__init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ABraAssignExpr__init_abraassignexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#replace_child for (self: ABraAssignExpr, ANode, nullable ANode) */
void parser_prod__ABraAssignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExprs */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : TAssign */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8181);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExpr>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8184);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8187);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8191);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExprs>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype10 = type_parser_nodes__AExprs.color;
idtype11 = type_parser_nodes__AExprs.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8194);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_new_child; /* _n_args on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8197);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 8201);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TAssign>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAssign */
cltype17 = type_parser_nodes__TAssign.color;
idtype18 = type_parser_nodes__TAssign.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8204);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_new_child; /* _n_assign on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8207);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8211);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:AExpr>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype24 = type_parser_nodes__AExpr.color;
idtype25 = type_parser_nodes__AExpr.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8214);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_new_child; /* _n_value on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8217);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraAssignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_expr= for (self: ABraAssignExpr, AExpr) */
void parser_prod__ABraAssignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_args= for (self: ABraAssignExpr, AExprs) */
void parser_prod__ABraAssignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_assign= for (self: ABraAssignExpr, TAssign) */
void parser_prod__ABraAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ABraAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAssign>*/;
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_value= for (self: ABraAssignExpr, AExpr) */
void parser_prod__ABraAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#visit_all for (self: ABraAssignExpr, Visitor) */
void parser_prod__ABraAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8247);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8248);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 8249);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8250);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraAssignExpr__visit_all(val* self, val* p0) {
parser_prod__ABraAssignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#empty_init for (self: ABraReassignExpr) */
void parser_prod__ABraReassignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABraReassignExpr__empty_init(val* self) {
parser_prod__ABraReassignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#init_abrareassignexpr for (self: ABraReassignExpr, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void parser_prod__ABraReassignExpr__init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_expr = p0;
var_n_args = p1;
var_n_assign_op = p2;
var_n_value = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraReassignExpr__empty_init]))(self) /* empty_init on <self:ABraReassignExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8264);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8265);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8266);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8267);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8268);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8269);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign_op->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign_op, self) /* parent= on <var_n_assign_op:nullable AAssignOp>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8270);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8271);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#init_abrareassignexpr for (self: Object, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__ABraReassignExpr__init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ABraReassignExpr__init_abrareassignexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#replace_child for (self: ABraReassignExpr, ANode, nullable ANode) */
void parser_prod__ABraReassignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExprs */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAssignOp */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8276);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExpr>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8279);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8282);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8286);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExprs>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype10 = type_parser_nodes__AExprs.color;
idtype11 = type_parser_nodes__AExprs.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8289);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_new_child; /* _n_args on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8292);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 8296);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AAssignOp>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAssignOp */
cltype17 = type_parser_nodes__AAssignOp.color;
idtype18 = type_parser_nodes__AAssignOp.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8299);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_new_child; /* _n_assign_op on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8302);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8306);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:AExpr>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype24 = type_parser_nodes__AExpr.color;
idtype25 = type_parser_nodes__AExpr.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8309);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_new_child; /* _n_value on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8312);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraReassignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_expr= for (self: ABraReassignExpr, AExpr) */
void parser_prod__ABraReassignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_args= for (self: ABraReassignExpr, AExprs) */
void parser_prod__ABraReassignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_assign_op= for (self: ABraReassignExpr, AAssignOp) */
void parser_prod__ABraReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ABraReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AAssignOp>*/;
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_assign_op_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_value= for (self: ABraReassignExpr, AExpr) */
void parser_prod__ABraReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: ABraReassignExpr, Visitor) */
void parser_prod__ABraReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8342);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8343);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 8344);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8345);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraReassignExpr__visit_all(val* self, val* p0) {
parser_prod__ABraReassignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#empty_init for (self: AClosureCallExpr) */
void parser_prod__AClosureCallExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AClosureCallExpr__empty_init(val* self) {
parser_prod__AClosureCallExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#init_aclosurecallexpr for (self: AClosureCallExpr, nullable TId, nullable AExprs, Collection[Object]) */
void parser_prod__AClosureCallExpr__init_aclosurecallexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_closure_defs /* var n_closure_defs: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AClosureDef] */;
var_n_id = p0;
var_n_args = p1;
var_n_closure_defs = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AClosureCallExpr__empty_init]))(self) /* empty_init on <self:AClosureCallExpr>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8358);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_id].val = var_n_id; /* _n_id on <self:AClosureCallExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8359);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8360);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_args].val = var_n_args; /* _n_args on <self:AClosureCallExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8361);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
var = ((val* (*)(val*))(var_n_closure_defs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_closure_defs) /* iterator on <var_n_closure_defs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AClosureDef */
cltype = type_parser_nodes__AClosureDef.color;
idtype = type_parser_nodes__AClosureDef.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8363);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val; /* _n_closure_defs on <self:AClosureCallExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8364);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AClosureDef]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AClosureDef)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#init_aclosurecallexpr for (self: Object, nullable TId, nullable AExprs, Collection[Object]) */
void VIRTUAL_parser_prod__AClosureCallExpr__init_aclosurecallexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AClosureCallExpr__init_aclosurecallexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#replace_child for (self: AClosureCallExpr, ANode, nullable ANode) */
void parser_prod__AClosureCallExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExprs */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Range[Int] */;
long var13 /* : Int */;
val* var14 /* : ANodes[AClosureDef] */;
long var15 /* : Int */;
val* var16 /* : Discrete */;
val* var17 /* : Discrete */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
long var_i /* var i: Int */;
long var21 /* : Int */;
val* var22 /* : ANodes[AClosureDef] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : ANodes[AClosureDef] */;
val* var31 /* : ANodes[AClosureDef] */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_id].val; /* _n_id on <self:AClosureCallExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8371);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TId>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8374);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_id].val = var_new_child; /* _n_id on <self:AClosureCallExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8377);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_args].val; /* _n_args on <self:AClosureCallExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8381);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExprs>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype10 = type_parser_nodes__AExprs.color;
idtype11 = type_parser_nodes__AExprs.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8384);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_args].val = var_new_child; /* _n_args on <self:AClosureCallExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8387);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = NEW_range__Range(&type_range__Rangekernel__Int);
var13 = 0;
var14 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val; /* _n_closure_defs on <self:AClosureCallExpr> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8391);
exit(1);
}
var15 = ((long (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__length]))(var14) /* length on <var14:ANodes[AClosureDef]>*/;
var16 = BOX_kernel__Int(var13); /* autobox from Int to Discrete */
var17 = BOX_kernel__Int(var15); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_range__Range__without_last]))(var12, var16, var17) /* without_last on <var12:Range[Int]>*/;
CHECK_NEW_range__Range(var12);
var18 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Range[Int]>*/;
for(;;) {
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
if(!var19) break;
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
var21 = ((struct instance_kernel__Int*)var20)->value; /* autounbox from nullable Object to Int */;
var_i = var21;
var22 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val; /* _n_closure_defs on <self:AClosureCallExpr> */
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8392);
exit(1);
}
var23 = ((val* (*)(val*, long))(var22->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var22, var_i) /* [] on <var22:ANodes[AClosureDef]>*/;
var24 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_old_child) /* == on <var23:nullable Object(AClosureDef)>*/;
if (var24){
var25 = NULL;
if (var_new_child == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
/* <var_new_child:nullable ANode(ANode)> isa AClosureDef */
cltype28 = type_parser_nodes__AClosureDef.color;
idtype29 = type_parser_nodes__AClosureDef.id;
if(cltype28 >= var_new_child->type->table_size) {
var27 = 0;
} else {
var27 = var_new_child->type->type_table[cltype28] == idtype29;
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8394);
exit(1);
}
var30 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val; /* _n_closure_defs on <self:AClosureCallExpr> */
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8395);
exit(1);
}
((void (*)(val*, long, val*))(var30->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var30, var_i, var_new_child) /* []= on <var30:ANodes[AClosureDef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AClosureDef)>*/;
} else {
var31 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val; /* _n_closure_defs on <self:AClosureCallExpr> */
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8398);
exit(1);
}
((void (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var31, var_i) /* remove_at on <var31:ANodes[AClosureDef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AClosureCallExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AClosureCallExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#n_id= for (self: AClosureCallExpr, TId) */
void parser_prod__AClosureCallExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_id].val = var_node; /* _n_id on <self:AClosureCallExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AClosureCallExpr__n_id_61d(val* self, val* p0) {
parser_prod__AClosureCallExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#n_args= for (self: AClosureCallExpr, AExprs) */
void parser_prod__AClosureCallExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_args].val = var_node; /* _n_args on <self:AClosureCallExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__AClosureCallExpr__n_args_61d(val* self, val* p0) {
parser_prod__AClosureCallExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#visit_all for (self: AClosureCallExpr, Visitor) */
void parser_prod__AClosureCallExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : AExprs */;
val* var2 /* : ANodes[AClosureDef] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_n /* var n: AClosureDef */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_id].val; /* _n_id on <self:AClosureCallExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8419);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_args].val; /* _n_args on <self:AClosureCallExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8420);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val; /* _n_closure_defs on <self:AClosureCallExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 8421);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:ANodes[AClosureDef]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_n = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AClosureCallExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AClosureCallExpr__visit_all(val* self, val* p0) {
parser_prod__AClosureCallExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarExpr#empty_init for (self: AVarExpr) */
void parser_prod__AVarExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AVarExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AVarExpr__empty_init(val* self) {
parser_prod__AVarExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: AVarExpr, nullable TId) */
void parser_prod__AVarExpr__init_avarexpr(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AVarExpr__empty_init]))(self) /* empty_init on <self:AVarExpr>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8434);
exit(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8435);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AVarExpr__init_avarexpr(val* self, val* p0) {
parser_prod__AVarExpr__init_avarexpr(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarExpr#replace_child for (self: AVarExpr, ANode, nullable ANode) */
void parser_prod__AVarExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8440);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TId>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8443);
exit(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_new_child; /* _n_id on <self:AVarExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8446);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AVarExpr#n_id= for (self: AVarExpr, TId) */
void parser_prod__AVarExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AVarExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVarExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVarExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarExpr#visit_all for (self: AVarExpr, Visitor) */
void parser_prod__AVarExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8461);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AVarExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarExpr__visit_all(val* self, val* p0) {
parser_prod__AVarExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#empty_init for (self: AVarAssignExpr) */
void parser_prod__AVarAssignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AVarAssignExpr__empty_init(val* self) {
parser_prod__AVarAssignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#init_avarassignexpr for (self: AVarAssignExpr, nullable TId, nullable TAssign, nullable AExpr) */
void parser_prod__AVarAssignExpr__init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_id = p0;
var_n_assign = p1;
var_n_value = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AVarAssignExpr__empty_init]))(self) /* empty_init on <self:AVarAssignExpr>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8474);
exit(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8475);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8476);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8477);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8478);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8479);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#init_avarassignexpr for (self: Object, nullable TId, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__AVarAssignExpr__init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AVarAssignExpr__init_avarassignexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#replace_child for (self: AVarAssignExpr, ANode, nullable ANode) */
void parser_prod__AVarAssignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TAssign */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8484);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TId>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8487);
exit(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_new_child; /* _n_id on <self:AVarAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8490);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 8494);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TAssign>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAssign */
cltype10 = type_parser_nodes__TAssign.color;
idtype11 = type_parser_nodes__TAssign.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8497);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_new_child; /* _n_assign on <self:AVarAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8500);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8504);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExpr>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype17 = type_parser_nodes__AExpr.color;
idtype18 = type_parser_nodes__AExpr.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8507);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_new_child; /* _n_value on <self:AVarAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8510);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarAssignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_id= for (self: AVarAssignExpr, TId) */
void parser_prod__AVarAssignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVarAssignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVarAssignExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_assign= for (self: AVarAssignExpr, TAssign) */
void parser_prod__AVarAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AVarAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAssign>*/;
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AVarAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AVarAssignExpr__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_value= for (self: AVarAssignExpr, AExpr) */
void parser_prod__AVarAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AVarAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AVarAssignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#visit_all for (self: AVarAssignExpr, Visitor) */
void parser_prod__AVarAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8535);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 8536);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8537);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarAssignExpr__visit_all(val* self, val* p0) {
parser_prod__AVarAssignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#empty_init for (self: AVarReassignExpr) */
void parser_prod__AVarReassignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AVarReassignExpr__empty_init(val* self) {
parser_prod__AVarReassignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#init_avarreassignexpr for (self: AVarReassignExpr, nullable TId, nullable AAssignOp, nullable AExpr) */
void parser_prod__AVarReassignExpr__init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_id = p0;
var_n_assign_op = p1;
var_n_value = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AVarReassignExpr__empty_init]))(self) /* empty_init on <self:AVarReassignExpr>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8550);
exit(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8551);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8552);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8553);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign_op->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign_op, self) /* parent= on <var_n_assign_op:nullable AAssignOp>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8554);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8555);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#init_avarreassignexpr for (self: Object, nullable TId, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__AVarReassignExpr__init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AVarReassignExpr__init_avarreassignexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#replace_child for (self: AVarReassignExpr, ANode, nullable ANode) */
void parser_prod__AVarReassignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AAssignOp */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8560);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TId>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8563);
exit(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_new_child; /* _n_id on <self:AVarReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8566);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 8570);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AAssignOp>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAssignOp */
cltype10 = type_parser_nodes__AAssignOp.color;
idtype11 = type_parser_nodes__AAssignOp.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8573);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_new_child; /* _n_assign_op on <self:AVarReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8576);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8580);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExpr>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype17 = type_parser_nodes__AExpr.color;
idtype18 = type_parser_nodes__AExpr.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8583);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_new_child; /* _n_value on <self:AVarReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8586);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarReassignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_id= for (self: AVarReassignExpr, TId) */
void parser_prod__AVarReassignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVarReassignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVarReassignExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_assign_op= for (self: AVarReassignExpr, AAssignOp) */
void parser_prod__AVarReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AVarReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AAssignOp>*/;
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__AVarReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__AVarReassignExpr__n_assign_op_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_value= for (self: AVarReassignExpr, AExpr) */
void parser_prod__AVarReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AVarReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AVarReassignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#visit_all for (self: AVarReassignExpr, Visitor) */
void parser_prod__AVarReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : AAssignOp */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 8611);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 8612);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 8613);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarReassignExpr__visit_all(val* self, val* p0) {
parser_prod__AVarReassignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#empty_init for (self: ARangeExpr) */
void parser_prod__ARangeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ARangeExpr__empty_init(val* self) {
parser_prod__ARangeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#init_arangeexpr for (self: ARangeExpr, nullable AExpr, nullable AExpr, nullable AAnnotations) */
void parser_prod__ARangeExpr__init_arangeexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_expr = p0;
var_n_expr2 = p1;
var_n_annotations = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ARangeExpr__empty_init]))(self) /* empty_init on <self:ARangeExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8626);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ARangeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8627);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8628);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ARangeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8629);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ARangeExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#init_arangeexpr for (self: Object, nullable AExpr, nullable AExpr, nullable AAnnotations) */
void VIRTUAL_parser_prod__ARangeExpr__init_arangeexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ARangeExpr__init_arangeexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#replace_child for (self: ARangeExpr, ANode, nullable ANode) */
void parser_prod__ARangeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : nullable AAnnotations */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8638);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExpr>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8641);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_new_child; /* _n_expr on <self:ARangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8644);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 8648);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExpr>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype10 = type_parser_nodes__AExpr.color;
idtype11 = type_parser_nodes__AExpr.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8651);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ARangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8654);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ARangeExpr> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:nullable AAnnotations>*/;
}
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype17 = type_parser_nodes__AAnnotations.color;
idtype18 = type_parser_nodes__AAnnotations.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8661);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ARangeExpr> */
} else {
var19 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var19; /* _n_annotations on <self:ARangeExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ARangeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ARangeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_expr= for (self: ARangeExpr, AExpr) */
void parser_prod__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ARangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ARangeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ARangeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_expr2= for (self: ARangeExpr, AExpr) */
void parser_prod__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ARangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ARangeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ARangeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_annotations= for (self: ARangeExpr, nullable AAnnotations) */
void parser_prod__ARangeExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ARangeExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ARangeExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ARangeExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#visit_all for (self: ARangeExpr, Visitor) */
void parser_prod__ARangeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AAnnotations */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8691);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 8692);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ARangeExpr> */
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ARangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8694);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ARangeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ARangeExpr__visit_all(val* self, val* p0) {
parser_prod__ARangeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#empty_init for (self: ACrangeExpr) */
void parser_prod__ACrangeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ACrangeExpr__empty_init(val* self) {
parser_prod__ACrangeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: ACrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void parser_prod__ACrangeExpr__init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ACrangeExpr__empty_init]))(self) /* empty_init on <self:ACrangeExpr>*/;
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8710);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8711);
exit(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8712);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8713);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8714);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8715);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8716);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8717);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cbra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cbra, self) /* parent= on <var_n_cbra:nullable TCbra>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACrangeExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: Object, nullable TObra, nullable AExpr, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACrangeExpr__init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__ACrangeExpr__init_acrangeexpr(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#replace_child for (self: ACrangeExpr, ANode, nullable ANode) */
void parser_prod__ACrangeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : TCbra */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : nullable AAnnotations */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_prod.nit", 8726);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TObra>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8729);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_new_child; /* _n_obra on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8732);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8736);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExpr>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype10 = type_parser_nodes__AExpr.color;
idtype11 = type_parser_nodes__AExpr.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8739);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_new_child; /* _n_expr on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8742);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 8746);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExpr>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype17 = type_parser_nodes__AExpr.color;
idtype18 = type_parser_nodes__AExpr.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8749);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8752);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_prod.nit", 8756);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:TCbra>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCbra */
cltype24 = type_parser_nodes__TCbra.color;
idtype25 = type_parser_nodes__TCbra.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8759);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_new_child; /* _n_cbra on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8762);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
if (var26 == NULL) {
var27 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:nullable AAnnotations>*/;
}
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype31 = type_parser_nodes__AAnnotations.color;
idtype32 = type_parser_nodes__AAnnotations.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8769);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ACrangeExpr> */
} else {
var33 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var33; /* _n_annotations on <self:ACrangeExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACrangeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACrangeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_obra= for (self: ACrangeExpr, TObra) */
void parser_prod__ACrangeExpr__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_node; /* _n_obra on <self:ACrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TObra>*/;
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ACrangeExpr__n_obra_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr= for (self: ACrangeExpr, AExpr) */
void parser_prod__ACrangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ACrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACrangeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr2= for (self: ACrangeExpr, AExpr) */
void parser_prod__ACrangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACrangeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_cbra= for (self: ACrangeExpr, TCbra) */
void parser_prod__ACrangeExpr__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:ACrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCbra>*/;
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ACrangeExpr__n_cbra_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_annotations= for (self: ACrangeExpr, nullable AAnnotations) */
void parser_prod__ACrangeExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACrangeExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACrangeExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#visit_all for (self: ACrangeExpr, Visitor) */
void parser_prod__ACrangeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TCbra */;
val* var4 /* : nullable AAnnotations */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_prod.nit", 8809);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8810);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 8811);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_prod.nit", 8812);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8814);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACrangeExpr__visit_all(val* self, val* p0) {
parser_prod__ACrangeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#empty_init for (self: AOrangeExpr) */
void parser_prod__AOrangeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AOrangeExpr__empty_init(val* self) {
parser_prod__AOrangeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#init_aorangeexpr for (self: AOrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TObra, nullable AAnnotations) */
void parser_prod__AOrangeExpr__init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TObra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AOrangeExpr__empty_init]))(self) /* empty_init on <self:AOrangeExpr>*/;
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8830);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8831);
exit(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8832);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8833);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8834);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8835);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8836);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8837);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cbra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cbra, self) /* parent= on <var_n_cbra:nullable TObra>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOrangeExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#init_aorangeexpr for (self: Object, nullable TObra, nullable AExpr, nullable AExpr, nullable TObra, nullable AAnnotations) */
void VIRTUAL_parser_prod__AOrangeExpr__init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AOrangeExpr__init_aorangeexpr(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#replace_child for (self: AOrangeExpr, ANode, nullable ANode) */
void parser_prod__AOrangeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : TObra */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : nullable AAnnotations */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_prod.nit", 8846);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TObra>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8849);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_new_child; /* _n_obra on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8852);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8856);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExpr>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype10 = type_parser_nodes__AExpr.color;
idtype11 = type_parser_nodes__AExpr.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8859);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_new_child; /* _n_expr on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8862);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 8866);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExpr>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype17 = type_parser_nodes__AExpr.color;
idtype18 = type_parser_nodes__AExpr.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8869);
exit(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8872);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_prod.nit", 8876);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:TObra>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TObra */
cltype24 = type_parser_nodes__TObra.color;
idtype25 = type_parser_nodes__TObra.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8879);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_new_child; /* _n_cbra on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8882);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var26 == NULL) {
var27 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:nullable AAnnotations>*/;
}
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype31 = type_parser_nodes__AAnnotations.color;
idtype32 = type_parser_nodes__AAnnotations.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8889);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AOrangeExpr> */
} else {
var33 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var33; /* _n_annotations on <self:AOrangeExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOrangeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOrangeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_obra= for (self: AOrangeExpr, TObra) */
void parser_prod__AOrangeExpr__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_node; /* _n_obra on <self:AOrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TObra>*/;
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__AOrangeExpr__n_obra_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr= for (self: AOrangeExpr, AExpr) */
void parser_prod__AOrangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:AOrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrangeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr2= for (self: AOrangeExpr, AExpr) */
void parser_prod__AOrangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrangeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_cbra= for (self: AOrangeExpr, TObra) */
void parser_prod__AOrangeExpr__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:AOrangeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TObra>*/;
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_cbra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__AOrangeExpr__n_cbra_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_annotations= for (self: AOrangeExpr, nullable AAnnotations) */
void parser_prod__AOrangeExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOrangeExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AOrangeExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#visit_all for (self: AOrangeExpr, Visitor) */
void parser_prod__AOrangeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TObra */;
val* var4 /* : nullable AAnnotations */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_prod.nit", 8929);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8930);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 8931);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_prod.nit", 8932);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8934);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOrangeExpr__visit_all(val* self, val* p0) {
parser_prod__AOrangeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#empty_init for (self: AArrayExpr) */
void parser_prod__AArrayExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AArrayExpr__empty_init(val* self) {
parser_prod__AArrayExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#init_aarrayexpr for (self: AArrayExpr, nullable AExprs, nullable AAnnotations) */
void parser_prod__AArrayExpr__init_aarrayexpr(val* self, val* p0, val* p1) {
val* var_n_exprs /* var n_exprs: nullable AExprs */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_exprs = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AArrayExpr__empty_init]))(self) /* empty_init on <self:AArrayExpr>*/;
if (var_n_exprs == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8947);
exit(1);
}
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_n_exprs; /* _n_exprs on <self:AArrayExpr> */
if (var_n_exprs == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8948);
exit(1);
} else {
((void (*)(val*, val*))(var_n_exprs->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_exprs, self) /* parent= on <var_n_exprs:nullable AExprs>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AArrayExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#init_aarrayexpr for (self: Object, nullable AExprs, nullable AAnnotations) */
void VIRTUAL_parser_prod__AArrayExpr__init_aarrayexpr(val* self, val* p0, val* p1) {
parser_prod__AArrayExpr__init_aarrayexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#replace_child for (self: AArrayExpr, ANode, nullable ANode) */
void parser_prod__AArrayExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExprs */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 8957);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExprs>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype = type_parser_nodes__AExprs.color;
idtype = type_parser_nodes__AExprs.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8960);
exit(1);
}
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_new_child; /* _n_exprs on <self:AArrayExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8963);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8970);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AArrayExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:AArrayExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AArrayExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AArrayExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_exprs= for (self: AArrayExpr, AExprs) */
void parser_prod__AArrayExpr__n_exprs_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_node; /* _n_exprs on <self:AArrayExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_exprs= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__AArrayExpr__n_exprs_61d(val* self, val* p0) {
parser_prod__AArrayExpr__n_exprs_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_annotations= for (self: AArrayExpr, nullable AAnnotations) */
void parser_prod__AArrayExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AArrayExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AArrayExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AArrayExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#visit_all for (self: AArrayExpr, Visitor) */
void parser_prod__AArrayExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExprs */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 8995);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8997);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AArrayExpr__visit_all(val* self, val* p0) {
parser_prod__AArrayExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#empty_init for (self: ASelfExpr) */
void parser_prod__ASelfExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASelfExpr__empty_init(val* self) {
parser_prod__ASelfExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#init_aselfexpr for (self: ASelfExpr, nullable TKwself, nullable AAnnotations) */
void parser_prod__ASelfExpr__init_aselfexpr(val* self, val* p0, val* p1) {
val* var_n_kwself /* var n_kwself: nullable TKwself */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwself = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASelfExpr__empty_init]))(self) /* empty_init on <self:ASelfExpr>*/;
if (var_n_kwself == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9010);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9011);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwself->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwself, self) /* parent= on <var_n_kwself:nullable TKwself>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASelfExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#init_aselfexpr for (self: Object, nullable TKwself, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASelfExpr__init_aselfexpr(val* self, val* p0, val* p1) {
parser_prod__ASelfExpr__init_aselfexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#replace_child for (self: ASelfExpr, ANode, nullable ANode) */
void parser_prod__ASelfExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwself */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwself>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwself */
cltype = type_parser_nodes__TKwself.color;
idtype = type_parser_nodes__TKwself.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9023);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_new_child; /* _n_kwself on <self:ASelfExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9026);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9033);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ASelfExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:ASelfExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASelfExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASelfExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_kwself= for (self: ASelfExpr, nullable TKwself) */
void parser_prod__ASelfExpr__n_kwself_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwself */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_node; /* _n_kwself on <self:ASelfExpr> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9045);
exit(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwself>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_kwself= for (self: Object, nullable TKwself) */
void VIRTUAL_parser_prod__ASelfExpr__n_kwself_61d(val* self, val* p0) {
parser_prod__ASelfExpr__n_kwself_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_annotations= for (self: ASelfExpr, nullable AAnnotations) */
void parser_prod__ASelfExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASelfExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ASelfExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#visit_all for (self: ASelfExpr, Visitor) */
void parser_prod__ASelfExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwself */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9060);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASelfExpr__visit_all(val* self, val* p0) {
parser_prod__ASelfExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#empty_init for (self: AImplicitSelfExpr) */
void parser_prod__AImplicitSelfExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AImplicitSelfExpr__empty_init(val* self) {
parser_prod__AImplicitSelfExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr for (self: AImplicitSelfExpr) */
void parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AImplicitSelfExpr__empty_init]))(self) /* empty_init on <self:AImplicitSelfExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr for (self: Object) */
void VIRTUAL_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr(val* self) {
parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr(self);
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#replace_child for (self: AImplicitSelfExpr, ANode, nullable ANode) */
void parser_prod__AImplicitSelfExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AImplicitSelfExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AImplicitSelfExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#visit_all for (self: AImplicitSelfExpr, Visitor) */
void parser_prod__AImplicitSelfExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AImplicitSelfExpr__visit_all(val* self, val* p0) {
parser_prod__AImplicitSelfExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#empty_init for (self: ATrueExpr) */
void parser_prod__ATrueExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ATrueExpr__empty_init(val* self) {
parser_prod__ATrueExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#init_atrueexpr for (self: ATrueExpr, nullable TKwtrue, nullable AAnnotations) */
void parser_prod__ATrueExpr__init_atrueexpr(val* self, val* p0, val* p1) {
val* var_n_kwtrue /* var n_kwtrue: nullable TKwtrue */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwtrue = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ATrueExpr__empty_init]))(self) /* empty_init on <self:ATrueExpr>*/;
if (var_n_kwtrue == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9091);
exit(1);
}
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9092);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwtrue->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwtrue, self) /* parent= on <var_n_kwtrue:nullable TKwtrue>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATrueExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#init_atrueexpr for (self: Object, nullable TKwtrue, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATrueExpr__init_atrueexpr(val* self, val* p0, val* p1) {
parser_prod__ATrueExpr__init_atrueexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#replace_child for (self: ATrueExpr, ANode, nullable ANode) */
void parser_prod__ATrueExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwtrue */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwtrue", "src/parser/parser_prod.nit", 9101);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwtrue>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwtrue */
cltype = type_parser_nodes__TKwtrue.color;
idtype = type_parser_nodes__TKwtrue.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9104);
exit(1);
}
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_new_child; /* _n_kwtrue on <self:ATrueExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9107);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9114);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ATrueExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:ATrueExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATrueExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATrueExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void parser_prod__ATrueExpr__n_kwtrue_61d(val* self, val* p0) {
val* var_node /* var node: TKwtrue */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_node; /* _n_kwtrue on <self:ATrueExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwtrue>*/;
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: Object, TKwtrue) */
void VIRTUAL_parser_prod__ATrueExpr__n_kwtrue_61d(val* self, val* p0) {
parser_prod__ATrueExpr__n_kwtrue_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_annotations= for (self: ATrueExpr, nullable AAnnotations) */
void parser_prod__ATrueExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATrueExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATrueExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ATrueExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#visit_all for (self: ATrueExpr, Visitor) */
void parser_prod__ATrueExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwtrue */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwtrue", "src/parser/parser_prod.nit", 9139);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9141);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATrueExpr__visit_all(val* self, val* p0) {
parser_prod__ATrueExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#empty_init for (self: AFalseExpr) */
void parser_prod__AFalseExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AFalseExpr__empty_init(val* self) {
parser_prod__AFalseExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: AFalseExpr, nullable TKwfalse, nullable AAnnotations) */
void parser_prod__AFalseExpr__init_afalseexpr(val* self, val* p0, val* p1) {
val* var_n_kwfalse /* var n_kwfalse: nullable TKwfalse */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwfalse = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AFalseExpr__empty_init]))(self) /* empty_init on <self:AFalseExpr>*/;
if (var_n_kwfalse == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9154);
exit(1);
}
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9155);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwfalse->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwfalse, self) /* parent= on <var_n_kwfalse:nullable TKwfalse>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFalseExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: Object, nullable TKwfalse, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFalseExpr__init_afalseexpr(val* self, val* p0, val* p1) {
parser_prod__AFalseExpr__init_afalseexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: AFalseExpr, ANode, nullable ANode) */
void parser_prod__AFalseExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfalse */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwfalse", "src/parser/parser_prod.nit", 9164);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwfalse>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwfalse */
cltype = type_parser_nodes__TKwfalse.color;
idtype = type_parser_nodes__TKwfalse.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9167);
exit(1);
}
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_new_child; /* _n_kwfalse on <self:AFalseExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9170);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9177);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AFalseExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:AFalseExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFalseExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFalseExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void parser_prod__AFalseExpr__n_kwfalse_61d(val* self, val* p0) {
val* var_node /* var node: TKwfalse */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_node; /* _n_kwfalse on <self:AFalseExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwfalse>*/;
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: Object, TKwfalse) */
void VIRTUAL_parser_prod__AFalseExpr__n_kwfalse_61d(val* self, val* p0) {
parser_prod__AFalseExpr__n_kwfalse_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
void parser_prod__AFalseExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFalseExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFalseExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AFalseExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#visit_all for (self: AFalseExpr, Visitor) */
void parser_prod__AFalseExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwfalse", "src/parser/parser_prod.nit", 9202);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9204);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFalseExpr__visit_all(val* self, val* p0) {
parser_prod__AFalseExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANullExpr#empty_init for (self: ANullExpr) */
void parser_prod__ANullExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ANullExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ANullExpr__empty_init(val* self) {
parser_prod__ANullExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: ANullExpr, nullable TKwnull, nullable AAnnotations) */
void parser_prod__ANullExpr__init_anullexpr(val* self, val* p0, val* p1) {
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwnull = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ANullExpr__empty_init]))(self) /* empty_init on <self:ANullExpr>*/;
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9217);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9218);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwnull->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnull, self) /* parent= on <var_n_kwnull:nullable TKwnull>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ANullExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: Object, nullable TKwnull, nullable AAnnotations) */
void VIRTUAL_parser_prod__ANullExpr__init_anullexpr(val* self, val* p0, val* p1) {
parser_prod__ANullExpr__init_anullexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: ANullExpr, ANode, nullable ANode) */
void parser_prod__ANullExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnull */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnull", "src/parser/parser_prod.nit", 9227);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwnull>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnull */
cltype = type_parser_nodes__TKwnull.color;
idtype = type_parser_nodes__TKwnull.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9230);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_new_child; /* _n_kwnull on <self:ANullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9233);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9240);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ANullExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:ANullExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANullExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANullExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void parser_prod__ANullExpr__n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:ANullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnull>*/;
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: Object, TKwnull) */
void VIRTUAL_parser_prod__ANullExpr__n_kwnull_61d(val* self, val* p0) {
parser_prod__ANullExpr__n_kwnull_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_annotations= for (self: ANullExpr, nullable AAnnotations) */
void parser_prod__ANullExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ANullExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ANullExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ANullExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANullExpr#visit_all for (self: ANullExpr, Visitor) */
void parser_prod__ANullExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnull", "src/parser/parser_prod.nit", 9265);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9267);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANullExpr__visit_all(val* self, val* p0) {
parser_prod__ANullExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIntExpr#empty_init for (self: AIntExpr) */
void parser_prod__AIntExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIntExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIntExpr__empty_init(val* self) {
parser_prod__AIntExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIntExpr#init_aintexpr for (self: AIntExpr, nullable TNumber, nullable AAnnotations) */
void parser_prod__AIntExpr__init_aintexpr(val* self, val* p0, val* p1) {
val* var_n_number /* var n_number: nullable TNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_number = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIntExpr__empty_init]))(self) /* empty_init on <self:AIntExpr>*/;
if (var_n_number == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9280);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = var_n_number; /* _n_number on <self:AIntExpr> */
if (var_n_number == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9281);
exit(1);
} else {
((void (*)(val*, val*))(var_n_number->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_number, self) /* parent= on <var_n_number:nullable TNumber>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AIntExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntExpr#init_aintexpr for (self: Object, nullable TNumber, nullable AAnnotations) */
void VIRTUAL_parser_prod__AIntExpr__init_aintexpr(val* self, val* p0, val* p1) {
parser_prod__AIntExpr__init_aintexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIntExpr#replace_child for (self: AIntExpr, ANode, nullable ANode) */
void parser_prod__AIntExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNumber */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val; /* _n_number on <self:AIntExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_number", "src/parser/parser_prod.nit", 9290);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TNumber>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TNumber */
cltype = type_parser_nodes__TNumber.color;
idtype = type_parser_nodes__TNumber.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9293);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = var_new_child; /* _n_number on <self:AIntExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9296);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9303);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AIntExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:AIntExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIntExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIntExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIntExpr#n_number= for (self: AIntExpr, TNumber) */
void parser_prod__AIntExpr__n_number_61d(val* self, val* p0) {
val* var_node /* var node: TNumber */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = var_node; /* _n_number on <self:AIntExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TNumber>*/;
RET_LABEL:;
}
/* method parser_prod#AIntExpr#n_number= for (self: Object, TNumber) */
void VIRTUAL_parser_prod__AIntExpr__n_number_61d(val* self, val* p0) {
parser_prod__AIntExpr__n_number_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIntExpr#n_annotations= for (self: AIntExpr, nullable AAnnotations) */
void parser_prod__AIntExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AIntExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AIntExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AIntExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIntExpr#visit_all for (self: AIntExpr, Visitor) */
void parser_prod__AIntExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNumber */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val; /* _n_number on <self:AIntExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_number", "src/parser/parser_prod.nit", 9328);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9330);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIntExpr__visit_all(val* self, val* p0) {
parser_prod__AIntExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#empty_init for (self: AFloatExpr) */
void parser_prod__AFloatExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AFloatExpr__empty_init(val* self) {
parser_prod__AFloatExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void parser_prod__AFloatExpr__init_afloatexpr(val* self, val* p0, val* p1) {
val* var_n_float /* var n_float: nullable TFloat */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_float = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AFloatExpr__empty_init]))(self) /* empty_init on <self:AFloatExpr>*/;
if (var_n_float == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9343);
exit(1);
}
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9344);
exit(1);
} else {
((void (*)(val*, val*))(var_n_float->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_float, self) /* parent= on <var_n_float:nullable TFloat>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFloatExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: Object, nullable TFloat, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFloatExpr__init_afloatexpr(val* self, val* p0, val* p1) {
parser_prod__AFloatExpr__init_afloatexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: AFloatExpr, ANode, nullable ANode) */
void parser_prod__AFloatExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TFloat */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_float", "src/parser/parser_prod.nit", 9353);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TFloat>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TFloat */
cltype = type_parser_nodes__TFloat.color;
idtype = type_parser_nodes__TFloat.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9356);
exit(1);
}
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_new_child; /* _n_float on <self:AFloatExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9359);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9366);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AFloatExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:AFloatExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFloatExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFloatExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void parser_prod__AFloatExpr__n_float_61d(val* self, val* p0) {
val* var_node /* var node: TFloat */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_node; /* _n_float on <self:AFloatExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TFloat>*/;
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: Object, TFloat) */
void VIRTUAL_parser_prod__AFloatExpr__n_float_61d(val* self, val* p0) {
parser_prod__AFloatExpr__n_float_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_annotations= for (self: AFloatExpr, nullable AAnnotations) */
void parser_prod__AFloatExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFloatExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFloatExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AFloatExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#visit_all for (self: AFloatExpr, Visitor) */
void parser_prod__AFloatExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_float", "src/parser/parser_prod.nit", 9391);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9393);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFloatExpr__visit_all(val* self, val* p0) {
parser_prod__AFloatExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACharExpr#empty_init for (self: ACharExpr) */
void parser_prod__ACharExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ACharExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ACharExpr__empty_init(val* self) {
parser_prod__ACharExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: ACharExpr, nullable TChar, nullable AAnnotations) */
void parser_prod__ACharExpr__init_acharexpr(val* self, val* p0, val* p1) {
val* var_n_char /* var n_char: nullable TChar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_char = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ACharExpr__empty_init]))(self) /* empty_init on <self:ACharExpr>*/;
if (var_n_char == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9406);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9407);
exit(1);
} else {
((void (*)(val*, val*))(var_n_char->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_char, self) /* parent= on <var_n_char:nullable TChar>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACharExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: Object, nullable TChar, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACharExpr__init_acharexpr(val* self, val* p0, val* p1) {
parser_prod__ACharExpr__init_acharexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: ACharExpr, ANode, nullable ANode) */
void parser_prod__ACharExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TChar */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_char", "src/parser/parser_prod.nit", 9416);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TChar>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TChar */
cltype = type_parser_nodes__TChar.color;
idtype = type_parser_nodes__TChar.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9419);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_new_child; /* _n_char on <self:ACharExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9422);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9429);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ACharExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:ACharExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACharExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACharExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void parser_prod__ACharExpr__n_char_61d(val* self, val* p0) {
val* var_node /* var node: TChar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_node; /* _n_char on <self:ACharExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TChar>*/;
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: Object, TChar) */
void VIRTUAL_parser_prod__ACharExpr__n_char_61d(val* self, val* p0) {
parser_prod__ACharExpr__n_char_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_annotations= for (self: ACharExpr, nullable AAnnotations) */
void parser_prod__ACharExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACharExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACharExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ACharExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACharExpr#visit_all for (self: ACharExpr, Visitor) */
void parser_prod__ACharExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_char", "src/parser/parser_prod.nit", 9454);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9456);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACharExpr__visit_all(val* self, val* p0) {
parser_prod__ACharExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStringExpr#empty_init for (self: AStringExpr) */
void parser_prod__AStringExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStringExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStringExpr__empty_init(val* self) {
parser_prod__AStringExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: AStringExpr, nullable TString, nullable AAnnotations) */
void parser_prod__AStringExpr__init_astringexpr(val* self, val* p0, val* p1) {
val* var_n_string /* var n_string: nullable TString */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_string = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStringExpr__empty_init]))(self) /* empty_init on <self:AStringExpr>*/;
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9469);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9470);
exit(1);
} else {
((void (*)(val*, val*))(var_n_string->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_string, self) /* parent= on <var_n_string:nullable TString>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStringExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: Object, nullable TString, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStringExpr__init_astringexpr(val* self, val* p0, val* p1) {
parser_prod__AStringExpr__init_astringexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: AStringExpr, ANode, nullable ANode) */
void parser_prod__AStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AAnnotations */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9479);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:Token>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TString */
cltype = type_parser_nodes__TString.color;
idtype = type_parser_nodes__TString.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9482);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9485);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AAnnotations>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype10 = type_parser_nodes__AAnnotations.color;
idtype11 = type_parser_nodes__AAnnotations.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9492);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AStringExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var12; /* _n_annotations on <self:AStringExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStringExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: AStringExpr, Token) */
void parser_prod__AStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStringExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AStringExpr__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_annotations= for (self: AStringExpr, nullable AAnnotations) */
void parser_prod__AStringExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStringExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStringExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AStringExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStringExpr#visit_all for (self: AStringExpr, Visitor) */
void parser_prod__AStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9517);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9519);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStringExpr__visit_all(val* self, val* p0) {
parser_prod__AStringExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#empty_init for (self: AStartStringExpr) */
void parser_prod__AStartStringExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStartStringExpr__empty_init(val* self) {
parser_prod__AStartStringExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: AStartStringExpr, nullable TStartString) */
void parser_prod__AStartStringExpr__init_astartstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TStartString */;
var_n_string = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStartStringExpr__empty_init]))(self) /* empty_init on <self:AStartStringExpr>*/;
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9531);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9532);
exit(1);
} else {
((void (*)(val*, val*))(var_n_string->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_string, self) /* parent= on <var_n_string:nullable TStartString>*/;
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: Object, nullable TStartString) */
void VIRTUAL_parser_prod__AStartStringExpr__init_astartstringexpr(val* self, val* p0) {
parser_prod__AStartStringExpr__init_astartstringexpr(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: AStartStringExpr, ANode, nullable ANode) */
void parser_prod__AStartStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9537);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:Token>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TStartString */
cltype = type_parser_nodes__TStartString.color;
idtype = type_parser_nodes__TStartString.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9540);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AStartStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9543);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStartStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStartStringExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: AStartStringExpr, Token) */
void parser_prod__AStartStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStartStringExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AStartStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AStartStringExpr__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: AStartStringExpr, Visitor) */
void parser_prod__AStartStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9558);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStartStringExpr__visit_all(val* self, val* p0) {
parser_prod__AStartStringExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#empty_init for (self: AMidStringExpr) */
void parser_prod__AMidStringExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMidStringExpr__empty_init(val* self) {
parser_prod__AMidStringExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void parser_prod__AMidStringExpr__init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
var_n_string = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMidStringExpr__empty_init]))(self) /* empty_init on <self:AMidStringExpr>*/;
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9569);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9570);
exit(1);
} else {
((void (*)(val*, val*))(var_n_string->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_string, self) /* parent= on <var_n_string:nullable TMidString>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: Object, nullable TMidString) */
void VIRTUAL_parser_prod__AMidStringExpr__init_amidstringexpr(val* self, val* p0) {
parser_prod__AMidStringExpr__init_amidstringexpr(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: AMidStringExpr, ANode, nullable ANode) */
void parser_prod__AMidStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9575);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:Token>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TMidString */
cltype = type_parser_nodes__TMidString.color;
idtype = type_parser_nodes__TMidString.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9578);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AMidStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9581);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMidStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMidStringExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: AMidStringExpr, Token) */
void parser_prod__AMidStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AMidStringExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AMidStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AMidStringExpr__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: AMidStringExpr, Visitor) */
void parser_prod__AMidStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9596);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMidStringExpr__visit_all(val* self, val* p0) {
parser_prod__AMidStringExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#empty_init for (self: AEndStringExpr) */
void parser_prod__AEndStringExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AEndStringExpr__empty_init(val* self) {
parser_prod__AEndStringExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void parser_prod__AEndStringExpr__init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
var_n_string = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AEndStringExpr__empty_init]))(self) /* empty_init on <self:AEndStringExpr>*/;
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9607);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9608);
exit(1);
} else {
((void (*)(val*, val*))(var_n_string->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_string, self) /* parent= on <var_n_string:nullable TEndString>*/;
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: Object, nullable TEndString) */
void VIRTUAL_parser_prod__AEndStringExpr__init_aendstringexpr(val* self, val* p0) {
parser_prod__AEndStringExpr__init_aendstringexpr(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: AEndStringExpr, ANode, nullable ANode) */
void parser_prod__AEndStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9613);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:Token>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TEndString */
cltype = type_parser_nodes__TEndString.color;
idtype = type_parser_nodes__TEndString.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9616);
exit(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AEndStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9619);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEndStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEndStringExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: AEndStringExpr, Token) */
void parser_prod__AEndStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AEndStringExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AEndStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AEndStringExpr__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: AEndStringExpr, Visitor) */
void parser_prod__AEndStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_prod.nit", 9634);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEndStringExpr__visit_all(val* self, val* p0) {
parser_prod__AEndStringExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#empty_init for (self: ASuperstringExpr) */
void parser_prod__ASuperstringExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASuperstringExpr__empty_init(val* self) {
parser_prod__ASuperstringExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: ASuperstringExpr, Collection[Object], nullable AAnnotations) */
void parser_prod__ASuperstringExpr__init_asuperstringexpr(val* self, val* p0, val* p1) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AExpr] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
var_n_exprs = p0;
var_n_annotations = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASuperstringExpr__empty_init]))(self) /* empty_init on <self:ASuperstringExpr>*/;
var = ((val* (*)(val*))(var_n_exprs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_exprs) /* iterator on <var_n_exprs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9647);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 9648);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
var5 = NULL;
if (var_n_annotations == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: Object, Collection[Object], nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperstringExpr__init_asuperstringexpr(val* self, val* p0, val* p1) {
parser_prod__ASuperstringExpr__init_asuperstringexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: ASuperstringExpr, ANode, nullable ANode) */
void parser_prod__ASuperstringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : ANodes[AExpr] */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : ANodes[AExpr] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : ANodes[AExpr] */;
val* var17 /* : ANodes[AExpr] */;
val* var18 /* : nullable AAnnotations */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 9659);
exit(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[AExpr]>*/;
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
CHECK_NEW_range__Range(var);
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 9660);
exit(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:ANodes[AExpr]>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_old_child) /* == on <var11:nullable Object(AExpr)>*/;
if (var12){
var13 = NULL;
if (var_new_child == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9662);
exit(1);
}
var16 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 9663);
exit(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 9666);
exit(1);
}
((void (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var17, var_i) /* remove_at on <var17:ANodes[AExpr]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var18 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var19 = ((short int (*)(val*, val*))(var18->class->vft[COLOR_kernel__Object___61d_61d]))(var18, var_old_child) /* == on <var18:nullable AAnnotations>*/;
}
if (var19){
var20 = NULL;
if (var_new_child == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype23 = type_parser_nodes__AAnnotations.color;
idtype24 = type_parser_nodes__AAnnotations.id;
if(cltype23 >= var_new_child->type->table_size) {
var22 = 0;
} else {
var22 = var_new_child->type->type_table[cltype23] == idtype24;
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9674);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ASuperstringExpr> */
} else {
var25 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var25; /* _n_annotations on <self:ASuperstringExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperstringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperstringExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: ASuperstringExpr, nullable AAnnotations) */
void parser_prod__ASuperstringExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperstringExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperstringExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ASuperstringExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#visit_all for (self: ASuperstringExpr, Visitor) */
void parser_prod__ASuperstringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: AExpr */;
val* var4 /* : nullable AAnnotations */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 9694);
exit(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExpr]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_n = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9698);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperstringExpr__visit_all(val* self, val* p0) {
parser_prod__ASuperstringExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExpr#empty_init for (self: AParExpr) */
void parser_prod__AParExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AParExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AParExpr__empty_init(val* self) {
parser_prod__AParExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: AParExpr, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void parser_prod__AParExpr__init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_opar = p0;
var_n_expr = p1;
var_n_cpar = p2;
var_n_annotations = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AParExpr__empty_init]))(self) /* empty_init on <self:AParExpr>*/;
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9713);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9714);
exit(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9715);
exit(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9716);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9717);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9718);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cpar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cpar, self) /* parent= on <var_n_cpar:nullable TCpar>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: Object, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParExpr__init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AParExpr__init_aparexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: AParExpr, ANode, nullable ANode) */
void parser_prod__AParExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : TCpar */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable AAnnotations */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 9727);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TOpar>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TOpar */
cltype = type_parser_nodes__TOpar.color;
idtype = type_parser_nodes__TOpar.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9730);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_new_child; /* _n_opar on <self:AParExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9733);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 9737);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExpr>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype10 = type_parser_nodes__AExpr.color;
idtype11 = type_parser_nodes__AExpr.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9740);
exit(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_new_child; /* _n_expr on <self:AParExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9743);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 9747);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TCpar>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCpar */
cltype17 = type_parser_nodes__TCpar.color;
idtype18 = type_parser_nodes__TCpar.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9750);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_new_child; /* _n_cpar on <self:AParExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9753);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:nullable AAnnotations>*/;
}
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype24 = type_parser_nodes__AAnnotations.color;
idtype25 = type_parser_nodes__AAnnotations.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9760);
exit(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AParExpr> */
} else {
var26 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var26; /* _n_annotations on <self:AParExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void parser_prod__AParExpr__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_node; /* _n_opar on <self:AParExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TOpar>*/;
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_prod__AParExpr__n_opar_61d(val* self, val* p0) {
parser_prod__AParExpr__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: AParExpr, AExpr) */
void parser_prod__AParExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_node; /* _n_expr on <self:AParExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AParExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AParExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void parser_prod__AParExpr__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_node; /* _n_cpar on <self:AParExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCpar>*/;
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_prod__AParExpr__n_cpar_61d(val* self, val* p0) {
parser_prod__AParExpr__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_annotations= for (self: AParExpr, nullable AAnnotations) */
void parser_prod__AParExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AParExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExpr#visit_all for (self: AParExpr, Visitor) */
void parser_prod__AParExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : AExpr */;
val* var2 /* : TCpar */;
val* var3 /* : nullable AAnnotations */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 9795);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 9796);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 9797);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9799);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParExpr__visit_all(val* self, val* p0) {
parser_prod__AParExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#empty_init for (self: AAsCastExpr) */
void parser_prod__AAsCastExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAsCastExpr__empty_init(val* self) {
parser_prod__AAsCastExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: AAsCastExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void parser_prod__AAsCastExpr__init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_type = p3;
var_n_cpar = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAsCastExpr__empty_init]))(self) /* empty_init on <self:AAsCastExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9815);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9816);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9817);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9818);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9819);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9820);
exit(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9821);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9822);
exit(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9823);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9824);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cpar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cpar, self) /* parent= on <var_n_cpar:nullable TCpar>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: Object, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void VIRTUAL_parser_prod__AAsCastExpr__init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AAsCastExpr__init_aascastexpr(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: AAsCastExpr, ANode, nullable ANode) */
void parser_prod__AAsCastExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwas */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : TOpar */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AType */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : TCpar */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 9829);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExpr>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9832);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9835);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwas", "src/parser/parser_prod.nit", 9839);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwas>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwas */
cltype10 = type_parser_nodes__TKwas.color;
idtype11 = type_parser_nodes__TKwas.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9842);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_new_child; /* _n_kwas on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9845);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 9849);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TOpar>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TOpar */
cltype17 = type_parser_nodes__TOpar.color;
idtype18 = type_parser_nodes__TOpar.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9852);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_new_child; /* _n_opar on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9855);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 9859);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:AType>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype24 = type_parser_nodes__AType.color;
idtype25 = type_parser_nodes__AType.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9862);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_new_child; /* _n_type on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9865);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 9869);
exit(1);
}
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:TCpar>*/;
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCpar */
cltype31 = type_parser_nodes__TCpar.color;
idtype32 = type_parser_nodes__TCpar.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9872);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_new_child; /* _n_cpar on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9875);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsCastExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsCastExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: AAsCastExpr, AExpr) */
void parser_prod__AAsCastExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_node; /* _n_expr on <self:AAsCastExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAsCastExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: AAsCastExpr, TKwas) */
void parser_prod__AAsCastExpr__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_node; /* _n_kwas on <self:AAsCastExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwas>*/;
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsCastExpr__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_opar= for (self: AAsCastExpr, TOpar) */
void parser_prod__AAsCastExpr__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_node; /* _n_opar on <self:AAsCastExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TOpar>*/;
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_prod__AAsCastExpr__n_opar_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void parser_prod__AAsCastExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_node; /* _n_type on <self:AAsCastExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AAsCastExpr__n_type_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_cpar= for (self: AAsCastExpr, TCpar) */
void parser_prod__AAsCastExpr__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_node; /* _n_cpar on <self:AAsCastExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCpar>*/;
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_prod__AAsCastExpr__n_cpar_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: AAsCastExpr, Visitor) */
void parser_prod__AAsCastExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : TOpar */;
val* var3 /* : AType */;
val* var4 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 9910);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwas", "src/parser/parser_prod.nit", 9911);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 9912);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 9913);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 9914);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsCastExpr__visit_all(val* self, val* p0) {
parser_prod__AAsCastExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#empty_init for (self: AAsNotnullExpr) */
void parser_prod__AAsNotnullExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAsNotnullExpr__empty_init(val* self) {
parser_prod__AAsNotnullExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#init_aasnotnullexpr for (self: AAsNotnullExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
void parser_prod__AAsNotnullExpr__init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_kwnot = p3;
var_n_kwnull = p4;
var_n_cpar = p5;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAsNotnullExpr__empty_init]))(self) /* empty_init on <self:AAsNotnullExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9930);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9931);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9932);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9933);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9934);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9935);
exit(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9936);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9937);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwnot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnot, self) /* parent= on <var_n_kwnot:nullable TKwnot>*/;
}
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9938);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9939);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwnull->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnull, self) /* parent= on <var_n_kwnull:nullable TKwnull>*/;
}
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 9940);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 9941);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cpar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cpar, self) /* parent= on <var_n_cpar:nullable TCpar>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#init_aasnotnullexpr for (self: Object, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
void VIRTUAL_parser_prod__AAsNotnullExpr__init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AAsNotnullExpr__init_aasnotnullexpr(self, p0, p1, p2, p3, p4, p5);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: AAsNotnullExpr, ANode, nullable ANode) */
void parser_prod__AAsNotnullExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwas */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : TOpar */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : TKwnot */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : TKwnull */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : TCpar */;
short int var34 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 9946);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AExpr>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9949);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9952);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwas", "src/parser/parser_prod.nit", 9956);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwas>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwas */
cltype10 = type_parser_nodes__TKwas.color;
idtype11 = type_parser_nodes__TKwas.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9959);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_new_child; /* _n_kwas on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9962);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 9966);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TOpar>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TOpar */
cltype17 = type_parser_nodes__TOpar.color;
idtype18 = type_parser_nodes__TOpar.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9969);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_new_child; /* _n_opar on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9972);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnot", "src/parser/parser_prod.nit", 9976);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:TKwnot>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnot */
cltype24 = type_parser_nodes__TKwnot.color;
idtype25 = type_parser_nodes__TKwnot.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9979);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_new_child; /* _n_kwnot on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9982);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnull", "src/parser/parser_prod.nit", 9986);
exit(1);
}
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:TKwnull>*/;
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnull */
cltype31 = type_parser_nodes__TKwnull.color;
idtype32 = type_parser_nodes__TKwnull.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9989);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_new_child; /* _n_kwnull on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 9992);
exit(1);
}
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 9996);
exit(1);
}
var34 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var_old_child) /* == on <var33:TCpar>*/;
if (var34){
var35 = NULL;
if (var_new_child == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (var36){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCpar */
cltype38 = type_parser_nodes__TCpar.color;
idtype39 = type_parser_nodes__TCpar.id;
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 9999);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_new_child; /* _n_cpar on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10002);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsNotnullExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsNotnullExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: AAsNotnullExpr, AExpr) */
void parser_prod__AAsNotnullExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_node; /* _n_expr on <self:AAsNotnullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: AAsNotnullExpr, TKwas) */
void parser_prod__AAsNotnullExpr__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotnullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwas>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: AAsNotnullExpr, TOpar) */
void parser_prod__AAsNotnullExpr__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_node; /* _n_opar on <self:AAsNotnullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TOpar>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_opar_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void parser_prod__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotnullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnot>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_kwnot_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void parser_prod__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:AAsNotnullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnull>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: Object, TKwnull) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_kwnull_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: AAsNotnullExpr, TCpar) */
void parser_prod__AAsNotnullExpr__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_node; /* _n_cpar on <self:AAsNotnullExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCpar>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_cpar_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: AAsNotnullExpr, Visitor) */
void parser_prod__AAsNotnullExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : TOpar */;
val* var3 /* : TKwnot */;
val* var4 /* : TKwnull */;
val* var5 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 10042);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwas", "src/parser/parser_prod.nit", 10043);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 10044);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnot", "src/parser/parser_prod.nit", 10045);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnull", "src/parser/parser_prod.nit", 10046);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 10047);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsNotnullExpr__visit_all(val* self, val* p0) {
parser_prod__AAsNotnullExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#empty_init for (self: AIssetAttrExpr) */
void parser_prod__AIssetAttrExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIssetAttrExpr__empty_init(val* self) {
parser_prod__AIssetAttrExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#init_aissetattrexpr for (self: AIssetAttrExpr, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void parser_prod__AIssetAttrExpr__init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwisset /* var n_kwisset: nullable TKwisset */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
var_n_kwisset = p0;
var_n_expr = p1;
var_n_id = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIssetAttrExpr__empty_init]))(self) /* empty_init on <self:AIssetAttrExpr>*/;
if (var_n_kwisset == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10060);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10061);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwisset->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwisset, self) /* parent= on <var_n_kwisset:nullable TKwisset>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10062);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10063);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10064);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10065);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TAttrid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#init_aissetattrexpr for (self: Object, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void VIRTUAL_parser_prod__AIssetAttrExpr__init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AIssetAttrExpr__init_aissetattrexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: AIssetAttrExpr, ANode, nullable ANode) */
void parser_prod__AIssetAttrExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwisset */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : TAttrid */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwisset", "src/parser/parser_prod.nit", 10070);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwisset>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwisset */
cltype = type_parser_nodes__TKwisset.color;
idtype = type_parser_nodes__TKwisset.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10073);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_new_child; /* _n_kwisset on <self:AIssetAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10076);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 10080);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AExpr>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype10 = type_parser_nodes__AExpr.color;
idtype11 = type_parser_nodes__AExpr.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10083);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_new_child; /* _n_expr on <self:AIssetAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10086);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 10090);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TAttrid>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAttrid */
cltype17 = type_parser_nodes__TAttrid.color;
idtype18 = type_parser_nodes__TAttrid.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10093);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_new_child; /* _n_id on <self:AIssetAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10096);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIssetAttrExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIssetAttrExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void parser_prod__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0) {
val* var_node /* var node: TKwisset */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_node; /* _n_kwisset on <self:AIssetAttrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwisset>*/;
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: Object, TKwisset) */
void VIRTUAL_parser_prod__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0) {
parser_prod__AIssetAttrExpr__n_kwisset_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: AIssetAttrExpr, AExpr) */
void parser_prod__AIssetAttrExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AIssetAttrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIssetAttrExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIssetAttrExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: AIssetAttrExpr, TAttrid) */
void parser_prod__AIssetAttrExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AIssetAttrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAttrid>*/;
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AIssetAttrExpr__n_id_61d(val* self, val* p0) {
parser_prod__AIssetAttrExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#visit_all for (self: AIssetAttrExpr, Visitor) */
void parser_prod__AIssetAttrExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwisset */;
val* var1 /* : AExpr */;
val* var2 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwisset", "src/parser/parser_prod.nit", 10121);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 10122);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 10123);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIssetAttrExpr__visit_all(val* self, val* p0) {
parser_prod__AIssetAttrExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#empty_init for (self: ADebugTypeExpr) */
void parser_prod__ADebugTypeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ADebugTypeExpr__empty_init(val* self) {
parser_prod__ADebugTypeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#init_adebugtypeexpr for (self: ADebugTypeExpr, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void parser_prod__ADebugTypeExpr__init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwdebug /* var n_kwdebug: nullable TKwdebug */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
var_n_kwdebug = p0;
var_n_kwtype = p1;
var_n_expr = p2;
var_n_type = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ADebugTypeExpr__empty_init]))(self) /* empty_init on <self:ADebugTypeExpr>*/;
if (var_n_kwdebug == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10137);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10138);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwdebug->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwdebug, self) /* parent= on <var_n_kwdebug:nullable TKwdebug>*/;
}
if (var_n_kwtype == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10139);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10140);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwtype->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwtype, self) /* parent= on <var_n_kwtype:nullable TKwtype>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10141);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10142);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10143);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10144);
exit(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#init_adebugtypeexpr for (self: Object, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void VIRTUAL_parser_prod__ADebugTypeExpr__init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ADebugTypeExpr__init_adebugtypeexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: ADebugTypeExpr, ANode, nullable ANode) */
void parser_prod__ADebugTypeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdebug */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwtype */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AType */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdebug", "src/parser/parser_prod.nit", 10149);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwdebug>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwdebug */
cltype = type_parser_nodes__TKwdebug.color;
idtype = type_parser_nodes__TKwdebug.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10152);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_new_child; /* _n_kwdebug on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10155);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwtype", "src/parser/parser_prod.nit", 10159);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwtype>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwtype */
cltype10 = type_parser_nodes__TKwtype.color;
idtype11 = type_parser_nodes__TKwtype.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10162);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_new_child; /* _n_kwtype on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10165);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 10169);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExpr>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype17 = type_parser_nodes__AExpr.color;
idtype18 = type_parser_nodes__AExpr.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10172);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_new_child; /* _n_expr on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10175);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 10179);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:AType>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype24 = type_parser_nodes__AType.color;
idtype25 = type_parser_nodes__AType.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10182);
exit(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_new_child; /* _n_type on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10185);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADebugTypeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADebugTypeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void parser_prod__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0) {
val* var_node /* var node: TKwdebug */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_node; /* _n_kwdebug on <self:ADebugTypeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwdebug>*/;
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: Object, TKwdebug) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_kwdebug_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void parser_prod__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_node; /* _n_kwtype on <self:ADebugTypeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwtype>*/;
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: Object, TKwtype) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_kwtype_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void parser_prod__ADebugTypeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_node; /* _n_expr on <self:ADebugTypeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void parser_prod__ADebugTypeExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_node; /* _n_type on <self:ADebugTypeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_type_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#visit_all for (self: ADebugTypeExpr, Visitor) */
void parser_prod__ADebugTypeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdebug */;
val* var1 /* : TKwtype */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdebug", "src/parser/parser_prod.nit", 10215);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwtype", "src/parser/parser_prod.nit", 10216);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 10217);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 10218);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADebugTypeExpr__visit_all(val* self, val* p0) {
parser_prod__ADebugTypeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AListExprs#empty_init for (self: AListExprs) */
void parser_prod__AListExprs__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AListExprs#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AListExprs__empty_init(val* self) {
parser_prod__AListExprs__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: AListExprs, Collection[Object]) */
void parser_prod__AListExprs__init_alistexprs(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AExpr] */;
var_n_exprs = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AListExprs__empty_init]))(self) /* empty_init on <self:AListExprs>*/;
var = ((val* (*)(val*))(var_n_exprs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_exprs) /* iterator on <var_n_exprs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10230);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10231);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__AListExprs__init_alistexprs(val* self, val* p0) {
parser_prod__AListExprs__init_alistexprs(self, p0);
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: AListExprs, ANode, nullable ANode) */
void parser_prod__AListExprs__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : ANodes[AExpr] */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : ANodes[AExpr] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : ANodes[AExpr] */;
val* var17 /* : ANodes[AExpr] */;
var_old_child = p0;
var_new_child = p1;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10238);
exit(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[AExpr]>*/;
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
CHECK_NEW_range__Range(var);
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10239);
exit(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:ANodes[AExpr]>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_old_child) /* == on <var11:nullable Object(AExpr)>*/;
if (var12){
var13 = NULL;
if (var_new_child == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10241);
exit(1);
}
var16 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10242);
exit(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10245);
exit(1);
}
((void (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var17, var_i) /* remove_at on <var17:ANodes[AExpr]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AListExprs__replace_child(val* self, val* p0, val* p1) {
parser_prod__AListExprs__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AListExprs#visit_all for (self: AListExprs, Visitor) */
void parser_prod__AListExprs__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10256);
exit(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExpr]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_n = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AListExprs#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AListExprs__visit_all(val* self, val* p0) {
parser_prod__AListExprs__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExprs#empty_init for (self: AParExprs) */
void parser_prod__AParExprs__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AParExprs#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AParExprs__empty_init(val* self) {
parser_prod__AParExprs__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: AParExprs, nullable TOpar, Collection[Object], nullable TCpar) */
void parser_prod__AParExprs__init_aparexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AExpr] */;
var_n_opar = p0;
var_n_exprs = p1;
var_n_cpar = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AParExprs__empty_init]))(self) /* empty_init on <self:AParExprs>*/;
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10271);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10272);
exit(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
var = ((val* (*)(val*))(var_n_exprs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_exprs) /* iterator on <var_n_exprs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10274);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10275);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10278);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10279);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cpar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cpar, self) /* parent= on <var_n_cpar:nullable TCpar>*/;
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: Object, nullable TOpar, Collection[Object], nullable TCpar) */
void VIRTUAL_parser_prod__AParExprs__init_aparexprs(val* self, val* p0, val* p1, val* p2) {
parser_prod__AParExprs__init_aparexprs(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: AParExprs, ANode, nullable ANode) */
void parser_prod__AParExprs__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Range[Int] */;
long var6 /* : Int */;
val* var7 /* : ANodes[AExpr] */;
long var8 /* : Int */;
val* var9 /* : Discrete */;
val* var10 /* : Discrete */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
long var_i /* var i: Int */;
long var14 /* : Int */;
val* var15 /* : ANodes[AExpr] */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
val* var25 /* : TCpar */;
short int var26 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 10284);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TOpar>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TOpar */
cltype = type_parser_nodes__TOpar.color;
idtype = type_parser_nodes__TOpar.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10287);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_new_child; /* _n_opar on <self:AParExprs> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10290);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
var7 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10294);
exit(1);
}
var8 = ((long (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__length]))(var7) /* length on <var7:ANodes[AExpr]>*/;
var9 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
var10 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_range__Range__without_last]))(var5, var9, var10) /* without_last on <var5:Range[Int]>*/;
CHECK_NEW_range__Range(var5);
var11 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Range[Int]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var14 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var_i = var14;
var15 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10295);
exit(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:ANodes[AExpr]>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_old_child) /* == on <var16:nullable Object(AExpr)>*/;
if (var17){
var18 = NULL;
if (var_new_child == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype21 = type_parser_nodes__AExpr.color;
idtype22 = type_parser_nodes__AExpr.id;
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10297);
exit(1);
}
var23 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10298);
exit(1);
}
((void (*)(val*, long, val*))(var23->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var23, var_i, var_new_child) /* []= on <var23:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var24 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10301);
exit(1);
}
((void (*)(val*, long))(var24->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var24, var_i) /* remove_at on <var24:ANodes[AExpr]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var25 = self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 10306);
exit(1);
}
var26 = ((short int (*)(val*, val*))(var25->class->vft[COLOR_kernel__Object___61d_61d]))(var25, var_old_child) /* == on <var25:TCpar>*/;
if (var26){
var27 = NULL;
if (var_new_child == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCpar */
cltype30 = type_parser_nodes__TCpar.color;
idtype31 = type_parser_nodes__TCpar.id;
if(cltype30 >= var_new_child->type->table_size) {
var29 = 0;
} else {
var29 = var_new_child->type->type_table[cltype30] == idtype31;
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10309);
exit(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_new_child; /* _n_cpar on <self:AParExprs> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10312);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParExprs__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParExprs__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void parser_prod__AParExprs__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_node; /* _n_opar on <self:AParExprs> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TOpar>*/;
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_prod__AParExprs__n_opar_61d(val* self, val* p0) {
parser_prod__AParExprs__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void parser_prod__AParExprs__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_node; /* _n_cpar on <self:AParExprs> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCpar>*/;
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_prod__AParExprs__n_cpar_61d(val* self, val* p0) {
parser_prod__AParExprs__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: AParExprs, Visitor) */
void parser_prod__AParExprs__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: AExpr */;
val* var5 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_prod.nit", 10332);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10333);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[AExpr]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var5 = self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_prod.nit", 10336);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParExprs__visit_all(val* self, val* p0) {
parser_prod__AParExprs__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraExprs#empty_init for (self: ABraExprs) */
void parser_prod__ABraExprs__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABraExprs#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABraExprs__empty_init(val* self) {
parser_prod__ABraExprs__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: ABraExprs, nullable TObra, Collection[Object], nullable TCbra) */
void parser_prod__ABraExprs__init_abraexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AExpr] */;
var_n_obra = p0;
var_n_exprs = p1;
var_n_cbra = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraExprs__empty_init]))(self) /* empty_init on <self:ABraExprs>*/;
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10349);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10350);
exit(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
var = ((val* (*)(val*))(var_n_exprs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_exprs) /* iterator on <var_n_exprs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10352);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10353);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10356);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10357);
exit(1);
} else {
((void (*)(val*, val*))(var_n_cbra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cbra, self) /* parent= on <var_n_cbra:nullable TCbra>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: Object, nullable TObra, Collection[Object], nullable TCbra) */
void VIRTUAL_parser_prod__ABraExprs__init_abraexprs(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABraExprs__init_abraexprs(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: ABraExprs, ANode, nullable ANode) */
void parser_prod__ABraExprs__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Range[Int] */;
long var6 /* : Int */;
val* var7 /* : ANodes[AExpr] */;
long var8 /* : Int */;
val* var9 /* : Discrete */;
val* var10 /* : Discrete */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
long var_i /* var i: Int */;
long var14 /* : Int */;
val* var15 /* : ANodes[AExpr] */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
val* var25 /* : TCbra */;
short int var26 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_prod.nit", 10362);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TObra>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10365);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_new_child; /* _n_obra on <self:ABraExprs> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10368);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
var7 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10372);
exit(1);
}
var8 = ((long (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__length]))(var7) /* length on <var7:ANodes[AExpr]>*/;
var9 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
var10 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_range__Range__without_last]))(var5, var9, var10) /* without_last on <var5:Range[Int]>*/;
CHECK_NEW_range__Range(var5);
var11 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Range[Int]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var14 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var_i = var14;
var15 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10373);
exit(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:ANodes[AExpr]>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_old_child) /* == on <var16:nullable Object(AExpr)>*/;
if (var17){
var18 = NULL;
if (var_new_child == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype21 = type_parser_nodes__AExpr.color;
idtype22 = type_parser_nodes__AExpr.id;
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10375);
exit(1);
}
var23 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10376);
exit(1);
}
((void (*)(val*, long, val*))(var23->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var23, var_i, var_new_child) /* []= on <var23:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var24 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10379);
exit(1);
}
((void (*)(val*, long))(var24->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var24, var_i) /* remove_at on <var24:ANodes[AExpr]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var25 = self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_prod.nit", 10384);
exit(1);
}
var26 = ((short int (*)(val*, val*))(var25->class->vft[COLOR_kernel__Object___61d_61d]))(var25, var_old_child) /* == on <var25:TCbra>*/;
if (var26){
var27 = NULL;
if (var_new_child == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCbra */
cltype30 = type_parser_nodes__TCbra.color;
idtype31 = type_parser_nodes__TCbra.id;
if(cltype30 >= var_new_child->type->table_size) {
var29 = 0;
} else {
var29 = var_new_child->type->type_table[cltype30] == idtype31;
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10387);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_new_child; /* _n_cbra on <self:ABraExprs> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10390);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraExprs__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraExprs__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void parser_prod__ABraExprs__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_node; /* _n_obra on <self:ABraExprs> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TObra>*/;
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraExprs__n_obra_61d(val* self, val* p0) {
parser_prod__ABraExprs__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void parser_prod__ABraExprs__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_node; /* _n_cbra on <self:ABraExprs> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCbra>*/;
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraExprs__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraExprs__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: ABraExprs, Visitor) */
void parser_prod__ABraExprs__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: AExpr */;
val* var5 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_prod.nit", 10410);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_prod.nit", 10411);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[AExpr]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var5 = self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_prod.nit", 10414);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraExprs__visit_all(val* self, val* p0) {
parser_prod__ABraExprs__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#empty_init for (self: APlusAssignOp) */
void parser_prod__APlusAssignOp__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APlusAssignOp__empty_init(val* self) {
parser_prod__APlusAssignOp__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void parser_prod__APlusAssignOp__init_aplusassignop(val* self, val* p0) {
val* var_n_pluseq /* var n_pluseq: nullable TPluseq */;
var_n_pluseq = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APlusAssignOp__empty_init]))(self) /* empty_init on <self:APlusAssignOp>*/;
if (var_n_pluseq == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10425);
exit(1);
}
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_n_pluseq; /* _n_pluseq on <self:APlusAssignOp> */
if (var_n_pluseq == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10426);
exit(1);
} else {
((void (*)(val*, val*))(var_n_pluseq->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_pluseq, self) /* parent= on <var_n_pluseq:nullable TPluseq>*/;
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: Object, nullable TPluseq) */
void VIRTUAL_parser_prod__APlusAssignOp__init_aplusassignop(val* self, val* p0) {
parser_prod__APlusAssignOp__init_aplusassignop(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
void parser_prod__APlusAssignOp__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPluseq */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_pluseq", "src/parser/parser_prod.nit", 10431);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TPluseq>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TPluseq */
cltype = type_parser_nodes__TPluseq.color;
idtype = type_parser_nodes__TPluseq.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10434);
exit(1);
}
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_new_child; /* _n_pluseq on <self:APlusAssignOp> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10437);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusAssignOp__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusAssignOp__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_pluseq= for (self: APlusAssignOp, TPluseq) */
void parser_prod__APlusAssignOp__n_pluseq_61d(val* self, val* p0) {
val* var_node /* var node: TPluseq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_node; /* _n_pluseq on <self:APlusAssignOp> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TPluseq>*/;
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_pluseq= for (self: Object, TPluseq) */
void VIRTUAL_parser_prod__APlusAssignOp__n_pluseq_61d(val* self, val* p0) {
parser_prod__APlusAssignOp__n_pluseq_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: APlusAssignOp, Visitor) */
void parser_prod__APlusAssignOp__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPluseq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_pluseq", "src/parser/parser_prod.nit", 10452);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusAssignOp__visit_all(val* self, val* p0) {
parser_prod__APlusAssignOp__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#empty_init for (self: AMinusAssignOp) */
void parser_prod__AMinusAssignOp__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMinusAssignOp__empty_init(val* self) {
parser_prod__AMinusAssignOp__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void parser_prod__AMinusAssignOp__init_aminusassignop(val* self, val* p0) {
val* var_n_minuseq /* var n_minuseq: nullable TMinuseq */;
var_n_minuseq = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMinusAssignOp__empty_init]))(self) /* empty_init on <self:AMinusAssignOp>*/;
if (var_n_minuseq == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10463);
exit(1);
}
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_n_minuseq; /* _n_minuseq on <self:AMinusAssignOp> */
if (var_n_minuseq == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10464);
exit(1);
} else {
((void (*)(val*, val*))(var_n_minuseq->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_minuseq, self) /* parent= on <var_n_minuseq:nullable TMinuseq>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: Object, nullable TMinuseq) */
void VIRTUAL_parser_prod__AMinusAssignOp__init_aminusassignop(val* self, val* p0) {
parser_prod__AMinusAssignOp__init_aminusassignop(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
void parser_prod__AMinusAssignOp__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinuseq */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_minuseq", "src/parser/parser_prod.nit", 10469);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TMinuseq>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TMinuseq */
cltype = type_parser_nodes__TMinuseq.color;
idtype = type_parser_nodes__TMinuseq.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10472);
exit(1);
}
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_new_child; /* _n_minuseq on <self:AMinusAssignOp> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10475);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusAssignOp__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusAssignOp__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_minuseq= for (self: AMinusAssignOp, TMinuseq) */
void parser_prod__AMinusAssignOp__n_minuseq_61d(val* self, val* p0) {
val* var_node /* var node: TMinuseq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_node; /* _n_minuseq on <self:AMinusAssignOp> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TMinuseq>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_minuseq= for (self: Object, TMinuseq) */
void VIRTUAL_parser_prod__AMinusAssignOp__n_minuseq_61d(val* self, val* p0) {
parser_prod__AMinusAssignOp__n_minuseq_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: AMinusAssignOp, Visitor) */
void parser_prod__AMinusAssignOp__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinuseq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_minuseq", "src/parser/parser_prod.nit", 10490);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusAssignOp__visit_all(val* self, val* p0) {
parser_prod__AMinusAssignOp__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#empty_init for (self: AClosureDef) */
void parser_prod__AClosureDef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AClosureDef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AClosureDef__empty_init(val* self) {
parser_prod__AClosureDef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#init_aclosuredef for (self: AClosureDef, nullable TBang, nullable AClosureId, Collection[Object], nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__AClosureDef__init_aclosuredef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_bang /* var n_bang: nullable TBang */;
val* var_n_id /* var n_id: nullable AClosureId */;
val* var_n_ids /* var n_ids: Collection[Object] */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[TId] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
var_n_bang = p0;
var_n_id = p1;
var_n_ids = p2;
var_n_kwdo = p3;
var_n_expr = p4;
var_n_label = p5;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AClosureDef__empty_init]))(self) /* empty_init on <self:AClosureDef>*/;
if (var_n_bang == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10506);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_bang].val = var_n_bang; /* _n_bang on <self:AClosureDef> */
if (var_n_bang == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10507);
exit(1);
} else {
((void (*)(val*, val*))(var_n_bang->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_bang, self) /* parent= on <var_n_bang:nullable TBang>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10508);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_id].val = var_n_id; /* _n_id on <self:AClosureDef> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10509);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable AClosureId>*/;
}
var = ((val* (*)(val*))(var_n_ids->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_ids) /* iterator on <var_n_ids:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10511);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val; /* _n_ids on <self:AClosureDef> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 10512);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[TId]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(TId)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AClosureDef> */
var5 = NULL;
if (var_n_kwdo == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_n_kwdo->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwdo, self) /* parent= on <var_n_kwdo:nullable TKwdo(TKwdo)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val = var_n_expr; /* _n_expr on <self:AClosureDef> */
var7 = NULL;
if (var_n_expr == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AClosureDef> */
var9 = NULL;
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_n_label->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_label, self) /* parent= on <var_n_label:nullable ALabel(ALabel)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AClosureDef#init_aclosuredef for (self: Object, nullable TBang, nullable AClosureId, Collection[Object], nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__AClosureDef__init_aclosuredef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AClosureDef__init_aclosuredef(self, p0, p1, p2, p3, p4, p5);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#replace_child for (self: AClosureDef, ANode, nullable ANode) */
void parser_prod__AClosureDef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TBang */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AClosureId */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Range[Int] */;
long var13 /* : Int */;
val* var14 /* : ANodes[TId] */;
long var15 /* : Int */;
val* var16 /* : Discrete */;
val* var17 /* : Discrete */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
long var_i /* var i: Int */;
long var21 /* : Int */;
val* var22 /* : ANodes[TId] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : ANodes[TId] */;
val* var31 /* : ANodes[TId] */;
val* var32 /* : nullable TKwdo */;
short int var33 /* : Bool */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : null */;
val* var40 /* : nullable AExpr */;
short int var41 /* : Bool */;
val* var42 /* : null */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : null */;
val* var48 /* : nullable ALabel */;
short int var49 /* : Bool */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var55 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AClosureDef___n_bang].val; /* _n_bang on <self:AClosureDef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_bang", "src/parser/parser_prod.nit", 10531);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TBang>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TBang */
cltype = type_parser_nodes__TBang.color;
idtype = type_parser_nodes__TBang.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10534);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_bang].val = var_new_child; /* _n_bang on <self:AClosureDef> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10537);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AClosureDef___n_id].val; /* _n_id on <self:AClosureDef> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 10541);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AClosureId>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AClosureId */
cltype10 = type_parser_nodes__AClosureId.color;
idtype11 = type_parser_nodes__AClosureId.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10544);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_id].val = var_new_child; /* _n_id on <self:AClosureDef> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10547);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = NEW_range__Range(&type_range__Rangekernel__Int);
var13 = 0;
var14 = self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val; /* _n_ids on <self:AClosureDef> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 10551);
exit(1);
}
var15 = ((long (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__length]))(var14) /* length on <var14:ANodes[TId]>*/;
var16 = BOX_kernel__Int(var13); /* autobox from Int to Discrete */
var17 = BOX_kernel__Int(var15); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_range__Range__without_last]))(var12, var16, var17) /* without_last on <var12:Range[Int]>*/;
CHECK_NEW_range__Range(var12);
var18 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Range[Int]>*/;
for(;;) {
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
if(!var19) break;
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
var21 = ((struct instance_kernel__Int*)var20)->value; /* autounbox from nullable Object to Int */;
var_i = var21;
var22 = self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val; /* _n_ids on <self:AClosureDef> */
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 10552);
exit(1);
}
var23 = ((val* (*)(val*, long))(var22->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var22, var_i) /* [] on <var22:ANodes[TId]>*/;
var24 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_old_child) /* == on <var23:nullable Object(TId)>*/;
if (var24){
var25 = NULL;
if (var_new_child == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype28 = type_parser_nodes__TId.color;
idtype29 = type_parser_nodes__TId.id;
if(cltype28 >= var_new_child->type->table_size) {
var27 = 0;
} else {
var27 = var_new_child->type->type_table[cltype28] == idtype29;
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10554);
exit(1);
}
var30 = self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val; /* _n_ids on <self:AClosureDef> */
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 10555);
exit(1);
}
((void (*)(val*, long, val*))(var30->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var30, var_i, var_new_child) /* []= on <var30:ANodes[TId]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(TId)>*/;
} else {
var31 = self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val; /* _n_ids on <self:AClosureDef> */
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 10558);
exit(1);
}
((void (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var31, var_i) /* remove_at on <var31:ANodes[TId]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var32 = self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val; /* _n_kwdo on <self:AClosureDef> */
if (var32 == NULL) {
var33 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var33 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var_old_child) /* == on <var32:nullable TKwdo>*/;
}
if (var33){
var34 = NULL;
if (var_new_child == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (var35){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwdo */
cltype37 = type_parser_nodes__TKwdo.color;
idtype38 = type_parser_nodes__TKwdo.id;
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10566);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val = var_new_child; /* _n_kwdo on <self:AClosureDef> */
} else {
var39 = NULL;
self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val = var39; /* _n_kwdo on <self:AClosureDef> */
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val; /* _n_expr on <self:AClosureDef> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var41 = ((short int (*)(val*, val*))(var40->class->vft[COLOR_kernel__Object___61d_61d]))(var40, var_old_child) /* == on <var40:nullable AExpr>*/;
}
if (var41){
var42 = NULL;
if (var_new_child == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (var43){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype45 = type_parser_nodes__AExpr.color;
idtype46 = type_parser_nodes__AExpr.id;
if(cltype45 >= var_new_child->type->table_size) {
var44 = 0;
} else {
var44 = var_new_child->type->type_table[cltype45] == idtype46;
}
if (!var44) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10576);
exit(1);
}
self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val = var_new_child; /* _n_expr on <self:AClosureDef> */
} else {
var47 = NULL;
self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val = var47; /* _n_expr on <self:AClosureDef> */
}
goto RET_LABEL;
} else {
}
var48 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AClosureDef> */
if (var48 == NULL) {
var49 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var49 = ((short int (*)(val*, val*))(var48->class->vft[COLOR_kernel__Object___61d_61d]))(var48, var_old_child) /* == on <var48:nullable ALabel>*/;
}
if (var49){
var50 = NULL;
if (var_new_child == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (var51){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ALabel */
cltype53 = type_parser_nodes__ALabel.color;
idtype54 = type_parser_nodes__ALabel.id;
if(cltype53 >= var_new_child->type->table_size) {
var52 = 0;
} else {
var52 = var_new_child->type->type_table[cltype53] == idtype54;
}
if (!var52) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10586);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:AClosureDef> */
} else {
var55 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var55; /* _n_label on <self:AClosureDef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AClosureDef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AClosureDef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AClosureDef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_bang= for (self: AClosureDef, TBang) */
void parser_prod__AClosureDef__n_bang_61d(val* self, val* p0) {
val* var_node /* var node: TBang */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AClosureDef___n_bang].val = var_node; /* _n_bang on <self:AClosureDef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TBang>*/;
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_bang= for (self: Object, TBang) */
void VIRTUAL_parser_prod__AClosureDef__n_bang_61d(val* self, val* p0) {
parser_prod__AClosureDef__n_bang_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_id= for (self: AClosureDef, AClosureId) */
void parser_prod__AClosureDef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: AClosureId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AClosureDef___n_id].val = var_node; /* _n_id on <self:AClosureDef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AClosureId>*/;
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_id= for (self: Object, AClosureId) */
void VIRTUAL_parser_prod__AClosureDef__n_id_61d(val* self, val* p0) {
parser_prod__AClosureDef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_kwdo= for (self: AClosureDef, nullable TKwdo) */
void parser_prod__AClosureDef__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwdo */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val = var_node; /* _n_kwdo on <self:AClosureDef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwdo(TKwdo)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_kwdo= for (self: Object, nullable TKwdo) */
void VIRTUAL_parser_prod__AClosureDef__n_kwdo_61d(val* self, val* p0) {
parser_prod__AClosureDef__n_kwdo_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_expr= for (self: AClosureDef, nullable AExpr) */
void parser_prod__AClosureDef__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val = var_node; /* _n_expr on <self:AClosureDef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AClosureDef__n_expr_61d(val* self, val* p0) {
parser_prod__AClosureDef__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_label= for (self: AClosureDef, nullable ALabel) */
void parser_prod__AClosureDef__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AClosureDef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ALabel(ALabel)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AClosureDef#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AClosureDef__n_label_61d(val* self, val* p0) {
parser_prod__AClosureDef__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AClosureDef#visit_all for (self: AClosureDef, Visitor) */
void parser_prod__AClosureDef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TBang */;
val* var1 /* : AClosureId */;
val* var2 /* : ANodes[TId] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_n /* var n: TId */;
val* var6 /* : nullable TKwdo */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable TKwdo */;
val* var10 /* : nullable AExpr */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable AExpr */;
val* var14 /* : nullable ALabel */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AClosureDef___n_bang].val; /* _n_bang on <self:AClosureDef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_bang", "src/parser/parser_prod.nit", 10630);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AClosureDef___n_id].val; /* _n_id on <self:AClosureDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 10631);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val; /* _n_ids on <self:AClosureDef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 10632);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:ANodes[TId]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_n = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var6 = self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val; /* _n_kwdo on <self:AClosureDef> */
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val; /* _n_kwdo on <self:AClosureDef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10636);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var10 = self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val; /* _n_expr on <self:AClosureDef> */
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val; /* _n_expr on <self:AClosureDef> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10639);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var13) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AClosureDef> */
var15 = NULL;
if (var14 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
var17 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AClosureDef> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10642);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var17) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AClosureDef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AClosureDef__visit_all(val* self, val* p0) {
parser_prod__AClosureDef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#empty_init for (self: ASimpleClosureId) */
void parser_prod__ASimpleClosureId__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASimpleClosureId__empty_init(val* self) {
parser_prod__ASimpleClosureId__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#init_asimpleclosureid for (self: ASimpleClosureId, nullable TId) */
void parser_prod__ASimpleClosureId__init_asimpleclosureid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASimpleClosureId__empty_init]))(self) /* empty_init on <self:ASimpleClosureId>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10654);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASimpleClosureId___n_id].val = var_n_id; /* _n_id on <self:ASimpleClosureId> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10655);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#init_asimpleclosureid for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__ASimpleClosureId__init_asimpleclosureid(val* self, val* p0) {
parser_prod__ASimpleClosureId__init_asimpleclosureid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#replace_child for (self: ASimpleClosureId, ANode, nullable ANode) */
void parser_prod__ASimpleClosureId__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASimpleClosureId___n_id].val; /* _n_id on <self:ASimpleClosureId> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 10660);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TId>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10663);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASimpleClosureId___n_id].val = var_new_child; /* _n_id on <self:ASimpleClosureId> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10666);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASimpleClosureId__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASimpleClosureId__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#n_id= for (self: ASimpleClosureId, TId) */
void parser_prod__ASimpleClosureId__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASimpleClosureId___n_id].val = var_node; /* _n_id on <self:ASimpleClosureId> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ASimpleClosureId__n_id_61d(val* self, val* p0) {
parser_prod__ASimpleClosureId__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#visit_all for (self: ASimpleClosureId, Visitor) */
void parser_prod__ASimpleClosureId__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASimpleClosureId___n_id].val; /* _n_id on <self:ASimpleClosureId> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 10681);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ASimpleClosureId#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASimpleClosureId__visit_all(val* self, val* p0) {
parser_prod__ASimpleClosureId__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#empty_init for (self: ABreakClosureId) */
void parser_prod__ABreakClosureId__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABreakClosureId__empty_init(val* self) {
parser_prod__ABreakClosureId__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#init_abreakclosureid for (self: ABreakClosureId, nullable TKwbreak) */
void parser_prod__ABreakClosureId__init_abreakclosureid(val* self, val* p0) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
var_n_kwbreak = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABreakClosureId__empty_init]))(self) /* empty_init on <self:ABreakClosureId>*/;
if (var_n_kwbreak == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10692);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABreakClosureId___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakClosureId> */
if (var_n_kwbreak == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10693);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwbreak->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwbreak, self) /* parent= on <var_n_kwbreak:nullable TKwbreak>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#init_abreakclosureid for (self: Object, nullable TKwbreak) */
void VIRTUAL_parser_prod__ABreakClosureId__init_abreakclosureid(val* self, val* p0) {
parser_prod__ABreakClosureId__init_abreakclosureid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#replace_child for (self: ABreakClosureId, ANode, nullable ANode) */
void parser_prod__ABreakClosureId__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwbreak */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABreakClosureId___n_kwbreak].val; /* _n_kwbreak on <self:ABreakClosureId> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwbreak", "src/parser/parser_prod.nit", 10698);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwbreak>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwbreak */
cltype = type_parser_nodes__TKwbreak.color;
idtype = type_parser_nodes__TKwbreak.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10701);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABreakClosureId___n_kwbreak].val = var_new_child; /* _n_kwbreak on <self:ABreakClosureId> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 10704);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABreakClosureId__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABreakClosureId__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#n_kwbreak= for (self: ABreakClosureId, TKwbreak) */
void parser_prod__ABreakClosureId__n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABreakClosureId___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakClosureId> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwbreak>*/;
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#n_kwbreak= for (self: Object, TKwbreak) */
void VIRTUAL_parser_prod__ABreakClosureId__n_kwbreak_61d(val* self, val* p0) {
parser_prod__ABreakClosureId__n_kwbreak_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#visit_all for (self: ABreakClosureId, Visitor) */
void parser_prod__ABreakClosureId__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABreakClosureId___n_kwbreak].val; /* _n_kwbreak on <self:ABreakClosureId> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwbreak", "src/parser/parser_prod.nit", 10719);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABreakClosureId#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABreakClosureId__visit_all(val* self, val* p0) {
parser_prod__ABreakClosureId__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuleName#empty_init for (self: AModuleName) */
void parser_prod__AModuleName__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AModuleName#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AModuleName__empty_init(val* self) {
parser_prod__AModuleName__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: AModuleName, nullable TQuad, Collection[Object], nullable TId) */
void parser_prod__AModuleName__init_amodulename(val* self, val* p0, val* p1, val* p2) {
val* var_n_quad /* var n_quad: nullable TQuad */;
val* var_n_path /* var n_path: Collection[Object] */;
val* var_n_id /* var n_id: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : ANodes[TId] */;
var_n_quad = p0;
var_n_path = p1;
var_n_id = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AModuleName__empty_init]))(self) /* empty_init on <self:AModuleName>*/;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var_n_quad; /* _n_quad on <self:AModuleName> */
var = NULL;
if (var_n_quad == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_quad->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_quad, self) /* parent= on <var_n_quad:nullable TQuad(TQuad)>*/;
} else {
}
var2 = ((val* (*)(val*))(var_n_path->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_path) /* iterator on <var_n_path:Collection[Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
/* <var_n:Object> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 10737);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_path", "src/parser/parser_prod.nit", 10738);
exit(1);
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_n) /* add on <var6:ANodes[TId]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(TId)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 10741);
exit(1);
}
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 10742);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: Object, nullable TQuad, Collection[Object], nullable TId) */
void VIRTUAL_parser_prod__AModuleName__init_amodulename(val* self, val* p0, val* p1, val* p2) {
parser_prod__AModuleName__init_amodulename(self, p0, p1, p2);
RET_LABEL:;
}
