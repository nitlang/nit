#include "nit__parser_prod.sep.0.h"
/* method parser_prod#APercentExpr#replace_child for (self: APercentExpr, ANode, nullable ANode) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4638);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4639);
fatal_exit(1);
}
{
nit__parser_prod___APercentExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APercentExpr#n_expr= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APercentExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4642);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:Token> */
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
/* <var_new_child:nullable ANode> isa TPercent */
cltype14 = type_nit__TPercent.color;
idtype15 = type_nit__TPercent.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercent", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4643);
fatal_exit(1);
}
{
nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#APercentExpr#n_op= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4646);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4647);
fatal_exit(1);
}
{
nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#APercentExpr#n_expr2= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr= for (self: APercentExpr, AExpr) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APercentExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_op= for (self: APercentExpr, Token) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:APercentExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr2= for (self: APercentExpr, AExpr) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APercentExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#visit_all for (self: APercentExpr, Visitor) */
void nit__parser_prod___APercentExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4671);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APercentExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4672);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4673);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#init_apipeexpr for (self: APipeExpr, nullable AExpr, nullable TPipe, nullable AExpr) */
void nit__parser_prod___APipeExpr___init_apipeexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TPipe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:APipeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4683);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APipeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4684);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4685);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:APipeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4686);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPipe> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPipe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4687);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APipeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4688);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#replace_child for (self: APipeExpr, ANode, nullable ANode) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APipeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4693);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4694);
fatal_exit(1);
}
{
nit__parser_prod___APipeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APipeExpr#n_expr= on <self:APipeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APipeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4697);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:Token> */
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
/* <var_new_child:nullable ANode> isa TPipe */
cltype14 = type_nit__TPipe.color;
idtype15 = type_nit__TPipe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPipe", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4698);
fatal_exit(1);
}
{
nit__parser_prod___APipeExpr___nit__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#APipeExpr#n_op= on <self:APipeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APipeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4701);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4702);
fatal_exit(1);
}
{
nit__parser_prod___APipeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#APipeExpr#n_expr2= on <self:APipeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#n_expr= for (self: APipeExpr, AExpr) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APipeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#n_op= for (self: APipeExpr, Token) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:APipeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#n_expr2= for (self: APipeExpr, AExpr) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APipeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeExpr#visit_all for (self: APipeExpr, Visitor) */
void nit__parser_prod___APipeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APipeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4726);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APipeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4727);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APipeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4728);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#init_acaretexpr for (self: ACaretExpr, nullable AExpr, nullable TCaret, nullable AExpr) */
void nit__parser_prod___ACaretExpr___init_acaretexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TCaret */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ACaretExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4738);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACaretExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4739);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4740);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ACaretExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4741);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TCaret> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TCaret> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4742);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACaretExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4743);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#replace_child for (self: ACaretExpr, ANode, nullable ANode) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACaretExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4748);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4749);
fatal_exit(1);
}
{
nit__parser_prod___ACaretExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACaretExpr#n_expr= on <self:ACaretExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ACaretExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4752);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:Token> */
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
/* <var_new_child:nullable ANode> isa TCaret */
cltype14 = type_nit__TCaret.color;
idtype15 = type_nit__TCaret.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCaret", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4753);
fatal_exit(1);
}
{
nit__parser_prod___ACaretExpr___nit__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#ACaretExpr#n_op= on <self:ACaretExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ACaretExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4756);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4757);
fatal_exit(1);
}
{
nit__parser_prod___ACaretExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ACaretExpr#n_expr2= on <self:ACaretExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#n_expr= for (self: ACaretExpr, AExpr) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACaretExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#n_op= for (self: ACaretExpr, Token) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ACaretExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#n_expr2= for (self: ACaretExpr, AExpr) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACaretExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretExpr#visit_all for (self: ACaretExpr, Visitor) */
void nit__parser_prod___ACaretExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACaretExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4781);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ACaretExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4782);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ACaretExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4783);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#init_aampexpr for (self: AAmpExpr, nullable AExpr, nullable TAmp, nullable AExpr) */
void nit__parser_prod___AAmpExpr___init_aampexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TAmp */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AAmpExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4793);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAmpExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4794);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4795);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AAmpExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4796);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TAmp> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TAmp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4797);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAmpExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4798);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#replace_child for (self: AAmpExpr, ANode, nullable ANode) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : Token */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AAmpExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4803);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4804);
fatal_exit(1);
}
{
nit__parser_prod___AAmpExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAmpExpr#n_expr= on <self:AAmpExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AAmpExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4807);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:Token> */
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
/* <var_new_child:nullable ANode> isa TAmp */
cltype14 = type_nit__TAmp.color;
idtype15 = type_nit__TAmp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAmp", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4808);
fatal_exit(1);
}
{
nit__parser_prod___AAmpExpr___nit__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AAmpExpr#n_op= on <self:AAmpExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AAmpExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4811);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4812);
fatal_exit(1);
}
{
nit__parser_prod___AAmpExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AAmpExpr#n_expr2= on <self:AAmpExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#n_expr= for (self: AAmpExpr, AExpr) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AAmpExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#n_op= for (self: AAmpExpr, Token) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AAmpExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#n_expr2= for (self: AAmpExpr, AExpr) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAmpExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpExpr#visit_all for (self: AAmpExpr, Visitor) */
void nit__parser_prod___AAmpExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AAmpExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4836);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AAmpExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4837);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AAmpExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4838);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: AUminusExpr, nullable TMinus, nullable AExpr) */
void nit__parser_prod___AUminusExpr___init_auminusexpr(val* self, val* p0, val* p1) {
val* var_n_op /* var n_op: nullable TMinus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AUminusExpr> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
var_n_expr = p1;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4847);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_n_op; /* _n_op on <self:AUminusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4848);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TMinus> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TMinus> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4849);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUminusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4850);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: AUminusExpr, ANode, nullable ANode) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4855);
fatal_exit(1);
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
/* <var_new_child:nullable ANode> isa TMinus */
cltype = type_nit__TMinus.color;
idtype = type_nit__TMinus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4856);
fatal_exit(1);
}
{
nit__parser_prod___AUminusExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AUminusExpr#n_op= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4859);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4860);
fatal_exit(1);
}
{
nit__parser_prod___AUminusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AUminusExpr#n_expr= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_op= for (self: AUminusExpr, Token) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_node; /* _n_op on <self:AUminusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_expr= for (self: AUminusExpr, AExpr) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUminusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#visit_all for (self: AUminusExpr, Visitor) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4879);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4880);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#init_auplusexpr for (self: AUplusExpr, nullable TPlus, nullable AExpr) */
void nit__parser_prod___AUplusExpr___init_auplusexpr(val* self, val* p0, val* p1) {
val* var_n_op /* var n_op: nullable TPlus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AUplusExpr> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
var_n_expr = p1;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4889);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_n_op; /* _n_op on <self:AUplusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4890);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPlus> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPlus> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4891);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUplusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4892);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#replace_child for (self: AUplusExpr, ANode, nullable ANode) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUplusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4897);
fatal_exit(1);
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
/* <var_new_child:nullable ANode> isa TPlus */
cltype = type_nit__TPlus.color;
idtype = type_nit__TPlus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPlus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4898);
fatal_exit(1);
}
{
nit__parser_prod___AUplusExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AUplusExpr#n_op= on <self:AUplusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUplusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4901);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4902);
fatal_exit(1);
}
{
nit__parser_prod___AUplusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AUplusExpr#n_expr= on <self:AUplusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#n_op= for (self: AUplusExpr, Token) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_node; /* _n_op on <self:AUplusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#n_expr= for (self: AUplusExpr, AExpr) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUplusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUplusExpr#visit_all for (self: AUplusExpr, Visitor) */
void nit__parser_prod___AUplusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUplusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4921);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUplusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4922);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#init_autildeexpr for (self: AUtildeExpr, nullable TTilde, nullable AExpr) */
void nit__parser_prod___AUtildeExpr___init_autildeexpr(val* self, val* p0, val* p1) {
val* var_n_op /* var n_op: nullable TTilde */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AUtildeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
var_n_expr = p1;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4931);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_n_op; /* _n_op on <self:AUtildeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4932);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TTilde> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TTilde> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4933);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUtildeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4934);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#replace_child for (self: AUtildeExpr, ANode, nullable ANode) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AExpr */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUtildeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4939);
fatal_exit(1);
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
/* <var_new_child:nullable ANode> isa TTilde */
cltype = type_nit__TTilde.color;
idtype = type_nit__TTilde.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TTilde", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4940);
fatal_exit(1);
}
{
nit__parser_prod___AUtildeExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AUtildeExpr#n_op= on <self:AUtildeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUtildeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4943);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4944);
fatal_exit(1);
}
{
nit__parser_prod___AUtildeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AUtildeExpr#n_expr= on <self:AUtildeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#n_op= for (self: AUtildeExpr, Token) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__AUnaryopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val = var_node; /* _n_op on <self:AUtildeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#n_expr= for (self: AUtildeExpr, AExpr) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUtildeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUtildeExpr#visit_all for (self: AUtildeExpr, Visitor) */
void nit__parser_prod___AUtildeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUnaryopExpr___n_op].val; /* _n_op on <self:AUtildeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4963);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUtildeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4964);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#init_anewexpr for (self: ANewExpr, nullable TKwnew, nullable AType, nullable TId, nullable AExprs) */
void nit__parser_prod___ANewExpr___init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
short int var /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ANewExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwnew = p0;
var_n_type = p1;
var_n_id = p2;
var_n_args = p3;
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4975);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:ANewExpr> */
if (var_n_kwnew == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4976);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew> */
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwnew->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4977);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var_n_type; /* _n_type on <self:ANewExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4978);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var_n_id; /* _n_id on <self:ANewExpr> */
if (var_n_id == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,((val*)NULL)) on <var_n_id:nullable TId> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_id, var_other); /* == on <var_n_id:nullable TId(TId)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4981);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var_n_args; /* _n_args on <self:ANewExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4982);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#replace_child for (self: ANewExpr, ANode, nullable ANode) */
void nit__parser_prod___ANewExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnew */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : AType */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable TId */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : AExprs */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4987);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwnew> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwnew> */
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
/* <var_new_child:nullable ANode> isa TKwnew */
cltype = type_nit__TKwnew.color;
idtype = type_nit__TKwnew.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnew", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4988);
fatal_exit(1);
}
{
nit__parser_prod___ANewExpr___n_kwnew_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_kwnew= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4991);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype14 = type_nit__AType.color;
idtype15 = type_nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4992);
fatal_exit(1);
}
{
nit__parser_prod___ANewExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_type= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable TId(TId)> */
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
/* <var_new_child:nullable ANode> isa nullable TId */
cltype25 = type_nullable__nit__TId.color;
idtype26 = type_nullable__nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4996);
fatal_exit(1);
}
{
nit__parser_prod___ANewExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_id= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4999);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype35 = type_nit__AExprs.color;
idtype36 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5000);
fatal_exit(1);
}
{
nit__parser_prod___ANewExpr___n_args_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_args= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_kwnew= for (self: ANewExpr, TKwnew) */
void nit__parser_prod___ANewExpr___n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: TKwnew */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var_node; /* _n_kwnew on <self:ANewExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnew> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnew> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_type= for (self: ANewExpr, AType) */
void nit__parser_prod___ANewExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var_node; /* _n_type on <self:ANewExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_id= for (self: ANewExpr, nullable TId) */
void nit__parser_prod___ANewExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var_node; /* _n_id on <self:ANewExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TId> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TId(TId)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TId(TId)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_args= for (self: ANewExpr, AExprs) */
void nit__parser_prod___ANewExpr___n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var_node; /* _n_args on <self:ANewExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#visit_all for (self: ANewExpr, Visitor) */
void nit__parser_prod___ANewExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : nullable TId */;
val* var3 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5029);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5030);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5032);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#init_aattrexpr for (self: AAttrExpr, nullable AExpr, nullable TAttrid) */
void nit__parser_prod___AAttrExpr___init_aattrexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
{
{ /* Inline kernel#Object#init (self) on <self:AAttrExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5041);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5042);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5043);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5044);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#replace_child for (self: AAttrExpr, ANode, nullable ANode) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TAttrid */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5049);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5050);
fatal_exit(1);
}
{
nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrExpr#n_expr= on <self:AAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5053);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype14 = type_nit__TAttrid.color;
idtype15 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5054);
fatal_exit(1);
}
{
nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAttrExpr#n_id= on <self:AAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_expr= for (self: AAttrExpr, AExpr) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_id= for (self: AAttrExpr, TAttrid) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#visit_all for (self: AAttrExpr, Visitor) */
void nit__parser_prod___AAttrExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5073);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5074);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#init_aattrassignexpr for (self: AAttrAssignExpr, nullable AExpr, nullable TAttrid, nullable TAssign, nullable AExpr) */
void nit__parser_prod___AAttrAssignExpr___init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AAttrAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
var_n_assign = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5085);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5086);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5087);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5088);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5089);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AAttrAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5090);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5091);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5092);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#replace_child for (self: AAttrAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TAttrid */;
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
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5097);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5098);
fatal_exit(1);
}
{
nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_expr= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5101);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype14 = type_nit__TAttrid.color;
idtype15 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5102);
fatal_exit(1);
}
{
nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_id= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5105);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TAssign> */
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
cltype24 = type_nit__TAssign.color;
idtype25 = type_nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5106);
fatal_exit(1);
}
{
nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_assign= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5109);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AExpr> */
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
cltype34 = type_nit__AExpr.color;
idtype35 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5110);
fatal_exit(1);
}
{
nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_value= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_expr= for (self: AAttrAssignExpr, AExpr) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_id= for (self: AAttrAssignExpr, TAttrid) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_assign= for (self: AAttrAssignExpr, TAssign) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_value= for (self: AAttrAssignExpr, AExpr) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#visit_all for (self: AAttrAssignExpr, Visitor) */
void nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5139);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5140);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5141);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5142);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#init_aattrreassignexpr for (self: AAttrReassignExpr, nullable AExpr, nullable TAttrid, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___AAttrReassignExpr___init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AAttrReassignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5153);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5154);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5155);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5156);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5157);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5158);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5159);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5160);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#replace_child for (self: AAttrReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TAttrid */;
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
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5165);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5166);
fatal_exit(1);
}
{
nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_expr= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5169);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype14 = type_nit__TAttrid.color;
idtype15 = type_nit__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5170);
fatal_exit(1);
}
{
nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_id= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5173);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AAssignOp> */
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
cltype24 = type_nit__AAssignOp.color;
idtype25 = type_nit__AAssignOp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5174);
fatal_exit(1);
}
{
nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_assign_op= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5177);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AExpr> */
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
cltype34 = type_nit__AExpr.color;
idtype35 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5178);
fatal_exit(1);
}
{
nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_value= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_expr= for (self: AAttrReassignExpr, AExpr) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_id= for (self: AAttrReassignExpr, TAttrid) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_assign_op= for (self: AAttrReassignExpr, AAssignOp) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_value= for (self: AAttrReassignExpr, AExpr) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#visit_all for (self: AAttrReassignExpr, Visitor) */
void nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5207);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5208);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5209);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5210);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#init_acallexpr for (self: ACallExpr, nullable AExpr, nullable TId, nullable AExprs) */
void nit__parser_prod___ACallExpr___init_acallexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
{
{ /* Inline kernel#Object#init (self) on <self:ACallExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5220);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5221);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5222);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5223);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5224);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5225);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#replace_child for (self: ACallExpr, ANode, nullable ANode) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TId */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExprs */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5230);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5231);
fatal_exit(1);
}
{
nit__parser_prod___ACallExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACallExpr#n_expr= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5234);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype14 = type_nit__TId.color;
idtype15 = type_nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5235);
fatal_exit(1);
}
{
nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ACallExpr#n_id= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5238);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype24 = type_nit__AExprs.color;
idtype25 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5239);
fatal_exit(1);
}
{
nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ACallExpr#n_args= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_expr= for (self: ACallExpr, AExpr) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_id= for (self: ACallExpr, TId) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_args= for (self: ACallExpr, AExprs) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#visit_all for (self: ACallExpr, Visitor) */
void nit__parser_prod___ACallExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5263);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5264);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5265);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#init_acallassignexpr for (self: ACallAssignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable TAssign, nullable AExpr) */
void nit__parser_prod___ACallAssignExpr___init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ACallAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign = p3;
var_n_value = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5277);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5278);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5279);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5280);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5281);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5282);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5283);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ACallAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5284);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5285);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5286);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#replace_child for (self: ACallAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TId */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExprs */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : TAssign */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : AExpr */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5291);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5292);
fatal_exit(1);
}
{
nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_expr= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5295);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype14 = type_nit__TId.color;
idtype15 = type_nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5296);
fatal_exit(1);
}
{
nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_id= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5299);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype24 = type_nit__AExprs.color;
idtype25 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5300);
fatal_exit(1);
}
{
nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_args= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5303);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype34 = type_nit__TAssign.color;
idtype35 = type_nit__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5304);
fatal_exit(1);
}
{
nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_assign= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5307);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype44 = type_nit__AExpr.color;
idtype45 = type_nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5308);
fatal_exit(1);
}
{
nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_value= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_expr= for (self: ACallAssignExpr, AExpr) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_id= for (self: ACallAssignExpr, TId) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_args= for (self: ACallAssignExpr, AExprs) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_assign= for (self: ACallAssignExpr, TAssign) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_value= for (self: ACallAssignExpr, AExpr) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#visit_all for (self: ACallAssignExpr, Visitor) */
void nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5342);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5343);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5344);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5345);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5346);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#init_acallreassignexpr for (self: ACallReassignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ACallReassignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign_op = p3;
var_n_value = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5358);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5359);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5360);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5361);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5362);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5363);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5364);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ACallReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5365);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5366);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5367);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#replace_child for (self: ACallReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TId */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExprs */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : AAssignOp */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : AExpr */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5372);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5373);
fatal_exit(1);
}
{
nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_expr= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5376);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype14 = type_nit__TId.color;
idtype15 = type_nit__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5377);
fatal_exit(1);
}
{
nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_id= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5380);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype24 = type_nit__AExprs.color;
idtype25 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5381);
fatal_exit(1);
}
{
nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_args= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5384);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype34 = type_nit__AAssignOp.color;
idtype35 = type_nit__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5385);
fatal_exit(1);
}
{
nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_assign_op= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5388);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype44 = type_nit__AExpr.color;
idtype45 = type_nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5389);
fatal_exit(1);
}
{
nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_value= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_expr= for (self: ACallReassignExpr, AExpr) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_id= for (self: ACallReassignExpr, TId) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_args= for (self: ACallReassignExpr, AExprs) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_assign_op= for (self: ACallReassignExpr, AAssignOp) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_value= for (self: ACallReassignExpr, AExpr) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#visit_all for (self: ACallReassignExpr, Visitor) */
void nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5423);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5424);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5425);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5426);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5427);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#init_asuperexpr for (self: ASuperExpr, nullable AQualified, nullable TKwsuper, nullable AExprs) */
void nit__parser_prod___ASuperExpr___init_asuperexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_qualified /* var n_qualified: nullable AQualified */;
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_args /* var n_args: nullable AExprs */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ASuperExpr> */
RET_LABEL1:(void)0;
}
}
var_n_qualified = p0;
var_n_kwsuper = p1;
var_n_args = p2;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var_n_qualified; /* _n_qualified on <self:ASuperExpr> */
if (var_n_qualified == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_qualified,((val*)NULL)) on <var_n_qualified:nullable AQualified> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_qualified->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_qualified, var_other); /* == on <var_n_qualified:nullable AQualified(AQualified)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_qualified,self) on <var_n_qualified:nullable AQualified(AQualified)> */
var_n_qualified->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qualified:nullable AQualified(AQualified)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5439);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExpr> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5440);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwsuper->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL7:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5441);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val = var_n_args; /* _n_args on <self:ASuperExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5442);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#replace_child for (self: ASuperExpr, ANode, nullable ANode) */
void nit__parser_prod___ASuperExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AQualified */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TKwsuper */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : AExprs */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable AQualified> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AQualified(AQualified)> */
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
/* <var_new_child:nullable ANode> isa nullable AQualified */
cltype = type_nullable__nit__AQualified.color;
idtype = type_nullable__nit__AQualified.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AQualified", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5448);
fatal_exit(1);
}
{
nit__parser_prod___ASuperExpr___n_qualified_61d(self, var_new_child); /* Direct call parser_prod#ASuperExpr#n_qualified= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5451);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwsuper> */
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
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype15 = type_nit__TKwsuper.color;
idtype16 = type_nit__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5452);
fatal_exit(1);
}
{
nit__parser_prod___ASuperExpr___n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperExpr#n_kwsuper= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5455);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype25 = type_nit__AExprs.color;
idtype26 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5456);
fatal_exit(1);
}
{
nit__parser_prod___ASuperExpr___n_args_61d(self, var_new_child); /* Direct call parser_prod#ASuperExpr#n_args= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_qualified= for (self: ASuperExpr, nullable AQualified) */
void nit__parser_prod___ASuperExpr___n_qualified_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQualified */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var_node; /* _n_qualified on <self:ASuperExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AQualified> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AQualified(AQualified)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AQualified(AQualified)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AQualified(AQualified)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_kwsuper= for (self: ASuperExpr, TKwsuper) */
void nit__parser_prod___ASuperExpr___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_args= for (self: ASuperExpr, AExprs) */
void nit__parser_prod___ASuperExpr___n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val = var_node; /* _n_args on <self:ASuperExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#visit_all for (self: ASuperExpr, Visitor) */
void nit__parser_prod___ASuperExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AQualified */;
val* var1 /* : TKwsuper */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5481);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5482);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#init_ainitexpr for (self: AInitExpr, nullable AExpr, nullable TKwinit, nullable AExprs) */
void nit__parser_prod___AInitExpr___init_ainitexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_args /* var n_args: nullable AExprs */;
{
{ /* Inline kernel#Object#init (self) on <self:AInitExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_kwinit = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5492);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AInitExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5493);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5494);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AInitExpr> */
if (var_n_kwinit == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5495);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit> */
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwinit->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5496);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val = var_n_args; /* _n_args on <self:AInitExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5497);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#replace_child for (self: AInitExpr, ANode, nullable ANode) */
void nit__parser_prod___AInitExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TKwinit */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AExprs */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5502);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5503);
fatal_exit(1);
}
{
nit__parser_prod___AInitExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AInitExpr#n_expr= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5506);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwinit> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwinit> */
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
/* <var_new_child:nullable ANode> isa TKwinit */
cltype14 = type_nit__TKwinit.color;
idtype15 = type_nit__TKwinit.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinit", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5507);
fatal_exit(1);
}
{
nit__parser_prod___AInitExpr___n_kwinit_61d(self, var_new_child); /* Direct call parser_prod#AInitExpr#n_kwinit= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5510);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype24 = type_nit__AExprs.color;
idtype25 = type_nit__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5511);
fatal_exit(1);
}
{
nit__parser_prod___AInitExpr___n_args_61d(self, var_new_child); /* Direct call parser_prod#AInitExpr#n_args= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_expr= for (self: AInitExpr, AExpr) */
void nit__parser_prod___AInitExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AInitExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_kwinit= for (self: AInitExpr, TKwinit) */
void nit__parser_prod___AInitExpr___n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: TKwinit */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val = var_node; /* _n_kwinit on <self:AInitExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwinit> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwinit> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_args= for (self: AInitExpr, AExprs) */
void nit__parser_prod___AInitExpr___n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val = var_node; /* _n_args on <self:AInitExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#visit_all for (self: AInitExpr, Visitor) */
void nit__parser_prod___AInitExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwinit */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5535);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5536);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5537);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: ABraExpr, nullable AExpr, nullable AExprs) */
void nit__parser_prod___ABraExpr___init_abraexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
{
{ /* Inline kernel#Object#init (self) on <self:ABraExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_args = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5546);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5547);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5548);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5549);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#replace_child for (self: ABraExpr, ANode, nullable ANode) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5554);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5555);
fatal_exit(1);
}
{
nit__parser_prod___ABraExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ABraExpr#n_expr= on <self:ABraExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5558);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExprs> */
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
cltype14 = type_nit__AExprs.color;
idtype15 = type_nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5559);
fatal_exit(1);
}
{
nit__parser_prod___ABraExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ABraExpr#n_args= on <self:ABraExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_expr= for (self: ABraExpr, AExpr) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_args= for (self: ABraExpr, AExprs) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#visit_all for (self: ABraExpr, Visitor) */
void nit__parser_prod___ABraExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5578);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5579);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#init_abraassignexpr for (self: ABraAssignExpr, nullable AExpr, nullable AExprs, nullable TAssign, nullable AExpr) */
void nit__parser_prod___ABraAssignExpr___init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ABraAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_args = p1;
var_n_assign = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5590);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5591);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5592);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5593);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5594);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ABraAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5595);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5596);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5597);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#replace_child for (self: ABraAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5602);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5603);
fatal_exit(1);
}
{
nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_expr= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5606);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExprs> */
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
cltype14 = type_nit__AExprs.color;
idtype15 = type_nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5607);
fatal_exit(1);
}
{
nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_args= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5610);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TAssign> */
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
cltype24 = type_nit__TAssign.color;
idtype25 = type_nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5611);
fatal_exit(1);
}
{
nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_assign= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5614);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AExpr> */
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
cltype34 = type_nit__AExpr.color;
idtype35 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5615);
fatal_exit(1);
}
{
nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_value= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_expr= for (self: ABraAssignExpr, AExpr) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_args= for (self: ABraAssignExpr, AExprs) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_assign= for (self: ABraAssignExpr, TAssign) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_value= for (self: ABraAssignExpr, AExpr) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#visit_all for (self: ABraAssignExpr, Visitor) */
void nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5644);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5645);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5646);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5647);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#init_abrareassignexpr for (self: ABraReassignExpr, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___ABraReassignExpr___init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ABraReassignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_args = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5658);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5659);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5660);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5661);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5662);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5663);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5664);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5665);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#replace_child for (self: ABraReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5670);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5671);
fatal_exit(1);
}
{
nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_expr= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5674);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AExprs> */
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
cltype14 = type_nit__AExprs.color;
idtype15 = type_nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5675);
fatal_exit(1);
}
{
nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_args= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5678);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AAssignOp> */
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
cltype24 = type_nit__AAssignOp.color;
idtype25 = type_nit__AAssignOp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5679);
fatal_exit(1);
}
{
nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_assign_op= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5682);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AExpr> */
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
cltype34 = type_nit__AExpr.color;
idtype35 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5683);
fatal_exit(1);
}
{
nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_value= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_expr= for (self: ABraReassignExpr, AExpr) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_args= for (self: ABraReassignExpr, AExprs) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_assign_op= for (self: ABraReassignExpr, AAssignOp) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_value= for (self: ABraReassignExpr, AExpr) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: ABraReassignExpr, Visitor) */
void nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5712);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5713);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5714);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5715);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: AVarExpr, nullable TId) */
void nit__parser_prod___AVarExpr___init_avarexpr(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
{ /* Inline kernel#Object#init (self) on <self:AVarExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5723);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5724);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#replace_child for (self: AVarExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5729);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
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
cltype = type_nit__TId.color;
idtype = type_nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5730);
fatal_exit(1);
}
{
nit__parser_prod___AVarExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVarExpr#n_id= on <self:AVarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#n_id= for (self: AVarExpr, TId) */
void nit__parser_prod___AVarExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#visit_all for (self: AVarExpr, Visitor) */
void nit__parser_prod___AVarExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5744);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#init_avarassignexpr for (self: AVarAssignExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nit__parser_prod___AVarAssignExpr___init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AVarAssignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5754);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5755);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5756);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5757);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5758);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5759);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#replace_child for (self: AVarAssignExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5764);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
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
cltype = type_nit__TId.color;
idtype = type_nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5765);
fatal_exit(1);
}
{
nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVarAssignExpr#n_id= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5768);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TAssign> */
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
cltype14 = type_nit__TAssign.color;
idtype15 = type_nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5769);
fatal_exit(1);
}
{
nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AVarAssignExpr#n_assign= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5772);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5773);
fatal_exit(1);
}
{
nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AVarAssignExpr#n_value= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_id= for (self: AVarAssignExpr, TId) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_assign= for (self: AVarAssignExpr, TAssign) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_value= for (self: AVarAssignExpr, AExpr) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#visit_all for (self: AVarAssignExpr, Visitor) */
void nit__parser_prod___AVarAssignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5797);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5798);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5799);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#init_avarreassignexpr for (self: AVarReassignExpr, nullable TId, nullable AAssignOp, nullable AExpr) */
void nit__parser_prod___AVarReassignExpr___init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AVarReassignExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign_op = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5809);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5810);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5811);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5812);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5813);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5814);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#replace_child for (self: AVarReassignExpr, ANode, nullable ANode) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5819);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
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
cltype = type_nit__TId.color;
idtype = type_nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5820);
fatal_exit(1);
}
{
nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVarReassignExpr#n_id= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5823);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:AAssignOp> */
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
cltype14 = type_nit__AAssignOp.color;
idtype15 = type_nit__AAssignOp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5824);
fatal_exit(1);
}
{
nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#AVarReassignExpr#n_assign_op= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5827);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5828);
fatal_exit(1);
}
{
nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AVarReassignExpr#n_value= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_id= for (self: AVarReassignExpr, TId) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_assign_op= for (self: AVarReassignExpr, AAssignOp) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_value= for (self: AVarReassignExpr, AExpr) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#visit_all for (self: AVarReassignExpr, Visitor) */
void nit__parser_prod___AVarReassignExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : AAssignOp */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5852);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5853);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5854);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: ACrangeExpr, nullable TObra, nullable AExpr, nullable TDotdot, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void nit__parser_prod___ACrangeExpr___init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
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
{ /* Inline kernel#Object#init (self) on <self:ACrangeExpr> */
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
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5922);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5923);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5924);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5925);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_dotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5926);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val = var_n_dotdot; /* _n_dotdot on <self:ACrangeExpr> */
if (var_n_dotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5927);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdot,self) on <var_n_dotdot:nullable TDotdot> */
if (unlikely(var_n_dotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_dotdot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdot:nullable TDotdot> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5928);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5929);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5930);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5931);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACrangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL11:(void)0;
}
}
} else {
}
RET_LABEL:;
}
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
var = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5938);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5939);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5942);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5943);
fatal_exit(1);
}
{
nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_expr= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:ACrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5946);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TDotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TDotdot> */
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
cltype24 = type_nit__TDotdot.color;
idtype25 = type_nit__TDotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5947);
fatal_exit(1);
}
{
nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_dotdot_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_dotdot= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5950);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AExpr> */
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
cltype34 = type_nit__AExpr.color;
idtype35 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5951);
fatal_exit(1);
}
{
nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_expr2= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5954);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:TCbra> */
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
cltype44 = type_nit__TCbra.color;
idtype45 = type_nit__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5955);
fatal_exit(1);
}
{
nit__parser_prod___ACrangeExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_cbra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
if (var47 == NULL) {
var48 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var47,var_old_child) on <var47:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:nullable AAnnotations(AAnnotations)> */
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
cltype55 = type_nullable__nit__AAnnotations.color;
idtype56 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5959);
fatal_exit(1);
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
/* method parser_prod#ACrangeExpr#n_dotdot= for (self: ACrangeExpr, TDotdot) */
void nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_dotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val = var_node; /* _n_dotdot on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TDotdot> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdot> */
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACrangeExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
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
val* var2 /* : TDotdot */;
val* var3 /* : AExpr */;
val* var4 /* : TCbra */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5998);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 5999);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:ACrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6000);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6001);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6002);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrangeExpr#init_aorangeexpr for (self: AOrangeExpr, nullable TObra, nullable AExpr, nullable TDotdot, nullable AExpr, nullable TObra, nullable AAnnotations) */
void nit__parser_prod___AOrangeExpr___init_aorangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
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
{ /* Inline kernel#Object#init (self) on <self:AOrangeExpr> */
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
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6016);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AOrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6017);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6018);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6019);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_dotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6020);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val = var_n_dotdot; /* _n_dotdot on <self:AOrangeExpr> */
if (var_n_dotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6021);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdot,self) on <var_n_dotdot:nullable TDotdot> */
if (unlikely(var_n_dotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_dotdot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdot:nullable TDotdot> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6022);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6023);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6024);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AOrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6025);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TObra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TObra> */
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOrangeExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL11:(void)0;
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
var = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6032);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6033);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6036);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6037);
fatal_exit(1);
}
{
nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_expr= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:AOrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6040);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TDotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TDotdot> */
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
cltype24 = type_nit__TDotdot.color;
idtype25 = type_nit__TDotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6041);
fatal_exit(1);
}
{
nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_dotdot_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_dotdot= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6044);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:AExpr> */
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
cltype34 = type_nit__AExpr.color;
idtype35 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6045);
fatal_exit(1);
}
{
nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_expr2= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6048);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:TObra> */
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
cltype44 = type_nit__TObra.color;
idtype45 = type_nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6049);
fatal_exit(1);
}
{
nit__parser_prod___AOrangeExpr___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#AOrangeExpr#n_cbra= on <self:AOrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
if (var47 == NULL) {
var48 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var47,var_old_child) on <var47:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:nullable AAnnotations(AAnnotations)> */
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
cltype55 = type_nullable__nit__AAnnotations.color;
idtype56 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6053);
fatal_exit(1);
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
/* method parser_prod#AOrangeExpr#n_dotdot= for (self: AOrangeExpr, TDotdot) */
void nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_dotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val = var_node; /* _n_dotdot on <self:AOrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TDotdot> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdot> */
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOrangeExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
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
val* var2 /* : TDotdot */;
val* var3 /* : AExpr */;
val* var4 /* : TObra */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6092);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6093);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_dotdot].val; /* _n_dotdot on <self:AOrangeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6094);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6095);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6096);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOrangeExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
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
{ /* Inline kernel#Object#init (self) on <self:AArrayExpr> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_exprs = p1;
var_n_type = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6109);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_obra].val = var_n_obra; /* _n_obra on <self:AArrayExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6110);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var4 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var_n_type; /* _n_type on <self:AArrayExpr> */
if (var_n_type == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,((val*)NULL)) on <var_n_type:nullable AType> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_type, var_other); /* == on <var_n_type:nullable AType(AType)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6114);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AArrayExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6115);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AArrayExpr> */
if (var_n_annotations == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL17:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6122);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6123);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6128);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6131);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6132);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6136);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var_node; /* _n_type on <self:AArrayExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AType> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AType(AType)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL5:(void)0;
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AArrayExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6165);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6168);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ASelfExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwself = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6178);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASelfExpr___n_kwself].val = var_n_kwself; /* _n_kwself on <self:ASelfExpr> */
if (var_n_kwself == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6179);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwself,self) on <var_n_kwself:nullable TKwself> */
if (unlikely(var_n_kwself == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwself->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwself:nullable TKwself> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASelfExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6187);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6191);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6199);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwself> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASelfExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
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
{
{ /* Inline kernel#Object#init (self) on <self:AImplicitSelfExpr> */
RET_LABEL1:(void)0;
}
}
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ATrueExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwtrue = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6235);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATrueExpr___n_kwtrue].val = var_n_kwtrue; /* _n_kwtrue on <self:ATrueExpr> */
if (var_n_kwtrue == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6236);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtrue,self) on <var_n_kwtrue:nullable TKwtrue> */
if (unlikely(var_n_kwtrue == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwtrue->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtrue:nullable TKwtrue> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATrueExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6243);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6244);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6248);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATrueExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6267);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AFalseExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwfalse = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6277);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6278);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfalse,self) on <var_n_kwfalse:nullable TKwfalse> */
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwfalse->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfalse:nullable TKwfalse> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFalseExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6285);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6286);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6290);
fatal_exit(1);
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
