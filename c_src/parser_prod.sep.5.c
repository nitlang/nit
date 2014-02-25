#include "parser_prod.sep.0.h"
/* method parser_prod#ASuperExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void parser_prod__ASuperExternCall__n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwsuper>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_prod__ASuperExternCall__n_kwsuper_61d(val* self, val* p0) {
parser_prod__ASuperExternCall__n_kwsuper_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: ASuperExternCall, Visitor) */
void parser_prod__ASuperExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10365);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperExternCall__visit_all(val* self, val* p0) {
parser_prod__ASuperExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#empty_init for (self: ALocalPropExternCall) */
void parser_prod__ALocalPropExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALocalPropExternCall__empty_init(val* self) {
parser_prod__ALocalPropExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: ALocalPropExternCall, nullable AMethid) */
void parser_prod__ALocalPropExternCall__init_alocalpropexterncall(val* self, val* p0) {
val* var_n_methid /* var n_methid: nullable AMethid */;
var_n_methid = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALocalPropExternCall__empty_init]))(self) /* empty_init on <self:ALocalPropExternCall>*/;
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10376);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:ALocalPropExternCall> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10377);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__ALocalPropExternCall__init_alocalpropexterncall(val* self, val* p0) {
parser_prod__ALocalPropExternCall__init_alocalpropexterncall(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: ALocalPropExternCall, ANode, nullable ANode) */
void parser_prod__ALocalPropExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AMethid */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_methid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10382);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AMethid>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype = type_parser_nodes__AMethid.color;
idtype = type_parser_nodes__AMethid.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10385);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val = var_new_child; /* _n_methid on <self:ALocalPropExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10388);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALocalPropExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALocalPropExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void parser_prod__ALocalPropExternCall__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val = var_node; /* _n_methid on <self:ALocalPropExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AMethid>*/;
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: Object, AMethid) */
void VIRTUAL_parser_prod__ALocalPropExternCall__n_methid_61d(val* self, val* p0) {
parser_prod__ALocalPropExternCall__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: ALocalPropExternCall, Visitor) */
void parser_prod__ALocalPropExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_methid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10403);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALocalPropExternCall__visit_all(val* self, val* p0) {
parser_prod__ALocalPropExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#empty_init for (self: AFullPropExternCall) */
void parser_prod__AFullPropExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AFullPropExternCall__empty_init(val* self) {
parser_prod__AFullPropExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: AFullPropExternCall, nullable AType, nullable TDot, nullable AMethid) */
void parser_prod__AFullPropExternCall__init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_type = p0;
var_n_dot = p1;
var_n_methid = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AFullPropExternCall__empty_init]))(self) /* empty_init on <self:AFullPropExternCall>*/;
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10416);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AFullPropExternCall> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10417);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:AFullPropExternCall> */
var = NULL;
if (var_n_dot == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_dot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_dot, self) /* parent= on <var_n_dot:nullable TDot(TDot)>*/;
} else {
}
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10422);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:AFullPropExternCall> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10423);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: Object, nullable AType, nullable TDot, nullable AMethid) */
void VIRTUAL_parser_prod__AFullPropExternCall__init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
parser_prod__AFullPropExternCall__init_afullpropexterncall(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: AFullPropExternCall, ANode, nullable ANode) */
void parser_prod__AFullPropExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable TDot */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : AMethid */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10428);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AType>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10431);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val = var_new_child; /* _n_type on <self:AFullPropExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10434);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable TDot>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TDot */
cltype10 = type_parser_nodes__TDot.color;
idtype11 = type_parser_nodes__TDot.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10441);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = var_new_child; /* _n_dot on <self:AFullPropExternCall> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = var12; /* _n_dot on <self:AFullPropExternCall> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_methid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10448);
show_backtrace(1);
}
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:AMethid>*/;
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype18 = type_parser_nodes__AMethid.color;
idtype19 = type_parser_nodes__AMethid.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10451);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val = var_new_child; /* _n_methid on <self:AFullPropExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10454);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFullPropExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFullPropExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void parser_prod__AFullPropExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val = var_node; /* _n_type on <self:AFullPropExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AFullPropExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AFullPropExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
void parser_prod__AFullPropExternCall__n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = var_node; /* _n_dot on <self:AFullPropExternCall> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TDot(TDot)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: Object, nullable TDot) */
void VIRTUAL_parser_prod__AFullPropExternCall__n_dot_61d(val* self, val* p0) {
parser_prod__AFullPropExternCall__n_dot_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void parser_prod__AFullPropExternCall__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val = var_node; /* _n_methid on <self:AFullPropExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AMethid>*/;
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: Object, AMethid) */
void VIRTUAL_parser_prod__AFullPropExternCall__n_methid_61d(val* self, val* p0) {
parser_prod__AFullPropExternCall__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: AFullPropExternCall, Visitor) */
void parser_prod__AFullPropExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TDot */;
val* var5 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10481);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10483);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_methid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10485);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFullPropExternCall__visit_all(val* self, val* p0) {
parser_prod__AFullPropExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#empty_init for (self: AInitPropExternCall) */
void parser_prod__AInitPropExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AInitPropExternCall__empty_init(val* self) {
parser_prod__AInitPropExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: AInitPropExternCall, nullable AType) */
void parser_prod__AInitPropExternCall__init_ainitpropexterncall(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
var_n_type = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AInitPropExternCall__empty_init]))(self) /* empty_init on <self:AInitPropExternCall>*/;
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10496);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AInitPropExternCall> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10497);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AInitPropExternCall__init_ainitpropexterncall(val* self, val* p0) {
parser_prod__AInitPropExternCall__init_ainitpropexterncall(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: AInitPropExternCall, ANode, nullable ANode) */
void parser_prod__AInitPropExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10502);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AType>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10505);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val = var_new_child; /* _n_type on <self:AInitPropExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10508);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInitPropExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInitPropExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void parser_prod__AInitPropExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val = var_node; /* _n_type on <self:AInitPropExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AInitPropExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AInitPropExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: AInitPropExternCall, Visitor) */
void parser_prod__AInitPropExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10523);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInitPropExternCall__visit_all(val* self, val* p0) {
parser_prod__AInitPropExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#empty_init for (self: ACastAsExternCall) */
void parser_prod__ACastAsExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ACastAsExternCall__empty_init(val* self) {
parser_prod__ACastAsExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: ACastAsExternCall, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void parser_prod__ACastAsExternCall__init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_from_type /* var n_from_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_to_type /* var n_to_type: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_from_type = p0;
var_n_dot = p1;
var_n_kwas = p2;
var_n_to_type = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ACastAsExternCall__empty_init]))(self) /* empty_init on <self:ACastAsExternCall>*/;
if (var_n_from_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10537);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val = var_n_from_type; /* _n_from_type on <self:ACastAsExternCall> */
if (var_n_from_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10538);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_from_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_from_type, self) /* parent= on <var_n_from_type:nullable AType>*/;
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:ACastAsExternCall> */
var = NULL;
if (var_n_dot == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_dot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_dot, self) /* parent= on <var_n_dot:nullable TDot(TDot)>*/;
} else {
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10543);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:ACastAsExternCall> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10544);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_to_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10545);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val = var_n_to_type; /* _n_to_type on <self:ACastAsExternCall> */
if (var_n_to_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10546);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_to_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_to_type, self) /* parent= on <var_n_to_type:nullable AType>*/;
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: Object, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void VIRTUAL_parser_prod__ACastAsExternCall__init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ACastAsExternCall__init_acastasexterncall(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#replace_child for (self: ACastAsExternCall, ANode, nullable ANode) */
void parser_prod__ACastAsExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable TDot */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : TKwas */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AType */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_from_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10551);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AType>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10554);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val = var_new_child; /* _n_from_type on <self:ACastAsExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10557);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable TDot>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TDot */
cltype10 = type_parser_nodes__TDot.color;
idtype11 = type_parser_nodes__TDot.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10564);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = var_new_child; /* _n_dot on <self:ACastAsExternCall> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = var12; /* _n_dot on <self:ACastAsExternCall> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10571);
show_backtrace(1);
}
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:TKwas>*/;
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwas */
cltype18 = type_parser_nodes__TKwas.color;
idtype19 = type_parser_nodes__TKwas.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10574);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val = var_new_child; /* _n_kwas on <self:ACastAsExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10577);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_to_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10581);
show_backtrace(1);
}
var21 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___61d_61d]))(var20, var_old_child) /* == on <var20:AType>*/;
if (var21){
var22 = NULL;
if (var_new_child == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype25 = type_parser_nodes__AType.color;
idtype26 = type_parser_nodes__AType.id;
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10584);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val = var_new_child; /* _n_to_type on <self:ACastAsExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10587);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACastAsExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACastAsExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_from_type= for (self: ACastAsExternCall, AType) */
void parser_prod__ACastAsExternCall__n_from_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val = var_node; /* _n_from_type on <self:ACastAsExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_from_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_from_type_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_from_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_dot= for (self: ACastAsExternCall, nullable TDot) */
void parser_prod__ACastAsExternCall__n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = var_node; /* _n_dot on <self:ACastAsExternCall> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TDot(TDot)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_dot= for (self: Object, nullable TDot) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_dot_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_dot_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_kwas= for (self: ACastAsExternCall, TKwas) */
void parser_prod__ACastAsExternCall__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val = var_node; /* _n_kwas on <self:ACastAsExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwas>*/;
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_kwas_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_to_type= for (self: ACastAsExternCall, AType) */
void parser_prod__ACastAsExternCall__n_to_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val = var_node; /* _n_to_type on <self:ACastAsExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_to_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_to_type_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_to_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#visit_all for (self: ACastAsExternCall, Visitor) */
void parser_prod__ACastAsExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TDot */;
val* var5 /* : TKwas */;
val* var6 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_from_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10619);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10621);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10623);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
var6 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_to_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10624);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACastAsExternCall__visit_all(val* self, val* p0) {
parser_prod__ACastAsExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#empty_init for (self: AAsNullableExternCall) */
void parser_prod__AAsNullableExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAsNullableExternCall__empty_init(val* self) {
parser_prod__AAsNullableExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#init_aasnullableexterncall for (self: AAsNullableExternCall, nullable AType, nullable TKwas, nullable TKwnullable) */
void parser_prod__AAsNullableExternCall__init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnullable = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAsNullableExternCall__empty_init]))(self) /* empty_init on <self:AAsNullableExternCall>*/;
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10637);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNullableExternCall> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10638);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10639);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNullableExternCall> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10640);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_kwnullable == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10641);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var_n_kwnullable == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10642);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwnullable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnullable, self) /* parent= on <var_n_kwnullable:nullable TKwnullable>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#init_aasnullableexterncall for (self: Object, nullable AType, nullable TKwas, nullable TKwnullable) */
void VIRTUAL_parser_prod__AAsNullableExternCall__init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2) {
parser_prod__AAsNullableExternCall__init_aasnullableexterncall(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#replace_child for (self: AAsNullableExternCall, ANode, nullable ANode) */
void parser_prod__AAsNullableExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
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
val* var12 /* : TKwnullable */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10647);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AType>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10650);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val = var_new_child; /* _n_type on <self:AAsNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10653);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10657);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10660);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val = var_new_child; /* _n_kwas on <self:AAsNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10663);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10667);
show_backtrace(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TKwnullable>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnullable */
cltype17 = type_parser_nodes__TKwnullable.color;
idtype18 = type_parser_nodes__TKwnullable.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10670);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_new_child; /* _n_kwnullable on <self:AAsNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10673);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsNullableExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsNullableExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_type= for (self: AAsNullableExternCall, AType) */
void parser_prod__AAsNullableExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AAsNullableExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AAsNullableExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwas= for (self: AAsNullableExternCall, TKwas) */
void parser_prod__AAsNullableExternCall__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwas>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsNullableExternCall__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsNullableExternCall__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwnullable= for (self: AAsNullableExternCall, TKwnullable) */
void parser_prod__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnullable>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwnullable= for (self: Object, TKwnullable) */
void VIRTUAL_parser_prod__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AAsNullableExternCall__n_kwnullable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#visit_all for (self: AAsNullableExternCall, Visitor) */
void parser_prod__AAsNullableExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10698);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10699);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10700);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsNullableExternCall__visit_all(val* self, val* p0) {
parser_prod__AAsNullableExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#empty_init for (self: AAsNotNullableExternCall) */
void parser_prod__AAsNotNullableExternCall__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__empty_init(val* self) {
parser_prod__AAsNotNullableExternCall__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall for (self: AAsNotNullableExternCall, nullable AType, nullable TKwas, nullable TKwnot, nullable TKwnullable) */
void parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnot = p2;
var_n_kwnullable = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAsNotNullableExternCall__empty_init]))(self) /* empty_init on <self:AAsNotNullableExternCall>*/;
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10714);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNotNullableExternCall> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10715);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10716);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var_n_kwas == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10717);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwas->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwas, self) /* parent= on <var_n_kwas:nullable TKwas>*/;
}
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10718);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var_n_kwnot == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10719);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwnot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnot, self) /* parent= on <var_n_kwnot:nullable TKwnot>*/;
}
if (var_n_kwnullable == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10720);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var_n_kwnullable == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10721);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwnullable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnullable, self) /* parent= on <var_n_kwnullable:nullable TKwnullable>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall for (self: Object, nullable AType, nullable TKwas, nullable TKwnot, nullable TKwnullable) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#replace_child for (self: AAsNotNullableExternCall, ANode, nullable ANode) */
void parser_prod__AAsNotNullableExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
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
val* var12 /* : TKwnot */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : TKwnullable */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10726);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AType>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10729);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val = var_new_child; /* _n_type on <self:AAsNotNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10732);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10736);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10739);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_new_child; /* _n_kwas on <self:AAsNotNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10742);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10746);
show_backtrace(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TKwnot>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnot */
cltype17 = type_parser_nodes__TKwnot.color;
idtype18 = type_parser_nodes__TKwnot.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10749);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_new_child; /* _n_kwnot on <self:AAsNotNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10752);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10756);
show_backtrace(1);
}
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:TKwnullable>*/;
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnullable */
cltype24 = type_parser_nodes__TKwnullable.color;
idtype25 = type_parser_nodes__TKwnullable.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10759);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_new_child; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10762);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsNotNullableExternCall__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_type= for (self: AAsNotNullableExternCall, AType) */
void parser_prod__AAsNotNullableExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNotNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwas= for (self: AAsNotNullableExternCall, TKwas) */
void parser_prod__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwas>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnot= for (self: AAsNotNullableExternCall, TKwnot) */
void parser_prod__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnot>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_kwnot_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnullable= for (self: AAsNotNullableExternCall, TKwnullable) */
void parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnullable>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnullable= for (self: Object, TKwnullable) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#visit_all for (self: AAsNotNullableExternCall, Visitor) */
void parser_prod__AAsNotNullableExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnot */;
val* var3 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10792);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10793);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10794);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10795);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__visit_all(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInLanguage#empty_init for (self: AInLanguage) */
void parser_prod__AInLanguage__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AInLanguage#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AInLanguage__empty_init(val* self) {
parser_prod__AInLanguage__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AInLanguage#init_ainlanguage for (self: AInLanguage, nullable TKwin, nullable TString) */
void parser_prod__AInLanguage__init_ainlanguage(val* self, val* p0, val* p1) {
val* var_n_kwin /* var n_kwin: nullable TKwin */;
val* var_n_string /* var n_string: nullable TString */;
var_n_kwin = p0;
var_n_string = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AInLanguage__empty_init]))(self) /* empty_init on <self:AInLanguage>*/;
if (var_n_kwin == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10807);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val = var_n_kwin; /* _n_kwin on <self:AInLanguage> */
if (var_n_kwin == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10808);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwin->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwin, self) /* parent= on <var_n_kwin:nullable TKwin>*/;
}
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10809);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val = var_n_string; /* _n_string on <self:AInLanguage> */
if (var_n_string == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10810);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_string->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_string, self) /* parent= on <var_n_string:nullable TString>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#init_ainlanguage for (self: Object, nullable TKwin, nullable TString) */
void VIRTUAL_parser_prod__AInLanguage__init_ainlanguage(val* self, val* p0, val* p1) {
parser_prod__AInLanguage__init_ainlanguage(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AInLanguage#replace_child for (self: AInLanguage, ANode, nullable ANode) */
void parser_prod__AInLanguage__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwin */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TString */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwin");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10815);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwin>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwin */
cltype = type_parser_nodes__TKwin.color;
idtype = type_parser_nodes__TKwin.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10818);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val = var_new_child; /* _n_kwin on <self:AInLanguage> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10821);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10825);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TString>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TString */
cltype10 = type_parser_nodes__TString.color;
idtype11 = type_parser_nodes__TString.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10828);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val = var_new_child; /* _n_string on <self:AInLanguage> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10831);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInLanguage__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInLanguage__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_kwin= for (self: AInLanguage, TKwin) */
void parser_prod__AInLanguage__n_kwin_61d(val* self, val* p0) {
val* var_node /* var node: TKwin */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val = var_node; /* _n_kwin on <self:AInLanguage> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwin>*/;
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_kwin= for (self: Object, TKwin) */
void VIRTUAL_parser_prod__AInLanguage__n_kwin_61d(val* self, val* p0) {
parser_prod__AInLanguage__n_kwin_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_string= for (self: AInLanguage, TString) */
void parser_prod__AInLanguage__n_string_61d(val* self, val* p0) {
val* var_node /* var node: TString */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val = var_node; /* _n_string on <self:AInLanguage> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TString>*/;
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_string= for (self: Object, TString) */
void VIRTUAL_parser_prod__AInLanguage__n_string_61d(val* self, val* p0) {
parser_prod__AInLanguage__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInLanguage#visit_all for (self: AInLanguage, Visitor) */
void parser_prod__AInLanguage__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwin */;
val* var1 /* : TString */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwin");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10851);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10852);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AInLanguage#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInLanguage__visit_all(val* self, val* p0) {
parser_prod__AInLanguage__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#empty_init for (self: AExternCodeBlock) */
void parser_prod__AExternCodeBlock__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExternCodeBlock__empty_init(val* self) {
parser_prod__AExternCodeBlock__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#init_aexterncodeblock for (self: AExternCodeBlock, nullable AInLanguage, nullable TExternCodeSegment) */
void parser_prod__AExternCodeBlock__init_aexterncodeblock(val* self, val* p0, val* p1) {
val* var_n_in_language /* var n_in_language: nullable AInLanguage */;
val* var_n_extern_code_segment /* var n_extern_code_segment: nullable TExternCodeSegment */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_in_language = p0;
var_n_extern_code_segment = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExternCodeBlock__empty_init]))(self) /* empty_init on <self:AExternCodeBlock>*/;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var_n_in_language; /* _n_in_language on <self:AExternCodeBlock> */
var = NULL;
if (var_n_in_language == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_in_language->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_in_language, self) /* parent= on <var_n_in_language:nullable AInLanguage(AInLanguage)>*/;
} else {
}
if (var_n_extern_code_segment == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10868);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_n_extern_code_segment; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var_n_extern_code_segment == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10869);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_extern_code_segment->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern_code_segment, self) /* parent= on <var_n_extern_code_segment:nullable TExternCodeSegment>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#init_aexterncodeblock for (self: Object, nullable AInLanguage, nullable TExternCodeSegment) */
void VIRTUAL_parser_prod__AExternCodeBlock__init_aexterncodeblock(val* self, val* p0, val* p1) {
parser_prod__AExternCodeBlock__init_aexterncodeblock(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#replace_child for (self: AExternCodeBlock, ANode, nullable ANode) */
void parser_prod__AExternCodeBlock__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AInLanguage */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : TExternCodeSegment */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable AInLanguage>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AInLanguage */
cltype = type_parser_nodes__AInLanguage.color;
idtype = type_parser_nodes__AInLanguage.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10877);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var_new_child; /* _n_in_language on <self:AExternCodeBlock> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var5; /* _n_in_language on <self:AExternCodeBlock> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10884);
show_backtrace(1);
}
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:TExternCodeSegment>*/;
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TExternCodeSegment */
cltype11 = type_parser_nodes__TExternCodeSegment.color;
idtype12 = type_parser_nodes__TExternCodeSegment.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10887);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_new_child; /* _n_extern_code_segment on <self:AExternCodeBlock> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10890);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternCodeBlock__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternCodeBlock__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_in_language= for (self: AExternCodeBlock, nullable AInLanguage) */
void parser_prod__AExternCodeBlock__n_in_language_61d(val* self, val* p0) {
val* var_node /* var node: nullable AInLanguage */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var_node; /* _n_in_language on <self:AExternCodeBlock> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AInLanguage(AInLanguage)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_in_language= for (self: Object, nullable AInLanguage) */
void VIRTUAL_parser_prod__AExternCodeBlock__n_in_language_61d(val* self, val* p0) {
parser_prod__AExternCodeBlock__n_in_language_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_extern_code_segment= for (self: AExternCodeBlock, TExternCodeSegment) */
void parser_prod__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0) {
val* var_node /* var node: TExternCodeSegment */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_node; /* _n_extern_code_segment on <self:AExternCodeBlock> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TExternCodeSegment>*/;
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_extern_code_segment= for (self: Object, TExternCodeSegment) */
void VIRTUAL_parser_prod__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0) {
parser_prod__AExternCodeBlock__n_extern_code_segment_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#visit_all for (self: AExternCodeBlock, Visitor) */
void parser_prod__AExternCodeBlock__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AInLanguage */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable AInLanguage */;
val* var4 /* : TExternCodeSegment */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10913);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10915);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternCodeBlock__visit_all(val* self, val* p0) {
parser_prod__AExternCodeBlock__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AQualified#empty_init for (self: AQualified) */
void parser_prod__AQualified__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AQualified#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AQualified__empty_init(val* self) {
parser_prod__AQualified__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AQualified#init_aqualified for (self: AQualified, Collection[Object], nullable TClassid) */
void parser_prod__AQualified__init_aqualified(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: Collection[Object] */;
val* var_n_classid /* var n_classid: nullable TClassid */;
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
var_n_id = p0;
var_n_classid = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AQualified__empty_init]))(self) /* empty_init on <self:AQualified>*/;
var = ((val* (*)(val*))(var_n_id->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_id) /* iterator on <var_n_id:Collection[Object]>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10928);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10929);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[TId]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(TId)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var_n_classid; /* _n_classid on <self:AQualified> */
var5 = NULL;
if (var_n_classid == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_n_classid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_classid, self) /* parent= on <var_n_classid:nullable TClassid(TClassid)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#init_aqualified for (self: Object, Collection[Object], nullable TClassid) */
void VIRTUAL_parser_prod__AQualified__init_aqualified(val* self, val* p0, val* p1) {
parser_prod__AQualified__init_aqualified(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AQualified#replace_child for (self: AQualified, ANode, nullable ANode) */
void parser_prod__AQualified__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : ANodes[TId] */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : ANodes[TId] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : ANodes[TId] */;
val* var17 /* : ANodes[TId] */;
val* var18 /* : nullable TClassid */;
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
var2 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10940);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[TId]>*/;
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
var10 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10941);
show_backtrace(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:ANodes[TId]>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_old_child) /* == on <var11:nullable Object(TId)>*/;
if (var12){
var13 = NULL;
if (var_new_child == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10943);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10944);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[TId]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(TId)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10947);
show_backtrace(1);
}
((void (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var17, var_i) /* remove_at on <var17:ANodes[TId]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var18 = self->attrs[COLOR_parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var19 = ((short int (*)(val*, val*))(var18->class->vft[COLOR_kernel__Object___61d_61d]))(var18, var_old_child) /* == on <var18:nullable TClassid>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TClassid */
cltype23 = type_parser_nodes__TClassid.color;
idtype24 = type_parser_nodes__TClassid.id;
if(cltype23 >= var_new_child->type->table_size) {
var22 = 0;
} else {
var22 = var_new_child->type->type_table[cltype23] == idtype24;
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10955);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var_new_child; /* _n_classid on <self:AQualified> */
} else {
var25 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var25; /* _n_classid on <self:AQualified> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AQualified__replace_child(val* self, val* p0, val* p1) {
parser_prod__AQualified__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AQualified#n_classid= for (self: AQualified, nullable TClassid) */
void parser_prod__AQualified__n_classid_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var_node; /* _n_classid on <self:AQualified> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TClassid(TClassid)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#n_classid= for (self: Object, nullable TClassid) */
void VIRTUAL_parser_prod__AQualified__n_classid_61d(val* self, val* p0) {
parser_prod__AQualified__n_classid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AQualified#visit_all for (self: AQualified, Visitor) */
void parser_prod__AQualified__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TId] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: TId */;
val* var4 /* : nullable TClassid */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TClassid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10975);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[TId]>*/;
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
var4 = self->attrs[COLOR_parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10979);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AQualified__visit_all(val* self, val* p0) {
parser_prod__AQualified__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADoc#empty_init for (self: ADoc) */
void parser_prod__ADoc__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ADoc#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ADoc__empty_init(val* self) {
parser_prod__ADoc__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ADoc#init_adoc for (self: ADoc, Collection[Object]) */
void parser_prod__ADoc__init_adoc(val* self, val* p0) {
val* var_n_comment /* var n_comment: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[TComment] */;
var_n_comment = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ADoc__empty_init]))(self) /* empty_init on <self:ADoc>*/;
var = ((val* (*)(val*))(var_n_comment->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_comment) /* iterator on <var_n_comment:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa TComment */
cltype = type_parser_nodes__TComment.color;
idtype = type_parser_nodes__TComment.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10992);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 10993);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[TComment]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(TComment)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ADoc#init_adoc for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__ADoc__init_adoc(val* self, val* p0) {
parser_prod__ADoc__init_adoc(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADoc#replace_child for (self: ADoc, ANode, nullable ANode) */
void parser_prod__ADoc__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : ANodes[TComment] */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : ANodes[TComment] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : ANodes[TComment] */;
val* var17 /* : ANodes[TComment] */;
var_old_child = p0;
var_new_child = p1;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11000);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[TComment]>*/;
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
var10 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11001);
show_backtrace(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:ANodes[TComment]>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_old_child) /* == on <var11:nullable Object(TComment)>*/;
if (var12){
var13 = NULL;
if (var_new_child == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
/* <var_new_child:nullable ANode(ANode)> isa TComment */
cltype = type_parser_nodes__TComment.color;
idtype = type_parser_nodes__TComment.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11003);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11004);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[TComment]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(TComment)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11007);
show_backtrace(1);
}
((void (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var17, var_i) /* remove_at on <var17:ANodes[TComment]>*/;
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
/* method parser_prod#ADoc#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADoc__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADoc__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ADoc#visit_all for (self: ADoc, Visitor) */
void parser_prod__ADoc__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TComment] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: TComment */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11018);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[TComment]>*/;
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
/* method parser_prod#ADoc#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADoc__visit_all(val* self, val* p0) {
parser_prod__ADoc__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#empty_init for (self: AAnnotations) */
void parser_prod__AAnnotations__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAnnotations#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAnnotations__empty_init(val* self) {
parser_prod__AAnnotations__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#init_aannotations for (self: AAnnotations, nullable TAt, nullable TOpar, Collection[Object], nullable TCpar) */
void parser_prod__AAnnotations__init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_at /* var n_at: nullable TAt */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_items /* var n_items: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : ANodes[AAnnotation] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
var_n_at = p0;
var_n_opar = p1;
var_n_items = p2;
var_n_cpar = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAnnotations__empty_init]))(self) /* empty_init on <self:AAnnotations>*/;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var_n_at; /* _n_at on <self:AAnnotations> */
var = NULL;
if (var_n_at == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_at->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_at, self) /* parent= on <var_n_at:nullable TAt(TAt)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotations> */
var2 = NULL;
if (var_n_opar == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar(TOpar)>*/;
} else {
}
var4 = ((val* (*)(val*))(var_n_items->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_items) /* iterator on <var_n_items:Collection[Object]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_n = var6;
/* <var_n:Object> isa AAnnotation */
cltype = type_parser_nodes__AAnnotation.color;
idtype = type_parser_nodes__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var7 = 0;
} else {
var7 = var_n->type->type_table[cltype] == idtype;
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11043);
show_backtrace(1);
}
var8 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11044);
show_backtrace(1);
}
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var8, var_n) /* add on <var8:ANodes[AAnnotation]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AAnnotation)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotations> */
var9 = NULL;
if (var_n_cpar == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_n_cpar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cpar, self) /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#init_aannotations for (self: Object, nullable TAt, nullable TOpar, Collection[Object], nullable TCpar) */
void VIRTUAL_parser_prod__AAnnotations__init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAnnotations__init_aannotations(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#replace_child for (self: AAnnotations, ANode, nullable ANode) */
void parser_prod__AAnnotations__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TAt */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TOpar */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : Range[Int] */;
long var15 /* : Int */;
val* var16 /* : ANodes[AAnnotation] */;
long var17 /* : Int */;
val* var18 /* : Discrete */;
val* var19 /* : Discrete */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
long var_i /* var i: Int */;
long var23 /* : Int */;
val* var24 /* : ANodes[AAnnotation] */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : ANodes[AAnnotation] */;
val* var33 /* : ANodes[AAnnotation] */;
val* var34 /* : nullable TCpar */;
short int var35 /* : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TAt>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TAt */
cltype = type_parser_nodes__TAt.color;
idtype = type_parser_nodes__TAt.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11058);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var_new_child; /* _n_at on <self:AAnnotations> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var5; /* _n_at on <self:AAnnotations> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TOpar>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TOpar */
cltype11 = type_parser_nodes__TOpar.color;
idtype12 = type_parser_nodes__TOpar.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11068);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var_new_child; /* _n_opar on <self:AAnnotations> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var13; /* _n_opar on <self:AAnnotations> */
}
goto RET_LABEL;
} else {
}
var14 = NEW_range__Range(&type_range__Rangekernel__Int);
var15 = 0;
var16 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11075);
show_backtrace(1);
}
var17 = ((long (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__length]))(var16) /* length on <var16:ANodes[AAnnotation]>*/;
var18 = BOX_kernel__Int(var15); /* autobox from Int to Discrete */
var19 = BOX_kernel__Int(var17); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var14->class->vft[COLOR_range__Range__without_last]))(var14, var18, var19) /* without_last on <var14:Range[Int]>*/;
var20 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:Range[Int]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var23 = ((struct instance_kernel__Int*)var22)->value; /* autounbox from nullable Object to Int */;
var_i = var23;
var24 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11076);
show_backtrace(1);
}
var25 = ((val* (*)(val*, long))(var24->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var24, var_i) /* [] on <var24:ANodes[AAnnotation]>*/;
var26 = ((short int (*)(val*, val*))(var25->class->vft[COLOR_kernel__Object___61d_61d]))(var25, var_old_child) /* == on <var25:nullable Object(AAnnotation)>*/;
if (var26){
var27 = NULL;
if (var_new_child == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
/* <var_new_child:nullable ANode(ANode)> isa AAnnotation */
cltype30 = type_parser_nodes__AAnnotation.color;
idtype31 = type_parser_nodes__AAnnotation.id;
if(cltype30 >= var_new_child->type->table_size) {
var29 = 0;
} else {
var29 = var_new_child->type->type_table[cltype30] == idtype31;
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11078);
show_backtrace(1);
}
var32 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11079);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var32->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var32, var_i, var_new_child) /* []= on <var32:ANodes[AAnnotation]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AAnnotation)>*/;
} else {
var33 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11082);
show_backtrace(1);
}
((void (*)(val*, long))(var33->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var33, var_i) /* remove_at on <var33:ANodes[AAnnotation]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var34 = self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
if (var34 == NULL) {
var35 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var35 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_kernel__Object___61d_61d]))(var34, var_old_child) /* == on <var34:nullable TCpar>*/;
}
if (var35){
var36 = NULL;
if (var_new_child == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (var37){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCpar */
cltype39 = type_parser_nodes__TCpar.color;
idtype40 = type_parser_nodes__TCpar.id;
if(cltype39 >= var_new_child->type->table_size) {
var38 = 0;
} else {
var38 = var_new_child->type->type_table[cltype39] == idtype40;
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11090);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var_new_child; /* _n_cpar on <self:AAnnotations> */
} else {
var41 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var41; /* _n_cpar on <self:AAnnotations> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAnnotations__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAnnotations__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_at= for (self: AAnnotations, nullable TAt) */
void parser_prod__AAnnotations__n_at_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAt */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var_node; /* _n_at on <self:AAnnotations> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TAt(TAt)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_at= for (self: Object, nullable TAt) */
void VIRTUAL_parser_prod__AAnnotations__n_at_61d(val* self, val* p0) {
parser_prod__AAnnotations__n_at_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_opar= for (self: AAnnotations, nullable TOpar) */
void parser_prod__AAnnotations__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var_node; /* _n_opar on <self:AAnnotations> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TOpar(TOpar)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__AAnnotations__n_opar_61d(val* self, val* p0) {
parser_prod__AAnnotations__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_cpar= for (self: AAnnotations, nullable TCpar) */
void parser_prod__AAnnotations__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotations> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TCpar(TCpar)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__AAnnotations__n_cpar_61d(val* self, val* p0) {
parser_prod__AAnnotations__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotations#visit_all for (self: AAnnotations, Visitor) */
void parser_prod__AAnnotations__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TAt */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TAt */;
val* var4 /* : nullable TOpar */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TOpar */;
val* var8 /* : ANodes[AAnnotation] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_n /* var n: AAnnotation */;
val* var12 /* : nullable TCpar */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11125);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11128);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11130);
show_backtrace(1);
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:ANodes[AAnnotation]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_n = var11;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11134);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAnnotations__visit_all(val* self, val* p0) {
parser_prod__AAnnotations__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#empty_init for (self: AAnnotation) */
void parser_prod__AAnnotation__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAnnotation#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAnnotation__empty_init(val* self) {
parser_prod__AAnnotation__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#init_aannotation for (self: AAnnotation, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void parser_prod__AAnnotation__init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_atid /* var n_atid: nullable AAtid */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_args /* var n_args: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : ANodes[AAtArg] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
var_n_atid = p0;
var_n_opar = p1;
var_n_args = p2;
var_n_cpar = p3;
var_n_annotations = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAnnotation__empty_init]))(self) /* empty_init on <self:AAnnotation>*/;
if (var_n_atid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11150);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val = var_n_atid; /* _n_atid on <self:AAnnotation> */
if (var_n_atid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11151);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_atid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_atid, self) /* parent= on <var_n_atid:nullable AAtid>*/;
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotation> */
var = NULL;
if (var_n_opar == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_opar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_opar, self) /* parent= on <var_n_opar:nullable TOpar(TOpar)>*/;
} else {
}
var2 = ((val* (*)(val*))(var_n_args->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_args) /* iterator on <var_n_args:Collection[Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
/* <var_n:Object> isa AAtArg */
cltype = type_parser_nodes__AAtArg.color;
idtype = type_parser_nodes__AAtArg.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11157);
show_backtrace(1);
}
var6 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11158);
show_backtrace(1);
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_n) /* add on <var6:ANodes[AAtArg]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AAtArg)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotation> */
var7 = NULL;
if (var_n_cpar == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_n_cpar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cpar, self) /* parent= on <var_n_cpar:nullable TCpar(TCpar)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAnnotation> */
var9 = NULL;
if (var_n_annotations == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#init_aannotation for (self: Object, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAnnotation__init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AAnnotation__init_aannotation(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#replace_child for (self: AAnnotation, ANode, nullable ANode) */
void parser_prod__AAnnotation__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AAtid */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable TOpar */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : Range[Int] */;
long var14 /* : Int */;
val* var15 /* : ANodes[AAtArg] */;
long var16 /* : Int */;
val* var17 /* : Discrete */;
val* var18 /* : Discrete */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
long var_i /* var i: Int */;
long var22 /* : Int */;
val* var23 /* : ANodes[AAtArg] */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : ANodes[AAtArg] */;
val* var32 /* : ANodes[AAtArg] */;
val* var33 /* : nullable TCpar */;
short int var34 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : null */;
val* var41 /* : nullable AAnnotations */;
short int var42 /* : Bool */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_atid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11173);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AAtid>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAtid */
cltype = type_parser_nodes__AAtid.color;
idtype = type_parser_nodes__AAtid.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11176);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val = var_new_child; /* _n_atid on <self:AAnnotation> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11179);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable TOpar>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TOpar */
cltype10 = type_parser_nodes__TOpar.color;
idtype11 = type_parser_nodes__TOpar.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11186);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var_new_child; /* _n_opar on <self:AAnnotation> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var12; /* _n_opar on <self:AAnnotation> */
}
goto RET_LABEL;
} else {
}
var13 = NEW_range__Range(&type_range__Rangekernel__Int);
var14 = 0;
var15 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11193);
show_backtrace(1);
}
var16 = ((long (*)(val*))(var15->class->vft[COLOR_abstract_collection__Collection__length]))(var15) /* length on <var15:ANodes[AAtArg]>*/;
var17 = BOX_kernel__Int(var14); /* autobox from Int to Discrete */
var18 = BOX_kernel__Int(var16); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var13->class->vft[COLOR_range__Range__without_last]))(var13, var17, var18) /* without_last on <var13:Range[Int]>*/;
var19 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__iterator]))(var13) /* iterator on <var13:Range[Int]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var22 = ((struct instance_kernel__Int*)var21)->value; /* autounbox from nullable Object to Int */;
var_i = var22;
var23 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11194);
show_backtrace(1);
}
var24 = ((val* (*)(val*, long))(var23->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var23, var_i) /* [] on <var23:ANodes[AAtArg]>*/;
var25 = ((short int (*)(val*, val*))(var24->class->vft[COLOR_kernel__Object___61d_61d]))(var24, var_old_child) /* == on <var24:nullable Object(AAtArg)>*/;
if (var25){
var26 = NULL;
if (var_new_child == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (var27){
/* <var_new_child:nullable ANode(ANode)> isa AAtArg */
cltype29 = type_parser_nodes__AAtArg.color;
idtype30 = type_parser_nodes__AAtArg.id;
if(cltype29 >= var_new_child->type->table_size) {
var28 = 0;
} else {
var28 = var_new_child->type->type_table[cltype29] == idtype30;
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11196);
show_backtrace(1);
}
var31 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11197);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var31->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var31, var_i, var_new_child) /* []= on <var31:ANodes[AAtArg]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AAtArg)>*/;
} else {
var32 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11200);
show_backtrace(1);
}
((void (*)(val*, long))(var32->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var32, var_i) /* remove_at on <var32:ANodes[AAtArg]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var33 = self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
if (var33 == NULL) {
var34 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var34 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var_old_child) /* == on <var33:nullable TCpar>*/;
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11208);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var_new_child; /* _n_cpar on <self:AAnnotation> */
} else {
var40 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var40; /* _n_cpar on <self:AAnnotation> */
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var42 = ((short int (*)(val*, val*))(var41->class->vft[COLOR_kernel__Object___61d_61d]))(var41, var_old_child) /* == on <var41:nullable AAnnotations>*/;
}
if (var42){
var43 = NULL;
if (var_new_child == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (var44){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype46 = type_parser_nodes__AAnnotations.color;
idtype47 = type_parser_nodes__AAnnotations.id;
if(cltype46 >= var_new_child->type->table_size) {
var45 = 0;
} else {
var45 = var_new_child->type->type_table[cltype46] == idtype47;
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11218);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AAnnotation> */
} else {
var48 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var48; /* _n_annotations on <self:AAnnotation> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAnnotation__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAnnotation__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_atid= for (self: AAnnotation, AAtid) */
void parser_prod__AAnnotation__n_atid_61d(val* self, val* p0) {
val* var_node /* var node: AAtid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val = var_node; /* _n_atid on <self:AAnnotation> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AAtid>*/;
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_atid= for (self: Object, AAtid) */
void VIRTUAL_parser_prod__AAnnotation__n_atid_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_atid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_opar= for (self: AAnnotation, nullable TOpar) */
void parser_prod__AAnnotation__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var_node; /* _n_opar on <self:AAnnotation> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TOpar(TOpar)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__AAnnotation__n_opar_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_cpar= for (self: AAnnotation, nullable TCpar) */
void parser_prod__AAnnotation__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotation> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TCpar(TCpar)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__AAnnotation__n_cpar_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_annotations= for (self: AAnnotation, nullable AAnnotations) */
void parser_prod__AAnnotation__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAnnotation> */
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
/* method parser_prod#AAnnotation#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAnnotation__n_annotations_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAnnotation#visit_all for (self: AAnnotation, Visitor) */
void parser_prod__AAnnotation__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AAtid */;
val* var1 /* : nullable TOpar */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TOpar */;
val* var5 /* : ANodes[AAtArg] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_n /* var n: AAtArg */;
val* var9 /* : nullable TCpar */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : nullable TCpar */;
val* var13 /* : nullable AAnnotations */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_atid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11257);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11259);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11261);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:ANodes[AAtArg]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_n = var8;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var9 = self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
var10 = NULL;
if (var9 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var12 = self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11265);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var12) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
var14 = NULL;
if (var13 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
var16 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11268);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var16) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAnnotation__visit_all(val* self, val* p0) {
parser_prod__AAnnotation__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#empty_init for (self: ATypeAtArg) */
void parser_prod__ATypeAtArg__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ATypeAtArg__empty_init(val* self) {
parser_prod__ATypeAtArg__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#init_atypeatarg for (self: ATypeAtArg, nullable AType) */
void parser_prod__ATypeAtArg__init_atypeatarg(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
var_n_type = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ATypeAtArg__empty_init]))(self) /* empty_init on <self:ATypeAtArg>*/;
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11280);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val = var_n_type; /* _n_type on <self:ATypeAtArg> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11281);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#init_atypeatarg for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__ATypeAtArg__init_atypeatarg(val* self, val* p0) {
parser_prod__ATypeAtArg__init_atypeatarg(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#replace_child for (self: ATypeAtArg, ANode, nullable ANode) */
void parser_prod__ATypeAtArg__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val; /* _n_type on <self:ATypeAtArg> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11286);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AType>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11289);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val = var_new_child; /* _n_type on <self:ATypeAtArg> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11292);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATypeAtArg__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATypeAtArg__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#n_type= for (self: ATypeAtArg, AType) */
void parser_prod__ATypeAtArg__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val = var_node; /* _n_type on <self:ATypeAtArg> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ATypeAtArg__n_type_61d(val* self, val* p0) {
parser_prod__ATypeAtArg__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#visit_all for (self: ATypeAtArg, Visitor) */
void parser_prod__ATypeAtArg__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val; /* _n_type on <self:ATypeAtArg> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11307);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATypeAtArg__visit_all(val* self, val* p0) {
parser_prod__ATypeAtArg__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#empty_init for (self: AExprAtArg) */
void parser_prod__AExprAtArg__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExprAtArg__empty_init(val* self) {
parser_prod__AExprAtArg__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#init_aexpratarg for (self: AExprAtArg, nullable AExpr) */
void parser_prod__AExprAtArg__init_aexpratarg(val* self, val* p0) {
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_expr = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExprAtArg__empty_init]))(self) /* empty_init on <self:AExprAtArg>*/;
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11318);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val = var_n_expr; /* _n_expr on <self:AExprAtArg> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11319);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#init_aexpratarg for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AExprAtArg__init_aexpratarg(val* self, val* p0) {
parser_prod__AExprAtArg__init_aexpratarg(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#replace_child for (self: AExprAtArg, ANode, nullable ANode) */
void parser_prod__AExprAtArg__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11324);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11327);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val = var_new_child; /* _n_expr on <self:AExprAtArg> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11330);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExprAtArg__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExprAtArg__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#n_expr= for (self: AExprAtArg, AExpr) */
void parser_prod__AExprAtArg__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val = var_node; /* _n_expr on <self:AExprAtArg> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AExprAtArg__n_expr_61d(val* self, val* p0) {
parser_prod__AExprAtArg__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#visit_all for (self: AExprAtArg, Visitor) */
void parser_prod__AExprAtArg__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11345);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExprAtArg__visit_all(val* self, val* p0) {
parser_prod__AExprAtArg__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#empty_init for (self: AAtAtArg) */
void parser_prod__AAtAtArg__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAtAtArg__empty_init(val* self) {
parser_prod__AAtAtArg__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#init_aatatarg for (self: AAtAtArg, nullable AAnnotations) */
void parser_prod__AAtAtArg__init_aatatarg(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
var_n_annotations = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAtAtArg__empty_init]))(self) /* empty_init on <self:AAtAtArg>*/;
if (var_n_annotations == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11356);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtAtArg> */
if (var_n_annotations == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11357);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#init_aatatarg for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAtAtArg__init_aatatarg(val* self, val* p0) {
parser_prod__AAtAtArg__init_aatatarg(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#replace_child for (self: AAtAtArg, ANode, nullable ANode) */
void parser_prod__AAtAtArg__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AAnnotations */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtAtArg> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable AAnnotations>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype = type_parser_nodes__AAnnotations.color;
idtype = type_parser_nodes__AAnnotations.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11365);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AAtAtArg> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11368);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAtAtArg__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAtAtArg__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#n_annotations= for (self: AAtAtArg, nullable AAnnotations) */
void parser_prod__AAtAtArg__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAtAtArg> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11377);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAtAtArg__n_annotations_61d(val* self, val* p0) {
parser_prod__AAtAtArg__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#visit_all for (self: AAtAtArg, Visitor) */
void parser_prod__AAtAtArg__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtAtArg> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAtAtArg__visit_all(val* self, val* p0) {
parser_prod__AAtAtArg__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIdAtid#empty_init for (self: AIdAtid) */
void parser_prod__AIdAtid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIdAtid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIdAtid__empty_init(val* self) {
parser_prod__AIdAtid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIdAtid#init_aidatid for (self: AIdAtid, nullable TId) */
void parser_prod__AIdAtid__init_aidatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIdAtid__empty_init]))(self) /* empty_init on <self:AIdAtid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11394);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AIdAtid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11395);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#init_aidatid for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AIdAtid__init_aidatid(val* self, val* p0) {
parser_prod__AIdAtid__init_aidatid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIdAtid#replace_child for (self: AIdAtid, ANode, nullable ANode) */
void parser_prod__AIdAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11400);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11403);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_new_child; /* _n_id on <self:AIdAtid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11406);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIdAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIdAtid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIdAtid#n_id= for (self: AIdAtid, Token) */
void parser_prod__AIdAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AIdAtid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AIdAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AIdAtid__n_id_61d(val* self, val* p0) {
parser_prod__AIdAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIdAtid#visit_all for (self: AIdAtid, Visitor) */
void parser_prod__AIdAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11421);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AIdAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIdAtid__visit_all(val* self, val* p0) {
parser_prod__AIdAtid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#empty_init for (self: AKwexternAtid) */
void parser_prod__AKwexternAtid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AKwexternAtid__empty_init(val* self) {
parser_prod__AKwexternAtid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#init_akwexternatid for (self: AKwexternAtid, nullable TKwextern) */
void parser_prod__AKwexternAtid__init_akwexternatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwextern */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AKwexternAtid__empty_init]))(self) /* empty_init on <self:AKwexternAtid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11432);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwexternAtid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11433);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TKwextern>*/;
}
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#init_akwexternatid for (self: Object, nullable TKwextern) */
void VIRTUAL_parser_prod__AKwexternAtid__init_akwexternatid(val* self, val* p0) {
parser_prod__AKwexternAtid__init_akwexternatid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#replace_child for (self: AKwexternAtid, ANode, nullable ANode) */
void parser_prod__AKwexternAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwexternAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11438);
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
/* <var_new_child:nullable ANode(ANode)> isa TKwextern */
cltype = type_parser_nodes__TKwextern.color;
idtype = type_parser_nodes__TKwextern.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11441);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_new_child; /* _n_id on <self:AKwexternAtid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11444);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwexternAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwexternAtid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#n_id= for (self: AKwexternAtid, Token) */
void parser_prod__AKwexternAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwexternAtid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwexternAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwexternAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#visit_all for (self: AKwexternAtid, Visitor) */
void parser_prod__AKwexternAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwexternAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11459);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AKwexternAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwexternAtid__visit_all(val* self, val* p0) {
parser_prod__AKwexternAtid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#empty_init for (self: AKwinternAtid) */
void parser_prod__AKwinternAtid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AKwinternAtid__empty_init(val* self) {
parser_prod__AKwinternAtid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#init_akwinternatid for (self: AKwinternAtid, nullable TKwintern) */
void parser_prod__AKwinternAtid__init_akwinternatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwintern */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AKwinternAtid__empty_init]))(self) /* empty_init on <self:AKwinternAtid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11470);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwinternAtid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11471);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TKwintern>*/;
}
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#init_akwinternatid for (self: Object, nullable TKwintern) */
void VIRTUAL_parser_prod__AKwinternAtid__init_akwinternatid(val* self, val* p0) {
parser_prod__AKwinternAtid__init_akwinternatid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#replace_child for (self: AKwinternAtid, ANode, nullable ANode) */
void parser_prod__AKwinternAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwinternAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11476);
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
/* <var_new_child:nullable ANode(ANode)> isa TKwintern */
cltype = type_parser_nodes__TKwintern.color;
idtype = type_parser_nodes__TKwintern.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11479);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_new_child; /* _n_id on <self:AKwinternAtid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11482);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwinternAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwinternAtid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#n_id= for (self: AKwinternAtid, Token) */
void parser_prod__AKwinternAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwinternAtid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwinternAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwinternAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#visit_all for (self: AKwinternAtid, Visitor) */
void parser_prod__AKwinternAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwinternAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11497);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AKwinternAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwinternAtid__visit_all(val* self, val* p0) {
parser_prod__AKwinternAtid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#empty_init for (self: AKwreadableAtid) */
void parser_prod__AKwreadableAtid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AKwreadableAtid__empty_init(val* self) {
parser_prod__AKwreadableAtid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#init_akwreadableatid for (self: AKwreadableAtid, nullable TKwreadable) */
void parser_prod__AKwreadableAtid__init_akwreadableatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwreadable */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AKwreadableAtid__empty_init]))(self) /* empty_init on <self:AKwreadableAtid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11508);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwreadableAtid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11509);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TKwreadable>*/;
}
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#init_akwreadableatid for (self: Object, nullable TKwreadable) */
void VIRTUAL_parser_prod__AKwreadableAtid__init_akwreadableatid(val* self, val* p0) {
parser_prod__AKwreadableAtid__init_akwreadableatid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#replace_child for (self: AKwreadableAtid, ANode, nullable ANode) */
void parser_prod__AKwreadableAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwreadableAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11514);
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
/* <var_new_child:nullable ANode(ANode)> isa TKwreadable */
cltype = type_parser_nodes__TKwreadable.color;
idtype = type_parser_nodes__TKwreadable.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11517);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_new_child; /* _n_id on <self:AKwreadableAtid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11520);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwreadableAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwreadableAtid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#n_id= for (self: AKwreadableAtid, Token) */
void parser_prod__AKwreadableAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwreadableAtid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwreadableAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwreadableAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#visit_all for (self: AKwreadableAtid, Visitor) */
void parser_prod__AKwreadableAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwreadableAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11535);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwreadableAtid__visit_all(val* self, val* p0) {
parser_prod__AKwreadableAtid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#empty_init for (self: AKwwritableAtid) */
void parser_prod__AKwwritableAtid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AKwwritableAtid__empty_init(val* self) {
parser_prod__AKwwritableAtid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#init_akwwritableatid for (self: AKwwritableAtid, nullable TKwwritable) */
void parser_prod__AKwwritableAtid__init_akwwritableatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwwritable */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AKwwritableAtid__empty_init]))(self) /* empty_init on <self:AKwwritableAtid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11546);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwwritableAtid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11547);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TKwwritable>*/;
}
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#init_akwwritableatid for (self: Object, nullable TKwwritable) */
void VIRTUAL_parser_prod__AKwwritableAtid__init_akwwritableatid(val* self, val* p0) {
parser_prod__AKwwritableAtid__init_akwwritableatid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#replace_child for (self: AKwwritableAtid, ANode, nullable ANode) */
void parser_prod__AKwwritableAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwwritableAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11552);
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
/* <var_new_child:nullable ANode(ANode)> isa TKwwritable */
cltype = type_parser_nodes__TKwwritable.color;
idtype = type_parser_nodes__TKwwritable.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11555);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_new_child; /* _n_id on <self:AKwwritableAtid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11558);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwwritableAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwwritableAtid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#n_id= for (self: AKwwritableAtid, Token) */
void parser_prod__AKwwritableAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwwritableAtid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwwritableAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwwritableAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#visit_all for (self: AKwwritableAtid, Visitor) */
void parser_prod__AKwwritableAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwwritableAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11573);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwwritableAtid__visit_all(val* self, val* p0) {
parser_prod__AKwwritableAtid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#empty_init for (self: AKwimportAtid) */
void parser_prod__AKwimportAtid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AKwimportAtid__empty_init(val* self) {
parser_prod__AKwimportAtid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#init_akwimportatid for (self: AKwimportAtid, nullable TKwimport) */
void parser_prod__AKwimportAtid__init_akwimportatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwimport */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AKwimportAtid__empty_init]))(self) /* empty_init on <self:AKwimportAtid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11584);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwimportAtid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11585);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TKwimport>*/;
}
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#init_akwimportatid for (self: Object, nullable TKwimport) */
void VIRTUAL_parser_prod__AKwimportAtid__init_akwimportatid(val* self, val* p0) {
parser_prod__AKwimportAtid__init_akwimportatid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#replace_child for (self: AKwimportAtid, ANode, nullable ANode) */
void parser_prod__AKwimportAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwimportAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11590);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11593);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_new_child; /* _n_id on <self:AKwimportAtid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11596);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwimportAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwimportAtid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#n_id= for (self: AKwimportAtid, Token) */
void parser_prod__AKwimportAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwimportAtid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:Token>*/;
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwimportAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwimportAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#visit_all for (self: AKwimportAtid, Visitor) */
void parser_prod__AKwimportAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwimportAtid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11611);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AKwimportAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwimportAtid__visit_all(val* self, val* p0) {
parser_prod__AKwimportAtid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#Start#replace_child for (self: Start, ANode, nullable ANode) */
void parser_prod__Start__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModule */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable AModule>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
} else {
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AModule */
cltype = type_parser_nodes__AModule.color;
idtype = type_parser_nodes__AModule.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11622);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Start___n_base].val = var_new_child; /* _n_base on <self:Start> */
}
var5 = NULL;
((void (*)(val*, val*))(var_old_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_old_child, var5) /* parent= on <var_old_child:ANode>*/;
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#Start#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__Start__replace_child(val* self, val* p0, val* p1) {
parser_prod__Start__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#Start#visit_all for (self: Start, Visitor) */
void parser_prod__Start__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModule */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable AModule */;
val* var4 /* : EOF */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11633);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_eof");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 11635);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#Start#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__Start__visit_all(val* self, val* p0) {
parser_prod__Start__visit_all(self, p0);
RET_LABEL:;
}
