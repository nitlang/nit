#include "parser_prod.sep.0.h"
/* method parser_prod#ACrangeExpr#visit_all for (self: ACrangeExpr, Visitor) */
void parser_prod__ACrangeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : TCbra */;
val* var4 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5753);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5754);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5755);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5756);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACrangeExpr__visit_all(val* self, val* p0) {
parser_prod__ACrangeExpr__visit_all(self, p0); /* Direct call parser_prod#ACrangeExpr#visit_all on <self:Object(ACrangeExpr)>*/
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
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5769);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5770);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5771);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5772);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5773);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5774);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5775);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5776);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TObra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TObra> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOrangeExpr> */
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
var9 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL11:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#init_aorangeexpr for (self: Object, nullable TObra, nullable AExpr, nullable AExpr, nullable TObra, nullable AAnnotations) */
void VIRTUAL_parser_prod__AOrangeExpr__init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AOrangeExpr__init_aorangeexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#AOrangeExpr#init_aorangeexpr on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#replace_child for (self: AOrangeExpr, ANode, nullable ANode) */
void parser_prod__AOrangeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
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
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : TObra */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5783);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
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
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5784);
show_backtrace(1);
}
{
parser_prod__AOrangeExpr__n_obra_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_obra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5787);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5788);
show_backtrace(1);
}
{
parser_prod__AOrangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_expr= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5791);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5792);
show_backtrace(1);
}
{
parser_prod__AOrangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_expr2= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5795);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TObra> */
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
/* <var_new_child:nullable ANode> isa TObra */
cltype38 = type_parser_nodes__TObra.color;
idtype39 = type_parser_nodes__TObra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5796);
show_backtrace(1);
}
{
parser_prod__AOrangeExpr__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_cbra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype49 = type_nullable_parser_nodes__AAnnotations.color;
idtype50 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5800);
show_backtrace(1);
}
{
parser_prod__AOrangeExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_annotations= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AOrangeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AOrangeExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AOrangeExpr#replace_child on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_obra= for (self: AOrangeExpr, TObra) */
void parser_prod__AOrangeExpr__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = var_node; /* _n_obra on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__AOrangeExpr__n_obra_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_obra_61d(self, p0); /* Direct call parser_prod#AOrangeExpr#n_obra= on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr= for (self: AOrangeExpr, AExpr) */
void parser_prod__AOrangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrangeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AOrangeExpr#n_expr= on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr2= for (self: AOrangeExpr, AExpr) */
void parser_prod__AOrangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AOrangeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AOrangeExpr#n_expr2= on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_cbra= for (self: AOrangeExpr, TObra) */
void parser_prod__AOrangeExpr__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_cbra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__AOrangeExpr__n_cbra_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_cbra_61d(self, p0); /* Direct call parser_prod#AOrangeExpr#n_cbra= on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#n_annotations= for (self: AOrangeExpr, nullable AAnnotations) */
void parser_prod__AOrangeExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOrangeExpr> */
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
/* method parser_prod#AOrangeExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AOrangeExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AOrangeExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AOrangeExpr#n_annotations= on <self:Object(AOrangeExpr)>*/
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
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5834);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5835);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5836);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5837);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AOrangeExpr__visit_all(val* self, val* p0) {
parser_prod__AOrangeExpr__visit_all(self, p0); /* Direct call parser_prod#AOrangeExpr#visit_all on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#init_aarrayexpr for (self: AArrayExpr, nullable AExprs, nullable AAnnotations) */
void parser_prod__AArrayExpr__init_aarrayexpr(val* self, val* p0, val* p1) {
val* var_n_exprs /* var n_exprs: nullable AExprs */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_exprs = p0;
var_n_annotations = p1;
if (unlikely(var_n_exprs == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5847);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_n_exprs; /* _n_exprs on <self:AArrayExpr> */
if (var_n_exprs == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5848);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_exprs,self) on <var_n_exprs:nullable AExprs> */
if (unlikely(var_n_exprs == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_exprs->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_exprs:nullable AExprs> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AArrayExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#init_aarrayexpr for (self: Object, nullable AExprs, nullable AAnnotations) */
void VIRTUAL_parser_prod__AArrayExpr__init_aarrayexpr(val* self, val* p0, val* p1) {
parser_prod__AArrayExpr__init_aarrayexpr(self, p0, p1); /* Direct call parser_prod#AArrayExpr#init_aarrayexpr on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#replace_child for (self: AArrayExpr, ANode, nullable ANode) */
void parser_prod__AArrayExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AExprs */;
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
var = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5855);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype = type_parser_nodes__AExprs.color;
idtype = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5856);
show_backtrace(1);
}
{
parser_prod__AArrayExpr__n_exprs_61d(self, var_new_child); /* Direct call parser_prod#AArrayExpr#n_exprs= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5860);
show_backtrace(1);
}
{
parser_prod__AArrayExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AArrayExpr#n_annotations= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AArrayExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AArrayExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AArrayExpr#replace_child on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_exprs= for (self: AArrayExpr, AExprs) */
void parser_prod__AArrayExpr__n_exprs_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = var_node; /* _n_exprs on <self:AArrayExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_exprs= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__AArrayExpr__n_exprs_61d(val* self, val* p0) {
parser_prod__AArrayExpr__n_exprs_61d(self, p0); /* Direct call parser_prod#AArrayExpr#n_exprs= on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#n_annotations= for (self: AArrayExpr, nullable AAnnotations) */
void parser_prod__AArrayExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AArrayExpr> */
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
/* method parser_prod#AArrayExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AArrayExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AArrayExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AArrayExpr#n_annotations= on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#visit_all for (self: AArrayExpr, Visitor) */
void parser_prod__AArrayExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExprs */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5879);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AArrayExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AArrayExpr__visit_all(val* self, val* p0) {
parser_prod__AArrayExpr__visit_all(self, p0); /* Direct call parser_prod#AArrayExpr#visit_all on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#init_aselfexpr for (self: ASelfExpr, nullable TKwself, nullable AAnnotations) */
void parser_prod__ASelfExpr__init_aselfexpr(val* self, val* p0, val* p1) {
val* var_n_kwself /* var n_kwself: nullable TKwself */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwself = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5889);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5890);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwself,self) on <var_n_kwself:nullable TKwself> */
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwself->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwself:nullable TKwself> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASelfExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#init_aselfexpr for (self: Object, nullable TKwself, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASelfExpr__init_aselfexpr(val* self, val* p0, val* p1) {
parser_prod__ASelfExpr__init_aselfexpr(self, p0, p1); /* Direct call parser_prod#ASelfExpr#init_aselfexpr on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#replace_child for (self: ASelfExpr, ANode, nullable ANode) */
void parser_prod__ASelfExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
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
cltype = type_parser_nodes__TKwself.color;
idtype = type_parser_nodes__TKwself.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5898);
show_backtrace(1);
}
{
parser_prod__ASelfExpr__n_kwself_61d(self, var_new_child); /* Direct call parser_prod#ASelfExpr#n_kwself= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5902);
show_backtrace(1);
}
{
parser_prod__ASelfExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASelfExpr#n_annotations= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASelfExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASelfExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ASelfExpr#replace_child on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_kwself= for (self: ASelfExpr, nullable TKwself) */
void parser_prod__ASelfExpr__n_kwself_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwself */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = var_node; /* _n_kwself on <self:ASelfExpr> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5910);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwself> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwself> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_kwself= for (self: Object, nullable TKwself) */
void VIRTUAL_parser_prod__ASelfExpr__n_kwself_61d(val* self, val* p0) {
parser_prod__ASelfExpr__n_kwself_61d(self, p0); /* Direct call parser_prod#ASelfExpr#n_kwself= on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#n_annotations= for (self: ASelfExpr, nullable AAnnotations) */
void parser_prod__ASelfExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASelfExpr> */
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
/* method parser_prod#ASelfExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ASelfExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ASelfExpr#n_annotations= on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#visit_all for (self: ASelfExpr, Visitor) */
void parser_prod__ASelfExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwself */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASelfExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASelfExpr__visit_all(val* self, val* p0) {
parser_prod__ASelfExpr__visit_all(self, p0); /* Direct call parser_prod#ASelfExpr#visit_all on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr for (self: AImplicitSelfExpr) */
void parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr(val* self) {
RET_LABEL:;
}
/* method parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr for (self: Object) */
void VIRTUAL_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr(val* self) {
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (self) on <self:Object(AImplicitSelfExpr)> */
RET_LABEL1:(void)0;
}
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
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
{ /* Inline parser_prod#AImplicitSelfExpr#replace_child (self,p0,p1) on <self:Object(AImplicitSelfExpr)> */
var_old_child = p0;
var_new_child = p1;
RET_LABEL1:(void)0;
}
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
val* var_v /* var v: Visitor */;
{ /* Inline parser_prod#AImplicitSelfExpr#visit_all (self,p0) on <self:Object(AImplicitSelfExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#init_atrueexpr for (self: ATrueExpr, nullable TKwtrue, nullable AAnnotations) */
void parser_prod__ATrueExpr__init_atrueexpr(val* self, val* p0, val* p1) {
val* var_n_kwtrue /* var n_kwtrue: nullable TKwtrue */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwtrue = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5946);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5947);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtrue,self) on <var_n_kwtrue:nullable TKwtrue> */
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwtrue->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtrue:nullable TKwtrue> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATrueExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#init_atrueexpr for (self: Object, nullable TKwtrue, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATrueExpr__init_atrueexpr(val* self, val* p0, val* p1) {
parser_prod__ATrueExpr__init_atrueexpr(self, p0, p1); /* Direct call parser_prod#ATrueExpr#init_atrueexpr on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#replace_child for (self: ATrueExpr, ANode, nullable ANode) */
void parser_prod__ATrueExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwtrue */;
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
var = self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5954);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwtrue> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwtrue> */
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
/* <var_new_child:nullable ANode> isa TKwtrue */
cltype = type_parser_nodes__TKwtrue.color;
idtype = type_parser_nodes__TKwtrue.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtrue", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5955);
show_backtrace(1);
}
{
parser_prod__ATrueExpr__n_kwtrue_61d(self, var_new_child); /* Direct call parser_prod#ATrueExpr#n_kwtrue= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5959);
show_backtrace(1);
}
{
parser_prod__ATrueExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ATrueExpr#n_annotations= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATrueExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATrueExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ATrueExpr#replace_child on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void parser_prod__ATrueExpr__n_kwtrue_61d(val* self, val* p0) {
val* var_node /* var node: TKwtrue */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = var_node; /* _n_kwtrue on <self:ATrueExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtrue> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtrue> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: Object, TKwtrue) */
void VIRTUAL_parser_prod__ATrueExpr__n_kwtrue_61d(val* self, val* p0) {
parser_prod__ATrueExpr__n_kwtrue_61d(self, p0); /* Direct call parser_prod#ATrueExpr#n_kwtrue= on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_annotations= for (self: ATrueExpr, nullable AAnnotations) */
void parser_prod__ATrueExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATrueExpr> */
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
/* method parser_prod#ATrueExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATrueExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ATrueExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ATrueExpr#n_annotations= on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#visit_all for (self: ATrueExpr, Visitor) */
void parser_prod__ATrueExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwtrue */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5978);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATrueExpr__visit_all(val* self, val* p0) {
parser_prod__ATrueExpr__visit_all(self, p0); /* Direct call parser_prod#ATrueExpr#visit_all on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: AFalseExpr, nullable TKwfalse, nullable AAnnotations) */
void parser_prod__AFalseExpr__init_afalseexpr(val* self, val* p0, val* p1) {
val* var_n_kwfalse /* var n_kwfalse: nullable TKwfalse */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwfalse = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5988);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5989);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfalse,self) on <var_n_kwfalse:nullable TKwfalse> */
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwfalse->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfalse:nullable TKwfalse> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFalseExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: Object, nullable TKwfalse, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFalseExpr__init_afalseexpr(val* self, val* p0, val* p1) {
parser_prod__AFalseExpr__init_afalseexpr(self, p0, p1); /* Direct call parser_prod#AFalseExpr#init_afalseexpr on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: AFalseExpr, ANode, nullable ANode) */
void parser_prod__AFalseExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfalse */;
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
var = self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5996);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwfalse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwfalse> */
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
/* <var_new_child:nullable ANode> isa TKwfalse */
cltype = type_parser_nodes__TKwfalse.color;
idtype = type_parser_nodes__TKwfalse.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwfalse", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5997);
show_backtrace(1);
}
{
parser_prod__AFalseExpr__n_kwfalse_61d(self, var_new_child); /* Direct call parser_prod#AFalseExpr#n_kwfalse= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6001);
show_backtrace(1);
}
{
parser_prod__AFalseExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFalseExpr#n_annotations= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFalseExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFalseExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AFalseExpr#replace_child on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void parser_prod__AFalseExpr__n_kwfalse_61d(val* self, val* p0) {
val* var_node /* var node: TKwfalse */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = var_node; /* _n_kwfalse on <self:AFalseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwfalse> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfalse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: Object, TKwfalse) */
void VIRTUAL_parser_prod__AFalseExpr__n_kwfalse_61d(val* self, val* p0) {
parser_prod__AFalseExpr__n_kwfalse_61d(self, p0); /* Direct call parser_prod#AFalseExpr#n_kwfalse= on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
void parser_prod__AFalseExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFalseExpr> */
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
/* method parser_prod#AFalseExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFalseExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AFalseExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AFalseExpr#n_annotations= on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#visit_all for (self: AFalseExpr, Visitor) */
void parser_prod__AFalseExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6020);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFalseExpr__visit_all(val* self, val* p0) {
parser_prod__AFalseExpr__visit_all(self, p0); /* Direct call parser_prod#AFalseExpr#visit_all on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: ANullExpr, nullable TKwnull, nullable AAnnotations) */
void parser_prod__ANullExpr__init_anullexpr(val* self, val* p0, val* p1) {
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwnull = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6030);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6031);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnull->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ANullExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: Object, nullable TKwnull, nullable AAnnotations) */
void VIRTUAL_parser_prod__ANullExpr__init_anullexpr(val* self, val* p0, val* p1) {
parser_prod__ANullExpr__init_anullexpr(self, p0, p1); /* Direct call parser_prod#ANullExpr#init_anullexpr on <self:Object(ANullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: ANullExpr, ANode, nullable ANode) */
void parser_prod__ANullExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnull */;
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
var = self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6038);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwnull> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwnull> */
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
/* <var_new_child:nullable ANode> isa TKwnull */
cltype = type_parser_nodes__TKwnull.color;
idtype = type_parser_nodes__TKwnull.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnull", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6039);
show_backtrace(1);
}
{
parser_prod__ANullExpr__n_kwnull_61d(self, var_new_child); /* Direct call parser_prod#ANullExpr#n_kwnull= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6043);
show_backtrace(1);
}
{
parser_prod__ANullExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ANullExpr#n_annotations= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANullExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANullExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ANullExpr#replace_child on <self:Object(ANullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void parser_prod__ANullExpr__n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:ANullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: Object, TKwnull) */
void VIRTUAL_parser_prod__ANullExpr__n_kwnull_61d(val* self, val* p0) {
parser_prod__ANullExpr__n_kwnull_61d(self, p0); /* Direct call parser_prod#ANullExpr#n_kwnull= on <self:Object(ANullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_annotations= for (self: ANullExpr, nullable AAnnotations) */
void parser_prod__ANullExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ANullExpr> */
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
/* method parser_prod#ANullExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ANullExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ANullExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ANullExpr#n_annotations= on <self:Object(ANullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANullExpr#visit_all for (self: ANullExpr, Visitor) */
void parser_prod__ANullExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6062);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANullExpr__visit_all(val* self, val* p0) {
parser_prod__ANullExpr__visit_all(self, p0); /* Direct call parser_prod#ANullExpr#visit_all on <self:Object(ANullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#init_adecintexpr for (self: ADecIntExpr, nullable TNumber, nullable AAnnotations) */
void parser_prod__ADecIntExpr__init_adecintexpr(val* self, val* p0, val* p1) {
val* var_n_number /* var n_number: nullable TNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6072);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val = var_n_number; /* _n_number on <self:ADecIntExpr> */
if (var_n_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6073);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_number,self) on <var_n_number:nullable TNumber> */
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_number->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_number:nullable TNumber> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ADecIntExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#init_adecintexpr for (self: Object, nullable TNumber, nullable AAnnotations) */
void VIRTUAL_parser_prod__ADecIntExpr__init_adecintexpr(val* self, val* p0, val* p1) {
parser_prod__ADecIntExpr__init_adecintexpr(self, p0, p1); /* Direct call parser_prod#ADecIntExpr#init_adecintexpr on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#replace_child for (self: ADecIntExpr, ANode, nullable ANode) */
void parser_prod__ADecIntExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNumber */;
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
var = self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6080);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TNumber> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TNumber> */
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
/* <var_new_child:nullable ANode> isa TNumber */
cltype = type_parser_nodes__TNumber.color;
idtype = type_parser_nodes__TNumber.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6081);
show_backtrace(1);
}
{
parser_prod__ADecIntExpr__n_number_61d(self, var_new_child); /* Direct call parser_prod#ADecIntExpr#n_number= on <self:ADecIntExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecIntExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6085);
show_backtrace(1);
}
{
parser_prod__ADecIntExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ADecIntExpr#n_annotations= on <self:ADecIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADecIntExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADecIntExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ADecIntExpr#replace_child on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_number= for (self: ADecIntExpr, TNumber) */
void parser_prod__ADecIntExpr__n_number_61d(val* self, val* p0) {
val* var_node /* var node: TNumber */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val = var_node; /* _n_number on <self:ADecIntExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TNumber> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TNumber> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_number= for (self: Object, TNumber) */
void VIRTUAL_parser_prod__ADecIntExpr__n_number_61d(val* self, val* p0) {
parser_prod__ADecIntExpr__n_number_61d(self, p0); /* Direct call parser_prod#ADecIntExpr#n_number= on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#n_annotations= for (self: ADecIntExpr, nullable AAnnotations) */
void parser_prod__ADecIntExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ADecIntExpr> */
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
/* method parser_prod#ADecIntExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ADecIntExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ADecIntExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ADecIntExpr#n_annotations= on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#visit_all for (self: ADecIntExpr, Visitor) */
void parser_prod__ADecIntExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6104);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecIntExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADecIntExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADecIntExpr__visit_all(val* self, val* p0) {
parser_prod__ADecIntExpr__visit_all(self, p0); /* Direct call parser_prod#ADecIntExpr#visit_all on <self:Object(ADecIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#init_ahexintexpr for (self: AHexIntExpr, nullable THexNumber, nullable AAnnotations) */
void parser_prod__AHexIntExpr__init_ahexintexpr(val* self, val* p0, val* p1) {
val* var_n_hex_number /* var n_hex_number: nullable THexNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_hex_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6114);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val = var_n_hex_number; /* _n_hex_number on <self:AHexIntExpr> */
if (var_n_hex_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6115);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_hex_number,self) on <var_n_hex_number:nullable THexNumber> */
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_hex_number->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_hex_number:nullable THexNumber> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AHexIntExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#init_ahexintexpr for (self: Object, nullable THexNumber, nullable AAnnotations) */
void VIRTUAL_parser_prod__AHexIntExpr__init_ahexintexpr(val* self, val* p0, val* p1) {
parser_prod__AHexIntExpr__init_ahexintexpr(self, p0, p1); /* Direct call parser_prod#AHexIntExpr#init_ahexintexpr on <self:Object(AHexIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#replace_child for (self: AHexIntExpr, ANode, nullable ANode) */
void parser_prod__AHexIntExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : THexNumber */;
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
var = self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6122);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:THexNumber> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:THexNumber> */
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
/* <var_new_child:nullable ANode> isa THexNumber */
cltype = type_parser_nodes__THexNumber.color;
idtype = type_parser_nodes__THexNumber.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "THexNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6123);
show_backtrace(1);
}
{
parser_prod__AHexIntExpr__n_hex_number_61d(self, var_new_child); /* Direct call parser_prod#AHexIntExpr#n_hex_number= on <self:AHexIntExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexIntExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6127);
show_backtrace(1);
}
{
parser_prod__AHexIntExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AHexIntExpr#n_annotations= on <self:AHexIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AHexIntExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AHexIntExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AHexIntExpr#replace_child on <self:Object(AHexIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_hex_number= for (self: AHexIntExpr, THexNumber) */
void parser_prod__AHexIntExpr__n_hex_number_61d(val* self, val* p0) {
val* var_node /* var node: THexNumber */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val = var_node; /* _n_hex_number on <self:AHexIntExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:THexNumber> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:THexNumber> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_hex_number= for (self: Object, THexNumber) */
void VIRTUAL_parser_prod__AHexIntExpr__n_hex_number_61d(val* self, val* p0) {
parser_prod__AHexIntExpr__n_hex_number_61d(self, p0); /* Direct call parser_prod#AHexIntExpr#n_hex_number= on <self:Object(AHexIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#n_annotations= for (self: AHexIntExpr, nullable AAnnotations) */
void parser_prod__AHexIntExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AHexIntExpr> */
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
/* method parser_prod#AHexIntExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AHexIntExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AHexIntExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AHexIntExpr#n_annotations= on <self:Object(AHexIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#visit_all for (self: AHexIntExpr, Visitor) */
void parser_prod__AHexIntExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : THexNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6146);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexIntExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AHexIntExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AHexIntExpr__visit_all(val* self, val* p0) {
parser_prod__AHexIntExpr__visit_all(self, p0); /* Direct call parser_prod#AHexIntExpr#visit_all on <self:Object(AHexIntExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void parser_prod__AFloatExpr__init_afloatexpr(val* self, val* p0, val* p1) {
val* var_n_float /* var n_float: nullable TFloat */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_float = p0;
var_n_annotations = p1;
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6156);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6157);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_float,self) on <var_n_float:nullable TFloat> */
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_float->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_float:nullable TFloat> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFloatExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: Object, nullable TFloat, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFloatExpr__init_afloatexpr(val* self, val* p0, val* p1) {
parser_prod__AFloatExpr__init_afloatexpr(self, p0, p1); /* Direct call parser_prod#AFloatExpr#init_afloatexpr on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: AFloatExpr, ANode, nullable ANode) */
void parser_prod__AFloatExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TFloat */;
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
var = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6164);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TFloat> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TFloat> */
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
/* <var_new_child:nullable ANode> isa TFloat */
cltype = type_parser_nodes__TFloat.color;
idtype = type_parser_nodes__TFloat.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TFloat", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6165);
show_backtrace(1);
}
{
parser_prod__AFloatExpr__n_float_61d(self, var_new_child); /* Direct call parser_prod#AFloatExpr#n_float= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6169);
show_backtrace(1);
}
{
parser_prod__AFloatExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFloatExpr#n_annotations= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFloatExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFloatExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AFloatExpr#replace_child on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void parser_prod__AFloatExpr__n_float_61d(val* self, val* p0) {
val* var_node /* var node: TFloat */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = var_node; /* _n_float on <self:AFloatExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TFloat> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TFloat> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: Object, TFloat) */
void VIRTUAL_parser_prod__AFloatExpr__n_float_61d(val* self, val* p0) {
parser_prod__AFloatExpr__n_float_61d(self, p0); /* Direct call parser_prod#AFloatExpr#n_float= on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_annotations= for (self: AFloatExpr, nullable AAnnotations) */
void parser_prod__AFloatExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFloatExpr> */
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
/* method parser_prod#AFloatExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFloatExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AFloatExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AFloatExpr#n_annotations= on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#visit_all for (self: AFloatExpr, Visitor) */
void parser_prod__AFloatExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6188);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFloatExpr__visit_all(val* self, val* p0) {
parser_prod__AFloatExpr__visit_all(self, p0); /* Direct call parser_prod#AFloatExpr#visit_all on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: ACharExpr, nullable TChar, nullable AAnnotations) */
void parser_prod__ACharExpr__init_acharexpr(val* self, val* p0, val* p1) {
val* var_n_char /* var n_char: nullable TChar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_char = p0;
var_n_annotations = p1;
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6198);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6199);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_char,self) on <var_n_char:nullable TChar> */
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_char->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_char:nullable TChar> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACharExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: Object, nullable TChar, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACharExpr__init_acharexpr(val* self, val* p0, val* p1) {
parser_prod__ACharExpr__init_acharexpr(self, p0, p1); /* Direct call parser_prod#ACharExpr#init_acharexpr on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: ACharExpr, ANode, nullable ANode) */
void parser_prod__ACharExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TChar */;
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
var = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6206);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TChar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TChar> */
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
/* <var_new_child:nullable ANode> isa TChar */
cltype = type_parser_nodes__TChar.color;
idtype = type_parser_nodes__TChar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TChar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6207);
show_backtrace(1);
}
{
parser_prod__ACharExpr__n_char_61d(self, var_new_child); /* Direct call parser_prod#ACharExpr#n_char= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6211);
show_backtrace(1);
}
{
parser_prod__ACharExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ACharExpr#n_annotations= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACharExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACharExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ACharExpr#replace_child on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void parser_prod__ACharExpr__n_char_61d(val* self, val* p0) {
val* var_node /* var node: TChar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = var_node; /* _n_char on <self:ACharExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TChar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TChar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: Object, TChar) */
void VIRTUAL_parser_prod__ACharExpr__n_char_61d(val* self, val* p0) {
parser_prod__ACharExpr__n_char_61d(self, p0); /* Direct call parser_prod#ACharExpr#n_char= on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_annotations= for (self: ACharExpr, nullable AAnnotations) */
void parser_prod__ACharExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACharExpr> */
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
/* method parser_prod#ACharExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACharExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ACharExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ACharExpr#n_annotations= on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACharExpr#visit_all for (self: ACharExpr, Visitor) */
void parser_prod__ACharExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6230);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACharExpr__visit_all(val* self, val* p0) {
parser_prod__ACharExpr__visit_all(self, p0); /* Direct call parser_prod#ACharExpr#visit_all on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: AStringExpr, nullable TString, nullable AAnnotations) */
void parser_prod__AStringExpr__init_astringexpr(val* self, val* p0, val* p1) {
val* var_n_string /* var n_string: nullable TString */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_string = p0;
var_n_annotations = p1;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6240);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6241);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_string->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TString> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStringExpr> */
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
var6 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: Object, nullable TString, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStringExpr__init_astringexpr(val* self, val* p0, val* p1) {
parser_prod__AStringExpr__init_astringexpr(self, p0, p1); /* Direct call parser_prod#AStringExpr#init_astringexpr on <self:Object(AStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: AStringExpr, ANode, nullable ANode) */
void parser_prod__AStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6248);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TString */
cltype = type_parser_nodes__TString.color;
idtype = type_parser_nodes__TString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6249);
show_backtrace(1);
}
{
parser_prod__AStringExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AStringExpr#n_string= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
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
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6253);
show_backtrace(1);
}
{
parser_prod__AStringExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStringExpr#n_annotations= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStringExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AStringExpr#replace_child on <self:Object(AStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: AStringExpr, Token) */
void parser_prod__AStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AStringExpr__n_string_61d(self, p0); /* Direct call parser_prod#AStringExpr#n_string= on <self:Object(AStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_annotations= for (self: AStringExpr, nullable AAnnotations) */
void parser_prod__AStringExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStringExpr> */
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
/* method parser_prod#AStringExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStringExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AStringExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AStringExpr#n_annotations= on <self:Object(AStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStringExpr#visit_all for (self: AStringExpr, Visitor) */
void parser_prod__AStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6272);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStringExpr__visit_all(val* self, val* p0) {
parser_prod__AStringExpr__visit_all(self, p0); /* Direct call parser_prod#AStringExpr#visit_all on <self:Object(AStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: AStartStringExpr, nullable TStartString) */
void parser_prod__AStartStringExpr__init_astartstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TStartString */;
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6281);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6282);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TStartString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_string->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TStartString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: Object, nullable TStartString) */
void VIRTUAL_parser_prod__AStartStringExpr__init_astartstringexpr(val* self, val* p0) {
parser_prod__AStartStringExpr__init_astartstringexpr(self, p0); /* Direct call parser_prod#AStartStringExpr#init_astartstringexpr on <self:Object(AStartStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: AStartStringExpr, ANode, nullable ANode) */
void parser_prod__AStartStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6287);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TStartString */
cltype = type_parser_nodes__TStartString.color;
idtype = type_parser_nodes__TStartString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStartString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6288);
show_backtrace(1);
}
{
parser_prod__AStartStringExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AStartStringExpr#n_string= on <self:AStartStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStartStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStartStringExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AStartStringExpr#replace_child on <self:Object(AStartStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: AStartStringExpr, Token) */
void parser_prod__AStartStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStartStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AStartStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AStartStringExpr__n_string_61d(self, p0); /* Direct call parser_prod#AStartStringExpr#n_string= on <self:Object(AStartStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: AStartStringExpr, Visitor) */
void parser_prod__AStartStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6302);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStartStringExpr__visit_all(val* self, val* p0) {
parser_prod__AStartStringExpr__visit_all(self, p0); /* Direct call parser_prod#AStartStringExpr#visit_all on <self:Object(AStartStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void parser_prod__AMidStringExpr__init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6310);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6311);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TMidString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_string->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TMidString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: Object, nullable TMidString) */
void VIRTUAL_parser_prod__AMidStringExpr__init_amidstringexpr(val* self, val* p0) {
parser_prod__AMidStringExpr__init_amidstringexpr(self, p0); /* Direct call parser_prod#AMidStringExpr#init_amidstringexpr on <self:Object(AMidStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: AMidStringExpr, ANode, nullable ANode) */
void parser_prod__AMidStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6316);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TMidString */
cltype = type_parser_nodes__TMidString.color;
idtype = type_parser_nodes__TMidString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMidString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6317);
show_backtrace(1);
}
{
parser_prod__AMidStringExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AMidStringExpr#n_string= on <self:AMidStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMidStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMidStringExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AMidStringExpr#replace_child on <self:Object(AMidStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: AMidStringExpr, Token) */
void parser_prod__AMidStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AMidStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AMidStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AMidStringExpr__n_string_61d(self, p0); /* Direct call parser_prod#AMidStringExpr#n_string= on <self:Object(AMidStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: AMidStringExpr, Visitor) */
void parser_prod__AMidStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6331);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMidStringExpr__visit_all(val* self, val* p0) {
parser_prod__AMidStringExpr__visit_all(self, p0); /* Direct call parser_prod#AMidStringExpr#visit_all on <self:Object(AMidStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void parser_prod__AEndStringExpr__init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6339);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6340);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TEndString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_string->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TEndString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: Object, nullable TEndString) */
void VIRTUAL_parser_prod__AEndStringExpr__init_aendstringexpr(val* self, val* p0) {
parser_prod__AEndStringExpr__init_aendstringexpr(self, p0); /* Direct call parser_prod#AEndStringExpr#init_aendstringexpr on <self:Object(AEndStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: AEndStringExpr, ANode, nullable ANode) */
void parser_prod__AEndStringExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Token */;
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
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6345);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TEndString */
cltype = type_parser_nodes__TEndString.color;
idtype = type_parser_nodes__TEndString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEndString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6346);
show_backtrace(1);
}
{
parser_prod__AEndStringExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AEndStringExpr#n_string= on <self:AEndStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEndStringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEndStringExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AEndStringExpr#replace_child on <self:Object(AEndStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: AEndStringExpr, Token) */
void parser_prod__AEndStringExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AEndStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_prod__AEndStringExpr__n_string_61d(val* self, val* p0) {
parser_prod__AEndStringExpr__n_string_61d(self, p0); /* Direct call parser_prod#AEndStringExpr#n_string= on <self:Object(AEndStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: AEndStringExpr, Visitor) */
void parser_prod__AEndStringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6360);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEndStringExpr__visit_all(val* self, val* p0) {
parser_prod__AEndStringExpr__visit_all(self, p0); /* Direct call parser_prod#AEndStringExpr#visit_all on <self:Object(AEndStringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: ASuperstringExpr, Collection[Object], nullable AAnnotations) */
void parser_prod__ASuperstringExpr__init_asuperstringexpr(val* self, val* p0, val* p1) {
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
short int var9 /* : Bool */;
var_n_exprs = p0;
var_n_annotations = p1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
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
var8 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: Object, Collection[Object], nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperstringExpr__init_asuperstringexpr(val* self, val* p0, val* p1) {
parser_prod__ASuperstringExpr__init_asuperstringexpr(self, p0, p1); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <self:Object(ASuperstringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: ASuperstringExpr, ANode, nullable ANode) */
void parser_prod__ASuperstringExpr__replace_child(val* self, val* p0, val* p1) {
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
var2 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
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
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
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
cltype = type_nullable_parser_nodes__AAnnotations.color;
idtype = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6378);
show_backtrace(1);
}
{
parser_prod__ASuperstringExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASuperstringExpr#n_annotations= on <self:ASuperstringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperstringExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperstringExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ASuperstringExpr#replace_child on <self:Object(ASuperstringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: ASuperstringExpr, nullable AAnnotations) */
void parser_prod__ASuperstringExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperstringExpr> */
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
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperstringExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ASuperstringExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ASuperstringExpr#n_annotations= on <self:Object(ASuperstringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#visit_all for (self: ASuperstringExpr, Visitor) */
void parser_prod__ASuperstringExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperstringExpr__visit_all(val* self, val* p0) {
parser_prod__ASuperstringExpr__visit_all(self, p0); /* Direct call parser_prod#ASuperstringExpr#visit_all on <self:Object(ASuperstringExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: AParExpr, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void parser_prod__AParExpr__init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var9 /* : Bool */;
var_n_opar = p0;
var_n_expr = p1;
var_n_cpar = p2;
var_n_annotations = p3;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6404);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6405);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6406);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6407);
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
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6408);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6409);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParExpr> */
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
var8 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: Object, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParExpr__init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AParExpr__init_aparexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#AParExpr#init_aparexpr on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: AParExpr, ANode, nullable ANode) */
void parser_prod__AParExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
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
val* var19 /* : TCpar */;
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
var = self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6416);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TOpar> */
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
/* <var_new_child:nullable ANode> isa TOpar */
cltype = type_parser_nodes__TOpar.color;
idtype = type_parser_nodes__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6417);
show_backtrace(1);
}
{
parser_prod__AParExpr__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_opar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6420);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6421);
show_backtrace(1);
}
{
parser_prod__AParExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_expr= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6424);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TCpar> */
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
/* <var_new_child:nullable ANode> isa TCpar */
cltype27 = type_parser_nodes__TCpar.color;
idtype28 = type_parser_nodes__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCpar", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6425);
show_backtrace(1);
}
{
parser_prod__AParExpr__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_cpar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6429);
show_backtrace(1);
}
{
parser_prod__AParExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_annotations= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AParExpr#replace_child on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void parser_prod__AParExpr__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = var_node; /* _n_opar on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_prod__AParExpr__n_opar_61d(val* self, val* p0) {
parser_prod__AParExpr__n_opar_61d(self, p0); /* Direct call parser_prod#AParExpr#n_opar= on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: AParExpr, AExpr) */
void parser_prod__AParExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = var_node; /* _n_expr on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AParExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AParExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AParExpr#n_expr= on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void parser_prod__AParExpr__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = var_node; /* _n_cpar on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_prod__AParExpr__n_cpar_61d(val* self, val* p0) {
parser_prod__AParExpr__n_cpar_61d(self, p0); /* Direct call parser_prod#AParExpr#n_cpar= on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_annotations= for (self: AParExpr, nullable AAnnotations) */
void parser_prod__AParExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParExpr> */
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
/* method parser_prod#AParExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AParExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AParExpr#n_annotations= on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AParExpr#visit_all for (self: AParExpr, Visitor) */
void parser_prod__AParExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : AExpr */;
val* var2 /* : TCpar */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6458);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6459);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6460);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParExpr__visit_all(val* self, val* p0) {
parser_prod__AParExpr__visit_all(self, p0); /* Direct call parser_prod#AParExpr#visit_all on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: AAsCastExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void parser_prod__AAsCastExpr__init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
short int var8 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_type = p3;
var_n_cpar = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6473);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6474);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6475);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6476);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwas->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
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
var7 = ((short int (*)(val*, val*))(var_n_opar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL9:(void)0;
}
}
} else {
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6479);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6480);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
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
var16 = ((short int (*)(val*, val*))(var_n_cpar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: Object, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void VIRTUAL_parser_prod__AAsCastExpr__init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AAsCastExpr__init_aascastexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#AAsCastExpr#init_aascastexpr on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: AAsCastExpr, ANode, nullable ANode) */
void parser_prod__AAsCastExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TKwas */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable TOpar */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable TCpar */;
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
var = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6487);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6488);
show_backtrace(1);
}
{
parser_prod__AAsCastExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_expr= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6491);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwas> */
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
/* <var_new_child:nullable ANode> isa TKwas */
cltype16 = type_parser_nodes__TKwas.color;
idtype17 = type_parser_nodes__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6492);
show_backtrace(1);
}
{
parser_prod__AAsCastExpr__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_kwas= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable TOpar(TOpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype27 = type_nullable_parser_nodes__TOpar.color;
idtype28 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6496);
show_backtrace(1);
}
{
parser_prod__AAsCastExpr__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_opar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6499);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype38 = type_parser_nodes__AType.color;
idtype39 = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6500);
show_backtrace(1);
}
{
parser_prod__AAsCastExpr__n_type_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_type= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable TCpar(TCpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype49 = type_nullable_parser_nodes__TCpar.color;
idtype50 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6504);
show_backtrace(1);
}
{
parser_prod__AAsCastExpr__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_cpar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsCastExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsCastExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAsCastExpr#replace_child on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: AAsCastExpr, AExpr) */
void parser_prod__AAsCastExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = var_node; /* _n_expr on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAsCastExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAsCastExpr#n_expr= on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: AAsCastExpr, TKwas) */
void parser_prod__AAsCastExpr__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = var_node; /* _n_kwas on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsCastExpr__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_kwas_61d(self, p0); /* Direct call parser_prod#AAsCastExpr#n_kwas= on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_opar= for (self: AAsCastExpr, nullable TOpar) */
void parser_prod__AAsCastExpr__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var_node; /* _n_opar on <self:AAsCastExpr> */
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
/* method parser_prod#AAsCastExpr#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__AAsCastExpr__n_opar_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_opar_61d(self, p0); /* Direct call parser_prod#AAsCastExpr#n_opar= on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void parser_prod__AAsCastExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = var_node; /* _n_type on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AAsCastExpr__n_type_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_type_61d(self, p0); /* Direct call parser_prod#AAsCastExpr#n_type= on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_cpar= for (self: AAsCastExpr, nullable TCpar) */
void parser_prod__AAsCastExpr__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var_node; /* _n_cpar on <self:AAsCastExpr> */
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
/* method parser_prod#AAsCastExpr#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__AAsCastExpr__n_cpar_61d(val* self, val* p0) {
parser_prod__AAsCastExpr__n_cpar_61d(self, p0); /* Direct call parser_prod#AAsCastExpr#n_cpar= on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: AAsCastExpr, Visitor) */
void parser_prod__AAsCastExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : AType */;
val* var4 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6538);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6539);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6541);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsCastExpr__visit_all(val* self, val* p0) {
parser_prod__AAsCastExpr__visit_all(self, p0); /* Direct call parser_prod#AAsCastExpr#visit_all on <self:Object(AAsCastExpr)>*/
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
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_kwnot = p3;
var_n_kwnull = p4;
var_n_cpar = p5;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6555);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6556);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6557);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6558);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwas->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
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
var7 = ((short int (*)(val*, val*))(var_n_opar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL9:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6561);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6562);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL10:(void)0;
}
}
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6563);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6564);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnull->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
var12 = NULL;
if (var_n_cpar == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var12) on <var_n_cpar:nullable TCpar> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_n_cpar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL19:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#init_aasnotnullexpr for (self: Object, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
void VIRTUAL_parser_prod__AAsNotnullExpr__init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AAsNotnullExpr__init_aasnotnullexpr(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: AAsNotnullExpr, ANode, nullable ANode) */
void parser_prod__AAsNotnullExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TKwas */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable TOpar */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : TKwnot */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : TKwnull */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable TCpar */;
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
var = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6571);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6572);
show_backtrace(1);
}
{
parser_prod__AAsNotnullExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_expr= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6575);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwas> */
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
/* <var_new_child:nullable ANode> isa TKwas */
cltype16 = type_parser_nodes__TKwas.color;
idtype17 = type_parser_nodes__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6576);
show_backtrace(1);
}
{
parser_prod__AAsNotnullExpr__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwas= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable TOpar(TOpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype27 = type_nullable_parser_nodes__TOpar.color;
idtype28 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6580);
show_backtrace(1);
}
{
parser_prod__AAsNotnullExpr__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_opar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6583);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwnot> */
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
/* <var_new_child:nullable ANode> isa TKwnot */
cltype38 = type_parser_nodes__TKwnot.color;
idtype39 = type_parser_nodes__TKwnot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6584);
show_backtrace(1);
}
{
parser_prod__AAsNotnullExpr__n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwnot= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6587);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:TKwnull> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:TKwnull> */
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
/* <var_new_child:nullable ANode> isa TKwnull */
cltype49 = type_parser_nodes__TKwnull.color;
idtype50 = type_parser_nodes__TKwnull.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnull", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6588);
show_backtrace(1);
}
{
parser_prod__AAsNotnullExpr__n_kwnull_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwnull= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable TCpar(TCpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype60 = type_nullable_parser_nodes__TCpar.color;
idtype61 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6592);
show_backtrace(1);
}
{
parser_prod__AAsNotnullExpr__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_cpar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsNotnullExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsNotnullExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAsNotnullExpr#replace_child on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: AAsNotnullExpr, AExpr) */
void parser_prod__AAsNotnullExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = var_node; /* _n_expr on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAsNotnullExpr#n_expr= on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: AAsNotnullExpr, TKwas) */
void parser_prod__AAsNotnullExpr__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_kwas_61d(self, p0); /* Direct call parser_prod#AAsNotnullExpr#n_kwas= on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: AAsNotnullExpr, nullable TOpar) */
void parser_prod__AAsNotnullExpr__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var_node; /* _n_opar on <self:AAsNotnullExpr> */
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
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_opar_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_opar_61d(self, p0); /* Direct call parser_prod#AAsNotnullExpr#n_opar= on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void parser_prod__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_kwnot_61d(self, p0); /* Direct call parser_prod#AAsNotnullExpr#n_kwnot= on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void parser_prod__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: Object, TKwnull) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_kwnull_61d(self, p0); /* Direct call parser_prod#AAsNotnullExpr#n_kwnull= on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: AAsNotnullExpr, nullable TCpar) */
void parser_prod__AAsNotnullExpr__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var_node; /* _n_cpar on <self:AAsNotnullExpr> */
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
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__AAsNotnullExpr__n_cpar_61d(val* self, val* p0) {
parser_prod__AAsNotnullExpr__n_cpar_61d(self, p0); /* Direct call parser_prod#AAsNotnullExpr#n_cpar= on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: AAsNotnullExpr, Visitor) */
void parser_prod__AAsNotnullExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : TKwnot */;
val* var4 /* : TKwnull */;
val* var5 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6631);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6632);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6634);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6635);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsNotnullExpr__visit_all(val* self, val* p0) {
parser_prod__AAsNotnullExpr__visit_all(self, p0); /* Direct call parser_prod#AAsNotnullExpr#visit_all on <self:Object(AAsNotnullExpr)>*/
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
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6646);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6647);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwisset,self) on <var_n_kwisset:nullable TKwisset> */
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwisset->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwisset:nullable TKwisset> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6648);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6649);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6650);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6651);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#init_aissetattrexpr for (self: Object, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void VIRTUAL_parser_prod__AIssetAttrExpr__init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AIssetAttrExpr__init_aissetattrexpr(self, p0, p1, p2); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <self:Object(AIssetAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: AIssetAttrExpr, ANode, nullable ANode) */
void parser_prod__AIssetAttrExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwisset */;
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
val* var19 /* : TAttrid */;
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
var = self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6656);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwisset> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwisset> */
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
/* <var_new_child:nullable ANode> isa TKwisset */
cltype = type_parser_nodes__TKwisset.color;
idtype = type_parser_nodes__TKwisset.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwisset", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6657);
show_backtrace(1);
}
{
parser_prod__AIssetAttrExpr__n_kwisset_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_kwisset= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6660);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6661);
show_backtrace(1);
}
{
parser_prod__AIssetAttrExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_expr= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6664);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype27 = type_parser_nodes__TAttrid.color;
idtype28 = type_parser_nodes__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6665);
show_backtrace(1);
}
{
parser_prod__AIssetAttrExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_id= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIssetAttrExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIssetAttrExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AIssetAttrExpr#replace_child on <self:Object(AIssetAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void parser_prod__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0) {
val* var_node /* var node: TKwisset */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = var_node; /* _n_kwisset on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwisset> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwisset> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: Object, TKwisset) */
void VIRTUAL_parser_prod__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0) {
parser_prod__AIssetAttrExpr__n_kwisset_61d(self, p0); /* Direct call parser_prod#AIssetAttrExpr#n_kwisset= on <self:Object(AIssetAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: AIssetAttrExpr, AExpr) */
void parser_prod__AIssetAttrExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIssetAttrExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIssetAttrExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AIssetAttrExpr#n_expr= on <self:Object(AIssetAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: AIssetAttrExpr, TAttrid) */
void parser_prod__AIssetAttrExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AIssetAttrExpr__n_id_61d(val* self, val* p0) {
parser_prod__AIssetAttrExpr__n_id_61d(self, p0); /* Direct call parser_prod#AIssetAttrExpr#n_id= on <self:Object(AIssetAttrExpr)>*/
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
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6689);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6690);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6691);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIssetAttrExpr__visit_all(val* self, val* p0) {
parser_prod__AIssetAttrExpr__visit_all(self, p0); /* Direct call parser_prod#AIssetAttrExpr#visit_all on <self:Object(AIssetAttrExpr)>*/
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
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6702);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6703);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdebug,self) on <var_n_kwdebug:nullable TKwdebug> */
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwdebug->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdebug:nullable TKwdebug> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6704);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6705);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwtype->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6706);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6707);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6708);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6709);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#init_adebugtypeexpr for (self: Object, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void VIRTUAL_parser_prod__ADebugTypeExpr__init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ADebugTypeExpr__init_adebugtypeexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#ADebugTypeExpr#init_adebugtypeexpr on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: ADebugTypeExpr, ANode, nullable ANode) */
void parser_prod__ADebugTypeExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdebug */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TKwtype */;
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
val* var30 /* : AType */;
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
var = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6714);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwdebug> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwdebug> */
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
/* <var_new_child:nullable ANode> isa TKwdebug */
cltype = type_parser_nodes__TKwdebug.color;
idtype = type_parser_nodes__TKwdebug.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdebug", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6715);
show_backtrace(1);
}
{
parser_prod__ADebugTypeExpr__n_kwdebug_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_kwdebug= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6718);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwtype> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwtype> */
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
/* <var_new_child:nullable ANode> isa TKwtype */
cltype16 = type_parser_nodes__TKwtype.color;
idtype17 = type_parser_nodes__TKwtype.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtype", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6719);
show_backtrace(1);
}
{
parser_prod__ADebugTypeExpr__n_kwtype_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_kwtype= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6722);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6723);
show_backtrace(1);
}
{
parser_prod__ADebugTypeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_expr= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6726);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype38 = type_parser_nodes__AType.color;
idtype39 = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6727);
show_backtrace(1);
}
{
parser_prod__ADebugTypeExpr__n_type_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_type= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADebugTypeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADebugTypeExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ADebugTypeExpr#replace_child on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void parser_prod__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0) {
val* var_node /* var node: TKwdebug */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_node; /* _n_kwdebug on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdebug> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdebug> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: Object, TKwdebug) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_kwdebug_61d(self, p0); /* Direct call parser_prod#ADebugTypeExpr#n_kwdebug= on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void parser_prod__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = var_node; /* _n_kwtype on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: Object, TKwtype) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_kwtype_61d(self, p0); /* Direct call parser_prod#ADebugTypeExpr#n_kwtype= on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void parser_prod__ADebugTypeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = var_node; /* _n_expr on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ADebugTypeExpr#n_expr= on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void parser_prod__ADebugTypeExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = var_node; /* _n_type on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ADebugTypeExpr__n_type_61d(val* self, val* p0) {
parser_prod__ADebugTypeExpr__n_type_61d(self, p0); /* Direct call parser_prod#ADebugTypeExpr#n_type= on <self:Object(ADebugTypeExpr)>*/
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
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6756);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6757);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6758);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6759);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADebugTypeExpr__visit_all(val* self, val* p0) {
parser_prod__ADebugTypeExpr__visit_all(self, p0); /* Direct call parser_prod#ADebugTypeExpr#visit_all on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#init_avarargexpr for (self: AVarargExpr, nullable AExpr, nullable TDotdotdot) */
void parser_prod__AVarargExpr__init_avarargexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
var_n_expr = p0;
var_n_dotdotdot = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6768);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVarargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6769);
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
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6770);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarargExpr___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AVarargExpr> */
if (var_n_dotdotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6771);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot> */
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_dotdotdot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#init_avarargexpr for (self: Object, nullable AExpr, nullable TDotdotdot) */
void VIRTUAL_parser_prod__AVarargExpr__init_avarargexpr(val* self, val* p0, val* p1) {
parser_prod__AVarargExpr__init_avarargexpr(self, p0, p1); /* Direct call parser_prod#AVarargExpr#init_avarargexpr on <self:Object(AVarargExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#replace_child for (self: AVarargExpr, ANode, nullable ANode) */
void parser_prod__AVarargExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TDotdotdot */;
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
var = self->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6776);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6777);
show_backtrace(1);
}
{
parser_prod__AVarargExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AVarargExpr#n_expr= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6780);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TDotdotdot> */
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
/* <var_new_child:nullable ANode> isa TDotdotdot */
cltype16 = type_parser_nodes__TDotdotdot.color;
idtype17 = type_parser_nodes__TDotdotdot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TDotdotdot", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6781);
show_backtrace(1);
}
{
parser_prod__AVarargExpr__n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod#AVarargExpr#n_dotdotdot= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarargExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarargExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AVarargExpr#replace_child on <self:Object(AVarargExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_expr= for (self: AVarargExpr, AExpr) */
void parser_prod__AVarargExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val = var_node; /* _n_expr on <self:AVarargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AVarargExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AVarargExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AVarargExpr#n_expr= on <self:Object(AVarargExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_dotdotdot= for (self: AVarargExpr, TDotdotdot) */
void parser_prod__AVarargExpr__n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdotdot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarargExpr___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AVarargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TDotdotdot> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdotdot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_dotdotdot= for (self: Object, TDotdotdot) */
void VIRTUAL_parser_prod__AVarargExpr__n_dotdotdot_61d(val* self, val* p0) {
parser_prod__AVarargExpr__n_dotdotdot_61d(self, p0); /* Direct call parser_prod#AVarargExpr#n_dotdotdot= on <self:Object(AVarargExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#visit_all for (self: AVarargExpr, Visitor) */
void parser_prod__AVarargExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TDotdotdot */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6800);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6801);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarargExpr__visit_all(val* self, val* p0) {
parser_prod__AVarargExpr__visit_all(self, p0); /* Direct call parser_prod#AVarargExpr#visit_all on <self:Object(AVarargExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: AListExprs, Collection[Object]) */
void parser_prod__AListExprs__init_alistexprs(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_n_exprs = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__AListExprs__init_alistexprs(val* self, val* p0) {
parser_prod__AListExprs__init_alistexprs(self, p0); /* Direct call parser_prod#AListExprs#init_alistexprs on <self:Object(AListExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: AListExprs, ANode, nullable ANode) */
void parser_prod__AListExprs__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
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
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AListExprs__replace_child(val* self, val* p0, val* p1) {
parser_prod__AListExprs__replace_child(self, p0, p1); /* Direct call parser_prod#AListExprs#replace_child on <self:Object(AListExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AListExprs#visit_all for (self: AListExprs, Visitor) */
void parser_prod__AListExprs__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AListExprs__visit_all(val* self, val* p0) {
parser_prod__AListExprs__visit_all(self, p0); /* Direct call parser_prod#AListExprs#visit_all on <self:Object(AListExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: AParExprs, nullable TOpar, Collection[Object], nullable TCpar) */
void parser_prod__AParExprs__init_aparexprs(val* self, val* p0, val* p1, val* p2) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6831);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6832);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6834);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6835);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: Object, nullable TOpar, Collection[Object], nullable TCpar) */
void VIRTUAL_parser_prod__AParExprs__init_aparexprs(val* self, val* p0, val* p1, val* p2) {
parser_prod__AParExprs__init_aparexprs(self, p0, p1, p2); /* Direct call parser_prod#AParExprs#init_aparexprs on <self:Object(AParExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: AParExprs, ANode, nullable ANode) */
void parser_prod__AParExprs__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOpar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[AExpr] */;
val* var10 /* : ANodes[AExpr] */;
short int var11 /* : Bool */;
val* var12 /* : TCpar */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6840);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TOpar> */
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
/* <var_new_child:nullable ANode> isa TOpar */
cltype = type_parser_nodes__TOpar.color;
idtype = type_parser_nodes__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6841);
show_backtrace(1);
}
{
parser_prod__AParExprs__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AParExprs#n_opar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var10 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
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
var12 = self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6845);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:TCpar> */
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
/* <var_new_child:nullable ANode> isa TCpar */
cltype20 = type_parser_nodes__TCpar.color;
idtype21 = type_parser_nodes__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCpar", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6846);
show_backtrace(1);
}
{
parser_prod__AParExprs__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AParExprs#n_cpar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParExprs__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParExprs__replace_child(self, p0, p1); /* Direct call parser_prod#AParExprs#replace_child on <self:Object(AParExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void parser_prod__AParExprs__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = var_node; /* _n_opar on <self:AParExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_prod__AParExprs__n_opar_61d(val* self, val* p0) {
parser_prod__AParExprs__n_opar_61d(self, p0); /* Direct call parser_prod#AParExprs#n_opar= on <self:Object(AParExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void parser_prod__AParExprs__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = var_node; /* _n_cpar on <self:AParExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_prod__AParExprs__n_cpar_61d(val* self, val* p0) {
parser_prod__AParExprs__n_cpar_61d(self, p0); /* Direct call parser_prod#AParExprs#n_cpar= on <self:Object(AParExprs)>*/
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: AParExprs, Visitor) */
void parser_prod__AParExprs__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6865);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6867);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParExprs__visit_all(val* self, val* p0) {
parser_prod__AParExprs__visit_all(self, p0); /* Direct call parser_prod#AParExprs#visit_all on <self:Object(AParExprs)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: ABraExprs, nullable TObra, Collection[Object], nullable TCbra) */
void parser_prod__ABraExprs__init_abraexprs(val* self, val* p0, val* p1, val* p2) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6877);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6878);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6880);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6881);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: Object, nullable TObra, Collection[Object], nullable TCbra) */
void VIRTUAL_parser_prod__ABraExprs__init_abraexprs(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABraExprs__init_abraexprs(self, p0, p1, p2); /* Direct call parser_prod#ABraExprs#init_abraexprs on <self:Object(ABraExprs)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: ABraExprs, ANode, nullable ANode) */
void parser_prod__ABraExprs__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[AExpr] */;
val* var10 /* : ANodes[AExpr] */;
short int var11 /* : Bool */;
val* var12 /* : TCbra */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6886);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
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
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6887);
show_backtrace(1);
}
{
parser_prod__ABraExprs__n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraExprs#n_obra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var10 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
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
var12 = self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6891);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:TCbra> */
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
/* <var_new_child:nullable ANode> isa TCbra */
cltype20 = type_parser_nodes__TCbra.color;
idtype21 = type_parser_nodes__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6892);
show_backtrace(1);
}
{
parser_prod__ABraExprs__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraExprs#n_cbra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraExprs__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraExprs__replace_child(self, p0, p1); /* Direct call parser_prod#ABraExprs#replace_child on <self:Object(ABraExprs)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void parser_prod__ABraExprs__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = var_node; /* _n_obra on <self:ABraExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraExprs__n_obra_61d(val* self, val* p0) {
parser_prod__ABraExprs__n_obra_61d(self, p0); /* Direct call parser_prod#ABraExprs#n_obra= on <self:Object(ABraExprs)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void parser_prod__ABraExprs__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = var_node; /* _n_cbra on <self:ABraExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraExprs__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraExprs__n_cbra_61d(self, p0); /* Direct call parser_prod#ABraExprs#n_cbra= on <self:Object(ABraExprs)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: ABraExprs, Visitor) */
void parser_prod__ABraExprs__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6911);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6913);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraExprs__visit_all(val* self, val* p0) {
parser_prod__ABraExprs__visit_all(self, p0); /* Direct call parser_prod#ABraExprs#visit_all on <self:Object(ABraExprs)>*/
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void parser_prod__APlusAssignOp__init_aplusassignop(val* self, val* p0) {
val* var_n_pluseq /* var n_pluseq: nullable TPluseq */;
var_n_pluseq = p0;
if (unlikely(var_n_pluseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6921);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_n_pluseq; /* _n_pluseq on <self:APlusAssignOp> */
if (var_n_pluseq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6922);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_pluseq,self) on <var_n_pluseq:nullable TPluseq> */
if (unlikely(var_n_pluseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_pluseq->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_pluseq:nullable TPluseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: Object, nullable TPluseq) */
void VIRTUAL_parser_prod__APlusAssignOp__init_aplusassignop(val* self, val* p0) {
parser_prod__APlusAssignOp__init_aplusassignop(self, p0); /* Direct call parser_prod#APlusAssignOp#init_aplusassignop on <self:Object(APlusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
void parser_prod__APlusAssignOp__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPluseq */;
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
var = self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_pluseq");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6927);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPluseq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPluseq> */
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
/* <var_new_child:nullable ANode> isa TPluseq */
cltype = type_parser_nodes__TPluseq.color;
idtype = type_parser_nodes__TPluseq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPluseq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6928);
show_backtrace(1);
}
{
parser_prod__APlusAssignOp__n_pluseq_61d(self, var_new_child); /* Direct call parser_prod#APlusAssignOp#n_pluseq= on <self:APlusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusAssignOp__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusAssignOp__replace_child(self, p0, p1); /* Direct call parser_prod#APlusAssignOp#replace_child on <self:Object(APlusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_pluseq= for (self: APlusAssignOp, TPluseq) */
void parser_prod__APlusAssignOp__n_pluseq_61d(val* self, val* p0) {
val* var_node /* var node: TPluseq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = var_node; /* _n_pluseq on <self:APlusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPluseq> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPluseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_pluseq= for (self: Object, TPluseq) */
void VIRTUAL_parser_prod__APlusAssignOp__n_pluseq_61d(val* self, val* p0) {
parser_prod__APlusAssignOp__n_pluseq_61d(self, p0); /* Direct call parser_prod#APlusAssignOp#n_pluseq= on <self:Object(APlusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: APlusAssignOp, Visitor) */
void parser_prod__APlusAssignOp__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPluseq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_pluseq");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6942);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusAssignOp__visit_all(val* self, val* p0) {
parser_prod__APlusAssignOp__visit_all(self, p0); /* Direct call parser_prod#APlusAssignOp#visit_all on <self:Object(APlusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void parser_prod__AMinusAssignOp__init_aminusassignop(val* self, val* p0) {
val* var_n_minuseq /* var n_minuseq: nullable TMinuseq */;
var_n_minuseq = p0;
if (unlikely(var_n_minuseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6950);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_n_minuseq; /* _n_minuseq on <self:AMinusAssignOp> */
if (var_n_minuseq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6951);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_minuseq,self) on <var_n_minuseq:nullable TMinuseq> */
if (unlikely(var_n_minuseq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_minuseq->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_minuseq:nullable TMinuseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: Object, nullable TMinuseq) */
void VIRTUAL_parser_prod__AMinusAssignOp__init_aminusassignop(val* self, val* p0) {
parser_prod__AMinusAssignOp__init_aminusassignop(self, p0); /* Direct call parser_prod#AMinusAssignOp#init_aminusassignop on <self:Object(AMinusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
void parser_prod__AMinusAssignOp__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinuseq */;
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
var = self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minuseq");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6956);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TMinuseq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TMinuseq> */
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
/* <var_new_child:nullable ANode> isa TMinuseq */
cltype = type_parser_nodes__TMinuseq.color;
idtype = type_parser_nodes__TMinuseq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinuseq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6957);
show_backtrace(1);
}
{
parser_prod__AMinusAssignOp__n_minuseq_61d(self, var_new_child); /* Direct call parser_prod#AMinusAssignOp#n_minuseq= on <self:AMinusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusAssignOp__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusAssignOp__replace_child(self, p0, p1); /* Direct call parser_prod#AMinusAssignOp#replace_child on <self:Object(AMinusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_minuseq= for (self: AMinusAssignOp, TMinuseq) */
void parser_prod__AMinusAssignOp__n_minuseq_61d(val* self, val* p0) {
val* var_node /* var node: TMinuseq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = var_node; /* _n_minuseq on <self:AMinusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinuseq> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinuseq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_minuseq= for (self: Object, TMinuseq) */
void VIRTUAL_parser_prod__AMinusAssignOp__n_minuseq_61d(val* self, val* p0) {
parser_prod__AMinusAssignOp__n_minuseq_61d(self, p0); /* Direct call parser_prod#AMinusAssignOp#n_minuseq= on <self:Object(AMinusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: AMinusAssignOp, Visitor) */
void parser_prod__AMinusAssignOp__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinuseq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minuseq");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6971);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusAssignOp__visit_all(val* self, val* p0) {
parser_prod__AMinusAssignOp__visit_all(self, p0); /* Direct call parser_prod#AMinusAssignOp#visit_all on <self:Object(AMinusAssignOp)>*/
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: AModuleName, nullable TQuad, Collection[Object], nullable TId) */
void parser_prod__AModuleName__init_amodulename(val* self, val* p0, val* p1, val* p2) {
val* var_n_quad /* var n_quad: nullable TQuad */;
val* var_n_path /* var n_path: Collection[Object] */;
val* var_n_id /* var n_id: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : ANodes[TId] */;
val* var10 /* : ANodes[TId] */;
var_n_quad = p0;
var_n_path = p1;
var_n_id = p2;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var_n_quad; /* _n_quad on <self:AModuleName> */
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
var5 = ((short int (*)(val*, val*))(var_n_quad->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_quad, var_other) /* == on <var_n_quad:nullable TQuad(TQuad)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_quad,self) on <var_n_quad:nullable TQuad(TQuad)> */
var_n_quad->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_quad:nullable TQuad(TQuad)> */
RET_LABEL7:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var10 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2349);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var8, var_n_path); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var8:ANodes[TId]>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6984);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6985);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: Object, nullable TQuad, Collection[Object], nullable TId) */
void VIRTUAL_parser_prod__AModuleName__init_amodulename(val* self, val* p0, val* p1, val* p2) {
parser_prod__AModuleName__init_amodulename(self, p0, p1, p2); /* Direct call parser_prod#AModuleName#init_amodulename on <self:Object(AModuleName)>*/
RET_LABEL:;
}
/* method parser_prod#AModuleName#replace_child for (self: AModuleName, ANode, nullable ANode) */
void parser_prod__AModuleName__replace_child(val* self, val* p0, val* p1) {
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
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
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
cltype = type_nullable_parser_nodes__TQuad.color;
idtype = type_nullable_parser_nodes__TQuad.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6991);
show_backtrace(1);
}
{
parser_prod__AModuleName__n_quad_61d(self, var_new_child); /* Direct call parser_prod#AModuleName#n_quad= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var10 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2349);
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
var12 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6995);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype20 = type_parser_nodes__TId.color;
idtype21 = type_parser_nodes__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 6996);
show_backtrace(1);
}
{
parser_prod__AModuleName__n_id_61d(self, var_new_child); /* Direct call parser_prod#AModuleName#n_id= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AModuleName__replace_child(val* self, val* p0, val* p1) {
parser_prod__AModuleName__replace_child(self, p0, p1); /* Direct call parser_prod#AModuleName#replace_child on <self:Object(AModuleName)>*/
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
void parser_prod__AModuleName__n_quad_61d(val* self, val* p0) {
val* var_node /* var node: nullable TQuad */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var_node; /* _n_quad on <self:AModuleName> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TQuad(TQuad)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TQuad(TQuad)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TQuad(TQuad)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: Object, nullable TQuad) */
void VIRTUAL_parser_prod__AModuleName__n_quad_61d(val* self, val* p0) {
parser_prod__AModuleName__n_quad_61d(self, p0); /* Direct call parser_prod#AModuleName#n_quad= on <self:Object(AModuleName)>*/
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: AModuleName, TId) */
void parser_prod__AModuleName__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = var_node; /* _n_id on <self:AModuleName> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AModuleName__n_id_61d(val* self, val* p0) {
parser_prod__AModuleName__n_id_61d(self, p0); /* Direct call parser_prod#AModuleName#n_id= on <self:Object(AModuleName)>*/
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: AModuleName, Visitor) */
void parser_prod__AModuleName__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TQuad */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var3 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2349);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[TId]>*/
}
var4 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7017);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AModuleName__visit_all(val* self, val* p0) {
parser_prod__AModuleName__visit_all(self, p0); /* Direct call parser_prod#AModuleName#visit_all on <self:Object(AModuleName)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: AExternCalls, nullable TKwimport, Collection[Object]) */
void parser_prod__AExternCalls__init_aexterncalls(val* self, val* p0, val* p1) {
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_extern_calls /* var n_extern_calls: Collection[Object] */;
val* var /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
var_n_kwimport = p0;
var_n_extern_calls = p1;
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7026);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7027);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwimport->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1073);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_extern_calls); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: Object, nullable TKwimport, Collection[Object]) */
void VIRTUAL_parser_prod__AExternCalls__init_aexterncalls(val* self, val* p0, val* p1) {
parser_prod__AExternCalls__init_aexterncalls(self, p0, p1); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <self:Object(AExternCalls)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: AExternCalls, ANode, nullable ANode) */
void parser_prod__AExternCalls__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwimport */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[AExternCall] */;
val* var10 /* : ANodes[AExternCall] */;
short int var11 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7033);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwimport> */
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
/* <var_new_child:nullable ANode> isa TKwimport */
cltype = type_parser_nodes__TKwimport.color;
idtype = type_parser_nodes__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7034);
show_backtrace(1);
}
{
parser_prod__AExternCalls__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#AExternCalls#n_kwimport= on <self:AExternCalls>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var10 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1073);
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
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternCalls__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternCalls__replace_child(self, p0, p1); /* Direct call parser_prod#AExternCalls#replace_child on <self:Object(AExternCalls)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void parser_prod__AExternCalls__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val = var_node; /* _n_kwimport on <self:AExternCalls> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_prod__AExternCalls__n_kwimport_61d(val* self, val* p0) {
parser_prod__AExternCalls__n_kwimport_61d(self, p0); /* Direct call parser_prod#AExternCalls#n_kwimport= on <self:Object(AExternCalls)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: AExternCalls, Visitor) */
void parser_prod__AExternCalls__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwimport */;
val* var1 /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7049);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1073);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternCalls__visit_all(val* self, val* p0) {
parser_prod__AExternCalls__visit_all(self, p0); /* Direct call parser_prod#AExternCalls#visit_all on <self:Object(AExternCalls)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: ASuperExternCall, nullable TKwsuper) */
void parser_prod__ASuperExternCall__init_asuperexterncall(val* self, val* p0) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
var_n_kwsuper = p0;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7073);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7074);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwsuper->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: Object, nullable TKwsuper) */
void VIRTUAL_parser_prod__ASuperExternCall__init_asuperexterncall(val* self, val* p0) {
parser_prod__ASuperExternCall__init_asuperexterncall(self, p0); /* Direct call parser_prod#ASuperExternCall#init_asuperexterncall on <self:Object(ASuperExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#replace_child for (self: ASuperExternCall, ANode, nullable ANode) */
void parser_prod__ASuperExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwsuper */;
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
var = self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7079);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwsuper> */
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
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype = type_parser_nodes__TKwsuper.color;
idtype = type_parser_nodes__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7080);
show_backtrace(1);
}
{
parser_prod__ASuperExternCall__n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperExternCall#n_kwsuper= on <self:ASuperExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#ASuperExternCall#replace_child on <self:Object(ASuperExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void parser_prod__ASuperExternCall__n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_prod__ASuperExternCall__n_kwsuper_61d(val* self, val* p0) {
parser_prod__ASuperExternCall__n_kwsuper_61d(self, p0); /* Direct call parser_prod#ASuperExternCall#n_kwsuper= on <self:Object(ASuperExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: ASuperExternCall, Visitor) */
void parser_prod__ASuperExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7094);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperExternCall__visit_all(val* self, val* p0) {
parser_prod__ASuperExternCall__visit_all(self, p0); /* Direct call parser_prod#ASuperExternCall#visit_all on <self:Object(ASuperExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: ALocalPropExternCall, nullable AMethid) */
void parser_prod__ALocalPropExternCall__init_alocalpropexterncall(val* self, val* p0) {
val* var_n_methid /* var n_methid: nullable AMethid */;
var_n_methid = p0;
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7102);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:ALocalPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7103);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__ALocalPropExternCall__init_alocalpropexterncall(val* self, val* p0) {
parser_prod__ALocalPropExternCall__init_alocalpropexterncall(self, p0); /* Direct call parser_prod#ALocalPropExternCall#init_alocalpropexterncall on <self:Object(ALocalPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: ALocalPropExternCall, ANode, nullable ANode) */
void parser_prod__ALocalPropExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AMethid */;
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
var = self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7108);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AMethid> */
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
/* <var_new_child:nullable ANode> isa AMethid */
cltype = type_parser_nodes__AMethid.color;
idtype = type_parser_nodes__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7109);
show_backtrace(1);
}
{
parser_prod__ALocalPropExternCall__n_methid_61d(self, var_new_child); /* Direct call parser_prod#ALocalPropExternCall#n_methid= on <self:ALocalPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALocalPropExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALocalPropExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#ALocalPropExternCall#replace_child on <self:Object(ALocalPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void parser_prod__ALocalPropExternCall__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val = var_node; /* _n_methid on <self:ALocalPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: Object, AMethid) */
void VIRTUAL_parser_prod__ALocalPropExternCall__n_methid_61d(val* self, val* p0) {
parser_prod__ALocalPropExternCall__n_methid_61d(self, p0); /* Direct call parser_prod#ALocalPropExternCall#n_methid= on <self:Object(ALocalPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: ALocalPropExternCall, Visitor) */
void parser_prod__ALocalPropExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7123);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALocalPropExternCall__visit_all(val* self, val* p0) {
parser_prod__ALocalPropExternCall__visit_all(self, p0); /* Direct call parser_prod#ALocalPropExternCall#visit_all on <self:Object(ALocalPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: AFullPropExternCall, nullable AType, nullable TDot, nullable AMethid) */
void parser_prod__AFullPropExternCall__init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_type = p0;
var_n_dot = p1;
var_n_methid = p2;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7133);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AFullPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7134);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:AFullPropExternCall> */
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
var6 = ((short int (*)(val*, val*))(var_n_dot->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_dot, var_other) /* == on <var_n_dot:nullable TDot(TDot)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7137);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:AFullPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7138);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: Object, nullable AType, nullable TDot, nullable AMethid) */
void VIRTUAL_parser_prod__AFullPropExternCall__init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
parser_prod__AFullPropExternCall__init_afullpropexterncall(self, p0, p1, p2); /* Direct call parser_prod#AFullPropExternCall#init_afullpropexterncall on <self:Object(AFullPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: AFullPropExternCall, ANode, nullable ANode) */
void parser_prod__AFullPropExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TDot */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AMethid */;
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
var = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7143);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7144);
show_backtrace(1);
}
{
parser_prod__AFullPropExternCall__n_type_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_type= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TDot(TDot)> */
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
/* <var_new_child:nullable ANode> isa nullable TDot */
cltype16 = type_nullable_parser_nodes__TDot.color;
idtype17 = type_nullable_parser_nodes__TDot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDot", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7148);
show_backtrace(1);
}
{
parser_prod__AFullPropExternCall__n_dot_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_dot= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7151);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AMethid> */
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
/* <var_new_child:nullable ANode> isa AMethid */
cltype27 = type_parser_nodes__AMethid.color;
idtype28 = type_parser_nodes__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7152);
show_backtrace(1);
}
{
parser_prod__AFullPropExternCall__n_methid_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_methid= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFullPropExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFullPropExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#AFullPropExternCall#replace_child on <self:Object(AFullPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void parser_prod__AFullPropExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val = var_node; /* _n_type on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AFullPropExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AFullPropExternCall__n_type_61d(self, p0); /* Direct call parser_prod#AFullPropExternCall#n_type= on <self:Object(AFullPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
void parser_prod__AFullPropExternCall__n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val = var_node; /* _n_dot on <self:AFullPropExternCall> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TDot(TDot)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDot(TDot)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: Object, nullable TDot) */
void VIRTUAL_parser_prod__AFullPropExternCall__n_dot_61d(val* self, val* p0) {
parser_prod__AFullPropExternCall__n_dot_61d(self, p0); /* Direct call parser_prod#AFullPropExternCall#n_dot= on <self:Object(AFullPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void parser_prod__AFullPropExternCall__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val = var_node; /* _n_methid on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: Object, AMethid) */
void VIRTUAL_parser_prod__AFullPropExternCall__n_methid_61d(val* self, val* p0) {
parser_prod__AFullPropExternCall__n_methid_61d(self, p0); /* Direct call parser_prod#AFullPropExternCall#n_methid= on <self:Object(AFullPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: AFullPropExternCall, Visitor) */
void parser_prod__AFullPropExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7176);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7178);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFullPropExternCall__visit_all(val* self, val* p0) {
parser_prod__AFullPropExternCall__visit_all(self, p0); /* Direct call parser_prod#AFullPropExternCall#visit_all on <self:Object(AFullPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: AInitPropExternCall, nullable AType) */
void parser_prod__AInitPropExternCall__init_ainitpropexterncall(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7186);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AInitPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7187);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AInitPropExternCall__init_ainitpropexterncall(val* self, val* p0) {
parser_prod__AInitPropExternCall__init_ainitpropexterncall(self, p0); /* Direct call parser_prod#AInitPropExternCall#init_ainitpropexterncall on <self:Object(AInitPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: AInitPropExternCall, ANode, nullable ANode) */
void parser_prod__AInitPropExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
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
var = self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7192);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7193);
show_backtrace(1);
}
{
parser_prod__AInitPropExternCall__n_type_61d(self, var_new_child); /* Direct call parser_prod#AInitPropExternCall#n_type= on <self:AInitPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInitPropExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInitPropExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#AInitPropExternCall#replace_child on <self:Object(AInitPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void parser_prod__AInitPropExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val = var_node; /* _n_type on <self:AInitPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AInitPropExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AInitPropExternCall__n_type_61d(self, p0); /* Direct call parser_prod#AInitPropExternCall#n_type= on <self:Object(AInitPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: AInitPropExternCall, Visitor) */
void parser_prod__AInitPropExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7207);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInitPropExternCall__visit_all(val* self, val* p0) {
parser_prod__AInitPropExternCall__visit_all(self, p0); /* Direct call parser_prod#AInitPropExternCall#visit_all on <self:Object(AInitPropExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: ACastAsExternCall, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void parser_prod__ACastAsExternCall__init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var7 /* : Bool */;
var_n_from_type = p0;
var_n_dot = p1;
var_n_kwas = p2;
var_n_to_type = p3;
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7218);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val = var_n_from_type; /* _n_from_type on <self:ACastAsExternCall> */
if (var_n_from_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7219);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_from_type,self) on <var_n_from_type:nullable AType> */
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_from_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_from_type:nullable AType> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:ACastAsExternCall> */
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
var6 = ((short int (*)(val*, val*))(var_n_dot->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_dot, var_other) /* == on <var_n_dot:nullable TDot(TDot)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7222);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:ACastAsExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7223);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwas->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL9:(void)0;
}
}
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7224);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val = var_n_to_type; /* _n_to_type on <self:ACastAsExternCall> */
if (var_n_to_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7225);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_to_type,self) on <var_n_to_type:nullable AType> */
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_to_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_to_type:nullable AType> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: Object, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void VIRTUAL_parser_prod__ACastAsExternCall__init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ACastAsExternCall__init_acastasexterncall(self, p0, p1, p2, p3); /* Direct call parser_prod#ACastAsExternCall#init_acastasexterncall on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#replace_child for (self: ACastAsExternCall, ANode, nullable ANode) */
void parser_prod__ACastAsExternCall__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TDot */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwas */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AType */;
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
var = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7230);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype = type_parser_nodes__AType.color;
idtype = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7231);
show_backtrace(1);
}
{
parser_prod__ACastAsExternCall__n_from_type_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_from_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TDot(TDot)> */
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
/* <var_new_child:nullable ANode> isa nullable TDot */
cltype16 = type_nullable_parser_nodes__TDot.color;
idtype17 = type_nullable_parser_nodes__TDot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDot", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7235);
show_backtrace(1);
}
{
parser_prod__ACastAsExternCall__n_dot_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_dot= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7238);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwas> */
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
/* <var_new_child:nullable ANode> isa TKwas */
cltype27 = type_parser_nodes__TKwas.color;
idtype28 = type_parser_nodes__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7239);
show_backtrace(1);
}
{
parser_prod__ACastAsExternCall__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_kwas= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7242);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype38 = type_parser_nodes__AType.color;
idtype39 = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7243);
show_backtrace(1);
}
{
parser_prod__ACastAsExternCall__n_to_type_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_to_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACastAsExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACastAsExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#ACastAsExternCall#replace_child on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_from_type= for (self: ACastAsExternCall, AType) */
void parser_prod__ACastAsExternCall__n_from_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val = var_node; /* _n_from_type on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_from_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_from_type_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_from_type_61d(self, p0); /* Direct call parser_prod#ACastAsExternCall#n_from_type= on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
