#include "nitc__parser_prod.sep.0.h"
/* method parser_prod#AIfExpr#visit_all for (self: AIfExpr, Visitor) */
void nitc__parser_prod___AIfExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : TKwthen */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable TKwelse */;
val* var5 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2994);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2995);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwthen].val; /* _n_kwthen on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2996);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwelse].val; /* _n_kwelse on <self:AIfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: AIfexprExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void nitc__parser_prod___AIfexprExpr___init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwthen /* var n_kwthen: nullable TKwthen */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AIfexprExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwif = p0;
var_n_expr = p1;
var_n_kwthen = p2;
var_n_then = p3;
var_n_kwelse = p4;
var_n_else = p5;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3012);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfexprExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3013);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwif->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3014);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfexprExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3015);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3016);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfexprExpr> */
if (var_n_kwthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3017);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwthen,self) on <var_n_kwthen:nullable TKwthen> */
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwthen->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwthen:nullable TKwthen> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3018);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val = var_n_then; /* _n_then on <self:AIfexprExpr> */
if (var_n_then == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3019);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr> */
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_then->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3020);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfexprExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3021);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwelse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL6:(void)0;
}
}
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3022);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val = var_n_else; /* _n_else on <self:AIfexprExpr> */
if (var_n_else == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3023);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr> */
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_else->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
void nitc__parser_prod___AIfexprExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
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
val* var17 /* : TKwthen */;
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
val* var37 /* : TKwelse */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
val* var47 /* : AExpr */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3028);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwif> */
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
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_nitc__TKwif.color;
idtype = type_nitc__TKwif.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3029);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwif= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3032);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3033);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_expr= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3036);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TKwthen> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TKwthen> */
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
/* <var_new_child:nullable ANode> isa TKwthen */
cltype24 = type_nitc__TKwthen.color;
idtype25 = type_nitc__TKwthen.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwthen", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3037);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_kwthen_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwthen= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3040);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3041);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_then= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3044);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var37,var_old_child) on <var37:TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var37,var_other) on <var37:TKwelse> */
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
/* <var_new_child:nullable ANode> isa TKwelse */
cltype44 = type_nitc__TKwelse.color;
idtype45 = type_nitc__TKwelse.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwelse", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3045);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwelse= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3048);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var47,var_old_child) on <var47:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:AExpr> */
var52 = var47 == var_other;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
/* <var_new_child:nullable ANode> isa AExpr */
cltype54 = type_nitc__AExpr.color;
idtype55 = type_nitc__AExpr.id;
if(var_new_child == NULL) {
var53 = 0;
} else {
if(cltype54 >= var_new_child->type->table_size) {
var53 = 0;
} else {
var53 = var_new_child->type->type_table[cltype54] == idtype55;
}
}
if (unlikely(!var53)) {
var_class_name56 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3049);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_else= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void nitc__parser_prod___AIfexprExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void nitc__parser_prod___AIfexprExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void nitc__parser_prod___AIfexprExpr___n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwthen> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwthen> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void nitc__parser_prod___AIfexprExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void nitc__parser_prod___AIfexprExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void nitc__parser_prod___AIfexprExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: AIfexprExpr, Visitor) */
void nitc__parser_prod___AIfexprExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : TKwthen */;
val* var3 /* : AExpr */;
val* var4 /* : TKwelse */;
val* var5 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3088);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3089);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3090);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3091);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3092);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3093);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: AWhileExpr, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nitc__parser_prod___AWhileExpr___init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwwhile /* var n_kwwhile: nullable TKwwhile */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AWhileExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3105);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3106);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwwhile,self) on <var_n_kwwhile:nullable TKwwhile> */
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwwhile->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwhile:nullable TKwwhile> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3107);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3108);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3109);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3110);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwdo->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val = var_n_block; /* _n_block on <self:AWhileExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWhileExpr> */
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: AWhileExpr, ANode, nullable ANode) */
void nitc__parser_prod___AWhileExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwhile */;
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
val* var17 /* : TKwdo */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : nullable AExpr */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
val* var38 /* : nullable ALabel */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3119);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwwhile> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwwhile> */
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
/* <var_new_child:nullable ANode> isa TKwwhile */
cltype = type_nitc__TKwwhile.color;
idtype = type_nitc__TKwwhile.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwhile", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3120);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_kwwhile_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwwhile= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3123);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3124);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_expr= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3127);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TKwdo> */
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
/* <var_new_child:nullable ANode> isa TKwdo */
cltype24 = type_nitc__TKwdo.color;
idtype25 = type_nitc__TKwdo.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3128);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwdo= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype35 = type_nullable__nitc__AExpr.color;
idtype36 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3132);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_block= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var38,var_old_child) on <var38:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var38,var_other) on <var38:nullable ALabel(ALabel)> */
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
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype46 = type_nullable__nitc__ALabel.color;
idtype47 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3136);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_label= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void nitc__parser_prod___AWhileExpr___n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwwhile> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwhile> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void nitc__parser_prod___AWhileExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void nitc__parser_prod___AWhileExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void nitc__parser_prod___AWhileExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val = var_node; /* _n_block on <self:AWhileExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: AWhileExpr, nullable ALabel) */
void nitc__parser_prod___AWhileExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWhileExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: AWhileExpr, Visitor) */
void nitc__parser_prod___AWhileExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwhile */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3170);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3171);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3172);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
void nitc__parser_prod___ALoopExpr___init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwloop /* var n_kwloop: nullable TKwloop */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ALoopExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3184);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3185);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwloop,self) on <var_n_kwloop:nullable TKwloop> */
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwloop->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwloop:nullable TKwloop> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val = var_n_block; /* _n_block on <self:ALoopExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ALoopExpr> */
if (var_n_label == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: ALoopExpr, ANode, nullable ANode) */
void nitc__parser_prod___ALoopExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwloop */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable AExpr */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : nullable ALabel */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3194);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwloop> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwloop> */
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
/* <var_new_child:nullable ANode> isa TKwloop */
cltype = type_nitc__TKwloop.color;
idtype = type_nitc__TKwloop.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwloop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3195);
fatal_exit(1);
}
{
nitc__parser_prod___ALoopExpr___n_kwloop_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_kwloop= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype15 = type_nullable__nitc__AExpr.color;
idtype16 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3199);
fatal_exit(1);
}
{
nitc__parser_prod___ALoopExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_block= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:nullable ALabel(ALabel)> */
var24 = var18 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype26 = type_nullable__nitc__ALabel.color;
idtype27 = type_nullable__nitc__ALabel.id;
if(var_new_child == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
var_class_name28 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3203);
fatal_exit(1);
}
{
nitc__parser_prod___ALoopExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_label= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void nitc__parser_prod___ALoopExpr___n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwloop> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwloop> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void nitc__parser_prod___ALoopExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val = var_node; /* _n_block on <self:ALoopExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: ALoopExpr, nullable ALabel) */
void nitc__parser_prod___ALoopExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ALoopExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: ALoopExpr, Visitor) */
void nitc__parser_prod___ALoopExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3227);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#init_aforexpr for (self: AForExpr, nullable TKwfor, Collection[Object], nullable TKwdo, nullable AExpr, nullable ALabel) */
void nitc__parser_prod___AForExpr___init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwfor /* var n_kwfor: nullable TKwfor */;
val* var_n_groups /* var n_groups: Collection[Object] */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : ANodes[AForGroup] */;
val* var4 /* : ANodes[AForGroup] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AForExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwfor = p0;
var_n_groups = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3241);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwfor].val = var_n_kwfor; /* _n_kwfor on <self:AForExpr> */
if (var_n_kwfor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3242);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfor,self) on <var_n_kwfor:nullable TKwfor> */
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwfor->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfor:nullable TKwfor> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_groups); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AForGroup]>*/
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3244);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AForExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3245);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwdo->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val = var_n_block; /* _n_block on <self:AForExpr> */
if (var_n_block == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL11:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AForExpr> */
if (var_n_label == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: AForExpr, ANode, nullable ANode) */
void nitc__parser_prod___AForExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwfor */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : ANodes[AForGroup] */;
val* var9 /* : ANodes[AForGroup] */;
short int var10 /* : Bool */;
val* var11 /* : TKwdo */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : nullable AExpr */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var32 /* : nullable ALabel */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3254);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwfor> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwfor> */
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
/* <var_new_child:nullable ANode> isa TKwfor */
cltype = type_nitc__TKwfor.color;
idtype = type_nitc__TKwfor.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwfor", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3255);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___n_kwfor_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_kwfor= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
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
var11 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3259);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var11,var_old_child) on <var11:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:TKwdo> */
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
/* <var_new_child:nullable ANode> isa TKwdo */
cltype18 = type_nitc__TKwdo.color;
idtype19 = type_nitc__TKwdo.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3260);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_kwdo= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var21,var_old_child) on <var21:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var21,var_other) on <var21:nullable AExpr(AExpr)> */
var27 = var21 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype29 = type_nullable__nitc__AExpr.color;
idtype30 = type_nullable__nitc__AExpr.id;
if(var_new_child == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_new_child->type->table_size) {
var28 = 0;
} else {
var28 = var_new_child->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
var_class_name31 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3264);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_block= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var32 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var32 == NULL) {
var33 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var32,var_old_child) on <var32:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var32,var_other) on <var32:nullable ALabel(ALabel)> */
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
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype40 = type_nullable__nitc__ALabel.color;
idtype41 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3268);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_label= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void nitc__parser_prod___AForExpr___n_kwfor_61d(val* self, val* p0) {
val* var_node /* var node: TKwfor */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwfor].val = var_node; /* _n_kwfor on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwfor> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void nitc__parser_prod___AForExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void nitc__parser_prod___AForExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val = var_node; /* _n_block on <self:AForExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_label= for (self: AForExpr, nullable ALabel) */
void nitc__parser_prod___AForExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AForExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: AForExpr, Visitor) */
void nitc__parser_prod___AForExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfor */;
val* var1 /* : ANodes[AForGroup] */;
val* var3 /* : ANodes[AForGroup] */;
val* var4 /* : TKwdo */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3297);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1920);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AForGroup]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3299);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#init_awithexpr for (self: AWithExpr, nullable TKwwith, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nitc__parser_prod___AWithExpr___init_awithexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwwith /* var n_kwwith: nullable TKwwith */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AWithExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwwith = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwith == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3313);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwwith].val = var_n_kwwith; /* _n_kwwith on <self:AWithExpr> */
if (var_n_kwwith == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3314);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwwith,self) on <var_n_kwwith:nullable TKwwith> */
if (unlikely(var_n_kwwith == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwwith->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwith:nullable TKwwith> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3315);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWithExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3316);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3317);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWithExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3318);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwdo->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val = var_n_block; /* _n_block on <self:AWithExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWithExpr> */
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#replace_child for (self: AWithExpr, ANode, nullable ANode) */
void nitc__parser_prod___AWithExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwith */;
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
val* var17 /* : TKwdo */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
val* var27 /* : nullable AExpr */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
val* var38 /* : nullable ALabel */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwwith].val; /* _n_kwwith on <self:AWithExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3327);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwwith> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwwith> */
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
/* <var_new_child:nullable ANode> isa TKwwith */
cltype = type_nitc__TKwwith.color;
idtype = type_nitc__TKwwith.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwith", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3328);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_kwwith_61d(self, var_new_child); /* Direct call parser_prod#AWithExpr#n_kwwith= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3331);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3332);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AWithExpr#n_expr= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3335);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TKwdo> */
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
/* <var_new_child:nullable ANode> isa TKwdo */
cltype24 = type_nitc__TKwdo.color;
idtype25 = type_nitc__TKwdo.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3336);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AWithExpr#n_kwdo= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var27,var_old_child) on <var27:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var27,var_other) on <var27:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype35 = type_nullable__nitc__AExpr.color;
idtype36 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3340);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#AWithExpr#n_block= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var38,var_old_child) on <var38:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var38,var_other) on <var38:nullable ALabel(ALabel)> */
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
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype46 = type_nullable__nitc__ALabel.color;
idtype47 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3344);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#AWithExpr#n_label= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_kwwith= for (self: AWithExpr, TKwwith) */
void nitc__parser_prod___AWithExpr___n_kwwith_61d(val* self, val* p0) {
val* var_node /* var node: TKwwith */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwwith].val = var_node; /* _n_kwwith on <self:AWithExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwwith> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwith> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_expr= for (self: AWithExpr, AExpr) */
void nitc__parser_prod___AWithExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val = var_node; /* _n_expr on <self:AWithExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_kwdo= for (self: AWithExpr, TKwdo) */
void nitc__parser_prod___AWithExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWithExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_block= for (self: AWithExpr, nullable AExpr) */
void nitc__parser_prod___AWithExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val = var_node; /* _n_block on <self:AWithExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#n_label= for (self: AWithExpr, nullable ALabel) */
void nitc__parser_prod___AWithExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWithExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWithExpr#visit_all for (self: AWithExpr, Visitor) */
void nitc__parser_prod___AWithExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwith */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwwith].val; /* _n_kwwith on <self:AWithExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3378);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3379);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3380);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: AAssertExpr, nullable TKwassert, nullable TId, nullable AExpr, nullable TKwelse, nullable AExpr) */
void nitc__parser_prod___AAssertExpr___init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwassert /* var n_kwassert: nullable TKwassert */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AAssertExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwassert = p0;
var_n_id = p1;
var_n_expr = p2;
var_n_kwelse = p3;
var_n_else = p4;
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3394);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwassert].val = var_n_kwassert; /* _n_kwassert on <self:AAssertExpr> */
if (var_n_kwassert == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3395);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwassert,self) on <var_n_kwassert:nullable TKwassert> */
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwassert->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwassert:nullable TKwassert> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val = var_n_id; /* _n_id on <self:AAssertExpr> */
if (var_n_id == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,((val*)NULL)) on <var_n_id:nullable TId> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_id, var_other); /* == on <var_n_id:nullable TId(TId)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3398);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAssertExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3399);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AAssertExpr> */
if (var_n_kwelse == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwelse,((val*)NULL)) on <var_n_kwelse:nullable TKwelse> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_n_kwelse->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwelse, var_other); /* == on <var_n_kwelse:nullable TKwelse(TKwelse)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse(TKwelse)> */
var_n_kwelse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse(TKwelse)> */
RET_LABEL14:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val = var_n_else; /* _n_else on <self:AAssertExpr> */
if (var_n_else == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_else,((val*)NULL)) on <var_n_else:nullable AExpr> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_else, var_other); /* == on <var_n_else:nullable AExpr(AExpr)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL20:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: AAssertExpr, ANode, nullable ANode) */
void nitc__parser_prod___AAssertExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwassert */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable TId */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : AExpr */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : nullable TKwelse */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
val* var39 /* : nullable AExpr */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3408);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwassert> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwassert> */
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
/* <var_new_child:nullable ANode> isa TKwassert */
cltype = type_nitc__TKwassert.color;
idtype = type_nitc__TKwassert.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwassert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3409);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_kwassert_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_kwassert= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable TId(TId)> */
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
/* <var_new_child:nullable ANode> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3413);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_id= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3416);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype25 = type_nitc__AExpr.color;
idtype26 = type_nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3417);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_expr= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwelse].val; /* _n_kwelse on <self:AAssertExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:nullable TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:nullable TKwelse(TKwelse)> */
var34 = var28 == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
/* <var_new_child:nullable ANode> isa nullable TKwelse */
cltype36 = type_nullable__nitc__TKwelse.color;
idtype37 = type_nullable__nitc__TKwelse.id;
if(var_new_child == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_new_child->type->table_size) {
var35 = 0;
} else {
var35 = var_new_child->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
var_class_name38 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwelse", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3421);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_kwelse= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var39 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var39 == NULL) {
var40 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var39,var_old_child) on <var39:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var39,var_other) on <var39:nullable AExpr(AExpr)> */
var45 = var39 == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype47 = type_nullable__nitc__AExpr.color;
idtype48 = type_nullable__nitc__AExpr.id;
if(var_new_child == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
var_class_name49 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3425);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_else= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void nitc__parser_prod___AAssertExpr___n_kwassert_61d(val* self, val* p0) {
val* var_node /* var node: TKwassert */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwassert].val = var_node; /* _n_kwassert on <self:AAssertExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwassert> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwassert> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void nitc__parser_prod___AAssertExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val = var_node; /* _n_id on <self:AAssertExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TId> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TId(TId)>*/
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
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void nitc__parser_prod___AAssertExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val = var_node; /* _n_expr on <self:AAssertExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwelse= for (self: AAssertExpr, nullable TKwelse) */
void nitc__parser_prod___AAssertExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwelse */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AAssertExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TKwelse> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwelse(TKwelse)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwelse(TKwelse)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwelse(TKwelse)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void nitc__parser_prod___AAssertExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val = var_node; /* _n_else on <self:AAssertExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: AAssertExpr, Visitor) */
void nitc__parser_prod___AAssertExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwassert */;
val* var1 /* : nullable TId */;
val* var2 /* : AExpr */;
val* var3 /* : nullable TKwelse */;
val* var4 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3459);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3461);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwelse].val; /* _n_kwelse on <self:AAssertExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: AOnceExpr, nullable TKwonce, nullable AExpr) */
void nitc__parser_prod___AOnceExpr___init_aonceexpr(val* self, val* p0, val* p1) {
val* var_n_kwonce /* var n_kwonce: nullable TKwonce */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AOnceExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwonce = p0;
var_n_expr = p1;
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3472);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val = var_n_kwonce; /* _n_kwonce on <self:AOnceExpr> */
if (var_n_kwonce == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3473);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwonce,self) on <var_n_kwonce:nullable TKwonce> */
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwonce->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwonce:nullable TKwonce> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3474);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOnceExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3475);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#replace_child for (self: AOnceExpr, ANode, nullable ANode) */
void nitc__parser_prod___AOnceExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwonce */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3480);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwonce> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwonce> */
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
/* <var_new_child:nullable ANode> isa TKwonce */
cltype = type_nitc__TKwonce.color;
idtype = type_nitc__TKwonce.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwonce", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3481);
fatal_exit(1);
}
{
nitc__parser_prod___AOnceExpr___n_kwonce_61d(self, var_new_child); /* Direct call parser_prod#AOnceExpr#n_kwonce= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3484);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3485);
fatal_exit(1);
}
{
nitc__parser_prod___AOnceExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOnceExpr#n_expr= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void nitc__parser_prod___AOnceExpr___n_kwonce_61d(val* self, val* p0) {
val* var_node /* var node: TKwonce */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val = var_node; /* _n_kwonce on <self:AOnceExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwonce> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwonce> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: AOnceExpr, AExpr) */
void nitc__parser_prod___AOnceExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val = var_node; /* _n_expr on <self:AOnceExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: AOnceExpr, Visitor) */
void nitc__parser_prod___AOnceExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwonce */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3504);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3505);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: AOrExpr, nullable AExpr, nullable TKwor, nullable AExpr) */
void nitc__parser_prod___AOrExpr___init_aorexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwor */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AOrExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3586);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3587);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3588);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AOrExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3589);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TKwor> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwor> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3590);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3591);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#replace_child for (self: AOrExpr, ANode, nullable ANode) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3596);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3597);
fatal_exit(1);
}
{
nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_expr= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3600);
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
/* <var_new_child:nullable ANode> isa TKwor */
cltype14 = type_nitc__TKwor.color;
idtype15 = type_nitc__TKwor.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwor", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3601);
fatal_exit(1);
}
{
nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_op= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3604);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3605);
fatal_exit(1);
}
{
nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_expr2= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: AOrExpr, AExpr) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_op= for (self: AOrExpr, Token) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: AOrExpr, AExpr) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: AOrExpr, Visitor) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3629);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3630);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3631);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: AAndExpr, nullable AExpr, nullable TKwand, nullable AExpr) */
void nitc__parser_prod___AAndExpr___init_aandexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwand */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AAndExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3641);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAndExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3642);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3643);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AAndExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3644);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TKwand> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwand> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3645);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAndExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3646);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#replace_child for (self: AAndExpr, ANode, nullable ANode) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3651);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3652);
fatal_exit(1);
}
{
nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_expr= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3655);
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
/* <var_new_child:nullable ANode> isa TKwand */
cltype14 = type_nitc__TKwand.color;
idtype15 = type_nitc__TKwand.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwand", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3656);
fatal_exit(1);
}
{
nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_op= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3659);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3660);
fatal_exit(1);
}
{
nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_expr2= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: AAndExpr, AExpr) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_op= for (self: AAndExpr, Token) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: AAndExpr, AExpr) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: AAndExpr, Visitor) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3684);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3685);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3686);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: AOrElseExpr, nullable AExpr, nullable TKwor, nullable TKwelse, nullable AExpr) */
void nitc__parser_prod___AOrElseExpr___init_aorelseexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwor */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AOrElseExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_kwelse = p2;
var_n_expr2 = p3;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3697);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrElseExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3698);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3699);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AOrElseExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3700);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TKwor> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwor> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3701);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AOrElseExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3702);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwelse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3703);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrElseExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3704);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#replace_child for (self: AOrElseExpr, ANode, nullable ANode) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var17 /* : TKwelse */;
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
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3709);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3710);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_expr= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3713);
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
/* <var_new_child:nullable ANode> isa TKwor */
cltype14 = type_nitc__TKwor.color;
idtype15 = type_nitc__TKwor.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwor", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3714);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_op= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3717);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TKwelse> */
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
/* <var_new_child:nullable ANode> isa TKwelse */
cltype24 = type_nitc__TKwelse.color;
idtype25 = type_nitc__TKwelse.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwelse", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3718);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_kwelse= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3721);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3722);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_expr2= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: AOrElseExpr, AExpr) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_op= for (self: AOrElseExpr, Token) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_kwelse= for (self: AOrElseExpr, TKwelse) */
void nitc__parser_prod___AOrElseExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr2= for (self: AOrElseExpr, AExpr) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#visit_all for (self: AOrElseExpr, Visitor) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : TKwelse */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3751);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3752);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3753);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3754);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#init_aimpliesexpr for (self: AImpliesExpr, nullable AExpr, nullable TKwimplies, nullable AExpr) */
void nitc__parser_prod___AImpliesExpr___init_aimpliesexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwimplies */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AImpliesExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3764);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AImpliesExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3765);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3766);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AImpliesExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3767);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TKwimplies> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwimplies> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3768);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AImpliesExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3769);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#replace_child for (self: AImpliesExpr, ANode, nullable ANode) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3774);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3775);
fatal_exit(1);
}
{
nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_expr= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3778);
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
/* <var_new_child:nullable ANode> isa TKwimplies */
cltype14 = type_nitc__TKwimplies.color;
idtype15 = type_nitc__TKwimplies.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimplies", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3779);
fatal_exit(1);
}
{
nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_op= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3782);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3783);
fatal_exit(1);
}
{
nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AImpliesExpr#n_expr2= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr= for (self: AImpliesExpr, AExpr) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_op= for (self: AImpliesExpr, Token) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#n_expr2= for (self: AImpliesExpr, AExpr) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AImpliesExpr#visit_all for (self: AImpliesExpr, Visitor) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3807);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3808);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3809);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#init_anotexpr for (self: ANotExpr, nullable TKwnot, nullable AExpr) */
void nitc__parser_prod___ANotExpr___init_anotexpr(val* self, val* p0, val* p1) {
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ANotExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwnot = p0;
var_n_expr = p1;
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3818);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:ANotExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3819);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwnot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3820);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANotExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3821);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#replace_child for (self: ANotExpr, ANode, nullable ANode) */
void nitc__parser_prod___ANotExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3826);
fatal_exit(1);
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
cltype = type_nitc__TKwnot.color;
idtype = type_nitc__TKwnot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3827);
fatal_exit(1);
}
{
nitc__parser_prod___ANotExpr___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#ANotExpr#n_kwnot= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3830);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3831);
fatal_exit(1);
}
{
nitc__parser_prod___ANotExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANotExpr#n_expr= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_kwnot= for (self: ANotExpr, TKwnot) */
void nitc__parser_prod___ANotExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:ANotExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#n_expr= for (self: ANotExpr, AExpr) */
void nitc__parser_prod___ANotExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val = var_node; /* _n_expr on <self:ANotExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANotExpr#visit_all for (self: ANotExpr, Visitor) */
void nitc__parser_prod___ANotExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnot */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3850);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3851);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#init_aeqexpr for (self: AEqExpr, nullable AExpr, nullable TEq, nullable AExpr) */
void nitc__parser_prod___AEqExpr___init_aeqexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TEq */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AEqExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3861);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEqExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3862);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3863);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AEqExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3864);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TEq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TEq> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3865);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEqExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3866);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#replace_child for (self: AEqExpr, ANode, nullable ANode) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3871);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3872);
fatal_exit(1);
}
{
nitc__parser_prod___AEqExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_expr= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AEqExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3875);
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
/* <var_new_child:nullable ANode> isa TEq */
cltype14 = type_nitc__TEq.color;
idtype15 = type_nitc__TEq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEq", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3876);
fatal_exit(1);
}
{
nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_op= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3879);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3880);
fatal_exit(1);
}
{
nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AEqExpr#n_expr2= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr= for (self: AEqExpr, AExpr) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_op= for (self: AEqExpr, Token) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#n_expr2= for (self: AEqExpr, AExpr) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEqExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqExpr#visit_all for (self: AEqExpr, Visitor) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3904);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AEqExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3905);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3906);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#init_aneexpr for (self: ANeExpr, nullable AExpr, nullable TNe, nullable AExpr) */
void nitc__parser_prod___ANeExpr___init_aneexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TNe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ANeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3916);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3917);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3918);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ANeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3919);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TNe> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TNe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3920);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ANeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3921);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#replace_child for (self: ANeExpr, ANode, nullable ANode) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3926);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3927);
fatal_exit(1);
}
{
nitc__parser_prod___ANeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_expr= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ANeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3930);
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
/* <var_new_child:nullable ANode> isa TNe */
cltype14 = type_nitc__TNe.color;
idtype15 = type_nitc__TNe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNe", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3931);
fatal_exit(1);
}
{
nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_op= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3934);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3935);
fatal_exit(1);
}
{
nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ANeExpr#n_expr2= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr= for (self: ANeExpr, AExpr) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_op= for (self: ANeExpr, Token) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#n_expr2= for (self: ANeExpr, AExpr) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ANeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeExpr#visit_all for (self: ANeExpr, Visitor) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3959);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ANeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3960);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3961);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#init_altexpr for (self: ALtExpr, nullable AExpr, nullable TLt, nullable AExpr) */
void nitc__parser_prod___ALtExpr___init_altexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLt */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ALtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3971);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3972);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3973);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALtExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3974);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TLt> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLt> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3975);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3976);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#replace_child for (self: ALtExpr, ANode, nullable ANode) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3981);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3982);
fatal_exit(1);
}
{
nitc__parser_prod___ALtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_expr= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALtExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3985);
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
/* <var_new_child:nullable ANode> isa TLt */
cltype14 = type_nitc__TLt.color;
idtype15 = type_nitc__TLt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLt", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3986);
fatal_exit(1);
}
{
nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_op= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3989);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3990);
fatal_exit(1);
}
{
nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_expr2= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: ALtExpr, AExpr) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_op= for (self: ALtExpr, Token) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: ALtExpr, AExpr) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: ALtExpr, Visitor) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4014);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4015);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4016);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#init_aleexpr for (self: ALeExpr, nullable AExpr, nullable TLe, nullable AExpr) */
void nitc__parser_prod___ALeExpr___init_aleexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ALeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4026);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4027);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4028);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4029);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TLe> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4030);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4031);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: ALeExpr, ANode, nullable ANode) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4036);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4037);
fatal_exit(1);
}
{
nitc__parser_prod___ALeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_expr= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4040);
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
/* <var_new_child:nullable ANode> isa TLe */
cltype14 = type_nitc__TLe.color;
idtype15 = type_nitc__TLe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLe", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4041);
fatal_exit(1);
}
{
nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_op= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4044);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4045);
fatal_exit(1);
}
{
nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_expr2= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: ALeExpr, AExpr) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_op= for (self: ALeExpr, Token) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: ALeExpr, AExpr) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: ALeExpr, Visitor) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4069);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4070);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4071);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#init_allexpr for (self: ALlExpr, nullable AExpr, nullable TLl, nullable AExpr) */
void nitc__parser_prod___ALlExpr___init_allexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLl */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ALlExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4081);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALlExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4082);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4083);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALlExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4084);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TLl> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLl> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4085);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALlExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4086);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: ALlExpr, ANode, nullable ANode) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4091);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4092);
fatal_exit(1);
}
{
nitc__parser_prod___ALlExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_expr= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALlExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4095);
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
/* <var_new_child:nullable ANode> isa TLl */
cltype14 = type_nitc__TLl.color;
idtype15 = type_nitc__TLl.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLl", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4096);
fatal_exit(1);
}
{
nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_op= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4099);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4100);
fatal_exit(1);
}
{
nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_expr2= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: ALlExpr, AExpr) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_op= for (self: ALlExpr, Token) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: ALlExpr, AExpr) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: ALlExpr, Visitor) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4124);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALlExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4125);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4126);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#init_agtexpr for (self: AGtExpr, nullable AExpr, nullable TGt, nullable AExpr) */
void nitc__parser_prod___AGtExpr___init_agtexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGt */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AGtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4136);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4137);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4138);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGtExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4139);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TGt> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGt> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4140);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4141);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: AGtExpr, ANode, nullable ANode) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4146);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4147);
fatal_exit(1);
}
{
nitc__parser_prod___AGtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_expr= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGtExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4150);
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
/* <var_new_child:nullable ANode> isa TGt */
cltype14 = type_nitc__TGt.color;
idtype15 = type_nitc__TGt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGt", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4151);
fatal_exit(1);
}
{
nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_op= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4154);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4155);
fatal_exit(1);
}
{
nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_expr2= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: AGtExpr, AExpr) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_op= for (self: AGtExpr, Token) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: AGtExpr, AExpr) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: AGtExpr, Visitor) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4179);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4180);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4181);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#init_ageexpr for (self: AGeExpr, nullable AExpr, nullable TGe, nullable AExpr) */
void nitc__parser_prod___AGeExpr___init_ageexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AGeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4191);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4192);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4193);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGeExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4194);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TGe> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4195);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4196);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: AGeExpr, ANode, nullable ANode) */
void nitc__parser_prod___AGeExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4201);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4202);
fatal_exit(1);
}
{
nitc__parser_prod___AGeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_expr= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4205);
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
/* <var_new_child:nullable ANode> isa TGe */
cltype14 = type_nitc__TGe.color;
idtype15 = type_nitc__TGe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGe", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4206);
fatal_exit(1);
}
{
nitc__parser_prod___AGeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_op= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4209);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4210);
fatal_exit(1);
}
{
nitc__parser_prod___AGeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_expr2= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: AGeExpr, AExpr) */
void nitc__parser_prod___AGeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_op= for (self: AGeExpr, Token) */
void nitc__parser_prod___AGeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: AGeExpr, AExpr) */
void nitc__parser_prod___AGeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: AGeExpr, Visitor) */
void nitc__parser_prod___AGeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4234);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4235);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4236);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#init_aggexpr for (self: AGgExpr, nullable AExpr, nullable TGg, nullable AExpr) */
void nitc__parser_prod___AGgExpr___init_aggexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGg */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AGgExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4246);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGgExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4247);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4248);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGgExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4249);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TGg> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGg> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4250);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGgExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4251);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: AGgExpr, ANode, nullable ANode) */
void nitc__parser_prod___AGgExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4256);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4257);
fatal_exit(1);
}
{
nitc__parser_prod___AGgExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_expr= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGgExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4260);
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
/* <var_new_child:nullable ANode> isa TGg */
cltype14 = type_nitc__TGg.color;
idtype15 = type_nitc__TGg.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGg", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4261);
fatal_exit(1);
}
{
nitc__parser_prod___AGgExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_op= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4264);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4265);
fatal_exit(1);
}
{
nitc__parser_prod___AGgExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_expr2= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: AGgExpr, AExpr) */
void nitc__parser_prod___AGgExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_op= for (self: AGgExpr, Token) */
void nitc__parser_prod___AGgExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: AGgExpr, AExpr) */
void nitc__parser_prod___AGgExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: AGgExpr, Visitor) */
void nitc__parser_prod___AGgExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4289);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGgExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4290);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4291);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: AIsaExpr, nullable AExpr, nullable TKwisa, nullable AType) */
void nitc__parser_prod___AIsaExpr___init_aisaexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwisa /* var n_kwisa: nullable TKwisa */;
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel#Object#init (self) on <self:AIsaExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_kwisa = p1;
var_n_type = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4301);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIsaExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4302);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwisa == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4303);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_kwisa].val = var_n_kwisa; /* _n_kwisa on <self:AIsaExpr> */
if (var_n_kwisa == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4304);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwisa,self) on <var_n_kwisa:nullable TKwisa> */
if (unlikely(var_n_kwisa == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwisa->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwisa:nullable TKwisa> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4305);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val = var_n_type; /* _n_type on <self:AIsaExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4306);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: AIsaExpr, ANode, nullable ANode) */
void nitc__parser_prod___AIsaExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TKwisa */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AType */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4311);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4312);
fatal_exit(1);
}
{
nitc__parser_prod___AIsaExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_expr= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_kwisa].val; /* _n_kwisa on <self:AIsaExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisa");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4315);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwisa> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwisa> */
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
/* <var_new_child:nullable ANode> isa TKwisa */
cltype14 = type_nitc__TKwisa.color;
idtype15 = type_nitc__TKwisa.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwisa", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4316);
fatal_exit(1);
}
{
nitc__parser_prod___AIsaExpr___n_kwisa_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_kwisa= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4319);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype24 = type_nitc__AType.color;
idtype25 = type_nitc__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4320);
fatal_exit(1);
}
{
nitc__parser_prod___AIsaExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_type= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void nitc__parser_prod___AIsaExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val = var_node; /* _n_expr on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_kwisa= for (self: AIsaExpr, TKwisa) */
void nitc__parser_prod___AIsaExpr___n_kwisa_61d(val* self, val* p0) {
val* var_node /* var node: TKwisa */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_kwisa].val = var_node; /* _n_kwisa on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwisa> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwisa> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void nitc__parser_prod___AIsaExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val = var_node; /* _n_type on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: AIsaExpr, Visitor) */
void nitc__parser_prod___AIsaExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwisa */;
val* var2 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4344);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_kwisa].val; /* _n_kwisa on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisa");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4345);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4346);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#init_aplusexpr for (self: APlusExpr, nullable AExpr, nullable TPlus, nullable AExpr) */
void nitc__parser_prod___APlusExpr___init_aplusexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TPlus */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:APlusExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4356);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APlusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4357);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4358);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:APlusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4359);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPlus> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPlus> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4360);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APlusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4361);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: APlusExpr, ANode, nullable ANode) */
void nitc__parser_prod___APlusExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4366);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4367);
fatal_exit(1);
}
{
nitc__parser_prod___APlusExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_expr= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APlusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4370);
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
/* <var_new_child:nullable ANode> isa TPlus */
cltype14 = type_nitc__TPlus.color;
idtype15 = type_nitc__TPlus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPlus", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4371);
fatal_exit(1);
}
{
nitc__parser_prod___APlusExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_op= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4374);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4375);
fatal_exit(1);
}
{
nitc__parser_prod___APlusExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_expr2= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: APlusExpr, AExpr) */
void nitc__parser_prod___APlusExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_op= for (self: APlusExpr, Token) */
void nitc__parser_prod___APlusExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: APlusExpr, AExpr) */
void nitc__parser_prod___APlusExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: APlusExpr, Visitor) */
void nitc__parser_prod___APlusExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4399);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:APlusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4400);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4401);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: AMinusExpr, nullable AExpr, nullable TMinus, nullable AExpr) */
void nitc__parser_prod___AMinusExpr___init_aminusexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TMinus */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AMinusExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4411);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMinusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4412);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4413);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AMinusExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4414);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TMinus> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TMinus> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4415);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AMinusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4416);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: AMinusExpr, ANode, nullable ANode) */
void nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4421);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4422);
fatal_exit(1);
}
{
nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_expr= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AMinusExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4425);
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
/* <var_new_child:nullable ANode> isa TMinus */
cltype14 = type_nitc__TMinus.color;
idtype15 = type_nitc__TMinus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinus", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4426);
fatal_exit(1);
}
{
nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_op= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4429);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4430);
fatal_exit(1);
}
{
nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_expr2= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: AMinusExpr, AExpr) */
void nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_op= for (self: AMinusExpr, Token) */
void nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: AMinusExpr, AExpr) */
void nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: AMinusExpr, Visitor) */
void nitc__parser_prod___AMinusExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4454);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AMinusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4455);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4456);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: AStarshipExpr, nullable AExpr, nullable TStarship, nullable AExpr) */
void nitc__parser_prod___AStarshipExpr___init_astarshipexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TStarship */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarshipExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4466);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarshipExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4467);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4468);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AStarshipExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4469);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStarship> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarship> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4470);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarshipExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4471);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: AStarshipExpr, ANode, nullable ANode) */
void nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4476);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4477);
fatal_exit(1);
}
{
nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_expr= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarshipExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4480);
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
/* <var_new_child:nullable ANode> isa TStarship */
cltype14 = type_nitc__TStarship.color;
idtype15 = type_nitc__TStarship.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarship", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4481);
fatal_exit(1);
}
{
nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_op= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4484);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4485);
fatal_exit(1);
}
{
nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_expr2= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: AStarshipExpr, AExpr) */
void nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_op= for (self: AStarshipExpr, Token) */
void nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: AStarshipExpr, AExpr) */
void nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: AStarshipExpr, Visitor) */
void nitc__parser_prod___AStarshipExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4509);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarshipExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4510);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4511);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#init_astarexpr for (self: AStarExpr, nullable AExpr, nullable TStar, nullable AExpr) */
void nitc__parser_prod___AStarExpr___init_astarexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TStar */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4521);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4522);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4523);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AStarExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4524);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStar> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStar> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4525);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4526);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: AStarExpr, ANode, nullable ANode) */
void nitc__parser_prod___AStarExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4531);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4532);
fatal_exit(1);
}
{
nitc__parser_prod___AStarExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_expr= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4535);
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
/* <var_new_child:nullable ANode> isa TStar */
cltype14 = type_nitc__TStar.color;
idtype15 = type_nitc__TStar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStar", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4536);
fatal_exit(1);
}
{
nitc__parser_prod___AStarExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_op= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4539);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4540);
fatal_exit(1);
}
{
nitc__parser_prod___AStarExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_expr2= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr= for (self: AStarExpr, AExpr) */
void nitc__parser_prod___AStarExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_op= for (self: AStarExpr, Token) */
void nitc__parser_prod___AStarExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: AStarExpr, AExpr) */
void nitc__parser_prod___AStarExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: AStarExpr, Visitor) */
void nitc__parser_prod___AStarExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4564);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4565);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4566);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#init_astarstarexpr for (self: AStarstarExpr, nullable AExpr, nullable TStarstar, nullable AExpr) */
void nitc__parser_prod___AStarstarExpr___init_astarstarexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TStarstar */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarstarExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4576);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarstarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4577);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4578);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AStarstarExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4579);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStarstar> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarstar> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4580);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarstarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4581);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#replace_child for (self: AStarstarExpr, ANode, nullable ANode) */
void nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarstarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4586);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4587);
fatal_exit(1);
}
{
nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarstarExpr#n_expr= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarstarExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4590);
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
/* <var_new_child:nullable ANode> isa TStarstar */
cltype14 = type_nitc__TStarstar.color;
idtype15 = type_nitc__TStarstar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstar", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4591);
fatal_exit(1);
}
{
nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarstarExpr#n_op= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarstarExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4594);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4595);
fatal_exit(1);
}
{
nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarstarExpr#n_expr2= on <self:AStarstarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_expr= for (self: AStarstarExpr, AExpr) */
void nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarstarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_op= for (self: AStarstarExpr, Token) */
void nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AStarstarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#n_expr2= for (self: AStarstarExpr, AExpr) */
void nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarstarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarExpr#visit_all for (self: AStarstarExpr, Visitor) */
void nitc__parser_prod___AStarstarExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarstarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4619);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AStarstarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4620);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarstarExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4621);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: ASlashExpr, nullable AExpr, nullable TSlash, nullable AExpr) */
void nitc__parser_prod___ASlashExpr___init_aslashexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TSlash */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ASlashExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4631);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASlashExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4632);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4633);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ASlashExpr> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4634);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TSlash> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TSlash> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4635);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ASlashExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4636);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr2,self) on <var_n_expr2:nullable AExpr> */
if (unlikely(var_n_expr2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr2:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
