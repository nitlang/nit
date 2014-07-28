#include "parser_prod.sep.0.h"
/* method parser_prod#ALtExpr#replace_child for (self: ALtExpr, ANode, nullable ANode) */
void parser_prod__ALtExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4160);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4161);
show_backtrace(1);
}
{
parser_prod__ALtExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_expr= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4164);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4165);
show_backtrace(1);
}
{
parser_prod__ALtExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALtExpr#n_expr2= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALtExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALtExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ALtExpr#replace_child on <self:Object(ALtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: ALtExpr, AExpr) */
void parser_prod__ALtExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALtExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ALtExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ALtExpr#n_expr= on <self:Object(ALtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: ALtExpr, AExpr) */
void parser_prod__ALtExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALtExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ALtExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#ALtExpr#n_expr2= on <self:Object(ALtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: ALtExpr, Visitor) */
void parser_prod__ALtExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4184);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4185);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALtExpr__visit_all(val* self, val* p0) {
parser_prod__ALtExpr__visit_all(self, p0); /* Direct call parser_prod#ALtExpr#visit_all on <self:Object(ALtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALeExpr#init_aleexpr for (self: ALeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ALeExpr__init_aleexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4194);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4195);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4196);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4197);
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
/* method parser_prod#ALeExpr#init_aleexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ALeExpr__init_aleexpr(val* self, val* p0, val* p1) {
parser_prod__ALeExpr__init_aleexpr(self, p0, p1); /* Direct call parser_prod#ALeExpr#init_aleexpr on <self:Object(ALeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: ALeExpr, ANode, nullable ANode) */
void parser_prod__ALeExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4202);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4203);
show_backtrace(1);
}
{
parser_prod__ALeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_expr= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4206);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4207);
show_backtrace(1);
}
{
parser_prod__ALeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALeExpr#n_expr2= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALeExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ALeExpr#replace_child on <self:Object(ALeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: ALeExpr, AExpr) */
void parser_prod__ALeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ALeExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ALeExpr#n_expr= on <self:Object(ALeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: ALeExpr, AExpr) */
void parser_prod__ALeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ALeExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#ALeExpr#n_expr2= on <self:Object(ALeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: ALeExpr, Visitor) */
void parser_prod__ALeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4226);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4227);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALeExpr__visit_all(val* self, val* p0) {
parser_prod__ALeExpr__visit_all(self, p0); /* Direct call parser_prod#ALeExpr#visit_all on <self:Object(ALeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALlExpr#init_allexpr for (self: ALlExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ALlExpr__init_allexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4236);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALlExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4237);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4238);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALlExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4239);
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
/* method parser_prod#ALlExpr#init_allexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ALlExpr__init_allexpr(val* self, val* p0, val* p1) {
parser_prod__ALlExpr__init_allexpr(self, p0, p1); /* Direct call parser_prod#ALlExpr#init_allexpr on <self:Object(ALlExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: ALlExpr, ANode, nullable ANode) */
void parser_prod__ALlExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4244);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4245);
show_backtrace(1);
}
{
parser_prod__ALlExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_expr= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4248);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4249);
show_backtrace(1);
}
{
parser_prod__ALlExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ALlExpr#n_expr2= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALlExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALlExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ALlExpr#replace_child on <self:Object(ALlExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: ALlExpr, AExpr) */
void parser_prod__ALlExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALlExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ALlExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ALlExpr#n_expr= on <self:Object(ALlExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: ALlExpr, AExpr) */
void parser_prod__ALlExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALlExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ALlExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ALlExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#ALlExpr#n_expr2= on <self:Object(ALlExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: ALlExpr, Visitor) */
void parser_prod__ALlExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4268);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4269);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALlExpr__visit_all(val* self, val* p0) {
parser_prod__ALlExpr__visit_all(self, p0); /* Direct call parser_prod#ALlExpr#visit_all on <self:Object(ALlExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGtExpr#init_agtexpr for (self: AGtExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AGtExpr__init_agtexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4278);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGtExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4279);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4280);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGtExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4281);
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
/* method parser_prod#AGtExpr#init_agtexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AGtExpr__init_agtexpr(val* self, val* p0, val* p1) {
parser_prod__AGtExpr__init_agtexpr(self, p0, p1); /* Direct call parser_prod#AGtExpr#init_agtexpr on <self:Object(AGtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: AGtExpr, ANode, nullable ANode) */
void parser_prod__AGtExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4286);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4287);
show_backtrace(1);
}
{
parser_prod__AGtExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_expr= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4290);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4291);
show_backtrace(1);
}
{
parser_prod__AGtExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGtExpr#n_expr2= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGtExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGtExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AGtExpr#replace_child on <self:Object(AGtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: AGtExpr, AExpr) */
void parser_prod__AGtExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGtExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AGtExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AGtExpr#n_expr= on <self:Object(AGtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: AGtExpr, AExpr) */
void parser_prod__AGtExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGtExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGtExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AGtExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AGtExpr#n_expr2= on <self:Object(AGtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: AGtExpr, Visitor) */
void parser_prod__AGtExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4310);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4311);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGtExpr__visit_all(val* self, val* p0) {
parser_prod__AGtExpr__visit_all(self, p0); /* Direct call parser_prod#AGtExpr#visit_all on <self:Object(AGtExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGeExpr#init_ageexpr for (self: AGeExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AGeExpr__init_ageexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4320);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4321);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4322);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4323);
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
/* method parser_prod#AGeExpr#init_ageexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AGeExpr__init_ageexpr(val* self, val* p0, val* p1) {
parser_prod__AGeExpr__init_ageexpr(self, p0, p1); /* Direct call parser_prod#AGeExpr#init_ageexpr on <self:Object(AGeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: AGeExpr, ANode, nullable ANode) */
void parser_prod__AGeExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4328);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4329);
show_backtrace(1);
}
{
parser_prod__AGeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_expr= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4332);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4333);
show_backtrace(1);
}
{
parser_prod__AGeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGeExpr#n_expr2= on <self:AGeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGeExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AGeExpr#replace_child on <self:Object(AGeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: AGeExpr, AExpr) */
void parser_prod__AGeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AGeExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AGeExpr#n_expr= on <self:Object(AGeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: AGeExpr, AExpr) */
void parser_prod__AGeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AGeExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AGeExpr#n_expr2= on <self:Object(AGeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: AGeExpr, Visitor) */
void parser_prod__AGeExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4352);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4353);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGeExpr__visit_all(val* self, val* p0) {
parser_prod__AGeExpr__visit_all(self, p0); /* Direct call parser_prod#AGeExpr#visit_all on <self:Object(AGeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGgExpr#init_aggexpr for (self: AGgExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AGgExpr__init_aggexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4362);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGgExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4363);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4364);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGgExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4365);
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
/* method parser_prod#AGgExpr#init_aggexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AGgExpr__init_aggexpr(val* self, val* p0, val* p1) {
parser_prod__AGgExpr__init_aggexpr(self, p0, p1); /* Direct call parser_prod#AGgExpr#init_aggexpr on <self:Object(AGgExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: AGgExpr, ANode, nullable ANode) */
void parser_prod__AGgExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4370);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4371);
show_backtrace(1);
}
{
parser_prod__AGgExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_expr= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4374);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4375);
show_backtrace(1);
}
{
parser_prod__AGgExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AGgExpr#n_expr2= on <self:AGgExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGgExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGgExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AGgExpr#replace_child on <self:Object(AGgExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: AGgExpr, AExpr) */
void parser_prod__AGgExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGgExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AGgExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AGgExpr#n_expr= on <self:Object(AGgExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: AGgExpr, AExpr) */
void parser_prod__AGgExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGgExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AGgExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AGgExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AGgExpr#n_expr2= on <self:Object(AGgExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: AGgExpr, Visitor) */
void parser_prod__AGgExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4394);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4395);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGgExpr__visit_all(val* self, val* p0) {
parser_prod__AGgExpr__visit_all(self, p0); /* Direct call parser_prod#AGgExpr#visit_all on <self:Object(AGgExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: AIsaExpr, nullable AExpr, nullable AType) */
void parser_prod__AIsaExpr__init_aisaexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_type /* var n_type: nullable AType */;
var_n_expr = p0;
var_n_type = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4404);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIsaExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4405);
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
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4406);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val = var_n_type; /* _n_type on <self:AIsaExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4407);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#init_aisaexpr for (self: Object, nullable AExpr, nullable AType) */
void VIRTUAL_parser_prod__AIsaExpr__init_aisaexpr(val* self, val* p0, val* p1) {
parser_prod__AIsaExpr__init_aisaexpr(self, p0, p1); /* Direct call parser_prod#AIsaExpr#init_aisaexpr on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: AIsaExpr, ANode, nullable ANode) */
void parser_prod__AIsaExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : AType */;
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
var = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4412);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4413);
show_backtrace(1);
}
{
parser_prod__AIsaExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_expr= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4416);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype16 = type_parser_nodes__AType.color;
idtype17 = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4417);
show_backtrace(1);
}
{
parser_prod__AIsaExpr__n_type_61d(self, var_new_child); /* Direct call parser_prod#AIsaExpr#n_type= on <self:AIsaExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIsaExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIsaExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AIsaExpr#replace_child on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: AIsaExpr, AExpr) */
void parser_prod__AIsaExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val = var_node; /* _n_expr on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIsaExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIsaExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AIsaExpr#n_expr= on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: AIsaExpr, AType) */
void parser_prod__AIsaExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val = var_node; /* _n_type on <self:AIsaExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AIsaExpr__n_type_61d(val* self, val* p0) {
parser_prod__AIsaExpr__n_type_61d(self, p0); /* Direct call parser_prod#AIsaExpr#n_type= on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: AIsaExpr, Visitor) */
void parser_prod__AIsaExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4436);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4437);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIsaExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIsaExpr__visit_all(val* self, val* p0) {
parser_prod__AIsaExpr__visit_all(self, p0); /* Direct call parser_prod#AIsaExpr#visit_all on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APlusExpr#init_aplusexpr for (self: APlusExpr, nullable AExpr, nullable AExpr) */
void parser_prod__APlusExpr__init_aplusexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4446);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APlusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4447);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4448);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APlusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4449);
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
/* method parser_prod#APlusExpr#init_aplusexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__APlusExpr__init_aplusexpr(val* self, val* p0, val* p1) {
parser_prod__APlusExpr__init_aplusexpr(self, p0, p1); /* Direct call parser_prod#APlusExpr#init_aplusexpr on <self:Object(APlusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: APlusExpr, ANode, nullable ANode) */
void parser_prod__APlusExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4454);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4455);
show_backtrace(1);
}
{
parser_prod__APlusExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_expr= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4458);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4459);
show_backtrace(1);
}
{
parser_prod__APlusExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#APlusExpr#n_expr2= on <self:APlusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusExpr__replace_child(self, p0, p1); /* Direct call parser_prod#APlusExpr#replace_child on <self:Object(APlusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: APlusExpr, AExpr) */
void parser_prod__APlusExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APlusExpr__n_expr_61d(val* self, val* p0) {
parser_prod__APlusExpr__n_expr_61d(self, p0); /* Direct call parser_prod#APlusExpr#n_expr= on <self:Object(APlusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: APlusExpr, AExpr) */
void parser_prod__APlusExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APlusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APlusExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__APlusExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#APlusExpr#n_expr2= on <self:Object(APlusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: APlusExpr, Visitor) */
void parser_prod__APlusExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4478);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4479);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusExpr__visit_all(val* self, val* p0) {
parser_prod__APlusExpr__visit_all(self, p0); /* Direct call parser_prod#APlusExpr#visit_all on <self:Object(APlusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: AMinusExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AMinusExpr__init_aminusexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4488);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMinusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4489);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4490);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AMinusExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4491);
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
/* method parser_prod#AMinusExpr#init_aminusexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AMinusExpr__init_aminusexpr(val* self, val* p0, val* p1) {
parser_prod__AMinusExpr__init_aminusexpr(self, p0, p1); /* Direct call parser_prod#AMinusExpr#init_aminusexpr on <self:Object(AMinusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: AMinusExpr, ANode, nullable ANode) */
void parser_prod__AMinusExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4496);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4497);
show_backtrace(1);
}
{
parser_prod__AMinusExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_expr= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4500);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4501);
show_backtrace(1);
}
{
parser_prod__AMinusExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AMinusExpr#n_expr2= on <self:AMinusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AMinusExpr#replace_child on <self:Object(AMinusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: AMinusExpr, AExpr) */
void parser_prod__AMinusExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AMinusExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AMinusExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AMinusExpr#n_expr= on <self:Object(AMinusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: AMinusExpr, AExpr) */
void parser_prod__AMinusExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AMinusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AMinusExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AMinusExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AMinusExpr#n_expr2= on <self:Object(AMinusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: AMinusExpr, Visitor) */
void parser_prod__AMinusExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4520);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4521);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusExpr__visit_all(val* self, val* p0) {
parser_prod__AMinusExpr__visit_all(self, p0); /* Direct call parser_prod#AMinusExpr#visit_all on <self:Object(AMinusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: AStarshipExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AStarshipExpr__init_astarshipexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4530);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarshipExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4531);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4532);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarshipExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4533);
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
/* method parser_prod#AStarshipExpr#init_astarshipexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AStarshipExpr__init_astarshipexpr(val* self, val* p0, val* p1) {
parser_prod__AStarshipExpr__init_astarshipexpr(self, p0, p1); /* Direct call parser_prod#AStarshipExpr#init_astarshipexpr on <self:Object(AStarshipExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: AStarshipExpr, ANode, nullable ANode) */
void parser_prod__AStarshipExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4538);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4539);
show_backtrace(1);
}
{
parser_prod__AStarshipExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_expr= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4542);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4543);
show_backtrace(1);
}
{
parser_prod__AStarshipExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarshipExpr#n_expr2= on <self:AStarshipExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarshipExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarshipExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AStarshipExpr#replace_child on <self:Object(AStarshipExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: AStarshipExpr, AExpr) */
void parser_prod__AStarshipExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarshipExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AStarshipExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AStarshipExpr#n_expr= on <self:Object(AStarshipExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: AStarshipExpr, AExpr) */
void parser_prod__AStarshipExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarshipExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarshipExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AStarshipExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AStarshipExpr#n_expr2= on <self:Object(AStarshipExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: AStarshipExpr, Visitor) */
void parser_prod__AStarshipExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4562);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4563);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarshipExpr__visit_all(val* self, val* p0) {
parser_prod__AStarshipExpr__visit_all(self, p0); /* Direct call parser_prod#AStarshipExpr#visit_all on <self:Object(AStarshipExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarExpr#init_astarexpr for (self: AStarExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AStarExpr__init_astarexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4572);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AStarExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4573);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4574);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AStarExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4575);
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
/* method parser_prod#AStarExpr#init_astarexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AStarExpr__init_astarexpr(val* self, val* p0, val* p1) {
parser_prod__AStarExpr__init_astarexpr(self, p0, p1); /* Direct call parser_prod#AStarExpr#init_astarexpr on <self:Object(AStarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: AStarExpr, ANode, nullable ANode) */
void parser_prod__AStarExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4580);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4581);
show_backtrace(1);
}
{
parser_prod__AStarExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_expr= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4584);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4585);
show_backtrace(1);
}
{
parser_prod__AStarExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AStarExpr#n_expr2= on <self:AStarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AStarExpr#replace_child on <self:Object(AStarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr= for (self: AStarExpr, AExpr) */
void parser_prod__AStarExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AStarExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AStarExpr#n_expr= on <self:Object(AStarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: AStarExpr, AExpr) */
void parser_prod__AStarExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AStarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AStarExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__AStarExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#AStarExpr#n_expr2= on <self:Object(AStarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: AStarExpr, Visitor) */
void parser_prod__AStarExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4604);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4605);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarExpr__visit_all(val* self, val* p0) {
parser_prod__AStarExpr__visit_all(self, p0); /* Direct call parser_prod#AStarExpr#visit_all on <self:Object(AStarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: ASlashExpr, nullable AExpr, nullable AExpr) */
void parser_prod__ASlashExpr__init_aslashexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4614);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ASlashExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4615);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4616);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ASlashExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4617);
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
/* method parser_prod#ASlashExpr#init_aslashexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__ASlashExpr__init_aslashexpr(val* self, val* p0, val* p1) {
parser_prod__ASlashExpr__init_aslashexpr(self, p0, p1); /* Direct call parser_prod#ASlashExpr#init_aslashexpr on <self:Object(ASlashExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#replace_child for (self: ASlashExpr, ANode, nullable ANode) */
void parser_prod__ASlashExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4622);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4623);
show_backtrace(1);
}
{
parser_prod__ASlashExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ASlashExpr#n_expr= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4626);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4627);
show_backtrace(1);
}
{
parser_prod__ASlashExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ASlashExpr#n_expr2= on <self:ASlashExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASlashExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASlashExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ASlashExpr#replace_child on <self:Object(ASlashExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr= for (self: ASlashExpr, AExpr) */
void parser_prod__ASlashExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ASlashExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ASlashExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ASlashExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ASlashExpr#n_expr= on <self:Object(ASlashExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr2= for (self: ASlashExpr, AExpr) */
void parser_prod__ASlashExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ASlashExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ASlashExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ASlashExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#ASlashExpr#n_expr2= on <self:Object(ASlashExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#visit_all for (self: ASlashExpr, Visitor) */
void parser_prod__ASlashExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4646);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4647);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASlashExpr__visit_all(val* self, val* p0) {
parser_prod__ASlashExpr__visit_all(self, p0); /* Direct call parser_prod#ASlashExpr#visit_all on <self:Object(ASlashExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APercentExpr#init_apercentexpr for (self: APercentExpr, nullable AExpr, nullable AExpr) */
void parser_prod__APercentExpr__init_apercentexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4656);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:APercentExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4657);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4658);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:APercentExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4659);
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
/* method parser_prod#APercentExpr#init_apercentexpr for (self: Object, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__APercentExpr__init_apercentexpr(val* self, val* p0, val* p1) {
parser_prod__APercentExpr__init_apercentexpr(self, p0, p1); /* Direct call parser_prod#APercentExpr#init_apercentexpr on <self:Object(APercentExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APercentExpr#replace_child for (self: APercentExpr, ANode, nullable ANode) */
void parser_prod__APercentExpr__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4664);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4665);
show_backtrace(1);
}
{
parser_prod__APercentExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#APercentExpr#n_expr= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4668);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4669);
show_backtrace(1);
}
{
parser_prod__APercentExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#APercentExpr#n_expr2= on <self:APercentExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APercentExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__APercentExpr__replace_child(self, p0, p1); /* Direct call parser_prod#APercentExpr#replace_child on <self:Object(APercentExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr= for (self: APercentExpr, AExpr) */
void parser_prod__APercentExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:APercentExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APercentExpr__n_expr_61d(val* self, val* p0) {
parser_prod__APercentExpr__n_expr_61d(self, p0); /* Direct call parser_prod#APercentExpr#n_expr= on <self:Object(APercentExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr2= for (self: APercentExpr, AExpr) */
void parser_prod__APercentExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:APercentExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__APercentExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__APercentExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#APercentExpr#n_expr2= on <self:Object(APercentExpr)>*/
RET_LABEL:;
}
/* method parser_prod#APercentExpr#visit_all for (self: APercentExpr, Visitor) */
void parser_prod__APercentExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4688);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4689);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APercentExpr__visit_all(val* self, val* p0) {
parser_prod__APercentExpr__visit_all(self, p0); /* Direct call parser_prod#APercentExpr#visit_all on <self:Object(APercentExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: AUminusExpr, nullable TMinus, nullable AExpr) */
void parser_prod__AUminusExpr__init_auminusexpr(val* self, val* p0, val* p1) {
val* var_n_minus /* var n_minus: nullable TMinus */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_minus = p0;
var_n_expr = p1;
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4698);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val = var_n_minus; /* _n_minus on <self:AUminusExpr> */
if (var_n_minus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4699);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_minus,self) on <var_n_minus:nullable TMinus> */
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_minus->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_minus:nullable TMinus> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4700);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AUminusExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4701);
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
/* method parser_prod#AUminusExpr#init_auminusexpr for (self: Object, nullable TMinus, nullable AExpr) */
void VIRTUAL_parser_prod__AUminusExpr__init_auminusexpr(val* self, val* p0, val* p1) {
parser_prod__AUminusExpr__init_auminusexpr(self, p0, p1); /* Direct call parser_prod#AUminusExpr#init_auminusexpr on <self:Object(AUminusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: AUminusExpr, ANode, nullable ANode) */
void parser_prod__AUminusExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinus */;
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
var = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4706);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TMinus> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TMinus> */
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
/* <var_new_child:nullable ANode> isa TMinus */
cltype = type_parser_nodes__TMinus.color;
idtype = type_parser_nodes__TMinus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4707);
show_backtrace(1);
}
{
parser_prod__AUminusExpr__n_minus_61d(self, var_new_child); /* Direct call parser_prod#AUminusExpr#n_minus= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4710);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4711);
show_backtrace(1);
}
{
parser_prod__AUminusExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AUminusExpr#n_expr= on <self:AUminusExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AUminusExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AUminusExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AUminusExpr#replace_child on <self:Object(AUminusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_minus= for (self: AUminusExpr, TMinus) */
void parser_prod__AUminusExpr__n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val = var_node; /* _n_minus on <self:AUminusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinus> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_prod__AUminusExpr__n_minus_61d(val* self, val* p0) {
parser_prod__AUminusExpr__n_minus_61d(self, p0); /* Direct call parser_prod#AUminusExpr#n_minus= on <self:Object(AUminusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_expr= for (self: AUminusExpr, AExpr) */
void parser_prod__AUminusExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AUminusExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AUminusExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AUminusExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AUminusExpr#n_expr= on <self:Object(AUminusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#visit_all for (self: AUminusExpr, Visitor) */
void parser_prod__AUminusExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinus */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4730);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4731);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AUminusExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AUminusExpr__visit_all(val* self, val* p0) {
parser_prod__AUminusExpr__visit_all(self, p0); /* Direct call parser_prod#AUminusExpr#visit_all on <self:Object(AUminusExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#init_anewexpr for (self: ANewExpr, nullable TKwnew, nullable AType, nullable TId, nullable AExprs) */
void parser_prod__ANewExpr__init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var8 /* : Bool */;
var_n_kwnew = p0;
var_n_type = p1;
var_n_id = p2;
var_n_args = p3;
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4742);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:ANewExpr> */
if (var_n_kwnew == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4743);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew> */
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnew->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4744);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var_n_type; /* _n_type on <self:ANewExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4745);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var_n_id; /* _n_id on <self:ANewExpr> */
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
var7 = ((short int (*)(val*, val*))(var_n_id->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL9:(void)0;
}
}
} else {
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4748);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var_n_args; /* _n_args on <self:ANewExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4749);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#init_anewexpr for (self: Object, nullable TKwnew, nullable AType, nullable TId, nullable AExprs) */
void VIRTUAL_parser_prod__ANewExpr__init_anewexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ANewExpr__init_anewexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#ANewExpr#init_anewexpr on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#replace_child for (self: ANewExpr, ANode, nullable ANode) */
void parser_prod__ANewExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwnew */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable TId */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AExprs */;
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
var = self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4754);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwnew> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwnew> */
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
/* <var_new_child:nullable ANode> isa TKwnew */
cltype = type_parser_nodes__TKwnew.color;
idtype = type_parser_nodes__TKwnew.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnew", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4755);
show_backtrace(1);
}
{
parser_prod__ANewExpr__n_kwnew_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_kwnew= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4758);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype16 = type_parser_nodes__AType.color;
idtype17 = type_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4759);
show_backtrace(1);
}
{
parser_prod__ANewExpr__n_type_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_type= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable TId(TId)> */
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
/* <var_new_child:nullable ANode> isa nullable TId */
cltype27 = type_nullable_parser_nodes__TId.color;
idtype28 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4763);
show_backtrace(1);
}
{
parser_prod__ANewExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_id= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4766);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype38 = type_parser_nodes__AExprs.color;
idtype39 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4767);
show_backtrace(1);
}
{
parser_prod__ANewExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ANewExpr#n_args= on <self:ANewExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANewExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANewExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ANewExpr#replace_child on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_kwnew= for (self: ANewExpr, TKwnew) */
void parser_prod__ANewExpr__n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: TKwnew */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var_node; /* _n_kwnew on <self:ANewExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnew> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnew> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_kwnew= for (self: Object, TKwnew) */
void VIRTUAL_parser_prod__ANewExpr__n_kwnew_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_kwnew_61d(self, p0); /* Direct call parser_prod#ANewExpr#n_kwnew= on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_type= for (self: ANewExpr, AType) */
void parser_prod__ANewExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var_node; /* _n_type on <self:ANewExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ANewExpr__n_type_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_type_61d(self, p0); /* Direct call parser_prod#ANewExpr#n_type= on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_id= for (self: ANewExpr, nullable TId) */
void parser_prod__ANewExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var_node; /* _n_id on <self:ANewExpr> */
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
/* method parser_prod#ANewExpr#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__ANewExpr__n_id_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_id_61d(self, p0); /* Direct call parser_prod#ANewExpr#n_id= on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_args= for (self: ANewExpr, AExprs) */
void parser_prod__ANewExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var_node; /* _n_args on <self:ANewExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ANewExpr__n_args_61d(val* self, val* p0) {
parser_prod__ANewExpr__n_args_61d(self, p0); /* Direct call parser_prod#ANewExpr#n_args= on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ANewExpr#visit_all for (self: ANewExpr, Visitor) */
void parser_prod__ANewExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : nullable TId */;
val* var3 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4796);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4797);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4799);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANewExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANewExpr__visit_all(val* self, val* p0) {
parser_prod__ANewExpr__visit_all(self, p0); /* Direct call parser_prod#ANewExpr#visit_all on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#init_aattrexpr for (self: AAttrExpr, nullable AExpr, nullable TAttrid) */
void parser_prod__AAttrExpr__init_aattrexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TAttrid */;
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4808);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4809);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4810);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4811);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#init_aattrexpr for (self: Object, nullable AExpr, nullable TAttrid) */
void VIRTUAL_parser_prod__AAttrExpr__init_aattrexpr(val* self, val* p0, val* p1) {
parser_prod__AAttrExpr__init_aattrexpr(self, p0, p1); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#replace_child for (self: AAttrExpr, ANode, nullable ANode) */
void parser_prod__AAttrExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TAttrid */;
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
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4816);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4817);
show_backtrace(1);
}
{
parser_prod__AAttrExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrExpr#n_expr= on <self:AAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4820);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype16 = type_parser_nodes__TAttrid.color;
idtype17 = type_parser_nodes__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4821);
show_backtrace(1);
}
{
parser_prod__AAttrExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAttrExpr#n_id= on <self:AAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAttrExpr#replace_child on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_expr= for (self: AAttrExpr, AExpr) */
void parser_prod__AAttrExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAttrExpr#n_expr= on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_id= for (self: AAttrExpr, TAttrid) */
void parser_prod__AAttrExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AAttrExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAttrExpr__n_id_61d(self, p0); /* Direct call parser_prod#AAttrExpr#n_id= on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#visit_all for (self: AAttrExpr, Visitor) */
void parser_prod__AAttrExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4840);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4841);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrExpr__visit_all(val* self, val* p0) {
parser_prod__AAttrExpr__visit_all(self, p0); /* Direct call parser_prod#AAttrExpr#visit_all on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#init_aattrassignexpr for (self: AAttrAssignExpr, nullable AExpr, nullable TAttrid, nullable TAssign, nullable AExpr) */
void parser_prod__AAttrAssignExpr__init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4852);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4853);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4854);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4855);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4856);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AAttrAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4857);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4858);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4859);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#init_aattrassignexpr for (self: Object, nullable AExpr, nullable TAttrid, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrAssignExpr__init_aattrassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAttrAssignExpr__init_aattrassignexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#replace_child for (self: AAttrAssignExpr, ANode, nullable ANode) */
void parser_prod__AAttrAssignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TAttrid */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TAssign */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4864);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4865);
show_backtrace(1);
}
{
parser_prod__AAttrAssignExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_expr= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4868);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype16 = type_parser_nodes__TAttrid.color;
idtype17 = type_parser_nodes__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4869);
show_backtrace(1);
}
{
parser_prod__AAttrAssignExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_id= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4872);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype27 = type_parser_nodes__TAssign.color;
idtype28 = type_parser_nodes__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4873);
show_backtrace(1);
}
{
parser_prod__AAttrAssignExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_assign= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4876);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4877);
show_backtrace(1);
}
{
parser_prod__AAttrAssignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AAttrAssignExpr#n_value= on <self:AAttrAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrAssignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAttrAssignExpr#replace_child on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_expr= for (self: AAttrAssignExpr, AExpr) */
void parser_prod__AAttrAssignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAttrAssignExpr#n_expr= on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_id= for (self: AAttrAssignExpr, TAttrid) */
void parser_prod__AAttrAssignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_id_61d(self, p0); /* Direct call parser_prod#AAttrAssignExpr#n_id= on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_assign= for (self: AAttrAssignExpr, TAssign) */
void parser_prod__AAttrAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_assign_61d(self, p0); /* Direct call parser_prod#AAttrAssignExpr#n_assign= on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_value= for (self: AAttrAssignExpr, AExpr) */
void parser_prod__AAttrAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AAttrAssignExpr__n_value_61d(self, p0); /* Direct call parser_prod#AAttrAssignExpr#n_value= on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#visit_all for (self: AAttrAssignExpr, Visitor) */
void parser_prod__AAttrAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4906);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4907);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4908);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4909);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrAssignExpr__visit_all(val* self, val* p0) {
parser_prod__AAttrAssignExpr__visit_all(self, p0); /* Direct call parser_prod#AAttrAssignExpr#visit_all on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#init_aattrreassignexpr for (self: AAttrReassignExpr, nullable AExpr, nullable TAttrid, nullable AAssignOp, nullable AExpr) */
void parser_prod__AAttrReassignExpr__init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4920);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4921);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4922);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AAttrReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4923);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4924);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4925);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4926);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AAttrReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4927);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#init_aattrreassignexpr for (self: Object, nullable AExpr, nullable TAttrid, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrReassignExpr__init_aattrreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAttrReassignExpr__init_aattrreassignexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#replace_child for (self: AAttrReassignExpr, ANode, nullable ANode) */
void parser_prod__AAttrReassignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TAttrid */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AAssignOp */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4932);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4933);
show_backtrace(1);
}
{
parser_prod__AAttrReassignExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_expr= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4936);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TAttrid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TAttrid> */
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
/* <var_new_child:nullable ANode> isa TAttrid */
cltype16 = type_parser_nodes__TAttrid.color;
idtype17 = type_parser_nodes__TAttrid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAttrid", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4937);
show_backtrace(1);
}
{
parser_prod__AAttrReassignExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_id= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4940);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype27 = type_parser_nodes__AAssignOp.color;
idtype28 = type_parser_nodes__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4941);
show_backtrace(1);
}
{
parser_prod__AAttrReassignExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_assign_op= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4944);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4945);
show_backtrace(1);
}
{
parser_prod__AAttrReassignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AAttrReassignExpr#n_value= on <self:AAttrReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrReassignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAttrReassignExpr#replace_child on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_expr= for (self: AAttrReassignExpr, AExpr) */
void parser_prod__AAttrReassignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AAttrReassignExpr#n_expr= on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_id= for (self: AAttrReassignExpr, TAttrid) */
void parser_prod__AAttrReassignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_id= for (self: Object, TAttrid) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_id_61d(self, p0); /* Direct call parser_prod#AAttrReassignExpr#n_id= on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_assign_op= for (self: AAttrReassignExpr, AAssignOp) */
void parser_prod__AAttrReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_assign_op_61d(self, p0); /* Direct call parser_prod#AAttrReassignExpr#n_assign_op= on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_value= for (self: AAttrReassignExpr, AExpr) */
void parser_prod__AAttrReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AAttrReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AAttrReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AAttrReassignExpr__n_value_61d(self, p0); /* Direct call parser_prod#AAttrReassignExpr#n_value= on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#visit_all for (self: AAttrReassignExpr, Visitor) */
void parser_prod__AAttrReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TAttrid */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4974);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4975);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4976);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4977);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrReassignExpr__visit_all(val* self, val* p0) {
parser_prod__AAttrReassignExpr__visit_all(self, p0); /* Direct call parser_prod#AAttrReassignExpr#visit_all on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallExpr#init_acallexpr for (self: ACallExpr, nullable AExpr, nullable TId, nullable AExprs) */
void parser_prod__ACallExpr__init_acallexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_args /* var n_args: nullable AExprs */;
var_n_expr = p0;
var_n_id = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4987);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4988);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4989);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4990);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4991);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4992);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#init_acallexpr for (self: Object, nullable AExpr, nullable TId, nullable AExprs) */
void VIRTUAL_parser_prod__ACallExpr__init_acallexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ACallExpr__init_acallexpr(self, p0, p1, p2); /* Direct call parser_prod#ACallExpr#init_acallexpr on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallExpr#replace_child for (self: ACallExpr, ANode, nullable ANode) */
void parser_prod__ACallExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AExprs */;
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4997);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 4998);
show_backtrace(1);
}
{
parser_prod__ACallExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACallExpr#n_expr= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5001);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5002);
show_backtrace(1);
}
{
parser_prod__ACallExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ACallExpr#n_id= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5005);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype27 = type_parser_nodes__AExprs.color;
idtype28 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5006);
show_backtrace(1);
}
{
parser_prod__ACallExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ACallExpr#n_args= on <self:ACallExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACallExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACallExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ACallExpr#replace_child on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_expr= for (self: ACallExpr, AExpr) */
void parser_prod__ACallExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACallExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ACallExpr#n_expr= on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_id= for (self: ACallExpr, TId) */
void parser_prod__ACallExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ACallExpr__n_id_61d(val* self, val* p0) {
parser_prod__ACallExpr__n_id_61d(self, p0); /* Direct call parser_prod#ACallExpr#n_id= on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_args= for (self: ACallExpr, AExprs) */
void parser_prod__ACallExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ACallExpr__n_args_61d(val* self, val* p0) {
parser_prod__ACallExpr__n_args_61d(self, p0); /* Direct call parser_prod#ACallExpr#n_args= on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallExpr#visit_all for (self: ACallExpr, Visitor) */
void parser_prod__ACallExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5030);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5031);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5032);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACallExpr__visit_all(val* self, val* p0) {
parser_prod__ACallExpr__visit_all(self, p0); /* Direct call parser_prod#ACallExpr#visit_all on <self:Object(ACallExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#init_acallassignexpr for (self: ACallAssignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable TAssign, nullable AExpr) */
void parser_prod__ACallAssignExpr__init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5044);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5045);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5046);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5047);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5048);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5049);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5050);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ACallAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5051);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5052);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5053);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#init_acallassignexpr for (self: Object, nullable AExpr, nullable TId, nullable AExprs, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__ACallAssignExpr__init_acallassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__ACallAssignExpr__init_acallassignexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#replace_child for (self: ACallAssignExpr, ANode, nullable ANode) */
void parser_prod__ACallAssignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AExprs */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : TAssign */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : AExpr */;
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5058);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5059);
show_backtrace(1);
}
{
parser_prod__ACallAssignExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_expr= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5062);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5063);
show_backtrace(1);
}
{
parser_prod__ACallAssignExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_id= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5066);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype27 = type_parser_nodes__AExprs.color;
idtype28 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5067);
show_backtrace(1);
}
{
parser_prod__ACallAssignExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_args= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5070);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype38 = type_parser_nodes__TAssign.color;
idtype39 = type_parser_nodes__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5071);
show_backtrace(1);
}
{
parser_prod__ACallAssignExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_assign= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5074);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype49 = type_parser_nodes__AExpr.color;
idtype50 = type_parser_nodes__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5075);
show_backtrace(1);
}
{
parser_prod__ACallAssignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ACallAssignExpr#n_value= on <self:ACallAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACallAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACallAssignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ACallAssignExpr#replace_child on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_expr= for (self: ACallAssignExpr, AExpr) */
void parser_prod__ACallAssignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ACallAssignExpr#n_expr= on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_id= for (self: ACallAssignExpr, TId) */
void parser_prod__ACallAssignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_id_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_id_61d(self, p0); /* Direct call parser_prod#ACallAssignExpr#n_id= on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_args= for (self: ACallAssignExpr, AExprs) */
void parser_prod__ACallAssignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_args_61d(self, p0); /* Direct call parser_prod#ACallAssignExpr#n_args= on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_assign= for (self: ACallAssignExpr, TAssign) */
void parser_prod__ACallAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_assign_61d(self, p0); /* Direct call parser_prod#ACallAssignExpr#n_assign= on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_value= for (self: ACallAssignExpr, AExpr) */
void parser_prod__ACallAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ACallAssignExpr__n_value_61d(self, p0); /* Direct call parser_prod#ACallAssignExpr#n_value= on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#visit_all for (self: ACallAssignExpr, Visitor) */
void parser_prod__ACallAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5109);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5110);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5111);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5112);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5113);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACallAssignExpr__visit_all(val* self, val* p0) {
parser_prod__ACallAssignExpr__visit_all(self, p0); /* Direct call parser_prod#ACallAssignExpr#visit_all on <self:Object(ACallAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#init_acallreassignexpr for (self: ACallReassignExpr, nullable AExpr, nullable TId, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void parser_prod__ACallReassignExpr__init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5125);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACallReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5126);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5127);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_n_id; /* _n_id on <self:ACallReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5128);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5129);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_n_args; /* _n_args on <self:ACallReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5130);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5131);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ACallReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5132);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5133);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ACallReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5134);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#init_acallreassignexpr for (self: Object, nullable AExpr, nullable TId, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__ACallReassignExpr__init_acallreassignexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__ACallReassignExpr__init_acallreassignexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#replace_child for (self: ACallReassignExpr, ANode, nullable ANode) */
void parser_prod__ACallReassignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AExprs */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AAssignOp */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : AExpr */;
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5139);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5140);
show_backtrace(1);
}
{
parser_prod__ACallReassignExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_expr= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5143);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5144);
show_backtrace(1);
}
{
parser_prod__ACallReassignExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_id= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5147);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype27 = type_parser_nodes__AExprs.color;
idtype28 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5148);
show_backtrace(1);
}
{
parser_prod__ACallReassignExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_args= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5151);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype38 = type_parser_nodes__AAssignOp.color;
idtype39 = type_parser_nodes__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5152);
show_backtrace(1);
}
{
parser_prod__ACallReassignExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_assign_op= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5155);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:AExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype49 = type_parser_nodes__AExpr.color;
idtype50 = type_parser_nodes__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5156);
show_backtrace(1);
}
{
parser_prod__ACallReassignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ACallReassignExpr#n_value= on <self:ACallReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACallReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACallReassignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ACallReassignExpr#replace_child on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_expr= for (self: ACallReassignExpr, AExpr) */
void parser_prod__ACallReassignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ACallReassignExpr#n_expr= on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_id= for (self: ACallReassignExpr, TId) */
void parser_prod__ACallReassignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var_node; /* _n_id on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_id_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_id_61d(self, p0); /* Direct call parser_prod#ACallReassignExpr#n_id= on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_args= for (self: ACallReassignExpr, AExprs) */
void parser_prod__ACallReassignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var_node; /* _n_args on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_args_61d(self, p0); /* Direct call parser_prod#ACallReassignExpr#n_args= on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_assign_op= for (self: ACallReassignExpr, AAssignOp) */
void parser_prod__ACallReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_assign_op_61d(self, p0); /* Direct call parser_prod#ACallReassignExpr#n_assign_op= on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_value= for (self: ACallReassignExpr, AExpr) */
void parser_prod__ACallReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ACallReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACallReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ACallReassignExpr__n_value_61d(self, p0); /* Direct call parser_prod#ACallReassignExpr#n_value= on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#visit_all for (self: ACallReassignExpr, Visitor) */
void parser_prod__ACallReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TId */;
val* var2 /* : AExprs */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5190);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5191);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5192);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5193);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5194);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACallReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACallReassignExpr__visit_all(val* self, val* p0) {
parser_prod__ACallReassignExpr__visit_all(self, p0); /* Direct call parser_prod#ACallReassignExpr#visit_all on <self:Object(ACallReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#init_asuperexpr for (self: ASuperExpr, nullable AQualified, nullable TKwsuper, nullable AExprs) */
void parser_prod__ASuperExpr__init_asuperexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_qualified /* var n_qualified: nullable AQualified */;
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_args /* var n_args: nullable AExprs */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_qualified = p0;
var_n_kwsuper = p1;
var_n_args = p2;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var_n_qualified; /* _n_qualified on <self:ASuperExpr> */
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
var5 = ((short int (*)(val*, val*))(var_n_qualified->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_qualified, var_other) /* == on <var_n_qualified:nullable AQualified(AQualified)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_qualified,self) on <var_n_qualified:nullable AQualified(AQualified)> */
var_n_qualified->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qualified:nullable AQualified(AQualified)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5206);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExpr> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5207);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwsuper->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL8:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5208);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val = var_n_args; /* _n_args on <self:ASuperExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5209);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#init_asuperexpr for (self: Object, nullable AQualified, nullable TKwsuper, nullable AExprs) */
void VIRTUAL_parser_prod__ASuperExpr__init_asuperexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ASuperExpr__init_asuperexpr(self, p0, p1, p2); /* Direct call parser_prod#ASuperExpr#init_asuperexpr on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#replace_child for (self: ASuperExpr, ANode, nullable ANode) */
void parser_prod__ASuperExpr__replace_child(val* self, val* p0, val* p1) {
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
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AExprs */;
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
var = self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
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
cltype = type_nullable_parser_nodes__AQualified.color;
idtype = type_nullable_parser_nodes__AQualified.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5215);
show_backtrace(1);
}
{
parser_prod__ASuperExpr__n_qualified_61d(self, var_new_child); /* Direct call parser_prod#ASuperExpr#n_qualified= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5218);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwsuper> */
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
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype16 = type_parser_nodes__TKwsuper.color;
idtype17 = type_parser_nodes__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5219);
show_backtrace(1);
}
{
parser_prod__ASuperExpr__n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperExpr#n_kwsuper= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5222);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype27 = type_parser_nodes__AExprs.color;
idtype28 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5223);
show_backtrace(1);
}
{
parser_prod__ASuperExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ASuperExpr#n_args= on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ASuperExpr#replace_child on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_qualified= for (self: ASuperExpr, nullable AQualified) */
void parser_prod__ASuperExpr__n_qualified_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQualified */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var_node; /* _n_qualified on <self:ASuperExpr> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AQualified(AQualified)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AQualified(AQualified)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AQualified(AQualified)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_qualified= for (self: Object, nullable AQualified) */
void VIRTUAL_parser_prod__ASuperExpr__n_qualified_61d(val* self, val* p0) {
parser_prod__ASuperExpr__n_qualified_61d(self, p0); /* Direct call parser_prod#ASuperExpr#n_qualified= on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_kwsuper= for (self: ASuperExpr, TKwsuper) */
void parser_prod__ASuperExpr__n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_prod__ASuperExpr__n_kwsuper_61d(val* self, val* p0) {
parser_prod__ASuperExpr__n_kwsuper_61d(self, p0); /* Direct call parser_prod#ASuperExpr#n_kwsuper= on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_args= for (self: ASuperExpr, AExprs) */
void parser_prod__ASuperExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val = var_node; /* _n_args on <self:ASuperExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ASuperExpr__n_args_61d(val* self, val* p0) {
parser_prod__ASuperExpr__n_args_61d(self, p0); /* Direct call parser_prod#ASuperExpr#n_args= on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#visit_all for (self: ASuperExpr, Visitor) */
void parser_prod__ASuperExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AQualified */;
val* var1 /* : TKwsuper */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5248);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5249);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperExpr__visit_all(val* self, val* p0) {
parser_prod__ASuperExpr__visit_all(self, p0); /* Direct call parser_prod#ASuperExpr#visit_all on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AInitExpr#init_ainitexpr for (self: AInitExpr, nullable AExpr, nullable TKwinit, nullable AExprs) */
void parser_prod__AInitExpr__init_ainitexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_args /* var n_args: nullable AExprs */;
var_n_expr = p0;
var_n_kwinit = p1;
var_n_args = p2;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5259);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AInitExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5260);
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
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5261);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AInitExpr> */
if (var_n_kwinit == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5262);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit> */
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwinit->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5263);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_n_args; /* _n_args on <self:AInitExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5264);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#init_ainitexpr for (self: Object, nullable AExpr, nullable TKwinit, nullable AExprs) */
void VIRTUAL_parser_prod__AInitExpr__init_ainitexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AInitExpr__init_ainitexpr(self, p0, p1, p2); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <self:Object(AInitExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AInitExpr#replace_child for (self: AInitExpr, ANode, nullable ANode) */
void parser_prod__AInitExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TKwinit */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AExprs */;
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5269);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5270);
show_backtrace(1);
}
{
parser_prod__AInitExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AInitExpr#n_expr= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5273);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwinit> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwinit> */
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
/* <var_new_child:nullable ANode> isa TKwinit */
cltype16 = type_parser_nodes__TKwinit.color;
idtype17 = type_parser_nodes__TKwinit.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinit", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5274);
show_backtrace(1);
}
{
parser_prod__AInitExpr__n_kwinit_61d(self, var_new_child); /* Direct call parser_prod#AInitExpr#n_kwinit= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5277);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype27 = type_parser_nodes__AExprs.color;
idtype28 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5278);
show_backtrace(1);
}
{
parser_prod__AInitExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#AInitExpr#n_args= on <self:AInitExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInitExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInitExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AInitExpr#replace_child on <self:Object(AInitExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_expr= for (self: AInitExpr, AExpr) */
void parser_prod__AInitExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AInitExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AInitExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AInitExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AInitExpr#n_expr= on <self:Object(AInitExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_kwinit= for (self: AInitExpr, TKwinit) */
void parser_prod__AInitExpr__n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: TKwinit */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = var_node; /* _n_kwinit on <self:AInitExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwinit> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwinit> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_kwinit= for (self: Object, TKwinit) */
void VIRTUAL_parser_prod__AInitExpr__n_kwinit_61d(val* self, val* p0) {
parser_prod__AInitExpr__n_kwinit_61d(self, p0); /* Direct call parser_prod#AInitExpr#n_kwinit= on <self:Object(AInitExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_args= for (self: AInitExpr, AExprs) */
void parser_prod__AInitExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = var_node; /* _n_args on <self:AInitExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__AInitExpr__n_args_61d(val* self, val* p0) {
parser_prod__AInitExpr__n_args_61d(self, p0); /* Direct call parser_prod#AInitExpr#n_args= on <self:Object(AInitExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AInitExpr#visit_all for (self: AInitExpr, Visitor) */
void parser_prod__AInitExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TKwinit */;
val* var2 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5302);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5303);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5304);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInitExpr__visit_all(val* self, val* p0) {
parser_prod__AInitExpr__visit_all(self, p0); /* Direct call parser_prod#AInitExpr#visit_all on <self:Object(AInitExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: ABraExpr, nullable AExpr, nullable AExprs) */
void parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_args /* var n_args: nullable AExprs */;
var_n_expr = p0;
var_n_args = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5313);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5314);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5315);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5316);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#init_abraexpr for (self: Object, nullable AExpr, nullable AExprs) */
void VIRTUAL_parser_prod__ABraExpr__init_abraexpr(val* self, val* p0, val* p1) {
parser_prod__ABraExpr__init_abraexpr(self, p0, p1); /* Direct call parser_prod#ABraExpr#init_abraexpr on <self:Object(ABraExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExpr#replace_child for (self: ABraExpr, ANode, nullable ANode) */
void parser_prod__ABraExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : AExprs */;
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
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5321);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5322);
show_backtrace(1);
}
{
parser_prod__ABraExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ABraExpr#n_expr= on <self:ABraExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5325);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype16 = type_parser_nodes__AExprs.color;
idtype17 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5326);
show_backtrace(1);
}
{
parser_prod__ABraExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ABraExpr#n_args= on <self:ABraExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABraExpr#replace_child on <self:Object(ABraExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_expr= for (self: ABraExpr, AExpr) */
void parser_prod__ABraExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABraExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ABraExpr#n_expr= on <self:Object(ABraExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_args= for (self: ABraExpr, AExprs) */
void parser_prod__ABraExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ABraExpr__n_args_61d(val* self, val* p0) {
parser_prod__ABraExpr__n_args_61d(self, p0); /* Direct call parser_prod#ABraExpr#n_args= on <self:Object(ABraExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraExpr#visit_all for (self: ABraExpr, Visitor) */
void parser_prod__ABraExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5345);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5346);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraExpr__visit_all(val* self, val* p0) {
parser_prod__ABraExpr__visit_all(self, p0); /* Direct call parser_prod#ABraExpr#visit_all on <self:Object(ABraExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#init_abraassignexpr for (self: ABraAssignExpr, nullable AExpr, nullable AExprs, nullable TAssign, nullable AExpr) */
void parser_prod__ABraAssignExpr__init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5357);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraAssignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5358);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5359);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraAssignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5360);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5361);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ABraAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5362);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5363);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5364);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#init_abraassignexpr for (self: Object, nullable AExpr, nullable AExprs, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__ABraAssignExpr__init_abraassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ABraAssignExpr__init_abraassignexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#ABraAssignExpr#init_abraassignexpr on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#replace_child for (self: ABraAssignExpr, ANode, nullable ANode) */
void parser_prod__ABraAssignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : AExprs */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TAssign */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5369);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5370);
show_backtrace(1);
}
{
parser_prod__ABraAssignExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_expr= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5373);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype16 = type_parser_nodes__AExprs.color;
idtype17 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5374);
show_backtrace(1);
}
{
parser_prod__ABraAssignExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_args= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5377);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype27 = type_parser_nodes__TAssign.color;
idtype28 = type_parser_nodes__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5378);
show_backtrace(1);
}
{
parser_prod__ABraAssignExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_assign= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5381);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5382);
show_backtrace(1);
}
{
parser_prod__ABraAssignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ABraAssignExpr#n_value= on <self:ABraAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraAssignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABraAssignExpr#replace_child on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_expr= for (self: ABraAssignExpr, AExpr) */
void parser_prod__ABraAssignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ABraAssignExpr#n_expr= on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_args= for (self: ABraAssignExpr, AExprs) */
void parser_prod__ABraAssignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_args_61d(self, p0); /* Direct call parser_prod#ABraAssignExpr#n_args= on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_assign= for (self: ABraAssignExpr, TAssign) */
void parser_prod__ABraAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_assign_61d(self, p0); /* Direct call parser_prod#ABraAssignExpr#n_assign= on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_value= for (self: ABraAssignExpr, AExpr) */
void parser_prod__ABraAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ABraAssignExpr__n_value_61d(self, p0); /* Direct call parser_prod#ABraAssignExpr#n_value= on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#visit_all for (self: ABraAssignExpr, Visitor) */
void parser_prod__ABraAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : TAssign */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5411);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5412);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5413);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5414);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraAssignExpr__visit_all(val* self, val* p0) {
parser_prod__ABraAssignExpr__visit_all(self, p0); /* Direct call parser_prod#ABraAssignExpr#visit_all on <self:Object(ABraAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#init_abrareassignexpr for (self: ABraReassignExpr, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void parser_prod__ABraReassignExpr__init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5425);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ABraReassignExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5426);
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
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5427);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_n_args; /* _n_args on <self:ABraReassignExpr> */
if (var_n_args == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5428);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_args,self) on <var_n_args:nullable AExprs> */
if (unlikely(var_n_args == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_args->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_args:nullable AExprs> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5429);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:ABraReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5430);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5431);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:ABraReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5432);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#init_abrareassignexpr for (self: Object, nullable AExpr, nullable AExprs, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__ABraReassignExpr__init_abrareassignexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ABraReassignExpr__init_abrareassignexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#ABraReassignExpr#init_abrareassignexpr on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#replace_child for (self: ABraReassignExpr, ANode, nullable ANode) */
void parser_prod__ABraReassignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : AExprs */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AAssignOp */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5437);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5438);
show_backtrace(1);
}
{
parser_prod__ABraReassignExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_expr= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5441);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExprs> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExprs> */
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
/* <var_new_child:nullable ANode> isa AExprs */
cltype16 = type_parser_nodes__AExprs.color;
idtype17 = type_parser_nodes__AExprs.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExprs", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5442);
show_backtrace(1);
}
{
parser_prod__ABraReassignExpr__n_args_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_args= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5445);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype27 = type_parser_nodes__AAssignOp.color;
idtype28 = type_parser_nodes__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5446);
show_backtrace(1);
}
{
parser_prod__ABraReassignExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_assign_op= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5449);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5450);
show_backtrace(1);
}
{
parser_prod__ABraReassignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#ABraReassignExpr#n_value= on <self:ABraReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraReassignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABraReassignExpr#replace_child on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_expr= for (self: ABraReassignExpr, AExpr) */
void parser_prod__ABraReassignExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ABraReassignExpr#n_expr= on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_args= for (self: ABraReassignExpr, AExprs) */
void parser_prod__ABraReassignExpr__n_args_61d(val* self, val* p0) {
val* var_node /* var node: AExprs */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = var_node; /* _n_args on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExprs> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExprs> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_args_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_args_61d(self, p0); /* Direct call parser_prod#ABraReassignExpr#n_args= on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_assign_op= for (self: ABraReassignExpr, AAssignOp) */
void parser_prod__ABraReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_assign_op_61d(self, p0); /* Direct call parser_prod#ABraReassignExpr#n_assign_op= on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_value= for (self: ABraReassignExpr, AExpr) */
void parser_prod__ABraReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:ABraReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ABraReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__ABraReassignExpr__n_value_61d(self, p0); /* Direct call parser_prod#ABraReassignExpr#n_value= on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: ABraReassignExpr, Visitor) */
void parser_prod__ABraReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExprs */;
val* var2 /* : AAssignOp */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5479);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5480);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5481);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5482);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraReassignExpr__visit_all(val* self, val* p0) {
parser_prod__ABraReassignExpr__visit_all(self, p0); /* Direct call parser_prod#ABraReassignExpr#visit_all on <self:Object(ABraReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: AVarExpr, nullable TId) */
void parser_prod__AVarExpr__init_avarexpr(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5490);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5491);
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
RET_LABEL:;
}
/* method parser_prod#AVarExpr#init_avarexpr for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AVarExpr__init_avarexpr(val* self, val* p0) {
parser_prod__AVarExpr__init_avarexpr(self, p0); /* Direct call parser_prod#AVarExpr#init_avarexpr on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarExpr#replace_child for (self: AVarExpr, ANode, nullable ANode) */
void parser_prod__AVarExpr__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5496);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5497);
show_backtrace(1);
}
{
parser_prod__AVarExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVarExpr#n_id= on <self:AVarExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AVarExpr#replace_child on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarExpr#n_id= for (self: AVarExpr, TId) */
void parser_prod__AVarExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVarExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVarExpr__n_id_61d(self, p0); /* Direct call parser_prod#AVarExpr#n_id= on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarExpr#visit_all for (self: AVarExpr, Visitor) */
void parser_prod__AVarExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5511);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarExpr__visit_all(val* self, val* p0) {
parser_prod__AVarExpr__visit_all(self, p0); /* Direct call parser_prod#AVarExpr#visit_all on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#init_avarassignexpr for (self: AVarAssignExpr, nullable TId, nullable TAssign, nullable AExpr) */
void parser_prod__AVarAssignExpr__init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_id = p0;
var_n_assign = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5521);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarAssignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5522);
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
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5523);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVarAssignExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5524);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5525);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarAssignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5526);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#init_avarassignexpr for (self: Object, nullable TId, nullable TAssign, nullable AExpr) */
void VIRTUAL_parser_prod__AVarAssignExpr__init_avarassignexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AVarAssignExpr__init_avarassignexpr(self, p0, p1, p2); /* Direct call parser_prod#AVarAssignExpr#init_avarassignexpr on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#replace_child for (self: AVarAssignExpr, ANode, nullable ANode) */
void parser_prod__AVarAssignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TAssign */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5531);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5532);
show_backtrace(1);
}
{
parser_prod__AVarAssignExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVarAssignExpr#n_id= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5535);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TAssign> */
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
/* <var_new_child:nullable ANode> isa TAssign */
cltype16 = type_parser_nodes__TAssign.color;
idtype17 = type_parser_nodes__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5536);
show_backtrace(1);
}
{
parser_prod__AVarAssignExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AVarAssignExpr#n_assign= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5539);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5540);
show_backtrace(1);
}
{
parser_prod__AVarAssignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AVarAssignExpr#n_value= on <self:AVarAssignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarAssignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarAssignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AVarAssignExpr#replace_child on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_id= for (self: AVarAssignExpr, TId) */
void parser_prod__AVarAssignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVarAssignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVarAssignExpr__n_id_61d(self, p0); /* Direct call parser_prod#AVarAssignExpr#n_id= on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_assign= for (self: AVarAssignExpr, TAssign) */
void parser_prod__AVarAssignExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var_node; /* _n_assign on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AVarAssignExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AVarAssignExpr__n_assign_61d(self, p0); /* Direct call parser_prod#AVarAssignExpr#n_assign= on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_value= for (self: AVarAssignExpr, AExpr) */
void parser_prod__AVarAssignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarAssignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AVarAssignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AVarAssignExpr__n_value_61d(self, p0); /* Direct call parser_prod#AVarAssignExpr#n_value= on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#visit_all for (self: AVarAssignExpr, Visitor) */
void parser_prod__AVarAssignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5564);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5565);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5566);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarAssignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarAssignExpr__visit_all(val* self, val* p0) {
parser_prod__AVarAssignExpr__visit_all(self, p0); /* Direct call parser_prod#AVarAssignExpr#visit_all on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#init_avarreassignexpr for (self: AVarReassignExpr, nullable TId, nullable AAssignOp, nullable AExpr) */
void parser_prod__AVarReassignExpr__init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign_op /* var n_assign_op: nullable AAssignOp */;
val* var_n_value /* var n_value: nullable AExpr */;
var_n_id = p0;
var_n_assign_op = p1;
var_n_value = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5576);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_n_id; /* _n_id on <self:AVarReassignExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5577);
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
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5578);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_n_assign_op; /* _n_assign_op on <self:AVarReassignExpr> */
if (var_n_assign_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5579);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign_op,self) on <var_n_assign_op:nullable AAssignOp> */
if (unlikely(var_n_assign_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_assign_op->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign_op:nullable AAssignOp> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5580);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_n_value; /* _n_value on <self:AVarReassignExpr> */
if (var_n_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5581);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_value,self) on <var_n_value:nullable AExpr> */
if (unlikely(var_n_value == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_value->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_value:nullable AExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#init_avarreassignexpr for (self: Object, nullable TId, nullable AAssignOp, nullable AExpr) */
void VIRTUAL_parser_prod__AVarReassignExpr__init_avarreassignexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__AVarReassignExpr__init_avarreassignexpr(self, p0, p1, p2); /* Direct call parser_prod#AVarReassignExpr#init_avarreassignexpr on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#replace_child for (self: AVarReassignExpr, ANode, nullable ANode) */
void parser_prod__AVarReassignExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : AAssignOp */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5586);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5587);
show_backtrace(1);
}
{
parser_prod__AVarReassignExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVarReassignExpr#n_id= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5590);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AAssignOp> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AAssignOp> */
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
/* <var_new_child:nullable ANode> isa AAssignOp */
cltype16 = type_parser_nodes__AAssignOp.color;
idtype17 = type_parser_nodes__AAssignOp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAssignOp", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5591);
show_backtrace(1);
}
{
parser_prod__AVarReassignExpr__n_assign_op_61d(self, var_new_child); /* Direct call parser_prod#AVarReassignExpr#n_assign_op= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5594);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5595);
show_backtrace(1);
}
{
parser_prod__AVarReassignExpr__n_value_61d(self, var_new_child); /* Direct call parser_prod#AVarReassignExpr#n_value= on <self:AVarReassignExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVarReassignExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVarReassignExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AVarReassignExpr#replace_child on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_id= for (self: AVarReassignExpr, TId) */
void parser_prod__AVarReassignExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var_node; /* _n_id on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVarReassignExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVarReassignExpr__n_id_61d(self, p0); /* Direct call parser_prod#AVarReassignExpr#n_id= on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_assign_op= for (self: AVarReassignExpr, AAssignOp) */
void parser_prod__AVarReassignExpr__n_assign_op_61d(val* self, val* p0) {
val* var_node /* var node: AAssignOp */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val = var_node; /* _n_assign_op on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAssignOp> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAssignOp> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_assign_op= for (self: Object, AAssignOp) */
void VIRTUAL_parser_prod__AVarReassignExpr__n_assign_op_61d(val* self, val* p0) {
parser_prod__AVarReassignExpr__n_assign_op_61d(self, p0); /* Direct call parser_prod#AVarReassignExpr#n_assign_op= on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_value= for (self: AVarReassignExpr, AExpr) */
void parser_prod__AVarReassignExpr__n_value_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val = var_node; /* _n_value on <self:AVarReassignExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#n_value= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AVarReassignExpr__n_value_61d(val* self, val* p0) {
parser_prod__AVarReassignExpr__n_value_61d(self, p0); /* Direct call parser_prod#AVarReassignExpr#n_value= on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#visit_all for (self: AVarReassignExpr, Visitor) */
void parser_prod__AVarReassignExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : AAssignOp */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5619);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5620);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5621);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarReassignExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVarReassignExpr__visit_all(val* self, val* p0) {
parser_prod__AVarReassignExpr__visit_all(self, p0); /* Direct call parser_prod#AVarReassignExpr#visit_all on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: ACrangeExpr, nullable TObra, nullable AExpr, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void parser_prod__ACrangeExpr__init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
short int var10 /* : Bool */;
var_n_obra = p0;
var_n_expr = p1;
var_n_expr2 = p2;
var_n_cbra = p3;
var_n_annotations = p4;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5688);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_n_obra; /* _n_obra on <self:ACrangeExpr> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5689);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5690);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ACrangeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5691);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5692);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ACrangeExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5693);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5694);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ACrangeExpr> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5695);
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
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACrangeExpr> */
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
/* method parser_prod#ACrangeExpr#init_acrangeexpr for (self: Object, nullable TObra, nullable AExpr, nullable AExpr, nullable TCbra, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACrangeExpr__init_acrangeexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__ACrangeExpr__init_acrangeexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#ACrangeExpr#init_acrangeexpr on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#replace_child for (self: ACrangeExpr, ANode, nullable ANode) */
void parser_prod__ACrangeExpr__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : TCbra */;
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
var = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5702);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5703);
show_backtrace(1);
}
{
parser_prod__ACrangeExpr__n_obra_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_obra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5706);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5707);
show_backtrace(1);
}
{
parser_prod__ACrangeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_expr= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5710);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5711);
show_backtrace(1);
}
{
parser_prod__ACrangeExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_expr2= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5714);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TCbra> */
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
/* <var_new_child:nullable ANode> isa TCbra */
cltype38 = type_parser_nodes__TCbra.color;
idtype39 = type_parser_nodes__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5715);
show_backtrace(1);
}
{
parser_prod__ACrangeExpr__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_cbra= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACrangeExpr> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 5719);
show_backtrace(1);
}
{
parser_prod__ACrangeExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ACrangeExpr#n_annotations= on <self:ACrangeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ACrangeExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ACrangeExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ACrangeExpr#replace_child on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_obra= for (self: ACrangeExpr, TObra) */
void parser_prod__ACrangeExpr__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = var_node; /* _n_obra on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ACrangeExpr__n_obra_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_obra_61d(self, p0); /* Direct call parser_prod#ACrangeExpr#n_obra= on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr= for (self: ACrangeExpr, AExpr) */
void parser_prod__ACrangeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = var_node; /* _n_expr on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACrangeExpr__n_expr_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_expr_61d(self, p0); /* Direct call parser_prod#ACrangeExpr#n_expr= on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr2= for (self: ACrangeExpr, AExpr) */
void parser_prod__ACrangeExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__ACrangeExpr__n_expr2_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_expr2_61d(self, p0); /* Direct call parser_prod#ACrangeExpr#n_expr2= on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_cbra= for (self: ACrangeExpr, TCbra) */
void parser_prod__ACrangeExpr__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = var_node; /* _n_cbra on <self:ACrangeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ACrangeExpr__n_cbra_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_cbra_61d(self, p0); /* Direct call parser_prod#ACrangeExpr#n_cbra= on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ACrangeExpr#n_annotations= for (self: ACrangeExpr, nullable AAnnotations) */
void parser_prod__ACrangeExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACrangeExpr> */
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
/* method parser_prod#ACrangeExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ACrangeExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__ACrangeExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#ACrangeExpr#n_annotations= on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
