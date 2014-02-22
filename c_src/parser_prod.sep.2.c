#include "parser_prod.sep.0.h"
/* method parser_prod#AConcreteInitPropdef#replace_child for (self: AConcreteInitPropdef, ANode, nullable ANode) */
void parser_prod__AConcreteInitPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : TKwinit */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : null */;
val* var36 /* : nullable ASignature */;
short int var37 /* : Bool */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : nullable AAnnotations */;
short int var44 /* : Bool */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : null */;
val* var51 /* : nullable AExpr */;
short int var52 /* : Bool */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
val* var58 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteInitPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2466);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AConcreteInitPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AConcreteInitPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteInitPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2476);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AConcreteInitPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:AConcreteInitPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AConcreteInitPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2486);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AConcreteInitPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2489);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinit");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2493);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:TKwinit>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwinit */
cltype26 = type_parser_nodes__TKwinit.color;
idtype27 = type_parser_nodes__TKwinit.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2496);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val = var_new_child; /* _n_kwinit on <self:AConcreteInitPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2499);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteInitPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AMethid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype33 = type_parser_nodes__AMethid.color;
idtype34 = type_parser_nodes__AMethid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2506);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:AConcreteInitPropdef> */
} else {
var35 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var35; /* _n_methid on <self:AConcreteInitPropdef> */
}
goto RET_LABEL;
} else {
}
var36 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteInitPropdef> */
if (var36 == NULL) {
var37 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var37 = ((short int (*)(val*, val*))(var36->class->vft[COLOR_kernel__Object___61d_61d]))(var36, var_old_child) /* == on <var36:nullable ASignature>*/;
}
if (var37){
var38 = NULL;
if (var_new_child == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (var39){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype41 = type_parser_nodes__ASignature.color;
idtype42 = type_parser_nodes__ASignature.id;
if(cltype41 >= var_new_child->type->table_size) {
var40 = 0;
} else {
var40 = var_new_child->type->type_table[cltype41] == idtype42;
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2516);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:AConcreteInitPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2519);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var43 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteInitPropdef> */
if (var43 == NULL) {
var44 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var44 = ((short int (*)(val*, val*))(var43->class->vft[COLOR_kernel__Object___61d_61d]))(var43, var_old_child) /* == on <var43:nullable AAnnotations>*/;
}
if (var44){
var45 = NULL;
if (var_new_child == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (var46){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype48 = type_parser_nodes__AAnnotations.color;
idtype49 = type_parser_nodes__AAnnotations.id;
if(cltype48 >= var_new_child->type->table_size) {
var47 = 0;
} else {
var47 = var_new_child->type->type_table[cltype48] == idtype49;
}
if (!var47) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2526);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AConcreteInitPropdef> */
} else {
var50 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var50; /* _n_annotations on <self:AConcreteInitPropdef> */
}
goto RET_LABEL;
} else {
}
var51 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteInitPropdef> */
if (var51 == NULL) {
var52 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var52 = ((short int (*)(val*, val*))(var51->class->vft[COLOR_kernel__Object___61d_61d]))(var51, var_old_child) /* == on <var51:nullable AExpr>*/;
}
if (var52){
var53 = NULL;
if (var_new_child == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (var54){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype56 = type_parser_nodes__AExpr.color;
idtype57 = type_parser_nodes__AExpr.id;
if(cltype56 >= var_new_child->type->table_size) {
var55 = 0;
} else {
var55 = var_new_child->type->type_table[cltype56] == idtype57;
}
if (!var55) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2536);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_new_child; /* _n_block on <self:AConcreteInitPropdef> */
} else {
var58 = NULL;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var58; /* _n_block on <self:AConcreteInitPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AConcreteInitPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_doc= for (self: AConcreteInitPropdef, nullable ADoc) */
void parser_prod__AConcreteInitPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AConcreteInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwredef= for (self: AConcreteInitPropdef, nullable TKwredef) */
void parser_prod__AConcreteInitPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AConcreteInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_visibility= for (self: AConcreteInitPropdef, nullable AVisibility) */
void parser_prod__AConcreteInitPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AConcreteInitPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2562);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwinit= for (self: AConcreteInitPropdef, TKwinit) */
void parser_prod__AConcreteInitPropdef__n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: TKwinit */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val = var_node; /* _n_kwinit on <self:AConcreteInitPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwinit>*/;
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwinit= for (self: Object, TKwinit) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_kwinit_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_kwinit_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_methid= for (self: AConcreteInitPropdef, nullable AMethid) */
void parser_prod__AConcreteInitPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AConcreteInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid(AMethid)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_signature= for (self: AConcreteInitPropdef, nullable ASignature) */
void parser_prod__AConcreteInitPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AConcreteInitPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2579);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_annotations= for (self: AConcreteInitPropdef, nullable AAnnotations) */
void parser_prod__AConcreteInitPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AConcreteInitPropdef> */
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
/* method parser_prod#AConcreteInitPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_block= for (self: AConcreteInitPropdef, nullable AExpr) */
void parser_prod__AConcreteInitPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_node; /* _n_block on <self:AConcreteInitPropdef> */
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
/* method parser_prod#AConcreteInitPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#visit_all for (self: AConcreteInitPropdef, Visitor) */
void parser_prod__AConcreteInitPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : TKwinit */;
val* var10 /* : nullable AMethid */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable AMethid */;
val* var14 /* : nullable ASignature */;
val* var15 /* : nullable AAnnotations */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : nullable AAnnotations */;
val* var19 /* : nullable AExpr */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteInitPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteInitPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2600);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteInitPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteInitPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2603);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AConcreteInitPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinit");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2606);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteInitPropdef> */
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteInitPropdef> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2608);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var13) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteInitPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var14) /* enter_visit on <var_v:Visitor>*/;
var15 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteInitPropdef> */
var16 = NULL;
if (var15 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
var18 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteInitPropdef> */
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2612);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var18) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteInitPropdef> */
var20 = NULL;
if (var19 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
var22 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteInitPropdef> */
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2615);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var22) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__visit_all(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#empty_init for (self: AExternInitPropdef) */
void parser_prod__AExternInitPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExternInitPropdef__empty_init(val* self) {
parser_prod__AExternInitPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#init_aexterninitpropdef for (self: AExternInitPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwnew, nullable AMethid, nullable ASignature, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void parser_prod__AExternInitPropdef__init_aexterninitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_extern /* var n_extern: nullable TString */;
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwnew = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_extern = p6;
var_n_extern_calls = p7;
var_n_extern_code_block = p8;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExternInitPropdef__empty_init]))(self) /* empty_init on <self:AExternInitPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AExternInitPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AExternInitPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2643);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AExternInitPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2644);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwnew == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2645);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AExternInitPropdef> */
if (var_n_kwnew == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2646);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnew, self) /* parent= on <var_n_kwnew:nullable TKwnew>*/;
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AExternInitPropdef> */
var4 = NULL;
if (var_n_methid == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid(AMethid)>*/;
} else {
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2651);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AExternInitPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2652);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var_n_extern; /* _n_extern on <self:AExternInitPropdef> */
var6 = NULL;
if (var_n_extern == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_n_extern->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern, self) /* parent= on <var_n_extern:nullable TString(TString)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AExternInitPropdef> */
var8 = NULL;
if (var_n_extern_calls == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_n_extern_calls->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern_calls, self) /* parent= on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AExternInitPropdef> */
var10 = NULL;
if (var_n_extern_code_block == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
((void (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern_code_block, self) /* parent= on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#init_aexterninitpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwnew, nullable AMethid, nullable ASignature, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternInitPropdef__init_aexterninitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
parser_prod__AExternInitPropdef__init_aexterninitpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#replace_child for (self: AExternInitPropdef, ANode, nullable ANode) */
void parser_prod__AExternInitPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : TKwnew */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : null */;
val* var36 /* : nullable ASignature */;
short int var37 /* : Bool */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : nullable TString */;
short int var44 /* : Bool */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : null */;
val* var51 /* : nullable AExternCalls */;
short int var52 /* : Bool */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
val* var58 /* : null */;
val* var59 /* : nullable AExternCodeBlock */;
short int var60 /* : Bool */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
val* var66 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternInitPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2672);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AExternInitPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AExternInitPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AExternInitPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2682);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AExternInitPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:AExternInitPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AExternInitPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2692);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AExternInitPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2695);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val; /* _n_kwnew on <self:AExternInitPropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnew");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2699);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:TKwnew>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwnew */
cltype26 = type_parser_nodes__TKwnew.color;
idtype27 = type_parser_nodes__TKwnew.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2702);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val = var_new_child; /* _n_kwnew on <self:AExternInitPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2705);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternInitPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AMethid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype33 = type_parser_nodes__AMethid.color;
idtype34 = type_parser_nodes__AMethid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2712);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:AExternInitPropdef> */
} else {
var35 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var35; /* _n_methid on <self:AExternInitPropdef> */
}
goto RET_LABEL;
} else {
}
var36 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternInitPropdef> */
if (var36 == NULL) {
var37 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var37 = ((short int (*)(val*, val*))(var36->class->vft[COLOR_kernel__Object___61d_61d]))(var36, var_old_child) /* == on <var36:nullable ASignature>*/;
}
if (var37){
var38 = NULL;
if (var_new_child == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (var39){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype41 = type_parser_nodes__ASignature.color;
idtype42 = type_parser_nodes__ASignature.id;
if(cltype41 >= var_new_child->type->table_size) {
var40 = 0;
} else {
var40 = var_new_child->type->type_table[cltype41] == idtype42;
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2722);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:AExternInitPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2725);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var43 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternInitPropdef> */
if (var43 == NULL) {
var44 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var44 = ((short int (*)(val*, val*))(var43->class->vft[COLOR_kernel__Object___61d_61d]))(var43, var_old_child) /* == on <var43:nullable TString>*/;
}
if (var44){
var45 = NULL;
if (var_new_child == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (var46){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TString */
cltype48 = type_parser_nodes__TString.color;
idtype49 = type_parser_nodes__TString.id;
if(cltype48 >= var_new_child->type->table_size) {
var47 = 0;
} else {
var47 = var_new_child->type->type_table[cltype48] == idtype49;
}
if (!var47) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2732);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var_new_child; /* _n_extern on <self:AExternInitPropdef> */
} else {
var50 = NULL;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var50; /* _n_extern on <self:AExternInitPropdef> */
}
goto RET_LABEL;
} else {
}
var51 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternInitPropdef> */
if (var51 == NULL) {
var52 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var52 = ((short int (*)(val*, val*))(var51->class->vft[COLOR_kernel__Object___61d_61d]))(var51, var_old_child) /* == on <var51:nullable AExternCalls>*/;
}
if (var52){
var53 = NULL;
if (var_new_child == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (var54){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExternCalls */
cltype56 = type_parser_nodes__AExternCalls.color;
idtype57 = type_parser_nodes__AExternCalls.id;
if(cltype56 >= var_new_child->type->table_size) {
var55 = 0;
} else {
var55 = var_new_child->type->type_table[cltype56] == idtype57;
}
if (!var55) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2742);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var_new_child; /* _n_extern_calls on <self:AExternInitPropdef> */
} else {
var58 = NULL;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var58; /* _n_extern_calls on <self:AExternInitPropdef> */
}
goto RET_LABEL;
} else {
}
var59 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternInitPropdef> */
if (var59 == NULL) {
var60 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var60 = ((short int (*)(val*, val*))(var59->class->vft[COLOR_kernel__Object___61d_61d]))(var59, var_old_child) /* == on <var59:nullable AExternCodeBlock>*/;
}
if (var60){
var61 = NULL;
if (var_new_child == NULL) {
var62 = 0; /* is null */
} else {
var62 = 1; /* arg is null and recv is not */
}
if (var62){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExternCodeBlock */
cltype64 = type_parser_nodes__AExternCodeBlock.color;
idtype65 = type_parser_nodes__AExternCodeBlock.id;
if(cltype64 >= var_new_child->type->table_size) {
var63 = 0;
} else {
var63 = var_new_child->type->type_table[cltype64] == idtype65;
}
if (!var63) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2752);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var_new_child; /* _n_extern_code_block on <self:AExternInitPropdef> */
} else {
var66 = NULL;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var66; /* _n_extern_code_block on <self:AExternInitPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternInitPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternInitPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_doc= for (self: AExternInitPropdef, nullable ADoc) */
void parser_prod__AExternInitPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwredef= for (self: AExternInitPropdef, nullable TKwredef) */
void parser_prod__AExternInitPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_visibility= for (self: AExternInitPropdef, nullable AVisibility) */
void parser_prod__AExternInitPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AExternInitPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2778);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwnew= for (self: AExternInitPropdef, TKwnew) */
void parser_prod__AExternInitPropdef__n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: TKwnew */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val = var_node; /* _n_kwnew on <self:AExternInitPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwnew>*/;
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwnew= for (self: Object, TKwnew) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_kwnew_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_kwnew_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_methid= for (self: AExternInitPropdef, nullable AMethid) */
void parser_prod__AExternInitPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid(AMethid)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_signature= for (self: AExternInitPropdef, nullable ASignature) */
void parser_prod__AExternInitPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AExternInitPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2795);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern= for (self: AExternInitPropdef, nullable TString) */
void parser_prod__AExternInitPropdef__n_extern_61d(val* self, val* p0) {
val* var_node /* var node: nullable TString */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var_node; /* _n_extern on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TString(TString)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern= for (self: Object, nullable TString) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_extern_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_extern_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_calls= for (self: AExternInitPropdef, nullable AExternCalls) */
void parser_prod__AExternInitPropdef__n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExternCalls(AExternCalls)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_extern_calls_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_code_block= for (self: AExternInitPropdef, nullable AExternCodeBlock) */
void parser_prod__AExternInitPropdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_extern_code_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#visit_all for (self: AExternInitPropdef, Visitor) */
void parser_prod__AExternInitPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : TKwnew */;
val* var10 /* : nullable AMethid */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable AMethid */;
val* var14 /* : nullable ASignature */;
val* var15 /* : nullable TString */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : nullable TString */;
val* var19 /* : nullable AExternCalls */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : nullable AExternCalls */;
val* var23 /* : nullable AExternCodeBlock */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : nullable AExternCodeBlock */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternInitPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternInitPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2823);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AExternInitPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AExternInitPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2826);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AExternInitPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AExternInitPropdef___n_kwnew].val; /* _n_kwnew on <self:AExternInitPropdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnew");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2829);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternInitPropdef> */
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternInitPropdef> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2831);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var13) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternInitPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var14) /* enter_visit on <var_v:Visitor>*/;
var15 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternInitPropdef> */
var16 = NULL;
if (var15 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
var18 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternInitPropdef> */
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2835);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var18) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternInitPropdef> */
var20 = NULL;
if (var19 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
var22 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternInitPropdef> */
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2838);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var22) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var23 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternInitPropdef> */
var24 = NULL;
if (var23 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (var25){
var26 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternInitPropdef> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2841);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var26) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternInitPropdef__visit_all(val* self, val* p0) {
parser_prod__AExternInitPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#empty_init for (self: AMainMethPropdef) */
void parser_prod__AMainMethPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMainMethPropdef__empty_init(val* self) {
parser_prod__AMainMethPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#init_amainmethpropdef for (self: AMainMethPropdef, nullable TKwredef, nullable AExpr) */
void parser_prod__AMainMethPropdef__init_amainmethpropdef(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwredef = p0;
var_n_block = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMainMethPropdef__empty_init]))(self) /* empty_init on <self:AMainMethPropdef>*/;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMainMethPropdef> */
var = NULL;
if (var_n_kwredef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMainMethPropdef> */
var2 = NULL;
if (var_n_block == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_block, self) /* parent= on <var_n_block:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#init_amainmethpropdef for (self: Object, nullable TKwredef, nullable AExpr) */
void VIRTUAL_parser_prod__AMainMethPropdef__init_amainmethpropdef(val* self, val* p0, val* p1) {
parser_prod__AMainMethPropdef__init_amainmethpropdef(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#replace_child for (self: AMainMethPropdef, ANode, nullable ANode) */
void parser_prod__AMainMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwredef>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype = type_parser_nodes__TKwredef.color;
idtype = type_parser_nodes__TKwredef.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2869);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AMainMethPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var5; /* _n_kwredef on <self:AMainMethPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable AExpr>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype11 = type_parser_nodes__AExpr.color;
idtype12 = type_parser_nodes__AExpr.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2879);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_new_child; /* _n_block on <self:AMainMethPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var13; /* _n_block on <self:AMainMethPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMainMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMainMethPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_kwredef= for (self: AMainMethPropdef, nullable TKwredef) */
void parser_prod__AMainMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AMainMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AMainMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AMainMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_block= for (self: AMainMethPropdef, nullable AExpr) */
void parser_prod__AMainMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_node; /* _n_block on <self:AMainMethPropdef> */
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
/* method parser_prod#AMainMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AMainMethPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AMainMethPropdef__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#visit_all for (self: AMainMethPropdef, Visitor) */
void parser_prod__AMainMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TKwredef */;
val* var4 /* : nullable AExpr */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2907);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2910);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMainMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AMainMethPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#empty_init for (self: ATypePropdef) */
void parser_prod__ATypePropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ATypePropdef__empty_init(val* self) {
parser_prod__ATypePropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#init_atypepropdef for (self: ATypePropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable TClassid, nullable AType, nullable AAnnotations) */
void parser_prod__ATypePropdef__init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwtype = p3;
var_n_id = p4;
var_n_type = p5;
var_n_annotations = p6;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ATypePropdef__empty_init]))(self) /* empty_init on <self:ATypePropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:ATypePropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ATypePropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2936);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ATypePropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2937);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2938);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ATypePropdef> */
if (var_n_kwtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2939);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwtype->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwtype, self) /* parent= on <var_n_kwtype:nullable TKwtype>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2940);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = var_n_id; /* _n_id on <self:ATypePropdef> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2941);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TClassid>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2942);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = var_n_type; /* _n_type on <self:ATypePropdef> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2943);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATypePropdef> */
var4 = NULL;
if (var_n_annotations == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#init_atypepropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable TClassid, nullable AType, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATypePropdef__init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
parser_prod__ATypePropdef__init_atypepropdef(self, p0, p1, p2, p3, p4, p5, p6);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#replace_child for (self: ATypePropdef, ANode, nullable ANode) */
void parser_prod__ATypePropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : TKwtype */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : TClassid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AType */;
short int var36 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable AAnnotations */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ATypePropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2955);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:ATypePropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:ATypePropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2965);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:ATypePropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val = var13; /* _n_kwredef on <self:ATypePropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2972);
show_backtrace(1);
}
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:AVisibility>*/;
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2975);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:ATypePropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2978);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2982);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:TKwtype>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwtype */
cltype26 = type_parser_nodes__TKwtype.color;
idtype27 = type_parser_nodes__TKwtype.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2985);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = var_new_child; /* _n_kwtype on <self:ATypePropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2988);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2992);
show_backtrace(1);
}
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:TClassid>*/;
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TClassid */
cltype33 = type_parser_nodes__TClassid.color;
idtype34 = type_parser_nodes__TClassid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2995);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = var_new_child; /* _n_id on <self:ATypePropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2998);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var35 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (var35 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3002);
show_backtrace(1);
}
var36 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___61d_61d]))(var35, var_old_child) /* == on <var35:AType>*/;
if (var36){
var37 = NULL;
if (var_new_child == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype40 = type_parser_nodes__AType.color;
idtype41 = type_parser_nodes__AType.id;
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3005);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = var_new_child; /* _n_type on <self:ATypePropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3008);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
if (var42 == NULL) {
var43 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var43 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_kernel__Object___61d_61d]))(var42, var_old_child) /* == on <var42:nullable AAnnotations>*/;
}
if (var43){
var44 = NULL;
if (var_new_child == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (var45){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype47 = type_parser_nodes__AAnnotations.color;
idtype48 = type_parser_nodes__AAnnotations.id;
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3015);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ATypePropdef> */
} else {
var49 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var49; /* _n_annotations on <self:ATypePropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATypePropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATypePropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_doc= for (self: ATypePropdef, nullable ADoc) */
void parser_prod__ATypePropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:ATypePropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__ATypePropdef__n_doc_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwredef= for (self: ATypePropdef, nullable TKwredef) */
void parser_prod__ATypePropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:ATypePropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__ATypePropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_visibility= for (self: ATypePropdef, AVisibility) */
void parser_prod__ATypePropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val = var_node; /* _n_visibility on <self:ATypePropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AVisibility>*/;
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__ATypePropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwtype= for (self: ATypePropdef, TKwtype) */
void parser_prod__ATypePropdef__n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = var_node; /* _n_kwtype on <self:ATypePropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwtype>*/;
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwtype= for (self: Object, TKwtype) */
void VIRTUAL_parser_prod__ATypePropdef__n_kwtype_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_kwtype_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_id= for (self: ATypePropdef, TClassid) */
void parser_prod__ATypePropdef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = var_node; /* _n_id on <self:ATypePropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TClassid>*/;
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__ATypePropdef__n_id_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_type= for (self: ATypePropdef, AType) */
void parser_prod__ATypePropdef__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = var_node; /* _n_type on <self:ATypePropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ATypePropdef__n_type_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_annotations= for (self: ATypePropdef, nullable AAnnotations) */
void parser_prod__ATypePropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATypePropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#visit_all for (self: ATypePropdef, Visitor) */
void parser_prod__ATypePropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : AVisibility */;
val* var9 /* : TKwtype */;
val* var10 /* : TClassid */;
val* var11 /* : AType */;
val* var12 /* : nullable AAnnotations */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ATypePropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ATypePropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3070);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3073);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3075);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3076);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3077);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
var11 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3078);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3080);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATypePropdef__visit_all(val* self, val* p0) {
parser_prod__ATypePropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AReadAble#empty_init for (self: AReadAble) */
void parser_prod__AReadAble__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AReadAble#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AReadAble__empty_init(val* self) {
parser_prod__AReadAble__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AReadAble#init_areadable for (self: AReadAble, nullable TKwredef, nullable TKwreadable) */
void parser_prod__AReadAble__init_areadable(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_kwreadable /* var n_kwreadable: nullable TKwreadable */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwredef = p0;
var_n_kwreadable = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AReadAble__empty_init]))(self) /* empty_init on <self:AReadAble>*/;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AReadAble> */
var = NULL;
if (var_n_kwredef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_kwreadable == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3097);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val = var_n_kwreadable; /* _n_kwreadable on <self:AReadAble> */
if (var_n_kwreadable == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3098);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwreadable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwreadable, self) /* parent= on <var_n_kwreadable:nullable TKwreadable>*/;
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#init_areadable for (self: Object, nullable TKwredef, nullable TKwreadable) */
void VIRTUAL_parser_prod__AReadAble__init_areadable(val* self, val* p0, val* p1) {
parser_prod__AReadAble__init_areadable(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AReadAble#replace_child for (self: AReadAble, ANode, nullable ANode) */
void parser_prod__AReadAble__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : TKwreadable */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AReadAble> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwredef>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype = type_parser_nodes__TKwredef.color;
idtype = type_parser_nodes__TKwredef.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3106);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AReadAble> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var5; /* _n_kwredef on <self:AReadAble> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val; /* _n_kwreadable on <self:AReadAble> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwreadable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3113);
show_backtrace(1);
}
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:TKwreadable>*/;
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwreadable */
cltype11 = type_parser_nodes__TKwreadable.color;
idtype12 = type_parser_nodes__TKwreadable.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3116);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val = var_new_child; /* _n_kwreadable on <self:AReadAble> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3119);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AReadAble__replace_child(val* self, val* p0, val* p1) {
parser_prod__AReadAble__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwredef= for (self: AReadAble, nullable TKwredef) */
void parser_prod__AReadAble__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_node; /* _n_kwredef on <self:AReadAble> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AReadAble__n_kwredef_61d(val* self, val* p0) {
parser_prod__AReadAble__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwreadable= for (self: AReadAble, TKwreadable) */
void parser_prod__AReadAble__n_kwreadable_61d(val* self, val* p0) {
val* var_node /* var node: TKwreadable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val = var_node; /* _n_kwreadable on <self:AReadAble> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwreadable>*/;
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwreadable= for (self: Object, TKwreadable) */
void VIRTUAL_parser_prod__AReadAble__n_kwreadable_61d(val* self, val* p0) {
parser_prod__AReadAble__n_kwreadable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AReadAble#visit_all for (self: AReadAble, Visitor) */
void parser_prod__AReadAble__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TKwredef */;
val* var4 /* : TKwreadable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AReadAble> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AReadAble> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3142);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val; /* _n_kwreadable on <self:AReadAble> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwreadable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3144);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AReadAble#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AReadAble__visit_all(val* self, val* p0) {
parser_prod__AReadAble__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#empty_init for (self: AWriteAble) */
void parser_prod__AWriteAble__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AWriteAble#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AWriteAble__empty_init(val* self) {
parser_prod__AWriteAble__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#init_awriteable for (self: AWriteAble, nullable TKwredef, nullable AVisibility, nullable TKwwritable) */
void parser_prod__AWriteAble__init_awriteable(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwwritable /* var n_kwwritable: nullable TKwwritable */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwredef = p0;
var_n_visibility = p1;
var_n_kwwritable = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AWriteAble__empty_init]))(self) /* empty_init on <self:AWriteAble>*/;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AWriteAble> */
var = NULL;
if (var_n_kwredef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AWriteAble> */
var2 = NULL;
if (var_n_visibility == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility(AVisibility)>*/;
} else {
}
if (var_n_kwwritable == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3165);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val = var_n_kwwritable; /* _n_kwwritable on <self:AWriteAble> */
if (var_n_kwwritable == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3166);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwwritable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwwritable, self) /* parent= on <var_n_kwwritable:nullable TKwwritable>*/;
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#init_awriteable for (self: Object, nullable TKwredef, nullable AVisibility, nullable TKwwritable) */
void VIRTUAL_parser_prod__AWriteAble__init_awriteable(val* self, val* p0, val* p1, val* p2) {
parser_prod__AWriteAble__init_awriteable(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#replace_child for (self: AWriteAble, ANode, nullable ANode) */
void parser_prod__AWriteAble__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable AVisibility */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : TKwwritable */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AWriteAble> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwredef>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype = type_parser_nodes__TKwredef.color;
idtype = type_parser_nodes__TKwredef.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3174);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AWriteAble> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var5; /* _n_kwredef on <self:AWriteAble> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AWriteAble> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable AVisibility>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype11 = type_parser_nodes__AVisibility.color;
idtype12 = type_parser_nodes__AVisibility.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3184);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var_new_child; /* _n_visibility on <self:AWriteAble> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var13; /* _n_visibility on <self:AWriteAble> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val; /* _n_kwwritable on <self:AWriteAble> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwwritable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3191);
show_backtrace(1);
}
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:TKwwritable>*/;
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwwritable */
cltype19 = type_parser_nodes__TKwwritable.color;
idtype20 = type_parser_nodes__TKwwritable.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3194);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val = var_new_child; /* _n_kwwritable on <self:AWriteAble> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3197);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AWriteAble__replace_child(val* self, val* p0, val* p1) {
parser_prod__AWriteAble__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwredef= for (self: AWriteAble, nullable TKwredef) */
void parser_prod__AWriteAble__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_node; /* _n_kwredef on <self:AWriteAble> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AWriteAble__n_kwredef_61d(val* self, val* p0) {
parser_prod__AWriteAble__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_visibility= for (self: AWriteAble, nullable AVisibility) */
void parser_prod__AWriteAble__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var_node; /* _n_visibility on <self:AWriteAble> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility(AVisibility)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AWriteAble__n_visibility_61d(val* self, val* p0) {
parser_prod__AWriteAble__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwwritable= for (self: AWriteAble, TKwwritable) */
void parser_prod__AWriteAble__n_kwwritable_61d(val* self, val* p0) {
val* var_node /* var node: TKwwritable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val = var_node; /* _n_kwwritable on <self:AWriteAble> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwwritable>*/;
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwwritable= for (self: Object, TKwwritable) */
void VIRTUAL_parser_prod__AWriteAble__n_kwwritable_61d(val* self, val* p0) {
parser_prod__AWriteAble__n_kwwritable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AWriteAble#visit_all for (self: AWriteAble, Visitor) */
void parser_prod__AWriteAble__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TKwredef */;
val* var4 /* : nullable AVisibility */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AVisibility */;
val* var8 /* : TKwwritable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AWriteAble> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AWriteAble> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3227);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AWriteAble> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AWriteAble> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3230);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val; /* _n_kwwritable on <self:AWriteAble> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwwritable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3232);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AWriteAble#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AWriteAble__visit_all(val* self, val* p0) {
parser_prod__AWriteAble__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIdMethid#empty_init for (self: AIdMethid) */
void parser_prod__AIdMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIdMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIdMethid__empty_init(val* self) {
parser_prod__AIdMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: AIdMethid, nullable TId) */
void parser_prod__AIdMethid__init_aidmethid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIdMethid__empty_init]))(self) /* empty_init on <self:AIdMethid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3243);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_n_id; /* _n_id on <self:AIdMethid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3244);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AIdMethid__init_aidmethid(val* self, val* p0) {
parser_prod__AIdMethid__init_aidmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: AIdMethid, ANode, nullable ANode) */
void parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3249);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3252);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_new_child; /* _n_id on <self:AIdMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3255);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIdMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: AIdMethid, TId) */
void parser_prod__AIdMethid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_node; /* _n_id on <self:AIdMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AIdMethid__n_id_61d(val* self, val* p0) {
parser_prod__AIdMethid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: AIdMethid, Visitor) */
void parser_prod__AIdMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3270);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIdMethid__visit_all(val* self, val* p0) {
parser_prod__AIdMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusMethid#empty_init for (self: APlusMethid) */
void parser_prod__APlusMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APlusMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APlusMethid__empty_init(val* self) {
parser_prod__APlusMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: APlusMethid, nullable TPlus) */
void parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0) {
val* var_n_plus /* var n_plus: nullable TPlus */;
var_n_plus = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APlusMethid__empty_init]))(self) /* empty_init on <self:APlusMethid>*/;
if (var_n_plus == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3281);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_n_plus; /* _n_plus on <self:APlusMethid> */
if (var_n_plus == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3282);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_plus->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_plus, self) /* parent= on <var_n_plus:nullable TPlus>*/;
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: Object, nullable TPlus) */
void VIRTUAL_parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0) {
parser_prod__APlusMethid__init_aplusmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: APlusMethid, ANode, nullable ANode) */
void parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPlus */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_plus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3287);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TPlus>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TPlus */
cltype = type_parser_nodes__TPlus.color;
idtype = type_parser_nodes__TPlus.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3290);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_new_child; /* _n_plus on <self:APlusMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3293);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: APlusMethid, TPlus) */
void parser_prod__APlusMethid__n_plus_61d(val* self, val* p0) {
val* var_node /* var node: TPlus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_node; /* _n_plus on <self:APlusMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TPlus>*/;
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: Object, TPlus) */
void VIRTUAL_parser_prod__APlusMethid__n_plus_61d(val* self, val* p0) {
parser_prod__APlusMethid__n_plus_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: APlusMethid, Visitor) */
void parser_prod__APlusMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPlus */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_plus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3308);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusMethid__visit_all(val* self, val* p0) {
parser_prod__APlusMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#empty_init for (self: AMinusMethid) */
void parser_prod__AMinusMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMinusMethid__empty_init(val* self) {
parser_prod__AMinusMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: AMinusMethid, nullable TMinus) */
void parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0) {
val* var_n_minus /* var n_minus: nullable TMinus */;
var_n_minus = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMinusMethid__empty_init]))(self) /* empty_init on <self:AMinusMethid>*/;
if (var_n_minus == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3319);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_n_minus; /* _n_minus on <self:AMinusMethid> */
if (var_n_minus == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3320);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_minus->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_minus, self) /* parent= on <var_n_minus:nullable TMinus>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: Object, nullable TMinus) */
void VIRTUAL_parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0) {
parser_prod__AMinusMethid__init_aminusmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: AMinusMethid, ANode, nullable ANode) */
void parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinus */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3325);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3328);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_new_child; /* _n_minus on <self:AMinusMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3331);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: AMinusMethid, TMinus) */
void parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_node; /* _n_minus on <self:AMinusMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TMinus>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0) {
parser_prod__AMinusMethid__n_minus_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: AMinusMethid, Visitor) */
void parser_prod__AMinusMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinus */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3346);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusMethid__visit_all(val* self, val* p0) {
parser_prod__AMinusMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarMethid#empty_init for (self: AStarMethid) */
void parser_prod__AStarMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStarMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStarMethid__empty_init(val* self) {
parser_prod__AStarMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: AStarMethid, nullable TStar) */
void parser_prod__AStarMethid__init_astarmethid(val* self, val* p0) {
val* var_n_star /* var n_star: nullable TStar */;
var_n_star = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStarMethid__empty_init]))(self) /* empty_init on <self:AStarMethid>*/;
if (var_n_star == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3357);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_n_star; /* _n_star on <self:AStarMethid> */
if (var_n_star == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3358);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_star->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_star, self) /* parent= on <var_n_star:nullable TStar>*/;
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: Object, nullable TStar) */
void VIRTUAL_parser_prod__AStarMethid__init_astarmethid(val* self, val* p0) {
parser_prod__AStarMethid__init_astarmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: AStarMethid, ANode, nullable ANode) */
void parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStar */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_star");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3363);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TStar>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TStar */
cltype = type_parser_nodes__TStar.color;
idtype = type_parser_nodes__TStar.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3366);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_new_child; /* _n_star on <self:AStarMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3369);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: AStarMethid, TStar) */
void parser_prod__AStarMethid__n_star_61d(val* self, val* p0) {
val* var_node /* var node: TStar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_node; /* _n_star on <self:AStarMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TStar>*/;
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: Object, TStar) */
void VIRTUAL_parser_prod__AStarMethid__n_star_61d(val* self, val* p0) {
parser_prod__AStarMethid__n_star_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: AStarMethid, Visitor) */
void parser_prod__AStarMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_star");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3384);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarMethid__visit_all(val* self, val* p0) {
parser_prod__AStarMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#empty_init for (self: ASlashMethid) */
void parser_prod__ASlashMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASlashMethid__empty_init(val* self) {
parser_prod__ASlashMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: ASlashMethid, nullable TSlash) */
void parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0) {
val* var_n_slash /* var n_slash: nullable TSlash */;
var_n_slash = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASlashMethid__empty_init]))(self) /* empty_init on <self:ASlashMethid>*/;
if (var_n_slash == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3395);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_n_slash; /* _n_slash on <self:ASlashMethid> */
if (var_n_slash == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3396);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_slash->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_slash, self) /* parent= on <var_n_slash:nullable TSlash>*/;
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: Object, nullable TSlash) */
void VIRTUAL_parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0) {
parser_prod__ASlashMethid__init_aslashmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: ASlashMethid, ANode, nullable ANode) */
void parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TSlash */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_slash");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3401);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TSlash>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TSlash */
cltype = type_parser_nodes__TSlash.color;
idtype = type_parser_nodes__TSlash.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3404);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_new_child; /* _n_slash on <self:ASlashMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3407);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASlashMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: ASlashMethid, TSlash) */
void parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0) {
val* var_node /* var node: TSlash */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_node; /* _n_slash on <self:ASlashMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TSlash>*/;
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: Object, TSlash) */
void VIRTUAL_parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0) {
parser_prod__ASlashMethid__n_slash_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: ASlashMethid, Visitor) */
void parser_prod__ASlashMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TSlash */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_slash");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3422);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASlashMethid__visit_all(val* self, val* p0) {
parser_prod__ASlashMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APercentMethid#empty_init for (self: APercentMethid) */
void parser_prod__APercentMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APercentMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APercentMethid__empty_init(val* self) {
parser_prod__APercentMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: APercentMethid, nullable TPercent) */
void parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0) {
val* var_n_percent /* var n_percent: nullable TPercent */;
var_n_percent = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APercentMethid__empty_init]))(self) /* empty_init on <self:APercentMethid>*/;
if (var_n_percent == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3433);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_n_percent; /* _n_percent on <self:APercentMethid> */
if (var_n_percent == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3434);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_percent->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_percent, self) /* parent= on <var_n_percent:nullable TPercent>*/;
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: Object, nullable TPercent) */
void VIRTUAL_parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0) {
parser_prod__APercentMethid__init_apercentmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: APercentMethid, ANode, nullable ANode) */
void parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPercent */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_percent");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3439);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TPercent>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TPercent */
cltype = type_parser_nodes__TPercent.color;
idtype = type_parser_nodes__TPercent.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3442);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_new_child; /* _n_percent on <self:APercentMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3445);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__APercentMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: APercentMethid, TPercent) */
void parser_prod__APercentMethid__n_percent_61d(val* self, val* p0) {
val* var_node /* var node: TPercent */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_node; /* _n_percent on <self:APercentMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TPercent>*/;
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: Object, TPercent) */
void VIRTUAL_parser_prod__APercentMethid__n_percent_61d(val* self, val* p0) {
parser_prod__APercentMethid__n_percent_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: APercentMethid, Visitor) */
void parser_prod__APercentMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPercent */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_percent");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3460);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APercentMethid__visit_all(val* self, val* p0) {
parser_prod__APercentMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEqMethid#empty_init for (self: AEqMethid) */
void parser_prod__AEqMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AEqMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AEqMethid__empty_init(val* self) {
parser_prod__AEqMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: AEqMethid, nullable TEq) */
void parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0) {
val* var_n_eq /* var n_eq: nullable TEq */;
var_n_eq = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AEqMethid__empty_init]))(self) /* empty_init on <self:AEqMethid>*/;
if (var_n_eq == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3471);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_n_eq; /* _n_eq on <self:AEqMethid> */
if (var_n_eq == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3472);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_eq->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_eq, self) /* parent= on <var_n_eq:nullable TEq>*/;
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: Object, nullable TEq) */
void VIRTUAL_parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0) {
parser_prod__AEqMethid__init_aeqmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: AEqMethid, ANode, nullable ANode) */
void parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TEq */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_eq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3477);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TEq>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TEq */
cltype = type_parser_nodes__TEq.color;
idtype = type_parser_nodes__TEq.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3480);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_new_child; /* _n_eq on <self:AEqMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3483);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEqMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: AEqMethid, TEq) */
void parser_prod__AEqMethid__n_eq_61d(val* self, val* p0) {
val* var_node /* var node: TEq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_node; /* _n_eq on <self:AEqMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TEq>*/;
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: Object, TEq) */
void VIRTUAL_parser_prod__AEqMethid__n_eq_61d(val* self, val* p0) {
parser_prod__AEqMethid__n_eq_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: AEqMethid, Visitor) */
void parser_prod__AEqMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TEq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_eq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3498);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEqMethid__visit_all(val* self, val* p0) {
parser_prod__AEqMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANeMethid#empty_init for (self: ANeMethid) */
void parser_prod__ANeMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ANeMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ANeMethid__empty_init(val* self) {
parser_prod__ANeMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: ANeMethid, nullable TNe) */
void parser_prod__ANeMethid__init_anemethid(val* self, val* p0) {
val* var_n_ne /* var n_ne: nullable TNe */;
var_n_ne = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ANeMethid__empty_init]))(self) /* empty_init on <self:ANeMethid>*/;
if (var_n_ne == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3509);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_n_ne; /* _n_ne on <self:ANeMethid> */
if (var_n_ne == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3510);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_ne->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_ne, self) /* parent= on <var_n_ne:nullable TNe>*/;
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: Object, nullable TNe) */
void VIRTUAL_parser_prod__ANeMethid__init_anemethid(val* self, val* p0) {
parser_prod__ANeMethid__init_anemethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: ANeMethid, ANode, nullable ANode) */
void parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNe */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ne");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3515);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TNe>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TNe */
cltype = type_parser_nodes__TNe.color;
idtype = type_parser_nodes__TNe.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3518);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_new_child; /* _n_ne on <self:ANeMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3521);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANeMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: ANeMethid, TNe) */
void parser_prod__ANeMethid__n_ne_61d(val* self, val* p0) {
val* var_node /* var node: TNe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_node; /* _n_ne on <self:ANeMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TNe>*/;
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: Object, TNe) */
void VIRTUAL_parser_prod__ANeMethid__n_ne_61d(val* self, val* p0) {
parser_prod__ANeMethid__n_ne_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: ANeMethid, Visitor) */
void parser_prod__ANeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ne");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3536);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANeMethid__visit_all(val* self, val* p0) {
parser_prod__ANeMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALeMethid#empty_init for (self: ALeMethid) */
void parser_prod__ALeMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALeMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALeMethid__empty_init(val* self) {
parser_prod__ALeMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: ALeMethid, nullable TLe) */
void parser_prod__ALeMethid__init_alemethid(val* self, val* p0) {
val* var_n_le /* var n_le: nullable TLe */;
var_n_le = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALeMethid__empty_init]))(self) /* empty_init on <self:ALeMethid>*/;
if (var_n_le == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3547);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_n_le; /* _n_le on <self:ALeMethid> */
if (var_n_le == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3548);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_le->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_le, self) /* parent= on <var_n_le:nullable TLe>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: Object, nullable TLe) */
void VIRTUAL_parser_prod__ALeMethid__init_alemethid(val* self, val* p0) {
parser_prod__ALeMethid__init_alemethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: ALeMethid, ANode, nullable ANode) */
void parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLe */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_le");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3553);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TLe>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TLe */
cltype = type_parser_nodes__TLe.color;
idtype = type_parser_nodes__TLe.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3556);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_new_child; /* _n_le on <self:ALeMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3559);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALeMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: ALeMethid, TLe) */
void parser_prod__ALeMethid__n_le_61d(val* self, val* p0) {
val* var_node /* var node: TLe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_node; /* _n_le on <self:ALeMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TLe>*/;
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: Object, TLe) */
void VIRTUAL_parser_prod__ALeMethid__n_le_61d(val* self, val* p0) {
parser_prod__ALeMethid__n_le_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: ALeMethid, Visitor) */
void parser_prod__ALeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_le");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3574);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALeMethid__visit_all(val* self, val* p0) {
parser_prod__ALeMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGeMethid#empty_init for (self: AGeMethid) */
void parser_prod__AGeMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AGeMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AGeMethid__empty_init(val* self) {
parser_prod__AGeMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: AGeMethid, nullable TGe) */
void parser_prod__AGeMethid__init_agemethid(val* self, val* p0) {
val* var_n_ge /* var n_ge: nullable TGe */;
var_n_ge = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AGeMethid__empty_init]))(self) /* empty_init on <self:AGeMethid>*/;
if (var_n_ge == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3585);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_n_ge; /* _n_ge on <self:AGeMethid> */
if (var_n_ge == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3586);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_ge->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_ge, self) /* parent= on <var_n_ge:nullable TGe>*/;
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: Object, nullable TGe) */
void VIRTUAL_parser_prod__AGeMethid__init_agemethid(val* self, val* p0) {
parser_prod__AGeMethid__init_agemethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: AGeMethid, ANode, nullable ANode) */
void parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGe */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ge");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3591);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TGe>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TGe */
cltype = type_parser_nodes__TGe.color;
idtype = type_parser_nodes__TGe.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3594);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_new_child; /* _n_ge on <self:AGeMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3597);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGeMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: AGeMethid, TGe) */
void parser_prod__AGeMethid__n_ge_61d(val* self, val* p0) {
val* var_node /* var node: TGe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_node; /* _n_ge on <self:AGeMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TGe>*/;
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: Object, TGe) */
void VIRTUAL_parser_prod__AGeMethid__n_ge_61d(val* self, val* p0) {
parser_prod__AGeMethid__n_ge_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: AGeMethid, Visitor) */
void parser_prod__AGeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ge");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3612);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGeMethid__visit_all(val* self, val* p0) {
parser_prod__AGeMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALtMethid#empty_init for (self: ALtMethid) */
void parser_prod__ALtMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALtMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALtMethid__empty_init(val* self) {
parser_prod__ALtMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: ALtMethid, nullable TLt) */
void parser_prod__ALtMethid__init_altmethid(val* self, val* p0) {
val* var_n_lt /* var n_lt: nullable TLt */;
var_n_lt = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALtMethid__empty_init]))(self) /* empty_init on <self:ALtMethid>*/;
if (var_n_lt == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3623);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_n_lt; /* _n_lt on <self:ALtMethid> */
if (var_n_lt == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3624);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_lt->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_lt, self) /* parent= on <var_n_lt:nullable TLt>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: Object, nullable TLt) */
void VIRTUAL_parser_prod__ALtMethid__init_altmethid(val* self, val* p0) {
parser_prod__ALtMethid__init_altmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: ALtMethid, ANode, nullable ANode) */
void parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLt */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_lt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3629);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TLt>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TLt */
cltype = type_parser_nodes__TLt.color;
idtype = type_parser_nodes__TLt.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3632);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_new_child; /* _n_lt on <self:ALtMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3635);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALtMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: ALtMethid, TLt) */
void parser_prod__ALtMethid__n_lt_61d(val* self, val* p0) {
val* var_node /* var node: TLt */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_node; /* _n_lt on <self:ALtMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TLt>*/;
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: Object, TLt) */
void VIRTUAL_parser_prod__ALtMethid__n_lt_61d(val* self, val* p0) {
parser_prod__ALtMethid__n_lt_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: ALtMethid, Visitor) */
void parser_prod__ALtMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLt */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_lt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3650);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALtMethid__visit_all(val* self, val* p0) {
parser_prod__ALtMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGtMethid#empty_init for (self: AGtMethid) */
void parser_prod__AGtMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AGtMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AGtMethid__empty_init(val* self) {
parser_prod__AGtMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: AGtMethid, nullable TGt) */
void parser_prod__AGtMethid__init_agtmethid(val* self, val* p0) {
val* var_n_gt /* var n_gt: nullable TGt */;
var_n_gt = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AGtMethid__empty_init]))(self) /* empty_init on <self:AGtMethid>*/;
if (var_n_gt == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3661);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_n_gt; /* _n_gt on <self:AGtMethid> */
if (var_n_gt == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3662);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_gt->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_gt, self) /* parent= on <var_n_gt:nullable TGt>*/;
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: Object, nullable TGt) */
void VIRTUAL_parser_prod__AGtMethid__init_agtmethid(val* self, val* p0) {
parser_prod__AGtMethid__init_agtmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: AGtMethid, ANode, nullable ANode) */
void parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGt */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3667);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TGt>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TGt */
cltype = type_parser_nodes__TGt.color;
idtype = type_parser_nodes__TGt.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3670);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_new_child; /* _n_gt on <self:AGtMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3673);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGtMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: AGtMethid, TGt) */
void parser_prod__AGtMethid__n_gt_61d(val* self, val* p0) {
val* var_node /* var node: TGt */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_node; /* _n_gt on <self:AGtMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TGt>*/;
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: Object, TGt) */
void VIRTUAL_parser_prod__AGtMethid__n_gt_61d(val* self, val* p0) {
parser_prod__AGtMethid__n_gt_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: AGtMethid, Visitor) */
void parser_prod__AGtMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGt */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3688);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGtMethid__visit_all(val* self, val* p0) {
parser_prod__AGtMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALlMethid#empty_init for (self: ALlMethid) */
void parser_prod__ALlMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALlMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALlMethid__empty_init(val* self) {
parser_prod__ALlMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: ALlMethid, nullable TLl) */
void parser_prod__ALlMethid__init_allmethid(val* self, val* p0) {
val* var_n_ll /* var n_ll: nullable TLl */;
var_n_ll = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALlMethid__empty_init]))(self) /* empty_init on <self:ALlMethid>*/;
if (var_n_ll == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3699);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_n_ll; /* _n_ll on <self:ALlMethid> */
if (var_n_ll == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3700);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_ll->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_ll, self) /* parent= on <var_n_ll:nullable TLl>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: Object, nullable TLl) */
void VIRTUAL_parser_prod__ALlMethid__init_allmethid(val* self, val* p0) {
parser_prod__ALlMethid__init_allmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: ALlMethid, ANode, nullable ANode) */
void parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLl */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ll");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3705);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TLl>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TLl */
cltype = type_parser_nodes__TLl.color;
idtype = type_parser_nodes__TLl.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3708);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_new_child; /* _n_ll on <self:ALlMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3711);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALlMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: ALlMethid, TLl) */
void parser_prod__ALlMethid__n_ll_61d(val* self, val* p0) {
val* var_node /* var node: TLl */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_node; /* _n_ll on <self:ALlMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TLl>*/;
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: Object, TLl) */
void VIRTUAL_parser_prod__ALlMethid__n_ll_61d(val* self, val* p0) {
parser_prod__ALlMethid__n_ll_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: ALlMethid, Visitor) */
void parser_prod__ALlMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLl */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ll");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3726);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALlMethid__visit_all(val* self, val* p0) {
parser_prod__ALlMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGgMethid#empty_init for (self: AGgMethid) */
void parser_prod__AGgMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AGgMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AGgMethid__empty_init(val* self) {
parser_prod__AGgMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: AGgMethid, nullable TGg) */
void parser_prod__AGgMethid__init_aggmethid(val* self, val* p0) {
val* var_n_gg /* var n_gg: nullable TGg */;
var_n_gg = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AGgMethid__empty_init]))(self) /* empty_init on <self:AGgMethid>*/;
if (var_n_gg == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3737);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_n_gg; /* _n_gg on <self:AGgMethid> */
if (var_n_gg == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3738);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_gg->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_gg, self) /* parent= on <var_n_gg:nullable TGg>*/;
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: Object, nullable TGg) */
void VIRTUAL_parser_prod__AGgMethid__init_aggmethid(val* self, val* p0) {
parser_prod__AGgMethid__init_aggmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: AGgMethid, ANode, nullable ANode) */
void parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGg */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gg");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3743);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TGg>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TGg */
cltype = type_parser_nodes__TGg.color;
idtype = type_parser_nodes__TGg.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3746);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_new_child; /* _n_gg on <self:AGgMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3749);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGgMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: AGgMethid, TGg) */
void parser_prod__AGgMethid__n_gg_61d(val* self, val* p0) {
val* var_node /* var node: TGg */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_node; /* _n_gg on <self:AGgMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TGg>*/;
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: Object, TGg) */
void VIRTUAL_parser_prod__AGgMethid__n_gg_61d(val* self, val* p0) {
parser_prod__AGgMethid__n_gg_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: AGgMethid, Visitor) */
void parser_prod__AGgMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGg */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gg");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3764);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGgMethid__visit_all(val* self, val* p0) {
parser_prod__AGgMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraMethid#empty_init for (self: ABraMethid) */
void parser_prod__ABraMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABraMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABraMethid__empty_init(val* self) {
parser_prod__ABraMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: ABraMethid, nullable TObra, nullable TCbra) */
void parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
var_n_obra = p0;
var_n_cbra = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraMethid__empty_init]))(self) /* empty_init on <self:ABraMethid>*/;
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3776);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraMethid> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3777);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3778);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraMethid> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3779);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_cbra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cbra, self) /* parent= on <var_n_cbra:nullable TCbra>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: Object, nullable TObra, nullable TCbra) */
void VIRTUAL_parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1) {
parser_prod__ABraMethid__init_abramethid(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: ABraMethid, ANode, nullable ANode) */
void parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TCbra */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3784);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3787);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_new_child; /* _n_obra on <self:ABraMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3790);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3794);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TCbra>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCbra */
cltype10 = type_parser_nodes__TCbra.color;
idtype11 = type_parser_nodes__TCbra.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3797);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_new_child; /* _n_cbra on <self:ABraMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3800);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void parser_prod__ABraMethid__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_node; /* _n_obra on <self:ABraMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TObra>*/;
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraMethid__n_obra_61d(val* self, val* p0) {
parser_prod__ABraMethid__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCbra>*/;
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraMethid__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: ABraMethid, Visitor) */
void parser_prod__ABraMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3820);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3821);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraMethid__visit_all(val* self, val* p0) {
parser_prod__ABraMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#empty_init for (self: AStarshipMethid) */
void parser_prod__AStarshipMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStarshipMethid__empty_init(val* self) {
parser_prod__AStarshipMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: AStarshipMethid, nullable TStarship) */
void parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0) {
val* var_n_starship /* var n_starship: nullable TStarship */;
var_n_starship = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStarshipMethid__empty_init]))(self) /* empty_init on <self:AStarshipMethid>*/;
if (var_n_starship == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3832);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_n_starship; /* _n_starship on <self:AStarshipMethid> */
if (var_n_starship == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3833);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_starship->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_starship, self) /* parent= on <var_n_starship:nullable TStarship>*/;
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: Object, nullable TStarship) */
void VIRTUAL_parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0) {
parser_prod__AStarshipMethid__init_astarshipmethid(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: AStarshipMethid, ANode, nullable ANode) */
void parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStarship */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_starship");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3838);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TStarship>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TStarship */
cltype = type_parser_nodes__TStarship.color;
idtype = type_parser_nodes__TStarship.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3841);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_new_child; /* _n_starship on <self:AStarshipMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3844);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarshipMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: AStarshipMethid, TStarship) */
void parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0) {
val* var_node /* var node: TStarship */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_node; /* _n_starship on <self:AStarshipMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TStarship>*/;
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: Object, TStarship) */
void VIRTUAL_parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0) {
parser_prod__AStarshipMethid__n_starship_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: AStarshipMethid, Visitor) */
void parser_prod__AStarshipMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStarship */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_starship");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3859);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarshipMethid__visit_all(val* self, val* p0) {
parser_prod__AStarshipMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#empty_init for (self: AAssignMethid) */
void parser_prod__AAssignMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAssignMethid__empty_init(val* self) {
parser_prod__AAssignMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: AAssignMethid, nullable TId, nullable TAssign) */
void parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_id = p0;
var_n_assign = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAssignMethid__empty_init]))(self) /* empty_init on <self:AAssignMethid>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3871);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_n_id; /* _n_id on <self:AAssignMethid> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3872);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3873);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:AAssignMethid> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3874);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: Object, nullable TId, nullable TAssign) */
void VIRTUAL_parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1) {
parser_prod__AAssignMethid__init_aassignmethid(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: AAssignMethid, ANode, nullable ANode) */
void parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3879);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3882);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_new_child; /* _n_id on <self:AAssignMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3885);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3889);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3892);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_new_child; /* _n_assign on <self:AAssignMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3895);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAssignMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void parser_prod__AAssignMethid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_node; /* _n_id on <self:AAssignMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AAssignMethid__n_id_61d(val* self, val* p0) {
parser_prod__AAssignMethid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_node; /* _n_assign on <self:AAssignMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAssign>*/;
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0) {
parser_prod__AAssignMethid__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: AAssignMethid, Visitor) */
void parser_prod__AAssignMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3915);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3916);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAssignMethid__visit_all(val* self, val* p0) {
parser_prod__AAssignMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#empty_init for (self: ABraassignMethid) */
void parser_prod__ABraassignMethid__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABraassignMethid__empty_init(val* self) {
parser_prod__ABraassignMethid__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: ABraassignMethid, nullable TObra, nullable TCbra, nullable TAssign) */
void parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_obra = p0;
var_n_cbra = p1;
var_n_assign = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABraassignMethid__empty_init]))(self) /* empty_init on <self:ABraassignMethid>*/;
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3929);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraassignMethid> */
if (var_n_obra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3930);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_obra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_obra, self) /* parent= on <var_n_obra:nullable TObra>*/;
}
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3931);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraassignMethid> */
if (var_n_cbra == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3932);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_cbra->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_cbra, self) /* parent= on <var_n_cbra:nullable TCbra>*/;
}
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3933);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:ABraassignMethid> */
if (var_n_assign == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3934);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign>*/;
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: Object, nullable TObra, nullable TCbra, nullable TAssign) */
void VIRTUAL_parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABraassignMethid__init_abraassignmethid(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: ABraassignMethid, ANode, nullable ANode) */
void parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TCbra */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3939);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3942);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_new_child; /* _n_obra on <self:ABraassignMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3945);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3949);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TCbra>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TCbra */
cltype10 = type_parser_nodes__TCbra.color;
idtype11 = type_parser_nodes__TCbra.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3952);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_new_child; /* _n_cbra on <self:ABraassignMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3955);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3959);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3962);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_new_child; /* _n_assign on <self:ABraassignMethid> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3965);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraassignMethid__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_node; /* _n_obra on <self:ABraassignMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TObra>*/;
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraassignMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TCbra>*/;
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_node; /* _n_assign on <self:ABraassignMethid> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TAssign>*/;
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: ABraassignMethid, Visitor) */
void parser_prod__ABraassignMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
val* var2 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3990);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3991);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 3992);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraassignMethid__visit_all(val* self, val* p0) {
parser_prod__ABraassignMethid__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASignature#empty_init for (self: ASignature) */
void parser_prod__ASignature__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASignature#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASignature__empty_init(val* self) {
parser_prod__ASignature__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: ASignature, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_params /* var n_params: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : ANodes[AParam] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
var_n_opar = p0;
var_n_params = p1;
var_n_cpar = p2;
var_n_type = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASignature__empty_init]))(self) /* empty_init on <self:ASignature>*/;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_n_opar; /* _n_opar on <self:ASignature> */
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
var2 = ((val* (*)(val*))(var_n_params->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_params) /* iterator on <var_n_params:Collection[Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
/* <var_n:Object> isa AParam */
cltype = type_parser_nodes__AParam.color;
idtype = type_parser_nodes__AParam.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4011);
show_backtrace(1);
}
var6 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4012);
show_backtrace(1);
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_n) /* add on <var6:ANodes[AParam]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AParam)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_n_cpar; /* _n_cpar on <self:ASignature> */
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
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_n_type; /* _n_type on <self:ASignature> */
var9 = NULL;
if (var_n_type == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType(AType)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: Object, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void VIRTUAL_parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ASignature__init_asignature(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: ASignature, ANode, nullable ANode) */
void parser_prod__ASignature__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TOpar */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : Range[Int] */;
long var7 /* : Int */;
val* var8 /* : ANodes[AParam] */;
long var9 /* : Int */;
val* var10 /* : Discrete */;
val* var11 /* : Discrete */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var_i /* var i: Int */;
long var15 /* : Int */;
val* var16 /* : ANodes[AParam] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ANodes[AParam] */;
val* var25 /* : ANodes[AParam] */;
val* var26 /* : nullable TCpar */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : null */;
val* var34 /* : nullable AType */;
short int var35 /* : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TOpar>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4030);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_new_child; /* _n_opar on <self:ASignature> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var5; /* _n_opar on <self:ASignature> */
}
goto RET_LABEL;
} else {
}
var6 = NEW_range__Range(&type_range__Rangekernel__Int);
var7 = 0;
var8 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4037);
show_backtrace(1);
}
var9 = ((long (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__length]))(var8) /* length on <var8:ANodes[AParam]>*/;
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
var16 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4038);
show_backtrace(1);
}
var17 = ((val* (*)(val*, long))(var16->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var16, var_i) /* [] on <var16:ANodes[AParam]>*/;
var18 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_old_child) /* == on <var17:nullable Object(AParam)>*/;
if (var18){
var19 = NULL;
if (var_new_child == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
/* <var_new_child:nullable ANode(ANode)> isa AParam */
cltype22 = type_parser_nodes__AParam.color;
idtype23 = type_parser_nodes__AParam.id;
if(cltype22 >= var_new_child->type->table_size) {
var21 = 0;
} else {
var21 = var_new_child->type->type_table[cltype22] == idtype23;
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4040);
show_backtrace(1);
}
var24 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4041);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var24->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var24, var_i, var_new_child) /* []= on <var24:ANodes[AParam]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AParam)>*/;
} else {
var25 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4044);
show_backtrace(1);
}
((void (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var25, var_i) /* remove_at on <var25:ANodes[AParam]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var26 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
if (var26 == NULL) {
var27 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_old_child) /* == on <var26:nullable TCpar>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4052);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_new_child; /* _n_cpar on <self:ASignature> */
} else {
var33 = NULL;
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var33; /* _n_cpar on <self:ASignature> */
}
goto RET_LABEL;
} else {
}
var34 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
if (var34 == NULL) {
var35 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var35 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_kernel__Object___61d_61d]))(var34, var_old_child) /* == on <var34:nullable AType>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype39 = type_parser_nodes__AType.color;
idtype40 = type_parser_nodes__AType.id;
if(cltype39 >= var_new_child->type->table_size) {
var38 = 0;
} else {
var38 = var_new_child->type->type_table[cltype39] == idtype40;
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4062);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_new_child; /* _n_type on <self:ASignature> */
} else {
var41 = NULL;
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var41; /* _n_type on <self:ASignature> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASignature__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASignature__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void parser_prod__ASignature__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_node; /* _n_opar on <self:ASignature> */
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
/* method parser_prod#ASignature#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__ASignature__n_opar_61d(val* self, val* p0) {
parser_prod__ASignature__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void parser_prod__ASignature__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_node; /* _n_cpar on <self:ASignature> */
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
/* method parser_prod#ASignature#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__ASignature__n_cpar_61d(val* self, val* p0) {
parser_prod__ASignature__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASignature#n_type= for (self: ASignature, nullable AType) */
void parser_prod__ASignature__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_node; /* _n_type on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AType(AType)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__ASignature__n_type_61d(val* self, val* p0) {
parser_prod__ASignature__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASignature#visit_all for (self: ASignature, Visitor) */
void parser_prod__ASignature__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TOpar */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TOpar */;
val* var4 /* : ANodes[AParam] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_n /* var n: AParam */;
val* var8 /* : nullable TCpar */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : nullable TCpar */;
val* var12 /* : nullable AType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4097);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_params");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4099);
show_backtrace(1);
}
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:ANodes[AParam]>*/;
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
var8 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
var9 = NULL;
if (var8 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
var11 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4103);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4106);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASignature__visit_all(val* self, val* p0) {
parser_prod__ASignature__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParam#empty_init for (self: AParam) */
void parser_prod__AParam__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AParam#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AParam__empty_init(val* self) {
parser_prod__AParam__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: AParam, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
var_n_id = p0;
var_n_type = p1;
var_n_dotdotdot = p2;
var_n_annotations = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AParam__empty_init]))(self) /* empty_init on <self:AParam>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4121);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_n_id; /* _n_id on <self:AParam> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4122);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_n_type; /* _n_type on <self:AParam> */
var = NULL;
if (var_n_type == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType(AType)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AParam> */
var2 = NULL;
if (var_n_dotdotdot == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_dotdotdot->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_dotdotdot, self) /* parent= on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParam> */
var4 = NULL;
if (var_n_annotations == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: Object, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AParam__init_aparam(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: AParam, ANode, nullable ANode) */
void parser_prod__AParam__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : nullable TDotdotdot */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : null */;
val* var21 /* : nullable AAnnotations */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4139);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4142);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_new_child; /* _n_id on <self:AParam> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4145);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AType>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype10 = type_parser_nodes__AType.color;
idtype11 = type_parser_nodes__AType.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4152);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_new_child; /* _n_type on <self:AParam> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var12; /* _n_type on <self:AParam> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var13 == NULL) {
var14 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:nullable TDotdotdot>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TDotdotdot */
cltype18 = type_parser_nodes__TDotdotdot.color;
idtype19 = type_parser_nodes__TDotdotdot.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4162);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_new_child; /* _n_dotdotdot on <self:AParam> */
} else {
var20 = NULL;
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var20; /* _n_dotdotdot on <self:AParam> */
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:nullable AAnnotations>*/;
}
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype26 = type_parser_nodes__AAnnotations.color;
idtype27 = type_parser_nodes__AAnnotations.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4172);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AParam> */
} else {
var28 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var28; /* _n_annotations on <self:AParam> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParam__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParam__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: AParam, TId) */
void parser_prod__AParam__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_node; /* _n_id on <self:AParam> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AParam__n_id_61d(val* self, val* p0) {
parser_prod__AParam__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: AParam, nullable AType) */
void parser_prod__AParam__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_node; /* _n_type on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AType(AType)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AParam__n_type_61d(val* self, val* p0) {
parser_prod__AParam__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDotdotdot */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TDotdotdot(TDotdotdot)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: Object, nullable TDotdotdot) */
void VIRTUAL_parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0) {
parser_prod__AParam__n_dotdotdot_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: AParam, nullable AAnnotations) */
void parser_prod__AParam__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParam> */
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
/* method parser_prod#AParam#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParam__n_annotations_61d(val* self, val* p0) {
parser_prod__AParam__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: AParam, Visitor) */
void parser_prod__AParam__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : nullable AType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AType */;
val* var5 /* : nullable TDotdotdot */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable TDotdotdot */;
val* var9 /* : nullable AAnnotations */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4211);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4213);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4216);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var9 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
var10 = NULL;
if (var9 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4219);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var12) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParam__visit_all(val* self, val* p0) {
parser_prod__AParam__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AType#empty_init for (self: AType) */
void parser_prod__AType__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AType#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AType__empty_init(val* self) {
parser_prod__AType__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: AType, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void parser_prod__AType__init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_types /* var n_types: Collection[Object] */;
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
val* var6 /* : ANodes[AType] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
var_n_kwnullable = p0;
var_n_id = p1;
var_n_types = p2;
var_n_annotations = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AType__empty_init]))(self) /* empty_init on <self:AType>*/;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AType> */
var = NULL;
if (var_n_kwnullable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwnullable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwnullable, self) /* parent= on <var_n_kwnullable:nullable TKwnullable(TKwnullable)>*/;
} else {
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4238);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_n_id; /* _n_id on <self:AType> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4239);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TClassid>*/;
}
var2 = ((val* (*)(val*))(var_n_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_types) /* iterator on <var_n_types:Collection[Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
/* <var_n:Object> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4241);
show_backtrace(1);
}
var6 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4242);
show_backtrace(1);
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_n) /* add on <var6:ANodes[AType]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AType)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AType> */
var7 = NULL;
if (var_n_annotations == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: Object, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void VIRTUAL_parser_prod__AType__init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AType__init_atype(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: AType, ANode, nullable ANode) */
void parser_prod__AType__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwnullable */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : TClassid */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Range[Int] */;
long var14 /* : Int */;
val* var15 /* : ANodes[AType] */;
long var16 /* : Int */;
val* var17 /* : Discrete */;
val* var18 /* : Discrete */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
long var_i /* var i: Int */;
long var22 /* : Int */;
val* var23 /* : ANodes[AType] */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : ANodes[AType] */;
val* var32 /* : ANodes[AType] */;
val* var33 /* : nullable AAnnotations */;
short int var34 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwnullable>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwnullable */
cltype = type_parser_nodes__TKwnullable.color;
idtype = type_parser_nodes__TKwnullable.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4256);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_new_child; /* _n_kwnullable on <self:AType> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var5; /* _n_kwnullable on <self:AType> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4263);
show_backtrace(1);
}
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:TClassid>*/;
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TClassid */
cltype11 = type_parser_nodes__TClassid.color;
idtype12 = type_parser_nodes__TClassid.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4266);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_new_child; /* _n_id on <self:AType> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4269);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var13 = NEW_range__Range(&type_range__Rangekernel__Int);
var14 = 0;
var15 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4273);
show_backtrace(1);
}
var16 = ((long (*)(val*))(var15->class->vft[COLOR_abstract_collection__Collection__length]))(var15) /* length on <var15:ANodes[AType]>*/;
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
var23 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4274);
show_backtrace(1);
}
var24 = ((val* (*)(val*, long))(var23->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var23, var_i) /* [] on <var23:ANodes[AType]>*/;
var25 = ((short int (*)(val*, val*))(var24->class->vft[COLOR_kernel__Object___61d_61d]))(var24, var_old_child) /* == on <var24:nullable Object(AType)>*/;
if (var25){
var26 = NULL;
if (var_new_child == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (var27){
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype29 = type_parser_nodes__AType.color;
idtype30 = type_parser_nodes__AType.id;
if(cltype29 >= var_new_child->type->table_size) {
var28 = 0;
} else {
var28 = var_new_child->type->type_table[cltype29] == idtype30;
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4276);
show_backtrace(1);
}
var31 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4277);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var31->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var31, var_i, var_new_child) /* []= on <var31:ANodes[AType]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AType)>*/;
} else {
var32 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4280);
show_backtrace(1);
}
((void (*)(val*, long))(var32->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var32, var_i) /* remove_at on <var32:ANodes[AType]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var33 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var33 == NULL) {
var34 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var34 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var_old_child) /* == on <var33:nullable AAnnotations>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype38 = type_parser_nodes__AAnnotations.color;
idtype39 = type_parser_nodes__AAnnotations.id;
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4288);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AType> */
} else {
var40 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var40; /* _n_annotations on <self:AType> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AType__replace_child(val* self, val* p0, val* p1) {
parser_prod__AType__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void parser_prod__AType__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnullable */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AType> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwnullable(TKwnullable)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: Object, nullable TKwnullable) */
void VIRTUAL_parser_prod__AType__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AType__n_kwnullable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: AType, TClassid) */
void parser_prod__AType__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_node; /* _n_id on <self:AType> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TClassid>*/;
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__AType__n_id_61d(val* self, val* p0) {
parser_prod__AType__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: AType, nullable AAnnotations) */
void parser_prod__AType__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AType> */
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
/* method parser_prod#AType#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AType__n_annotations_61d(val* self, val* p0) {
parser_prod__AType__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: AType, Visitor) */
void parser_prod__AType__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwnullable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TKwnullable */;
val* var4 /* : TClassid */;
val* var5 /* : ANodes[AType] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_n /* var n: AType */;
val* var9 /* : nullable AAnnotations */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4321);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4323);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_types");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4324);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:ANodes[AType]>*/;
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
var9 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
var10 = NULL;
if (var9 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4328);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var12) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AType__visit_all(val* self, val* p0) {
parser_prod__AType__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALabel#empty_init for (self: ALabel) */
void parser_prod__ALabel__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ALabel#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ALabel__empty_init(val* self) {
parser_prod__ALabel__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: ALabel, nullable TKwlabel, nullable TId) */
void parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1) {
val* var_n_kwlabel /* var n_kwlabel: nullable TKwlabel */;
val* var_n_id /* var n_id: nullable TId */;
var_n_kwlabel = p0;
var_n_id = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ALabel__empty_init]))(self) /* empty_init on <self:ALabel>*/;
if (var_n_kwlabel == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4341);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_n_kwlabel; /* _n_kwlabel on <self:ALabel> */
if (var_n_kwlabel == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4342);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwlabel->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwlabel, self) /* parent= on <var_n_kwlabel:nullable TKwlabel>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4343);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_n_id; /* _n_id on <self:ALabel> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4344);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: Object, nullable TKwlabel, nullable TId) */
void VIRTUAL_parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1) {
parser_prod__ALabel__init_alabel(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: ALabel, ANode, nullable ANode) */
void parser_prod__ALabel__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwlabel */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwlabel");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4349);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwlabel>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwlabel */
cltype = type_parser_nodes__TKwlabel.color;
idtype = type_parser_nodes__TKwlabel.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4352);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_new_child; /* _n_kwlabel on <self:ALabel> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4355);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4359);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4362);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_new_child; /* _n_id on <self:ALabel> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4365);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALabel__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALabel__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0) {
val* var_node /* var node: TKwlabel */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_node; /* _n_kwlabel on <self:ALabel> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwlabel>*/;
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: Object, TKwlabel) */
void VIRTUAL_parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0) {
parser_prod__ALabel__n_kwlabel_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: ALabel, TId) */
void parser_prod__ALabel__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_node; /* _n_id on <self:ALabel> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ALabel__n_id_61d(val* self, val* p0) {
parser_prod__ALabel__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: ALabel, Visitor) */
void parser_prod__ALabel__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwlabel */;
val* var1 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwlabel");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4385);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4386);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALabel__visit_all(val* self, val* p0) {
parser_prod__ALabel__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#empty_init for (self: ABlockExpr) */
void parser_prod__ABlockExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABlockExpr__empty_init(val* self) {
parser_prod__ABlockExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: ABlockExpr, Collection[Object], nullable TKwend) */
void parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
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
var_n_expr = p0;
var_n_kwend = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABlockExpr__empty_init]))(self) /* empty_init on <self:ABlockExpr>*/;
var = ((val* (*)(val*))(var_n_expr->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_expr) /* iterator on <var_n_expr:Collection[Object]>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4399);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4400);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AExpr)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ABlockExpr> */
var5 = NULL;
if (var_n_kwend == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_n_kwend->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwend, self) /* parent= on <var_n_kwend:nullable TKwend(TKwend)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: Object, Collection[Object], nullable TKwend) */
void VIRTUAL_parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1) {
parser_prod__ABlockExpr__init_ablockexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: ABlockExpr, ANode, nullable ANode) */
void parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : nullable TKwend */;
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
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4411);
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
var10 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4412);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4414);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4415);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[AExpr]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExpr)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4418);
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
var18 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var19 = ((short int (*)(val*, val*))(var18->class->vft[COLOR_kernel__Object___61d_61d]))(var18, var_old_child) /* == on <var18:nullable TKwend>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwend */
cltype23 = type_parser_nodes__TKwend.color;
idtype24 = type_parser_nodes__TKwend.id;
if(cltype23 >= var_new_child->type->table_size) {
var22 = 0;
} else {
var22 = var_new_child->type->type_table[cltype23] == idtype24;
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4426);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_new_child; /* _n_kwend on <self:ABlockExpr> */
} else {
var25 = NULL;
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var25; /* _n_kwend on <self:ABlockExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABlockExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_node; /* _n_kwend on <self:ABlockExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwend(TKwend)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: Object, nullable TKwend) */
void VIRTUAL_parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0) {
parser_prod__ABlockExpr__n_kwend_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: ABlockExpr, Visitor) */
void parser_prod__ABlockExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: AExpr */;
val* var4 /* : nullable TKwend */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwend */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4446);
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
var4 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4450);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABlockExpr__visit_all(val* self, val* p0) {
parser_prod__ABlockExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#empty_init for (self: AVardeclExpr) */
void parser_prod__AVardeclExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AVardeclExpr__empty_init(val* self) {
parser_prod__AVardeclExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: AVardeclExpr, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void parser_prod__AVardeclExpr__init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
var_n_kwvar = p0;
var_n_id = p1;
var_n_type = p2;
var_n_assign = p3;
var_n_expr = p4;
var_n_annotations = p5;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AVardeclExpr__empty_init]))(self) /* empty_init on <self:AVardeclExpr>*/;
if (var_n_kwvar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4467);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AVardeclExpr> */
if (var_n_kwvar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4468);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwvar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwvar, self) /* parent= on <var_n_kwvar:nullable TKwvar>*/;
}
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4469);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_n_id; /* _n_id on <self:AVardeclExpr> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4470);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TId>*/;
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_n_type; /* _n_type on <self:AVardeclExpr> */
var = NULL;
if (var_n_type == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType(AType)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVardeclExpr> */
var2 = NULL;
if (var_n_assign == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_assign->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_assign, self) /* parent= on <var_n_assign:nullable TAssign(TAssign)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVardeclExpr> */
var4 = NULL;
if (var_n_expr == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AVardeclExpr> */
var6 = NULL;
if (var_n_annotations == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: Object, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void VIRTUAL_parser_prod__AVardeclExpr__init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AVardeclExpr__init_avardeclexpr(self, p0, p1, p2, p3, p4, p5);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: AVardeclExpr, ANode, nullable ANode) */
void parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwvar */;
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
val* var12 /* : nullable AType */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : null */;
val* var20 /* : nullable TAssign */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : null */;
val* var28 /* : nullable AExpr */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : null */;
val* var36 /* : nullable AAnnotations */;
short int var37 /* : Bool */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4491);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwvar>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwvar */
cltype = type_parser_nodes__TKwvar.color;
idtype = type_parser_nodes__TKwvar.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4494);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_new_child; /* _n_kwvar on <self:AVardeclExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4497);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4501);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4504);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_new_child; /* _n_id on <self:AVardeclExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4507);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:nullable AType>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype17 = type_parser_nodes__AType.color;
idtype18 = type_parser_nodes__AType.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4514);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_new_child; /* _n_type on <self:AVardeclExpr> */
} else {
var19 = NULL;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var19; /* _n_type on <self:AVardeclExpr> */
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var20 == NULL) {
var21 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var21 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___61d_61d]))(var20, var_old_child) /* == on <var20:nullable TAssign>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TAssign */
cltype25 = type_parser_nodes__TAssign.color;
idtype26 = type_parser_nodes__TAssign.id;
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4524);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_new_child; /* _n_assign on <self:AVardeclExpr> */
} else {
var27 = NULL;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var27; /* _n_assign on <self:AVardeclExpr> */
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AExpr>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype33 = type_parser_nodes__AExpr.color;
idtype34 = type_parser_nodes__AExpr.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4534);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_new_child; /* _n_expr on <self:AVardeclExpr> */
} else {
var35 = NULL;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var35; /* _n_expr on <self:AVardeclExpr> */
}
goto RET_LABEL;
} else {
}
var36 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var36 == NULL) {
var37 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var37 = ((short int (*)(val*, val*))(var36->class->vft[COLOR_kernel__Object___61d_61d]))(var36, var_old_child) /* == on <var36:nullable AAnnotations>*/;
}
if (var37){
var38 = NULL;
if (var_new_child == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (var39){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype41 = type_parser_nodes__AAnnotations.color;
idtype42 = type_parser_nodes__AAnnotations.id;
if(cltype41 >= var_new_child->type->table_size) {
var40 = 0;
} else {
var40 = var_new_child->type->type_table[cltype41] == idtype42;
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4544);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AVardeclExpr> */
} else {
var43 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var43; /* _n_annotations on <self:AVardeclExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVardeclExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, TKwvar) */
void parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_node; /* _n_kwvar on <self:AVardeclExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwvar>*/;
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_kwvar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_node; /* _n_id on <self:AVardeclExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TId>*/;
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_node; /* _n_type on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AType(AType)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_node; /* _n_assign on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TAssign(TAssign)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: Object, nullable TAssign) */
void VIRTUAL_parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_assign_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_node; /* _n_expr on <self:AVardeclExpr> */
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
/* method parser_prod#AVardeclExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: AVardeclExpr, nullable AAnnotations) */
void parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AVardeclExpr> */
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
/* method parser_prod#AVardeclExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: AVardeclExpr, Visitor) */
void parser_prod__AVardeclExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwvar */;
val* var1 /* : TId */;
val* var2 /* : nullable AType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable AType */;
val* var6 /* : nullable TAssign */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable TAssign */;
val* var10 /* : nullable AExpr */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable AExpr */;
val* var14 /* : nullable AAnnotations */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4595);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4596);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4598);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4601);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var10 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4604);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var13) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
var15 = NULL;
if (var14 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
var17 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4607);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var17) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVardeclExpr__visit_all(val* self, val* p0) {
parser_prod__AVardeclExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#empty_init for (self: AReturnExpr) */
void parser_prod__AReturnExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AReturnExpr__empty_init(val* self) {
parser_prod__AReturnExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: AReturnExpr, nullable TKwreturn, nullable AExpr) */
void parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1) {
val* var_n_kwreturn /* var n_kwreturn: nullable TKwreturn */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwreturn = p0;
var_n_expr = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AReturnExpr__empty_init]))(self) /* empty_init on <self:AReturnExpr>*/;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_n_kwreturn; /* _n_kwreturn on <self:AReturnExpr> */
var = NULL;
if (var_n_kwreturn == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwreturn->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwreturn, self) /* parent= on <var_n_kwreturn:nullable TKwreturn(TKwreturn)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AReturnExpr> */
var2 = NULL;
if (var_n_expr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: Object, nullable TKwreturn, nullable AExpr) */
void VIRTUAL_parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1) {
parser_prod__AReturnExpr__init_areturnexpr(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: AReturnExpr, ANode, nullable ANode) */
void parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwreturn */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwreturn>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwreturn */
cltype = type_parser_nodes__TKwreturn.color;
idtype = type_parser_nodes__TKwreturn.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4635);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_new_child; /* _n_kwreturn on <self:AReturnExpr> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var5; /* _n_kwreturn on <self:AReturnExpr> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable AExpr>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype11 = type_parser_nodes__AExpr.color;
idtype12 = type_parser_nodes__AExpr.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4645);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_new_child; /* _n_expr on <self:AReturnExpr> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var13; /* _n_expr on <self:AReturnExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AReturnExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwreturn */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_node; /* _n_kwreturn on <self:AReturnExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwreturn(TKwreturn)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: Object, nullable TKwreturn) */
void VIRTUAL_parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
parser_prod__AReturnExpr__n_kwreturn_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_node; /* _n_expr on <self:AReturnExpr> */
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
/* method parser_prod#AReturnExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AReturnExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: AReturnExpr, Visitor) */
void parser_prod__AReturnExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwreturn */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TKwreturn */;
val* var4 /* : nullable AExpr */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4673);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4676);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AReturnExpr__visit_all(val* self, val* p0) {
parser_prod__AReturnExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#empty_init for (self: ABreakExpr) */
void parser_prod__ABreakExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ABreakExpr__empty_init(val* self) {
parser_prod__ABreakExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: ABreakExpr, nullable TKwbreak, nullable ALabel, nullable AExpr) */
void parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwbreak = p0;
var_n_label = p1;
var_n_expr = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ABreakExpr__empty_init]))(self) /* empty_init on <self:ABreakExpr>*/;
if (var_n_kwbreak == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4690);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakExpr> */
if (var_n_kwbreak == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4691);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwbreak->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwbreak, self) /* parent= on <var_n_kwbreak:nullable TKwbreak>*/;
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ABreakExpr> */
var = NULL;
if (var_n_label == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_label->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_label, self) /* parent= on <var_n_label:nullable ALabel(ALabel)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABreakExpr> */
var2 = NULL;
if (var_n_expr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: Object, nullable TKwbreak, nullable ALabel, nullable AExpr) */
void VIRTUAL_parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABreakExpr__init_abreakexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: ABreakExpr, ANode, nullable ANode) */
void parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwbreak */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable ALabel */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : nullable AExpr */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwbreak");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4704);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4707);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_new_child; /* _n_kwbreak on <self:ABreakExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4710);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable ALabel>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa ALabel */
cltype10 = type_parser_nodes__ALabel.color;
idtype11 = type_parser_nodes__ALabel.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4717);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:ABreakExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var12; /* _n_label on <self:ABreakExpr> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
if (var13 == NULL) {
var14 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:nullable AExpr>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype18 = type_parser_nodes__AExpr.color;
idtype19 = type_parser_nodes__AExpr.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4727);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val = var_new_child; /* _n_expr on <self:ABreakExpr> */
} else {
var20 = NULL;
self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val = var20; /* _n_expr on <self:ABreakExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABreakExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwbreak>*/;
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: Object, TKwbreak) */
void VIRTUAL_parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_kwbreak_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: ABreakExpr, nullable ALabel) */
void parser_prod__ABreakExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ABreakExpr> */
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
/* method parser_prod#ABreakExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ABreakExpr__n_label_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_expr= for (self: ABreakExpr, nullable AExpr) */
void parser_prod__ABreakExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val = var_node; /* _n_expr on <self:ABreakExpr> */
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
/* method parser_prod#ABreakExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ABreakExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: ABreakExpr, Visitor) */
void parser_prod__ABreakExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
val* var1 /* : nullable ALabel */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable ALabel */;
val* var5 /* : nullable AExpr */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwbreak");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4759);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4761);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4764);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABreakExpr__visit_all(val* self, val* p0) {
parser_prod__ABreakExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#empty_init for (self: AAbortExpr) */
void parser_prod__AAbortExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAbortExpr__empty_init(val* self) {
parser_prod__AAbortExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: AAbortExpr, nullable TKwabort) */
void parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0) {
val* var_n_kwabort /* var n_kwabort: nullable TKwabort */;
var_n_kwabort = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAbortExpr__empty_init]))(self) /* empty_init on <self:AAbortExpr>*/;
if (var_n_kwabort == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4776);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_n_kwabort; /* _n_kwabort on <self:AAbortExpr> */
if (var_n_kwabort == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4777);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwabort->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwabort, self) /* parent= on <var_n_kwabort:nullable TKwabort>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: Object, nullable TKwabort) */
void VIRTUAL_parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0) {
parser_prod__AAbortExpr__init_aabortexpr(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: AAbortExpr, ANode, nullable ANode) */
void parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabort */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabort");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4782);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwabort>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwabort */
cltype = type_parser_nodes__TKwabort.color;
idtype = type_parser_nodes__TKwabort.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4785);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_new_child; /* _n_kwabort on <self:AAbortExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4788);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAbortExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
val* var_node /* var node: TKwabort */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_node; /* _n_kwabort on <self:AAbortExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwabort>*/;
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: Object, TKwabort) */
void VIRTUAL_parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
parser_prod__AAbortExpr__n_kwabort_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: AAbortExpr, Visitor) */
void parser_prod__AAbortExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabort */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabort");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4803);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAbortExpr__visit_all(val* self, val* p0) {
parser_prod__AAbortExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#empty_init for (self: AContinueExpr) */
void parser_prod__AContinueExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AContinueExpr__empty_init(val* self) {
parser_prod__AContinueExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: AContinueExpr, nullable TKwcontinue, nullable ALabel, nullable AExpr) */
void parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwcontinue /* var n_kwcontinue: nullable TKwcontinue */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
var_n_kwcontinue = p0;
var_n_label = p1;
var_n_expr = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AContinueExpr__empty_init]))(self) /* empty_init on <self:AContinueExpr>*/;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_n_kwcontinue; /* _n_kwcontinue on <self:AContinueExpr> */
var = NULL;
if (var_n_kwcontinue == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwcontinue->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwcontinue, self) /* parent= on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AContinueExpr> */
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
self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AContinueExpr> */
var4 = NULL;
if (var_n_expr == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: Object, nullable TKwcontinue, nullable ALabel, nullable AExpr) */
void VIRTUAL_parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AContinueExpr__init_acontinueexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: AContinueExpr, ANode, nullable ANode) */
void parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwcontinue */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable ALabel */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AExpr */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable TKwcontinue>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa TKwcontinue */
cltype = type_parser_nodes__TKwcontinue.color;
idtype = type_parser_nodes__TKwcontinue.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4835);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_new_child; /* _n_kwcontinue on <self:AContinueExpr> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var5; /* _n_kwcontinue on <self:AContinueExpr> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable ALabel>*/;
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
/* <var_new_child:nullable ANode(ANode)> isa ALabel */
cltype11 = type_parser_nodes__ALabel.color;
idtype12 = type_parser_nodes__ALabel.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4845);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:AContinueExpr> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var13; /* _n_label on <self:AContinueExpr> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AExpr>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype19 = type_parser_nodes__AExpr.color;
idtype20 = type_parser_nodes__AExpr.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4855);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val = var_new_child; /* _n_expr on <self:AContinueExpr> */
} else {
var21 = NULL;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val = var21; /* _n_expr on <self:AContinueExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AContinueExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcontinue */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_node; /* _n_kwcontinue on <self:AContinueExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwcontinue(TKwcontinue)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: Object, nullable TKwcontinue) */
void VIRTUAL_parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_kwcontinue_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: AContinueExpr, nullable ALabel) */
void parser_prod__AContinueExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AContinueExpr> */
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
/* method parser_prod#AContinueExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AContinueExpr__n_label_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_expr= for (self: AContinueExpr, nullable AExpr) */
void parser_prod__AContinueExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val = var_node; /* _n_expr on <self:AContinueExpr> */
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
/* method parser_prod#AContinueExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AContinueExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: AContinueExpr, Visitor) */
void parser_prod__AContinueExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwcontinue */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable TKwcontinue */;
val* var4 /* : nullable ALabel */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable ALabel */;
val* var8 /* : nullable AExpr */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4890);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4893);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
var9 = NULL;
if (var8 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
var11 = self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4896);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AContinueExpr__visit_all(val* self, val* p0) {
parser_prod__AContinueExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#empty_init for (self: ADoExpr) */
void parser_prod__ADoExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ADoExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ADoExpr__empty_init(val* self) {
parser_prod__ADoExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: ADoExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwdo = p0;
var_n_block = p1;
var_n_label = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ADoExpr__empty_init]))(self) /* empty_init on <self:ADoExpr>*/;
if (var_n_kwdo == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4910);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:ADoExpr> */
if (var_n_kwdo == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4911);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwdo->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwdo, self) /* parent= on <var_n_kwdo:nullable TKwdo>*/;
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_n_block; /* _n_block on <self:ADoExpr> */
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
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ADoExpr> */
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
/* method parser_prod#ADoExpr#init_adoexpr for (self: Object, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ADoExpr__init_adoexpr(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: ADoExpr, ANode, nullable ANode) */
void parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdo */;
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
var = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4924);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwdo>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwdo */
cltype = type_parser_nodes__TKwdo.color;
idtype = type_parser_nodes__TKwdo.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4927);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_new_child; /* _n_kwdo on <self:ADoExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4930);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4937);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_new_child; /* _n_block on <self:ADoExpr> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var12; /* _n_block on <self:ADoExpr> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4947);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_new_child; /* _n_label on <self:ADoExpr> */
} else {
var20 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var20; /* _n_label on <self:ADoExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADoExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:ADoExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwdo>*/;
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_kwdo_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void parser_prod__ADoExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_node; /* _n_block on <self:ADoExpr> */
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
/* method parser_prod#ADoExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ADoExpr__n_block_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: ADoExpr, nullable ALabel) */
void parser_prod__ADoExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ADoExpr> */
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
/* method parser_prod#ADoExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ADoExpr__n_label_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_label_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: ADoExpr, Visitor) */
void parser_prod__ADoExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdo */;
val* var1 /* : nullable AExpr */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable ALabel */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4979);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4981);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4984);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADoExpr__visit_all(val* self, val* p0) {
parser_prod__ADoExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#empty_init for (self: AIfExpr) */
void parser_prod__AIfExpr__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIfExpr#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIfExpr__empty_init(val* self) {
parser_prod__AIfExpr__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: AIfExpr, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_kwif = p0;
var_n_expr = p1;
var_n_then = p2;
var_n_else = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIfExpr__empty_init]))(self) /* empty_init on <self:AIfExpr>*/;
if (var_n_kwif == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 4999);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfExpr> */
if (var_n_kwif == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5000);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwif->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwif, self) /* parent= on <var_n_kwif:nullable TKwif>*/;
}
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5001);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfExpr> */
if (var_n_expr == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5002);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr>*/;
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_n_then; /* _n_then on <self:AIfExpr> */
var = NULL;
if (var_n_then == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_then->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_then, self) /* parent= on <var_n_then:nullable AExpr(AExpr)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_n_else; /* _n_else on <self:AIfExpr> */
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
/* method parser_prod#AIfExpr#init_aifexpr for (self: Object, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AIfExpr__init_aifexpr(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: AIfExpr, ANode, nullable ANode) */
void parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var12 /* : nullable AExpr */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : null */;
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
var = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwif");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5015);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5018);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_new_child; /* _n_kwif on <self:AIfExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5021);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5025);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5028);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_new_child; /* _n_expr on <self:AIfExpr> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5031);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:nullable AExpr>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5038);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_new_child; /* _n_then on <self:AIfExpr> */
} else {
var19 = NULL;
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var19; /* _n_then on <self:AIfExpr> */
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5048);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_new_child; /* _n_else on <self:AIfExpr> */
} else {
var27 = NULL;
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var27; /* _n_else on <self:AIfExpr> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIfExpr__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwif>*/;
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_kwif_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void parser_prod__AIfExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_node; /* _n_expr on <self:AIfExpr> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AExpr>*/;
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void parser_prod__AIfExpr__n_then_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_node; /* _n_then on <self:AIfExpr> */
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
/* method parser_prod#AIfExpr#n_then= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_then_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_then_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void parser_prod__AIfExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_node; /* _n_else on <self:AIfExpr> */
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
/* method parser_prod#AIfExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_else_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_else_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: AIfExpr, Visitor) */
void parser_prod__AIfExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwif");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5085);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5086);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5088);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 5091);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIfExpr__visit_all(val* self, val* p0) {
parser_prod__AIfExpr__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#empty_init for (self: AIfexprExpr) */
void parser_prod__AIfexprExpr__empty_init(val* self) {
RET_LABEL:;
}
