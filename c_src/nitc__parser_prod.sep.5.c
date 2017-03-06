#include "nitc__parser_prod.sep.0.h"
/* method parser_prod$ABraAssignExpr$replace_child for (self: ABraAssignExpr, ANode, nullable ANode) */
void nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AExprs */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : TAssign */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AExpr */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5728);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5729);
fatal_exit(1);
}
{
nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ABraAssignExpr$n_expr= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5732);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype14 = type_nitc__AExprs.color;
idtype15 = type_nitc__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5733);
fatal_exit(1);
}
{
nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__ABraFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod$ABraAssignExpr$n_args= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5736);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype24 = type_nitc__TAssign.color;
idtype25 = type_nitc__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5737);
fatal_exit(1);
}
{
nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod$ABraAssignExpr$n_assign= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5740);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype34 = type_nitc__AExpr.color;
idtype35 = type_nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5741);
fatal_exit(1);
}
{
nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod$ABraAssignExpr$n_value= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABraAssignExpr$n_expr= for (self: ABraAssignExpr, AExpr) */
void nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraAssignExpr$n_args= for (self: ABraAssignExpr, AExprs) */
void nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraAssignExpr$n_assign= for (self: ABraAssignExpr, TAssign) */
void nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraAssignExpr$n_value= for (self: ABraAssignExpr, AExpr) */
void nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraAssignExpr$visit_all for (self: ABraAssignExpr, Visitor) */
void nitc__parser_prod___ABraAssignExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5770);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5771);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5772);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5773);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$init_abrareassignexpr for (self: ABraReassignExpr, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void nitc__parser_prod___ABraReassignExpr___init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ABraReassignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_args = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5784);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5785);
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
if (unlikely(var_n_args == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5786);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5787);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5788);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5789);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_assign_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5790);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5791);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$replace_child for (self: ABraReassignExpr, ANode, nullable ANode) */
void nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AExprs */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AAssignOp */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AExpr */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5796);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5797);
fatal_exit(1);
}
{
nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ABraReassignExpr$n_expr= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5800);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype14 = type_nitc__AExprs.color;
idtype15 = type_nitc__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5801);
fatal_exit(1);
}
{
nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__ABraFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod$ABraReassignExpr$n_args= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5804);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype24 = type_nitc__AAssignOp.color;
idtype25 = type_nitc__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5805);
fatal_exit(1);
}
{
nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod$ABraReassignExpr$n_assign_op= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5808);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype34 = type_nitc__AExpr.color;
idtype35 = type_nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5809);
fatal_exit(1);
}
{
nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod$ABraReassignExpr$n_value= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$n_expr= for (self: ABraReassignExpr, AExpr) */
void nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$n_args= for (self: ABraReassignExpr, AExprs) */
void nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$n_assign_op= for (self: ABraReassignExpr, AAssignOp) */
void nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$n_value= for (self: ABraReassignExpr, AExpr) */
void nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraReassignExpr$visit_all for (self: ABraReassignExpr, Visitor) */
void nitc__parser_prod___ABraReassignExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5838);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5839);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5840);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5841);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AVarExpr$init_avarexpr for (self: AVarExpr, nullable TId) */
void nitc__parser_prod___AVarExpr___init_avarexpr(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
{ /* Inline kernel$Object$init (self) on <self:AVarExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5849);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5850);
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
/* method parser_prod$AVarExpr$replace_child for (self: AVarExpr, ANode, nullable ANode) */
void nitc__parser_prod___AVarExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5855);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5856);
fatal_exit(1);
}
{
nitc__parser_prod___AVarExpr___nitc__parser_nodes__AVarFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod$AVarExpr$n_id= on <self:AVarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVarExpr$n_id= for (self: AVarExpr, TId) */
void nitc__parser_prod___AVarExpr___nitc__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarExpr$visit_all for (self: AVarExpr, Visitor) */
void nitc__parser_prod___AVarExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5870);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AVarAssignExpr$init_avarassignexpr for (self: AVarAssignExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nitc__parser_prod___AVarAssignExpr___init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AVarAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5880);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5881);
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
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5882);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5883);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5884);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5885);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarAssignExpr$replace_child for (self: AVarAssignExpr, ANode, nullable ANode) */
void nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TAssign */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5890);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5891);
fatal_exit(1);
}
{
nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__AVarFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod$AVarAssignExpr$n_id= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5894);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype14 = type_nitc__TAssign.color;
idtype15 = type_nitc__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5895);
fatal_exit(1);
}
{
nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod$AVarAssignExpr$n_assign= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5898);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:AExpr> */
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
cltype24 = type_nitc__AExpr.color;
idtype25 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5899);
fatal_exit(1);
}
{
nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod$AVarAssignExpr$n_value= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVarAssignExpr$n_id= for (self: AVarAssignExpr, TId) */
void nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarAssignExpr$n_assign= for (self: AVarAssignExpr, TAssign) */
void nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarAssignExpr$n_value= for (self: AVarAssignExpr, AExpr) */
void nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarAssignExpr$visit_all for (self: AVarAssignExpr, Visitor) */
void nitc__parser_prod___AVarAssignExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5923);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5924);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5925);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AVarReassignExpr$init_avarreassignexpr for (self: AVarReassignExpr, nullable TId, nullable AAssignOp, nullable AExpr) */
void nitc__parser_prod___AVarReassignExpr___init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AVarReassignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign_op = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5935);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5936);
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
if (unlikely(var_n_assign_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5937);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5938);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_assign_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5939);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5940);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarReassignExpr$replace_child for (self: AVarReassignExpr, ANode, nullable ANode) */
void nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AAssignOp */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5945);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5946);
fatal_exit(1);
}
{
nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__AVarFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod$AVarReassignExpr$n_id= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5949);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype14 = type_nitc__AAssignOp.color;
idtype15 = type_nitc__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5950);
fatal_exit(1);
}
{
nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod$AVarReassignExpr$n_assign_op= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5953);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:AExpr> */
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
cltype24 = type_nitc__AExpr.color;
idtype25 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5954);
fatal_exit(1);
}
{
nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod$AVarReassignExpr$n_value= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVarReassignExpr$n_id= for (self: AVarReassignExpr, TId) */
void nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarReassignExpr$n_assign_op= for (self: AVarReassignExpr, AAssignOp) */
void nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarReassignExpr$n_value= for (self: AVarReassignExpr, AExpr) */
void nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarReassignExpr$visit_all for (self: AVarReassignExpr, Visitor) */
void nitc__parser_prod___AVarReassignExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : AAssignOp */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5978);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5979);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 5980);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$init_acrangeexpr for (self: ACrangeExpr, nullable TObra, nullable AExpr, nullable TDotdot, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void nitc__parser_prod___ACrangeExpr___init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_dotdot /* var n_dotdot: nullable TDotdot */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ACrangeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_expr = p1;
var_n_dotdot = p2;
var_n_expr2 = p3;
var_n_cbra = p4;
var_n_annotations = p5;
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6048);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6049);
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
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6050);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6051);
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
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_dotdot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6052);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val = var_n_dotdot; /* _n_dotdot on <self:ACrangeExpr> */
if (var_n_dotdot == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6053);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_dotdot,self) on <var_n_dotdot:nullable TDotdot> */
if (unlikely(var_n_dotdot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_dotdot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdot:nullable TDotdot> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6054);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6055);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6056);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6057);
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
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACrangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var = var7;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL11:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$replace_child for (self: ACrangeExpr, ANode, nullable ANode) */
void nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var17 /* : TDotdot */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AExpr */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : TCbra */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
val* var47 /* : nullable AAnnotations */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6064);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6065);
fatal_exit(1);
}
{
nitc__parser_prod___ACrangeExpr___n_obra_61d(self, var_new_child); /* Direct call parser_prod$ACrangeExpr$n_obra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6068);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AExpr> */
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
cltype14 = type_nitc__AExpr.color;
idtype15 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6069);
fatal_exit(1);
}
{
nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ACrangeExpr$n_expr= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:ACrangeExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6072);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TDotdot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TDotdot> */
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
/* <var_new_child:nullable ANode> isa TDotdot */
cltype24 = type_nitc__TDotdot.color;
idtype25 = type_nitc__TDotdot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TDotdot", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6073);
fatal_exit(1);
}
{
nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ARangeExpr__n_dotdot_61d(self, var_new_child); /* Direct call parser_prod$ACrangeExpr$n_dotdot= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6076);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype34 = type_nitc__AExpr.color;
idtype35 = type_nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6077);
fatal_exit(1);
}
{
nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$ACrangeExpr$n_expr2= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6080);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var37,var_old_child) on <var37:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var37,var_other) on <var37:TCbra> */
var42 = var37 == var_other;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
/* <var_new_child:nullable ANode> isa TCbra */
cltype44 = type_nitc__TCbra.color;
idtype45 = type_nitc__TCbra.id;
if(var_new_child == NULL) {
var43 = 0;
} else {
if(cltype44 >= var_new_child->type->table_size) {
var43 = 0;
} else {
var43 = var_new_child->type->type_table[cltype44] == idtype45;
}
}
if (unlikely(!var43)) {
var_class_name46 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6081);
fatal_exit(1);
}
{
nitc__parser_prod___ACrangeExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$ACrangeExpr$n_cbra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
if (var47 == NULL) {
var48 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var47,var_old_child) on <var47:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var47,var_other) on <var47:nullable AAnnotations(AAnnotations)> */
var53 = var47 == var_other;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype55 = type_nullable__nitc__AAnnotations.color;
idtype56 = type_nullable__nitc__AAnnotations.id;
if(var_new_child == NULL) {
var54 = 1;
} else {
if(cltype55 >= var_new_child->type->table_size) {
var54 = 0;
} else {
var54 = var_new_child->type->type_table[cltype55] == idtype56;
}
}
if (unlikely(!var54)) {
var_class_name57 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6085);
fatal_exit(1);
}
{
nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ACrangeExpr$n_annotations= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$n_obra= for (self: ACrangeExpr, TObra) */
void nitc__parser_prod___ACrangeExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_obra].val = var_node; /* _n_obra on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$n_expr= for (self: ACrangeExpr, AExpr) */
void nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$n_dotdot= for (self: ACrangeExpr, TDotdot) */
void nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ARangeExpr__n_dotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val = var_node; /* _n_dotdot on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TDotdot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$n_expr2= for (self: ACrangeExpr, AExpr) */
void nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$n_cbra= for (self: ACrangeExpr, TCbra) */
void nitc__parser_prod___ACrangeExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACrangeExpr$n_annotations= for (self: ACrangeExpr, nullable AAnnotations) */
void nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACrangeExpr> */
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
/* method parser_prod$ACrangeExpr$visit_all for (self: ACrangeExpr, Visitor) */
void nitc__parser_prod___ACrangeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : TDotdot */;
val* var3 /* : AExpr */;
val* var4 /* : TCbra */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6124);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6125);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:ACrangeExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6126);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6127);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6128);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$init_aorangeexpr for (self: AOrangeExpr, nullable TObra, nullable AExpr, nullable TDotdot, nullable AExpr, nullable TObra, nullable AAnnotations) */
void nitc__parser_prod___AOrangeExpr___init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_dotdot /* var n_dotdot: nullable TDotdot */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TObra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AOrangeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_expr = p1;
var_n_dotdot = p2;
var_n_expr2 = p3;
var_n_cbra = p4;
var_n_annotations = p5;
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6142);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6143);
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
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6144);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6145);
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
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_dotdot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6146);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val = var_n_dotdot; /* _n_dotdot on <self:AOrangeExpr> */
if (var_n_dotdot == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6147);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_dotdot,self) on <var_n_dotdot:nullable TDotdot> */
if (unlikely(var_n_dotdot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_dotdot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdot:nullable TDotdot> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6148);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6149);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6150);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6151);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_cbra,self) on <var_n_cbra:nullable TObra> */
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TObra> */
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOrangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var = var7;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL11:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$replace_child for (self: AOrangeExpr, ANode, nullable ANode) */
void nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var17 /* : TDotdot */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AExpr */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : TObra */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
val* var47 /* : nullable AAnnotations */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6158);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6159);
fatal_exit(1);
}
{
nitc__parser_prod___AOrangeExpr___n_obra_61d(self, var_new_child); /* Direct call parser_prod$AOrangeExpr$n_obra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6162);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AExpr> */
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
cltype14 = type_nitc__AExpr.color;
idtype15 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6163);
fatal_exit(1);
}
{
nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AOrangeExpr$n_expr= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:AOrangeExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6166);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TDotdot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TDotdot> */
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
/* <var_new_child:nullable ANode> isa TDotdot */
cltype24 = type_nitc__TDotdot.color;
idtype25 = type_nitc__TDotdot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TDotdot", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6167);
fatal_exit(1);
}
{
nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ARangeExpr__n_dotdot_61d(self, var_new_child); /* Direct call parser_prod$AOrangeExpr$n_dotdot= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6170);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype34 = type_nitc__AExpr.color;
idtype35 = type_nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6171);
fatal_exit(1);
}
{
nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AOrangeExpr$n_expr2= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6174);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var37,var_old_child) on <var37:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var37,var_other) on <var37:TObra> */
var42 = var37 == var_other;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
/* <var_new_child:nullable ANode> isa TObra */
cltype44 = type_nitc__TObra.color;
idtype45 = type_nitc__TObra.id;
if(var_new_child == NULL) {
var43 = 0;
} else {
if(cltype44 >= var_new_child->type->table_size) {
var43 = 0;
} else {
var43 = var_new_child->type->type_table[cltype44] == idtype45;
}
}
if (unlikely(!var43)) {
var_class_name46 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6175);
fatal_exit(1);
}
{
nitc__parser_prod___AOrangeExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$AOrangeExpr$n_cbra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var47 == NULL) {
var48 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var47,var_old_child) on <var47:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var47,var_other) on <var47:nullable AAnnotations(AAnnotations)> */
var53 = var47 == var_other;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype55 = type_nullable__nitc__AAnnotations.color;
idtype56 = type_nullable__nitc__AAnnotations.id;
if(var_new_child == NULL) {
var54 = 1;
} else {
if(cltype55 >= var_new_child->type->table_size) {
var54 = 0;
} else {
var54 = var_new_child->type->type_table[cltype55] == idtype56;
}
}
if (unlikely(!var54)) {
var_class_name57 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6179);
fatal_exit(1);
}
{
nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AOrangeExpr$n_annotations= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$n_obra= for (self: AOrangeExpr, TObra) */
void nitc__parser_prod___AOrangeExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_obra].val = var_node; /* _n_obra on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$n_expr= for (self: AOrangeExpr, AExpr) */
void nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$n_dotdot= for (self: AOrangeExpr, TDotdot) */
void nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ARangeExpr__n_dotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val = var_node; /* _n_dotdot on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TDotdot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$n_expr2= for (self: AOrangeExpr, AExpr) */
void nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$n_cbra= for (self: AOrangeExpr, TObra) */
void nitc__parser_prod___AOrangeExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrangeExpr$n_annotations= for (self: AOrangeExpr, nullable AAnnotations) */
void nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOrangeExpr> */
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
/* method parser_prod$AOrangeExpr$visit_all for (self: AOrangeExpr, Visitor) */
void nitc__parser_prod___AOrangeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : AExpr */;
val* var2 /* : TDotdot */;
val* var3 /* : AExpr */;
val* var4 /* : TObra */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6218);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6219);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:AOrangeExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6220);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6221);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6222);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AArrayExpr$init_aarrayexpr for (self: AArrayExpr, nullable TObra, Collection[Object], nullable AType, nullable TCbra, nullable AAnnotations) */
void nitc__parser_prod___AArrayExpr___init_aarrayexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AArrayExpr> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_exprs = p1;
var_n_type = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6235);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AArrayExpr> */
if (var_n_obra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6236);
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
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_type].val = var_n_type; /* _n_type on <self:AArrayExpr> */
if (var_n_type == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_type,((val*)NULL)) on <var_n_type:nullable AType> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_type, var_other); /* == on <var_n_type:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL10:(void)0;
}
}
} else {
}
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6240);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AArrayExpr> */
if (var_n_cbra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6241);
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
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AArrayExpr> */
if (var_n_annotations == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AArrayExpr$replace_child for (self: AArrayExpr, ANode, nullable ANode) */
void nitc__parser_prod___AArrayExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6248);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6249);
fatal_exit(1);
}
{
nitc__parser_prod___AArrayExpr___n_obra_61d(self, var_new_child); /* Direct call parser_prod$AArrayExpr$n_obra= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
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
var11 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
if (var11 == NULL) {
var12 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var11,var_old_child) on <var11:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:nullable AType(AType)> */
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
cltype19 = type_nullable__nitc__AType.color;
idtype20 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6254);
fatal_exit(1);
}
{
nitc__parser_prod___AArrayExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod$AArrayExpr$n_type= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6257);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var22,var_old_child) on <var22:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var22,var_other) on <var22:TCbra> */
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
cltype29 = type_nitc__TCbra.color;
idtype30 = type_nitc__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6258);
fatal_exit(1);
}
{
nitc__parser_prod___AArrayExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$AArrayExpr$n_cbra= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
var32 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
if (var32 == NULL) {
var33 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var32,var_old_child) on <var32:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var32,var_other) on <var32:nullable AAnnotations(AAnnotations)> */
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
cltype40 = type_nullable__nitc__AAnnotations.color;
idtype41 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6262);
fatal_exit(1);
}
{
nitc__parser_prod___AArrayExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AArrayExpr$n_annotations= on <self:AArrayExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AArrayExpr$n_obra= for (self: AArrayExpr, TObra) */
void nitc__parser_prod___AArrayExpr___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_obra].val = var_node; /* _n_obra on <self:AArrayExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AArrayExpr$n_type= for (self: AArrayExpr, nullable AType) */
void nitc__parser_prod___AArrayExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_type].val = var_node; /* _n_type on <self:AArrayExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AType> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AArrayExpr$n_cbra= for (self: AArrayExpr, TCbra) */
void nitc__parser_prod___AArrayExpr___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_cbra].val = var_node; /* _n_cbra on <self:AArrayExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AArrayExpr$n_annotations= for (self: AArrayExpr, nullable AAnnotations) */
void nitc__parser_prod___AArrayExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AArrayExpr> */
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
/* method parser_prod$AArrayExpr$visit_all for (self: AArrayExpr, Visitor) */
void nitc__parser_prod___AArrayExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : nullable AType */;
val* var5 /* : TCbra */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_obra].val; /* _n_obra on <self:AArrayExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6291);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_cbra].val; /* _n_cbra on <self:AArrayExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6294);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AArrayExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ASelfExpr$init_aselfexpr for (self: ASelfExpr, nullable TKwself, nullable AAnnotations) */
void nitc__parser_prod___ASelfExpr___init_aselfexpr(val* self, val* p0, val* p1) {
val* var_n_kwself /* var n_kwself: nullable TKwself */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ASelfExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwself = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwself == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6304);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6305);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwself,self) on <var_n_kwself:nullable TKwself> */
if (unlikely(var_n_kwself == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwself->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwself:nullable TKwself> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASelfExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASelfExpr$replace_child for (self: ASelfExpr, ANode, nullable ANode) */
void nitc__parser_prod___ASelfExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwself> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwself(TKwself)> */
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
cltype = type_nitc__TKwself.color;
idtype = type_nitc__TKwself.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6313);
fatal_exit(1);
}
{
nitc__parser_prod___ASelfExpr___n_kwself_61d(self, var_new_child); /* Direct call parser_prod$ASelfExpr$n_kwself= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable AAnnotations(AAnnotations)> */
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
cltype16 = type_nullable__nitc__AAnnotations.color;
idtype17 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6317);
fatal_exit(1);
}
{
nitc__parser_prod___ASelfExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ASelfExpr$n_annotations= on <self:ASelfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASelfExpr$n_kwself= for (self: ASelfExpr, nullable TKwself) */
void nitc__parser_prod___ASelfExpr___n_kwself_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwself */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASelfExpr___n_kwself].val = var_node; /* _n_kwself on <self:ASelfExpr> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6325);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwself> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwself> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASelfExpr$n_annotations= for (self: ASelfExpr, nullable AAnnotations) */
void nitc__parser_prod___ASelfExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASelfExpr> */
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
/* method parser_prod$ASelfExpr$visit_all for (self: ASelfExpr, Visitor) */
void nitc__parser_prod___ASelfExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwself */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASelfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AImplicitSelfExpr$init_aimplicitselfexpr for (self: AImplicitSelfExpr) */
void nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(val* self) {
{
{ /* Inline kernel$Object$init (self) on <self:AImplicitSelfExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AImplicitSelfExpr$replace_child for (self: AImplicitSelfExpr, ANode, nullable ANode) */
void nitc__parser_prod___AImplicitSelfExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod$AImplicitSelfExpr$visit_all for (self: AImplicitSelfExpr, Visitor) */
void nitc__parser_prod___AImplicitSelfExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod$ATrueExpr$init_atrueexpr for (self: ATrueExpr, nullable TKwtrue, nullable AAnnotations) */
void nitc__parser_prod___ATrueExpr___init_atrueexpr(val* self, val* p0, val* p1) {
val* var_n_kwtrue /* var n_kwtrue: nullable TKwtrue */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ATrueExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwtrue = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwtrue == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6361);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6362);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwtrue,self) on <var_n_kwtrue:nullable TKwtrue> */
if (unlikely(var_n_kwtrue == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwtrue->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtrue:nullable TKwtrue> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATrueExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATrueExpr$replace_child for (self: ATrueExpr, ANode, nullable ANode) */
void nitc__parser_prod___ATrueExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6369);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwtrue> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwtrue> */
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
cltype = type_nitc__TKwtrue.color;
idtype = type_nitc__TKwtrue.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6370);
fatal_exit(1);
}
{
nitc__parser_prod___ATrueExpr___n_kwtrue_61d(self, var_new_child); /* Direct call parser_prod$ATrueExpr$n_kwtrue= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6374);
fatal_exit(1);
}
{
nitc__parser_prod___ATrueExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ATrueExpr$n_annotations= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATrueExpr$n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void nitc__parser_prod___ATrueExpr___n_kwtrue_61d(val* self, val* p0) {
val* var_node /* var node: TKwtrue */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATrueExpr___n_kwtrue].val = var_node; /* _n_kwtrue on <self:ATrueExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwtrue> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtrue> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATrueExpr$n_annotations= for (self: ATrueExpr, nullable AAnnotations) */
void nitc__parser_prod___ATrueExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATrueExpr> */
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
/* method parser_prod$ATrueExpr$visit_all for (self: ATrueExpr, Visitor) */
void nitc__parser_prod___ATrueExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwtrue */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6393);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AFalseExpr$init_afalseexpr for (self: AFalseExpr, nullable TKwfalse, nullable AAnnotations) */
void nitc__parser_prod___AFalseExpr___init_afalseexpr(val* self, val* p0, val* p1) {
val* var_n_kwfalse /* var n_kwfalse: nullable TKwfalse */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AFalseExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwfalse = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwfalse == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6403);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6404);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwfalse,self) on <var_n_kwfalse:nullable TKwfalse> */
if (unlikely(var_n_kwfalse == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwfalse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfalse:nullable TKwfalse> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFalseExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFalseExpr$replace_child for (self: AFalseExpr, ANode, nullable ANode) */
void nitc__parser_prod___AFalseExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6411);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwfalse> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwfalse> */
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
cltype = type_nitc__TKwfalse.color;
idtype = type_nitc__TKwfalse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6412);
fatal_exit(1);
}
{
nitc__parser_prod___AFalseExpr___n_kwfalse_61d(self, var_new_child); /* Direct call parser_prod$AFalseExpr$n_kwfalse= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6416);
fatal_exit(1);
}
{
nitc__parser_prod___AFalseExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AFalseExpr$n_annotations= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFalseExpr$n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void nitc__parser_prod___AFalseExpr___n_kwfalse_61d(val* self, val* p0) {
val* var_node /* var node: TKwfalse */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val = var_node; /* _n_kwfalse on <self:AFalseExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwfalse> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfalse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AFalseExpr$n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
void nitc__parser_prod___AFalseExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFalseExpr> */
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
/* method parser_prod$AFalseExpr$visit_all for (self: AFalseExpr, Visitor) */
void nitc__parser_prod___AFalseExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6435);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ANullExpr$init_anullexpr for (self: ANullExpr, nullable TKwnull, nullable AAnnotations) */
void nitc__parser_prod___ANullExpr___init_anullexpr(val* self, val* p0, val* p1) {
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ANullExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwnull = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwnull == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6445);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6446);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwnull->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ANullExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANullExpr$replace_child for (self: ANullExpr, ANode, nullable ANode) */
void nitc__parser_prod___ANullExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6453);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwnull> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwnull> */
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
cltype = type_nitc__TKwnull.color;
idtype = type_nitc__TKwnull.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6454);
fatal_exit(1);
}
{
nitc__parser_prod___ANullExpr___n_kwnull_61d(self, var_new_child); /* Direct call parser_prod$ANullExpr$n_kwnull= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6458);
fatal_exit(1);
}
{
nitc__parser_prod___ANullExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ANullExpr$n_annotations= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANullExpr$n_kwnull= for (self: ANullExpr, TKwnull) */
void nitc__parser_prod___ANullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:ANullExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANullExpr$n_annotations= for (self: ANullExpr, nullable AAnnotations) */
void nitc__parser_prod___ANullExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ANullExpr> */
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
/* method parser_prod$ANullExpr$visit_all for (self: ANullExpr, Visitor) */
void nitc__parser_prod___ANullExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6477);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIntegerExpr$init_aintegerexpr for (self: AIntegerExpr, nullable TInteger, nullable AAnnotations) */
void nitc__parser_prod___AIntegerExpr___init_aintegerexpr(val* self, val* p0, val* p1) {
val* var_n_integer /* var n_integer: nullable TInteger */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AIntegerExpr> */
RET_LABEL1:(void)0;
}
}
var_n_integer = p0;
var_n_annotations = p1;
if (unlikely(var_n_integer == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6487);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val = var_n_integer; /* _n_integer on <self:AIntegerExpr> */
if (var_n_integer == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6488);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_integer,self) on <var_n_integer:nullable TInteger> */
if (unlikely(var_n_integer == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_integer->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_integer:nullable TInteger> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AIntegerExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIntegerExpr$replace_child for (self: AIntegerExpr, ANode, nullable ANode) */
void nitc__parser_prod___AIntegerExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TInteger */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6495);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TInteger> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TInteger> */
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
/* <var_new_child:nullable ANode> isa TInteger */
cltype = type_nitc__TInteger.color;
idtype = type_nitc__TInteger.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TInteger", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6496);
fatal_exit(1);
}
{
nitc__parser_prod___AIntegerExpr___n_integer_61d(self, var_new_child); /* Direct call parser_prod$AIntegerExpr$n_integer= on <self:AIntegerExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntegerExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6500);
fatal_exit(1);
}
{
nitc__parser_prod___AIntegerExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AIntegerExpr$n_annotations= on <self:AIntegerExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIntegerExpr$n_integer= for (self: AIntegerExpr, TInteger) */
void nitc__parser_prod___AIntegerExpr___n_integer_61d(val* self, val* p0) {
val* var_node /* var node: TInteger */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val = var_node; /* _n_integer on <self:AIntegerExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TInteger> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TInteger> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIntegerExpr$n_annotations= for (self: AIntegerExpr, nullable AAnnotations) */
void nitc__parser_prod___AIntegerExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AIntegerExpr> */
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
/* method parser_prod$AIntegerExpr$visit_all for (self: AIntegerExpr, Visitor) */
void nitc__parser_prod___AIntegerExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TInteger */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6519);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntegerExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AFloatExpr$init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void nitc__parser_prod___AFloatExpr___init_afloatexpr(val* self, val* p0, val* p1) {
val* var_n_float /* var n_float: nullable TFloat */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AFloatExpr> */
RET_LABEL1:(void)0;
}
}
var_n_float = p0;
var_n_annotations = p1;
if (unlikely(var_n_float == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6529);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6530);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_float,self) on <var_n_float:nullable TFloat> */
if (unlikely(var_n_float == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_float->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_float:nullable TFloat> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFloatExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFloatExpr$replace_child for (self: AFloatExpr, ANode, nullable ANode) */
void nitc__parser_prod___AFloatExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6537);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TFloat> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TFloat> */
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
cltype = type_nitc__TFloat.color;
idtype = type_nitc__TFloat.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6538);
fatal_exit(1);
}
{
nitc__parser_prod___AFloatExpr___n_float_61d(self, var_new_child); /* Direct call parser_prod$AFloatExpr$n_float= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6542);
fatal_exit(1);
}
{
nitc__parser_prod___AFloatExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AFloatExpr$n_annotations= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFloatExpr$n_float= for (self: AFloatExpr, TFloat) */
void nitc__parser_prod___AFloatExpr___n_float_61d(val* self, val* p0) {
val* var_node /* var node: TFloat */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val = var_node; /* _n_float on <self:AFloatExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TFloat> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TFloat> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AFloatExpr$n_annotations= for (self: AFloatExpr, nullable AAnnotations) */
void nitc__parser_prod___AFloatExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFloatExpr> */
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
/* method parser_prod$AFloatExpr$visit_all for (self: AFloatExpr, Visitor) */
void nitc__parser_prod___AFloatExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6561);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ACharExpr$init_acharexpr for (self: ACharExpr, nullable TChar, nullable AAnnotations) */
void nitc__parser_prod___ACharExpr___init_acharexpr(val* self, val* p0, val* p1) {
val* var_n_char /* var n_char: nullable TChar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ACharExpr> */
RET_LABEL1:(void)0;
}
}
var_n_char = p0;
var_n_annotations = p1;
if (unlikely(var_n_char == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6571);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6572);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_char,self) on <var_n_char:nullable TChar> */
if (unlikely(var_n_char == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_char->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_char:nullable TChar> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACharExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACharExpr$replace_child for (self: ACharExpr, ANode, nullable ANode) */
void nitc__parser_prod___ACharExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6579);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TChar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TChar> */
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
cltype = type_nitc__TChar.color;
idtype = type_nitc__TChar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6580);
fatal_exit(1);
}
{
nitc__parser_prod___ACharExpr___n_char_61d(self, var_new_child); /* Direct call parser_prod$ACharExpr$n_char= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6584);
fatal_exit(1);
}
{
nitc__parser_prod___ACharExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ACharExpr$n_annotations= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACharExpr$n_char= for (self: ACharExpr, TChar) */
void nitc__parser_prod___ACharExpr___n_char_61d(val* self, val* p0) {
val* var_node /* var node: TChar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val = var_node; /* _n_char on <self:ACharExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TChar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TChar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACharExpr$n_annotations= for (self: ACharExpr, nullable AAnnotations) */
void nitc__parser_prod___ACharExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACharExpr> */
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
/* method parser_prod$ACharExpr$visit_all for (self: ACharExpr, Visitor) */
void nitc__parser_prod___ACharExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6603);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStringExpr$init_astringexpr for (self: AStringExpr, nullable TString, nullable AAnnotations) */
void nitc__parser_prod___AStringExpr___init_astringexpr(val* self, val* p0, val* p1) {
val* var_n_string /* var n_string: nullable TString */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
var_n_annotations = p1;
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6613);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6614);
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
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStringExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStringExpr$replace_child for (self: AStringExpr, ANode, nullable ANode) */
void nitc__parser_prod___AStringExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6621);
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
/* <var_new_child:nullable ANode> isa TString */
cltype = type_nitc__TString.color;
idtype = type_nitc__TString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6622);
fatal_exit(1);
}
{
nitc__parser_prod___AStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod$AStringExpr$n_string= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AAnnotations(AAnnotations)> */
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
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6626);
fatal_exit(1);
}
{
nitc__parser_prod___AStringExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AStringExpr$n_annotations= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStringExpr$n_string= for (self: AStringExpr, Token) */
void nitc__parser_prod___AStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStringExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStringExpr$n_annotations= for (self: AStringExpr, nullable AAnnotations) */
void nitc__parser_prod___AStringExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStringExpr> */
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
/* method parser_prod$AStringExpr$visit_all for (self: AStringExpr, Visitor) */
void nitc__parser_prod___AStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6645);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStartStringExpr$init_astartstringexpr for (self: AStartStringExpr, nullable TStartString) */
void nitc__parser_prod___AStartStringExpr___init_astartstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TStartString */;
{
{ /* Inline kernel$Object$init (self) on <self:AStartStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6654);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6655);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_string,self) on <var_n_string:nullable TStartString> */
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TStartString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStartStringExpr$replace_child for (self: AStartStringExpr, ANode, nullable ANode) */
void nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6660);
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
/* <var_new_child:nullable ANode> isa TStartString */
cltype = type_nitc__TStartString.color;
idtype = type_nitc__TStartString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6661);
fatal_exit(1);
}
{
nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod$AStartStringExpr$n_string= on <self:AStartStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStartStringExpr$n_string= for (self: AStartStringExpr, Token) */
void nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStartStringExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStartStringExpr$visit_all for (self: AStartStringExpr, Visitor) */
void nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6675);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AMidStringExpr$init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void nitc__parser_prod___AMidStringExpr___init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
{
{ /* Inline kernel$Object$init (self) on <self:AMidStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6683);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6684);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_string,self) on <var_n_string:nullable TMidString> */
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TMidString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMidStringExpr$replace_child for (self: AMidStringExpr, ANode, nullable ANode) */
void nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6689);
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
/* <var_new_child:nullable ANode> isa TMidString */
cltype = type_nitc__TMidString.color;
idtype = type_nitc__TMidString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6690);
fatal_exit(1);
}
{
nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod$AMidStringExpr$n_string= on <self:AMidStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMidStringExpr$n_string= for (self: AMidStringExpr, Token) */
void nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AMidStringExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMidStringExpr$visit_all for (self: AMidStringExpr, Visitor) */
void nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6704);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AEndStringExpr$init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void nitc__parser_prod___AEndStringExpr___init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
{
{ /* Inline kernel$Object$init (self) on <self:AEndStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6712);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6713);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_string,self) on <var_n_string:nullable TEndString> */
if (unlikely(var_n_string == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TEndString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEndStringExpr$replace_child for (self: AEndStringExpr, ANode, nullable ANode) */
void nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6718);
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
/* <var_new_child:nullable ANode> isa TEndString */
cltype = type_nitc__TEndString.color;
idtype = type_nitc__TEndString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6719);
fatal_exit(1);
}
{
nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod$AEndStringExpr$n_string= on <self:AEndStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AEndStringExpr$n_string= for (self: AEndStringExpr, Token) */
void nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AEndStringExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEndStringExpr$visit_all for (self: AEndStringExpr, Visitor) */
void nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6733);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ASuperstringExpr$init_asuperstringexpr for (self: ASuperstringExpr, Collection[Object], nullable AAnnotations) */
void nitc__parser_prod___ASuperstringExpr___init_asuperstringexpr(val* self, val* p0, val* p1) {
val* var_n_exprs /* var n_exprs: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ASuperstringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
var_n_annotations = p1;
{
{ /* Inline parser_nodes$ASuperstringExpr$n_exprs (self) on <self:ASuperstringExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASuperstringExpr$replace_child for (self: ASuperstringExpr, ANode, nullable ANode) */
void nitc__parser_prod___ASuperstringExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
{ /* Inline parser_nodes$ASuperstringExpr$n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
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
var4 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var4,var_old_child) on <var4:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:nullable AAnnotations(AAnnotations)> */
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
cltype = type_nullable__nitc__AAnnotations.color;
idtype = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6751);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperstringExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ASuperstringExpr$n_annotations= on <self:ASuperstringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASuperstringExpr$n_annotations= for (self: ASuperstringExpr, nullable AAnnotations) */
void nitc__parser_prod___ASuperstringExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperstringExpr> */
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
/* method parser_prod$ASuperstringExpr$visit_all for (self: ASuperstringExpr, Visitor) */
void nitc__parser_prod___ASuperstringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
{
{ /* Inline parser_nodes$ASuperstringExpr$n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AParExpr$init_aparexpr for (self: AParExpr, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
void nitc__parser_prod___AParExpr___init_aparexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AParExpr> */
RET_LABEL1:(void)0;
}
}
var_n_opar = p0;
var_n_expr = p1;
var_n_cpar = p2;
var_n_annotations = p3;
if (unlikely(var_n_opar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6777);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6778);
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
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6779);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6780);
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
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_cpar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6781);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6782);
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
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var = var5;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AParExpr$replace_child for (self: AParExpr, ANode, nullable ANode) */
void nitc__parser_prod___AParExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6789);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6790);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___n_opar_61d(self, var_new_child); /* Direct call parser_prod$AParExpr$n_opar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6793);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AExpr> */
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
cltype14 = type_nitc__AExpr.color;
idtype15 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6794);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AParExpr$n_expr= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6797);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TCpar> */
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
cltype24 = type_nitc__TCpar.color;
idtype25 = type_nitc__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6798);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___n_cpar_61d(self, var_new_child); /* Direct call parser_prod$AParExpr$n_cpar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:nullable AAnnotations(AAnnotations)> */
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
cltype35 = type_nullable__nitc__AAnnotations.color;
idtype36 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6802);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AParExpr$n_annotations= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AParExpr$n_opar= for (self: AParExpr, TOpar) */
void nitc__parser_prod___AParExpr___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val = var_node; /* _n_opar on <self:AParExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParExpr$n_expr= for (self: AParExpr, AExpr) */
void nitc__parser_prod___AParExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val = var_node; /* _n_expr on <self:AParExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParExpr$n_cpar= for (self: AParExpr, TCpar) */
void nitc__parser_prod___AParExpr___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val = var_node; /* _n_cpar on <self:AParExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParExpr$n_annotations= for (self: AParExpr, nullable AAnnotations) */
void nitc__parser_prod___AParExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParExpr> */
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
/* method parser_prod$AParExpr$visit_all for (self: AParExpr, Visitor) */
void nitc__parser_prod___AParExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : AExpr */;
val* var2 /* : TCpar */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6831);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6832);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6833);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAsCastExpr$init_aascastexpr for (self: AAsCastExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
void nitc__parser_prod___AAsCastExpr___init_aascastexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
short int var /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AAsCastExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_type = p3;
var_n_cpar = p4;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6846);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6847);
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
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6848);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6849);
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
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6852);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6853);
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
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
if (var_n_cpar == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAsCastExpr$replace_child for (self: AAsCastExpr, ANode, nullable ANode) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6860);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6861);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AAsCastExpr$n_expr= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6864);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6865);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(self, var_new_child); /* Direct call parser_prod$AAsCastExpr$n_kwas= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:nullable TOpar(TOpar)> */
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
cltype25 = type_nullable__nitc__TOpar.color;
idtype26 = type_nullable__nitc__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6869);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_opar_61d(self, var_new_child); /* Direct call parser_prod$AAsCastExpr$n_opar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6872);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6873);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod$AAsCastExpr$n_type= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var38,var_old_child) on <var38:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var38,var_other) on <var38:nullable TCpar(TCpar)> */
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
cltype46 = type_nullable__nitc__TCpar.color;
idtype47 = type_nullable__nitc__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6877);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_cpar_61d(self, var_new_child); /* Direct call parser_prod$AAsCastExpr$n_cpar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAsCastExpr$n_expr= for (self: AAsCastExpr, AExpr) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsCastExpr$n_kwas= for (self: AAsCastExpr, TKwas) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsCastExpr$n_opar= for (self: AAsCastExpr, nullable TOpar) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsCastExpr> */
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
/* method parser_prod$AAsCastExpr$n_type= for (self: AAsCastExpr, AType) */
void nitc__parser_prod___AAsCastExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val = var_node; /* _n_type on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsCastExpr$n_cpar= for (self: AAsCastExpr, nullable TCpar) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsCastExpr> */
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
/* method parser_prod$AAsCastExpr$visit_all for (self: AAsCastExpr, Visitor) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : AType */;
val* var4 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6911);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6912);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6914);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$init_aasnotnullexpr for (self: AAsNotnullExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
void nitc__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnull /* var n_kwnull: nullable TKwnull */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
short int var /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AAsNotnullExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_kwnot = p3;
var_n_kwnull = p4;
var_n_cpar = p5;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6928);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6929);
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
if (unlikely(var_n_kwas == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6930);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6931);
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
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
}
if (var){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwnot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6934);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6935);
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
RET_LABEL9:(void)0;
}
}
if (unlikely(var_n_kwnull == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6936);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6937);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwnull->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_n_cpar == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$replace_child for (self: AAsNotnullExpr, ANode, nullable ANode) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6944);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6945);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AAsNotnullExpr$n_expr= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6948);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6949);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(self, var_new_child); /* Direct call parser_prod$AAsNotnullExpr$n_kwas= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:nullable TOpar(TOpar)> */
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
cltype25 = type_nullable__nitc__TOpar.color;
idtype26 = type_nullable__nitc__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6953);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_opar_61d(self, var_new_child); /* Direct call parser_prod$AAsNotnullExpr$n_opar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6956);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var28,var_old_child) on <var28:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var28,var_other) on <var28:TKwnot> */
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
cltype35 = type_nitc__TKwnot.color;
idtype36 = type_nitc__TKwnot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6957);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod$AAsNotnullExpr$n_kwnot= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6960);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var38,var_old_child) on <var38:TKwnull> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var38,var_other) on <var38:TKwnull> */
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
cltype45 = type_nitc__TKwnull.color;
idtype46 = type_nitc__TKwnull.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6961);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___n_kwnull_61d(self, var_new_child); /* Direct call parser_prod$AAsNotnullExpr$n_kwnull= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var48 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var48 == NULL) {
var49 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var48,var_old_child) on <var48:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var48,var_other) on <var48:nullable TCpar(TCpar)> */
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
cltype56 = type_nullable__nitc__TCpar.color;
idtype57 = type_nullable__nitc__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6965);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_cpar_61d(self, var_new_child); /* Direct call parser_prod$AAsNotnullExpr$n_cpar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$n_expr= for (self: AAsNotnullExpr, AExpr) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$n_kwas= for (self: AAsNotnullExpr, TKwas) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$n_opar= for (self: AAsNotnullExpr, nullable TOpar) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsNotnullExpr> */
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
/* method parser_prod$AAsNotnullExpr$n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void nitc__parser_prod___AAsNotnullExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void nitc__parser_prod___AAsNotnullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAsNotnullExpr$n_cpar= for (self: AAsNotnullExpr, nullable TCpar) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsNotnullExpr> */
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
/* method parser_prod$AAsNotnullExpr$visit_all for (self: AAsNotnullExpr, Visitor) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwas */;
val* var2 /* : nullable TOpar */;
val* var3 /* : TKwnot */;
val* var4 /* : TKwnull */;
val* var5 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7004);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7005);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7007);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7008);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIssetAttrExpr$init_aissetattrexpr for (self: AIssetAttrExpr, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void nitc__parser_prod___AIssetAttrExpr___init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwisset /* var n_kwisset: nullable TKwisset */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
{
{ /* Inline kernel$Object$init (self) on <self:AIssetAttrExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwisset = p0;
var_n_expr = p1;
var_n_id = p2;
if (unlikely(var_n_kwisset == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7019);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7020);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwisset,self) on <var_n_kwisset:nullable TKwisset> */
if (unlikely(var_n_kwisset == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwisset->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwisset:nullable TKwisset> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7021);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7022);
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
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7023);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7024);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIssetAttrExpr$replace_child for (self: AIssetAttrExpr, ANode, nullable ANode) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7029);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwisset> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwisset> */
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
cltype = type_nitc__TKwisset.color;
idtype = type_nitc__TKwisset.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7030);
fatal_exit(1);
}
{
nitc__parser_prod___AIssetAttrExpr___n_kwisset_61d(self, var_new_child); /* Direct call parser_prod$AIssetAttrExpr$n_kwisset= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7033);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:AExpr> */
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
cltype14 = type_nitc__AExpr.color;
idtype15 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7034);
fatal_exit(1);
}
{
nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AIssetAttrExpr$n_expr= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7037);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TAttrid> */
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
cltype24 = type_nitc__TAttrid.color;
idtype25 = type_nitc__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7038);
fatal_exit(1);
}
{
nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod$AIssetAttrExpr$n_id= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIssetAttrExpr$n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void nitc__parser_prod___AIssetAttrExpr___n_kwisset_61d(val* self, val* p0) {
val* var_node /* var node: TKwisset */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_node; /* _n_kwisset on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwisset> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwisset> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIssetAttrExpr$n_expr= for (self: AIssetAttrExpr, AExpr) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIssetAttrExpr$n_id= for (self: AIssetAttrExpr, TAttrid) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIssetAttrExpr$visit_all for (self: AIssetAttrExpr, Visitor) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwisset */;
val* var1 /* : AExpr */;
val* var2 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7062);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7063);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7064);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$init_adebugtypeexpr for (self: ADebugTypeExpr, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void nitc__parser_prod___ADebugTypeExpr___init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwdebug /* var n_kwdebug: nullable TKwdebug */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel$Object$init (self) on <self:ADebugTypeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwdebug = p0;
var_n_kwtype = p1;
var_n_expr = p2;
var_n_type = p3;
if (unlikely(var_n_kwdebug == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7075);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7076);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdebug,self) on <var_n_kwdebug:nullable TKwdebug> */
if (unlikely(var_n_kwdebug == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwdebug->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdebug:nullable TKwdebug> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7077);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7078);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwtype->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7079);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7080);
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
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7081);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7082);
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
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$replace_child for (self: ADebugTypeExpr, ANode, nullable ANode) */
void nitc__parser_prod___ADebugTypeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7087);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwdebug> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwdebug> */
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
cltype = type_nitc__TKwdebug.color;
idtype = type_nitc__TKwdebug.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7088);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_kwdebug_61d(self, var_new_child); /* Direct call parser_prod$ADebugTypeExpr$n_kwdebug= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7091);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TKwtype> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TKwtype> */
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
cltype14 = type_nitc__TKwtype.color;
idtype15 = type_nitc__TKwtype.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7092);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_kwtype_61d(self, var_new_child); /* Direct call parser_prod$ADebugTypeExpr$n_kwtype= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7095);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:AExpr> */
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
cltype24 = type_nitc__AExpr.color;
idtype25 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7096);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$ADebugTypeExpr$n_expr= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7099);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:AType> */
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
cltype34 = type_nitc__AType.color;
idtype35 = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7100);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod$ADebugTypeExpr$n_type= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void nitc__parser_prod___ADebugTypeExpr___n_kwdebug_61d(val* self, val* p0) {
val* var_node /* var node: TKwdebug */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_node; /* _n_kwdebug on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwdebug> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdebug> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void nitc__parser_prod___ADebugTypeExpr___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_node; /* _n_kwtype on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$n_expr= for (self: ADebugTypeExpr, AExpr) */
void nitc__parser_prod___ADebugTypeExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val = var_node; /* _n_expr on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$n_type= for (self: ADebugTypeExpr, AType) */
void nitc__parser_prod___ADebugTypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val = var_node; /* _n_type on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ADebugTypeExpr$visit_all for (self: ADebugTypeExpr, Visitor) */
void nitc__parser_prod___ADebugTypeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdebug */;
val* var1 /* : TKwtype */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7129);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7130);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7131);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7132);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AVarargExpr$init_avarargexpr for (self: AVarargExpr, nullable AExpr, nullable TDotdotdot) */
void nitc__parser_prod___AVarargExpr___init_avarargexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
{
{ /* Inline kernel$Object$init (self) on <self:AVarargExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_dotdotdot = p1;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7141);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVarargExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7142);
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
if (unlikely(var_n_dotdotdot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7143);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AVarargExpr> */
if (var_n_dotdotdot == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7144);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot> */
if (unlikely(var_n_dotdotdot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_dotdotdot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarargExpr$replace_child for (self: AVarargExpr, ANode, nullable ANode) */
void nitc__parser_prod___AVarargExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7149);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7150);
fatal_exit(1);
}
{
nitc__parser_prod___AVarargExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AVarargExpr$n_expr= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7153);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TDotdotdot> */
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
cltype14 = type_nitc__TDotdotdot.color;
idtype15 = type_nitc__TDotdotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7154);
fatal_exit(1);
}
{
nitc__parser_prod___AVarargExpr___n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod$AVarargExpr$n_dotdotdot= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVarargExpr$n_expr= for (self: AVarargExpr, AExpr) */
void nitc__parser_prod___AVarargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val = var_node; /* _n_expr on <self:AVarargExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarargExpr$n_dotdotdot= for (self: AVarargExpr, TDotdotdot) */
void nitc__parser_prod___AVarargExpr___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdotdot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AVarargExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TDotdotdot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdotdot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVarargExpr$visit_all for (self: AVarargExpr, Visitor) */
void nitc__parser_prod___AVarargExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TDotdotdot */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7173);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7174);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ANamedargExpr$init_anamedargexpr for (self: ANamedargExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nitc__parser_prod___ANamedargExpr___init_anamedargexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ANamedargExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign = p1;
var_n_expr = p2;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7184);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val = var_n_id; /* _n_id on <self:ANamedargExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7185);
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
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7186);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ANamedargExpr> */
if (var_n_assign == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7187);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7188);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANamedargExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7189);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANamedargExpr$replace_child for (self: ANamedargExpr, ANode, nullable ANode) */
void nitc__parser_prod___ANamedargExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TAssign */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7194);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7195);
fatal_exit(1);
}
{
nitc__parser_prod___ANamedargExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod$ANamedargExpr$n_id= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7198);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype14 = type_nitc__TAssign.color;
idtype15 = type_nitc__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7199);
fatal_exit(1);
}
{
nitc__parser_prod___ANamedargExpr___n_assign_61d(self, var_new_child); /* Direct call parser_prod$ANamedargExpr$n_assign= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7202);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:AExpr> */
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
cltype24 = type_nitc__AExpr.color;
idtype25 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7203);
fatal_exit(1);
}
{
nitc__parser_prod___ANamedargExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$ANamedargExpr$n_expr= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANamedargExpr$n_id= for (self: ANamedargExpr, TId) */
void nitc__parser_prod___ANamedargExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val = var_node; /* _n_id on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANamedargExpr$n_assign= for (self: ANamedargExpr, TAssign) */
void nitc__parser_prod___ANamedargExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val = var_node; /* _n_assign on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANamedargExpr$n_expr= for (self: ANamedargExpr, AExpr) */
void nitc__parser_prod___ANamedargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val = var_node; /* _n_expr on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
