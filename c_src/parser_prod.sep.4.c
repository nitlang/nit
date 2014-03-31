#include "parser_prod.sep.0.h"
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7773);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7775);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7776);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7789);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AInitExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7790);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwinit == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7791);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AInitExpr> */
if (var_n_kwinit == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7792);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwinit, self) /* parent= on <var_n_kwinit:nullable TKwinit>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7793);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_n_args; /* _n_args on <self:AInitExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7794);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7799);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7802);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:AInitExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7805);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinit");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7809);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7812);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_new_child; /* _n_kwinit on <self:AInitExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7815);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7819);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7822);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_new_child; /* _n_args on <self:AInitExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7825);
show_backtrace(1);
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
/* method parser_prod#AInitExpr#visit_all for (self: AInitExpr, Visitor) */
void parser_prod__AInitExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwinit */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7850);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinit");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7851);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7852);
show_backtrace(1);
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
/* method parser_prod#ABraExpr#init_abraexpr for (self: ABraExpr, nullable AExpr, nullable AExprs) */
void parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
var_n_expr = p0;
var_n_args = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraExpr__empty_init]))(self) /* empty_init on <self:ABraExpr>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7864);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7865);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7866);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7867);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: Object, nullable AExpr, nullable AExprs) */
void VIRTUAL_parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1) {
parser_prod__ABraExpr__init_abraexpr(self, p0, p1);
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7872);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7875);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABraExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7878);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7882);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7885);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_new_child; /* _n_args on <self:ABraExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7888);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
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
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7908);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7909);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7923);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraAssignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7924);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7925);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraAssignExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7926);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7927);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ABraAssignExpr> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7928);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7929);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraAssignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7930);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7935);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7938);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7941);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7945);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7948);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_new_child; /* _n_args on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7951);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7955);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7958);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_new_child; /* _n_assign on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7961);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7965);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7968);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_new_child; /* _n_value on <self:ABraAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 7971);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8001);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8002);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8003);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8004);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8018);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8019);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8020);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8021);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_args->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_args, self) /* parent= on <var_n_args:nullable AExprs>*/;
}
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8022);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8023);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_assign_op->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign_op, self) /* parent= on <var_n_assign_op:nullable AAssignOp>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8024);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8025);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8030);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8033);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8036);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8040);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8043);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_new_child; /* _n_args on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8046);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign_op");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8050);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8053);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_new_child; /* _n_assign_op on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8056);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8060);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8063);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_new_child; /* _n_value on <self:ABraReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8066);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8096);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8097);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign_op");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8098);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8099);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraReassignExpr__visit_all(val* self, val* p0) {
parser_prod__ABraReassignExpr__visit_all(self, p0);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8110);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8111);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8116);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8119);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_new_child; /* _n_id on <self:AVarExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8122);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8137);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8150);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8151);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8152);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8153);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8154);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8155);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8160);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8163);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_new_child; /* _n_id on <self:AVarAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8166);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8170);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8173);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_new_child; /* _n_assign on <self:AVarAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8176);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8180);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8183);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_new_child; /* _n_value on <self:AVarAssignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8186);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8211);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8212);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8213);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8226);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8227);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8228);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8229);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_assign_op->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign_op, self) /* parent= on <var_n_assign_op:nullable AAssignOp>*/;
}
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8230);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8231);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8236);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8239);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_new_child; /* _n_id on <self:AVarReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8242);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign_op");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8246);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8249);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_new_child; /* _n_assign_op on <self:AVarReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8252);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8256);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8259);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_new_child; /* _n_value on <self:AVarReassignExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8262);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8287);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign_op");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8288);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8289);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8302);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ARangeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8303);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8304);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ARangeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8305);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8314);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8317);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_new_child; /* _n_expr on <self:ARangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8320);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8324);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8327);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ARangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8330);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8337);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8367);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8368);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8370);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8386);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8387);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8388);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8389);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8390);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8391);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8392);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8393);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8402);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8405);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_new_child; /* _n_obra on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8408);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8412);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8415);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_new_child; /* _n_expr on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8418);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8422);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8425);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8428);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8432);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8435);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_new_child; /* _n_cbra on <self:ACrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8438);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8445);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8485);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8486);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8487);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8488);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8490);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8506);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8507);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8508);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8509);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8510);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8511);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr2, self) /* parent= on <var_n_expr2:nullable AExpr>*/;
}
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8512);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8513);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8522);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8525);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_new_child; /* _n_obra on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8528);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8532);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8535);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_new_child; /* _n_expr on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8538);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8542);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8545);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_new_child; /* _n_expr2 on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8548);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8552);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8555);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_new_child; /* _n_cbra on <self:AOrangeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8558);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8565);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8605);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8606);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8607);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8608);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8610);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8623);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_n_exprs; /* _n_exprs on <self:AArrayExpr> */
if (var_n_exprs == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8624);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8633);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8636);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_new_child; /* _n_exprs on <self:AArrayExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8639);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8646);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8671);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8673);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8686);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8687);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8699);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_new_child; /* _n_kwself on <self:ASelfExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8702);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8709);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8721);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8736);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8767);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8768);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtrue");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8777);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8780);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_new_child; /* _n_kwtrue on <self:ATrueExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8783);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8790);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtrue");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8815);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8817);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8830);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8831);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwfalse");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8840);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8843);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_new_child; /* _n_kwfalse on <self:AFalseExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8846);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8853);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwfalse");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8878);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8880);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8893);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8894);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnull");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8903);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8906);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_new_child; /* _n_kwnull on <self:ANullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8909);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8916);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnull");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8941);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8943);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8956);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = var_n_number; /* _n_number on <self:AIntExpr> */
if (var_n_number == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8957);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_number");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8966);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8969);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = var_new_child; /* _n_number on <self:AIntExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8972);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 8979);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_number");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9004);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9006);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9019);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9020);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_float");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9029);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9032);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_new_child; /* _n_float on <self:AFloatExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9035);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9042);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_float");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9067);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9069);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9082);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9083);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_char");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9092);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9095);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_new_child; /* _n_char on <self:ACharExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9098);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9105);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_char");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9130);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9132);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9145);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9146);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9155);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9158);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9161);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9168);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9193);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9195);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9207);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9208);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9213);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9216);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AStartStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9219);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9234);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9245);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9246);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9251);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9254);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AMidStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9257);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9272);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9283);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9284);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9289);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9292);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_new_child; /* _n_string on <self:AEndStringExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9295);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9310);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9323);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9324);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9335);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[AExpr]>*/;
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9336);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9338);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9339);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9342);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9350);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9370);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9374);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9389);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9390);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9391);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9392);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9393);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9394);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9403);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9406);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_new_child; /* _n_opar on <self:AParExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9409);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9413);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9416);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_new_child; /* _n_expr on <self:AParExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9419);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9423);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9426);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_new_child; /* _n_cpar on <self:AParExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9429);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9436);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9471);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9472);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9473);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9475);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9491);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9492);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9493);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9494);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9495);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9496);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9497);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9498);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9499);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9500);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9505);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9508);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9511);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9515);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9518);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_new_child; /* _n_kwas on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9521);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9525);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9528);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_new_child; /* _n_opar on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9531);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9535);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9538);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_new_child; /* _n_type on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9541);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9545);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9548);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_new_child; /* _n_cpar on <self:AAsCastExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9551);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9586);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9587);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9588);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9589);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9590);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9606);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9607);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9608);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9609);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9610);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9611);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar>*/;
}
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9612);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9613);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwnot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnot, self) /* parent= on <var_n_kwnot:nullable TKwnot>*/;
}
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9614);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9615);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwnull->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnull, self) /* parent= on <var_n_kwnull:nullable TKwnull>*/;
}
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9616);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9617);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9622);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9625);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_new_child; /* _n_expr on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9628);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9632);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9635);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_new_child; /* _n_kwas on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9638);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9642);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9645);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_new_child; /* _n_opar on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9648);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9652);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9655);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_new_child; /* _n_kwnot on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9658);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnull");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9662);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9665);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_new_child; /* _n_kwnull on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9668);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9672);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9675);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_new_child; /* _n_cpar on <self:AAsNotnullExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9678);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9718);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9719);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9720);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9721);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
var4 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnull");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9722);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9723);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9736);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9737);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwisset->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwisset, self) /* parent= on <var_n_kwisset:nullable TKwisset>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9738);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9739);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9740);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9741);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwisset");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9746);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9749);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_new_child; /* _n_kwisset on <self:AIssetAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9752);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9756);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9759);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_new_child; /* _n_expr on <self:AIssetAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9762);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9766);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9769);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_new_child; /* _n_id on <self:AIssetAttrExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9772);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwisset");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9797);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9798);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9799);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9813);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9814);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwdebug->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwdebug, self) /* parent= on <var_n_kwdebug:nullable TKwdebug>*/;
}
if (var_n_kwtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9815);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9816);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwtype->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwtype, self) /* parent= on <var_n_kwtype:nullable TKwtype>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9817);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9818);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9819);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9820);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdebug");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9825);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9828);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_new_child; /* _n_kwdebug on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9831);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9835);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9838);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_new_child; /* _n_kwtype on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9841);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9845);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9848);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_new_child; /* _n_expr on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9851);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9855);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9858);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_new_child; /* _n_type on <self:ADebugTypeExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9861);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdebug");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9891);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9892);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9893);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9894);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9906);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9907);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9914);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[AExpr]>*/;
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9915);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9917);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9918);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9921);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9932);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9947);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9948);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9950);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9951);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9954);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9955);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9960);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9963);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_new_child; /* _n_opar on <self:AParExprs> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9966);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
var7 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9970);
show_backtrace(1);
}
var8 = ((long (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__length]))(var7) /* length on <var7:ANodes[AExpr]>*/;
var9 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
var10 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_range__Range__without_last]))(var5, var9, var10) /* without_last on <var5:Range[Int]>*/;
var11 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Range[Int]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var14 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var_i = var14;
var15 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9971);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9973);
show_backtrace(1);
}
var23 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9974);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var23->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var23, var_i, var_new_child) /* []= on <var23:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var24 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9977);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9982);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9985);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_new_child; /* _n_cpar on <self:AParExprs> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 9988);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10008);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10009);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10012);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10025);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10026);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10028);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10029);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10032);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10033);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10038);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10041);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_new_child; /* _n_obra on <self:ABraExprs> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10044);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
var7 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10048);
show_backtrace(1);
}
var8 = ((long (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__length]))(var7) /* length on <var7:ANodes[AExpr]>*/;
var9 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
var10 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_range__Range__without_last]))(var5, var9, var10) /* without_last on <var5:Range[Int]>*/;
var11 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Range[Int]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var14 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var_i = var14;
var15 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10049);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10051);
show_backtrace(1);
}
var23 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10052);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var23->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var23, var_i, var_new_child) /* []= on <var23:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var24 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10055);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10060);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10063);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_new_child; /* _n_cbra on <self:ABraExprs> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10066);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10086);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10087);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10090);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10101);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_n_pluseq; /* _n_pluseq on <self:APlusAssignOp> */
if (var_n_pluseq == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10102);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_pluseq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10107);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10110);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_new_child; /* _n_pluseq on <self:APlusAssignOp> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10113);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_pluseq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10128);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10139);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_n_minuseq; /* _n_minuseq on <self:AMinusAssignOp> */
if (var_n_minuseq == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10140);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minuseq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10145);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10148);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_new_child; /* _n_minuseq on <self:AMinusAssignOp> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10151);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minuseq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10166);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusAssignOp__visit_all(val* self, val* p0) {
parser_prod__AMinusAssignOp__visit_all(self, p0);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10184);
show_backtrace(1);
}
var6 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10185);
show_backtrace(1);
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_n) /* add on <var6:ANodes[TId]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(TId)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10188);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10189);
show_backtrace(1);
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
/* method parser_prod#AModuleName#replace_child for (self: AModuleName, ANode, nullable ANode) */
void parser_prod__AModuleName__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TQuad */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : Range[Int] */;
long var7 /* : Int */;
val* var8 /* : ANodes[TId] */;
long var9 /* : Int */;
val* var10 /* : Discrete */;
val* var11 /* : Discrete */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var_i /* var i: Int */;
long var15 /* : Int */;
val* var16 /* : ANodes[TId] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ANodes[TId] */;
val* var25 /* : ANodes[TId] */;
val* var26 /* : TId */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TQuad>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TQuad */
cltype = type_parser_nodes__TQuad.color;
idtype = type_parser_nodes__TQuad.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10197);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var_new_child; /* _n_quad on <self:AModuleName> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var5; /* _n_quad on <self:AModuleName> */
}
goto RET_LABEL;
} else {
}
var6 = NEW_range__Range(&type_range__Rangekernel__Int);
var7 = 0;
var8 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10204);
show_backtrace(1);
}
var9 = ((long (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__length]))(var8) /* length on <var8:ANodes[TId]>*/;
var10 = BOX_kernel__Int(var7); /* autobox from Int to Discrete */
var11 = BOX_kernel__Int(var9); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_range__Range__without_last]))(var6, var10, var11) /* without_last on <var6:Range[Int]>*/;
var12 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Range[Int]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var15 = ((struct instance_kernel__Int*)var14)->value; /* autounbox from nullable Object to Int */;
var_i = var15;
var16 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10205);
show_backtrace(1);
}
var17 = ((val* (*)(val*, long))(var16->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var16, var_i) /* [] on <var16:ANodes[TId]>*/;
var18 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_old_child) /* == on <var17:nullable Object(TId)>*/;
if (var18){
var19 = NULL;
if (var_new_child == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype22 = type_parser_nodes__TId.color;
idtype23 = type_parser_nodes__TId.id;
if(cltype22 >= var_new_child->type->table_size) {
var21 = 0;
} else {
var21 = var_new_child->type->type_table[cltype22] == idtype23;
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10207);
show_backtrace(1);
}
var24 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10208);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var24->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var24, var_i, var_new_child) /* []= on <var24:ANodes[TId]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(TId)>*/;
} else {
var25 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10211);
show_backtrace(1);
}
((void (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var25, var_i) /* remove_at on <var25:ANodes[TId]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var26 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10216);
show_backtrace(1);
}
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:TId>*/;
if (var27){
var28 = NULL;
if (var_new_child == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype31 = type_parser_nodes__TId.color;
idtype32 = type_parser_nodes__TId.id;
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10219);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = var_new_child; /* _n_id on <self:AModuleName> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10222);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AModuleName__replace_child(val* self, val* p0, val* p1) {
parser_prod__AModuleName__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
void parser_prod__AModuleName__n_quad_61d(val* self, val* p0) {
val* var_node /* var node: nullable TQuad */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var_node; /* _n_quad on <self:AModuleName> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TQuad(TQuad)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: Object, nullable TQuad) */
void VIRTUAL_parser_prod__AModuleName__n_quad_61d(val* self, val* p0) {
parser_prod__AModuleName__n_quad_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: AModuleName, TId) */
void parser_prod__AModuleName__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = var_node; /* _n_id on <self:AModuleName> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AModuleName__n_id_61d(val* self, val* p0) {
parser_prod__AModuleName__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: AModuleName, Visitor) */
void parser_prod__AModuleName__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TQuad */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TQuad */;
val* var4 /* : ANodes[TId] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_n /* var n: TId */;
val* var8 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10245);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10247);
show_backtrace(1);
}
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:ANodes[TId]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_n = var7;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10250);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AModuleName__visit_all(val* self, val* p0) {
parser_prod__AModuleName__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternCalls#empty_init for (self: AExternCalls) */
void parser_prod__AExternCalls__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExternCalls#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExternCalls__empty_init(val* self) {
parser_prod__AExternCalls__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: AExternCalls, nullable TKwimport, Collection[Object]) */
void parser_prod__AExternCalls__init_aexterncalls(val* self, val* p0, val* p1) {
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_extern_calls /* var n_extern_calls: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[AExternCall] */;
var_n_kwimport = p0;
var_n_extern_calls = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExternCalls__empty_init]))(self) /* empty_init on <self:AExternCalls>*/;
if (var_n_kwimport == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10262);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10263);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwimport->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwimport, self) /* parent= on <var_n_kwimport:nullable TKwimport>*/;
}
var = ((val* (*)(val*))(var_n_extern_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_extern_calls) /* iterator on <var_n_extern_calls:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa AExternCall */
cltype = type_parser_nodes__AExternCall.color;
idtype = type_parser_nodes__AExternCall.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10265);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10266);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExternCall]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExternCall)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: Object, nullable TKwimport, Collection[Object]) */
void VIRTUAL_parser_prod__AExternCalls__init_aexterncalls(val* self, val* p0, val* p1) {
parser_prod__AExternCalls__init_aexterncalls(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: AExternCalls, ANode, nullable ANode) */
void parser_prod__AExternCalls__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwimport */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Range[Int] */;
long var6 /* : Int */;
val* var7 /* : ANodes[AExternCall] */;
long var8 /* : Int */;
val* var9 /* : Discrete */;
val* var10 /* : Discrete */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
long var_i /* var i: Int */;
long var14 /* : Int */;
val* var15 /* : ANodes[AExternCall] */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[AExternCall] */;
val* var24 /* : ANodes[AExternCall] */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10273);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwimport>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwimport */
cltype = type_parser_nodes__TKwimport.color;
idtype = type_parser_nodes__TKwimport.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10276);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val = var_new_child; /* _n_kwimport on <self:AExternCalls> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10279);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
var7 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10283);
show_backtrace(1);
}
var8 = ((long (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__length]))(var7) /* length on <var7:ANodes[AExternCall]>*/;
var9 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
var10 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_range__Range__without_last]))(var5, var9, var10) /* without_last on <var5:Range[Int]>*/;
var11 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Range[Int]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var14 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var_i = var14;
var15 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10284);
show_backtrace(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:ANodes[AExternCall]>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_old_child) /* == on <var16:nullable Object(AExternCall)>*/;
if (var17){
var18 = NULL;
if (var_new_child == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
/* <var_new_child:nullable ANode(ANode)> isa AExternCall */
cltype21 = type_parser_nodes__AExternCall.color;
idtype22 = type_parser_nodes__AExternCall.id;
if(cltype21 >= var_new_child->type->table_size) {
var20 = 0;
} else {
var20 = var_new_child->type->type_table[cltype21] == idtype22;
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10286);
show_backtrace(1);
}
var23 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10287);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var23->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var23, var_i, var_new_child) /* []= on <var23:ANodes[AExternCall]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExternCall)>*/;
} else {
var24 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10290);
show_backtrace(1);
}
((void (*)(val*, long))(var24->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var24, var_i) /* remove_at on <var24:ANodes[AExternCall]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternCalls__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternCalls__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void parser_prod__AExternCalls__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val = var_node; /* _n_kwimport on <self:AExternCalls> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwimport>*/;
RET_LABEL:;
}
/* method parser_prod#AExternCalls#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_prod__AExternCalls__n_kwimport_61d(val* self, val* p0) {
parser_prod__AExternCalls__n_kwimport_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: AExternCalls, Visitor) */
void parser_prod__AExternCalls__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwimport */;
val* var1 /* : ANodes[AExternCall] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: AExternCall */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10306);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_calls");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10307);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[AExternCall]>*/;
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
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternCalls__visit_all(val* self, val* p0) {
parser_prod__AExternCalls__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternCall#empty_init for (self: AExternCall) */
void parser_prod__AExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExternCall__empty_init(val* self) {
parser_prod__AExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExternCall#init_aexterncall for (self: AExternCall) */
void parser_prod__AExternCall__init_aexterncall(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExternCall__empty_init]))(self) /* empty_init on <self:AExternCall>*/;
RET_LABEL:;
}
/* method parser_prod#AExternCall#init_aexterncall for (self: Object) */
void VIRTUAL_parser_prod__AExternCall__init_aexterncall(val* self) {
parser_prod__AExternCall__init_aexterncall(self);
RET_LABEL:;
}
/* method parser_prod#AExternCall#replace_child for (self: AExternCall, ANode, nullable ANode) */
void parser_prod__AExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod#AExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternCall#visit_all for (self: AExternCall, Visitor) */
void parser_prod__AExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod#AExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternCall__visit_all(val* self, val* p0) {
parser_prod__AExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#empty_init for (self: ASuperExternCall) */
void parser_prod__ASuperExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASuperExternCall__empty_init(val* self) {
parser_prod__ASuperExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: ASuperExternCall, nullable TKwsuper) */
void parser_prod__ASuperExternCall__init_asuperexterncall(val* self, val* p0) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
var_n_kwsuper = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASuperExternCall__empty_init]))(self) /* empty_init on <self:ASuperExternCall>*/;
if (var_n_kwsuper == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10338);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10339);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwsuper->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwsuper, self) /* parent= on <var_n_kwsuper:nullable TKwsuper>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: Object, nullable TKwsuper) */
void VIRTUAL_parser_prod__ASuperExternCall__init_asuperexterncall(val* self, val* p0) {
parser_prod__ASuperExternCall__init_asuperexterncall(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#replace_child for (self: ASuperExternCall, ANode, nullable ANode) */
void parser_prod__ASuperExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwsuper */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10344);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwsuper>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwsuper */
cltype = type_parser_nodes__TKwsuper.color;
idtype = type_parser_nodes__TKwsuper.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10347);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val = var_new_child; /* _n_kwsuper on <self:ASuperExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10350);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
