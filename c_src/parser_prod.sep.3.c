#include "parser_prod.sep.0.h"
/* method parser_prod#ASignature#replace_child for (self: ASignature, ANode, nullable ANode) */
void parser_prod__ASignature__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TOpar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[AParam] */;
val* var10 /* : ANodes[AParam] */;
short int var11 /* : Bool */;
val* var12 /* : nullable TCpar */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
val* var23 /* : nullable AType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TOpar(TOpar)> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2743);
show_backtrace(1);
}
{
parser_prod__ASignature__n_opar_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_opar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var10 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = parser_nodes__ANodes__replace_child(var8, var_old_child, var_new_child);
}
if (var11){
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:nullable TCpar(TCpar)> */
var18 = var12 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype20 = type_nullable_parser_nodes__TCpar.color;
idtype21 = type_nullable_parser_nodes__TCpar.id;
if(var_new_child == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_new_child->type->table_size) {
var19 = 0;
} else {
var19 = var_new_child->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name22 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2748);
show_backtrace(1);
}
{
parser_prod__ASignature__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_cpar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
if (var23 == NULL) {
var24 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var23,var_old_child) on <var23:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:nullable AType(AType)> */
var29 = var23 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype31 = type_nullable_parser_nodes__AType.color;
idtype32 = type_nullable_parser_nodes__AType.id;
if(var_new_child == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
var_class_name33 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2752);
show_backtrace(1);
}
{
parser_prod__ASignature__n_type_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_type= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASignature__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASignature__replace_child(self, p0, p1); /* Direct call parser_prod#ASignature#replace_child on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void parser_prod__ASignature__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_node; /* _n_opar on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TOpar> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TOpar(TOpar)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__ASignature__n_opar_61d(val* self, val* p0) {
parser_prod__ASignature__n_opar_61d(self, p0); /* Direct call parser_prod#ASignature#n_opar= on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void parser_prod__ASignature__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_node; /* _n_cpar on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TCpar> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TCpar(TCpar)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__ASignature__n_cpar_61d(val* self, val* p0) {
parser_prod__ASignature__n_cpar_61d(self, p0); /* Direct call parser_prod#ASignature#n_cpar= on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#n_type= for (self: ASignature, nullable AType) */
void parser_prod__ASignature__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_node; /* _n_type on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AType> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__ASignature__n_type_61d(val* self, val* p0) {
parser_prod__ASignature__n_type_61d(self, p0); /* Direct call parser_prod#ASignature#n_type= on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#visit_all for (self: ASignature, Visitor) */
void parser_prod__ASignature__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TOpar */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
val* var4 /* : nullable TCpar */;
val* var5 /* : nullable AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AParam]>*/
}
var4 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASignature#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASignature__visit_all(val* self, val* p0) {
parser_prod__ASignature__visit_all(self, p0); /* Direct call parser_prod#ASignature#visit_all on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: AParam, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var_n_id = p0;
var_n_type = p1;
var_n_dotdotdot = p2;
var_n_annotations = p3;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2790);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_n_id; /* _n_id on <self:AParam> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2791);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_n_type; /* _n_type on <self:AParam> */
var = NULL;
if (var_n_type == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var) on <var_n_type:nullable AType> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AParam> */
var9 = NULL;
if (var_n_dotdotdot == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_dotdotdot,var9) on <var_n_dotdotdot:nullable TDotdotdot> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_dotdotdot->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_dotdotdot, var_other) /* == on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
var_n_dotdotdot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL16:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParam> */
var17 = NULL;
if (var_n_annotations == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var17) on <var_n_annotations:nullable AAnnotations> */
var_other = var17;
{
var22 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var21 = var22;
}
var23 = !var21;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL24:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: Object, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AParam__init_aparam(self, p0, p1, p2, p3); /* Direct call parser_prod#AParam#init_aparam on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: AParam, ANode, nullable ANode) */
void parser_prod__AParam__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable TDotdotdot */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AAnnotations */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2802);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2803);
show_backtrace(1);
}
{
parser_prod__AParam__n_id_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_id= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AType(AType)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype16 = type_nullable_parser_nodes__AType.color;
idtype17 = type_nullable_parser_nodes__AType.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2807);
show_backtrace(1);
}
{
parser_prod__AParam__n_type_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_type= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable TDotdotdot(TDotdotdot)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable TDotdotdot */
cltype27 = type_nullable_parser_nodes__TDotdotdot.color;
idtype28 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDotdotdot", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2811);
show_backtrace(1);
}
{
parser_prod__AParam__n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_dotdotdot= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AAnnotations(AAnnotations)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype38 = type_nullable_parser_nodes__AAnnotations.color;
idtype39 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2815);
show_backtrace(1);
}
{
parser_prod__AParam__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_annotations= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParam__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParam__replace_child(self, p0, p1); /* Direct call parser_prod#AParam#replace_child on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: AParam, TId) */
void parser_prod__AParam__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_node; /* _n_id on <self:AParam> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AParam__n_id_61d(val* self, val* p0) {
parser_prod__AParam__n_id_61d(self, p0); /* Direct call parser_prod#AParam#n_id= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: AParam, nullable AType) */
void parser_prod__AParam__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_node; /* _n_type on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AType> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AParam__n_type_61d(val* self, val* p0) {
parser_prod__AParam__n_type_61d(self, p0); /* Direct call parser_prod#AParam#n_type= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDotdotdot */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TDotdotdot> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TDotdotdot(TDotdotdot)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDotdotdot(TDotdotdot)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: Object, nullable TDotdotdot) */
void VIRTUAL_parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0) {
parser_prod__AParam__n_dotdotdot_61d(self, p0); /* Direct call parser_prod#AParam#n_dotdotdot= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: AParam, nullable AAnnotations) */
void parser_prod__AParam__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParam__n_annotations_61d(val* self, val* p0) {
parser_prod__AParam__n_annotations_61d(self, p0); /* Direct call parser_prod#AParam#n_annotations= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: AParam, Visitor) */
void parser_prod__AParam__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable TDotdotdot */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2844);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParam__visit_all(val* self, val* p0) {
parser_prod__AParam__visit_all(self, p0); /* Direct call parser_prod#AParam#visit_all on <self:Object(AParam)>*/
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
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var9 /* : ANodes[AType] */;
val* var11 /* : ANodes[AType] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_n_kwnullable = p0;
var_n_id = p1;
var_n_types = p2;
var_n_annotations = p3;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AType> */
var = NULL;
if (var_n_kwnullable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnullable,var) on <var_n_kwnullable:nullable TKwnullable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwnullable->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnullable, var_other) /* == on <var_n_kwnullable:nullable TKwnullable(TKwnullable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
var_n_kwnullable->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2860);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_n_id; /* _n_id on <self:AType> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2861);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var11 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var9, var_n_types); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var9:ANodes[AType]>*/
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AType> */
var12 = NULL;
if (var_n_annotations == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var12) on <var_n_annotations:nullable AAnnotations> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL19:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: Object, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void VIRTUAL_parser_prod__AType__init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AType__init_atype(self, p0, p1, p2, p3); /* Direct call parser_prod#AType#init_atype on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: AType, ANode, nullable ANode) */
void parser_prod__AType__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwnullable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TClassid */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : ANodes[AType] */;
val* var21 /* : ANodes[AType] */;
short int var22 /* : Bool */;
val* var23 /* : nullable AAnnotations */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwnullable(TKwnullable)> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwnullable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2870);
show_backtrace(1);
}
{
parser_prod__AType__n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod#AType#n_kwnullable= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2873);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TClassid> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TClassid */
cltype16 = type_parser_nodes__TClassid.color;
idtype17 = type_parser_nodes__TClassid.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2874);
show_backtrace(1);
}
{
parser_prod__AType__n_id_61d(self, var_new_child); /* Direct call parser_prod#AType#n_id= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var21 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = parser_nodes__ANodes__replace_child(var19, var_old_child, var_new_child);
}
if (var22){
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var23 == NULL) {
var24 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var23,var_old_child) on <var23:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:nullable AAnnotations(AAnnotations)> */
var29 = var23 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype31 = type_nullable_parser_nodes__AAnnotations.color;
idtype32 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
var_class_name33 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2879);
show_backtrace(1);
}
{
parser_prod__AType__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AType#n_annotations= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AType__replace_child(val* self, val* p0, val* p1) {
parser_prod__AType__replace_child(self, p0, p1); /* Direct call parser_prod#AType#replace_child on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void parser_prod__AType__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnullable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AType> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwnullable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwnullable(TKwnullable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwnullable(TKwnullable)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnullable(TKwnullable)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: Object, nullable TKwnullable) */
void VIRTUAL_parser_prod__AType__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AType__n_kwnullable_61d(self, p0); /* Direct call parser_prod#AType#n_kwnullable= on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: AType, TClassid) */
void parser_prod__AType__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_node; /* _n_id on <self:AType> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__AType__n_id_61d(val* self, val* p0) {
parser_prod__AType__n_id_61d(self, p0); /* Direct call parser_prod#AType#n_id= on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: AType, nullable AAnnotations) */
void parser_prod__AType__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AType> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AType__n_annotations_61d(val* self, val* p0) {
parser_prod__AType__n_annotations_61d(self, p0); /* Direct call parser_prod#AType#n_annotations= on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: AType, Visitor) */
void parser_prod__AType__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwnullable */;
val* var1 /* : TClassid */;
val* var2 /* : ANodes[AType] */;
val* var4 /* : ANodes[AType] */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2904);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var4 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var2, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var2:ANodes[AType]>*/
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AType__visit_all(val* self, val* p0) {
parser_prod__AType__visit_all(self, p0); /* Direct call parser_prod#AType#visit_all on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: ALabel, nullable TKwlabel, nullable TId) */
void parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1) {
val* var_n_kwlabel /* var n_kwlabel: nullable TKwlabel */;
val* var_n_id /* var n_id: nullable TId */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwlabel = p0;
var_n_id = p1;
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2915);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_n_kwlabel; /* _n_kwlabel on <self:ALabel> */
if (var_n_kwlabel == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2916);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwlabel,self) on <var_n_kwlabel:nullable TKwlabel> */
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwlabel->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwlabel:nullable TKwlabel> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_n_id; /* _n_id on <self:ALabel> */
var = NULL;
if (var_n_id == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,var) on <var_n_id:nullable TId> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_id->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: Object, nullable TKwlabel, nullable TId) */
void VIRTUAL_parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1) {
parser_prod__ALabel__init_alabel(self, p0, p1); /* Direct call parser_prod#ALabel#init_alabel on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: ALabel, ANode, nullable ANode) */
void parser_prod__ALabel__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwlabel */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2923);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwlabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwlabel> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwlabel */
cltype = type_parser_nodes__TKwlabel.color;
idtype = type_parser_nodes__TKwlabel.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwlabel", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2924);
show_backtrace(1);
}
{
parser_prod__ALabel__n_kwlabel_61d(self, var_new_child); /* Direct call parser_prod#ALabel#n_kwlabel= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TId(TId)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable TId */
cltype16 = type_nullable_parser_nodes__TId.color;
idtype17 = type_nullable_parser_nodes__TId.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2928);
show_backtrace(1);
}
{
parser_prod__ALabel__n_id_61d(self, var_new_child); /* Direct call parser_prod#ALabel#n_id= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALabel__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALabel__replace_child(self, p0, p1); /* Direct call parser_prod#ALabel#replace_child on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0) {
val* var_node /* var node: TKwlabel */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_node; /* _n_kwlabel on <self:ALabel> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwlabel> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwlabel> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: Object, TKwlabel) */
void VIRTUAL_parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0) {
parser_prod__ALabel__n_kwlabel_61d(self, p0); /* Direct call parser_prod#ALabel#n_kwlabel= on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: ALabel, nullable TId) */
void parser_prod__ALabel__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_node; /* _n_id on <self:ALabel> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TId> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TId(TId)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TId(TId)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__ALabel__n_id_61d(val* self, val* p0) {
parser_prod__ALabel__n_id_61d(self, p0); /* Direct call parser_prod#ALabel#n_id= on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: ALabel, Visitor) */
void parser_prod__ALabel__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwlabel */;
val* var1 /* : nullable TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2947);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALabel__visit_all(val* self, val* p0) {
parser_prod__ALabel__visit_all(self, p0); /* Direct call parser_prod#ALabel#visit_all on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: ABlockExpr, Collection[Object], nullable TKwend) */
void parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_n_expr = p0;
var_n_kwend = p1;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_expr); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ABlockExpr> */
var3 = NULL;
if (var_n_kwend == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwend,var3) on <var_n_kwend:nullable TKwend> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_n_kwend->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwend, var_other) /* == on <var_n_kwend:nullable TKwend(TKwend)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: Object, Collection[Object], nullable TKwend) */
void VIRTUAL_parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1) {
parser_prod__ABlockExpr__init_ablockexpr(self, p0, p1); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: ABlockExpr, ANode, nullable ANode) */
void parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
val* var4 /* : nullable TKwend */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__ANodes__replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var4,var_old_child) on <var4:nullable TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:nullable TKwend(TKwend)> */
var10 = var4 == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable TKwend */
cltype = type_nullable_parser_nodes__TKwend.color;
idtype = type_nullable_parser_nodes__TKwend.id;
if(var_new_child == NULL) {
var11 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwend", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2966);
show_backtrace(1);
}
{
parser_prod__ABlockExpr__n_kwend_61d(self, var_new_child); /* Direct call parser_prod#ABlockExpr#n_kwend= on <self:ABlockExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABlockExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABlockExpr#replace_child on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_node; /* _n_kwend on <self:ABlockExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwend> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwend(TKwend)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwend(TKwend)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwend(TKwend)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: Object, nullable TKwend) */
void VIRTUAL_parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0) {
parser_prod__ABlockExpr__n_kwend_61d(self, p0); /* Direct call parser_prod#ABlockExpr#n_kwend= on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: ABlockExpr, Visitor) */
void parser_prod__ABlockExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable TKwend */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABlockExpr__visit_all(val* self, val* p0) {
parser_prod__ABlockExpr__visit_all(self, p0); /* Direct call parser_prod#ABlockExpr#visit_all on <self:Object(ABlockExpr)>*/
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_n_kwvar = p0;
var_n_id = p1;
var_n_type = p2;
var_n_assign = p3;
var_n_expr = p4;
var_n_annotations = p5;
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2994);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AVardeclExpr> */
if (var_n_kwvar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2995);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar> */
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwvar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2996);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_n_id; /* _n_id on <self:AVardeclExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2997);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_n_type; /* _n_type on <self:AVardeclExpr> */
var = NULL;
if (var_n_type == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var) on <var_n_type:nullable AType> */
var_other = var;
{
var7 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVardeclExpr> */
var10 = NULL;
if (var_n_assign == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_assign,var10) on <var_n_assign:nullable TAssign> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_n_assign->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_assign, var_other) /* == on <var_n_assign:nullable TAssign(TAssign)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign(TAssign)> */
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign(TAssign)> */
RET_LABEL17:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVardeclExpr> */
var18 = NULL;
if (var_n_expr == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var18) on <var_n_expr:nullable AExpr> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_n_expr->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL25:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AVardeclExpr> */
var26 = NULL;
if (var_n_annotations == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var26) on <var_n_annotations:nullable AAnnotations> */
var_other = var26;
{
var31 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var30 = var31;
}
var32 = !var30;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL33:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: Object, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void VIRTUAL_parser_prod__AVardeclExpr__init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AVardeclExpr__init_avardeclexpr(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: AVardeclExpr, ANode, nullable ANode) */
void parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwvar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable AType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable TAssign */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AExpr */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable AAnnotations */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3010);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwvar> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwvar */
cltype = type_parser_nodes__TKwvar.color;
idtype = type_parser_nodes__TKwvar.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwvar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3011);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_kwvar_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_kwvar= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3014);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TId> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TId */
cltype16 = type_parser_nodes__TId.color;
idtype17 = type_parser_nodes__TId.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3015);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_id= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AType(AType)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype27 = type_nullable_parser_nodes__AType.color;
idtype28 = type_nullable_parser_nodes__AType.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3019);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_type_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_type= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable TAssign(TAssign)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable TAssign */
cltype38 = type_nullable_parser_nodes__TAssign.color;
idtype39 = type_nullable_parser_nodes__TAssign.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAssign", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3023);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_assign= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AExpr(AExpr)> */
var47 = var41 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype49 = type_nullable_parser_nodes__AExpr.color;
idtype50 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var48 = 1;
} else {
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
}
if (unlikely(!var48)) {
var_class_name51 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3027);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_expr= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable AAnnotations(AAnnotations)> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype60 = type_nullable_parser_nodes__AAnnotations.color;
idtype61 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var59 = 1;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3031);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_annotations= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVardeclExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AVardeclExpr#replace_child on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, TKwvar) */
void parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_node; /* _n_kwvar on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwvar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwvar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_kwvar_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_kwvar= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_node; /* _n_id on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_id_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_id= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_node; /* _n_type on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AType> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_type_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_type= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_node; /* _n_assign on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TAssign> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TAssign(TAssign)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TAssign(TAssign)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TAssign(TAssign)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: Object, nullable TAssign) */
void VIRTUAL_parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_assign_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_assign= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_node; /* _n_expr on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_expr= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: AVardeclExpr, nullable AAnnotations) */
void parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_annotations= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: AVardeclExpr, Visitor) */
void parser_prod__AVardeclExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwvar */;
val* var1 /* : TId */;
val* var2 /* : nullable AType */;
val* var3 /* : nullable TAssign */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3070);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3071);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVardeclExpr__visit_all(val* self, val* p0) {
parser_prod__AVardeclExpr__visit_all(self, p0); /* Direct call parser_prod#AVardeclExpr#visit_all on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: AReturnExpr, nullable TKwreturn, nullable AExpr) */
void parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1) {
val* var_n_kwreturn /* var n_kwreturn: nullable TKwreturn */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_n_kwreturn = p0;
var_n_expr = p1;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_n_kwreturn; /* _n_kwreturn on <self:AReturnExpr> */
var = NULL;
if (var_n_kwreturn == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwreturn,var) on <var_n_kwreturn:nullable TKwreturn> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwreturn->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwreturn, var_other) /* == on <var_n_kwreturn:nullable TKwreturn(TKwreturn)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwreturn,self) on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
var_n_kwreturn->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AReturnExpr> */
var8 = NULL;
if (var_n_expr == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var8) on <var_n_expr:nullable AExpr> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_expr->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: Object, nullable TKwreturn, nullable AExpr) */
void VIRTUAL_parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1) {
parser_prod__AReturnExpr__init_areturnexpr(self, p0, p1); /* Direct call parser_prod#AReturnExpr#init_areturnexpr on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: AReturnExpr, ANode, nullable ANode) */
void parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwreturn */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwreturn> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwreturn(TKwreturn)> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa nullable TKwreturn */
cltype = type_nullable_parser_nodes__TKwreturn.color;
idtype = type_nullable_parser_nodes__TKwreturn.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwreturn", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3093);
show_backtrace(1);
}
{
parser_prod__AReturnExpr__n_kwreturn_61d(self, var_new_child); /* Direct call parser_prod#AReturnExpr#n_kwreturn= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3097);
show_backtrace(1);
}
{
parser_prod__AReturnExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AReturnExpr#n_expr= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AReturnExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AReturnExpr#replace_child on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwreturn */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_node; /* _n_kwreturn on <self:AReturnExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwreturn> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwreturn(TKwreturn)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwreturn(TKwreturn)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwreturn(TKwreturn)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: Object, nullable TKwreturn) */
void VIRTUAL_parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
parser_prod__AReturnExpr__n_kwreturn_61d(self, p0); /* Direct call parser_prod#AReturnExpr#n_kwreturn= on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_node; /* _n_expr on <self:AReturnExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AReturnExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AReturnExpr#n_expr= on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: AReturnExpr, Visitor) */
void parser_prod__AReturnExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AReturnExpr__visit_all(val* self, val* p0) {
parser_prod__AReturnExpr__visit_all(self, p0); /* Direct call parser_prod#AReturnExpr#visit_all on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: ABreakExpr, nullable TKwbreak, nullable ALabel) */
void parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwbreak = p0;
var_n_label = p1;
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3126);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakExpr> */
if (var_n_kwbreak == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3127);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwbreak,self) on <var_n_kwbreak:nullable TKwbreak> */
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwbreak->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwbreak:nullable TKwbreak> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ABreakExpr> */
var = NULL;
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var) on <var_n_label:nullable ALabel> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: Object, nullable TKwbreak, nullable ALabel) */
void VIRTUAL_parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1) {
parser_prod__ABreakExpr__init_abreakexpr(self, p0, p1); /* Direct call parser_prod#ABreakExpr#init_abreakexpr on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: ABreakExpr, ANode, nullable ANode) */
void parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwbreak */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable ALabel */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3134);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwbreak> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwbreak> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwbreak */
cltype = type_parser_nodes__TKwbreak.color;
idtype = type_parser_nodes__TKwbreak.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwbreak", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3135);
show_backtrace(1);
}
{
parser_prod__ABreakExpr__n_kwbreak_61d(self, var_new_child); /* Direct call parser_prod#ABreakExpr#n_kwbreak= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable ALabel(ALabel)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype16 = type_nullable_parser_nodes__ALabel.color;
idtype17 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3139);
show_backtrace(1);
}
{
parser_prod__ABreakExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#ABreakExpr#n_label= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABreakExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABreakExpr#replace_child on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwbreak> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwbreak> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: Object, TKwbreak) */
void VIRTUAL_parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_kwbreak_61d(self, p0); /* Direct call parser_prod#ABreakExpr#n_kwbreak= on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: ABreakExpr, nullable ALabel) */
void parser_prod__ABreakExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ABreakExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ABreakExpr__n_label_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_label_61d(self, p0); /* Direct call parser_prod#ABreakExpr#n_label= on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: ABreakExpr, Visitor) */
void parser_prod__ABreakExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3158);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABreakExpr__visit_all(val* self, val* p0) {
parser_prod__ABreakExpr__visit_all(self, p0); /* Direct call parser_prod#ABreakExpr#visit_all on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: AAbortExpr, nullable TKwabort) */
void parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0) {
val* var_n_kwabort /* var n_kwabort: nullable TKwabort */;
var_n_kwabort = p0;
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3167);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_n_kwabort; /* _n_kwabort on <self:AAbortExpr> */
if (var_n_kwabort == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3168);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwabort,self) on <var_n_kwabort:nullable TKwabort> */
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwabort->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabort:nullable TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: Object, nullable TKwabort) */
void VIRTUAL_parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0) {
parser_prod__AAbortExpr__init_aabortexpr(self, p0); /* Direct call parser_prod#AAbortExpr#init_aabortexpr on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: AAbortExpr, ANode, nullable ANode) */
void parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabort */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3173);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwabort> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwabort> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwabort */
cltype = type_parser_nodes__TKwabort.color;
idtype = type_parser_nodes__TKwabort.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabort", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3174);
show_backtrace(1);
}
{
parser_prod__AAbortExpr__n_kwabort_61d(self, var_new_child); /* Direct call parser_prod#AAbortExpr#n_kwabort= on <self:AAbortExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAbortExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAbortExpr#replace_child on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
val* var_node /* var node: TKwabort */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_node; /* _n_kwabort on <self:AAbortExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwabort> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: Object, TKwabort) */
void VIRTUAL_parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
parser_prod__AAbortExpr__n_kwabort_61d(self, p0); /* Direct call parser_prod#AAbortExpr#n_kwabort= on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: AAbortExpr, Visitor) */
void parser_prod__AAbortExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabort */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3188);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAbortExpr__visit_all(val* self, val* p0) {
parser_prod__AAbortExpr__visit_all(self, p0); /* Direct call parser_prod#AAbortExpr#visit_all on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: AContinueExpr, nullable TKwcontinue, nullable ALabel) */
void parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1) {
val* var_n_kwcontinue /* var n_kwcontinue: nullable TKwcontinue */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_n_kwcontinue = p0;
var_n_label = p1;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_n_kwcontinue; /* _n_kwcontinue on <self:AContinueExpr> */
var = NULL;
if (var_n_kwcontinue == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwcontinue,var) on <var_n_kwcontinue:nullable TKwcontinue> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwcontinue->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwcontinue, var_other) /* == on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwcontinue,self) on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
var_n_kwcontinue->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AContinueExpr> */
var8 = NULL;
if (var_n_label == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var8) on <var_n_label:nullable ALabel> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: Object, nullable TKwcontinue, nullable ALabel) */
void VIRTUAL_parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1) {
parser_prod__AContinueExpr__init_acontinueexpr(self, p0, p1); /* Direct call parser_prod#AContinueExpr#init_acontinueexpr on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: AContinueExpr, ANode, nullable ANode) */
void parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwcontinue */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable ALabel */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwcontinue> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwcontinue(TKwcontinue)> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwcontinue", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3206);
show_backtrace(1);
}
{
parser_prod__AContinueExpr__n_kwcontinue_61d(self, var_new_child); /* Direct call parser_prod#AContinueExpr#n_kwcontinue= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable ALabel(ALabel)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype16 = type_nullable_parser_nodes__ALabel.color;
idtype17 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3210);
show_backtrace(1);
}
{
parser_prod__AContinueExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#AContinueExpr#n_label= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AContinueExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AContinueExpr#replace_child on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcontinue */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_node; /* _n_kwcontinue on <self:AContinueExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwcontinue> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwcontinue(TKwcontinue)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwcontinue(TKwcontinue)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: Object, nullable TKwcontinue) */
void VIRTUAL_parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_kwcontinue_61d(self, p0); /* Direct call parser_prod#AContinueExpr#n_kwcontinue= on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: AContinueExpr, nullable ALabel) */
void parser_prod__AContinueExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AContinueExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AContinueExpr__n_label_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_label_61d(self, p0); /* Direct call parser_prod#AContinueExpr#n_label= on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: AContinueExpr, Visitor) */
void parser_prod__AContinueExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AContinueExpr__visit_all(val* self, val* p0) {
parser_prod__AContinueExpr__visit_all(self, p0); /* Direct call parser_prod#AContinueExpr#visit_all on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: ADoExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_kwdo = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3240);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:ADoExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3241);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_n_block; /* _n_block on <self:ADoExpr> */
var = NULL;
if (var_n_block == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var) on <var_n_block:nullable AExpr> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ADoExpr> */
var9 = NULL;
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var9) on <var_n_label:nullable ALabel> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: Object, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ADoExpr__init_adoexpr(self, p0, p1, p2); /* Direct call parser_prod#ADoExpr#init_adoexpr on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: ADoExpr, ANode, nullable ANode) */
void parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdo */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable ALabel */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3250);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwdo> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwdo */
cltype = type_parser_nodes__TKwdo.color;
idtype = type_parser_nodes__TKwdo.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3251);
show_backtrace(1);
}
{
parser_prod__ADoExpr__n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_kwdo= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3255);
show_backtrace(1);
}
{
parser_prod__ADoExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_block= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable ALabel(ALabel)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype27 = type_nullable_parser_nodes__ALabel.color;
idtype28 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3259);
show_backtrace(1);
}
{
parser_prod__ADoExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_label= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADoExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ADoExpr#replace_child on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:ADoExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_kwdo_61d(self, p0); /* Direct call parser_prod#ADoExpr#n_kwdo= on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void parser_prod__ADoExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_node; /* _n_block on <self:ADoExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ADoExpr__n_block_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_block_61d(self, p0); /* Direct call parser_prod#ADoExpr#n_block= on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: ADoExpr, nullable ALabel) */
void parser_prod__ADoExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ADoExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ADoExpr__n_label_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_label_61d(self, p0); /* Direct call parser_prod#ADoExpr#n_label= on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: ADoExpr, Visitor) */
void parser_prod__ADoExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdo */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3283);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADoExpr__visit_all(val* self, val* p0) {
parser_prod__ADoExpr__visit_all(self, p0); /* Direct call parser_prod#ADoExpr#visit_all on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: AIfExpr, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_n_kwif = p0;
var_n_expr = p1;
var_n_then = p2;
var_n_else = p3;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3296);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3297);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwif->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3298);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3299);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_n_then; /* _n_then on <self:AIfExpr> */
var = NULL;
if (var_n_then == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_then,var) on <var_n_then:nullable AExpr> */
var_other = var;
{
var7 = ((short int (*)(val*, val*))(var_n_then->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_then, var_other) /* == on <var_n_then:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr(AExpr)> */
var_n_then->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr(AExpr)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_n_else; /* _n_else on <self:AIfExpr> */
var10 = NULL;
if (var_n_else == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_else,var10) on <var_n_else:nullable AExpr> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_n_else->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_else, var_other) /* == on <var_n_else:nullable AExpr(AExpr)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: Object, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AIfExpr__init_aifexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#AIfExpr#init_aifexpr on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: AIfExpr, ANode, nullable ANode) */
void parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3308);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwif> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_parser_nodes__TKwif.color;
idtype = type_parser_nodes__TKwif.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3309);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_kwif= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3312);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3313);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_expr= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AExpr(AExpr)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3317);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_then= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AExpr(AExpr)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype38 = type_nullable_parser_nodes__AExpr.color;
idtype39 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3321);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_else= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIfExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AIfExpr#replace_child on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_kwif_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_kwif= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void parser_prod__AIfExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_node; /* _n_expr on <self:AIfExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_expr= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void parser_prod__AIfExpr__n_then_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_node; /* _n_then on <self:AIfExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_then_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_then_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_then= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void parser_prod__AIfExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_node; /* _n_else on <self:AIfExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_else_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_else_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_else= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: AIfExpr, Visitor) */
void parser_prod__AIfExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3350);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3351);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIfExpr__visit_all(val* self, val* p0) {
parser_prod__AIfExpr__visit_all(self, p0); /* Direct call parser_prod#AIfExpr#visit_all on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: AIfexprExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void parser_prod__AIfexprExpr__init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwthen /* var n_kwthen: nullable TKwthen */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
var_n_kwif = p0;
var_n_expr = p1;
var_n_kwthen = p2;
var_n_then = p3;
var_n_kwelse = p4;
var_n_else = p5;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3366);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfexprExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3367);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwif->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3368);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfexprExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3369);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3370);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfexprExpr> */
if (var_n_kwthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3371);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwthen,self) on <var_n_kwthen:nullable TKwthen> */
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwthen->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwthen:nullable TKwthen> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3372);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = var_n_then; /* _n_then on <self:AIfexprExpr> */
if (var_n_then == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3373);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr> */
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_then->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3374);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfexprExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3375);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwelse->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3376);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = var_n_else; /* _n_else on <self:AIfexprExpr> */
if (var_n_else == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3377);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr> */
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_else->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: Object, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AIfexprExpr__init_aifexprexpr(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AIfexprExpr#init_aifexprexpr on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
void parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwthen */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : TKwelse */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : AExpr */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3382);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwif> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_parser_nodes__TKwif.color;
idtype = type_parser_nodes__TKwif.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3383);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwif= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3386);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3387);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_expr= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3390);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwthen> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwthen> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa TKwthen */
cltype27 = type_parser_nodes__TKwthen.color;
idtype28 = type_parser_nodes__TKwthen.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwthen", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3391);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_kwthen_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwthen= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3394);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AExpr> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa AExpr */
cltype38 = type_parser_nodes__AExpr.color;
idtype39 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3395);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_then= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3398);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:TKwelse> */
var47 = var41 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
/* <var_new_child:nullable ANode> isa TKwelse */
cltype49 = type_parser_nodes__TKwelse.color;
idtype50 = type_parser_nodes__TKwelse.id;
if(var_new_child == NULL) {
var48 = 0;
} else {
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
}
if (unlikely(!var48)) {
var_class_name51 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwelse", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3399);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_kwelse_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwelse= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3402);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:AExpr> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa AExpr */
cltype60 = type_parser_nodes__AExpr.color;
idtype61 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3403);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_else= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIfexprExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AIfexprExpr#replace_child on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwif_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_kwif= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_expr= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwthen> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwthen> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: Object, TKwthen) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwthen_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_kwthen= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_then_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_then= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: Object, TKwelse) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwelse_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_kwelse= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_else_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_else= on <self:Object(AIfexprExpr)>*/
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
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3442);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3443);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3444);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3445);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3446);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3447);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIfexprExpr__visit_all(val* self, val* p0) {
parser_prod__AIfexprExpr__visit_all(self, p0); /* Direct call parser_prod#AIfexprExpr#visit_all on <self:Object(AIfexprExpr)>*/
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3459);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3460);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwwhile,self) on <var_n_kwwhile:nullable TKwwhile> */
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwwhile->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwhile:nullable TKwwhile> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3461);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3462);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3463);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3464);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_n_block; /* _n_block on <self:AWhileExpr> */
var = NULL;
if (var_n_block == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var) on <var_n_block:nullable AExpr> */
var_other = var;
{
var8 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL10:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWhileExpr> */
var11 = NULL;
if (var_n_label == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var11) on <var_n_label:nullable ALabel> */
var_other = var11;
{
var16 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: Object, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__AWhileExpr__init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AWhileExpr__init_awhileexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#AWhileExpr#init_awhileexpr on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: AWhileExpr, ANode, nullable ANode) */
void parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwhile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwdo */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable ALabel */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3473);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwwhile> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwwhile> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwwhile */
cltype = type_parser_nodes__TKwwhile.color;
idtype = type_parser_nodes__TKwwhile.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwhile", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3474);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_kwwhile_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwwhile= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3477);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3478);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_expr= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3481);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwdo> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype27 = type_parser_nodes__TKwdo.color;
idtype28 = type_parser_nodes__TKwdo.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3482);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwdo= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AExpr(AExpr)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype38 = type_nullable_parser_nodes__AExpr.color;
idtype39 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3486);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_block= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable ALabel(ALabel)> */
var47 = var41 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype49 = type_nullable_parser_nodes__ALabel.color;
idtype50 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var48 = 1;
} else {
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
}
if (unlikely(!var48)) {
var_class_name51 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3490);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_label= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AWhileExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AWhileExpr#replace_child on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwwhile> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwhile> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: Object, TKwwhile) */
void VIRTUAL_parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_kwwhile_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_kwwhile= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_expr= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_kwdo_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_kwdo= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void parser_prod__AWhileExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_node; /* _n_block on <self:AWhileExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AWhileExpr__n_block_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_block_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_block= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: AWhileExpr, nullable ALabel) */
void parser_prod__AWhileExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWhileExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AWhileExpr__n_label_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_label_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_label= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: AWhileExpr, Visitor) */
void parser_prod__AWhileExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwhile */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3524);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3525);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3526);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AWhileExpr__visit_all(val* self, val* p0) {
parser_prod__AWhileExpr__visit_all(self, p0); /* Direct call parser_prod#AWhileExpr#visit_all on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
void parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwloop /* var n_kwloop: nullable TKwloop */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3538);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3539);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwloop,self) on <var_n_kwloop:nullable TKwloop> */
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwloop->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwloop:nullable TKwloop> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_n_block; /* _n_block on <self:ALoopExpr> */
var = NULL;
if (var_n_block == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var) on <var_n_block:nullable AExpr> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ALoopExpr> */
var9 = NULL;
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var9) on <var_n_label:nullable ALabel> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: Object, nullable TKwloop, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ALoopExpr__init_aloopexpr(self, p0, p1, p2); /* Direct call parser_prod#ALoopExpr#init_aloopexpr on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: ALoopExpr, ANode, nullable ANode) */
void parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwloop */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable ALabel */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3548);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwloop> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwloop> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwloop */
cltype = type_parser_nodes__TKwloop.color;
idtype = type_parser_nodes__TKwloop.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwloop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3549);
show_backtrace(1);
}
{
parser_prod__ALoopExpr__n_kwloop_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_kwloop= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3553);
show_backtrace(1);
}
{
parser_prod__ALoopExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_block= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable ALabel(ALabel)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype27 = type_nullable_parser_nodes__ALabel.color;
idtype28 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3557);
show_backtrace(1);
}
{
parser_prod__ALoopExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_label= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALoopExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ALoopExpr#replace_child on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwloop> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwloop> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: Object, TKwloop) */
void VIRTUAL_parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_kwloop_61d(self, p0); /* Direct call parser_prod#ALoopExpr#n_kwloop= on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void parser_prod__ALoopExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_node; /* _n_block on <self:ALoopExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ALoopExpr__n_block_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_block_61d(self, p0); /* Direct call parser_prod#ALoopExpr#n_block= on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: ALoopExpr, nullable ALabel) */
void parser_prod__ALoopExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ALoopExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ALoopExpr__n_label_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_label_61d(self, p0); /* Direct call parser_prod#ALoopExpr#n_label= on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: ALoopExpr, Visitor) */
void parser_prod__ALoopExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3581);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALoopExpr__visit_all(val* self, val* p0) {
parser_prod__ALoopExpr__visit_all(self, p0); /* Direct call parser_prod#ALoopExpr#visit_all on <self:Object(ALoopExpr)>*/
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
val* var /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
var_n_kwfor = p0;
var_n_ids = p1;
var_n_expr = p2;
var_n_kwdo = p3;
var_n_block = p4;
var_n_label = p5;
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3596);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val = var_n_kwfor; /* _n_kwfor on <self:AForExpr> */
if (var_n_kwfor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3597);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfor,self) on <var_n_kwfor:nullable TKwfor> */
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwfor->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfor:nullable TKwfor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_ids); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[TId]>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3599);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AForExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3600);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3601);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AForExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3602);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var_n_block; /* _n_block on <self:AForExpr> */
var6 = NULL;
if (var_n_block == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var6) on <var_n_block:nullable AExpr> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL13:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AForExpr> */
var14 = NULL;
if (var_n_label == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var14) on <var_n_label:nullable ALabel> */
var_other = var14;
{
var19 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var18 = var19;
}
var20 = !var18;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL21:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#init_aforexpr for (self: Object, nullable TKwfor, Collection[Object], nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__AForExpr__init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AForExpr__init_aforexpr(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AForExpr#init_aforexpr on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: AForExpr, ANode, nullable ANode) */
void parser_prod__AForExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfor */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[TId] */;
val* var10 /* : ANodes[TId] */;
short int var11 /* : Bool */;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
val* var23 /* : TKwdo */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
val* var34 /* : nullable AExpr */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
val* var45 /* : nullable ALabel */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3611);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwfor> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwfor> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwfor */
cltype = type_parser_nodes__TKwfor.color;
idtype = type_parser_nodes__TKwfor.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwfor", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3612);
show_backtrace(1);
}
{
parser_prod__AForExpr__n_kwfor_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_kwfor= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var10 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = parser_nodes__ANodes__replace_child(var8, var_old_child, var_new_child);
}
if (var11){
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3616);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:AExpr> */
var18 = var12 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
/* <var_new_child:nullable ANode> isa AExpr */
cltype20 = type_parser_nodes__AExpr.color;
idtype21 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var19 = 0;
} else {
if(cltype20 >= var_new_child->type->table_size) {
var19 = 0;
} else {
var19 = var_new_child->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name22 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3617);
show_backtrace(1);
}
{
parser_prod__AForExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_expr= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3620);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var23,var_old_child) on <var23:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:TKwdo> */
var29 = var23 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype31 = type_parser_nodes__TKwdo.color;
idtype32 = type_parser_nodes__TKwdo.id;
if(var_new_child == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
var_class_name33 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3621);
show_backtrace(1);
}
{
parser_prod__AForExpr__n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_kwdo= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var34 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var34 == NULL) {
var35 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var34,var_old_child) on <var34:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var34,var_other) on <var34:nullable AExpr(AExpr)> */
var40 = var34 == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype42 = type_nullable_parser_nodes__AExpr.color;
idtype43 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_new_child->type->table_size) {
var41 = 0;
} else {
var41 = var_new_child->type->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
var_class_name44 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3625);
show_backtrace(1);
}
{
parser_prod__AForExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_block= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var45 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var45 == NULL) {
var46 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var45,var_old_child) on <var45:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var45,var_other) on <var45:nullable ALabel(ALabel)> */
var51 = var45 == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype53 = type_nullable_parser_nodes__ALabel.color;
idtype54 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var52 = 1;
} else {
if(cltype53 >= var_new_child->type->table_size) {
var52 = 0;
} else {
var52 = var_new_child->type->type_table[cltype53] == idtype54;
}
}
if (unlikely(!var52)) {
var_class_name55 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3629);
show_backtrace(1);
}
{
parser_prod__AForExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_label= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AForExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AForExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AForExpr#replace_child on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void parser_prod__AForExpr__n_kwfor_61d(val* self, val* p0) {
val* var_node /* var node: TKwfor */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val = var_node; /* _n_kwfor on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwfor> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: Object, TKwfor) */
void VIRTUAL_parser_prod__AForExpr__n_kwfor_61d(val* self, val* p0) {
parser_prod__AForExpr__n_kwfor_61d(self, p0); /* Direct call parser_prod#AForExpr#n_kwfor= on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_expr= for (self: AForExpr, AExpr) */
void parser_prod__AForExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val = var_node; /* _n_expr on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AForExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AForExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AForExpr#n_expr= on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void parser_prod__AForExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__AForExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__AForExpr__n_kwdo_61d(self, p0); /* Direct call parser_prod#AForExpr#n_kwdo= on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void parser_prod__AForExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var_node; /* _n_block on <self:AForExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AForExpr__n_block_61d(val* self, val* p0) {
parser_prod__AForExpr__n_block_61d(self, p0); /* Direct call parser_prod#AForExpr#n_block= on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_label= for (self: AForExpr, nullable ALabel) */
void parser_prod__AForExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AForExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AForExpr__n_label_61d(val* self, val* p0) {
parser_prod__AForExpr__n_label_61d(self, p0); /* Direct call parser_prod#AForExpr#n_label= on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: AForExpr, Visitor) */
void parser_prod__AForExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfor */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : AExpr */;
val* var5 /* : TKwdo */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3663);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[TId]>*/
}
var4 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3665);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3666);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AForExpr__visit_all(val* self, val* p0) {
parser_prod__AForExpr__visit_all(self, p0); /* Direct call parser_prod#AForExpr#visit_all on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: AAssertExpr, nullable TKwassert, nullable TId, nullable AExpr, nullable AExpr) */
void parser_prod__AAssertExpr__init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwassert /* var n_kwassert: nullable TKwassert */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_n_kwassert = p0;
var_n_id = p1;
var_n_expr = p2;
var_n_else = p3;
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3679);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val = var_n_kwassert; /* _n_kwassert on <self:AAssertExpr> */
if (var_n_kwassert == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3680);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwassert,self) on <var_n_kwassert:nullable TKwassert> */
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwassert->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwassert:nullable TKwassert> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var_n_id; /* _n_id on <self:AAssertExpr> */
var = NULL;
if (var_n_id == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,var) on <var_n_id:nullable TId> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_id->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3683);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAssertExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3684);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var_n_else; /* _n_else on <self:AAssertExpr> */
var10 = NULL;
if (var_n_else == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_else,var10) on <var_n_else:nullable AExpr> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_n_else->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_else, var_other) /* == on <var_n_else:nullable AExpr(AExpr)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: Object, nullable TKwassert, nullable TId, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AAssertExpr__init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAssertExpr__init_aassertexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: AAssertExpr, ANode, nullable ANode) */
void parser_prod__AAssertExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwassert */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3691);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwassert> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwassert> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwassert */
cltype = type_parser_nodes__TKwassert.color;
idtype = type_parser_nodes__TKwassert.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwassert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3692);
show_backtrace(1);
}
{
parser_prod__AAssertExpr__n_kwassert_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_kwassert= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TId(TId)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable TId */
cltype16 = type_nullable_parser_nodes__TId.color;
idtype17 = type_nullable_parser_nodes__TId.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3696);
show_backtrace(1);
}
{
parser_prod__AAssertExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_id= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3699);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AExpr> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa AExpr */
cltype27 = type_parser_nodes__AExpr.color;
idtype28 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3700);
show_backtrace(1);
}
{
parser_prod__AAssertExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_expr= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AExpr(AExpr)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype38 = type_nullable_parser_nodes__AExpr.color;
idtype39 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3704);
show_backtrace(1);
}
{
parser_prod__AAssertExpr__n_else_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_else= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAssertExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAssertExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAssertExpr#replace_child on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void parser_prod__AAssertExpr__n_kwassert_61d(val* self, val* p0) {
val* var_node /* var node: TKwassert */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val = var_node; /* _n_kwassert on <self:AAssertExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwassert> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwassert> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: Object, TKwassert) */
void VIRTUAL_parser_prod__AAssertExpr__n_kwassert_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_kwassert_61d(self, p0); /* Direct call parser_prod#AAssertExpr#n_kwassert= on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void parser_prod__AAssertExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var_node; /* _n_id on <self:AAssertExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TId> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TId(TId)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TId(TId)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AAssertExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_id_61d(self, p0); /* Direct call parser_prod#AAssertExpr#n_id= on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void parser_prod__AAssertExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val = var_node; /* _n_expr on <self:AAssertExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAssertExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAssertExpr#n_expr= on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void parser_prod__AAssertExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var_node; /* _n_else on <self:AAssertExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AAssertExpr__n_else_61d(val* self, val* p0) {
parser_prod__AAssertExpr__n_else_61d(self, p0); /* Direct call parser_prod#AAssertExpr#n_else= on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: AAssertExpr, Visitor) */
void parser_prod__AAssertExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwassert */;
val* var1 /* : nullable TId */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3733);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3735);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAssertExpr__visit_all(val* self, val* p0) {
parser_prod__AAssertExpr__visit_all(self, p0); /* Direct call parser_prod#AAssertExpr#visit_all on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: AOnceExpr, nullable TKwonce, nullable AExpr) */
void parser_prod__AOnceExpr__init_aonceexpr(val* self, val* p0, val* p1) {
val* var_n_kwonce /* var n_kwonce: nullable TKwonce */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_kwonce = p0;
var_n_expr = p1;
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3745);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val = var_n_kwonce; /* _n_kwonce on <self:AOnceExpr> */
if (var_n_kwonce == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3746);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwonce,self) on <var_n_kwonce:nullable TKwonce> */
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwonce->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwonce:nullable TKwonce> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3747);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOnceExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3748);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: Object, nullable TKwonce, nullable AExpr) */
void VIRTUAL_parser_prod__AOnceExpr__init_aonceexpr(val* self, val* p0, val* p1) {
parser_prod__AOnceExpr__init_aonceexpr(self, p0, p1); /* Direct call parser_prod#AOnceExpr#init_aonceexpr on <self:Object(AOnceExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#replace_child for (self: AOnceExpr, ANode, nullable ANode) */
void parser_prod__AOnceExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwonce */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3753);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwonce> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwonce> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwonce */
cltype = type_parser_nodes__TKwonce.color;
idtype = type_parser_nodes__TKwonce.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwonce", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3754);
show_backtrace(1);
}
{
parser_prod__AOnceExpr__n_kwonce_61d(self, var_new_child); /* Direct call parser_prod#AOnceExpr#n_kwonce= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3757);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3758);
show_backtrace(1);
}
{
parser_prod__AOnceExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOnceExpr#n_expr= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOnceExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOnceExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AOnceExpr#replace_child on <self:Object(AOnceExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void parser_prod__AOnceExpr__n_kwonce_61d(val* self, val* p0) {
val* var_node /* var node: TKwonce */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val = var_node; /* _n_kwonce on <self:AOnceExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwonce> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwonce> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: Object, TKwonce) */
void VIRTUAL_parser_prod__AOnceExpr__n_kwonce_61d(val* self, val* p0) {
parser_prod__AOnceExpr__n_kwonce_61d(self, p0); /* Direct call parser_prod#AOnceExpr#n_kwonce= on <self:Object(AOnceExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: AOnceExpr, AExpr) */
void parser_prod__AOnceExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_node; /* _n_expr on <self:AOnceExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOnceExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOnceExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AOnceExpr#n_expr= on <self:Object(AOnceExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: AOnceExpr, Visitor) */
void parser_prod__AOnceExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwonce */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3777);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3778);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOnceExpr__visit_all(val* self, val* p0) {
parser_prod__AOnceExpr__visit_all(self, p0); /* Direct call parser_prod#AOnceExpr#visit_all on <self:Object(AOnceExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: AOrExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AOrExpr__init_aorexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3858);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3859);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3860);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3861);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AOrExpr__init_aorexpr(val* self, val* p0, val* p1) {
parser_prod__AOrExpr__init_aorexpr(self, p0, p1); /* Direct call parser_prod#AOrExpr#init_aorexpr on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrExpr#replace_child for (self: AOrExpr, ANode, nullable ANode) */
void parser_prod__AOrExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3866);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3867);
show_backtrace(1);
}
{
parser_prod__AOrExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_expr= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3870);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3871);
show_backtrace(1);
}
{
parser_prod__AOrExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_expr2= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOrExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOrExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AOrExpr#replace_child on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: AOrExpr, AExpr) */
void parser_prod__AOrExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val = var_node; /* _n_expr on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOrExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AOrExpr#n_expr= on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: AOrExpr, AExpr) */
void parser_prod__AOrExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AOrExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AOrExpr#n_expr2= on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: AOrExpr, Visitor) */
void parser_prod__AOrExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3890);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3891);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOrExpr__visit_all(val* self, val* p0) {
parser_prod__AOrExpr__visit_all(self, p0); /* Direct call parser_prod#AOrExpr#visit_all on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: AAndExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AAndExpr__init_aandexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3900);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAndExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3901);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3902);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAndExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3903);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AAndExpr__init_aandexpr(val* self, val* p0, val* p1) {
parser_prod__AAndExpr__init_aandexpr(self, p0, p1); /* Direct call parser_prod#AAndExpr#init_aandexpr on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAndExpr#replace_child for (self: AAndExpr, ANode, nullable ANode) */
void parser_prod__AAndExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3908);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3909);
show_backtrace(1);
}
{
parser_prod__AAndExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_expr= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3912);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3913);
show_backtrace(1);
}
{
parser_prod__AAndExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_expr2= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAndExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAndExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAndExpr#replace_child on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: AAndExpr, AExpr) */
void parser_prod__AAndExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val = var_node; /* _n_expr on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAndExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAndExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAndExpr#n_expr= on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: AAndExpr, AExpr) */
void parser_prod__AAndExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAndExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AAndExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AAndExpr#n_expr2= on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: AAndExpr, Visitor) */
void parser_prod__AAndExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3932);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3933);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAndExpr__visit_all(val* self, val* p0) {
parser_prod__AAndExpr__visit_all(self, p0); /* Direct call parser_prod#AAndExpr#visit_all on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: AOrElseExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AOrElseExpr__init_aorelseexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3942);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrElseExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3943);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3944);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrElseExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3945);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AOrElseExpr__init_aorelseexpr(val* self, val* p0, val* p1) {
parser_prod__AOrElseExpr__init_aorelseexpr(self, p0, p1); /* Direct call parser_prod#AOrElseExpr#init_aorelseexpr on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#replace_child for (self: AOrElseExpr, ANode, nullable ANode) */
void parser_prod__AOrElseExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3950);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3951);
show_backtrace(1);
}
{
parser_prod__AOrElseExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_expr= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3954);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3955);
show_backtrace(1);
}
{
parser_prod__AOrElseExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_expr2= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOrElseExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOrElseExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AOrElseExpr#replace_child on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: AOrElseExpr, AExpr) */
void parser_prod__AOrElseExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val = var_node; /* _n_expr on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrElseExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOrElseExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AOrElseExpr#n_expr= on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr2= for (self: AOrElseExpr, AExpr) */
void parser_prod__AOrElseExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrElseExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AOrElseExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AOrElseExpr#n_expr2= on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: AOrElseExpr, Visitor) */
void parser_prod__AOrElseExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3974);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3975);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOrElseExpr__visit_all(val* self, val* p0) {
parser_prod__AOrElseExpr__visit_all(self, p0); /* Direct call parser_prod#AOrElseExpr#visit_all on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: AImpliesExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AImpliesExpr__init_aimpliesexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3984);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AImpliesExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3985);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3986);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AImpliesExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3987);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AImpliesExpr__init_aimpliesexpr(val* self, val* p0, val* p1) {
parser_prod__AImpliesExpr__init_aimpliesexpr(self, p0, p1); /* Direct call parser_prod#AImpliesExpr#init_aimpliesexpr on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: AImpliesExpr, ANode, nullable ANode) */
void parser_prod__AImpliesExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3992);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3993);
show_backtrace(1);
}
{
parser_prod__AImpliesExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_expr= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3996);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 3997);
show_backtrace(1);
}
{
parser_prod__AImpliesExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_expr2= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AImpliesExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AImpliesExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AImpliesExpr#replace_child on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: AImpliesExpr, AExpr) */
void parser_prod__AImpliesExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val = var_node; /* _n_expr on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AImpliesExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AImpliesExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AImpliesExpr#n_expr= on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: AImpliesExpr, AExpr) */
void parser_prod__AImpliesExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AImpliesExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AImpliesExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AImpliesExpr#n_expr2= on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: AImpliesExpr, Visitor) */
void parser_prod__AImpliesExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4016);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4017);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AImpliesExpr__visit_all(val* self, val* p0) {
parser_prod__AImpliesExpr__visit_all(self, p0); /* Direct call parser_prod#AImpliesExpr#visit_all on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: ANotExpr, nullable TKwnot, nullable AExpr) */
void parser_prod__ANotExpr__init_anotexpr(val* self, val* p0, val* p1) {
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_kwnot = p0;
var_n_expr = p1;
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4026);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:ANotExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4027);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4028);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANotExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4029);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: Object, nullable TKwnot, nullable AExpr) */
void VIRTUAL_parser_prod__ANotExpr__init_anotexpr(val* self, val* p0, val* p1) {
parser_prod__ANotExpr__init_anotexpr(self, p0, p1); /* Direct call parser_prod#ANotExpr#init_anotexpr on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: ANotExpr, ANode, nullable ANode) */
void parser_prod__ANotExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnot */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4034);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwnot> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa TKwnot */
cltype = type_parser_nodes__TKwnot.color;
idtype = type_parser_nodes__TKwnot.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4035);
show_backtrace(1);
}
{
parser_prod__ANotExpr__n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#ANotExpr#n_kwnot= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4038);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4039);
show_backtrace(1);
}
{
parser_prod__ANotExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANotExpr#n_expr= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANotExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANotExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ANotExpr#replace_child on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void parser_prod__ANotExpr__n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:ANotExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_prod__ANotExpr__n_kwnot_61d(val* self, val* p0) {
parser_prod__ANotExpr__n_kwnot_61d(self, p0); /* Direct call parser_prod#ANotExpr#n_kwnot= on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void parser_prod__ANotExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val = var_node; /* _n_expr on <self:ANotExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ANotExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ANotExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ANotExpr#n_expr= on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: ANotExpr, Visitor) */
void parser_prod__ANotExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnot */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4058);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4059);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANotExpr__visit_all(val* self, val* p0) {
parser_prod__ANotExpr__visit_all(self, p0); /* Direct call parser_prod#ANotExpr#visit_all on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: AEqExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AEqExpr__init_aeqexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4068);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEqExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4069);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4070);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEqExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4071);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AEqExpr__init_aeqexpr(val* self, val* p0, val* p1) {
parser_prod__AEqExpr__init_aeqexpr(self, p0, p1); /* Direct call parser_prod#AEqExpr#init_aeqexpr on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: AEqExpr, ANode, nullable ANode) */
void parser_prod__AEqExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4076);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4077);
show_backtrace(1);
}
{
parser_prod__AEqExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_expr= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4080);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4081);
show_backtrace(1);
}
{
parser_prod__AEqExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_expr2= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEqExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEqExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AEqExpr#replace_child on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: AEqExpr, AExpr) */
void parser_prod__AEqExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AEqExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AEqExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AEqExpr#n_expr= on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: AEqExpr, AExpr) */
void parser_prod__AEqExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AEqExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AEqExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AEqExpr#n_expr2= on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: AEqExpr, Visitor) */
void parser_prod__AEqExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4100);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4101);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEqExpr__visit_all(val* self, val* p0) {
parser_prod__AEqExpr__visit_all(self, p0); /* Direct call parser_prod#AEqExpr#visit_all on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: ANeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ANeExpr__init_aneexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4110);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4111);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4112);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ANeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4113);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ANeExpr__init_aneexpr(val* self, val* p0, val* p1) {
parser_prod__ANeExpr__init_aneexpr(self, p0, p1); /* Direct call parser_prod#ANeExpr#init_aneexpr on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: ANeExpr, ANode, nullable ANode) */
void parser_prod__ANeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4118);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var6 = var == var_other;
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4119);
show_backtrace(1);
}
{
parser_prod__ANeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_expr= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4122);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4123);
show_backtrace(1);
}
{
parser_prod__ANeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_expr2= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANeExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ANeExpr#replace_child on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: ANeExpr, AExpr) */
void parser_prod__ANeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ANeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ANeExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ANeExpr#n_expr= on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: ANeExpr, AExpr) */
void parser_prod__ANeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ANeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ANeExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#ANeExpr#n_expr2= on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: ANeExpr, Visitor) */
void parser_prod__ANeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4142);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4143);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANeExpr__visit_all(val* self, val* p0) {
parser_prod__ANeExpr__visit_all(self, p0); /* Direct call parser_prod#ANeExpr#visit_all on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: ALtExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ALtExpr__init_altexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4152);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4153);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4154);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4155);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ALtExpr__init_altexpr(val* self, val* p0, val* p1) {
parser_prod__ALtExpr__init_altexpr(self, p0, p1); /* Direct call parser_prod#ALtExpr#init_altexpr on <self:Object(ALtExpr)>*/
RET_LABEL:;
}
