#include "nitc__parser_prod.sep.0.h"
/* method parser_prod$ANamedargExpr$visit_all for (self: ANamedargExpr, Visitor) */
void nitc__parser_prod___ANamedargExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7227);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7228);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7229);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ATypeExpr$init_atypeexpr for (self: ATypeExpr, nullable AType) */
void nitc__parser_prod___ATypeExpr___init_atypeexpr(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel$Object$init (self) on <self:ATypeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7237);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val = var_n_type; /* _n_type on <self:ATypeExpr> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7238);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATypeExpr$replace_child for (self: ATypeExpr, ANode, nullable ANode) */
void nitc__parser_prod___ATypeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7243);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AType> */
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
cltype = type_nitc__AType.color;
idtype = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7244);
fatal_exit(1);
}
{
nitc__parser_prod___ATypeExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod$ATypeExpr$n_type= on <self:ATypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATypeExpr$n_type= for (self: ATypeExpr, AType) */
void nitc__parser_prod___ATypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val = var_node; /* _n_type on <self:ATypeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATypeExpr$visit_all for (self: ATypeExpr, Visitor) */
void nitc__parser_prod___ATypeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7258);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AMethidExpr$init_amethidexpr for (self: AMethidExpr, nullable AExpr, nullable AMethid) */
void nitc__parser_prod___AMethidExpr___init_amethidexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable AMethid */;
{
{ /* Inline kernel$Object$init (self) on <self:AMethidExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7267);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMethidExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7268);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7269);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val = var_n_id; /* _n_id on <self:AMethidExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7270);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable AMethid> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable AMethid> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMethidExpr$replace_child for (self: AMethidExpr, ANode, nullable ANode) */
void nitc__parser_prod___AMethidExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7275);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AExpr> */
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
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7276);
fatal_exit(1);
}
{
nitc__parser_prod___AMethidExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AMethidExpr$n_expr= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7279);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AMethid> */
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
cltype14 = type_nitc__AMethid.color;
idtype15 = type_nitc__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7280);
fatal_exit(1);
}
{
nitc__parser_prod___AMethidExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod$AMethidExpr$n_id= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethidExpr$n_expr= for (self: AMethidExpr, AExpr) */
void nitc__parser_prod___AMethidExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val = var_node; /* _n_expr on <self:AMethidExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMethidExpr$n_id= for (self: AMethidExpr, AMethid) */
void nitc__parser_prod___AMethidExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val = var_node; /* _n_id on <self:AMethidExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMethidExpr$visit_all for (self: AMethidExpr, Visitor) */
void nitc__parser_prod___AMethidExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7299);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7300);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAtExpr$init_aatexpr for (self: AAtExpr, nullable AAnnotations) */
void nitc__parser_prod___AAtExpr___init_aatexpr(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
{
{ /* Inline kernel$Object$init (self) on <self:AAtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_annotations = p0;
if (unlikely(var_n_annotations == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7308);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtExpr> */
if (var_n_annotations == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7309);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations> */
if (unlikely(var_n_annotations == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAtExpr$replace_child for (self: AAtExpr, ANode, nullable ANode) */
void nitc__parser_prod___AAtExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AAnnotations(AAnnotations)> */
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
cltype = type_nitc__AAnnotations.color;
idtype = type_nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7315);
fatal_exit(1);
}
{
nitc__parser_prod___AAtExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AAtExpr$n_annotations= on <self:AAtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAtExpr$n_annotations= for (self: AAtExpr, nullable AAnnotations) */
void nitc__parser_prod___AAtExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAtExpr> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7323);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAtExpr$visit_all for (self: AAtExpr, Visitor) */
void nitc__parser_prod___AAtExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AManyExpr$init_amanyexpr for (self: AManyExpr, Collection[Object]) */
void nitc__parser_prod___AManyExpr___init_amanyexpr(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{
{ /* Inline kernel$Object$init (self) on <self:AManyExpr> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
{
{ /* Inline parser_nodes$AManyExpr$n_exprs (self) on <self:AManyExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2736);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod$AManyExpr$replace_child for (self: AManyExpr, ANode, nullable ANode) */
void nitc__parser_prod___AManyExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes$AManyExpr$n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2736);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AManyExpr$visit_all for (self: AManyExpr, Visitor) */
void nitc__parser_prod___AManyExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes$AManyExpr$n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2736);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod$AListExprs$init_alistexprs for (self: AListExprs, Collection[Object]) */
void nitc__parser_prod___AListExprs___init_alistexprs(val* self, val* p0) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
{
{ /* Inline kernel$Object$init (self) on <self:AListExprs> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AListExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod$AListExprs$replace_child for (self: AListExprs, ANode, nullable ANode) */
void nitc__parser_prod___AListExprs___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AListExprs$visit_all for (self: AListExprs, Visitor) */
void nitc__parser_prod___AListExprs___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod$AParExprs$init_aparexprs for (self: AParExprs, nullable TOpar, Collection[Object], nullable TCpar) */
void nitc__parser_prod___AParExprs___init_aparexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
{
{ /* Inline kernel$Object$init (self) on <self:AParExprs> */
RET_LABEL1:(void)0;
}
}
var_n_opar = p0;
var_n_exprs = p1;
var_n_cpar = p2;
if (unlikely(var_n_opar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7379);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7380);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AParExprs> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cpar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7382);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7383);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParExprs$replace_child for (self: AParExprs, ANode, nullable ANode) */
void nitc__parser_prod___AParExprs___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7388);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TOpar> */
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
cltype = type_nitc__TOpar.color;
idtype = type_nitc__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7389);
fatal_exit(1);
}
{
nitc__parser_prod___AParExprs___n_opar_61d(self, var_new_child); /* Direct call parser_prod$AParExprs$n_opar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AParExprs> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7393);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var11,var_old_child) on <var11:TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:TCpar> */
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
cltype18 = type_nitc__TCpar.color;
idtype19 = type_nitc__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7394);
fatal_exit(1);
}
{
nitc__parser_prod___AParExprs___n_cpar_61d(self, var_new_child); /* Direct call parser_prod$AParExprs$n_cpar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AParExprs$n_opar= for (self: AParExprs, TOpar) */
void nitc__parser_prod___AParExprs___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val = var_node; /* _n_opar on <self:AParExprs> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParExprs$n_cpar= for (self: AParExprs, TCpar) */
void nitc__parser_prod___AParExprs___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val = var_node; /* _n_cpar on <self:AParExprs> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParExprs$visit_all for (self: AParExprs, Visitor) */
void nitc__parser_prod___AParExprs___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7413);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7415);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ABraExprs$init_abraexprs for (self: ABraExprs, nullable TObra, Collection[Object], nullable TCbra) */
void nitc__parser_prod___ABraExprs___init_abraexprs(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
{
{ /* Inline kernel$Object$init (self) on <self:ABraExprs> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_exprs = p1;
var_n_cbra = p2;
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7425);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7426);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:ABraExprs> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7428);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7429);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraExprs$replace_child for (self: ABraExprs, ANode, nullable ANode) */
void nitc__parser_prod___ABraExprs___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7434);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TObra> */
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
cltype = type_nitc__TObra.color;
idtype = type_nitc__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7435);
fatal_exit(1);
}
{
nitc__parser_prod___ABraExprs___n_obra_61d(self, var_new_child); /* Direct call parser_prod$ABraExprs$n_obra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:ABraExprs> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7439);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var11,var_old_child) on <var11:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:TCbra> */
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
cltype18 = type_nitc__TCbra.color;
idtype19 = type_nitc__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7440);
fatal_exit(1);
}
{
nitc__parser_prod___ABraExprs___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$ABraExprs$n_cbra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABraExprs$n_obra= for (self: ABraExprs, TObra) */
void nitc__parser_prod___ABraExprs___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val = var_node; /* _n_obra on <self:ABraExprs> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraExprs$n_cbra= for (self: ABraExprs, TCbra) */
void nitc__parser_prod___ABraExprs___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val = var_node; /* _n_cbra on <self:ABraExprs> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraExprs$visit_all for (self: ABraExprs, Visitor) */
void nitc__parser_prod___ABraExprs___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7459);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7461);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APlusAssignOp$init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void nitc__parser_prod___APlusAssignOp___init_aplusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPluseq */;
{
{ /* Inline kernel$Object$init (self) on <self:APlusAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7469);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APlusAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7470);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TPluseq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPluseq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APlusAssignOp$replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7475);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TPluseq.color;
idtype = type_nitc__TPluseq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7476);
fatal_exit(1);
}
{
nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$APlusAssignOp$n_op= on <self:APlusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APlusAssignOp$n_op= for (self: APlusAssignOp, Token) */
void nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APlusAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APlusAssignOp$visit_all for (self: APlusAssignOp, Visitor) */
void nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7490);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AMinusAssignOp$init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void nitc__parser_prod___AMinusAssignOp___init_aminusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TMinuseq */;
{
{ /* Inline kernel$Object$init (self) on <self:AMinusAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7498);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AMinusAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7499);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TMinuseq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TMinuseq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMinusAssignOp$replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7504);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TMinuseq.color;
idtype = type_nitc__TMinuseq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7505);
fatal_exit(1);
}
{
nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$AMinusAssignOp$n_op= on <self:AMinusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMinusAssignOp$n_op= for (self: AMinusAssignOp, Token) */
void nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AMinusAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMinusAssignOp$visit_all for (self: AMinusAssignOp, Visitor) */
void nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7519);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStarAssignOp$init_astarassignop for (self: AStarAssignOp, nullable TStareq) */
void nitc__parser_prod___AStarAssignOp___init_astarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStareq */;
{
{ /* Inline kernel$Object$init (self) on <self:AStarAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7527);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7528);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TStareq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStareq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarAssignOp$replace_child for (self: AStarAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7533);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TStareq */
cltype = type_nitc__TStareq.color;
idtype = type_nitc__TStareq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStareq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7534);
fatal_exit(1);
}
{
nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$AStarAssignOp$n_op= on <self:AStarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStarAssignOp$n_op= for (self: AStarAssignOp, Token) */
void nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarAssignOp$visit_all for (self: AStarAssignOp, Visitor) */
void nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7548);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ASlashAssignOp$init_aslashassignop for (self: ASlashAssignOp, nullable TSlasheq) */
void nitc__parser_prod___ASlashAssignOp___init_aslashassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TSlasheq */;
{
{ /* Inline kernel$Object$init (self) on <self:ASlashAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7556);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ASlashAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7557);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TSlasheq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TSlasheq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASlashAssignOp$replace_child for (self: ASlashAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7562);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TSlasheq */
cltype = type_nitc__TSlasheq.color;
idtype = type_nitc__TSlasheq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlasheq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7563);
fatal_exit(1);
}
{
nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$ASlashAssignOp$n_op= on <self:ASlashAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASlashAssignOp$n_op= for (self: ASlashAssignOp, Token) */
void nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ASlashAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASlashAssignOp$visit_all for (self: ASlashAssignOp, Visitor) */
void nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7577);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APercentAssignOp$init_apercentassignop for (self: APercentAssignOp, nullable TPercenteq) */
void nitc__parser_prod___APercentAssignOp___init_apercentassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPercenteq */;
{
{ /* Inline kernel$Object$init (self) on <self:APercentAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7585);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APercentAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7586);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TPercenteq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPercenteq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APercentAssignOp$replace_child for (self: APercentAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7591);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TPercenteq */
cltype = type_nitc__TPercenteq.color;
idtype = type_nitc__TPercenteq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercenteq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7592);
fatal_exit(1);
}
{
nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$APercentAssignOp$n_op= on <self:APercentAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APercentAssignOp$n_op= for (self: APercentAssignOp, Token) */
void nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APercentAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APercentAssignOp$visit_all for (self: APercentAssignOp, Visitor) */
void nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7606);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStarstarAssignOp$init_astarstarassignop for (self: AStarstarAssignOp, nullable TStarstareq) */
void nitc__parser_prod___AStarstarAssignOp___init_astarstarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarstareq */;
{
{ /* Inline kernel$Object$init (self) on <self:AStarstarAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7614);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarstarAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7615);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TStarstareq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarstareq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarstarAssignOp$replace_child for (self: AStarstarAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7620);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TStarstareq */
cltype = type_nitc__TStarstareq.color;
idtype = type_nitc__TStarstareq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstareq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7621);
fatal_exit(1);
}
{
nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$AStarstarAssignOp$n_op= on <self:AStarstarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStarstarAssignOp$n_op= for (self: AStarstarAssignOp, Token) */
void nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarstarAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarstarAssignOp$visit_all for (self: AStarstarAssignOp, Visitor) */
void nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7635);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APipeAssignOp$init_apipeassignop for (self: APipeAssignOp, nullable TPipeeq) */
void nitc__parser_prod___APipeAssignOp___init_apipeassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPipeeq */;
{
{ /* Inline kernel$Object$init (self) on <self:APipeAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7643);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APipeAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7644);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TPipeeq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPipeeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APipeAssignOp$replace_child for (self: APipeAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7649);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TPipeeq */
cltype = type_nitc__TPipeeq.color;
idtype = type_nitc__TPipeeq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPipeeq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7650);
fatal_exit(1);
}
{
nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$APipeAssignOp$n_op= on <self:APipeAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APipeAssignOp$n_op= for (self: APipeAssignOp, Token) */
void nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APipeAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APipeAssignOp$visit_all for (self: APipeAssignOp, Visitor) */
void nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7664);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ACaretAssignOp$init_acaretassignop for (self: ACaretAssignOp, nullable TCareteq) */
void nitc__parser_prod___ACaretAssignOp___init_acaretassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TCareteq */;
{
{ /* Inline kernel$Object$init (self) on <self:ACaretAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7672);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ACaretAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7673);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TCareteq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TCareteq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACaretAssignOp$replace_child for (self: ACaretAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7678);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TCareteq */
cltype = type_nitc__TCareteq.color;
idtype = type_nitc__TCareteq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCareteq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7679);
fatal_exit(1);
}
{
nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$ACaretAssignOp$n_op= on <self:ACaretAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACaretAssignOp$n_op= for (self: ACaretAssignOp, Token) */
void nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ACaretAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACaretAssignOp$visit_all for (self: ACaretAssignOp, Visitor) */
void nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7693);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAmpAssignOp$init_aampassignop for (self: AAmpAssignOp, nullable TAmpeq) */
void nitc__parser_prod___AAmpAssignOp___init_aampassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TAmpeq */;
{
{ /* Inline kernel$Object$init (self) on <self:AAmpAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7701);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AAmpAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7702);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TAmpeq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TAmpeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAmpAssignOp$replace_child for (self: AAmpAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7707);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TAmpeq */
cltype = type_nitc__TAmpeq.color;
idtype = type_nitc__TAmpeq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAmpeq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7708);
fatal_exit(1);
}
{
nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$AAmpAssignOp$n_op= on <self:AAmpAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAmpAssignOp$n_op= for (self: AAmpAssignOp, Token) */
void nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AAmpAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAmpAssignOp$visit_all for (self: AAmpAssignOp, Visitor) */
void nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7722);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALlAssignOp$init_allassignop for (self: ALlAssignOp, nullable TLleq) */
void nitc__parser_prod___ALlAssignOp___init_allassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLleq */;
{
{ /* Inline kernel$Object$init (self) on <self:ALlAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7730);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ALlAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7731);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TLleq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLleq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlAssignOp$replace_child for (self: ALlAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7736);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TLleq */
cltype = type_nitc__TLleq.color;
idtype = type_nitc__TLleq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLleq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7737);
fatal_exit(1);
}
{
nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALlAssignOp$n_op= on <self:ALlAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALlAssignOp$n_op= for (self: ALlAssignOp, Token) */
void nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ALlAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlAssignOp$visit_all for (self: ALlAssignOp, Visitor) */
void nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7751);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AGgAssignOp$init_aggassignop for (self: AGgAssignOp, nullable TGgeq) */
void nitc__parser_prod___AGgAssignOp___init_aggassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGgeq */;
{
{ /* Inline kernel$Object$init (self) on <self:AGgAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7759);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AGgAssignOp> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7760);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TGgeq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGgeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGgAssignOp$replace_child for (self: AGgAssignOp, ANode, nullable ANode) */
void nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7765);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TGgeq */
cltype = type_nitc__TGgeq.color;
idtype = type_nitc__TGgeq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGgeq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7766);
fatal_exit(1);
}
{
nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod$AGgAssignOp$n_op= on <self:AGgAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AGgAssignOp$n_op= for (self: AGgAssignOp, Token) */
void nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AGgAssignOp> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGgAssignOp$visit_all for (self: AGgAssignOp, Visitor) */
void nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7780);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AForGroup$init_aforgroup for (self: AForGroup, Collection[Object], nullable TKwin, nullable AExpr) */
void nitc__parser_prod___AForGroup___init_aforgroup(val* self, val* p0, val* p1, val* p2) {
val* var_n_ids /* var n_ids: Collection[Object] */;
val* var_n_kwin /* var n_kwin: nullable TKwin */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
{
{ /* Inline kernel$Object$init (self) on <self:AForGroup> */
RET_LABEL1:(void)0;
}
}
var_n_ids = p0;
var_n_kwin = p1;
var_n_expr = p2;
{
{ /* Inline parser_nodes$AForGroup$n_ids (self) on <self:AForGroup> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <self:AForGroup> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2018);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_ids); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[TId]>*/
}
if (unlikely(var_n_kwin == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7791);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val = var_n_kwin; /* _n_kwin on <self:AForGroup> */
if (var_n_kwin == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7792);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwin,self) on <var_n_kwin:nullable TKwin> */
if (unlikely(var_n_kwin == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwin->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwin:nullable TKwin> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7793);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val = var_n_expr; /* _n_expr on <self:AForGroup> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7794);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AForGroup$replace_child for (self: AForGroup, ANode, nullable ANode) */
void nitc__parser_prod___AForGroup___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
short int var3 /* : Bool */;
val* var4 /* : TKwin */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var11 /* : AExpr */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes$AForGroup$n_ids (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <self:AForGroup> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2018);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val; /* _n_kwin on <self:AForGroup> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7800);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var4,var_old_child) on <var4:TKwin> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:TKwin> */
var9 = var4 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
/* <var_new_child:nullable ANode> isa TKwin */
cltype = type_nitc__TKwin.color;
idtype = type_nitc__TKwin.id;
if(var_new_child == NULL) {
var10 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwin", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7801);
fatal_exit(1);
}
{
nitc__parser_prod___AForGroup___n_kwin_61d(self, var_new_child); /* Direct call parser_prod$AForGroup$n_kwin= on <self:AForGroup>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7804);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var11,var_old_child) on <var11:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype18 = type_nitc__AExpr.color;
idtype19 = type_nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7805);
fatal_exit(1);
}
{
nitc__parser_prod___AForGroup___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AForGroup$n_expr= on <self:AForGroup>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AForGroup$n_kwin= for (self: AForGroup, TKwin) */
void nitc__parser_prod___AForGroup___n_kwin_61d(val* self, val* p0) {
val* var_node /* var node: TKwin */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val = var_node; /* _n_kwin on <self:AForGroup> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwin> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwin> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AForGroup$n_expr= for (self: AForGroup, AExpr) */
void nitc__parser_prod___AForGroup___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val = var_node; /* _n_expr on <self:AForGroup> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AForGroup$visit_all for (self: AForGroup, Visitor) */
void nitc__parser_prod___AForGroup___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
val* var3 /* : TKwin */;
val* var4 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$AForGroup$n_ids (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <self:AForGroup> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2018);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[TId]>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val; /* _n_kwin on <self:AForGroup> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7825);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7826);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AModuleName$init_amodulename for (self: AModuleName, nullable TQuad, Collection[Object], nullable TId) */
void nitc__parser_prod___AModuleName___init_amodulename(val* self, val* p0, val* p1, val* p2) {
val* var_n_quad /* var n_quad: nullable TQuad */;
val* var_n_path /* var n_path: Collection[Object] */;
val* var_n_id /* var n_id: nullable TId */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : ANodes[TId] */;
val* var9 /* : ANodes[TId] */;
{
{ /* Inline kernel$Object$init (self) on <self:AModuleName> */
RET_LABEL1:(void)0;
}
}
var_n_quad = p0;
var_n_path = p1;
var_n_id = p2;
self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val = var_n_quad; /* _n_quad on <self:AModuleName> */
if (var_n_quad == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_quad,((val*)NULL)) on <var_n_quad:nullable TQuad> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_quad->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_quad, var_other); /* == on <var_n_quad:nullable TQuad(TQuad)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var = var2;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_quad,self) on <var_n_quad:nullable TQuad(TQuad)> */
var_n_quad->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_quad:nullable TQuad(TQuad)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AModuleName$n_path (self) on <self:AModuleName> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var7, var_n_path); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var7:ANodes[TId]>*/
}
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7839);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7840);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AModuleName$replace_child for (self: AModuleName, ANode, nullable ANode) */
void nitc__parser_prod___AModuleName___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TQuad> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TQuad(TQuad)> */
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
cltype = type_nullable__nitc__TQuad.color;
idtype = type_nullable__nitc__TQuad.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7846);
fatal_exit(1);
}
{
nitc__parser_prod___AModuleName___n_quad_61d(self, var_new_child); /* Direct call parser_prod$AModuleName$n_quad= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AModuleName$n_path (self) on <self:AModuleName> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__ANodes___replace_child(var8, var_old_child, var_new_child);
}
if (var11){
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7850);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var12,var_old_child) on <var12:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var12,var_other) on <var12:TId> */
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
cltype19 = type_nitc__TId.color;
idtype20 = type_nitc__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7851);
fatal_exit(1);
}
{
nitc__parser_prod___AModuleName___n_id_61d(self, var_new_child); /* Direct call parser_prod$AModuleName$n_id= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuleName$n_quad= for (self: AModuleName, nullable TQuad) */
void nitc__parser_prod___AModuleName___n_quad_61d(val* self, val* p0) {
val* var_node /* var node: nullable TQuad */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val = var_node; /* _n_quad on <self:AModuleName> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TQuad> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TQuad(TQuad)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TQuad(TQuad)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TQuad(TQuad)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuleName$n_id= for (self: AModuleName, TId) */
void nitc__parser_prod___AModuleName___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val = var_node; /* _n_id on <self:AModuleName> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AModuleName$visit_all for (self: AModuleName, Visitor) */
void nitc__parser_prod___AModuleName___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TQuad */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AModuleName$n_path (self) on <self:AModuleName> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[TId]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7872);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AExternCalls$init_aexterncalls for (self: AExternCalls, nullable TKwimport, Collection[Object]) */
void nitc__parser_prod___AExternCalls___init_aexterncalls(val* self, val* p0, val* p1) {
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_extern_calls /* var n_extern_calls: Collection[Object] */;
val* var /* : ANodes[AExternCall] */;
val* var4 /* : ANodes[AExternCall] */;
{
{ /* Inline kernel$Object$init (self) on <self:AExternCalls> */
RET_LABEL1:(void)0;
}
}
var_n_kwimport = p0;
var_n_extern_calls = p1;
if (unlikely(var_n_kwimport == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7881);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7882);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwimport->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AExternCalls$n_extern_calls (self) on <self:AExternCalls> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1444);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_extern_calls); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod$AExternCalls$replace_child for (self: AExternCalls, ANode, nullable ANode) */
void nitc__parser_prod___AExternCalls___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7888);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwimport> */
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
cltype = type_nitc__TKwimport.color;
idtype = type_nitc__TKwimport.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7889);
fatal_exit(1);
}
{
nitc__parser_prod___AExternCalls___n_kwimport_61d(self, var_new_child); /* Direct call parser_prod$AExternCalls$n_kwimport= on <self:AExternCalls>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AExternCalls$n_extern_calls (self) on <self:AExternCalls> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1444);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ANodes___replace_child(var7, var_old_child, var_new_child);
}
if (var10){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AExternCalls$n_kwimport= for (self: AExternCalls, TKwimport) */
void nitc__parser_prod___AExternCalls___n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val = var_node; /* _n_kwimport on <self:AExternCalls> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AExternCalls$visit_all for (self: AExternCalls, Visitor) */
void nitc__parser_prod___AExternCalls___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwimport */;
val* var1 /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7904);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AExternCalls$n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1444);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod$ASuperExternCall$init_asuperexterncall for (self: ASuperExternCall, nullable TKwsuper) */
void nitc__parser_prod___ASuperExternCall___init_asuperexterncall(val* self, val* p0) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
{
{ /* Inline kernel$Object$init (self) on <self:ASuperExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_kwsuper = p0;
if (unlikely(var_n_kwsuper == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7928);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7929);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwsuper->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASuperExternCall$replace_child for (self: ASuperExternCall, ANode, nullable ANode) */
void nitc__parser_prod___ASuperExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7934);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwsuper> */
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
cltype = type_nitc__TKwsuper.color;
idtype = type_nitc__TKwsuper.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7935);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperExternCall___n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod$ASuperExternCall$n_kwsuper= on <self:ASuperExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASuperExternCall$n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void nitc__parser_prod___ASuperExternCall___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASuperExternCall$visit_all for (self: ASuperExternCall, Visitor) */
void nitc__parser_prod___ASuperExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7949);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALocalPropExternCall$init_alocalpropexterncall for (self: ALocalPropExternCall, nullable AMethid) */
void nitc__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(val* self, val* p0) {
val* var_n_methid /* var n_methid: nullable AMethid */;
{
{ /* Inline kernel$Object$init (self) on <self:ALocalPropExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_methid = p0;
if (unlikely(var_n_methid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7957);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:ALocalPropExternCall> */
if (var_n_methid == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7958);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_methid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALocalPropExternCall$replace_child for (self: ALocalPropExternCall, ANode, nullable ANode) */
void nitc__parser_prod___ALocalPropExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7963);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AMethid> */
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
cltype = type_nitc__AMethid.color;
idtype = type_nitc__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7964);
fatal_exit(1);
}
{
nitc__parser_prod___ALocalPropExternCall___n_methid_61d(self, var_new_child); /* Direct call parser_prod$ALocalPropExternCall$n_methid= on <self:ALocalPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALocalPropExternCall$n_methid= for (self: ALocalPropExternCall, AMethid) */
void nitc__parser_prod___ALocalPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val = var_node; /* _n_methid on <self:ALocalPropExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALocalPropExternCall$visit_all for (self: ALocalPropExternCall, Visitor) */
void nitc__parser_prod___ALocalPropExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7978);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AFullPropExternCall$init_afullpropexterncall for (self: AFullPropExternCall, nullable AType, nullable TDot, nullable AMethid) */
void nitc__parser_prod___AFullPropExternCall___init_afullpropexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_methid /* var n_methid: nullable AMethid */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AFullPropExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
var_n_dot = p1;
var_n_methid = p2;
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7988);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AFullPropExternCall> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7989);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:AFullPropExternCall> */
if (var_n_dot == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_dot,((val*)NULL)) on <var_n_dot:nullable TDot> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_dot, var_other); /* == on <var_n_dot:nullable TDot(TDot)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_methid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7992);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:AFullPropExternCall> */
if (var_n_methid == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7993);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_methid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AFullPropExternCall$replace_child for (self: AFullPropExternCall, ANode, nullable ANode) */
void nitc__parser_prod___AFullPropExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7998);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AType> */
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
cltype = type_nitc__AType.color;
idtype = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7999);
fatal_exit(1);
}
{
nitc__parser_prod___AFullPropExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod$AFullPropExternCall$n_type= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable TDot(TDot)> */
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
cltype15 = type_nullable__nitc__TDot.color;
idtype16 = type_nullable__nitc__TDot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8003);
fatal_exit(1);
}
{
nitc__parser_prod___AFullPropExternCall___n_dot_61d(self, var_new_child); /* Direct call parser_prod$AFullPropExternCall$n_dot= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8006);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:AMethid> */
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
cltype25 = type_nitc__AMethid.color;
idtype26 = type_nitc__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8007);
fatal_exit(1);
}
{
nitc__parser_prod___AFullPropExternCall___n_methid_61d(self, var_new_child); /* Direct call parser_prod$AFullPropExternCall$n_methid= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFullPropExternCall$n_type= for (self: AFullPropExternCall, AType) */
void nitc__parser_prod___AFullPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val = var_node; /* _n_type on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AFullPropExternCall$n_dot= for (self: AFullPropExternCall, nullable TDot) */
void nitc__parser_prod___AFullPropExternCall___n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_dot].val = var_node; /* _n_dot on <self:AFullPropExternCall> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TDot> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TDot(TDot)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TDot(TDot)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDot(TDot)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFullPropExternCall$n_methid= for (self: AFullPropExternCall, AMethid) */
void nitc__parser_prod___AFullPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val = var_node; /* _n_methid on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AFullPropExternCall$visit_all for (self: AFullPropExternCall, Visitor) */
void nitc__parser_prod___AFullPropExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8031);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8033);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AInitPropExternCall$init_ainitpropexterncall for (self: AInitPropExternCall, nullable AType) */
void nitc__parser_prod___AInitPropExternCall___init_ainitpropexterncall(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel$Object$init (self) on <self:AInitPropExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8041);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AInitPropExternCall> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8042);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInitPropExternCall$replace_child for (self: AInitPropExternCall, ANode, nullable ANode) */
void nitc__parser_prod___AInitPropExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8047);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AType> */
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
cltype = type_nitc__AType.color;
idtype = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8048);
fatal_exit(1);
}
{
nitc__parser_prod___AInitPropExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod$AInitPropExternCall$n_type= on <self:AInitPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AInitPropExternCall$n_type= for (self: AInitPropExternCall, AType) */
void nitc__parser_prod___AInitPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val = var_node; /* _n_type on <self:AInitPropExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInitPropExternCall$visit_all for (self: AInitPropExternCall, Visitor) */
void nitc__parser_prod___AInitPropExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8062);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$init_acastasexterncall for (self: ACastAsExternCall, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
void nitc__parser_prod___ACastAsExternCall___init_acastasexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_from_type /* var n_from_type: nullable AType */;
val* var_n_dot /* var n_dot: nullable TDot */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_to_type /* var n_to_type: nullable AType */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ACastAsExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_from_type = p0;
var_n_dot = p1;
var_n_kwas = p2;
var_n_to_type = p3;
if (unlikely(var_n_from_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8073);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val = var_n_from_type; /* _n_from_type on <self:ACastAsExternCall> */
if (var_n_from_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8074);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_from_type,self) on <var_n_from_type:nullable AType> */
if (unlikely(var_n_from_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_from_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_from_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_dot].val = var_n_dot; /* _n_dot on <self:ACastAsExternCall> */
if (var_n_dot == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_dot,((val*)NULL)) on <var_n_dot:nullable TDot> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_dot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_dot, var_other); /* == on <var_n_dot:nullable TDot(TDot)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8077);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:ACastAsExternCall> */
if (var_n_kwas == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8078);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwas->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL8:(void)0;
}
}
if (unlikely(var_n_to_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8079);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val = var_n_to_type; /* _n_to_type on <self:ACastAsExternCall> */
if (var_n_to_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8080);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_to_type,self) on <var_n_to_type:nullable AType> */
if (unlikely(var_n_to_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_to_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_to_type:nullable AType> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$replace_child for (self: ACastAsExternCall, ANode, nullable ANode) */
void nitc__parser_prod___ACastAsExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : TKwas */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8085);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AType> */
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
cltype = type_nitc__AType.color;
idtype = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8086);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_from_type_61d(self, var_new_child); /* Direct call parser_prod$ACastAsExternCall$n_from_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable TDot(TDot)> */
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
cltype15 = type_nullable__nitc__TDot.color;
idtype16 = type_nullable__nitc__TDot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8090);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_dot_61d(self, var_new_child); /* Direct call parser_prod$ACastAsExternCall$n_dot= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8093);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:TKwas> */
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
/* <var_new_child:nullable ANode> isa TKwas */
cltype25 = type_nitc__TKwas.color;
idtype26 = type_nitc__TKwas.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwas", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8094);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_kwas_61d(self, var_new_child); /* Direct call parser_prod$ACastAsExternCall$n_kwas= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8097);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var28,var_old_child) on <var28:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var28,var_other) on <var28:AType> */
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
cltype35 = type_nitc__AType.color;
idtype36 = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8098);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_to_type_61d(self, var_new_child); /* Direct call parser_prod$ACastAsExternCall$n_to_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$n_from_type= for (self: ACastAsExternCall, AType) */
void nitc__parser_prod___ACastAsExternCall___n_from_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val = var_node; /* _n_from_type on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$n_dot= for (self: ACastAsExternCall, nullable TDot) */
void nitc__parser_prod___ACastAsExternCall___n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_dot].val = var_node; /* _n_dot on <self:ACastAsExternCall> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TDot> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TDot(TDot)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TDot(TDot)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDot(TDot)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$n_kwas= for (self: ACastAsExternCall, TKwas) */
void nitc__parser_prod___ACastAsExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val = var_node; /* _n_kwas on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$n_to_type= for (self: ACastAsExternCall, AType) */
void nitc__parser_prod___ACastAsExternCall___n_to_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val = var_node; /* _n_to_type on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACastAsExternCall$visit_all for (self: ACastAsExternCall, Visitor) */
void nitc__parser_prod___ACastAsExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : TKwas */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8127);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8129);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8130);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAsNullableExternCall$init_aasnullableexterncall for (self: AAsNullableExternCall, nullable AType, nullable TKwas, nullable TKwnullable) */
void nitc__parser_prod___AAsNullableExternCall___init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
{
{ /* Inline kernel$Object$init (self) on <self:AAsNullableExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnullable = p2;
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8140);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNullableExternCall> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8141);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8142);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNullableExternCall> */
if (var_n_kwas == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8143);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwas->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwnullable == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8144);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var_n_kwnullable == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8145);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable> */
if (unlikely(var_n_kwnullable == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwnullable->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNullableExternCall$replace_child for (self: AAsNullableExternCall, ANode, nullable ANode) */
void nitc__parser_prod___AAsNullableExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TKwas */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : TKwnullable */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8150);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AType> */
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
cltype = type_nitc__AType.color;
idtype = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8151);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNullableExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod$AAsNullableExternCall$n_type= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8154);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TKwas> */
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
cltype14 = type_nitc__TKwas.color;
idtype15 = type_nitc__TKwas.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8155);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNullableExternCall___n_kwas_61d(self, var_new_child); /* Direct call parser_prod$AAsNullableExternCall$n_kwas= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8158);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwnullable> */
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
/* <var_new_child:nullable ANode> isa TKwnullable */
cltype24 = type_nitc__TKwnullable.color;
idtype25 = type_nitc__TKwnullable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnullable", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8159);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNullableExternCall___n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod$AAsNullableExternCall$n_kwnullable= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAsNullableExternCall$n_type= for (self: AAsNullableExternCall, AType) */
void nitc__parser_prod___AAsNullableExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNullableExternCall$n_kwas= for (self: AAsNullableExternCall, TKwas) */
void nitc__parser_prod___AAsNullableExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNullableExternCall$n_kwnullable= for (self: AAsNullableExternCall, TKwnullable) */
void nitc__parser_prod___AAsNullableExternCall___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnullable> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnullable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNullableExternCall$visit_all for (self: AAsNullableExternCall, Visitor) */
void nitc__parser_prod___AAsNullableExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8183);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8184);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8185);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$init_aasnotnullableexterncall for (self: AAsNotNullableExternCall, nullable AType, nullable TKwas, nullable TKwnot, nullable TKwnullable) */
void nitc__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
{
{ /* Inline kernel$Object$init (self) on <self:AAsNotNullableExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnot = p2;
var_n_kwnullable = p3;
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8196);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNotNullableExternCall> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8197);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8198);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var_n_kwas == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8199);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwas->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwnot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8200);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var_n_kwnot == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8201);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwnot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_kwnullable == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8202);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var_n_kwnullable == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8203);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable> */
if (unlikely(var_n_kwnullable == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwnullable->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$replace_child for (self: AAsNotNullableExternCall, ANode, nullable ANode) */
void nitc__parser_prod___AAsNotNullableExternCall___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TKwas */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : TKwnot */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : TKwnullable */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8208);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AType> */
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
cltype = type_nitc__AType.color;
idtype = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8209);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotNullableExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod$AAsNotNullableExternCall$n_type= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8212);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TKwas> */
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
cltype14 = type_nitc__TKwas.color;
idtype15 = type_nitc__TKwas.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8213);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotNullableExternCall___n_kwas_61d(self, var_new_child); /* Direct call parser_prod$AAsNotNullableExternCall$n_kwas= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8216);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwnot> */
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
/* <var_new_child:nullable ANode> isa TKwnot */
cltype24 = type_nitc__TKwnot.color;
idtype25 = type_nitc__TKwnot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8217);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotNullableExternCall___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod$AAsNotNullableExternCall$n_kwnot= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8220);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:TKwnullable> */
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
/* <var_new_child:nullable ANode> isa TKwnullable */
cltype34 = type_nitc__TKwnullable.color;
idtype35 = type_nitc__TKwnullable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnullable", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8221);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotNullableExternCall___n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod$AAsNotNullableExternCall$n_kwnullable= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$n_type= for (self: AAsNotNullableExternCall, AType) */
void nitc__parser_prod___AAsNotNullableExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$n_kwas= for (self: AAsNotNullableExternCall, TKwas) */
void nitc__parser_prod___AAsNotNullableExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$n_kwnot= for (self: AAsNotNullableExternCall, TKwnot) */
void nitc__parser_prod___AAsNotNullableExternCall___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$n_kwnullable= for (self: AAsNotNullableExternCall, TKwnullable) */
void nitc__parser_prod___AAsNotNullableExternCall___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnullable> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnullable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotNullableExternCall$visit_all for (self: AAsNotNullableExternCall, Visitor) */
void nitc__parser_prod___AAsNotNullableExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnot */;
val* var3 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8250);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8251);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8252);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8253);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AInLanguage$init_ainlanguage for (self: AInLanguage, nullable TKwin, nullable TString) */
void nitc__parser_prod___AInLanguage___init_ainlanguage(val* self, val* p0, val* p1) {
val* var_n_kwin /* var n_kwin: nullable TKwin */;
val* var_n_string /* var n_string: nullable TString */;
{
{ /* Inline kernel$Object$init (self) on <self:AInLanguage> */
RET_LABEL1:(void)0;
}
}
var_n_kwin = p0;
var_n_string = p1;
if (unlikely(var_n_kwin == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8262);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_kwin].val = var_n_kwin; /* _n_kwin on <self:AInLanguage> */
if (var_n_kwin == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8263);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwin,self) on <var_n_kwin:nullable TKwin> */
if (unlikely(var_n_kwin == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwin->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwin:nullable TKwin> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8264);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_string].val = var_n_string; /* _n_string on <self:AInLanguage> */
if (var_n_string == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8265);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_string,self) on <var_n_string:nullable TString> */
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TString> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInLanguage$replace_child for (self: AInLanguage, ANode, nullable ANode) */
void nitc__parser_prod___AInLanguage___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwin */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TString */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8270);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwin> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwin> */
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
/* <var_new_child:nullable ANode> isa TKwin */
cltype = type_nitc__TKwin.color;
idtype = type_nitc__TKwin.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwin", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8271);
fatal_exit(1);
}
{
nitc__parser_prod___AInLanguage___n_kwin_61d(self, var_new_child); /* Direct call parser_prod$AInLanguage$n_kwin= on <self:AInLanguage>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8274);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TString> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TString> */
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
/* <var_new_child:nullable ANode> isa TString */
cltype14 = type_nitc__TString.color;
idtype15 = type_nitc__TString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TString", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8275);
fatal_exit(1);
}
{
nitc__parser_prod___AInLanguage___n_string_61d(self, var_new_child); /* Direct call parser_prod$AInLanguage$n_string= on <self:AInLanguage>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AInLanguage$n_kwin= for (self: AInLanguage, TKwin) */
void nitc__parser_prod___AInLanguage___n_kwin_61d(val* self, val* p0) {
val* var_node /* var node: TKwin */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_kwin].val = var_node; /* _n_kwin on <self:AInLanguage> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwin> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwin> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInLanguage$n_string= for (self: AInLanguage, TString) */
void nitc__parser_prod___AInLanguage___n_string_61d(val* self, val* p0) {
val* var_node /* var node: TString */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_string].val = var_node; /* _n_string on <self:AInLanguage> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TString> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInLanguage$visit_all for (self: AInLanguage, Visitor) */
void nitc__parser_prod___AInLanguage___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwin */;
val* var1 /* : TString */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8294);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8295);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AExternCodeBlock$init_aexterncodeblock for (self: AExternCodeBlock, nullable AInLanguage, nullable TExternCodeSegment) */
void nitc__parser_prod___AExternCodeBlock___init_aexterncodeblock(val* self, val* p0, val* p1) {
val* var_n_in_language /* var n_in_language: nullable AInLanguage */;
val* var_n_extern_code_segment /* var n_extern_code_segment: nullable TExternCodeSegment */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AExternCodeBlock> */
RET_LABEL1:(void)0;
}
}
var_n_in_language = p0;
var_n_extern_code_segment = p1;
self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_in_language].val = var_n_in_language; /* _n_in_language on <self:AExternCodeBlock> */
if (var_n_in_language == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_in_language,((val*)NULL)) on <var_n_in_language:nullable AInLanguage> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_in_language->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_in_language, var_other); /* == on <var_n_in_language:nullable AInLanguage(AInLanguage)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var = var2;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_in_language,self) on <var_n_in_language:nullable AInLanguage(AInLanguage)> */
var_n_in_language->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_in_language:nullable AInLanguage(AInLanguage)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_extern_code_segment == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8306);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_n_extern_code_segment; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var_n_extern_code_segment == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8307);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_extern_code_segment,self) on <var_n_extern_code_segment:nullable TExternCodeSegment> */
if (unlikely(var_n_extern_code_segment == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_extern_code_segment->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_segment:nullable TExternCodeSegment> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AExternCodeBlock$replace_child for (self: AExternCodeBlock, ANode, nullable ANode) */
void nitc__parser_prod___AExternCodeBlock___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AInLanguage */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TExternCodeSegment */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable AInLanguage> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AInLanguage(AInLanguage)> */
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
/* <var_new_child:nullable ANode> isa nullable AInLanguage */
cltype = type_nullable__nitc__AInLanguage.color;
idtype = type_nullable__nitc__AInLanguage.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AInLanguage", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8313);
fatal_exit(1);
}
{
nitc__parser_prod___AExternCodeBlock___n_in_language_61d(self, var_new_child); /* Direct call parser_prod$AExternCodeBlock$n_in_language= on <self:AExternCodeBlock>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8316);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:TExternCodeSegment> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:TExternCodeSegment> */
var13 = var8 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
/* <var_new_child:nullable ANode> isa TExternCodeSegment */
cltype15 = type_nitc__TExternCodeSegment.color;
idtype16 = type_nitc__TExternCodeSegment.id;
if(var_new_child == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TExternCodeSegment", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8317);
fatal_exit(1);
}
{
nitc__parser_prod___AExternCodeBlock___n_extern_code_segment_61d(self, var_new_child); /* Direct call parser_prod$AExternCodeBlock$n_extern_code_segment= on <self:AExternCodeBlock>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AExternCodeBlock$n_in_language= for (self: AExternCodeBlock, nullable AInLanguage) */
void nitc__parser_prod___AExternCodeBlock___n_in_language_61d(val* self, val* p0) {
val* var_node /* var node: nullable AInLanguage */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_in_language].val = var_node; /* _n_in_language on <self:AExternCodeBlock> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AInLanguage> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AInLanguage(AInLanguage)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AInLanguage(AInLanguage)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AInLanguage(AInLanguage)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AExternCodeBlock$n_extern_code_segment= for (self: AExternCodeBlock, TExternCodeSegment) */
void nitc__parser_prod___AExternCodeBlock___n_extern_code_segment_61d(val* self, val* p0) {
val* var_node /* var node: TExternCodeSegment */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_node; /* _n_extern_code_segment on <self:AExternCodeBlock> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TExternCodeSegment> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TExternCodeSegment> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AExternCodeBlock$visit_all for (self: AExternCodeBlock, Visitor) */
void nitc__parser_prod___AExternCodeBlock___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AInLanguage */;
val* var1 /* : TExternCodeSegment */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8337);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AQualified$init_aqualified for (self: AQualified, Collection[Object], nullable TClassid) */
void nitc__parser_prod___AQualified___init_aqualified(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: Collection[Object] */;
val* var_n_classid /* var n_classid: nullable TClassid */;
val* var /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AQualified> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_classid = p1;
{
{ /* Inline parser_nodes$AQualified$n_id (self) on <self:AQualified> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2952);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_id); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[TId]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AQualified___n_classid].val = var_n_classid; /* _n_classid on <self:AQualified> */
if (var_n_classid == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_classid,((val*)NULL)) on <var_n_classid:nullable TClassid> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_classid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_classid, var_other); /* == on <var_n_classid:nullable TClassid(TClassid)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_classid,self) on <var_n_classid:nullable TClassid(TClassid)> */
var_n_classid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_classid:nullable TClassid(TClassid)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQualified$replace_child for (self: AQualified, ANode, nullable ANode) */
void nitc__parser_prod___AQualified___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
short int var3 /* : Bool */;
val* var4 /* : nullable TClassid */;
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
{ /* Inline parser_nodes$AQualified$n_id (self) on <self:AQualified> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2952);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var4,var_old_child) on <var4:nullable TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:nullable TClassid(TClassid)> */
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
/* <var_new_child:nullable ANode> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TClassid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8355);
fatal_exit(1);
}
{
nitc__parser_prod___AQualified___n_classid_61d(self, var_new_child); /* Direct call parser_prod$AQualified$n_classid= on <self:AQualified>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQualified$n_classid= for (self: AQualified, nullable TClassid) */
void nitc__parser_prod___AQualified___n_classid_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AQualified___n_classid].val = var_node; /* _n_classid on <self:AQualified> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TClassid> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TClassid(TClassid)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TClassid(TClassid)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TClassid(TClassid)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQualified$visit_all for (self: AQualified, Visitor) */
void nitc__parser_prod___AQualified___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
val* var3 /* : nullable TClassid */;
var_v = p0;
{
{ /* Inline parser_nodes$AQualified$n_id (self) on <self:AQualified> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2952);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[TId]>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ADoc$init_adoc for (self: ADoc, Collection[Object]) */
void nitc__parser_prod___ADoc___init_adoc(val* self, val* p0) {
val* var_n_comment /* var n_comment: Collection[Object] */;
val* var /* : ANodes[TComment] */;
val* var3 /* : ANodes[TComment] */;
{
{ /* Inline kernel$Object$init (self) on <self:ADoc> */
RET_LABEL1:(void)0;
}
}
var_n_comment = p0;
{
{ /* Inline parser_nodes$ADoc$n_comment (self) on <self:ADoc> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2964);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_comment); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[TComment]>*/
}
RET_LABEL:;
}
/* method parser_prod$ADoc$replace_child for (self: ADoc, ANode, nullable ANode) */
void nitc__parser_prod___ADoc___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[TComment] */;
val* var2 /* : ANodes[TComment] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes$ADoc$n_comment (self) on <self:ADoc> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2964);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ANodes___replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoc$visit_all for (self: ADoc, Visitor) */
void nitc__parser_prod___ADoc___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TComment] */;
val* var2 /* : ANodes[TComment] */;
var_v = p0;
{
{ /* Inline parser_nodes$ADoc$n_comment (self) on <self:ADoc> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2964);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[TComment]>*/
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$init_aannotations for (self: AAnnotations, nullable TKwis, nullable TAt, nullable TOpar, Collection[Object], nullable TCpar, nullable TKwend) */
void nitc__parser_prod___AAnnotations___init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwis /* var n_kwis: nullable TKwis */;
val* var_n_at /* var n_at: nullable TAt */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_items /* var n_items: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : ANodes[AAnnotation] */;
val* var21 /* : ANodes[AAnnotation] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AAnnotations> */
RET_LABEL1:(void)0;
}
}
var_n_kwis = p0;
var_n_at = p1;
var_n_opar = p2;
var_n_items = p3;
var_n_cpar = p4;
var_n_kwend = p5;
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwis].val = var_n_kwis; /* _n_kwis on <self:AAnnotations> */
if (var_n_kwis == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwis,((val*)NULL)) on <var_n_kwis:nullable TKwis> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwis->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwis, var_other); /* == on <var_n_kwis:nullable TKwis(TKwis)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var = var2;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwis,self) on <var_n_kwis:nullable TKwis(TKwis)> */
var_n_kwis->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwis:nullable TKwis(TKwis)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_at].val = var_n_at; /* _n_at on <self:AAnnotations> */
if (var_n_at == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_at,((val*)NULL)) on <var_n_at:nullable TAt> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_at, var_other); /* == on <var_n_at:nullable TAt(TAt)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_at,self) on <var_n_at:nullable TAt(TAt)> */
var_n_at->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_at:nullable TAt(TAt)> */
RET_LABEL12:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotations> */
if (var_n_opar == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL18:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AAnnotations$n_items (self) on <self:AAnnotations> */
var21 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2987);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var19, var_n_items); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var19:ANodes[AAnnotation]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotations> */
if (var_n_cpar == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL27:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AAnnotations> */
if (var_n_kwend == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwend,((val*)NULL)) on <var_n_kwend:nullable TKwend> */
var_other = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwend, var_other); /* == on <var_n_kwend:nullable TKwend(TKwend)>*/
}
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL33:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$replace_child for (self: AAnnotations, ANode, nullable ANode) */
void nitc__parser_prod___AAnnotations___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwis */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TAt */;
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
val* var30 /* : ANodes[AAnnotation] */;
val* var32 /* : ANodes[AAnnotation] */;
short int var33 /* : Bool */;
val* var34 /* : nullable TCpar */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
val* var45 /* : nullable TKwend */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwis].val; /* _n_kwis on <self:AAnnotations> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwis> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwis(TKwis)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwis */
cltype = type_nullable__nitc__TKwis.color;
idtype = type_nullable__nitc__TKwis.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwis", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8419);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotations___n_kwis_61d(self, var_new_child); /* Direct call parser_prod$AAnnotations$n_kwis= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TAt> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TAt(TAt)> */
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
/* <var_new_child:nullable ANode> isa nullable TAt */
cltype16 = type_nullable__nitc__TAt.color;
idtype17 = type_nullable__nitc__TAt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAt", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8423);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotations___n_at_61d(self, var_new_child); /* Direct call parser_prod$AAnnotations$n_at= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable TOpar(TOpar)> */
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
cltype27 = type_nullable__nitc__TOpar.color;
idtype28 = type_nullable__nitc__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8427);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotations___n_opar_61d(self, var_new_child); /* Direct call parser_prod$AAnnotations$n_opar= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAnnotations$n_items (self) on <self:AAnnotations> */
var32 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2987);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = nitc___nitc__ANodes___replace_child(var30, var_old_child, var_new_child);
}
if (var33){
goto RET_LABEL;
} else {
}
var34 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
if (var34 == NULL) {
var35 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var34,var_old_child) on <var34:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var34,var_other) on <var34:nullable TCpar(TCpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype42 = type_nullable__nitc__TCpar.color;
idtype43 = type_nullable__nitc__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8432);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotations___n_cpar_61d(self, var_new_child); /* Direct call parser_prod$AAnnotations$n_cpar= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
var45 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwend].val; /* _n_kwend on <self:AAnnotations> */
if (var45 == NULL) {
var46 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var45,var_old_child) on <var45:nullable TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var45,var_other) on <var45:nullable TKwend(TKwend)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwend */
cltype53 = type_nullable__nitc__TKwend.color;
idtype54 = type_nullable__nitc__TKwend.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwend", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8436);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotations___n_kwend_61d(self, var_new_child); /* Direct call parser_prod$AAnnotations$n_kwend= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$n_kwis= for (self: AAnnotations, nullable TKwis) */
void nitc__parser_prod___AAnnotations___n_kwis_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwis */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwis].val = var_node; /* _n_kwis on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwis> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwis(TKwis)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwis(TKwis)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwis(TKwis)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$n_at= for (self: AAnnotations, nullable TAt) */
void nitc__parser_prod___AAnnotations___n_at_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAt */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_at].val = var_node; /* _n_at on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TAt> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TAt(TAt)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TAt(TAt)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TAt(TAt)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$n_opar= for (self: AAnnotations, nullable TOpar) */
void nitc__parser_prod___AAnnotations___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_opar].val = var_node; /* _n_opar on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TOpar(TOpar)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$n_cpar= for (self: AAnnotations, nullable TCpar) */
void nitc__parser_prod___AAnnotations___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TCpar(TCpar)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$n_kwend= for (self: AAnnotations, nullable TKwend) */
void nitc__parser_prod___AAnnotations___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwend].val = var_node; /* _n_kwend on <self:AAnnotations> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwend> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwend(TKwend)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwend(TKwend)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwend(TKwend)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotations$visit_all for (self: AAnnotations, Visitor) */
void nitc__parser_prod___AAnnotations___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwis */;
val* var1 /* : nullable TAt */;
val* var2 /* : nullable TOpar */;
val* var3 /* : ANodes[AAnnotation] */;
val* var5 /* : ANodes[AAnnotation] */;
val* var6 /* : nullable TCpar */;
val* var7 /* : nullable TKwend */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwis].val; /* _n_kwis on <self:AAnnotations> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AAnnotations$n_items (self) on <self:AAnnotations> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2987);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var3, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var3:ANodes[AAnnotation]>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_kwend].val; /* _n_kwend on <self:AAnnotations> */
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$init_aannotation for (self: AAnnotation, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void nitc__parser_prod___AAnnotation___init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_atid /* var n_atid: nullable AAtid */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_args /* var n_args: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var26 /* : ANodes[AExpr] */;
val* var28 /* : ANodes[AExpr] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AAnnotation> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_atid = p3;
var_n_opar = p4;
var_n_args = p5;
var_n_cpar = p6;
var_n_annotations = p7;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAnnotation> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_doc,((val*)NULL)) on <var_n_doc:nullable ADoc> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_doc, var_other); /* == on <var_n_doc:nullable ADoc(ADoc)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var = var2;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAnnotation> */
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL12:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAnnotation> */
if (var_n_visibility == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_visibility,((val*)NULL)) on <var_n_visibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_visibility, var_other); /* == on <var_n_visibility:nullable AVisibility(AVisibility)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility(AVisibility)> */
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility(AVisibility)> */
RET_LABEL18:(void)0;
}
}
} else {
}
if (unlikely(var_n_atid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8496);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val = var_n_atid; /* _n_atid on <self:AAnnotation> */
if (var_n_atid == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8497);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_atid,self) on <var_n_atid:nullable AAtid> */
if (unlikely(var_n_atid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_atid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_atid:nullable AAtid> */
RET_LABEL19:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotation> */
if (var_n_opar == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL25:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotation> */
var28 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var26, var_n_args); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var26:ANodes[AExpr]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotation> */
if (var_n_cpar == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL34:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAnnotation> */
if (var_n_annotations == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL40:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$replace_child for (self: AAnnotation, ANode, nullable ANode) */
void nitc__parser_prod___AAnnotation___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TKwredef */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable AVisibility */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AAtid */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : nullable TOpar */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var51 /* : ANodes[AExpr] */;
val* var53 /* : ANodes[AExpr] */;
short int var54 /* : Bool */;
val* var55 /* : nullable TCpar */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
val* var66 /* : nullable AAnnotations */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotation> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
/* <var_new_child:nullable ANode> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ADoc", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8510);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ADefinition__n_doc_61d]))(self, var_new_child); /* n_doc= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwredef */
cltype16 = type_nullable__nitc__TKwredef.color;
idtype17 = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwredef", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8514);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
/* <var_new_child:nullable ANode> isa nullable AVisibility */
cltype27 = type_nullable__nitc__AVisibility.color;
idtype28 = type_nullable__nitc__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AVisibility", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8518);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ADefinition__n_visibility_61d]))(self, var_new_child); /* n_visibility= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8521);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:AAtid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:AAtid> */
var35 = var30 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
/* <var_new_child:nullable ANode> isa AAtid */
cltype37 = type_nitc__AAtid.color;
idtype38 = type_nitc__AAtid.id;
if(var_new_child == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAtid", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8522);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__AAnnotation__n_atid_61d]))(self, var_new_child); /* n_atid= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:nullable TOpar(TOpar)> */
var46 = var40 == var_other;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype48 = type_nullable__nitc__TOpar.color;
idtype49 = type_nullable__nitc__TOpar.id;
if(var_new_child == NULL) {
var47 = 1;
} else {
if(cltype48 >= var_new_child->type->table_size) {
var47 = 0;
} else {
var47 = var_new_child->type->type_table[cltype48] == idtype49;
}
}
if (unlikely(!var47)) {
var_class_name50 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8526);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__AAnnotation__n_opar_61d]))(self, var_new_child); /* n_opar= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotation> */
var53 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nitc___nitc__ANodes___replace_child(var51, var_old_child, var_new_child);
}
if (var54){
goto RET_LABEL;
} else {
}
var55 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
if (var55 == NULL) {
var56 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var55,var_old_child) on <var55:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var55,var_other) on <var55:nullable TCpar(TCpar)> */
var61 = var55 == var_other;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype63 = type_nullable__nitc__TCpar.color;
idtype64 = type_nullable__nitc__TCpar.id;
if(var_new_child == NULL) {
var62 = 1;
} else {
if(cltype63 >= var_new_child->type->table_size) {
var62 = 0;
} else {
var62 = var_new_child->type->type_table[cltype63] == idtype64;
}
}
if (unlikely(!var62)) {
var_class_name65 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8531);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__AAnnotation__n_cpar_61d]))(self, var_new_child); /* n_cpar= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var66 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
if (var66 == NULL) {
var67 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var66,var_old_child) on <var66:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var66,var_other) on <var66:nullable AAnnotations(AAnnotations)> */
var72 = var66 == var_other;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (var67){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype74 = type_nullable__nitc__AAnnotations.color;
idtype75 = type_nullable__nitc__AAnnotations.id;
if(var_new_child == NULL) {
var73 = 1;
} else {
if(cltype74 >= var_new_child->type->table_size) {
var73 = 0;
} else {
var73 = var_new_child->type->type_table[cltype74] == idtype75;
}
}
if (unlikely(!var73)) {
var_class_name76 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8535);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__Prod__n_annotations_61d]))(self, var_new_child); /* n_annotations= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_doc= for (self: AAnnotation, nullable ADoc) */
void nitc__parser_prod___AAnnotation___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ADoc> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ADoc(ADoc)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_kwredef= for (self: AAnnotation, nullable TKwredef) */
void nitc__parser_prod___AAnnotation___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_visibility= for (self: AAnnotation, nullable AVisibility) */
void nitc__parser_prod___AAnnotation___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AVisibility> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AVisibility(AVisibility)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility(AVisibility)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility(AVisibility)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_atid= for (self: AAnnotation, AAtid) */
void nitc__parser_prod___AAnnotation___n_atid_61d(val* self, val* p0) {
val* var_node /* var node: AAtid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val = var_node; /* _n_atid on <self:AAnnotation> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AAtid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAtid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_opar= for (self: AAnnotation, nullable TOpar) */
void nitc__parser_prod___AAnnotation___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val = var_node; /* _n_opar on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TOpar(TOpar)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_cpar= for (self: AAnnotation, nullable TCpar) */
void nitc__parser_prod___AAnnotation___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TCpar(TCpar)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$n_annotations= for (self: AAnnotation, nullable AAnnotations) */
void nitc__parser_prod___AAnnotation___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAnnotation> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AAnnotations(AAnnotations)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotation$visit_all for (self: AAnnotation, Visitor) */
void nitc__parser_prod___AAnnotation___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AAtid */;
val* var4 /* : nullable TOpar */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable TCpar */;
val* var9 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotation> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8582);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotation> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var5, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var5:ANodes[AExpr]>*/
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIdAtid$init_aidatid for (self: AIdAtid, nullable TId) */
void nitc__parser_prod___AIdAtid___init_aidatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
{ /* Inline kernel$Object$init (self) on <self:AIdAtid> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8594);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AIdAtid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8595);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIdAtid$replace_child for (self: AIdAtid, ANode, nullable ANode) */
void nitc__parser_prod___AIdAtid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8600);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype = type_nitc__TId.color;
idtype = type_nitc__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8601);
fatal_exit(1);
}
{
nitc__parser_prod___AIdAtid___nitc__parser_nodes__AAtid__n_id_61d(self, var_new_child); /* Direct call parser_prod$AIdAtid$n_id= on <self:AIdAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIdAtid$n_id= for (self: AIdAtid, Token) */
void nitc__parser_prod___AIdAtid___nitc__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AIdAtid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIdAtid$visit_all for (self: AIdAtid, Visitor) */
void nitc__parser_prod___AIdAtid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8615);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AKwexternAtid$init_akwexternatid for (self: AKwexternAtid, nullable TKwextern) */
void nitc__parser_prod___AKwexternAtid___init_akwexternatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwextern */;
{
{ /* Inline kernel$Object$init (self) on <self:AKwexternAtid> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8623);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwexternAtid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8624);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TKwextern> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TKwextern> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AKwexternAtid$replace_child for (self: AKwexternAtid, ANode, nullable ANode) */
void nitc__parser_prod___AKwexternAtid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwexternAtid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8629);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TKwextern */
cltype = type_nitc__TKwextern.color;
idtype = type_nitc__TKwextern.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwextern", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8630);
fatal_exit(1);
}
{
nitc__parser_prod___AKwexternAtid___nitc__parser_nodes__AAtid__n_id_61d(self, var_new_child); /* Direct call parser_prod$AKwexternAtid$n_id= on <self:AKwexternAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AKwexternAtid$n_id= for (self: AKwexternAtid, Token) */
void nitc__parser_prod___AKwexternAtid___nitc__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwexternAtid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AKwexternAtid$visit_all for (self: AKwexternAtid, Visitor) */
void nitc__parser_prod___AKwexternAtid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwexternAtid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8644);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AKwabstractAtid$init_akwabstractatid for (self: AKwabstractAtid, nullable TKwabstract) */
void nitc__parser_prod___AKwabstractAtid___init_akwabstractatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwabstract */;
{
{ /* Inline kernel$Object$init (self) on <self:AKwabstractAtid> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8652);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwabstractAtid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8653);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TKwabstract> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TKwabstract> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AKwabstractAtid$replace_child for (self: AKwabstractAtid, ANode, nullable ANode) */
void nitc__parser_prod___AKwabstractAtid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwabstractAtid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8658);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TKwabstract */
cltype = type_nitc__TKwabstract.color;
idtype = type_nitc__TKwabstract.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabstract", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8659);
fatal_exit(1);
}
{
nitc__parser_prod___AKwabstractAtid___nitc__parser_nodes__AAtid__n_id_61d(self, var_new_child); /* Direct call parser_prod$AKwabstractAtid$n_id= on <self:AKwabstractAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AKwabstractAtid$n_id= for (self: AKwabstractAtid, Token) */
void nitc__parser_prod___AKwabstractAtid___nitc__parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwabstractAtid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AKwabstractAtid$visit_all for (self: AKwabstractAtid, Visitor) */
void nitc__parser_prod___AKwabstractAtid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwabstractAtid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8673);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$Start$replace_child for (self: Start, ANode, nullable ANode) */
void nitc__parser_prod___Start___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable AModule> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AModule(AModule)> */
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
if (var_new_child == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_new_child,((val*)NULL)) on <var_new_child:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_new_child,var_other) on <var_new_child:nullable ANode(ANode)> */
var12 = var_new_child == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
} else {
{
{ /* Inline parser_nodes$ANode$parent= (var_new_child,self) on <var_new_child:nullable ANode(ANode)> */
var_new_child->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_new_child:nullable ANode(ANode)> */
RET_LABEL13:(void)0;
}
}
/* <var_new_child:nullable ANode(ANode)> isa AModule */
cltype = type_nitc__AModule.color;
idtype = type_nitc__AModule.id;
if(cltype >= var_new_child->type->table_size) {
var14 = 0;
} else {
var14 = var_new_child->type->type_table[cltype] == idtype;
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8713);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__Start___n_base].val = var_new_child; /* _n_base on <self:Start> */
}
{
{ /* Inline parser_nodes$ANode$parent= (var_old_child,((val*)NULL)) on <var_old_child:ANode> */
var_old_child->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <var_old_child:ANode> */
RET_LABEL15:(void)0;
}
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$Start$visit_all for (self: Start, Visitor) */
void nitc__parser_prod___Start___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable AModule */;
val* var7 /* : EOF */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable AModule> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable AModule(AModule)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var6 = self->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8724);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8726);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
