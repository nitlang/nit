#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AOrElseExpr#n_expr2= for (self: AOrElseExpr, AExpr) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: AOrElseExpr, Visitor) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3144);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3145);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: AImpliesExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AImpliesExpr___init_aimpliesexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3154);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AImpliesExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3155);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3156);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AImpliesExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3157);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: AImpliesExpr, ANode, nullable ANode) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3162);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3163);
show_backtrace(1);
}
{
nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_expr= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3166);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3167);
show_backtrace(1);
}
{
nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_expr2= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: AImpliesExpr, AExpr) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: AImpliesExpr, AExpr) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: AImpliesExpr, Visitor) */
void nit__parser_prod___AImpliesExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3186);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3187);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: ANotExpr, nullable TKwnot, nullable AExpr) */
void nit__parser_prod___ANotExpr___init_anotexpr(val* self, val* p0, val* p1) {
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_kwnot = p0;
var_n_expr = p1;
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3196);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:ANotExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3197);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwnot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3198);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANotExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3199);
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
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: ANotExpr, ANode, nullable ANode) */
void nit__parser_prod___ANotExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnot */;
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
var = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3204);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwnot> */
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
/* <var_new_child:nullable ANode> isa TKwnot */
cltype = type_nit__TKwnot.color;
idtype = type_nit__TKwnot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3205);
show_backtrace(1);
}
{
nit__parser_prod___ANotExpr___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#ANotExpr#n_kwnot= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3208);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3209);
show_backtrace(1);
}
{
nit__parser_prod___ANotExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANotExpr#n_expr= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void nit__parser_prod___ANotExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:ANotExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void nit__parser_prod___ANotExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val = var_node; /* _n_expr on <self:ANotExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: ANotExpr, Visitor) */
void nit__parser_prod___ANotExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnot */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3228);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3229);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: AEqExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AEqExpr___init_aeqexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3238);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEqExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3239);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3240);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEqExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3241);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: AEqExpr, ANode, nullable ANode) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3246);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3247);
show_backtrace(1);
}
{
nit__parser_prod___AEqExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_expr= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3250);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3251);
show_backtrace(1);
}
{
nit__parser_prod___AEqExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_expr2= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: AEqExpr, AExpr) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: AEqExpr, AExpr) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: AEqExpr, Visitor) */
void nit__parser_prod___AEqExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3270);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3271);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: ANeExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___ANeExpr___init_aneexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3280);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3281);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3282);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ANeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3283);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: ANeExpr, ANode, nullable ANode) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3288);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3289);
show_backtrace(1);
}
{
nit__parser_prod___ANeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_expr= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3292);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3293);
show_backtrace(1);
}
{
nit__parser_prod___ANeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_expr2= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: ANeExpr, AExpr) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: ANeExpr, AExpr) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: ANeExpr, Visitor) */
void nit__parser_prod___ANeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3312);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3313);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: ALtExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___ALtExpr___init_altexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3322);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3323);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3324);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3325);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#replace_child for (self: ALtExpr, ANode, nullable ANode) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3330);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3331);
show_backtrace(1);
}
{
nit__parser_prod___ALtExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_expr= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3334);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3335);
show_backtrace(1);
}
{
nit__parser_prod___ALtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_expr2= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: ALtExpr, AExpr) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: ALtExpr, AExpr) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: ALtExpr, Visitor) */
void nit__parser_prod___ALtExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3354);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3355);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#init_aleexpr for (self: ALeExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___ALeExpr___init_aleexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3364);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3365);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3366);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3367);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: ALeExpr, ANode, nullable ANode) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3372);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3373);
show_backtrace(1);
}
{
nit__parser_prod___ALeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_expr= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3376);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3377);
show_backtrace(1);
}
{
nit__parser_prod___ALeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_expr2= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: ALeExpr, AExpr) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: ALeExpr, AExpr) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: ALeExpr, Visitor) */
void nit__parser_prod___ALeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3396);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3397);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#init_allexpr for (self: ALlExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___ALlExpr___init_allexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3406);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALlExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3407);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3408);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALlExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3409);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: ALlExpr, ANode, nullable ANode) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3414);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3415);
show_backtrace(1);
}
{
nit__parser_prod___ALlExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_expr= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3418);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3419);
show_backtrace(1);
}
{
nit__parser_prod___ALlExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_expr2= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: ALlExpr, AExpr) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: ALlExpr, AExpr) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: ALlExpr, Visitor) */
void nit__parser_prod___ALlExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3438);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3439);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#init_agtexpr for (self: AGtExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AGtExpr___init_agtexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3448);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3449);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3450);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3451);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: AGtExpr, ANode, nullable ANode) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3456);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3457);
show_backtrace(1);
}
{
nit__parser_prod___AGtExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_expr= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3460);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3461);
show_backtrace(1);
}
{
nit__parser_prod___AGtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_expr2= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: AGtExpr, AExpr) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: AGtExpr, AExpr) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: AGtExpr, Visitor) */
void nit__parser_prod___AGtExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3480);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3481);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#init_ageexpr for (self: AGeExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AGeExpr___init_ageexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3490);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3491);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3492);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3493);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: AGeExpr, ANode, nullable ANode) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3498);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3499);
show_backtrace(1);
}
{
nit__parser_prod___AGeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_expr= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3502);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3503);
show_backtrace(1);
}
{
nit__parser_prod___AGeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_expr2= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: AGeExpr, AExpr) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: AGeExpr, AExpr) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: AGeExpr, Visitor) */
void nit__parser_prod___AGeExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3522);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3523);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#init_aggexpr for (self: AGgExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AGgExpr___init_aggexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3532);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGgExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3533);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3534);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGgExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3535);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: AGgExpr, ANode, nullable ANode) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3540);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3541);
show_backtrace(1);
}
{
nit__parser_prod___AGgExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_expr= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3544);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3545);
show_backtrace(1);
}
{
nit__parser_prod___AGgExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_expr2= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: AGgExpr, AExpr) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: AGgExpr, AExpr) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: AGgExpr, Visitor) */
void nit__parser_prod___AGgExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3564);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3565);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: AIsaExpr, nullable AExpr, nullable AType) */
void nit__parser_prod___AIsaExpr___init_aisaexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
var_n_expr = p0;
var_n_type = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3574);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIsaExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3575);
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
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3576);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val = var_n_type; /* _n_type on <self:AIsaExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3577);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: AIsaExpr, ANode, nullable ANode) */
void nit__parser_prod___AIsaExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AType */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3582);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3583);
show_backtrace(1);
}
{
nit__parser_prod___AIsaExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_expr= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3586);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3587);
show_backtrace(1);
}
{
nit__parser_prod___AIsaExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_type= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void nit__parser_prod___AIsaExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val = var_node; /* _n_expr on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void nit__parser_prod___AIsaExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val = var_node; /* _n_type on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: AIsaExpr, Visitor) */
void nit__parser_prod___AIsaExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3606);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3607);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#init_aplusexpr for (self: APlusExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___APlusExpr___init_aplusexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3616);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APlusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3617);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3618);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APlusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3619);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: APlusExpr, ANode, nullable ANode) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3624);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3625);
show_backtrace(1);
}
{
nit__parser_prod___APlusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_expr= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3628);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3629);
show_backtrace(1);
}
{
nit__parser_prod___APlusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_expr2= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: APlusExpr, AExpr) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: APlusExpr, AExpr) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: APlusExpr, Visitor) */
void nit__parser_prod___APlusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3648);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3649);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: AMinusExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AMinusExpr___init_aminusexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3658);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMinusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3659);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3660);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AMinusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3661);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: AMinusExpr, ANode, nullable ANode) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3666);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3667);
show_backtrace(1);
}
{
nit__parser_prod___AMinusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_expr= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3670);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3671);
show_backtrace(1);
}
{
nit__parser_prod___AMinusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_expr2= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: AMinusExpr, AExpr) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: AMinusExpr, AExpr) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: AMinusExpr, Visitor) */
void nit__parser_prod___AMinusExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3690);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3691);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: AStarshipExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AStarshipExpr___init_astarshipexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3700);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarshipExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3701);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3702);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarshipExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3703);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: AStarshipExpr, ANode, nullable ANode) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3708);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3709);
show_backtrace(1);
}
{
nit__parser_prod___AStarshipExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_expr= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3712);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3713);
show_backtrace(1);
}
{
nit__parser_prod___AStarshipExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_expr2= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: AStarshipExpr, AExpr) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: AStarshipExpr, AExpr) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: AStarshipExpr, Visitor) */
void nit__parser_prod___AStarshipExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3732);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3733);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#init_astarexpr for (self: AStarExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AStarExpr___init_astarexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3742);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3743);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3744);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3745);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: AStarExpr, ANode, nullable ANode) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3750);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3751);
show_backtrace(1);
}
{
nit__parser_prod___AStarExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_expr= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3754);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3755);
show_backtrace(1);
}
{
nit__parser_prod___AStarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_expr2= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr= for (self: AStarExpr, AExpr) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: AStarExpr, AExpr) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: AStarExpr, Visitor) */
void nit__parser_prod___AStarExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3774);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3775);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#init_astarstarexpr for (self: AStarstarExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AStarstarExpr___init_astarstarexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3784);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarstarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3785);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3786);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarstarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3787);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#replace_child for (self: AStarstarExpr, ANode, nullable ANode) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarstarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3792);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3793);
show_backtrace(1);
}
{
nit__parser_prod___AStarstarExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarstarExpr#n_expr= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarstarExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3796);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3797);
show_backtrace(1);
}
{
nit__parser_prod___AStarstarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarstarExpr#n_expr2= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_expr= for (self: AStarstarExpr, AExpr) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarstarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_expr2= for (self: AStarstarExpr, AExpr) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarstarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#visit_all for (self: AStarstarExpr, Visitor) */
void nit__parser_prod___AStarstarExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarstarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3816);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarstarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3817);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: ASlashExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___ASlashExpr___init_aslashexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3826);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASlashExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3827);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3828);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ASlashExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3829);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#replace_child for (self: ASlashExpr, ANode, nullable ANode) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3834);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3835);
show_backtrace(1);
}
{
nit__parser_prod___ASlashExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ASlashExpr#n_expr= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3838);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3839);
show_backtrace(1);
}
{
nit__parser_prod___ASlashExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ASlashExpr#n_expr2= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr= for (self: ASlashExpr, AExpr) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ASlashExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr2= for (self: ASlashExpr, AExpr) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ASlashExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#visit_all for (self: ASlashExpr, Visitor) */
void nit__parser_prod___ASlashExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3858);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3859);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#init_apercentexpr for (self: APercentExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___APercentExpr___init_apercentexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3868);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APercentExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3869);
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
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3870);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APercentExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3871);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
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
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3876);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3877);
show_backtrace(1);
}
{
nit__parser_prod___APercentExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APercentExpr#n_expr= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3880);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3881);
show_backtrace(1);
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
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3900);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3901);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: AUminusExpr, nullable TMinus, nullable AExpr) */
void nit__parser_prod___AUminusExpr___init_auminusexpr(val* self, val* p0, val* p1) {
val* var_n_minus /* var n_minus: nullable TMinus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_minus = p0;
var_n_expr = p1;
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3910);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AUminusExpr___n_minus].val = var_n_minus; /* _n_minus on <self:AUminusExpr> */
if (var_n_minus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3911);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_minus,self) on <var_n_minus:nullable TMinus> */
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_minus->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_minus:nullable TMinus> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3912);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUminusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3913);
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
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: AUminusExpr, ANode, nullable ANode) */
void nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinus */;
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
var = self->attrs[COLOR_nit__parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3918);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TMinus> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TMinus> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3919);
show_backtrace(1);
}
{
nit__parser_prod___AUminusExpr___n_minus_61d(self, var_new_child); /* Direct call parser_prod#AUminusExpr#n_minus= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3922);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3923);
show_backtrace(1);
}
{
nit__parser_prod___AUminusExpr___nit__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AUminusExpr#n_expr= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_minus= for (self: AUminusExpr, TMinus) */
void nit__parser_prod___AUminusExpr___n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AUminusExpr___n_minus].val = var_node; /* _n_minus on <self:AUminusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinus> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinus> */
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
val* var /* : TMinus */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3942);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3943);
show_backtrace(1);
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
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwnew = p0;
var_n_type = p1;
var_n_id = p2;
var_n_args = p3;
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3954);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:ANewExpr> */
if (var_n_kwnew == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3955);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew> */
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwnew->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3956);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val = var_n_type; /* _n_type on <self:ANewExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3957);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var_n_id; /* _n_id on <self:ANewExpr> */
var = NULL;
if (var_n_id == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,var) on <var_n_id:nullable TId> */
var_other = var;
{
var6 = ((short int (*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3960);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val = var_n_args; /* _n_args on <self:ANewExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3961);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3966);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3967);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3970);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3971);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3975);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3978);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3979);
show_backtrace(1);
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
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var_node; /* _n_id on <self:ANewExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TId(TId)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TId(TId)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL6:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4008);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4009);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4011);
show_backtrace(1);
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
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4020);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4021);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4022);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4023);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4028);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4029);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4032);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4033);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4052);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4053);
show_backtrace(1);
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
var_n_expr = p0;
var_n_id = p1;
var_n_assign = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4064);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4065);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4066);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4067);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4068);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AAttrAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4069);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4070);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4071);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4076);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4077);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4080);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4081);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4084);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4085);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4088);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4089);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4118);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4119);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4120);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4121);
show_backtrace(1);
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
var_n_expr = p0;
var_n_id = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4132);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4133);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4134);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4135);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4136);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4137);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4138);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4139);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4144);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4145);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4148);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4149);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4152);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4153);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4156);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4157);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4186);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4187);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4188);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4189);
show_backtrace(1);
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
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4199);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4200);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4201);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4202);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4203);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4204);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4209);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4210);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4213);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4214);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4217);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4218);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4242);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4243);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4244);
show_backtrace(1);
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
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign = p3;
var_n_value = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4256);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4257);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4258);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4259);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4260);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4261);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4262);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ACallAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4263);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4264);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4265);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4270);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4271);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4274);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4275);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4278);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4279);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4282);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4283);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4286);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4287);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4321);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4322);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4323);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4324);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4325);
show_backtrace(1);
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
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
var_n_assign_op = p3;
var_n_value = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4337);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4338);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4339);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4340);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4341);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4342);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4343);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ACallReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4344);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4345);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4346);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4351);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4352);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4355);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4356);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4359);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4360);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4363);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4364);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4367);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4368);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4402);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4403);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4404);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4405);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4406);
show_backtrace(1);
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
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_n_qualified = p0;
var_n_kwsuper = p1;
var_n_args = p2;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var_n_qualified; /* _n_qualified on <self:ASuperExpr> */
var = NULL;
if (var_n_qualified == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_qualified,var) on <var_n_qualified:nullable AQualified> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_n_qualified->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_qualified, var_other) /* == on <var_n_qualified:nullable AQualified(AQualified)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_qualified,self) on <var_n_qualified:nullable AQualified(AQualified)> */
var_n_qualified->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qualified:nullable AQualified(AQualified)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4418);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExpr> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4419);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwsuper->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL7:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4420);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val = var_n_args; /* _n_args on <self:ASuperExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4421);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4427);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4430);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4431);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4434);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4435);
show_backtrace(1);
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
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var_node; /* _n_qualified on <self:ASuperExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AQualified> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AQualified(AQualified)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AQualified(AQualified)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AQualified(AQualified)> */
RET_LABEL6:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4460);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4461);
show_backtrace(1);
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
var_n_expr = p0;
var_n_kwinit = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4471);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AInitExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4472);
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
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4473);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AInitExpr> */
if (var_n_kwinit == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4474);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit> */
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwinit->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4475);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val = var_n_args; /* _n_args on <self:AInitExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4476);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4481);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4482);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4485);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4486);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4489);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4490);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4514);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4515);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4516);
show_backtrace(1);
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
var_n_expr = p0;
var_n_args = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4525);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4526);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4527);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4528);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4533);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4534);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4537);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4538);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4557);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4558);
show_backtrace(1);
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
var_n_expr = p0;
var_n_args = p1;
var_n_assign = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4569);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4570);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4571);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4572);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4573);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ABraAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4574);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4575);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4576);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4581);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4582);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4585);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4586);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4589);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4590);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4593);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4594);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4623);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4624);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4625);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4626);
show_backtrace(1);
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
var_n_expr = p0;
var_n_args = p1;
var_n_assign_op = p2;
var_n_value = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4637);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4638);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4639);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4640);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_args->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4641);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4642);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4643);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4644);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4649);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4650);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4653);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4654);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4657);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4658);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4661);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4662);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4691);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4692);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4693);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4694);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: AVarExpr, nullable TId) */
void nit__parser_prod___AVarExpr___init_avarexpr(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4702);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4703);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4708);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4709);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4723);
show_backtrace(1);
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
var_n_id = p0;
var_n_assign = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4733);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4734);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4735);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4736);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4737);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4738);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4743);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4744);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4747);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4748);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4751);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4752);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4776);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4777);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4778);
show_backtrace(1);
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
var_n_id = p0;
var_n_assign_op = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4788);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4789);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4790);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4791);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4792);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4793);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_value->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4798);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4799);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4802);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4803);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4806);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4807);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4831);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4832);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4833);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: ACrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void nit__parser_prod___ACrangeExpr___init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4900);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4901);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4902);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4903);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4904);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4905);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4906);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 4907);
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
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACrangeExpr> */
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
