#include "nit__parser_prod.sep.0.h"
/* method parser_prod#ACrangeExpr#replace_child for (self: ACrangeExpr, ANode, nullable ANode) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExpr */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : TCbra */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : nullable AAnnotations */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4914);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_nit__TObra.color;
idtype = type_nit__TObra.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4915);
show_backtrace(1);
}
{
nit__parser_prod___ACrangeExpr___n_obra_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_obra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4918);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExpr> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa AExpr */
cltype14 = type_nit__AExpr.color;
idtype15 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4919);
show_backtrace(1);
}
{
nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_expr= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4922);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExpr> */
var22 = var17 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
/* <var_new_child:nullable ANode> isa AExpr */
cltype24 = type_nit__AExpr.color;
idtype25 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name26 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4923);
show_backtrace(1);
}
{
nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_expr2= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4926);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:TCbra> */
var32 = var27 == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
/* <var_new_child:nullable ANode> isa TCbra */
cltype34 = type_nit__TCbra.color;
idtype35 = type_nit__TCbra.id;
if(var_new_child == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_new_child->type->table_size) {
var33 = 0;
} else {
var33 = var_new_child->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name36 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4927);
show_backtrace(1);
}
{
nit__parser_prod___ACrangeExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_cbra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
if (var37 == NULL) {
var38 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:nullable AAnnotations(AAnnotations)> */
var43 = var37 == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype45 = type_nullable__nit__AAnnotations.color;
idtype46 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_new_child->type->table_size) {
var44 = 0;
} else {
var44 = var_new_child->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
var_class_name47 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4931);
show_backtrace(1);
}
{
nit__parser_prod___ACrangeExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_annotations= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_obra= for (self: ACrangeExpr, TObra) */
void nit__parser_prod___ACrangeExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val = var_node; /* _n_obra on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr= for (self: ACrangeExpr, AExpr) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr2= for (self: ACrangeExpr, AExpr) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_cbra= for (self: ACrangeExpr, TCbra) */
void nit__parser_prod___ACrangeExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_annotations= for (self: ACrangeExpr, nullable AAnnotations) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACrangeExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#visit_all for (self: ACrangeExpr, Visitor) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TCbra */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4965);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4966);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4967);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4968);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#init_aorangeexpr for (self: AOrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TObra, nullable AAnnotations) */
void nit__parser_prod___AOrangeExpr___init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TObra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4981);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4982);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4983);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4984);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4985);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4986);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4987);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4988);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TObra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TObra> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOrangeExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var8 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#replace_child for (self: AOrangeExpr, ANode, nullable ANode) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExpr */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : TObra */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : nullable AAnnotations */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4995);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_nit__TObra.color;
idtype = type_nit__TObra.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4996);
show_backtrace(1);
}
{
nit__parser_prod___AOrangeExpr___n_obra_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_obra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4999);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExpr> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa AExpr */
cltype14 = type_nit__AExpr.color;
idtype15 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5000);
show_backtrace(1);
}
{
nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_expr= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5003);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExpr> */
var22 = var17 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
/* <var_new_child:nullable ANode> isa AExpr */
cltype24 = type_nit__AExpr.color;
idtype25 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name26 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5004);
show_backtrace(1);
}
{
nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_expr2= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5007);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:TObra> */
var32 = var27 == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
/* <var_new_child:nullable ANode> isa TObra */
cltype34 = type_nit__TObra.color;
idtype35 = type_nit__TObra.id;
if(var_new_child == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_new_child->type->table_size) {
var33 = 0;
} else {
var33 = var_new_child->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name36 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5008);
show_backtrace(1);
}
{
nit__parser_prod___AOrangeExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_cbra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var37 == NULL) {
var38 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:nullable AAnnotations(AAnnotations)> */
var43 = var37 == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype45 = type_nullable__nit__AAnnotations.color;
idtype46 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_new_child->type->table_size) {
var44 = 0;
} else {
var44 = var_new_child->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
var_class_name47 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5012);
show_backtrace(1);
}
{
nit__parser_prod___AOrangeExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_annotations= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_obra= for (self: AOrangeExpr, TObra) */
void nit__parser_prod___AOrangeExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val = var_node; /* _n_obra on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr= for (self: AOrangeExpr, AExpr) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr2= for (self: AOrangeExpr, AExpr) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_cbra= for (self: AOrangeExpr, TObra) */
void nit__parser_prod___AOrangeExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_annotations= for (self: AOrangeExpr, nullable AAnnotations) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOrangeExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#visit_all for (self: AOrangeExpr, Visitor) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TObra */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5046);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5047);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5048);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5049);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#init_aarrayexpr for (self: AArrayExpr, nullable TObra, Collection[Object], nullable AType, nullable TCbra, nullable AAnnotations) */
void nit__parser_prod___AArrayExpr___init_aarrayexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_n_obra = p0;
var_n_exprs = p1;
var_n_type = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5062);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AArrayExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5063);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var_n_type; /* _n_type on <self:AArrayExpr> */
var4 = NULL;
if (var_n_type == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var4) on <var_n_type:nullable AType> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL10:(void)0;
}
}
} else {
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5067);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AArrayExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5068);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AArrayExpr> */
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
var16 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#replace_child for (self: AArrayExpr, ANode, nullable ANode) */
void nit__parser_prod___AArrayExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : ANodes[AExpr] */;
val* var9 /* : ANodes[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : nullable AType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : TCbra */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var32 /* : nullable AAnnotations */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5075);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_nit__TObra.color;
idtype = type_nit__TObra.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5076);
show_backtrace(1);
}
{
nit__parser_prod___AArrayExpr___n_obra_61d(self, var_new_child); /* Direct call parser_prod#AArrayExpr#n_obra= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var9 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var11,var_old_child) on <var11:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:nullable AType(AType)> */
var17 = var11 == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype19 = type_nullable__nit__AType.color;
idtype20 = type_nullable__nit__AType.id;
if(var_new_child == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5081);
show_backtrace(1);
}
{
nit__parser_prod___AArrayExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#AArrayExpr#n_type= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5084);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var22,var_old_child) on <var22:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var22,var_other) on <var22:TCbra> */
var27 = var22 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
/* <var_new_child:nullable ANode> isa TCbra */
cltype29 = type_nit__TCbra.color;
idtype30 = type_nit__TCbra.id;
if(var_new_child == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_new_child->type->table_size) {
var28 = 0;
} else {
var28 = var_new_child->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
var_class_name31 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5085);
show_backtrace(1);
}
{
nit__parser_prod___AArrayExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#AArrayExpr#n_cbra= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var32 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
if (var32 == NULL) {
var33 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var32,var_old_child) on <var32:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var32,var_other) on <var32:nullable AAnnotations(AAnnotations)> */
var38 = var32 == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype40 = type_nullable__nit__AAnnotations.color;
idtype41 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
}
if (unlikely(!var39)) {
var_class_name42 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5089);
show_backtrace(1);
}
{
nit__parser_prod___AArrayExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AArrayExpr#n_annotations= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_obra= for (self: AArrayExpr, TObra) */
void nit__parser_prod___AArrayExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val = var_node; /* _n_obra on <self:AArrayExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_type= for (self: AArrayExpr, nullable AType) */
void nit__parser_prod___AArrayExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var_node; /* _n_type on <self:AArrayExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_cbra= for (self: AArrayExpr, TCbra) */
void nit__parser_prod___AArrayExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val = var_node; /* _n_cbra on <self:AArrayExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_annotations= for (self: AArrayExpr, nullable AAnnotations) */
void nit__parser_prod___AArrayExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AArrayExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#visit_all for (self: AArrayExpr, Visitor) */
void nit__parser_prod___AArrayExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : nullable AType */;
val* var5 /* : TCbra */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5118);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5121);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#init_aselfexpr for (self: ASelfExpr, nullable TKwself, nullable AAnnotations) */
void nit__parser_prod___ASelfExpr___init_aselfexpr(val* self, val* p0, val* p1) {
val* var_n_kwself /* var n_kwself: nullable TKwself */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwself = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5131);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5132);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwself,self) on <var_n_kwself:nullable TKwself> */
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwself->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwself:nullable TKwself> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASelfExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#replace_child for (self: ASelfExpr, ANode, nullable ANode) */
void nit__parser_prod___ASelfExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwself */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwself> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwself(TKwself)> */
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
/* <var_new_child:nullable ANode> isa TKwself */
cltype = type_nit__TKwself.color;
idtype = type_nit__TKwself.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwself", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5140);
show_backtrace(1);
}
{
nit__parser_prod___ASelfExpr___n_kwself_61d(self, var_new_child); /* Direct call parser_prod#ASelfExpr#n_kwself= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype16 = type_nullable__nit__AAnnotations.color;
idtype17 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5144);
show_backtrace(1);
}
{
nit__parser_prod___ASelfExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASelfExpr#n_annotations= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_kwself= for (self: ASelfExpr, nullable TKwself) */
void nit__parser_prod___ASelfExpr___n_kwself_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwself */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val = var_node; /* _n_kwself on <self:ASelfExpr> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5152);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwself> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwself> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_annotations= for (self: ASelfExpr, nullable AAnnotations) */
void nit__parser_prod___ASelfExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASelfExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#visit_all for (self: ASelfExpr, Visitor) */
void nit__parser_prod___ASelfExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwself */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr for (self: AImplicitSelfExpr) */
void nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(val* self) {
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#replace_child for (self: AImplicitSelfExpr, ANode, nullable ANode) */
void nit__parser_prod___AImplicitSelfExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#visit_all for (self: AImplicitSelfExpr, Visitor) */
void nit__parser_prod___AImplicitSelfExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#init_atrueexpr for (self: ATrueExpr, nullable TKwtrue, nullable AAnnotations) */
void nit__parser_prod___ATrueExpr___init_atrueexpr(val* self, val* p0, val* p1) {
val* var_n_kwtrue /* var n_kwtrue: nullable TKwtrue */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwtrue = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5188);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5189);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtrue,self) on <var_n_kwtrue:nullable TKwtrue> */
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwtrue->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtrue:nullable TKwtrue> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATrueExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#replace_child for (self: ATrueExpr, ANode, nullable ANode) */
void nit__parser_prod___ATrueExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwtrue */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5196);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwtrue> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwtrue> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwtrue */
cltype = type_nit__TKwtrue.color;
idtype = type_nit__TKwtrue.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtrue", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5197);
show_backtrace(1);
}
{
nit__parser_prod___ATrueExpr___n_kwtrue_61d(self, var_new_child); /* Direct call parser_prod#ATrueExpr#n_kwtrue= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5201);
show_backtrace(1);
}
{
nit__parser_prod___ATrueExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ATrueExpr#n_annotations= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void nit__parser_prod___ATrueExpr___n_kwtrue_61d(val* self, val* p0) {
val* var_node /* var node: TKwtrue */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val = var_node; /* _n_kwtrue on <self:ATrueExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtrue> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtrue> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_annotations= for (self: ATrueExpr, nullable AAnnotations) */
void nit__parser_prod___ATrueExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATrueExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#visit_all for (self: ATrueExpr, Visitor) */
void nit__parser_prod___ATrueExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwtrue */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5220);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: AFalseExpr, nullable TKwfalse, nullable AAnnotations) */
void nit__parser_prod___AFalseExpr___init_afalseexpr(val* self, val* p0, val* p1) {
val* var_n_kwfalse /* var n_kwfalse: nullable TKwfalse */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwfalse = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5230);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5231);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfalse,self) on <var_n_kwfalse:nullable TKwfalse> */
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwfalse->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfalse:nullable TKwfalse> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFalseExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: AFalseExpr, ANode, nullable ANode) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfalse */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5238);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwfalse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwfalse> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwfalse */
cltype = type_nit__TKwfalse.color;
idtype = type_nit__TKwfalse.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwfalse", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5239);
show_backtrace(1);
}
{
nit__parser_prod___AFalseExpr___n_kwfalse_61d(self, var_new_child); /* Direct call parser_prod#AFalseExpr#n_kwfalse= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5243);
show_backtrace(1);
}
{
nit__parser_prod___AFalseExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFalseExpr#n_annotations= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void nit__parser_prod___AFalseExpr___n_kwfalse_61d(val* self, val* p0) {
val* var_node /* var node: TKwfalse */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val = var_node; /* _n_kwfalse on <self:AFalseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwfalse> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfalse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFalseExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#visit_all for (self: AFalseExpr, Visitor) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5262);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: ANullExpr, nullable TKwnull, nullable AAnnotations) */
void nit__parser_prod___ANullExpr___init_anullexpr(val* self, val* p0, val* p1) {
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwnull = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5272);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5273);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwnull->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ANullExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: ANullExpr, ANode, nullable ANode) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnull */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5280);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwnull> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwnull> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwnull */
cltype = type_nit__TKwnull.color;
idtype = type_nit__TKwnull.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnull", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5281);
show_backtrace(1);
}
{
nit__parser_prod___ANullExpr___n_kwnull_61d(self, var_new_child); /* Direct call parser_prod#ANullExpr#n_kwnull= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5285);
show_backtrace(1);
}
{
nit__parser_prod___ANullExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ANullExpr#n_annotations= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void nit__parser_prod___ANullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:ANullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_annotations= for (self: ANullExpr, nullable AAnnotations) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ANullExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#visit_all for (self: ANullExpr, Visitor) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5304);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#init_adecintexpr for (self: ADecIntExpr, nullable TNumber, nullable AAnnotations) */
void nit__parser_prod___ADecIntExpr___init_adecintexpr(val* self, val* p0, val* p1) {
val* var_n_number /* var n_number: nullable TNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5314);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var_n_number; /* _n_number on <self:ADecIntExpr> */
if (var_n_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5315);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_number,self) on <var_n_number:nullable TNumber> */
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_number->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_number:nullable TNumber> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ADecIntExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#replace_child for (self: ADecIntExpr, ANode, nullable ANode) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNumber */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5322);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TNumber> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TNumber> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TNumber */
cltype = type_nit__TNumber.color;
idtype = type_nit__TNumber.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5323);
show_backtrace(1);
}
{
nit__parser_prod___ADecIntExpr___n_number_61d(self, var_new_child); /* Direct call parser_prod#ADecIntExpr#n_number= on <self:ADecIntExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecIntExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5327);
show_backtrace(1);
}
{
nit__parser_prod___ADecIntExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ADecIntExpr#n_annotations= on <self:ADecIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_number= for (self: ADecIntExpr, TNumber) */
void nit__parser_prod___ADecIntExpr___n_number_61d(val* self, val* p0) {
val* var_node /* var node: TNumber */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var_node; /* _n_number on <self:ADecIntExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TNumber> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TNumber> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_annotations= for (self: ADecIntExpr, nullable AAnnotations) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ADecIntExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#visit_all for (self: ADecIntExpr, Visitor) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5346);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecIntExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#init_ahexintexpr for (self: AHexIntExpr, nullable THexNumber, nullable AAnnotations) */
void nit__parser_prod___AHexIntExpr___init_ahexintexpr(val* self, val* p0, val* p1) {
val* var_n_hex_number /* var n_hex_number: nullable THexNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_hex_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5356);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val = var_n_hex_number; /* _n_hex_number on <self:AHexIntExpr> */
if (var_n_hex_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5357);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_hex_number,self) on <var_n_hex_number:nullable THexNumber> */
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_hex_number->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_hex_number:nullable THexNumber> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AHexIntExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#replace_child for (self: AHexIntExpr, ANode, nullable ANode) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : THexNumber */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5364);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:THexNumber> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:THexNumber> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa THexNumber */
cltype = type_nit__THexNumber.color;
idtype = type_nit__THexNumber.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "THexNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5365);
show_backtrace(1);
}
{
nit__parser_prod___AHexIntExpr___n_hex_number_61d(self, var_new_child); /* Direct call parser_prod#AHexIntExpr#n_hex_number= on <self:AHexIntExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexIntExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5369);
show_backtrace(1);
}
{
nit__parser_prod___AHexIntExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AHexIntExpr#n_annotations= on <self:AHexIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_hex_number= for (self: AHexIntExpr, THexNumber) */
void nit__parser_prod___AHexIntExpr___n_hex_number_61d(val* self, val* p0) {
val* var_node /* var node: THexNumber */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val = var_node; /* _n_hex_number on <self:AHexIntExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:THexNumber> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:THexNumber> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_annotations= for (self: AHexIntExpr, nullable AAnnotations) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AHexIntExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#visit_all for (self: AHexIntExpr, Visitor) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : THexNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5388);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexIntExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void nit__parser_prod___AFloatExpr___init_afloatexpr(val* self, val* p0, val* p1) {
val* var_n_float /* var n_float: nullable TFloat */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_float = p0;
var_n_annotations = p1;
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5398);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5399);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_float,self) on <var_n_float:nullable TFloat> */
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_float->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_float:nullable TFloat> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFloatExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: AFloatExpr, ANode, nullable ANode) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TFloat */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5406);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TFloat> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TFloat> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TFloat */
cltype = type_nit__TFloat.color;
idtype = type_nit__TFloat.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TFloat", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5407);
show_backtrace(1);
}
{
nit__parser_prod___AFloatExpr___n_float_61d(self, var_new_child); /* Direct call parser_prod#AFloatExpr#n_float= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5411);
show_backtrace(1);
}
{
nit__parser_prod___AFloatExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFloatExpr#n_annotations= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void nit__parser_prod___AFloatExpr___n_float_61d(val* self, val* p0) {
val* var_node /* var node: TFloat */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val = var_node; /* _n_float on <self:AFloatExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TFloat> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TFloat> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_annotations= for (self: AFloatExpr, nullable AAnnotations) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFloatExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#visit_all for (self: AFloatExpr, Visitor) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5430);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: ACharExpr, nullable TChar, nullable AAnnotations) */
void nit__parser_prod___ACharExpr___init_acharexpr(val* self, val* p0, val* p1) {
val* var_n_char /* var n_char: nullable TChar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_char = p0;
var_n_annotations = p1;
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5440);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5441);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_char,self) on <var_n_char:nullable TChar> */
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_char->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_char:nullable TChar> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACharExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: ACharExpr, ANode, nullable ANode) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TChar */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5448);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TChar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TChar> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TChar */
cltype = type_nit__TChar.color;
idtype = type_nit__TChar.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TChar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5449);
show_backtrace(1);
}
{
nit__parser_prod___ACharExpr___n_char_61d(self, var_new_child); /* Direct call parser_prod#ACharExpr#n_char= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5453);
show_backtrace(1);
}
{
nit__parser_prod___ACharExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ACharExpr#n_annotations= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void nit__parser_prod___ACharExpr___n_char_61d(val* self, val* p0) {
val* var_node /* var node: TChar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val = var_node; /* _n_char on <self:ACharExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TChar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TChar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_annotations= for (self: ACharExpr, nullable AAnnotations) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACharExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#visit_all for (self: ACharExpr, Visitor) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5472);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: AStringExpr, nullable TString, nullable AAnnotations) */
void nit__parser_prod___AStringExpr___init_astringexpr(val* self, val* p0, val* p1) {
val* var_n_string /* var n_string: nullable TString */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_string = p0;
var_n_annotations = p1;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5482);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5483);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TString> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStringExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: AStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AAnnotations */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5490);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TString */
cltype = type_nit__TString.color;
idtype = type_nit__TString.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5491);
show_backtrace(1);
}
{
nit__parser_prod___AStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AStringExpr#n_string= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5495);
show_backtrace(1);
}
{
nit__parser_prod___AStringExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStringExpr#n_annotations= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: AStringExpr, Token) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_annotations= for (self: AStringExpr, nullable AAnnotations) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStringExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#visit_all for (self: AStringExpr, Visitor) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5514);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: AStartStringExpr, nullable TStartString) */
void nit__parser_prod___AStartStringExpr___init_astartstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TStartString */;
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5523);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5524);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TStartString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TStartString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: AStartStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AStartStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5529);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TStartString */
cltype = type_nit__TStartString.color;
idtype = type_nit__TStartString.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStartString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5530);
show_backtrace(1);
}
{
nit__parser_prod___AStartStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AStartStringExpr#n_string= on <self:AStartStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: AStartStringExpr, Token) */
void nit__parser_prod___AStartStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStartStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: AStartStringExpr, Visitor) */
void nit__parser_prod___AStartStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5544);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void nit__parser_prod___AMidStringExpr___init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5552);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5553);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TMidString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TMidString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: AMidStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AMidStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5558);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TMidString */
cltype = type_nit__TMidString.color;
idtype = type_nit__TMidString.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMidString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5559);
show_backtrace(1);
}
{
nit__parser_prod___AMidStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AMidStringExpr#n_string= on <self:AMidStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: AMidStringExpr, Token) */
void nit__parser_prod___AMidStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AMidStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: AMidStringExpr, Visitor) */
void nit__parser_prod___AMidStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5573);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void nit__parser_prod___AEndStringExpr___init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5581);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5582);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TEndString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TEndString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: AEndStringExpr, ANode, nullable ANode) */
void nit__parser_prod___AEndStringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5587);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TEndString */
cltype = type_nit__TEndString.color;
idtype = type_nit__TEndString.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEndString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5588);
show_backtrace(1);
}
{
nit__parser_prod___AEndStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AEndStringExpr#n_string= on <self:AEndStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: AEndStringExpr, Token) */
void nit__parser_prod___AEndStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AEndStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: AEndStringExpr, Visitor) */
void nit__parser_prod___AEndStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5602);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: ASuperstringExpr, Collection[Object], nullable AAnnotations) */
void nit__parser_prod___ASuperstringExpr___init_asuperstringexpr(val* self, val* p0, val* p1) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_n_exprs = p0;
var_n_annotations = p1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2277);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
var3 = NULL;
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var3) on <var_n_annotations:nullable AAnnotations> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: ASuperstringExpr, ANode, nullable ANode) */
void nit__parser_prod___ASuperstringExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
val* var4 /* : nullable AAnnotations */;
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
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2277);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var4,var_old_child) on <var4:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype = type_nullable__nit__AAnnotations.color;
idtype = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5620);
show_backtrace(1);
}
{
nit__parser_prod___ASuperstringExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASuperstringExpr#n_annotations= on <self:ASuperstringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: ASuperstringExpr, nullable AAnnotations) */
void nit__parser_prod___ASuperstringExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperstringExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#visit_all for (self: ASuperstringExpr, Visitor) */
void nit__parser_prod___ASuperstringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2277);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: AParExpr, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void nit__parser_prod___AParExpr___init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_n_opar = p0;
var_n_expr = p1;
var_n_cpar = p2;
var_n_annotations = p3;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5646);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5647);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5648);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5649);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5650);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5651);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParExpr> */
var = NULL;
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var7 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: AParExpr, ANode, nullable ANode) */
void nit__parser_prod___AParExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : TCpar */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : nullable AAnnotations */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5658);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TOpar> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TOpar */
cltype = type_nit__TOpar.color;
idtype = type_nit__TOpar.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5659);
show_backtrace(1);
}
{
nit__parser_prod___AParExpr___n_opar_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_opar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5662);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExpr> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa AExpr */
cltype14 = type_nit__AExpr.color;
idtype15 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5663);
show_backtrace(1);
}
{
nit__parser_prod___AParExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_expr= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5666);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TCpar> */
var22 = var17 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
/* <var_new_child:nullable ANode> isa TCpar */
cltype24 = type_nit__TCpar.color;
idtype25 = type_nit__TCpar.id;
if(var_new_child == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name26 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCpar", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5667);
show_backtrace(1);
}
{
nit__parser_prod___AParExpr___n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_cpar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:nullable AAnnotations(AAnnotations)> */
var33 = var27 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype35 = type_nullable__nit__AAnnotations.color;
idtype36 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_new_child->type->table_size) {
var34 = 0;
} else {
var34 = var_new_child->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
var_class_name37 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5671);
show_backtrace(1);
}
{
nit__parser_prod___AParExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_annotations= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void nit__parser_prod___AParExpr___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val = var_node; /* _n_opar on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: AParExpr, AExpr) */
void nit__parser_prod___AParExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val = var_node; /* _n_expr on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void nit__parser_prod___AParExpr___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val = var_node; /* _n_cpar on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_annotations= for (self: AParExpr, nullable AAnnotations) */
void nit__parser_prod___AParExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#visit_all for (self: AParExpr, Visitor) */
void nit__parser_prod___AParExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : AExpr */;
val* var2 /* : TCpar */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5700);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5701);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5702);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: AAsCastExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void nit__parser_prod___AAsCastExpr___init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_type = p3;
var_n_cpar = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5715);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5716);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5717);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5718);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwas->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
var = NULL;
if (var_n_opar == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,var) on <var_n_opar:nullable TOpar> */
var_other = var;
{
var6 = ((short int (*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5721);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5722);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
var10 = NULL;
if (var_n_cpar == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var10) on <var_n_cpar:nullable TCpar> */
var_other = var10;
{
var14 = ((short int (*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: AAsCastExpr, ANode, nullable ANode) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TKwas */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable TOpar */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : AType */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
val* var38 /* : nullable TCpar */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5729);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5730);
show_backtrace(1);
}
{
nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_expr= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5733);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwas> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa TKwas */
cltype14 = type_nit__TKwas.color;
idtype15 = type_nit__TKwas.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5734);
show_backtrace(1);
}
{
nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_kwas= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable TOpar(TOpar)> */
var23 = var17 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype25 = type_nullable__nit__TOpar.color;
idtype26 = type_nullable__nit__TOpar.id;
if(var_new_child == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
var_class_name27 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5738);
show_backtrace(1);
}
{
nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_opar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5741);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:AType> */
var33 = var28 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
/* <var_new_child:nullable ANode> isa AType */
cltype35 = type_nit__AType.color;
idtype36 = type_nit__AType.id;
if(var_new_child == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_new_child->type->table_size) {
var34 = 0;
} else {
var34 = var_new_child->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
var_class_name37 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5742);
show_backtrace(1);
}
{
nit__parser_prod___AAsCastExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_type= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var38,var_old_child) on <var38:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var38,var_other) on <var38:nullable TCpar(TCpar)> */
var44 = var38 == var_other;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype46 = type_nullable__nit__TCpar.color;
idtype47 = type_nullable__nit__TCpar.id;
if(var_new_child == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_new_child->type->table_size) {
var45 = 0;
} else {
var45 = var_new_child->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
var_class_name48 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5746);
show_backtrace(1);
}
{
nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_cpar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: AAsCastExpr, AExpr) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: AAsCastExpr, TKwas) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_opar= for (self: AAsCastExpr, nullable TOpar) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsCastExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TOpar(TOpar)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void nit__parser_prod___AAsCastExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val = var_node; /* _n_type on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_cpar= for (self: AAsCastExpr, nullable TCpar) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsCastExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TCpar(TCpar)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: AAsCastExpr, Visitor) */
void nit__parser_prod___AAsCastExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : AType */;
val* var4 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5780);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5781);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5783);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#init_aasnotnullexpr for (self: AAsNotnullExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
void nit__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_kwnot = p3;
var_n_kwnull = p4;
var_n_cpar = p5;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5797);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5798);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5799);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5800);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwas->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
var = NULL;
if (var_n_opar == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,var) on <var_n_opar:nullable TOpar> */
var_other = var;
{
var6 = ((short int (*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5803);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5804);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwnot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL9:(void)0;
}
}
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5805);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5806);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwnull->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
var11 = NULL;
if (var_n_cpar == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var11) on <var_n_cpar:nullable TCpar> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: AAsNotnullExpr, ANode, nullable ANode) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TKwas */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable TOpar */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : TKwnot */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
val* var38 /* : TKwnull */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
val* var48 /* : nullable TCpar */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5813);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5814);
show_backtrace(1);
}
{
nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_expr= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5817);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwas> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa TKwas */
cltype14 = type_nit__TKwas.color;
idtype15 = type_nit__TKwas.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5818);
show_backtrace(1);
}
{
nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwas= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable TOpar(TOpar)> */
var23 = var17 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype25 = type_nullable__nit__TOpar.color;
idtype26 = type_nullable__nit__TOpar.id;
if(var_new_child == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
var_class_name27 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5822);
show_backtrace(1);
}
{
nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_opar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5825);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:TKwnot> */
var33 = var28 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
/* <var_new_child:nullable ANode> isa TKwnot */
cltype35 = type_nit__TKwnot.color;
idtype36 = type_nit__TKwnot.id;
if(var_new_child == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_new_child->type->table_size) {
var34 = 0;
} else {
var34 = var_new_child->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
var_class_name37 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5826);
show_backtrace(1);
}
{
nit__parser_prod___AAsNotnullExpr___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwnot= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5829);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var38,var_old_child) on <var38:TKwnull> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var38,var_other) on <var38:TKwnull> */
var43 = var38 == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
/* <var_new_child:nullable ANode> isa TKwnull */
cltype45 = type_nit__TKwnull.color;
idtype46 = type_nit__TKwnull.id;
if(var_new_child == NULL) {
var44 = 0;
} else {
if(cltype45 >= var_new_child->type->table_size) {
var44 = 0;
} else {
var44 = var_new_child->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
var_class_name47 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnull", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5830);
show_backtrace(1);
}
{
nit__parser_prod___AAsNotnullExpr___n_kwnull_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwnull= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var48 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var48 == NULL) {
var49 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var48,var_old_child) on <var48:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var48,var_other) on <var48:nullable TCpar(TCpar)> */
var54 = var48 == var_other;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype56 = type_nullable__nit__TCpar.color;
idtype57 = type_nullable__nit__TCpar.id;
if(var_new_child == NULL) {
var55 = 1;
} else {
if(cltype56 >= var_new_child->type->table_size) {
var55 = 0;
} else {
var55 = var_new_child->type->type_table[cltype56] == idtype57;
}
}
if (unlikely(!var55)) {
var_class_name58 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5834);
show_backtrace(1);
}
{
nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_cpar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: AAsNotnullExpr, AExpr) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: AAsNotnullExpr, TKwas) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: AAsNotnullExpr, nullable TOpar) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsNotnullExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TOpar(TOpar)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void nit__parser_prod___AAsNotnullExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void nit__parser_prod___AAsNotnullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: AAsNotnullExpr, nullable TCpar) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsNotnullExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TCpar(TCpar)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: AAsNotnullExpr, Visitor) */
void nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : TKwnot */;
val* var4 /* : TKwnull */;
val* var5 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5873);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5874);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5876);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5877);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#init_aissetattrexpr for (self: AIssetAttrExpr, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwisset /* var n_kwisset: nullable TKwisset */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
var_n_kwisset = p0;
var_n_expr = p1;
var_n_id = p2;
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5888);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5889);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwisset,self) on <var_n_kwisset:nullable TKwisset> */
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwisset->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwisset:nullable TKwisset> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5890);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5891);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5892);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5893);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: AIssetAttrExpr, ANode, nullable ANode) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwisset */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : TAttrid */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5898);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwisset> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwisset> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwisset */
cltype = type_nit__TKwisset.color;
idtype = type_nit__TKwisset.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwisset", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5899);
show_backtrace(1);
}
{
nit__parser_prod___AIssetAttrExpr___n_kwisset_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_kwisset= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5902);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExpr> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa AExpr */
cltype14 = type_nit__AExpr.color;
idtype15 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5903);
show_backtrace(1);
}
{
nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_expr= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5906);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TAttrid> */
var22 = var17 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
/* <var_new_child:nullable ANode> isa TAttrid */
cltype24 = type_nit__TAttrid.color;
idtype25 = type_nit__TAttrid.id;
if(var_new_child == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name26 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5907);
show_backtrace(1);
}
{
nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_id= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void nit__parser_prod___AIssetAttrExpr___n_kwisset_61d(val* self, val* p0) {
val* var_node /* var node: TKwisset */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_node; /* _n_kwisset on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwisset> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwisset> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: AIssetAttrExpr, AExpr) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: AIssetAttrExpr, TAttrid) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#visit_all for (self: AIssetAttrExpr, Visitor) */
void nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwisset */;
val* var1 /* : AExpr */;
val* var2 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5931);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5932);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5933);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#init_adebugtypeexpr for (self: ADebugTypeExpr, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void nit__parser_prod___ADebugTypeExpr___init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwdebug /* var n_kwdebug: nullable TKwdebug */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
var_n_kwdebug = p0;
var_n_kwtype = p1;
var_n_expr = p2;
var_n_type = p3;
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5944);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5945);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdebug,self) on <var_n_kwdebug:nullable TKwdebug> */
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwdebug->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdebug:nullable TKwdebug> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5946);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5947);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwtype->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5948);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5949);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5950);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5951);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: ADebugTypeExpr, ANode, nullable ANode) */
void nit__parser_prod___ADebugTypeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdebug */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TKwtype */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExpr */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AType */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5956);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwdebug> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwdebug> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwdebug */
cltype = type_nit__TKwdebug.color;
idtype = type_nit__TKwdebug.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdebug", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5957);
show_backtrace(1);
}
{
nit__parser_prod___ADebugTypeExpr___n_kwdebug_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_kwdebug= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5960);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwtype> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwtype> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa TKwtype */
cltype14 = type_nit__TKwtype.color;
idtype15 = type_nit__TKwtype.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtype", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5961);
show_backtrace(1);
}
{
nit__parser_prod___ADebugTypeExpr___n_kwtype_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_kwtype= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5964);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExpr> */
var22 = var17 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
/* <var_new_child:nullable ANode> isa AExpr */
cltype24 = type_nit__AExpr.color;
idtype25 = type_nit__AExpr.id;
if(var_new_child == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name26 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5965);
show_backtrace(1);
}
{
nit__parser_prod___ADebugTypeExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_expr= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5968);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AType> */
var32 = var27 == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
/* <var_new_child:nullable ANode> isa AType */
cltype34 = type_nit__AType.color;
idtype35 = type_nit__AType.id;
if(var_new_child == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_new_child->type->table_size) {
var33 = 0;
} else {
var33 = var_new_child->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name36 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5969);
show_backtrace(1);
}
{
nit__parser_prod___ADebugTypeExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_type= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void nit__parser_prod___ADebugTypeExpr___n_kwdebug_61d(val* self, val* p0) {
val* var_node /* var node: TKwdebug */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_node; /* _n_kwdebug on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdebug> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdebug> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void nit__parser_prod___ADebugTypeExpr___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_node; /* _n_kwtype on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void nit__parser_prod___ADebugTypeExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val = var_node; /* _n_expr on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void nit__parser_prod___ADebugTypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val = var_node; /* _n_type on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#visit_all for (self: ADebugTypeExpr, Visitor) */
void nit__parser_prod___ADebugTypeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdebug */;
val* var1 /* : TKwtype */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5998);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5999);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6000);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6001);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#init_avarargexpr for (self: AVarargExpr, nullable AExpr, nullable TDotdotdot) */
void nit__parser_prod___AVarargExpr___init_avarargexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
var_n_expr = p0;
var_n_dotdotdot = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6010);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVarargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6011);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6012);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AVarargExpr> */
if (var_n_dotdotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6013);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot> */
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_dotdotdot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#replace_child for (self: AVarargExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarargExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TDotdotdot */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6018);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6019);
show_backtrace(1);
}
{
nit__parser_prod___AVarargExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AVarargExpr#n_expr= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6022);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TDotdotdot> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa TDotdotdot */
cltype14 = type_nit__TDotdotdot.color;
idtype15 = type_nit__TDotdotdot.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TDotdotdot", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6023);
show_backtrace(1);
}
{
nit__parser_prod___AVarargExpr___n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod#AVarargExpr#n_dotdotdot= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_expr= for (self: AVarargExpr, AExpr) */
void nit__parser_prod___AVarargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val = var_node; /* _n_expr on <self:AVarargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_dotdotdot= for (self: AVarargExpr, TDotdotdot) */
void nit__parser_prod___AVarargExpr___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdotdot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AVarargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TDotdotdot> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdotdot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#visit_all for (self: AVarargExpr, Visitor) */
void nit__parser_prod___AVarargExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TDotdotdot */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6042);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6043);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#init_atypeexpr for (self: ATypeExpr, nullable AType) */
void nit__parser_prod___ATypeExpr___init_atypeexpr(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6051);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val = var_n_type; /* _n_type on <self:ATypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6052);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#replace_child for (self: ATypeExpr, ANode, nullable ANode) */
void nit__parser_prod___ATypeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6057);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AType> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6058);
show_backtrace(1);
}
{
nit__parser_prod___ATypeExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#ATypeExpr#n_type= on <self:ATypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#n_type= for (self: ATypeExpr, AType) */
void nit__parser_prod___ATypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val = var_node; /* _n_type on <self:ATypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#visit_all for (self: ATypeExpr, Visitor) */
void nit__parser_prod___ATypeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6072);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#init_amethidexpr for (self: AMethidExpr, nullable AExpr, nullable AMethid) */
void nit__parser_prod___AMethidExpr___init_amethidexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable AMethid */;
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6081);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMethidExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6082);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6083);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val = var_n_id; /* _n_id on <self:AMethidExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6084);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable AMethid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable AMethid> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#replace_child for (self: AMethidExpr, ANode, nullable ANode) */
void nit__parser_prod___AMethidExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExpr */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AMethid */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6089);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExpr> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6090);
show_backtrace(1);
}
{
nit__parser_prod___AMethidExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AMethidExpr#n_expr= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6093);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AMethid> */
var12 = var7 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
/* <var_new_child:nullable ANode> isa AMethid */
cltype14 = type_nit__AMethid.color;
idtype15 = type_nit__AMethid.id;
if(var_new_child == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_new_child->type->table_size) {
var13 = 0;
} else {
var13 = var_new_child->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name16 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6094);
show_backtrace(1);
}
{
nit__parser_prod___AMethidExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#AMethidExpr#n_id= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#n_expr= for (self: AMethidExpr, AExpr) */
void nit__parser_prod___AMethidExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val = var_node; /* _n_expr on <self:AMethidExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#n_id= for (self: AMethidExpr, AMethid) */
void nit__parser_prod___AMethidExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val = var_node; /* _n_id on <self:AMethidExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#visit_all for (self: AMethidExpr, Visitor) */
void nit__parser_prod___AMethidExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6113);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6114);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#init_aatexpr for (self: AAtExpr, nullable AAnnotations) */
void nit__parser_prod___AAtExpr___init_aatexpr(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
var_n_annotations = p0;
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6122);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtExpr> */
if (var_n_annotations == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6123);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations> */
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#replace_child for (self: AAtExpr, ANode, nullable ANode) */
void nit__parser_prod___AAtExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa AAnnotations */
cltype = type_nit__AAnnotations.color;
idtype = type_nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAnnotations", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6129);
show_backtrace(1);
}
{
nit__parser_prod___AAtExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AAtExpr#n_annotations= on <self:AAtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#n_annotations= for (self: AAtExpr, nullable AAnnotations) */
void nit__parser_prod___AAtExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAtExpr> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6137);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#visit_all for (self: AAtExpr, Visitor) */
void nit__parser_prod___AAtExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#init_amanyexpr for (self: AManyExpr, Collection[Object]) */
void nit__parser_prod___AManyExpr___init_amanyexpr(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_n_exprs = p0;
{
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2354);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#replace_child for (self: AManyExpr, ANode, nullable ANode) */
void nit__parser_prod___AManyExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2354);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#visit_all for (self: AManyExpr, Visitor) */
void nit__parser_prod___AManyExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2354);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: AListExprs, Collection[Object]) */
void nit__parser_prod___AListExprs___init_alistexprs(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_n_exprs = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: AListExprs, ANode, nullable ANode) */
void nit__parser_prod___AListExprs___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#visit_all for (self: AListExprs, Visitor) */
void nit__parser_prod___AListExprs___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: AParExprs, nullable TOpar, Collection[Object], nullable TCpar) */
void nit__parser_prod___AParExprs___init_aparexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
var_n_opar = p0;
var_n_exprs = p1;
var_n_cpar = p2;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6193);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6194);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6196);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6197);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: AParExprs, ANode, nullable ANode) */
void nit__parser_prod___AParExprs___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : ANodes[AExpr] */;
val* var9 /* : ANodes[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : TCpar */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6202);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TOpar> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TOpar */
cltype = type_nit__TOpar.color;
idtype = type_nit__TOpar.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6203);
show_backtrace(1);
}
{
nit__parser_prod___AParExprs___n_opar_61d(self, var_new_child); /* Direct call parser_prod#AParExprs#n_opar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var9 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6207);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var11,var_old_child) on <var11:TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:TCpar> */
var16 = var11 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
/* <var_new_child:nullable ANode> isa TCpar */
cltype18 = type_nit__TCpar.color;
idtype19 = type_nit__TCpar.id;
if(var_new_child == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name20 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCpar", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6208);
show_backtrace(1);
}
{
nit__parser_prod___AParExprs___n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AParExprs#n_cpar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void nit__parser_prod___AParExprs___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val = var_node; /* _n_opar on <self:AParExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void nit__parser_prod___AParExprs___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val = var_node; /* _n_cpar on <self:AParExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: AParExprs, Visitor) */
void nit__parser_prod___AParExprs___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6227);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6229);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: ABraExprs, nullable TObra, Collection[Object], nullable TCbra) */
void nit__parser_prod___ABraExprs___init_abraexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
var_n_obra = p0;
var_n_exprs = p1;
var_n_cbra = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6239);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6240);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6242);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6243);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: ABraExprs, ANode, nullable ANode) */
void nit__parser_prod___ABraExprs___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : ANodes[AExpr] */;
val* var9 /* : ANodes[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : TCbra */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6248);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_nit__TObra.color;
idtype = type_nit__TObra.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6249);
show_backtrace(1);
}
{
nit__parser_prod___ABraExprs___n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraExprs#n_obra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var9 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6253);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var11,var_old_child) on <var11:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:TCbra> */
var16 = var11 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
/* <var_new_child:nullable ANode> isa TCbra */
cltype18 = type_nit__TCbra.color;
idtype19 = type_nit__TCbra.id;
if(var_new_child == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name20 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6254);
show_backtrace(1);
}
{
nit__parser_prod___ABraExprs___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraExprs#n_cbra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void nit__parser_prod___ABraExprs___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val = var_node; /* _n_obra on <self:ABraExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void nit__parser_prod___ABraExprs___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val = var_node; /* _n_cbra on <self:ABraExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: ABraExprs, Visitor) */
void nit__parser_prod___ABraExprs___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6273);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6275);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void nit__parser_prod___APlusAssignOp___init_aplusassignop(val* self, val* p0) {
val* var_n_pluseq /* var n_pluseq: nullable TPluseq */;
var_n_pluseq = p0;
if (unlikely(var_n_pluseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6283);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__APlusAssignOp___n_pluseq].val = var_n_pluseq; /* _n_pluseq on <self:APlusAssignOp> */
if (var_n_pluseq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6284);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_pluseq,self) on <var_n_pluseq:nullable TPluseq> */
if (unlikely(var_n_pluseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_pluseq->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_pluseq:nullable TPluseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPluseq */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_pluseq");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6289);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPluseq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPluseq> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TPluseq */
cltype = type_nit__TPluseq.color;
idtype = type_nit__TPluseq.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPluseq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6290);
show_backtrace(1);
}
{
nit__parser_prod___APlusAssignOp___n_pluseq_61d(self, var_new_child); /* Direct call parser_prod#APlusAssignOp#n_pluseq= on <self:APlusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_pluseq= for (self: APlusAssignOp, TPluseq) */
void nit__parser_prod___APlusAssignOp___n_pluseq_61d(val* self, val* p0) {
val* var_node /* var node: TPluseq */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APlusAssignOp___n_pluseq].val = var_node; /* _n_pluseq on <self:APlusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPluseq> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPluseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: APlusAssignOp, Visitor) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPluseq */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_pluseq");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6304);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void nit__parser_prod___AMinusAssignOp___init_aminusassignop(val* self, val* p0) {
val* var_n_minuseq /* var n_minuseq: nullable TMinuseq */;
var_n_minuseq = p0;
if (unlikely(var_n_minuseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6312);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AMinusAssignOp___n_minuseq].val = var_n_minuseq; /* _n_minuseq on <self:AMinusAssignOp> */
if (var_n_minuseq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6313);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_minuseq,self) on <var_n_minuseq:nullable TMinuseq> */
if (unlikely(var_n_minuseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_minuseq->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_minuseq:nullable TMinuseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinuseq */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minuseq");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6318);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TMinuseq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TMinuseq> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TMinuseq */
cltype = type_nit__TMinuseq.color;
idtype = type_nit__TMinuseq.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinuseq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6319);
show_backtrace(1);
}
{
nit__parser_prod___AMinusAssignOp___n_minuseq_61d(self, var_new_child); /* Direct call parser_prod#AMinusAssignOp#n_minuseq= on <self:AMinusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_minuseq= for (self: AMinusAssignOp, TMinuseq) */
void nit__parser_prod___AMinusAssignOp___n_minuseq_61d(val* self, val* p0) {
val* var_node /* var node: TMinuseq */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMinusAssignOp___n_minuseq].val = var_node; /* _n_minuseq on <self:AMinusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinuseq> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinuseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: AMinusAssignOp, Visitor) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinuseq */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minuseq");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6333);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: AModuleName, nullable TQuad, Collection[Object], nullable TId) */
void nit__parser_prod___AModuleName___init_amodulename(val* self, val* p0, val* p1, val* p2) {
val* var_n_quad /* var n_quad: nullable TQuad */;
val* var_n_path /* var n_path: Collection[Object] */;
val* var_n_id /* var n_id: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : ANodes[TId] */;
val* var9 /* : ANodes[TId] */;
var_n_quad = p0;
var_n_path = p1;
var_n_id = p2;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var_n_quad; /* _n_quad on <self:AModuleName> */
var = NULL;
if (var_n_quad == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_quad,var) on <var_n_quad:nullable TQuad> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_n_quad->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_quad, var_other) /* == on <var_n_quad:nullable TQuad(TQuad)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_quad,self) on <var_n_quad:nullable TQuad(TQuad)> */
var_n_quad->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_quad:nullable TQuad(TQuad)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var9 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2467);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var7, var_n_path); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var7:ANodes[TId]>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6346);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6347);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#replace_child for (self: AModuleName, ANode, nullable ANode) */
void nit__parser_prod___AModuleName___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TQuad */;
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
val* var12 /* : TId */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TQuad> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TQuad(TQuad)> */
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
/* <var_new_child:nullable ANode> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TQuad", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6353);
show_backtrace(1);
}
{
nit__parser_prod___AModuleName___n_quad_61d(self, var_new_child); /* Direct call parser_prod#AModuleName#n_quad= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var10 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2467);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__ANodes___replace_child(var8, var_old_child, var_new_child);
}
if (var11){
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6357);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:TId> */
var17 = var12 == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
/* <var_new_child:nullable ANode> isa TId */
cltype19 = type_nit__TId.color;
idtype20 = type_nit__TId.id;
if(var_new_child == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6358);
show_backtrace(1);
}
{
nit__parser_prod___AModuleName___n_id_61d(self, var_new_child); /* Direct call parser_prod#AModuleName#n_id= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
void nit__parser_prod___AModuleName___n_quad_61d(val* self, val* p0) {
val* var_node /* var node: nullable TQuad */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var_node; /* _n_quad on <self:AModuleName> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TQuad> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TQuad(TQuad)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TQuad(TQuad)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TQuad(TQuad)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: AModuleName, TId) */
void nit__parser_prod___AModuleName___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val = var_node; /* _n_id on <self:AModuleName> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: AModuleName, Visitor) */
void nit__parser_prod___AModuleName___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TQuad */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var3 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2467);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[TId]>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6379);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: AExternCalls, nullable TKwimport, Collection[Object]) */
void nit__parser_prod___AExternCalls___init_aexterncalls(val* self, val* p0, val* p1) {
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_extern_calls /* var n_extern_calls: Collection[Object] */;
val* var /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
var_n_kwimport = p0;
var_n_extern_calls = p1;
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6388);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6389);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwimport->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1210);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_extern_calls); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: AExternCalls, ANode, nullable ANode) */
void nit__parser_prod___AExternCalls___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwimport */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : ANodes[AExternCall] */;
val* var9 /* : ANodes[AExternCall] */;
short int var10 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6395);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwimport> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwimport */
cltype = type_nit__TKwimport.color;
idtype = type_nit__TKwimport.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6396);
show_backtrace(1);
}
{
nit__parser_prod___AExternCalls___n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#AExternCalls#n_kwimport= on <self:AExternCalls>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var9 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1210);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void nit__parser_prod___AExternCalls___n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val = var_node; /* _n_kwimport on <self:AExternCalls> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: AExternCalls, Visitor) */
void nit__parser_prod___AExternCalls___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwimport */;
val* var1 /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6411);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1210);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: ASuperExternCall, nullable TKwsuper) */
void nit__parser_prod___ASuperExternCall___init_asuperexterncall(val* self, val* p0) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
var_n_kwsuper = p0;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6435);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6436);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwsuper->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#replace_child for (self: ASuperExternCall, ANode, nullable ANode) */
void nit__parser_prod___ASuperExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwsuper */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6441);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwsuper> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype = type_nit__TKwsuper.color;
idtype = type_nit__TKwsuper.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6442);
show_backtrace(1);
}
{
nit__parser_prod___ASuperExternCall___n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperExternCall#n_kwsuper= on <self:ASuperExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void nit__parser_prod___ASuperExternCall___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: ASuperExternCall, Visitor) */
void nit__parser_prod___ASuperExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6456);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: ALocalPropExternCall, nullable AMethid) */
void nit__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(val* self, val* p0) {
val* var_n_methid /* var n_methid: nullable AMethid */;
var_n_methid = p0;
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6464);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:ALocalPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6465);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_methid->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: ALocalPropExternCall, ANode, nullable ANode) */
void nit__parser_prod___ALocalPropExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AMethid */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6470);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AMethid> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AMethid */
cltype = type_nit__AMethid.color;
idtype = type_nit__AMethid.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6471);
show_backtrace(1);
}
{
nit__parser_prod___ALocalPropExternCall___n_methid_61d(self, var_new_child); /* Direct call parser_prod#ALocalPropExternCall#n_methid= on <self:ALocalPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void nit__parser_prod___ALocalPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val = var_node; /* _n_methid on <self:ALocalPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: ALocalPropExternCall, Visitor) */
void nit__parser_prod___ALocalPropExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6485);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: AFullPropExternCall, nullable AType, nullable TDot, nullable AMethid) */
void nit__parser_prod___AFullPropExternCall___init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_type = p0;
var_n_dot = p1;
var_n_methid = p2;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6495);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AFullPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6496);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:AFullPropExternCall> */
var = NULL;
if (var_n_dot == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_dot,var) on <var_n_dot:nullable TDot> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_dot, var_other) /* == on <var_n_dot:nullable TDot(TDot)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6499);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:AFullPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6500);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_methid->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: AFullPropExternCall, ANode, nullable ANode) */
void nit__parser_prod___AFullPropExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable TDot */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : AMethid */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6505);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AType> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6506);
show_backtrace(1);
}
{
nit__parser_prod___AFullPropExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_type= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable TDot(TDot)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
/* <var_new_child:nullable ANode> isa nullable TDot */
cltype15 = type_nullable__nit__TDot.color;
idtype16 = type_nullable__nit__TDot.id;
if(var_new_child == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDot", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6510);
show_backtrace(1);
}
{
nit__parser_prod___AFullPropExternCall___n_dot_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_dot= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6513);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:AMethid> */
var23 = var18 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
/* <var_new_child:nullable ANode> isa AMethid */
cltype25 = type_nit__AMethid.color;
idtype26 = type_nit__AMethid.id;
if(var_new_child == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
var_class_name27 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6514);
show_backtrace(1);
}
{
nit__parser_prod___AFullPropExternCall___n_methid_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_methid= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void nit__parser_prod___AFullPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val = var_node; /* _n_type on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
void nit__parser_prod___AFullPropExternCall___n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val = var_node; /* _n_dot on <self:AFullPropExternCall> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TDot> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TDot(TDot)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDot(TDot)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDot(TDot)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void nit__parser_prod___AFullPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val = var_node; /* _n_methid on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: AFullPropExternCall, Visitor) */
void nit__parser_prod___AFullPropExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6538);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6540);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: AInitPropExternCall, nullable AType) */
void nit__parser_prod___AInitPropExternCall___init_ainitpropexterncall(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6548);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AInitPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6549);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: AInitPropExternCall, ANode, nullable ANode) */
void nit__parser_prod___AInitPropExternCall___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6554);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AType> */
var5 = var == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
/* <var_new_child:nullable ANode> isa AType */
cltype = type_nit__AType.color;
idtype = type_nit__AType.id;
if(var_new_child == NULL) {
var6 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var6 = 0;
} else {
var6 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6555);
show_backtrace(1);
}
{
nit__parser_prod___AInitPropExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod#AInitPropExternCall#n_type= on <self:AInitPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void nit__parser_prod___AInitPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val = var_node; /* _n_type on <self:AInitPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: AInitPropExternCall, Visitor) */
void nit__parser_prod___AInitPropExternCall___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6569);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: ACastAsExternCall, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void nit__parser_prod___ACastAsExternCall___init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_from_type /* var n_from_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_to_type /* var n_to_type: nullable AType */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_from_type = p0;
var_n_dot = p1;
var_n_kwas = p2;
var_n_to_type = p3;
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6580);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_from_type].val = var_n_from_type; /* _n_from_type on <self:ACastAsExternCall> */
if (var_n_from_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6581);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_from_type,self) on <var_n_from_type:nullable AType> */
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_from_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_from_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:ACastAsExternCall> */
var = NULL;
if (var_n_dot == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_dot,var) on <var_n_dot:nullable TDot> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_dot, var_other) /* == on <var_n_dot:nullable TDot(TDot)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6584);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:ACastAsExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6585);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwas->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL8:(void)0;
}
}
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6586);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_to_type].val = var_n_to_type; /* _n_to_type on <self:ACastAsExternCall> */
if (var_n_to_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6587);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_to_type,self) on <var_n_to_type:nullable AType> */
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_to_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_to_type:nullable AType> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
