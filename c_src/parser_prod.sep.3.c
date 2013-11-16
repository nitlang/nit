#include "parser_prod.sep.0.h"
/* method parser_prod#AIfexprExpr#replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
void parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
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
val* var12 /* : TKwthen */;
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
val* var26 /* : TKwelse */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AExpr */;
short int var34 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwif", "src/parser/parser_prod.nit", 5271);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwif>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwif */
cltype = type_parser_nodes__TKwif.color;
idtype = type_parser_nodes__TKwif.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5274);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = var_new_child; /* _n_kwif on <self:AIfexprExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5277);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5281);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5284);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = var_new_child; /* _n_expr on <self:AIfexprExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5287);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwthen", "src/parser/parser_prod.nit", 5291);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TKwthen>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwthen */
cltype17 = type_parser_nodes__TKwthen.color;
idtype18 = type_parser_nodes__TKwthen.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5294);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = var_new_child; /* _n_kwthen on <self:AIfexprExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5297);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_then", "src/parser/parser_prod.nit", 5301);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5304);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = var_new_child; /* _n_then on <self:AIfexprExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5307);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwelse", "src/parser/parser_prod.nit", 5311);
exit(1);
}
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:TKwelse>*/;
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwelse */
cltype31 = type_parser_nodes__TKwelse.color;
idtype32 = type_parser_nodes__TKwelse.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5314);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = var_new_child; /* _n_kwelse on <self:AIfexprExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5317);
exit(1);
}
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_else", "src/parser/parser_prod.nit", 5321);
exit(1);
}
var34 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var_old_child) /* == on <var33:AExpr>*/;
if (var34){
var35 = NULL;
if (var_new_child == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (var36){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype38 = type_parser_nodes__AExpr.color;
idtype39 = type_parser_nodes__AExpr.id;
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5324);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = var_new_child; /* _n_else on <self:AIfexprExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5327);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIfexprExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwif>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwif_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwthen>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: Object, TKwthen) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwthen_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_then_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwelse>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: Object, TKwelse) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwelse_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_else_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: AIfexprExpr, Visitor) */
void parser_prod__AIfexprExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : TKwthen */;
val* var3 /* : AExpr */;
val* var4 /* : TKwelse */;
val* var5 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwif", "src/parser/parser_prod.nit", 5367);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5368);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwthen", "src/parser/parser_prod.nit", 5369);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_then", "src/parser/parser_prod.nit", 5370);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwelse", "src/parser/parser_prod.nit", 5371);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_else", "src/parser/parser_prod.nit", 5372);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIfexprExpr__visit_all(val* self, val* p0) {
parser_prod__AIfexprExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#empty_init for (self: AWhileExpr) */
void parser_prod__AWhileExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AWhileExpr__empty_init(val* self) {
parser_prod__AWhileExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: AWhileExpr, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__AWhileExpr__init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwwhile /* var n_kwwhile: nullable TKwwhile */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AWhileExpr__empty_init]))(self) /* empty_init on <self:AWhileExpr>*/;
if (var_n_kwwhile == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5387);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5388);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwwhile->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwwhile, self) /* parent= on <var_n_kwwhile:nullable TKwwhile>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5389);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5390);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwdo == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5391);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5392);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwdo->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwdo, self) /* parent= on <var_n_kwdo:nullable TKwdo>*/;
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_n_block; /* _n_block on <self:AWhileExpr> */
var = NULL;
if (var_n_block == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_block, self) /* parent= on <var_n_block:nullable AExpr(AExpr)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWhileExpr> */
var2 = NULL;
if (var_n_label == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_label->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_label, self) /* parent= on <var_n_label:nullable ALabel(ALabel)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: Object, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__AWhileExpr__init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AWhileExpr__init_awhileexpr(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: AWhileExpr, ANode, nullable ANode) */
void parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwhile */;
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
val* var12 /* : TKwdo */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : null */;
val* var27 /* : nullable ALabel */;
short int var28 /* : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwwhile", "src/parser/parser_prod.nit", 5405);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwwhile>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwwhile */
cltype = type_parser_nodes__TKwwhile.color;
idtype = type_parser_nodes__TKwwhile.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5408);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_new_child; /* _n_kwwhile on <self:AWhileExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5411);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5415);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5418);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_new_child; /* _n_expr on <self:AWhileExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5421);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdo", "src/parser/parser_prod.nit", 5425);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TKwdo>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwdo */
cltype17 = type_parser_nodes__TKwdo.color;
idtype18 = type_parser_nodes__TKwdo.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5428);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_new_child; /* _n_kwdo on <self:AWhileExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5431);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:nullable AExpr>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype24 = type_parser_nodes__AExpr.color;
idtype25 = type_parser_nodes__AExpr.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5438);
exit(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_new_child; /* _n_block on <self:AWhileExpr> */
} else {
var26 = NULL;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var26; /* _n_block on <self:AWhileExpr> */
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var28 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var_old_child) /* == on <var27:nullable ALabel>*/;
}
if (var28){
var29 = NULL;
if (var_new_child == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (var30){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ALabel */
cltype32 = type_parser_nodes__ALabel.color;
idtype33 = type_parser_nodes__ALabel.id;
if(cltype32 >= var_new_child->type->table_size) {
var31 = 0;
} else {
var31 = var_new_child->type->type_table[cltype32] == idtype33;
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5448);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:AWhileExpr> */
} else {
var34 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var34; /* _n_label on <self:AWhileExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AWhileExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwwhile>*/;
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: Object, TKwwhile) */
void VIRTUAL_parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_kwwhile_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwdo>*/;
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_kwdo_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void parser_prod__AWhileExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_node; /* _n_block on <self:AWhileExpr> */
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
/* method parser_prod#AWhileExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AWhileExpr__n_block_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: AWhileExpr, nullable ALabel) */
void parser_prod__AWhileExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWhileExpr> */
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
/* method parser_prod#AWhileExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AWhileExpr__n_label_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: AWhileExpr, Visitor) */
void parser_prod__AWhileExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwhile */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable ALabel */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwwhile", "src/parser/parser_prod.nit", 5490);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5491);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdo", "src/parser/parser_prod.nit", 5492);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5494);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var7 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
var8 = NULL;
if (var7 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
var10 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5497);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AWhileExpr__visit_all(val* self, val* p0) {
parser_prod__AWhileExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#empty_init for (self: ALoopExpr) */
void parser_prod__ALoopExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALoopExpr__empty_init(val* self) {
parser_prod__ALoopExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
void parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwloop /* var n_kwloop: nullable TKwloop */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALoopExpr__empty_init]))(self) /* empty_init on <self:ALoopExpr>*/;
if (var_n_kwloop == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5511);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5512);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwloop->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwloop, self) /* parent= on <var_n_kwloop:nullable TKwloop>*/;
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_n_block; /* _n_block on <self:ALoopExpr> */
var = NULL;
if (var_n_block == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_block, self) /* parent= on <var_n_block:nullable AExpr(AExpr)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ALoopExpr> */
var2 = NULL;
if (var_n_label == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_label->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_label, self) /* parent= on <var_n_label:nullable ALabel(ALabel)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: Object, nullable TKwloop, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ALoopExpr__init_aloopexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: ALoopExpr, ANode, nullable ANode) */
void parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwloop */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AExpr */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : nullable ALabel */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwloop", "src/parser/parser_prod.nit", 5525);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwloop>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwloop */
cltype = type_parser_nodes__TKwloop.color;
idtype = type_parser_nodes__TKwloop.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5528);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_new_child; /* _n_kwloop on <self:ALoopExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5531);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AExpr>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype10 = type_parser_nodes__AExpr.color;
idtype11 = type_parser_nodes__AExpr.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5538);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_new_child; /* _n_block on <self:ALoopExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var12; /* _n_block on <self:ALoopExpr> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var13 == NULL) {
var14 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:nullable ALabel>*/;
}
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ALabel */
cltype18 = type_parser_nodes__ALabel.color;
idtype19 = type_parser_nodes__ALabel.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5548);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:ALoopExpr> */
} else {
var20 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var20; /* _n_label on <self:ALoopExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALoopExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwloop>*/;
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: Object, TKwloop) */
void VIRTUAL_parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_kwloop_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void parser_prod__ALoopExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_node; /* _n_block on <self:ALoopExpr> */
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
/* method parser_prod#ALoopExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ALoopExpr__n_block_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: ALoopExpr, nullable ALabel) */
void parser_prod__ALoopExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ALoopExpr> */
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
/* method parser_prod#ALoopExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ALoopExpr__n_label_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: ALoopExpr, Visitor) */
void parser_prod__ALoopExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable ALabel */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwloop", "src/parser/parser_prod.nit", 5580);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5582);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5585);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALoopExpr__visit_all(val* self, val* p0) {
parser_prod__ALoopExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AForExpr#empty_init for (self: AForExpr) */
void parser_prod__AForExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AForExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AForExpr__empty_init(val* self) {
parser_prod__AForExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AForExpr#init_aforexpr for (self: AForExpr, nullable TKwfor, Collection[Object], nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__AForExpr__init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwfor /* var n_kwfor: nullable TKwfor */;
val* var_n_ids /* var n_ids: Collection[Object] */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
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
var_n_kwfor = p0;
var_n_ids = p1;
var_n_expr = p2;
var_n_kwdo = p3;
var_n_block = p4;
var_n_label = p5;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AForExpr__empty_init]))(self) /* empty_init on <self:AForExpr>*/;
if (var_n_kwfor == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5602);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val = var_n_kwfor; /* _n_kwfor on <self:AForExpr> */
if (var_n_kwfor == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5603);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwfor->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwfor, self) /* parent= on <var_n_kwfor:nullable TKwfor>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5605);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 5606);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[TId]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(TId)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5609);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AForExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5610);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwdo == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5611);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AForExpr> */
if (var_n_kwdo == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5612);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwdo->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwdo, self) /* parent= on <var_n_kwdo:nullable TKwdo>*/;
}
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var_n_block; /* _n_block on <self:AForExpr> */
var5 = NULL;
if (var_n_block == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_n_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_block, self) /* parent= on <var_n_block:nullable AExpr(AExpr)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AForExpr> */
var7 = NULL;
if (var_n_label == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_n_label->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_label, self) /* parent= on <var_n_label:nullable ALabel(ALabel)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#init_aforexpr for (self: Object, nullable TKwfor, Collection[Object], nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__AForExpr__init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AForExpr__init_aforexpr(self, p0, p1, p2, p3, p4, p5);
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: AForExpr, ANode, nullable ANode) */
void parser_prod__AForExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfor */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Range[Int] */;
long var6 /* : Int */;
val* var7 /* : ANodes[TId] */;
long var8 /* : Int */;
val* var9 /* : Discrete */;
val* var10 /* : Discrete */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
long var_i /* var i: Int */;
long var14 /* : Int */;
val* var15 /* : ANodes[TId] */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[TId] */;
val* var24 /* : ANodes[TId] */;
val* var25 /* : AExpr */;
short int var26 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : TKwdo */;
short int var33 /* : Bool */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : nullable AExpr */;
short int var40 /* : Bool */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : null */;
val* var47 /* : nullable ALabel */;
short int var48 /* : Bool */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
val* var54 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwfor", "src/parser/parser_prod.nit", 5625);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwfor>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwfor */
cltype = type_parser_nodes__TKwfor.color;
idtype = type_parser_nodes__TKwfor.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5628);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val = var_new_child; /* _n_kwfor on <self:AForExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5631);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
var7 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 5635);
exit(1);
}
var8 = ((long (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__length]))(var7) /* length on <var7:ANodes[TId]>*/;
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
var15 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 5636);
exit(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:ANodes[TId]>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_old_child) /* == on <var16:nullable Object(TId)>*/;
if (var17){
var18 = NULL;
if (var_new_child == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype21 = type_parser_nodes__TId.color;
idtype22 = type_parser_nodes__TId.id;
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5638);
exit(1);
}
var23 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 5639);
exit(1);
}
((void (*)(val*, long, val*))(var23->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var23, var_i, var_new_child) /* []= on <var23:ANodes[TId]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(TId)>*/;
} else {
var24 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 5642);
exit(1);
}
((void (*)(val*, long))(var24->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var24, var_i) /* remove_at on <var24:ANodes[TId]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var25 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5647);
exit(1);
}
var26 = ((short int (*)(val*, val*))(var25->class->vft[COLOR_kernel__Object___61d_61d]))(var25, var_old_child) /* == on <var25:AExpr>*/;
if (var26){
var27 = NULL;
if (var_new_child == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype30 = type_parser_nodes__AExpr.color;
idtype31 = type_parser_nodes__AExpr.id;
if(cltype30 >= var_new_child->type->table_size) {
var29 = 0;
} else {
var29 = var_new_child->type->type_table[cltype30] == idtype31;
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5650);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val = var_new_child; /* _n_expr on <self:AForExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5653);
exit(1);
}
goto RET_LABEL;
} else {
}
var32 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdo", "src/parser/parser_prod.nit", 5657);
exit(1);
}
var33 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var_old_child) /* == on <var32:TKwdo>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5660);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val = var_new_child; /* _n_kwdo on <self:AForExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5663);
exit(1);
}
goto RET_LABEL;
} else {
}
var39 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var39 == NULL) {
var40 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var40 = ((short int (*)(val*, val*))(var39->class->vft[COLOR_kernel__Object___61d_61d]))(var39, var_old_child) /* == on <var39:nullable AExpr>*/;
}
if (var40){
var41 = NULL;
if (var_new_child == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (var42){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype44 = type_parser_nodes__AExpr.color;
idtype45 = type_parser_nodes__AExpr.id;
if(cltype44 >= var_new_child->type->table_size) {
var43 = 0;
} else {
var43 = var_new_child->type->type_table[cltype44] == idtype45;
}
if (!var43) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5670);
exit(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var_new_child; /* _n_block on <self:AForExpr> */
} else {
var46 = NULL;
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var46; /* _n_block on <self:AForExpr> */
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var47 == NULL) {
var48 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var48 = ((short int (*)(val*, val*))(var47->class->vft[COLOR_kernel__Object___61d_61d]))(var47, var_old_child) /* == on <var47:nullable ALabel>*/;
}
if (var48){
var49 = NULL;
if (var_new_child == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (var50){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ALabel */
cltype52 = type_parser_nodes__ALabel.color;
idtype53 = type_parser_nodes__ALabel.id;
if(cltype52 >= var_new_child->type->table_size) {
var51 = 0;
} else {
var51 = var_new_child->type->type_table[cltype52] == idtype53;
}
if (!var51) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5680);
exit(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:AForExpr> */
} else {
var54 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var54; /* _n_label on <self:AForExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AForExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AForExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void parser_prod__AForExpr__n_kwfor_61d(val* self, val* p0) {
val* var_node /* var node: TKwfor */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val = var_node; /* _n_kwfor on <self:AForExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwfor>*/;
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: Object, TKwfor) */
void VIRTUAL_parser_prod__AForExpr__n_kwfor_61d(val* self, val* p0) {
parser_prod__AForExpr__n_kwfor_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_expr= for (self: AForExpr, AExpr) */
void parser_prod__AForExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val = var_node; /* _n_expr on <self:AForExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AForExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AForExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void parser_prod__AForExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AForExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwdo>*/;
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__AForExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__AForExpr__n_kwdo_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void parser_prod__AForExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var_node; /* _n_block on <self:AForExpr> */
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
/* method parser_prod#AForExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AForExpr__n_block_61d(val* self, val* p0) {
parser_prod__AForExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_label= for (self: AForExpr, nullable ALabel) */
void parser_prod__AForExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AForExpr> */
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
/* method parser_prod#AForExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AForExpr__n_label_61d(val* self, val* p0) {
parser_prod__AForExpr__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: AForExpr, Visitor) */
void parser_prod__AForExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfor */;
val* var1 /* : ANodes[TId] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: TId */;
val* var5 /* : AExpr */;
val* var6 /* : TKwdo */;
val* var7 /* : nullable AExpr */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable AExpr */;
val* var11 /* : nullable ALabel */;
val* var12 /* : null */;
short int var13 /* : Bool */;
val* var14 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwfor", "src/parser/parser_prod.nit", 5722);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_ids", "src/parser/parser_prod.nit", 5723);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[TId]>*/;
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
var5 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5726);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
var6 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdo", "src/parser/parser_prod.nit", 5727);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:Visitor>*/;
var7 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var8 = NULL;
if (var7 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
var10 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5729);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var11 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
var12 = NULL;
if (var11 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (var13){
var14 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5732);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var14) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AForExpr__visit_all(val* self, val* p0) {
parser_prod__AForExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#empty_init for (self: AAssertExpr) */
void parser_prod__AAssertExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAssertExpr__empty_init(val* self) {
parser_prod__AAssertExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: AAssertExpr, nullable TKwassert, nullable TId, nullable AExpr, nullable AExpr) */
void parser_prod__AAssertExpr__init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwassert /* var n_kwassert: nullable TKwassert */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwassert = p0;
var_n_id = p1;
var_n_expr = p2;
var_n_else = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAssertExpr__empty_init]))(self) /* empty_init on <self:AAssertExpr>*/;
if (var_n_kwassert == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5747);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val = var_n_kwassert; /* _n_kwassert on <self:AAssertExpr> */
if (var_n_kwassert == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5748);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwassert->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwassert, self) /* parent= on <var_n_kwassert:nullable TKwassert>*/;
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var_n_id; /* _n_id on <self:AAssertExpr> */
var = NULL;
if (var_n_id == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId(TId)>*/;
} else {
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5753);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAssertExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5754);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var_n_else; /* _n_else on <self:AAssertExpr> */
var2 = NULL;
if (var_n_else == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_else->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_else, self) /* parent= on <var_n_else:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: Object, nullable TKwassert, nullable TId, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AAssertExpr__init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAssertExpr__init_aassertexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: AAssertExpr, ANode, nullable ANode) */
void parser_prod__AAssertExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwassert */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable TId */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : AExpr */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : nullable AExpr */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwassert", "src/parser/parser_prod.nit", 5763);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwassert>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwassert */
cltype = type_parser_nodes__TKwassert.color;
idtype = type_parser_nodes__TKwassert.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5766);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val = var_new_child; /* _n_kwassert on <self:AAssertExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5769);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable TId>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype10 = type_parser_nodes__TId.color;
idtype11 = type_parser_nodes__TId.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5776);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var_new_child; /* _n_id on <self:AAssertExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var12; /* _n_id on <self:AAssertExpr> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5783);
exit(1);
}
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:AExpr>*/;
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype18 = type_parser_nodes__AExpr.color;
idtype19 = type_parser_nodes__AExpr.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5786);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAssertExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5789);
exit(1);
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var20 == NULL) {
var21 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var21 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___61d_61d]))(var20, var_old_child) /* == on <var20:nullable AExpr>*/;
}
if (var21){
var22 = NULL;
if (var_new_child == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype25 = type_parser_nodes__AExpr.color;
idtype26 = type_parser_nodes__AExpr.id;
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5796);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var_new_child; /* _n_else on <self:AAssertExpr> */
} else {
var27 = NULL;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var27; /* _n_else on <self:AAssertExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAssertExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAssertExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void parser_prod__AAssertExpr__n_kwassert_61d(val* self, val* p0) {
val* var_node /* var node: TKwassert */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val = var_node; /* _n_kwassert on <self:AAssertExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwassert>*/;
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: Object, TKwassert) */
void VIRTUAL_parser_prod__AAssertExpr__n_kwassert_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_kwassert_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void parser_prod__AAssertExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var_node; /* _n_id on <self:AAssertExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TId(TId)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AAssertExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void parser_prod__AAssertExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val = var_node; /* _n_expr on <self:AAssertExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAssertExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void parser_prod__AAssertExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var_node; /* _n_else on <self:AAssertExpr> */
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
/* method parser_prod#AAssertExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AAssertExpr__n_else_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_else_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: AAssertExpr, Visitor) */
void parser_prod__AAssertExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwassert */;
val* var1 /* : nullable TId */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TId */;
val* var5 /* : AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwassert", "src/parser/parser_prod.nit", 5833);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5835);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5837);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
var6 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5839);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAssertExpr__visit_all(val* self, val* p0) {
parser_prod__AAssertExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#empty_init for (self: AOnceExpr) */
void parser_prod__AOnceExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AOnceExpr__empty_init(val* self) {
parser_prod__AOnceExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: AOnceExpr, nullable TKwonce, nullable AExpr) */
void parser_prod__AOnceExpr__init_aonceexpr(val* self, val* p0, val* p1) {
val* var_n_kwonce /* var n_kwonce: nullable TKwonce */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_kwonce = p0;
var_n_expr = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AOnceExpr__empty_init]))(self) /* empty_init on <self:AOnceExpr>*/;
if (var_n_kwonce == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5852);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val = var_n_kwonce; /* _n_kwonce on <self:AOnceExpr> */
if (var_n_kwonce == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5853);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwonce->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwonce, self) /* parent= on <var_n_kwonce:nullable TKwonce>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5854);
exit(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOnceExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5855);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: Object, nullable TKwonce, nullable AExpr) */
void VIRTUAL_parser_prod__AOnceExpr__init_aonceexpr(val* self, val* p0, val* p1) {
parser_prod__AOnceExpr__init_aonceexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#replace_child for (self: AOnceExpr, ANode, nullable ANode) */
void parser_prod__AOnceExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwonce */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwonce", "src/parser/parser_prod.nit", 5860);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwonce>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwonce */
cltype = type_parser_nodes__TKwonce.color;
idtype = type_parser_nodes__TKwonce.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5863);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val = var_new_child; /* _n_kwonce on <self:AOnceExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5866);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5870);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5873);
exit(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_new_child; /* _n_expr on <self:AOnceExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5876);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOnceExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOnceExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void parser_prod__AOnceExpr__n_kwonce_61d(val* self, val* p0) {
val* var_node /* var node: TKwonce */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val = var_node; /* _n_kwonce on <self:AOnceExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwonce>*/;
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: Object, TKwonce) */
void VIRTUAL_parser_prod__AOnceExpr__n_kwonce_61d(val* self, val* p0) {
parser_prod__AOnceExpr__n_kwonce_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: AOnceExpr, AExpr) */
void parser_prod__AOnceExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_node; /* _n_expr on <self:AOnceExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOnceExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOnceExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: AOnceExpr, Visitor) */
void parser_prod__AOnceExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwonce */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwonce", "src/parser/parser_prod.nit", 5896);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5897);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOnceExpr__visit_all(val* self, val* p0) {
parser_prod__AOnceExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASendExpr#empty_init for (self: ASendExpr) */
void parser_prod__ASendExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASendExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASendExpr__empty_init(val* self) {
parser_prod__ASendExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASendExpr#init_asendexpr for (self: ASendExpr, nullable AExpr) */
void parser_prod__ASendExpr__init_asendexpr(val* self, val* p0) {
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_expr = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASendExpr__empty_init]))(self) /* empty_init on <self:ASendExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5908);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASendExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5909);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASendExpr#init_asendexpr for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ASendExpr__init_asendexpr(val* self, val* p0) {
parser_prod__ASendExpr__init_asendexpr(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASendExpr#replace_child for (self: ASendExpr, ANode, nullable ANode) */
void parser_prod__ASendExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5914);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5917);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ASendExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5920);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASendExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASendExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASendExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASendExpr#n_expr= for (self: ASendExpr, AExpr) */
void parser_prod__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ASendExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ASendExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ASendExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ASendExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASendExpr#visit_all for (self: ASendExpr, Visitor) */
void parser_prod__ASendExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5935);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ASendExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASendExpr__visit_all(val* self, val* p0) {
parser_prod__ASendExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#empty_init for (self: ABinopExpr) */
void parser_prod__ABinopExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABinopExpr__empty_init(val* self) {
parser_prod__ABinopExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#init_abinopexpr for (self: ABinopExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ABinopExpr__init_abinopexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABinopExpr__empty_init]))(self) /* empty_init on <self:ABinopExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5947);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABinopExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5948);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 5949);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ABinopExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 5950);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#init_abinopexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr(val* self, val* p0, val* p1) {
parser_prod__ABinopExpr__init_abinopexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#replace_child for (self: ABinopExpr, ANode, nullable ANode) */
void parser_prod__ABinopExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABinopExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5955);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5958);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABinopExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5961);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 5965);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 5968);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ABinopExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 5971);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABinopExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABinopExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#n_expr= for (self: ABinopExpr, AExpr) */
void parser_prod__ABinopExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABinopExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABinopExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABinopExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#n_expr2= for (self: ABinopExpr, AExpr) */
void parser_prod__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ABinopExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABinopExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ABinopExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#visit_all for (self: ABinopExpr, Visitor) */
void parser_prod__ABinopExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABinopExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 5991);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 5992);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABinopExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABinopExpr__visit_all(val* self, val* p0) {
parser_prod__ABinopExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrExpr#empty_init for (self: AOrExpr) */
void parser_prod__AOrExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AOrExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AOrExpr__empty_init(val* self) {
parser_prod__AOrExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: AOrExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AOrExpr__init_aorexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AOrExpr__empty_init]))(self) /* empty_init on <self:AOrExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6004);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6005);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6006);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6007);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AOrExpr__init_aorexpr(val* self, val* p0, val* p1) {
parser_prod__AOrExpr__init_aorexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOrExpr#replace_child for (self: AOrExpr, ANode, nullable ANode) */
void parser_prod__AOrExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6012);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6015);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val = var_new_child; /* _n_expr on <self:AOrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6018);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6022);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6025);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AOrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6028);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOrExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOrExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: AOrExpr, AExpr) */
void parser_prod__AOrExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val = var_node; /* _n_expr on <self:AOrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOrExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: AOrExpr, AExpr) */
void parser_prod__AOrExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AOrExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: AOrExpr, Visitor) */
void parser_prod__AOrExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6048);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6049);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOrExpr__visit_all(val* self, val* p0) {
parser_prod__AOrExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAndExpr#empty_init for (self: AAndExpr) */
void parser_prod__AAndExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAndExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAndExpr__empty_init(val* self) {
parser_prod__AAndExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: AAndExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AAndExpr__init_aandexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAndExpr__empty_init]))(self) /* empty_init on <self:AAndExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6061);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAndExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6062);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6063);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAndExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6064);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AAndExpr__init_aandexpr(val* self, val* p0, val* p1) {
parser_prod__AAndExpr__init_aandexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAndExpr#replace_child for (self: AAndExpr, ANode, nullable ANode) */
void parser_prod__AAndExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6069);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6072);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAndExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6075);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6079);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6082);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AAndExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6085);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAndExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAndExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: AAndExpr, AExpr) */
void parser_prod__AAndExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val = var_node; /* _n_expr on <self:AAndExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAndExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAndExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: AAndExpr, AExpr) */
void parser_prod__AAndExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAndExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAndExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AAndExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: AAndExpr, Visitor) */
void parser_prod__AAndExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6105);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6106);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAndExpr__visit_all(val* self, val* p0) {
parser_prod__AAndExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#empty_init for (self: AOrElseExpr) */
void parser_prod__AOrElseExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AOrElseExpr__empty_init(val* self) {
parser_prod__AOrElseExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: AOrElseExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AOrElseExpr__init_aorelseexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AOrElseExpr__empty_init]))(self) /* empty_init on <self:AOrElseExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6118);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrElseExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6119);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6120);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrElseExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6121);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AOrElseExpr__init_aorelseexpr(val* self, val* p0, val* p1) {
parser_prod__AOrElseExpr__init_aorelseexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#replace_child for (self: AOrElseExpr, ANode, nullable ANode) */
void parser_prod__AOrElseExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6126);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6129);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val = var_new_child; /* _n_expr on <self:AOrElseExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6132);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6136);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6139);
exit(1);
}
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AOrElseExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6142);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOrElseExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOrElseExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: AOrElseExpr, AExpr) */
void parser_prod__AOrElseExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val = var_node; /* _n_expr on <self:AOrElseExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrElseExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOrElseExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr2= for (self: AOrElseExpr, AExpr) */
void parser_prod__AOrElseExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrElseExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrElseExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AOrElseExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: AOrElseExpr, Visitor) */
void parser_prod__AOrElseExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6162);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6163);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOrElseExpr__visit_all(val* self, val* p0) {
parser_prod__AOrElseExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#empty_init for (self: AImpliesExpr) */
void parser_prod__AImpliesExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AImpliesExpr__empty_init(val* self) {
parser_prod__AImpliesExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: AImpliesExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AImpliesExpr__init_aimpliesexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AImpliesExpr__empty_init]))(self) /* empty_init on <self:AImpliesExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6175);
exit(1);
}
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AImpliesExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6176);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6177);
exit(1);
}
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AImpliesExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6178);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AImpliesExpr__init_aimpliesexpr(val* self, val* p0, val* p1) {
parser_prod__AImpliesExpr__init_aimpliesexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: AImpliesExpr, ANode, nullable ANode) */
void parser_prod__AImpliesExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6183);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6186);
exit(1);
}
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val = var_new_child; /* _n_expr on <self:AImpliesExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6189);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6193);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6196);
exit(1);
}
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AImpliesExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6199);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AImpliesExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AImpliesExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: AImpliesExpr, AExpr) */
void parser_prod__AImpliesExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val = var_node; /* _n_expr on <self:AImpliesExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AImpliesExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AImpliesExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: AImpliesExpr, AExpr) */
void parser_prod__AImpliesExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AImpliesExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AImpliesExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AImpliesExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: AImpliesExpr, Visitor) */
void parser_prod__AImpliesExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6219);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6220);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AImpliesExpr__visit_all(val* self, val* p0) {
parser_prod__AImpliesExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANotExpr#empty_init for (self: ANotExpr) */
void parser_prod__ANotExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ANotExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ANotExpr__empty_init(val* self) {
parser_prod__ANotExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: ANotExpr, nullable TKwnot, nullable AExpr) */
void parser_prod__ANotExpr__init_anotexpr(val* self, val* p0, val* p1) {
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_kwnot = p0;
var_n_expr = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ANotExpr__empty_init]))(self) /* empty_init on <self:ANotExpr>*/;
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6232);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:ANotExpr> */
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6233);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwnot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnot, self) /* parent= on <var_n_kwnot:nullable TKwnot>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6234);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANotExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6235);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: Object, nullable TKwnot, nullable AExpr) */
void VIRTUAL_parser_prod__ANotExpr__init_anotexpr(val* self, val* p0, val* p1) {
parser_prod__ANotExpr__init_anotexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: ANotExpr, ANode, nullable ANode) */
void parser_prod__ANotExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnot */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnot", "src/parser/parser_prod.nit", 6240);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwnot>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnot */
cltype = type_parser_nodes__TKwnot.color;
idtype = type_parser_nodes__TKwnot.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6243);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val = var_new_child; /* _n_kwnot on <self:ANotExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6246);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6250);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6253);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val = var_new_child; /* _n_expr on <self:ANotExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6256);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANotExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANotExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void parser_prod__ANotExpr__n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:ANotExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnot>*/;
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_prod__ANotExpr__n_kwnot_61d(val* self, val* p0) {
parser_prod__ANotExpr__n_kwnot_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void parser_prod__ANotExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val = var_node; /* _n_expr on <self:ANotExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ANotExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ANotExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: ANotExpr, Visitor) */
void parser_prod__ANotExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnot */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnot", "src/parser/parser_prod.nit", 6276);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6277);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANotExpr__visit_all(val* self, val* p0) {
parser_prod__ANotExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEqExpr#empty_init for (self: AEqExpr) */
void parser_prod__AEqExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AEqExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AEqExpr__empty_init(val* self) {
parser_prod__AEqExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: AEqExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AEqExpr__init_aeqexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AEqExpr__empty_init]))(self) /* empty_init on <self:AEqExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6289);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEqExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6290);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6291);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEqExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6292);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AEqExpr__init_aeqexpr(val* self, val* p0, val* p1) {
parser_prod__AEqExpr__init_aeqexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: AEqExpr, ANode, nullable ANode) */
void parser_prod__AEqExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6297);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6300);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AEqExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6303);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6307);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6310);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AEqExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6313);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEqExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEqExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: AEqExpr, AExpr) */
void parser_prod__AEqExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AEqExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AEqExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AEqExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: AEqExpr, AExpr) */
void parser_prod__AEqExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEqExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AEqExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AEqExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: AEqExpr, Visitor) */
void parser_prod__AEqExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6333);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6334);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEqExpr__visit_all(val* self, val* p0) {
parser_prod__AEqExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEeExpr#empty_init for (self: AEeExpr) */
void parser_prod__AEeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AEeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AEeExpr__empty_init(val* self) {
parser_prod__AEeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AEeExpr#init_aeeexpr for (self: AEeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AEeExpr__init_aeeexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AEeExpr__empty_init]))(self) /* empty_init on <self:AEeExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6346);
exit(1);
}
self->attrs[COLOR_parser_nodes__AEeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6347);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6348);
exit(1);
}
self->attrs[COLOR_parser_nodes__AEeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6349);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AEeExpr#init_aeeexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AEeExpr__init_aeeexpr(val* self, val* p0, val* p1) {
parser_prod__AEeExpr__init_aeeexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEeExpr#replace_child for (self: AEeExpr, ANode, nullable ANode) */
void parser_prod__AEeExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AEeExpr___n_expr].val; /* _n_expr on <self:AEeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6354);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6357);
exit(1);
}
self->attrs[COLOR_parser_nodes__AEeExpr___n_expr].val = var_new_child; /* _n_expr on <self:AEeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6360);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AEeExpr___n_expr2].val; /* _n_expr2 on <self:AEeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6364);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6367);
exit(1);
}
self->attrs[COLOR_parser_nodes__AEeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AEeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6370);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEeExpr#n_expr= for (self: AEeExpr, AExpr) */
void parser_prod__AEeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEeExpr___n_expr].val = var_node; /* _n_expr on <self:AEeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AEeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AEeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AEeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEeExpr#n_expr2= for (self: AEeExpr, AExpr) */
void parser_prod__AEeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AEeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AEeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AEeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEeExpr#visit_all for (self: AEeExpr, Visitor) */
void parser_prod__AEeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AEeExpr___n_expr].val; /* _n_expr on <self:AEeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6390);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AEeExpr___n_expr2].val; /* _n_expr2 on <self:AEeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6391);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AEeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEeExpr__visit_all(val* self, val* p0) {
parser_prod__AEeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANeExpr#empty_init for (self: ANeExpr) */
void parser_prod__ANeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ANeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ANeExpr__empty_init(val* self) {
parser_prod__ANeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: ANeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ANeExpr__init_aneexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ANeExpr__empty_init]))(self) /* empty_init on <self:ANeExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6403);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6404);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6405);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ANeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6406);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ANeExpr__init_aneexpr(val* self, val* p0, val* p1) {
parser_prod__ANeExpr__init_aneexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: ANeExpr, ANode, nullable ANode) */
void parser_prod__ANeExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6411);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6414);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ANeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6417);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6421);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6424);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ANeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6427);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: ANeExpr, AExpr) */
void parser_prod__ANeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ANeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ANeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ANeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: ANeExpr, AExpr) */
void parser_prod__ANeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ANeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ANeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ANeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: ANeExpr, Visitor) */
void parser_prod__ANeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6447);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6448);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANeExpr__visit_all(val* self, val* p0) {
parser_prod__ANeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALtExpr#empty_init for (self: ALtExpr) */
void parser_prod__ALtExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALtExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALtExpr__empty_init(val* self) {
parser_prod__ALtExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: ALtExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ALtExpr__init_altexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALtExpr__empty_init]))(self) /* empty_init on <self:ALtExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6460);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALtExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6461);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6462);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALtExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6463);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ALtExpr__init_altexpr(val* self, val* p0, val* p1) {
parser_prod__ALtExpr__init_altexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALtExpr#replace_child for (self: ALtExpr, ANode, nullable ANode) */
void parser_prod__ALtExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6468);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6471);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ALtExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6474);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6478);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6481);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ALtExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6484);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALtExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALtExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: ALtExpr, AExpr) */
void parser_prod__ALtExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALtExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALtExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ALtExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: ALtExpr, AExpr) */
void parser_prod__ALtExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALtExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALtExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ALtExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: ALtExpr, Visitor) */
void parser_prod__ALtExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6504);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6505);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALtExpr__visit_all(val* self, val* p0) {
parser_prod__ALtExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALeExpr#empty_init for (self: ALeExpr) */
void parser_prod__ALeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALeExpr__empty_init(val* self) {
parser_prod__ALeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALeExpr#init_aleexpr for (self: ALeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ALeExpr__init_aleexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALeExpr__empty_init]))(self) /* empty_init on <self:ALeExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6517);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6518);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6519);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6520);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#init_aleexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ALeExpr__init_aleexpr(val* self, val* p0, val* p1) {
parser_prod__ALeExpr__init_aleexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: ALeExpr, ANode, nullable ANode) */
void parser_prod__ALeExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6525);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6528);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ALeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6531);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6535);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6538);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ALeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6541);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: ALeExpr, AExpr) */
void parser_prod__ALeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ALeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: ALeExpr, AExpr) */
void parser_prod__ALeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ALeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: ALeExpr, Visitor) */
void parser_prod__ALeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6561);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6562);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALeExpr__visit_all(val* self, val* p0) {
parser_prod__ALeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALlExpr#empty_init for (self: ALlExpr) */
void parser_prod__ALlExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALlExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALlExpr__empty_init(val* self) {
parser_prod__ALlExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALlExpr#init_allexpr for (self: ALlExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ALlExpr__init_allexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALlExpr__empty_init]))(self) /* empty_init on <self:ALlExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6574);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALlExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6575);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6576);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALlExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6577);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#init_allexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ALlExpr__init_allexpr(val* self, val* p0, val* p1) {
parser_prod__ALlExpr__init_allexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: ALlExpr, ANode, nullable ANode) */
void parser_prod__ALlExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6582);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6585);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ALlExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6588);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6592);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6595);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ALlExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6598);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALlExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALlExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: ALlExpr, AExpr) */
void parser_prod__ALlExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALlExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALlExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ALlExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: ALlExpr, AExpr) */
void parser_prod__ALlExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALlExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALlExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ALlExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: ALlExpr, Visitor) */
void parser_prod__ALlExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6618);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6619);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALlExpr__visit_all(val* self, val* p0) {
parser_prod__ALlExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGtExpr#empty_init for (self: AGtExpr) */
void parser_prod__AGtExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AGtExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AGtExpr__empty_init(val* self) {
parser_prod__AGtExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AGtExpr#init_agtexpr for (self: AGtExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AGtExpr__init_agtexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AGtExpr__empty_init]))(self) /* empty_init on <self:AGtExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6631);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGtExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6632);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6633);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGtExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6634);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#init_agtexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AGtExpr__init_agtexpr(val* self, val* p0, val* p1) {
parser_prod__AGtExpr__init_agtexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: AGtExpr, ANode, nullable ANode) */
void parser_prod__AGtExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6639);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6642);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AGtExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6645);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6649);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6652);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AGtExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6655);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGtExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGtExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: AGtExpr, AExpr) */
void parser_prod__AGtExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGtExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGtExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AGtExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: AGtExpr, AExpr) */
void parser_prod__AGtExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGtExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGtExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AGtExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: AGtExpr, Visitor) */
void parser_prod__AGtExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6675);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6676);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGtExpr__visit_all(val* self, val* p0) {
parser_prod__AGtExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGeExpr#empty_init for (self: AGeExpr) */
void parser_prod__AGeExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AGeExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AGeExpr__empty_init(val* self) {
parser_prod__AGeExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AGeExpr#init_ageexpr for (self: AGeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AGeExpr__init_ageexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AGeExpr__empty_init]))(self) /* empty_init on <self:AGeExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6688);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6689);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6690);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6691);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#init_ageexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AGeExpr__init_ageexpr(val* self, val* p0, val* p1) {
parser_prod__AGeExpr__init_ageexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: AGeExpr, ANode, nullable ANode) */
void parser_prod__AGeExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6696);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6699);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AGeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6702);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6706);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6709);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AGeExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6712);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGeExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: AGeExpr, AExpr) */
void parser_prod__AGeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AGeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: AGeExpr, AExpr) */
void parser_prod__AGeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGeExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AGeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: AGeExpr, Visitor) */
void parser_prod__AGeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6732);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6733);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGeExpr__visit_all(val* self, val* p0) {
parser_prod__AGeExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGgExpr#empty_init for (self: AGgExpr) */
void parser_prod__AGgExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AGgExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AGgExpr__empty_init(val* self) {
parser_prod__AGgExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AGgExpr#init_aggexpr for (self: AGgExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AGgExpr__init_aggexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AGgExpr__empty_init]))(self) /* empty_init on <self:AGgExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6745);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGgExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6746);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6747);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGgExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6748);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#init_aggexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AGgExpr__init_aggexpr(val* self, val* p0, val* p1) {
parser_prod__AGgExpr__init_aggexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: AGgExpr, ANode, nullable ANode) */
void parser_prod__AGgExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6753);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6756);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AGgExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6759);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6763);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6766);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AGgExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6769);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGgExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGgExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: AGgExpr, AExpr) */
void parser_prod__AGgExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGgExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGgExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AGgExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: AGgExpr, AExpr) */
void parser_prod__AGgExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGgExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGgExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AGgExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: AGgExpr, Visitor) */
void parser_prod__AGgExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6789);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6790);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGgExpr__visit_all(val* self, val* p0) {
parser_prod__AGgExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#empty_init for (self: AIsaExpr) */
void parser_prod__AIsaExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIsaExpr__empty_init(val* self) {
parser_prod__AIsaExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: AIsaExpr, nullable AExpr, nullable AType) */
void parser_prod__AIsaExpr__init_aisaexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
var_n_expr = p0;
var_n_type = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIsaExpr__empty_init]))(self) /* empty_init on <self:AIsaExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6802);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIsaExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6803);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6804);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val = var_n_type; /* _n_type on <self:AIsaExpr> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6805);
exit(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: Object, nullable AExpr, nullable AType) */
void VIRTUAL_parser_prod__AIsaExpr__init_aisaexpr(val* self, val* p0, val* p1) {
parser_prod__AIsaExpr__init_aisaexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: AIsaExpr, ANode, nullable ANode) */
void parser_prod__AIsaExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6810);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6813);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val = var_new_child; /* _n_expr on <self:AIsaExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6816);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 6820);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AType>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype10 = type_parser_nodes__AType.color;
idtype11 = type_parser_nodes__AType.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6823);
exit(1);
}
self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val = var_new_child; /* _n_type on <self:AIsaExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6826);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIsaExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIsaExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void parser_prod__AIsaExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val = var_node; /* _n_expr on <self:AIsaExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIsaExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIsaExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void parser_prod__AIsaExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val = var_node; /* _n_type on <self:AIsaExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AIsaExpr__n_type_61d(val* self, val* p0) {
parser_prod__AIsaExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: AIsaExpr, Visitor) */
void parser_prod__AIsaExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6846);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 6847);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIsaExpr__visit_all(val* self, val* p0) {
parser_prod__AIsaExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusExpr#empty_init for (self: APlusExpr) */
void parser_prod__APlusExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APlusExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APlusExpr__empty_init(val* self) {
parser_prod__APlusExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APlusExpr#init_aplusexpr for (self: APlusExpr, nullable AExpr, nullable AExpr) */
void parser_prod__APlusExpr__init_aplusexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APlusExpr__empty_init]))(self) /* empty_init on <self:APlusExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6859);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APlusExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6860);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6861);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APlusExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6862);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#init_aplusexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__APlusExpr__init_aplusexpr(val* self, val* p0, val* p1) {
parser_prod__APlusExpr__init_aplusexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: APlusExpr, ANode, nullable ANode) */
void parser_prod__APlusExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6867);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6870);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:APlusExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6873);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6877);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6880);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:APlusExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6883);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: APlusExpr, AExpr) */
void parser_prod__APlusExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APlusExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APlusExpr__n_expr_61d(val* self, val* p0) {
parser_prod__APlusExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: APlusExpr, AExpr) */
void parser_prod__APlusExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APlusExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APlusExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__APlusExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: APlusExpr, Visitor) */
void parser_prod__APlusExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6903);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6904);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusExpr__visit_all(val* self, val* p0) {
parser_prod__APlusExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#empty_init for (self: AMinusExpr) */
void parser_prod__AMinusExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMinusExpr__empty_init(val* self) {
parser_prod__AMinusExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: AMinusExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AMinusExpr__init_aminusexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMinusExpr__empty_init]))(self) /* empty_init on <self:AMinusExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6916);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMinusExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6917);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6918);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AMinusExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6919);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AMinusExpr__init_aminusexpr(val* self, val* p0, val* p1) {
parser_prod__AMinusExpr__init_aminusexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: AMinusExpr, ANode, nullable ANode) */
void parser_prod__AMinusExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6924);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6927);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AMinusExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6930);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6934);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6937);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AMinusExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6940);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: AMinusExpr, AExpr) */
void parser_prod__AMinusExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AMinusExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AMinusExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AMinusExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: AMinusExpr, AExpr) */
void parser_prod__AMinusExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AMinusExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AMinusExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AMinusExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: AMinusExpr, Visitor) */
void parser_prod__AMinusExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6960);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6961);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusExpr__visit_all(val* self, val* p0) {
parser_prod__AMinusExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#empty_init for (self: AStarshipExpr) */
void parser_prod__AStarshipExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStarshipExpr__empty_init(val* self) {
parser_prod__AStarshipExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: AStarshipExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AStarshipExpr__init_astarshipexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStarshipExpr__empty_init]))(self) /* empty_init on <self:AStarshipExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6973);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarshipExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6974);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 6975);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarshipExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 6976);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AStarshipExpr__init_astarshipexpr(val* self, val* p0, val* p1) {
parser_prod__AStarshipExpr__init_astarshipexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: AStarshipExpr, ANode, nullable ANode) */
void parser_prod__AStarshipExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 6981);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6984);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AStarshipExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6987);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 6991);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 6994);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AStarshipExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 6997);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarshipExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarshipExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: AStarshipExpr, AExpr) */
void parser_prod__AStarshipExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarshipExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarshipExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AStarshipExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: AStarshipExpr, AExpr) */
void parser_prod__AStarshipExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarshipExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarshipExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AStarshipExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: AStarshipExpr, Visitor) */
void parser_prod__AStarshipExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7017);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7018);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarshipExpr__visit_all(val* self, val* p0) {
parser_prod__AStarshipExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarExpr#empty_init for (self: AStarExpr) */
void parser_prod__AStarExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStarExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStarExpr__empty_init(val* self) {
parser_prod__AStarExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStarExpr#init_astarexpr for (self: AStarExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AStarExpr__init_astarexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStarExpr__empty_init]))(self) /* empty_init on <self:AStarExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7030);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7031);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7032);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7033);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#init_astarexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AStarExpr__init_astarexpr(val* self, val* p0, val* p1) {
parser_prod__AStarExpr__init_astarexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: AStarExpr, ANode, nullable ANode) */
void parser_prod__AStarExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7038);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7041);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AStarExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7044);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7048);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7051);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AStarExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7054);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr= for (self: AStarExpr, AExpr) */
void parser_prod__AStarExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AStarExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: AStarExpr, AExpr) */
void parser_prod__AStarExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AStarExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: AStarExpr, Visitor) */
void parser_prod__AStarExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7074);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7075);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarExpr__visit_all(val* self, val* p0) {
parser_prod__AStarExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#empty_init for (self: ASlashExpr) */
void parser_prod__ASlashExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASlashExpr__empty_init(val* self) {
parser_prod__ASlashExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: ASlashExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ASlashExpr__init_aslashexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASlashExpr__empty_init]))(self) /* empty_init on <self:ASlashExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7087);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASlashExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7088);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7089);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ASlashExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7090);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ASlashExpr__init_aslashexpr(val* self, val* p0, val* p1) {
parser_prod__ASlashExpr__init_aslashexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#replace_child for (self: ASlashExpr, ANode, nullable ANode) */
void parser_prod__ASlashExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7095);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7098);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ASlashExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7101);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7105);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7108);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ASlashExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7111);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASlashExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASlashExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr= for (self: ASlashExpr, AExpr) */
void parser_prod__ASlashExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ASlashExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ASlashExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ASlashExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr2= for (self: ASlashExpr, AExpr) */
void parser_prod__ASlashExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ASlashExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ASlashExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ASlashExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#visit_all for (self: ASlashExpr, Visitor) */
void parser_prod__ASlashExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7131);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7132);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASlashExpr__visit_all(val* self, val* p0) {
parser_prod__ASlashExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APercentExpr#empty_init for (self: APercentExpr) */
void parser_prod__APercentExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APercentExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APercentExpr__empty_init(val* self) {
parser_prod__APercentExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APercentExpr#init_apercentexpr for (self: APercentExpr, nullable AExpr, nullable AExpr) */
void parser_prod__APercentExpr__init_apercentexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APercentExpr__empty_init]))(self) /* empty_init on <self:APercentExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7144);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APercentExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7145);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7146);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APercentExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7147);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#init_apercentexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__APercentExpr__init_apercentexpr(val* self, val* p0, val* p1) {
parser_prod__APercentExpr__init_apercentexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APercentExpr#replace_child for (self: APercentExpr, ANode, nullable ANode) */
void parser_prod__APercentExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7152);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7155);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:APercentExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7158);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7162);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7165);
exit(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:APercentExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7168);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APercentExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__APercentExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr= for (self: APercentExpr, AExpr) */
void parser_prod__APercentExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APercentExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APercentExpr__n_expr_61d(val* self, val* p0) {
parser_prod__APercentExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr2= for (self: APercentExpr, AExpr) */
void parser_prod__APercentExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APercentExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APercentExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__APercentExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APercentExpr#visit_all for (self: APercentExpr, Visitor) */
void parser_prod__APercentExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7188);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_prod.nit", 7189);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#APercentExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APercentExpr__visit_all(val* self, val* p0) {
parser_prod__APercentExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#empty_init for (self: AUminusExpr) */
void parser_prod__AUminusExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AUminusExpr__empty_init(val* self) {
parser_prod__AUminusExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: AUminusExpr, nullable TMinus, nullable AExpr) */
void parser_prod__AUminusExpr__init_auminusexpr(val* self, val* p0, val* p1) {
val* var_n_minus /* var n_minus: nullable TMinus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_minus = p0;
var_n_expr = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AUminusExpr__empty_init]))(self) /* empty_init on <self:AUminusExpr>*/;
if (var_n_minus == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7201);
exit(1);
}
self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val = var_n_minus; /* _n_minus on <self:AUminusExpr> */
if (var_n_minus == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7202);
exit(1);
} else {
((void (*)(val*, val*))(var_n_minus->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_minus, self) /* parent= on <var_n_minus:nullable TMinus>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7203);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUminusExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7204);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: Object, nullable TMinus, nullable AExpr) */
void VIRTUAL_parser_prod__AUminusExpr__init_auminusexpr(val* self, val* p0, val* p1) {
parser_prod__AUminusExpr__init_auminusexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: AUminusExpr, ANode, nullable ANode) */
void parser_prod__AUminusExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinus */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_minus", "src/parser/parser_prod.nit", 7209);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TMinus>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TMinus */
cltype = type_parser_nodes__TMinus.color;
idtype = type_parser_nodes__TMinus.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7212);
exit(1);
}
self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val = var_new_child; /* _n_minus on <self:AUminusExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7215);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7219);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7222);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AUminusExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7225);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AUminusExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AUminusExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_minus= for (self: AUminusExpr, TMinus) */
void parser_prod__AUminusExpr__n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val = var_node; /* _n_minus on <self:AUminusExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TMinus>*/;
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_prod__AUminusExpr__n_minus_61d(val* self, val* p0) {
parser_prod__AUminusExpr__n_minus_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_expr= for (self: AUminusExpr, AExpr) */
void parser_prod__AUminusExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUminusExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AUminusExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AUminusExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#visit_all for (self: AUminusExpr, Visitor) */
void parser_prod__AUminusExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinus */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_minus", "src/parser/parser_prod.nit", 7245);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7246);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AUminusExpr__visit_all(val* self, val* p0) {
parser_prod__AUminusExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#empty_init for (self: ANewExpr) */
void parser_prod__ANewExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ANewExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ANewExpr__empty_init(val* self) {
parser_prod__ANewExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#init_anewexpr for (self: ANewExpr, nullable TKwnew, nullable AType, nullable TId, nullable AExprs) */
void parser_prod__ANewExpr__init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwnew = p0;
var_n_type = p1;
var_n_id = p2;
var_n_args = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ANewExpr__empty_init]))(self) /* empty_init on <self:ANewExpr>*/;
if (var_n_kwnew == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7260);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:ANewExpr> */
if (var_n_kwnew == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7261);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnew, self) /* parent= on <var_n_kwnew:nullable TKwnew>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7262);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var_n_type; /* _n_type on <self:ANewExpr> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7263);
exit(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var_n_id; /* _n_id on <self:ANewExpr> */
var = NULL;
if (var_n_id == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId(TId)>*/;
} else {
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7268);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var_n_args; /* _n_args on <self:ANewExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7269);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#init_anewexpr for (self: Object, nullable TKwnew, nullable AType, nullable TId, nullable AExprs) */
void VIRTUAL_parser_prod__ANewExpr__init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ANewExpr__init_anewexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#replace_child for (self: ANewExpr, ANode, nullable ANode) */
void parser_prod__ANewExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnew */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : nullable TId */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : null */;
val* var20 /* : AExprs */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnew", "src/parser/parser_prod.nit", 7274);
exit(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwnew>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnew */
cltype = type_parser_nodes__TKwnew.color;
idtype = type_parser_nodes__TKwnew.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7277);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var_new_child; /* _n_kwnew on <self:ANewExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7280);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 7284);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AType>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype10 = type_parser_nodes__AType.color;
idtype11 = type_parser_nodes__AType.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7287);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var_new_child; /* _n_type on <self:ANewExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7290);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:nullable TId>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype17 = type_parser_nodes__TId.color;
idtype18 = type_parser_nodes__TId.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7297);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var_new_child; /* _n_id on <self:ANewExpr> */
} else {
var19 = NULL;
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var19; /* _n_id on <self:ANewExpr> */
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7304);
exit(1);
}
var21 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___61d_61d]))(var20, var_old_child) /* == on <var20:AExprs>*/;
if (var21){
var22 = NULL;
if (var_new_child == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype25 = type_parser_nodes__AExprs.color;
idtype26 = type_parser_nodes__AExprs.id;
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7307);
exit(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var_new_child; /* _n_args on <self:ANewExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7310);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANewExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANewExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_kwnew= for (self: ANewExpr, TKwnew) */
void parser_prod__ANewExpr__n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: TKwnew */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var_node; /* _n_kwnew on <self:ANewExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnew>*/;
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_kwnew= for (self: Object, TKwnew) */
void VIRTUAL_parser_prod__ANewExpr__n_kwnew_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_kwnew_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_type= for (self: ANewExpr, AType) */
void parser_prod__ANewExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var_node; /* _n_type on <self:ANewExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ANewExpr__n_type_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_id= for (self: ANewExpr, nullable TId) */
void parser_prod__ANewExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var_node; /* _n_id on <self:ANewExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TId(TId)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__ANewExpr__n_id_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_args= for (self: ANewExpr, AExprs) */
void parser_prod__ANewExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var_node; /* _n_args on <self:ANewExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ANewExpr__n_args_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANewExpr#visit_all for (self: ANewExpr, Visitor) */
void parser_prod__ANewExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : nullable TId */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable TId */;
val* var6 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnew", "src/parser/parser_prod.nit", 7342);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_prod.nit", 7343);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7345);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7347);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ANewExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANewExpr__visit_all(val* self, val* p0) {
parser_prod__ANewExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#empty_init for (self: AAttrExpr) */
void parser_prod__AAttrExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAttrExpr__empty_init(val* self) {
parser_prod__AAttrExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#init_aattrexpr for (self: AAttrExpr, nullable AExpr, nullable TAttrid) */
void parser_prod__AAttrExpr__init_aattrexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
var_n_expr = p0;
var_n_id = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAttrExpr__empty_init]))(self) /* empty_init on <self:AAttrExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7359);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7360);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7361);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7362);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TAttrid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#init_aattrexpr for (self: Object, nullable AExpr, nullable TAttrid) */
void VIRTUAL_parser_prod__AAttrExpr__init_aattrexpr(val* self, val* p0, val* p1) {
parser_prod__AAttrExpr__init_aattrexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#replace_child for (self: AAttrExpr, ANode, nullable ANode) */
void parser_prod__AAttrExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TAttrid */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7367);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7370);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7373);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7377);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TAttrid>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAttrid */
cltype10 = type_parser_nodes__TAttrid.color;
idtype11 = type_parser_nodes__TAttrid.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7380);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_new_child; /* _n_id on <self:AAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7383);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_expr= for (self: AAttrExpr, AExpr) */
void parser_prod__AAttrExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_id= for (self: AAttrExpr, TAttrid) */
void parser_prod__AAttrExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAttrid>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AAttrExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAttrExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#visit_all for (self: AAttrExpr, Visitor) */
void parser_prod__AAttrExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7403);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7404);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrExpr__visit_all(val* self, val* p0) {
parser_prod__AAttrExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#empty_init for (self: AAttrAssignExpr) */
void parser_prod__AAttrAssignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAttrAssignExpr__empty_init(val* self) {
parser_prod__AAttrAssignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#init_aattrassignexpr for (self: AAttrAssignExpr, nullable AExpr, nullable TAttrid, nullable TAssign, nullable AExpr) */
void parser_prod__AAttrAssignExpr__init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_expr = p0;
var_n_id = p1;
var_n_assign = p2;
var_n_value = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAttrAssignExpr__empty_init]))(self) /* empty_init on <self:AAttrAssignExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7418);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrAssignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7419);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7420);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrAssignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7421);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TAttrid>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7422);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AAttrAssignExpr> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7423);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7424);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrAssignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7425);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#init_aattrassignexpr for (self: Object, nullable AExpr, nullable TAttrid, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrAssignExpr__init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAttrAssignExpr__init_aattrassignexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#replace_child for (self: AAttrAssignExpr, ANode, nullable ANode) */
void parser_prod__AAttrAssignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TAttrid */;
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
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7430);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7433);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAttrAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7436);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7440);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TAttrid>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAttrid */
cltype10 = type_parser_nodes__TAttrid.color;
idtype11 = type_parser_nodes__TAttrid.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7443);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_new_child; /* _n_id on <self:AAttrAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7446);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 7450);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7453);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_new_child; /* _n_assign on <self:AAttrAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7456);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7460);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7463);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_new_child; /* _n_value on <self:AAttrAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7466);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrAssignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_expr= for (self: AAttrAssignExpr, AExpr) */
void parser_prod__AAttrAssignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_id= for (self: AAttrAssignExpr, TAttrid) */
void parser_prod__AAttrAssignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAttrid>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_assign= for (self: AAttrAssignExpr, TAssign) */
void parser_prod__AAttrAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAssign>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_value= for (self: AAttrAssignExpr, AExpr) */
void parser_prod__AAttrAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#visit_all for (self: AAttrAssignExpr, Visitor) */
void parser_prod__AAttrAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7496);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7497);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 7498);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7499);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrAssignExpr__visit_all(val* self, val* p0) {
parser_prod__AAttrAssignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#empty_init for (self: AAttrReassignExpr) */
void parser_prod__AAttrReassignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAttrReassignExpr__empty_init(val* self) {
parser_prod__AAttrReassignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#init_aattrreassignexpr for (self: AAttrReassignExpr, nullable AExpr, nullable TAttrid, nullable AAssignOp, nullable AExpr) */
void parser_prod__AAttrReassignExpr__init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_expr = p0;
var_n_id = p1;
var_n_assign_op = p2;
var_n_value = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAttrReassignExpr__empty_init]))(self) /* empty_init on <self:AAttrReassignExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7513);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrReassignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7514);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7515);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrReassignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7516);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TAttrid>*/;
}
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7517);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7518);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign_op->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign_op, self) /* parent= on <var_n_assign_op:nullable AAssignOp>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7519);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrReassignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7520);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#init_aattrreassignexpr for (self: Object, nullable AExpr, nullable TAttrid, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrReassignExpr__init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAttrReassignExpr__init_aattrreassignexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#replace_child for (self: AAttrReassignExpr, ANode, nullable ANode) */
void parser_prod__AAttrReassignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TAttrid */;
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
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7525);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7528);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAttrReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7531);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7535);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TAttrid>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAttrid */
cltype10 = type_parser_nodes__TAttrid.color;
idtype11 = type_parser_nodes__TAttrid.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7538);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_new_child; /* _n_id on <self:AAttrReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7541);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 7545);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7548);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_new_child; /* _n_assign_op on <self:AAttrReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7551);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7555);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7558);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_new_child; /* _n_value on <self:AAttrReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7561);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrReassignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_expr= for (self: AAttrReassignExpr, AExpr) */
void parser_prod__AAttrReassignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_id= for (self: AAttrReassignExpr, TAttrid) */
void parser_prod__AAttrReassignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAttrid>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_assign_op= for (self: AAttrReassignExpr, AAssignOp) */
void parser_prod__AAttrReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AAttrReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AAssignOp>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_assign_op_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_value= for (self: AAttrReassignExpr, AExpr) */
void parser_prod__AAttrReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#visit_all for (self: AAttrReassignExpr, Visitor) */
void parser_prod__AAttrReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7591);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7592);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 7593);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7594);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrReassignExpr__visit_all(val* self, val* p0) {
parser_prod__AAttrReassignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#empty_init for (self: ACallExpr) */
void parser_prod__ACallExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ACallExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ACallExpr__empty_init(val* self) {
parser_prod__ACallExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#init_acallexpr for (self: ACallExpr, nullable AExpr, nullable TId, nullable AExprs, Collection[Object]) */
void parser_prod__ACallExpr__init_acallexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
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
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_closure_defs = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ACallExpr__empty_init]))(self) /* empty_init on <self:ACallExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7608);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7609);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7610);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7611);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7612);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7613);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7615);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ACallExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 7616);
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
/* method parser_prod#ACallExpr#init_acallexpr for (self: Object, nullable AExpr, nullable TId, nullable AExprs, Collection[Object]) */
void VIRTUAL_parser_prod__ACallExpr__init_acallexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ACallExpr__init_acallexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#replace_child for (self: ACallExpr, ANode, nullable ANode) */
void parser_prod__ACallExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TId */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExprs */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Range[Int] */;
long var20 /* : Int */;
val* var21 /* : ANodes[AClosureDef] */;
long var22 /* : Int */;
val* var23 /* : Discrete */;
val* var24 /* : Discrete */;
val* var25 /* : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
long var_i /* var i: Int */;
long var28 /* : Int */;
val* var29 /* : ANodes[AClosureDef] */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : ANodes[AClosureDef] */;
val* var38 /* : ANodes[AClosureDef] */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7623);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7626);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ACallExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7629);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7633);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TId>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype10 = type_parser_nodes__TId.color;
idtype11 = type_parser_nodes__TId.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7636);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_new_child; /* _n_id on <self:ACallExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7639);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7643);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExprs>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype17 = type_parser_nodes__AExprs.color;
idtype18 = type_parser_nodes__AExprs.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7646);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_new_child; /* _n_args on <self:ACallExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7649);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = NEW_range__Range(&type_range__Rangekernel__Int);
var20 = 0;
var21 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ACallExpr> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 7653);
exit(1);
}
var22 = ((long (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__length]))(var21) /* length on <var21:ANodes[AClosureDef]>*/;
var23 = BOX_kernel__Int(var20); /* autobox from Int to Discrete */
var24 = BOX_kernel__Int(var22); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var19->class->vft[COLOR_range__Range__without_last]))(var19, var23, var24) /* without_last on <var19:Range[Int]>*/;
CHECK_NEW_range__Range(var19);
var25 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var19) /* iterator on <var19:Range[Int]>*/;
for(;;) {
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[nullable Object]>*/;
if(!var26) break;
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[nullable Object]>*/;
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_i = var28;
var29 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ACallExpr> */
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 7654);
exit(1);
}
var30 = ((val* (*)(val*, long))(var29->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var29, var_i) /* [] on <var29:ANodes[AClosureDef]>*/;
var31 = ((short int (*)(val*, val*))(var30->class->vft[COLOR_kernel__Object___61d_61d]))(var30, var_old_child) /* == on <var30:nullable Object(AClosureDef)>*/;
if (var31){
var32 = NULL;
if (var_new_child == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (var33){
/* <var_new_child:nullable ANode(ANode)> isa AClosureDef */
cltype35 = type_parser_nodes__AClosureDef.color;
idtype36 = type_parser_nodes__AClosureDef.id;
if(cltype35 >= var_new_child->type->table_size) {
var34 = 0;
} else {
var34 = var_new_child->type->type_table[cltype35] == idtype36;
}
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7656);
exit(1);
}
var37 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ACallExpr> */
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 7657);
exit(1);
}
((void (*)(val*, long, val*))(var37->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var37, var_i, var_new_child) /* []= on <var37:ANodes[AClosureDef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AClosureDef)>*/;
} else {
var38 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ACallExpr> */
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 7660);
exit(1);
}
((void (*)(val*, long))(var38->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var38, var_i) /* remove_at on <var38:ANodes[AClosureDef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ACallExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACallExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACallExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_expr= for (self: ACallExpr, AExpr) */
void parser_prod__ACallExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACallExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_id= for (self: ACallExpr, TId) */
void parser_prod__ACallExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ACallExpr__n_id_61d(val* self, val* p0) {
parser_prod__ACallExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_args= for (self: ACallExpr, AExprs) */
void parser_prod__ACallExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ACallExpr__n_args_61d(val* self, val* p0) {
parser_prod__ACallExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallExpr#visit_all for (self: ACallExpr, Visitor) */
void parser_prod__ACallExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : ANodes[AClosureDef] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_n /* var n: AClosureDef */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7686);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7687);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7688);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val; /* _n_closure_defs on <self:ACallExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_closure_defs", "src/parser/parser_prod.nit", 7689);
exit(1);
}
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:ANodes[AClosureDef]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_n = var6;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ACallExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACallExpr__visit_all(val* self, val* p0) {
parser_prod__ACallExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#empty_init for (self: ACallAssignExpr) */
void parser_prod__ACallAssignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ACallAssignExpr__empty_init(val* self) {
parser_prod__ACallAssignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#init_acallassignexpr for (self: ACallAssignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable TAssign, nullable AExpr) */
void parser_prod__ACallAssignExpr__init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign = p3;
var_n_value = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ACallAssignExpr__empty_init]))(self) /* empty_init on <self:ACallAssignExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7706);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallAssignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7707);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7708);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallAssignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7709);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7710);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallAssignExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7711);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7712);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ACallAssignExpr> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7713);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7714);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallAssignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7715);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#init_acallassignexpr for (self: Object, nullable AExpr, nullable TId, nullable AExprs, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__ACallAssignExpr__init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__ACallAssignExpr__init_acallassignexpr(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#replace_child for (self: ACallAssignExpr, ANode, nullable ANode) */
void parser_prod__ACallAssignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TId */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExprs */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : TAssign */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AExpr */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7720);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7723);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ACallAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7726);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7730);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TId>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype10 = type_parser_nodes__TId.color;
idtype11 = type_parser_nodes__TId.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7733);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_new_child; /* _n_id on <self:ACallAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7736);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7740);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExprs>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype17 = type_parser_nodes__AExprs.color;
idtype18 = type_parser_nodes__AExprs.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7743);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_new_child; /* _n_args on <self:ACallAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7746);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 7750);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:TAssign>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAssign */
cltype24 = type_parser_nodes__TAssign.color;
idtype25 = type_parser_nodes__TAssign.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7753);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_new_child; /* _n_assign on <self:ACallAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7756);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7760);
exit(1);
}
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:AExpr>*/;
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype31 = type_parser_nodes__AExpr.color;
idtype32 = type_parser_nodes__AExpr.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7763);
exit(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_new_child; /* _n_value on <self:ACallAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7766);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACallAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACallAssignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_expr= for (self: ACallAssignExpr, AExpr) */
void parser_prod__ACallAssignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_id= for (self: ACallAssignExpr, TId) */
void parser_prod__ACallAssignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_id_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_args= for (self: ACallAssignExpr, AExprs) */
void parser_prod__ACallAssignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_assign= for (self: ACallAssignExpr, TAssign) */
void parser_prod__ACallAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ACallAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAssign>*/;
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_value= for (self: ACallAssignExpr, AExpr) */
void parser_prod__ACallAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallAssignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#visit_all for (self: ACallAssignExpr, Visitor) */
void parser_prod__ACallAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7801);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7802);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7803);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_prod.nit", 7804);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7805);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACallAssignExpr__visit_all(val* self, val* p0) {
parser_prod__ACallAssignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#empty_init for (self: ACallReassignExpr) */
void parser_prod__ACallReassignExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ACallReassignExpr__empty_init(val* self) {
parser_prod__ACallReassignExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#init_acallreassignexpr for (self: ACallReassignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void parser_prod__ACallReassignExpr__init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign_op = p3;
var_n_value = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ACallReassignExpr__empty_init]))(self) /* empty_init on <self:ACallReassignExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7820);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallReassignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7821);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7822);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallReassignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7823);
exit(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7824);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallReassignExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7825);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7826);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ACallReassignExpr> */
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7827);
exit(1);
} else {
((void (*)(val*, val*))(var_n_assign_op->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign_op, self) /* parent= on <var_n_assign_op:nullable AAssignOp>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7828);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallReassignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7829);
exit(1);
} else {
((void (*)(val*, val*))(var_n_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_value, self) /* parent= on <var_n_value:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#init_acallreassignexpr for (self: Object, nullable AExpr, nullable TId, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__ACallReassignExpr__init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__ACallReassignExpr__init_acallreassignexpr(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#replace_child for (self: ACallReassignExpr, ANode, nullable ANode) */
void parser_prod__ACallReassignExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TId */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExprs */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAssignOp */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AExpr */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7834);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7837);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ACallReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7840);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7844);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TId>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype10 = type_parser_nodes__TId.color;
idtype11 = type_parser_nodes__TId.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7847);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_new_child; /* _n_id on <self:ACallReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7850);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7854);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExprs>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype17 = type_parser_nodes__AExprs.color;
idtype18 = type_parser_nodes__AExprs.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7857);
exit(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_new_child; /* _n_args on <self:ACallReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7860);
exit(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 7864);
exit(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:AAssignOp>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAssignOp */
cltype24 = type_parser_nodes__AAssignOp.color;
idtype25 = type_parser_nodes__AAssignOp.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7867);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_new_child; /* _n_assign_op on <self:ACallReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7870);
exit(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7874);
exit(1);
}
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:AExpr>*/;
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype31 = type_parser_nodes__AExpr.color;
idtype32 = type_parser_nodes__AExpr.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7877);
exit(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_new_child; /* _n_value on <self:ACallReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7880);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACallReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACallReassignExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_expr= for (self: ACallReassignExpr, AExpr) */
void parser_prod__ACallReassignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_id= for (self: ACallReassignExpr, TId) */
void parser_prod__ACallReassignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_id_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_args= for (self: ACallReassignExpr, AExprs) */
void parser_prod__ACallReassignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_assign_op= for (self: ACallReassignExpr, AAssignOp) */
void parser_prod__ACallReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ACallReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AAssignOp>*/;
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_assign_op_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_value= for (self: ACallReassignExpr, AExpr) */
void parser_prod__ACallReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallReassignExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_value_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#visit_all for (self: ACallReassignExpr, Visitor) */
void parser_prod__ACallReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 7915);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_prod.nit", 7916);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7917);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_prod.nit", 7918);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_prod.nit", 7919);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACallReassignExpr__visit_all(val* self, val* p0) {
parser_prod__ACallReassignExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#empty_init for (self: ASuperExpr) */
void parser_prod__ASuperExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASuperExpr__empty_init(val* self) {
parser_prod__ASuperExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#init_asuperexpr for (self: ASuperExpr, nullable AQualified, nullable TKwsuper, nullable AExprs) */
void parser_prod__ASuperExpr__init_asuperexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_qualified /* var n_qualified: nullable AQualified */;
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_qualified = p0;
var_n_kwsuper = p1;
var_n_args = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASuperExpr__empty_init]))(self) /* empty_init on <self:ASuperExpr>*/;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var_n_qualified; /* _n_qualified on <self:ASuperExpr> */
var = NULL;
if (var_n_qualified == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_qualified->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_qualified, self) /* parent= on <var_n_qualified:nullable AQualified(AQualified)>*/;
} else {
}
if (var_n_kwsuper == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7936);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExpr> */
if (var_n_kwsuper == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7937);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwsuper->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwsuper, self) /* parent= on <var_n_kwsuper:nullable TKwsuper>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7938);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val = var_n_args; /* _n_args on <self:ASuperExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 7939);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#init_asuperexpr for (self: Object, nullable AQualified, nullable TKwsuper, nullable AExprs) */
void VIRTUAL_parser_prod__ASuperExpr__init_asuperexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ASuperExpr__init_asuperexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#replace_child for (self: ASuperExpr, ANode, nullable ANode) */
void parser_prod__ASuperExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AQualified */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : TKwsuper */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AExprs */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable AQualified>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AQualified */
cltype = type_parser_nodes__AQualified.color;
idtype = type_parser_nodes__AQualified.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7947);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var_new_child; /* _n_qualified on <self:ASuperExpr> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var5; /* _n_qualified on <self:ASuperExpr> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwsuper", "src/parser/parser_prod.nit", 7954);
exit(1);
}
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:TKwsuper>*/;
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwsuper */
cltype11 = type_parser_nodes__TKwsuper.color;
idtype12 = type_parser_nodes__TKwsuper.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7957);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val = var_new_child; /* _n_kwsuper on <self:ASuperExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7960);
exit(1);
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 7964);
exit(1);
}
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:AExprs>*/;
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype18 = type_parser_nodes__AExprs.color;
idtype19 = type_parser_nodes__AExprs.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 7967);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val = var_new_child; /* _n_args on <self:ASuperExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 7970);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_qualified= for (self: ASuperExpr, nullable AQualified) */
void parser_prod__ASuperExpr__n_qualified_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQualified */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var_node; /* _n_qualified on <self:ASuperExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AQualified(AQualified)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_qualified= for (self: Object, nullable AQualified) */
void VIRTUAL_parser_prod__ASuperExpr__n_qualified_61d(val* self, val* p0) {
parser_prod__ASuperExpr__n_qualified_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_kwsuper= for (self: ASuperExpr, TKwsuper) */
void parser_prod__ASuperExpr__n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwsuper>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_prod__ASuperExpr__n_kwsuper_61d(val* self, val* p0) {
parser_prod__ASuperExpr__n_kwsuper_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_args= for (self: ASuperExpr, AExprs) */
void parser_prod__ASuperExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val = var_node; /* _n_args on <self:ASuperExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ASuperExpr__n_args_61d(val* self, val* p0) {
parser_prod__ASuperExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#visit_all for (self: ASuperExpr, Visitor) */
void parser_prod__ASuperExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AQualified */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable AQualified */;
val* var4 /* : TKwsuper */;
val* var5 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 7998);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwsuper", "src/parser/parser_prod.nit", 8000);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8001);
exit(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperExpr__visit_all(val* self, val* p0) {
parser_prod__ASuperExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInitExpr#empty_init for (self: AInitExpr) */
void parser_prod__AInitExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AInitExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AInitExpr__empty_init(val* self) {
parser_prod__AInitExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AInitExpr#init_ainitexpr for (self: AInitExpr, nullable AExpr, nullable TKwinit, nullable AExprs) */
void parser_prod__AInitExpr__init_ainitexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_args /* var n_args: nullable AExprs */;
var_n_expr = p0;
var_n_kwinit = p1;
var_n_args = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AInitExpr__empty_init]))(self) /* empty_init on <self:AInitExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8014);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AInitExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8015);
exit(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwinit == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8016);
exit(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AInitExpr> */
if (var_n_kwinit == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8017);
exit(1);
} else {
((void (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwinit, self) /* parent= on <var_n_kwinit:nullable TKwinit>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser/parser_prod.nit", 8018);
exit(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_n_args; /* _n_args on <self:AInitExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser/parser_prod.nit", 8019);
exit(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#init_ainitexpr for (self: Object, nullable AExpr, nullable TKwinit, nullable AExprs) */
void VIRTUAL_parser_prod__AInitExpr__init_ainitexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AInitExpr__init_ainitexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AInitExpr#replace_child for (self: AInitExpr, ANode, nullable ANode) */
void parser_prod__AInitExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwinit */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AExprs */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_prod.nit", 8024);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8027);
exit(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AInitExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8030);
exit(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwinit", "src/parser/parser_prod.nit", 8034);
exit(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwinit>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwinit */
cltype10 = type_parser_nodes__TKwinit.color;
idtype11 = type_parser_nodes__TKwinit.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8037);
exit(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_new_child; /* _n_kwinit on <self:AInitExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8040);
exit(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_prod.nit", 8044);
exit(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AExprs>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExprs */
cltype17 = type_parser_nodes__AExprs.color;
idtype18 = type_parser_nodes__AExprs.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser_prod.nit", 8047);
exit(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_new_child; /* _n_args on <self:AInitExpr> */
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser/parser_prod.nit", 8050);
exit(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInitExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInitExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_expr= for (self: AInitExpr, AExpr) */
void parser_prod__AInitExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AInitExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AInitExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AInitExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_kwinit= for (self: AInitExpr, TKwinit) */
void parser_prod__AInitExpr__n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: TKwinit */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_node; /* _n_kwinit on <self:AInitExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwinit>*/;
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_kwinit= for (self: Object, TKwinit) */
void VIRTUAL_parser_prod__AInitExpr__n_kwinit_61d(val* self, val* p0) {
parser_prod__AInitExpr__n_kwinit_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_args= for (self: AInitExpr, AExprs) */
void parser_prod__AInitExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_node; /* _n_args on <self:AInitExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExprs>*/;
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__AInitExpr__n_args_61d(val* self, val* p0) {
parser_prod__AInitExpr__n_args_61d(self, p0);
RET_LABEL:;
}
