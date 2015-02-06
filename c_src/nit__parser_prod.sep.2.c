#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AEqMethid#init_aeqmethid for (self: AEqMethid, nullable TEq) */
void nit__parser_prod___AEqMethid___init_aeqmethid(val* self, val* p0) {
val* var_n_eq /* var n_eq: nullable TEq */;
var_n_eq = p0;
if (unlikely(var_n_eq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1498);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AEqMethid___n_eq].val = var_n_eq; /* _n_eq on <self:AEqMethid> */
if (var_n_eq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1499);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_eq,self) on <var_n_eq:nullable TEq> */
if (unlikely(var_n_eq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_eq->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_eq:nullable TEq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: AEqMethid, ANode, nullable ANode) */
void nit__parser_prod___AEqMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TEq */;
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
var = self->attrs[COLOR_nit__parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eq");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1504);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TEq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TEq> */
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
/* <var_new_child:nullable ANode> isa TEq */
cltype = type_nit__TEq.color;
idtype = type_nit__TEq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1505);
show_backtrace(1);
}
{
nit__parser_prod___AEqMethid___n_eq_61d(self, var_new_child); /* Direct call parser_prod#AEqMethid#n_eq= on <self:AEqMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: AEqMethid, TEq) */
void nit__parser_prod___AEqMethid___n_eq_61d(val* self, val* p0) {
val* var_node /* var node: TEq */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AEqMethid___n_eq].val = var_node; /* _n_eq on <self:AEqMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TEq> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TEq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: AEqMethid, Visitor) */
void nit__parser_prod___AEqMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TEq */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eq");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1519);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: ANeMethid, nullable TNe) */
void nit__parser_prod___ANeMethid___init_anemethid(val* self, val* p0) {
val* var_n_ne /* var n_ne: nullable TNe */;
var_n_ne = p0;
if (unlikely(var_n_ne == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1527);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANeMethid___n_ne].val = var_n_ne; /* _n_ne on <self:ANeMethid> */
if (var_n_ne == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1528);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ne,self) on <var_n_ne:nullable TNe> */
if (unlikely(var_n_ne == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_ne->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ne:nullable TNe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: ANeMethid, ANode, nullable ANode) */
void nit__parser_prod___ANeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNe */;
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
var = self->attrs[COLOR_nit__parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ne");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1533);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TNe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TNe> */
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
/* <var_new_child:nullable ANode> isa TNe */
cltype = type_nit__TNe.color;
idtype = type_nit__TNe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1534);
show_backtrace(1);
}
{
nit__parser_prod___ANeMethid___n_ne_61d(self, var_new_child); /* Direct call parser_prod#ANeMethid#n_ne= on <self:ANeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: ANeMethid, TNe) */
void nit__parser_prod___ANeMethid___n_ne_61d(val* self, val* p0) {
val* var_node /* var node: TNe */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANeMethid___n_ne].val = var_node; /* _n_ne on <self:ANeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TNe> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TNe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: ANeMethid, Visitor) */
void nit__parser_prod___ANeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNe */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ne");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1548);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: ALeMethid, nullable TLe) */
void nit__parser_prod___ALeMethid___init_alemethid(val* self, val* p0) {
val* var_n_le /* var n_le: nullable TLe */;
var_n_le = p0;
if (unlikely(var_n_le == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1556);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ALeMethid___n_le].val = var_n_le; /* _n_le on <self:ALeMethid> */
if (var_n_le == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1557);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_le,self) on <var_n_le:nullable TLe> */
if (unlikely(var_n_le == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_le->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_le:nullable TLe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: ALeMethid, ANode, nullable ANode) */
void nit__parser_prod___ALeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLe */;
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
var = self->attrs[COLOR_nit__parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_le");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1562);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLe> */
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
/* <var_new_child:nullable ANode> isa TLe */
cltype = type_nit__TLe.color;
idtype = type_nit__TLe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1563);
show_backtrace(1);
}
{
nit__parser_prod___ALeMethid___n_le_61d(self, var_new_child); /* Direct call parser_prod#ALeMethid#n_le= on <self:ALeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: ALeMethid, TLe) */
void nit__parser_prod___ALeMethid___n_le_61d(val* self, val* p0) {
val* var_node /* var node: TLe */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALeMethid___n_le].val = var_node; /* _n_le on <self:ALeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLe> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: ALeMethid, Visitor) */
void nit__parser_prod___ALeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLe */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_le");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1577);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: AGeMethid, nullable TGe) */
void nit__parser_prod___AGeMethid___init_agemethid(val* self, val* p0) {
val* var_n_ge /* var n_ge: nullable TGe */;
var_n_ge = p0;
if (unlikely(var_n_ge == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1585);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AGeMethid___n_ge].val = var_n_ge; /* _n_ge on <self:AGeMethid> */
if (var_n_ge == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1586);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ge,self) on <var_n_ge:nullable TGe> */
if (unlikely(var_n_ge == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_ge->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ge:nullable TGe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: AGeMethid, ANode, nullable ANode) */
void nit__parser_prod___AGeMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGe */;
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
var = self->attrs[COLOR_nit__parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ge");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1591);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGe> */
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
/* <var_new_child:nullable ANode> isa TGe */
cltype = type_nit__TGe.color;
idtype = type_nit__TGe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1592);
show_backtrace(1);
}
{
nit__parser_prod___AGeMethid___n_ge_61d(self, var_new_child); /* Direct call parser_prod#AGeMethid#n_ge= on <self:AGeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: AGeMethid, TGe) */
void nit__parser_prod___AGeMethid___n_ge_61d(val* self, val* p0) {
val* var_node /* var node: TGe */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AGeMethid___n_ge].val = var_node; /* _n_ge on <self:AGeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGe> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: AGeMethid, Visitor) */
void nit__parser_prod___AGeMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGe */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ge");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1606);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: ALtMethid, nullable TLt) */
void nit__parser_prod___ALtMethid___init_altmethid(val* self, val* p0) {
val* var_n_lt /* var n_lt: nullable TLt */;
var_n_lt = p0;
if (unlikely(var_n_lt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1614);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ALtMethid___n_lt].val = var_n_lt; /* _n_lt on <self:ALtMethid> */
if (var_n_lt == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1615);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_lt,self) on <var_n_lt:nullable TLt> */
if (unlikely(var_n_lt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_lt->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_lt:nullable TLt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: ALtMethid, ANode, nullable ANode) */
void nit__parser_prod___ALtMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLt */;
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
var = self->attrs[COLOR_nit__parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_lt");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1620);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLt> */
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
/* <var_new_child:nullable ANode> isa TLt */
cltype = type_nit__TLt.color;
idtype = type_nit__TLt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1621);
show_backtrace(1);
}
{
nit__parser_prod___ALtMethid___n_lt_61d(self, var_new_child); /* Direct call parser_prod#ALtMethid#n_lt= on <self:ALtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: ALtMethid, TLt) */
void nit__parser_prod___ALtMethid___n_lt_61d(val* self, val* p0) {
val* var_node /* var node: TLt */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALtMethid___n_lt].val = var_node; /* _n_lt on <self:ALtMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLt> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: ALtMethid, Visitor) */
void nit__parser_prod___ALtMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLt */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_lt");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1635);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: AGtMethid, nullable TGt) */
void nit__parser_prod___AGtMethid___init_agtmethid(val* self, val* p0) {
val* var_n_gt /* var n_gt: nullable TGt */;
var_n_gt = p0;
if (unlikely(var_n_gt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1643);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AGtMethid___n_gt].val = var_n_gt; /* _n_gt on <self:AGtMethid> */
if (var_n_gt == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1644);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_gt,self) on <var_n_gt:nullable TGt> */
if (unlikely(var_n_gt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_gt->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_gt:nullable TGt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: AGtMethid, ANode, nullable ANode) */
void nit__parser_prod___AGtMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGt */;
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
var = self->attrs[COLOR_nit__parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gt");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1649);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGt> */
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
/* <var_new_child:nullable ANode> isa TGt */
cltype = type_nit__TGt.color;
idtype = type_nit__TGt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1650);
show_backtrace(1);
}
{
nit__parser_prod___AGtMethid___n_gt_61d(self, var_new_child); /* Direct call parser_prod#AGtMethid#n_gt= on <self:AGtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: AGtMethid, TGt) */
void nit__parser_prod___AGtMethid___n_gt_61d(val* self, val* p0) {
val* var_node /* var node: TGt */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AGtMethid___n_gt].val = var_node; /* _n_gt on <self:AGtMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGt> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: AGtMethid, Visitor) */
void nit__parser_prod___AGtMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGt */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gt");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1664);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: ALlMethid, nullable TLl) */
void nit__parser_prod___ALlMethid___init_allmethid(val* self, val* p0) {
val* var_n_ll /* var n_ll: nullable TLl */;
var_n_ll = p0;
if (unlikely(var_n_ll == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1672);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ALlMethid___n_ll].val = var_n_ll; /* _n_ll on <self:ALlMethid> */
if (var_n_ll == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1673);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ll,self) on <var_n_ll:nullable TLl> */
if (unlikely(var_n_ll == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_ll->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ll:nullable TLl> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: ALlMethid, ANode, nullable ANode) */
void nit__parser_prod___ALlMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLl */;
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
var = self->attrs[COLOR_nit__parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ll");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1678);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLl> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLl> */
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
/* <var_new_child:nullable ANode> isa TLl */
cltype = type_nit__TLl.color;
idtype = type_nit__TLl.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLl", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1679);
show_backtrace(1);
}
{
nit__parser_prod___ALlMethid___n_ll_61d(self, var_new_child); /* Direct call parser_prod#ALlMethid#n_ll= on <self:ALlMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: ALlMethid, TLl) */
void nit__parser_prod___ALlMethid___n_ll_61d(val* self, val* p0) {
val* var_node /* var node: TLl */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALlMethid___n_ll].val = var_node; /* _n_ll on <self:ALlMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLl> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLl> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: ALlMethid, Visitor) */
void nit__parser_prod___ALlMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLl */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ll");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1693);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: AGgMethid, nullable TGg) */
void nit__parser_prod___AGgMethid___init_aggmethid(val* self, val* p0) {
val* var_n_gg /* var n_gg: nullable TGg */;
var_n_gg = p0;
if (unlikely(var_n_gg == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1701);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AGgMethid___n_gg].val = var_n_gg; /* _n_gg on <self:AGgMethid> */
if (var_n_gg == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1702);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_gg,self) on <var_n_gg:nullable TGg> */
if (unlikely(var_n_gg == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_gg->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_gg:nullable TGg> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: AGgMethid, ANode, nullable ANode) */
void nit__parser_prod___AGgMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGg */;
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
var = self->attrs[COLOR_nit__parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gg");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1707);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGg> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGg> */
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
/* <var_new_child:nullable ANode> isa TGg */
cltype = type_nit__TGg.color;
idtype = type_nit__TGg.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGg", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1708);
show_backtrace(1);
}
{
nit__parser_prod___AGgMethid___n_gg_61d(self, var_new_child); /* Direct call parser_prod#AGgMethid#n_gg= on <self:AGgMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: AGgMethid, TGg) */
void nit__parser_prod___AGgMethid___n_gg_61d(val* self, val* p0) {
val* var_node /* var node: TGg */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AGgMethid___n_gg].val = var_node; /* _n_gg on <self:AGgMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGg> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGg> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: AGgMethid, Visitor) */
void nit__parser_prod___AGgMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGg */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gg");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1722);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: ABraMethid, nullable TObra, nullable TCbra) */
void nit__parser_prod___ABraMethid___init_abramethid(val* self, val* p0, val* p1) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
var_n_obra = p0;
var_n_cbra = p1;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1731);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1732);
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
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1733);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1734);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: ABraMethid, ANode, nullable ANode) */
void nit__parser_prod___ABraMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TCbra */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1739);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1740);
show_backtrace(1);
}
{
nit__parser_prod___ABraMethid___n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraMethid#n_obra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1743);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TCbra> */
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
/* <var_new_child:nullable ANode> isa TCbra */
cltype14 = type_nit__TCbra.color;
idtype15 = type_nit__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1744);
show_backtrace(1);
}
{
nit__parser_prod___ABraMethid___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraMethid#n_cbra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void nit__parser_prod___ABraMethid___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val = var_node; /* _n_obra on <self:ABraMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void nit__parser_prod___ABraMethid___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: ABraMethid, Visitor) */
void nit__parser_prod___ABraMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1763);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1764);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: AStarshipMethid, nullable TStarship) */
void nit__parser_prod___AStarshipMethid___init_astarshipmethid(val* self, val* p0) {
val* var_n_starship /* var n_starship: nullable TStarship */;
var_n_starship = p0;
if (unlikely(var_n_starship == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1772);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStarshipMethid___n_starship].val = var_n_starship; /* _n_starship on <self:AStarshipMethid> */
if (var_n_starship == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1773);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_starship,self) on <var_n_starship:nullable TStarship> */
if (unlikely(var_n_starship == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_starship->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_starship:nullable TStarship> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: AStarshipMethid, ANode, nullable ANode) */
void nit__parser_prod___AStarshipMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStarship */;
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
var = self->attrs[COLOR_nit__parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starship");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1778);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStarship> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStarship> */
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
/* <var_new_child:nullable ANode> isa TStarship */
cltype = type_nit__TStarship.color;
idtype = type_nit__TStarship.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarship", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1779);
show_backtrace(1);
}
{
nit__parser_prod___AStarshipMethid___n_starship_61d(self, var_new_child); /* Direct call parser_prod#AStarshipMethid#n_starship= on <self:AStarshipMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: AStarshipMethid, TStarship) */
void nit__parser_prod___AStarshipMethid___n_starship_61d(val* self, val* p0) {
val* var_node /* var node: TStarship */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStarshipMethid___n_starship].val = var_node; /* _n_starship on <self:AStarshipMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStarship> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStarship> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: AStarshipMethid, Visitor) */
void nit__parser_prod___AStarshipMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStarship */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starship");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1793);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: AAssignMethid, nullable TId, nullable TAssign) */
void nit__parser_prod___AAssignMethid___init_aassignmethid(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_id = p0;
var_n_assign = p1;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1802);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val = var_n_id; /* _n_id on <self:AAssignMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1803);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1804);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:AAssignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1805);
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
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: AAssignMethid, ANode, nullable ANode) */
void nit__parser_prod___AAssignMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1810);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1811);
show_backtrace(1);
}
{
nit__parser_prod___AAssignMethid___n_id_61d(self, var_new_child); /* Direct call parser_prod#AAssignMethid#n_id= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1814);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1815);
show_backtrace(1);
}
{
nit__parser_prod___AAssignMethid___n_assign_61d(self, var_new_child); /* Direct call parser_prod#AAssignMethid#n_assign= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void nit__parser_prod___AAssignMethid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val = var_node; /* _n_id on <self:AAssignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void nit__parser_prod___AAssignMethid___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val = var_node; /* _n_assign on <self:AAssignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: AAssignMethid, Visitor) */
void nit__parser_prod___AAssignMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1834);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1835);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: ABraassignMethid, nullable TObra, nullable TCbra, nullable TAssign) */
void nit__parser_prod___ABraassignMethid___init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_obra = p0;
var_n_cbra = p1;
var_n_assign = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1845);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraassignMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1846);
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
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1847);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraassignMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1848);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1849);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:ABraassignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1850);
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
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: ABraassignMethid, ANode, nullable ANode) */
void nit__parser_prod___ABraassignMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : TCbra */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1855);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1856);
show_backtrace(1);
}
{
nit__parser_prod___ABraassignMethid___n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_obra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1859);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TCbra> */
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
/* <var_new_child:nullable ANode> isa TCbra */
cltype14 = type_nit__TCbra.color;
idtype15 = type_nit__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1860);
show_backtrace(1);
}
{
nit__parser_prod___ABraassignMethid___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_cbra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1863);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1864);
show_backtrace(1);
}
{
nit__parser_prod___ABraassignMethid___n_assign_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_assign= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void nit__parser_prod___ABraassignMethid___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val = var_node; /* _n_obra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void nit__parser_prod___ABraassignMethid___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void nit__parser_prod___ABraassignMethid___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val = var_node; /* _n_assign on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: ABraassignMethid, Visitor) */
void nit__parser_prod___ABraassignMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
val* var2 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1888);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1889);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1890);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: ASignature, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void nit__parser_prod___ASignature___init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_params /* var n_params: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : ANodes[AParam] */;
val* var9 /* : ANodes[AParam] */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_n_opar = p0;
var_n_params = p1;
var_n_cpar = p2;
var_n_type = p3;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val = var_n_opar; /* _n_opar on <self:ASignature> */
var = NULL;
if (var_n_opar == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,var) on <var_n_opar:nullable TOpar> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var9 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var7, var_n_params); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var7:ANodes[AParam]>*/
}
self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val = var_n_cpar; /* _n_cpar on <self:ASignature> */
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
self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val = var_n_type; /* _n_type on <self:ASignature> */
var17 = NULL;
if (var_n_type == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var17) on <var_n_type:nullable AType> */
var_other = var17;
{
var21 = ((short int (*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL23:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: ASignature, ANode, nullable ANode) */
void nit__parser_prod___ASignature___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
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
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1913);
show_backtrace(1);
}
{
nit__parser_prod___ASignature___n_opar_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_opar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var10 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
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
var12 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
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
cltype20 = type_nullable__nit__TCpar.color;
idtype21 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1918);
show_backtrace(1);
}
{
nit__parser_prod___ASignature___n_cpar_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_cpar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
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
cltype31 = type_nullable__nit__AType.color;
idtype32 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1922);
show_backtrace(1);
}
{
nit__parser_prod___ASignature___n_type_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_type= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void nit__parser_prod___ASignature___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val = var_node; /* _n_opar on <self:ASignature> */
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
/* method parser_prod#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void nit__parser_prod___ASignature___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val = var_node; /* _n_cpar on <self:ASignature> */
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
/* method parser_prod#ASignature#n_type= for (self: ASignature, nullable AType) */
void nit__parser_prod___ASignature___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val = var_node; /* _n_type on <self:ASignature> */
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
/* method parser_prod#ASignature#visit_all for (self: ASignature, Visitor) */
void nit__parser_prod___ASignature___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TOpar */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
val* var4 /* : nullable TCpar */;
val* var5 /* : nullable AType */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AParam]>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: AParam, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void nit__parser_prod___AParam___init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
var_n_id = p0;
var_n_type = p1;
var_n_dotdotdot = p2;
var_n_annotations = p3;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1960);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val = var_n_id; /* _n_id on <self:AParam> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1961);
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
self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val = var_n_type; /* _n_type on <self:AParam> */
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
var5 = ((short int (*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AParam> */
var8 = NULL;
if (var_n_dotdotdot == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_dotdotdot,var8) on <var_n_dotdotdot:nullable TDotdotdot> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var_n_dotdotdot->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_dotdotdot, var_other) /* == on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
var_n_dotdotdot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL14:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParam> */
var15 = NULL;
if (var_n_annotations == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var15) on <var_n_annotations:nullable AAnnotations> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL21:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: AParam, ANode, nullable ANode) */
void nit__parser_prod___AParam___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : nullable AType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : nullable TDotdotdot */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
val* var29 /* : nullable AAnnotations */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1972);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1973);
show_backtrace(1);
}
{
nit__parser_prod___AParam___n_id_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_id= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable AType(AType)> */
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
/* <var_new_child:nullable ANode> isa nullable AType */
cltype15 = type_nullable__nit__AType.color;
idtype16 = type_nullable__nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1977);
show_backtrace(1);
}
{
nit__parser_prod___AParam___n_type_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_type= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:nullable TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:nullable TDotdotdot(TDotdotdot)> */
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
/* <var_new_child:nullable ANode> isa nullable TDotdotdot */
cltype26 = type_nullable__nit__TDotdotdot.color;
idtype27 = type_nullable__nit__TDotdotdot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDotdotdot", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1981);
show_backtrace(1);
}
{
nit__parser_prod___AParam___n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_dotdotdot= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var29 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var29 == NULL) {
var30 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var29,var_old_child) on <var29:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var29,var_other) on <var29:nullable AAnnotations(AAnnotations)> */
var35 = var29 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype37 = type_nullable__nit__AAnnotations.color;
idtype38 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1985);
show_backtrace(1);
}
{
nit__parser_prod___AParam___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_annotations= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: AParam, TId) */
void nit__parser_prod___AParam___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val = var_node; /* _n_id on <self:AParam> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: AParam, nullable AType) */
void nit__parser_prod___AParam___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val = var_node; /* _n_type on <self:AParam> */
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
/* method parser_prod#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void nit__parser_prod___AParam___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDotdotdot */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AParam> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TDotdotdot(TDotdotdot)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDotdotdot(TDotdotdot)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: AParam, nullable AAnnotations) */
void nit__parser_prod___AParam___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParam> */
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
/* method parser_prod#AParam#visit_all for (self: AParam, Visitor) */
void nit__parser_prod___AParam___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable TDotdotdot */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2014);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: AType, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void nit__parser_prod___AType___init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var8 /* : ANodes[AType] */;
val* var10 /* : ANodes[AType] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_n_kwnullable = p0;
var_n_id = p1;
var_n_types = p2;
var_n_annotations = p3;
self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AType> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_kwnullable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnullable, var_other) /* == on <var_n_kwnullable:nullable TKwnullable(TKwnullable)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
var_n_kwnullable->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2030);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = var_n_id; /* _n_id on <self:AType> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2031);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var10 = self->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var8, var_n_types); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var8:ANodes[AType]>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AType> */
var11 = NULL;
if (var_n_annotations == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var11) on <var_n_annotations:nullable AAnnotations> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
/* method parser_prod#AType#replace_child for (self: AType, ANode, nullable ANode) */
void nit__parser_prod___AType___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : ANodes[AType] */;
val* var20 /* : ANodes[AType] */;
short int var21 /* : Bool */;
val* var22 /* : nullable AAnnotations */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
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
cltype = type_nullable__nit__TKwnullable.color;
idtype = type_nullable__nit__TKwnullable.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2040);
show_backtrace(1);
}
{
nit__parser_prod___AType___n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod#AType#n_kwnullable= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2043);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TClassid> */
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
/* <var_new_child:nullable ANode> isa TClassid */
cltype15 = type_nit__TClassid.color;
idtype16 = type_nit__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2044);
show_backtrace(1);
}
{
nit__parser_prod___AType___n_id_61d(self, var_new_child); /* Direct call parser_prod#AType#n_id= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var20 = self->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__ANodes___replace_child(var18, var_old_child, var_new_child);
}
if (var21){
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var22 == NULL) {
var23 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var22,var_old_child) on <var22:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var22,var_other) on <var22:nullable AAnnotations(AAnnotations)> */
var28 = var22 == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype30 = type_nullable__nit__AAnnotations.color;
idtype31 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_new_child->type->table_size) {
var29 = 0;
} else {
var29 = var_new_child->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
var_class_name32 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2049);
show_backtrace(1);
}
{
nit__parser_prod___AType___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AType#n_annotations= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void nit__parser_prod___AType___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnullable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AType> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwnullable(TKwnullable)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwnullable(TKwnullable)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnullable(TKwnullable)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: AType, TClassid) */
void nit__parser_prod___AType___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AType___n_id].val = var_node; /* _n_id on <self:AType> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: AType, nullable AAnnotations) */
void nit__parser_prod___AType___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AType> */
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
/* method parser_prod#AType#visit_all for (self: AType, Visitor) */
void nit__parser_prod___AType___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwnullable */;
val* var1 /* : TClassid */;
val* var2 /* : ANodes[AType] */;
val* var4 /* : ANodes[AType] */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2074);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var4 = self->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var2, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var2:ANodes[AType]>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: ALabel, nullable TKwlabel, nullable TId) */
void nit__parser_prod___ALabel___init_alabel(val* self, val* p0, val* p1) {
val* var_n_kwlabel /* var n_kwlabel: nullable TKwlabel */;
val* var_n_id /* var n_id: nullable TId */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwlabel = p0;
var_n_id = p1;
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2085);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val = var_n_kwlabel; /* _n_kwlabel on <self:ALabel> */
if (var_n_kwlabel == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2086);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwlabel,self) on <var_n_kwlabel:nullable TKwlabel> */
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwlabel->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwlabel:nullable TKwlabel> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val = var_n_id; /* _n_id on <self:ALabel> */
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
var5 = ((short int (*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: ALabel, ANode, nullable ANode) */
void nit__parser_prod___ALabel___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwlabel */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2093);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwlabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwlabel> */
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
/* <var_new_child:nullable ANode> isa TKwlabel */
cltype = type_nit__TKwlabel.color;
idtype = type_nit__TKwlabel.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwlabel", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2094);
show_backtrace(1);
}
{
nit__parser_prod___ALabel___n_kwlabel_61d(self, var_new_child); /* Direct call parser_prod#ALabel#n_kwlabel= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
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
cltype15 = type_nullable__nit__TId.color;
idtype16 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2098);
show_backtrace(1);
}
{
nit__parser_prod___ALabel___n_id_61d(self, var_new_child); /* Direct call parser_prod#ALabel#n_id= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void nit__parser_prod___ALabel___n_kwlabel_61d(val* self, val* p0) {
val* var_node /* var node: TKwlabel */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val = var_node; /* _n_kwlabel on <self:ALabel> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwlabel> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwlabel> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: ALabel, nullable TId) */
void nit__parser_prod___ALabel___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val = var_node; /* _n_id on <self:ALabel> */
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
/* method parser_prod#ALabel#visit_all for (self: ALabel, Visitor) */
void nit__parser_prod___ALabel___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwlabel */;
val* var1 /* : nullable TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2117);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: ABlockExpr, Collection[Object], nullable TKwend) */
void nit__parser_prod___ABlockExpr___init_ablockexpr(val* self, val* p0, val* p1) {
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
var_n_expr = p0;
var_n_kwend = p1;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_expr); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ABlockExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwend, var_other) /* == on <var_n_kwend:nullable TKwend(TKwend)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: ABlockExpr, ANode, nullable ANode) */
void nit__parser_prod___ABlockExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
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
var4 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
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
cltype = type_nullable__nit__TKwend.color;
idtype = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2136);
show_backtrace(1);
}
{
nit__parser_prod___ABlockExpr___n_kwend_61d(self, var_new_child); /* Direct call parser_prod#ABlockExpr#n_kwend= on <self:ABlockExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void nit__parser_prod___ABlockExpr___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val = var_node; /* _n_kwend on <self:ABlockExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwend(TKwend)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwend(TKwend)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwend(TKwend)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: ABlockExpr, Visitor) */
void nit__parser_prod___ABlockExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable TKwend */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: AVardeclExpr, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void nit__parser_prod___AVardeclExpr___init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
var_n_kwvar = p0;
var_n_id = p1;
var_n_type = p2;
var_n_assign = p3;
var_n_expr = p4;
var_n_annotations = p5;
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2164);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AVardeclExpr> */
if (var_n_kwvar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2165);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar> */
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwvar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2166);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val = var_n_id; /* _n_id on <self:AVardeclExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2167);
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
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val = var_n_type; /* _n_type on <self:AVardeclExpr> */
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
var6 = ((short int (*)(val* self, val* p0))(var_n_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVardeclExpr> */
var9 = NULL;
if (var_n_assign == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_assign,var9) on <var_n_assign:nullable TAssign> */
var_other = var9;
{
var13 = ((short int (*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_assign, var_other) /* == on <var_n_assign:nullable TAssign(TAssign)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign(TAssign)> */
var_n_assign->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign(TAssign)> */
RET_LABEL15:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVardeclExpr> */
var16 = NULL;
if (var_n_expr == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var16) on <var_n_expr:nullable AExpr> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL22:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AVardeclExpr> */
var23 = NULL;
if (var_n_annotations == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var23) on <var_n_annotations:nullable AAnnotations> */
var_other = var23;
{
var27 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL29:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: AVardeclExpr, ANode, nullable ANode) */
void nit__parser_prod___AVardeclExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwvar */;
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
val* var17 /* : nullable AType */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : nullable TAssign */;
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
val* var50 /* : nullable AAnnotations */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2180);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwvar> */
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
/* <var_new_child:nullable ANode> isa TKwvar */
cltype = type_nit__TKwvar.color;
idtype = type_nit__TKwvar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwvar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2181);
show_backtrace(1);
}
{
nit__parser_prod___AVardeclExpr___n_kwvar_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_kwvar= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2184);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2185);
show_backtrace(1);
}
{
nit__parser_prod___AVardeclExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_id= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable AType(AType)> */
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
/* <var_new_child:nullable ANode> isa nullable AType */
cltype25 = type_nullable__nit__AType.color;
idtype26 = type_nullable__nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2189);
show_backtrace(1);
}
{
nit__parser_prod___AVardeclExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_type= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:nullable TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:nullable TAssign(TAssign)> */
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
/* <var_new_child:nullable ANode> isa nullable TAssign */
cltype36 = type_nullable__nit__TAssign.color;
idtype37 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAssign", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2193);
show_backtrace(1);
}
{
nit__parser_prod___AVardeclExpr___n_assign_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_assign= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var39 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
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
cltype47 = type_nullable__nit__AExpr.color;
idtype48 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2197);
show_backtrace(1);
}
{
nit__parser_prod___AVardeclExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_expr= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var50 == NULL) {
var51 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var50,var_old_child) on <var50:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var50,var_other) on <var50:nullable AAnnotations(AAnnotations)> */
var56 = var50 == var_other;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype58 = type_nullable__nit__AAnnotations.color;
idtype59 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var57 = 1;
} else {
if(cltype58 >= var_new_child->type->table_size) {
var57 = 0;
} else {
var57 = var_new_child->type->type_table[cltype58] == idtype59;
}
}
if (unlikely(!var57)) {
var_class_name60 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2201);
show_backtrace(1);
}
{
nit__parser_prod___AVardeclExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_annotations= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, TKwvar) */
void nit__parser_prod___AVardeclExpr___n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val = var_node; /* _n_kwvar on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwvar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwvar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void nit__parser_prod___AVardeclExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val = var_node; /* _n_id on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void nit__parser_prod___AVardeclExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val = var_node; /* _n_type on <self:AVardeclExpr> */
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
/* method parser_prod#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void nit__parser_prod___AVardeclExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val = var_node; /* _n_assign on <self:AVardeclExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TAssign(TAssign)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TAssign(TAssign)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TAssign(TAssign)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void nit__parser_prod___AVardeclExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val = var_node; /* _n_expr on <self:AVardeclExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: AVardeclExpr, nullable AAnnotations) */
void nit__parser_prod___AVardeclExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AVardeclExpr> */
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
/* method parser_prod#AVardeclExpr#visit_all for (self: AVardeclExpr, Visitor) */
void nit__parser_prod___AVardeclExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwvar */;
val* var1 /* : TId */;
val* var2 /* : nullable AType */;
val* var3 /* : nullable TAssign */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2240);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2241);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: AReturnExpr, nullable TKwreturn, nullable AExpr) */
void nit__parser_prod___AReturnExpr___init_areturnexpr(val* self, val* p0, val* p1) {
val* var_n_kwreturn /* var n_kwreturn: nullable TKwreturn */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var_n_kwreturn = p0;
var_n_expr = p1;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val = var_n_kwreturn; /* _n_kwreturn on <self:AReturnExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_kwreturn->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwreturn, var_other) /* == on <var_n_kwreturn:nullable TKwreturn(TKwreturn)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwreturn,self) on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
var_n_kwreturn->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AReturnExpr> */
var7 = NULL;
if (var_n_expr == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var7) on <var_n_expr:nullable AExpr> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: AReturnExpr, ANode, nullable ANode) */
void nit__parser_prod___AReturnExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
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
cltype = type_nullable__nit__TKwreturn.color;
idtype = type_nullable__nit__TKwreturn.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2263);
show_backtrace(1);
}
{
nit__parser_prod___AReturnExpr___n_kwreturn_61d(self, var_new_child); /* Direct call parser_prod#AReturnExpr#n_kwreturn= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
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
cltype16 = type_nullable__nit__AExpr.color;
idtype17 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2267);
show_backtrace(1);
}
{
nit__parser_prod___AReturnExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AReturnExpr#n_expr= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void nit__parser_prod___AReturnExpr___n_kwreturn_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwreturn */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val = var_node; /* _n_kwreturn on <self:AReturnExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwreturn(TKwreturn)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwreturn(TKwreturn)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwreturn(TKwreturn)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void nit__parser_prod___AReturnExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val = var_node; /* _n_expr on <self:AReturnExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: AReturnExpr, Visitor) */
void nit__parser_prod___AReturnExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: ABreakExpr, nullable TKwbreak, nullable ALabel) */
void nit__parser_prod___ABreakExpr___init_abreakexpr(val* self, val* p0, val* p1) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwbreak = p0;
var_n_label = p1;
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2296);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakExpr> */
if (var_n_kwbreak == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2297);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwbreak,self) on <var_n_kwbreak:nullable TKwbreak> */
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwbreak->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwbreak:nullable TKwbreak> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ABreakExpr> */
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
var5 = ((short int (*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: ABreakExpr, ANode, nullable ANode) */
void nit__parser_prod___ABreakExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwbreak */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable ALabel */;
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
var = self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2304);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwbreak> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwbreak> */
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
/* <var_new_child:nullable ANode> isa TKwbreak */
cltype = type_nit__TKwbreak.color;
idtype = type_nit__TKwbreak.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwbreak", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2305);
show_backtrace(1);
}
{
nit__parser_prod___ABreakExpr___n_kwbreak_61d(self, var_new_child); /* Direct call parser_prod#ABreakExpr#n_kwbreak= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable ALabel(ALabel)> */
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
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype15 = type_nullable__nit__ALabel.color;
idtype16 = type_nullable__nit__ALabel.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2309);
show_backtrace(1);
}
{
nit__parser_prod___ABreakExpr___nit__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#ABreakExpr#n_label= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void nit__parser_prod___ABreakExpr___n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwbreak> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwbreak> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: ABreakExpr, nullable ALabel) */
void nit__parser_prod___ABreakExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ABreakExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: ABreakExpr, Visitor) */
void nit__parser_prod___ABreakExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2328);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: AAbortExpr, nullable TKwabort) */
void nit__parser_prod___AAbortExpr___init_aabortexpr(val* self, val* p0) {
val* var_n_kwabort /* var n_kwabort: nullable TKwabort */;
var_n_kwabort = p0;
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2337);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val = var_n_kwabort; /* _n_kwabort on <self:AAbortExpr> */
if (var_n_kwabort == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2338);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwabort,self) on <var_n_kwabort:nullable TKwabort> */
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwabort->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabort:nullable TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: AAbortExpr, ANode, nullable ANode) */
void nit__parser_prod___AAbortExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabort */;
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
var = self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2343);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwabort> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwabort> */
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
/* <var_new_child:nullable ANode> isa TKwabort */
cltype = type_nit__TKwabort.color;
idtype = type_nit__TKwabort.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabort", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2344);
show_backtrace(1);
}
{
nit__parser_prod___AAbortExpr___n_kwabort_61d(self, var_new_child); /* Direct call parser_prod#AAbortExpr#n_kwabort= on <self:AAbortExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void nit__parser_prod___AAbortExpr___n_kwabort_61d(val* self, val* p0) {
val* var_node /* var node: TKwabort */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val = var_node; /* _n_kwabort on <self:AAbortExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwabort> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: AAbortExpr, Visitor) */
void nit__parser_prod___AAbortExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabort */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2358);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: AContinueExpr, nullable TKwcontinue, nullable ALabel) */
void nit__parser_prod___AContinueExpr___init_acontinueexpr(val* self, val* p0, val* p1) {
val* var_n_kwcontinue /* var n_kwcontinue: nullable TKwcontinue */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var_n_kwcontinue = p0;
var_n_label = p1;
self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val = var_n_kwcontinue; /* _n_kwcontinue on <self:AContinueExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_kwcontinue->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwcontinue, var_other) /* == on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwcontinue,self) on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
var_n_kwcontinue->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AContinueExpr> */
var7 = NULL;
if (var_n_label == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var7) on <var_n_label:nullable ALabel> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
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
var_n_label->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: AContinueExpr, ANode, nullable ANode) */
void nit__parser_prod___AContinueExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
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
cltype = type_nullable__nit__TKwcontinue.color;
idtype = type_nullable__nit__TKwcontinue.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2376);
show_backtrace(1);
}
{
nit__parser_prod___AContinueExpr___n_kwcontinue_61d(self, var_new_child); /* Direct call parser_prod#AContinueExpr#n_kwcontinue= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
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
cltype16 = type_nullable__nit__ALabel.color;
idtype17 = type_nullable__nit__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2380);
show_backtrace(1);
}
{
nit__parser_prod___AContinueExpr___nit__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#AContinueExpr#n_label= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void nit__parser_prod___AContinueExpr___n_kwcontinue_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcontinue */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val = var_node; /* _n_kwcontinue on <self:AContinueExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwcontinue(TKwcontinue)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwcontinue(TKwcontinue)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: AContinueExpr, nullable ALabel) */
void nit__parser_prod___AContinueExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AContinueExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: AContinueExpr, Visitor) */
void nit__parser_prod___AContinueExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: ADoExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___ADoExpr___init_adoexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
var_n_kwdo = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2410);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:ADoExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2411);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val = var_n_block; /* _n_block on <self:ADoExpr> */
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
var5 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ADoExpr> */
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
var12 = ((short int (*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL14:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: ADoExpr, ANode, nullable ANode) */
void nit__parser_prod___ADoExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdo */;
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
var = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2420);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwdo> */
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
/* <var_new_child:nullable ANode> isa TKwdo */
cltype = type_nit__TKwdo.color;
idtype = type_nit__TKwdo.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2421);
show_backtrace(1);
}
{
nit__parser_prod___ADoExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_kwdo= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
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
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2425);
show_backtrace(1);
}
{
nit__parser_prod___ADoExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_block= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
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
cltype26 = type_nullable__nit__ALabel.color;
idtype27 = type_nullable__nit__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2429);
show_backtrace(1);
}
{
nit__parser_prod___ADoExpr___nit__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_label= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void nit__parser_prod___ADoExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:ADoExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void nit__parser_prod___ADoExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val = var_node; /* _n_block on <self:ADoExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: ADoExpr, nullable ALabel) */
void nit__parser_prod___ADoExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ADoExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: ADoExpr, Visitor) */
void nit__parser_prod___ADoExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdo */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2453);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: AIfExpr, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AIfExpr___init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_n_kwif = p0;
var_n_expr = p1;
var_n_then = p2;
var_n_else = p3;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2466);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2467);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwif->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2468);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2469);
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
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var_n_then; /* _n_then on <self:AIfExpr> */
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
var6 = ((short int (*)(val* self, val* p0))(var_n_then->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_then, var_other) /* == on <var_n_then:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr(AExpr)> */
var_n_then->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr(AExpr)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var_n_else; /* _n_else on <self:AIfExpr> */
var9 = NULL;
if (var_n_else == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_else,var9) on <var_n_else:nullable AExpr> */
var_other = var9;
{
var13 = ((short int (*)(val* self, val* p0))(var_n_else->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_else, var_other) /* == on <var_n_else:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: AIfExpr, ANode, nullable ANode) */
void nit__parser_prod___AIfExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var17 /* : nullable AExpr */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
val* var28 /* : nullable AExpr */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2478);
show_backtrace(1);
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
cltype = type_nit__TKwif.color;
idtype = type_nit__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2479);
show_backtrace(1);
}
{
nit__parser_prod___AIfExpr___n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_kwif= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2482);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2483);
show_backtrace(1);
}
{
nit__parser_prod___AIfExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_expr= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype25 = type_nullable__nit__AExpr.color;
idtype26 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2487);
show_backtrace(1);
}
{
nit__parser_prod___AIfExpr___n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_then= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype36 = type_nullable__nit__AExpr.color;
idtype37 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2491);
show_backtrace(1);
}
{
nit__parser_prod___AIfExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_else= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void nit__parser_prod___AIfExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void nit__parser_prod___AIfExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val = var_node; /* _n_expr on <self:AIfExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void nit__parser_prod___AIfExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var_node; /* _n_then on <self:AIfExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void nit__parser_prod___AIfExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var_node; /* _n_else on <self:AIfExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: AIfExpr, Visitor) */
void nit__parser_prod___AIfExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2520);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2521);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: AIfexprExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void nit__parser_prod___AIfexprExpr___init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2536);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfexprExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2537);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwif->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2538);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfexprExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2539);
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
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2540);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfexprExpr> */
if (var_n_kwthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2541);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwthen,self) on <var_n_kwthen:nullable TKwthen> */
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwthen->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwthen:nullable TKwthen> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2542);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val = var_n_then; /* _n_then on <self:AIfexprExpr> */
if (var_n_then == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2543);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr> */
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_then->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2544);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfexprExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2545);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwelse->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2546);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val = var_n_else; /* _n_else on <self:AIfexprExpr> */
if (var_n_else == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2547);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr> */
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_else->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
void nit__parser_prod___AIfexprExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2552);
show_backtrace(1);
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
cltype = type_nit__TKwif.color;
idtype = type_nit__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2553);
show_backtrace(1);
}
{
nit__parser_prod___AIfexprExpr___n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwif= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2556);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2557);
show_backtrace(1);
}
{
nit__parser_prod___AIfexprExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_expr= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2560);
show_backtrace(1);
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
cltype24 = type_nit__TKwthen.color;
idtype25 = type_nit__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2561);
show_backtrace(1);
}
{
nit__parser_prod___AIfexprExpr___n_kwthen_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwthen= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2564);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2565);
show_backtrace(1);
}
{
nit__parser_prod___AIfexprExpr___n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_then= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2568);
show_backtrace(1);
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
cltype44 = type_nit__TKwelse.color;
idtype45 = type_nit__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2569);
show_backtrace(1);
}
{
nit__parser_prod___AIfexprExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwelse= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2572);
show_backtrace(1);
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
cltype54 = type_nit__AExpr.color;
idtype55 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2573);
show_backtrace(1);
}
{
nit__parser_prod___AIfexprExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_else= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void nit__parser_prod___AIfexprExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void nit__parser_prod___AIfexprExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void nit__parser_prod___AIfexprExpr___n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwthen> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwthen> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void nit__parser_prod___AIfexprExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void nit__parser_prod___AIfexprExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void nit__parser_prod___AIfexprExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: AIfexprExpr, Visitor) */
void nit__parser_prod___AIfexprExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : TKwthen */;
val* var3 /* : AExpr */;
val* var4 /* : TKwelse */;
val* var5 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2612);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2613);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2614);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2615);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2616);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2617);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: AWhileExpr, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___AWhileExpr___init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2629);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2630);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwwhile,self) on <var_n_kwwhile:nullable TKwwhile> */
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwwhile->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwhile:nullable TKwwhile> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2631);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2632);
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
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2633);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2634);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val = var_n_block; /* _n_block on <self:AWhileExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWhileExpr> */
var10 = NULL;
if (var_n_label == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var10) on <var_n_label:nullable ALabel> */
var_other = var10;
{
var14 = ((short int (*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: AWhileExpr, ANode, nullable ANode) */
void nit__parser_prod___AWhileExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2643);
show_backtrace(1);
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
cltype = type_nit__TKwwhile.color;
idtype = type_nit__TKwwhile.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2644);
show_backtrace(1);
}
{
nit__parser_prod___AWhileExpr___n_kwwhile_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwwhile= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2647);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2648);
show_backtrace(1);
}
{
nit__parser_prod___AWhileExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_expr= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2651);
show_backtrace(1);
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
cltype24 = type_nit__TKwdo.color;
idtype25 = type_nit__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2652);
show_backtrace(1);
}
{
nit__parser_prod___AWhileExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwdo= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
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
cltype35 = type_nullable__nit__AExpr.color;
idtype36 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2656);
show_backtrace(1);
}
{
nit__parser_prod___AWhileExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_block= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
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
cltype46 = type_nullable__nit__ALabel.color;
idtype47 = type_nullable__nit__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2660);
show_backtrace(1);
}
{
nit__parser_prod___AWhileExpr___nit__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_label= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void nit__parser_prod___AWhileExpr___n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwwhile> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwhile> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void nit__parser_prod___AWhileExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void nit__parser_prod___AWhileExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void nit__parser_prod___AWhileExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val = var_node; /* _n_block on <self:AWhileExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: AWhileExpr, nullable ALabel) */
void nit__parser_prod___AWhileExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWhileExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: AWhileExpr, Visitor) */
void nit__parser_prod___AWhileExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwhile */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2694);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2695);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2696);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
void nit__parser_prod___ALoopExpr___init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwloop /* var n_kwloop: nullable TKwloop */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2708);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2709);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwloop,self) on <var_n_kwloop:nullable TKwloop> */
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwloop->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwloop:nullable TKwloop> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val = var_n_block; /* _n_block on <self:ALoopExpr> */
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
var5 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ALoopExpr> */
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
var12 = ((short int (*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL14:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: ALoopExpr, ANode, nullable ANode) */
void nit__parser_prod___ALoopExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2718);
show_backtrace(1);
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
cltype = type_nit__TKwloop.color;
idtype = type_nit__TKwloop.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2719);
show_backtrace(1);
}
{
nit__parser_prod___ALoopExpr___n_kwloop_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_kwloop= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
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
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2723);
show_backtrace(1);
}
{
nit__parser_prod___ALoopExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_block= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
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
cltype26 = type_nullable__nit__ALabel.color;
idtype27 = type_nullable__nit__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2727);
show_backtrace(1);
}
{
nit__parser_prod___ALoopExpr___nit__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_label= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void nit__parser_prod___ALoopExpr___n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwloop> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwloop> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void nit__parser_prod___ALoopExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val = var_node; /* _n_block on <self:ALoopExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: ALoopExpr, nullable ALabel) */
void nit__parser_prod___ALoopExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ALoopExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: ALoopExpr, Visitor) */
void nit__parser_prod___ALoopExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2751);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#init_aforexpr for (self: AForExpr, nullable TKwfor, Collection[Object], nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void nit__parser_prod___AForExpr___init_aforexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
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
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_n_kwfor = p0;
var_n_ids = p1;
var_n_expr = p2;
var_n_kwdo = p3;
var_n_block = p4;
var_n_label = p5;
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2766);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val = var_n_kwfor; /* _n_kwfor on <self:AForExpr> */
if (var_n_kwfor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2767);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfor,self) on <var_n_kwfor:nullable TKwfor> */
if (unlikely(var_n_kwfor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwfor->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfor:nullable TKwfor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1735);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_ids); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[TId]>*/
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2769);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AForExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2770);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2771);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AForExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2772);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val = var_n_block; /* _n_block on <self:AForExpr> */
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
var10 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL12:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AForExpr> */
var13 = NULL;
if (var_n_label == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var13) on <var_n_label:nullable ALabel> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_n_label->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL19:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#replace_child for (self: AForExpr, ANode, nullable ANode) */
void nit__parser_prod___AForExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : ANodes[TId] */;
val* var9 /* : ANodes[TId] */;
short int var10 /* : Bool */;
val* var11 /* : AExpr */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
val* var21 /* : TKwdo */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
val* var31 /* : nullable AExpr */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
val* var42 /* : nullable ALabel */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2781);
show_backtrace(1);
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
cltype = type_nit__TKwfor.color;
idtype = type_nit__TKwfor.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2782);
show_backtrace(1);
}
{
nit__parser_prod___AForExpr___n_kwfor_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_kwfor= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var9 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1735);
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
var11 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2786);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var11,var_old_child) on <var11:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:AExpr> */
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
cltype18 = type_nit__AExpr.color;
idtype19 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2787);
show_backtrace(1);
}
{
nit__parser_prod___AForExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_expr= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2790);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var21,var_old_child) on <var21:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var21,var_other) on <var21:TKwdo> */
var26 = var21 == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype28 = type_nit__TKwdo.color;
idtype29 = type_nit__TKwdo.id;
if(var_new_child == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_new_child->type->table_size) {
var27 = 0;
} else {
var27 = var_new_child->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
var_class_name30 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2791);
show_backtrace(1);
}
{
nit__parser_prod___AForExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_kwdo= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var31 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var31 == NULL) {
var32 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var31,var_old_child) on <var31:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var31,var_other) on <var31:nullable AExpr(AExpr)> */
var37 = var31 == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype39 = type_nullable__nit__AExpr.color;
idtype40 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_new_child->type->table_size) {
var38 = 0;
} else {
var38 = var_new_child->type->type_table[cltype39] == idtype40;
}
}
if (unlikely(!var38)) {
var_class_name41 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2795);
show_backtrace(1);
}
{
nit__parser_prod___AForExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_block= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var42 == NULL) {
var43 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var42,var_old_child) on <var42:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var42,var_other) on <var42:nullable ALabel(ALabel)> */
var48 = var42 == var_other;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype50 = type_nullable__nit__ALabel.color;
idtype51 = type_nullable__nit__ALabel.id;
if(var_new_child == NULL) {
var49 = 1;
} else {
if(cltype50 >= var_new_child->type->table_size) {
var49 = 0;
} else {
var49 = var_new_child->type->type_table[cltype50] == idtype51;
}
}
if (unlikely(!var49)) {
var_class_name52 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2799);
show_backtrace(1);
}
{
nit__parser_prod___AForExpr___nit__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod#AForExpr#n_label= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwfor= for (self: AForExpr, TKwfor) */
void nit__parser_prod___AForExpr___n_kwfor_61d(val* self, val* p0) {
val* var_node /* var node: TKwfor */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val = var_node; /* _n_kwfor on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwfor> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_expr= for (self: AForExpr, AExpr) */
void nit__parser_prod___AForExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val = var_node; /* _n_expr on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_kwdo= for (self: AForExpr, TKwdo) */
void nit__parser_prod___AForExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AForExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_block= for (self: AForExpr, nullable AExpr) */
void nit__parser_prod___AForExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val = var_node; /* _n_block on <self:AForExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#n_label= for (self: AForExpr, nullable ALabel) */
void nit__parser_prod___AForExpr___nit__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AForExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForExpr#visit_all for (self: AForExpr, Visitor) */
void nit__parser_prod___AForExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfor */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : AExpr */;
val* var5 /* : TKwdo */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2833);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1735);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[TId]>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2835);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2836);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#init_aassertexpr for (self: AAssertExpr, nullable TKwassert, nullable TId, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AAssertExpr___init_aassertexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_n_kwassert = p0;
var_n_id = p1;
var_n_expr = p2;
var_n_else = p3;
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2849);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val = var_n_kwassert; /* _n_kwassert on <self:AAssertExpr> */
if (var_n_kwassert == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2850);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwassert,self) on <var_n_kwassert:nullable TKwassert> */
if (unlikely(var_n_kwassert == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwassert->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwassert:nullable TKwassert> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val = var_n_id; /* _n_id on <self:AAssertExpr> */
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
var5 = ((short int (*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2853);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAssertExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2854);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val = var_n_else; /* _n_else on <self:AAssertExpr> */
var9 = NULL;
if (var_n_else == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_else,var9) on <var_n_else:nullable AExpr> */
var_other = var9;
{
var13 = ((short int (*)(val* self, val* p0))(var_n_else->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_else, var_other) /* == on <var_n_else:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#replace_child for (self: AAssertExpr, ANode, nullable ANode) */
void nit__parser_prod___AAssertExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var28 /* : nullable AExpr */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2861);
show_backtrace(1);
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
cltype = type_nit__TKwassert.color;
idtype = type_nit__TKwassert.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2862);
show_backtrace(1);
}
{
nit__parser_prod___AAssertExpr___n_kwassert_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_kwassert= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
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
cltype15 = type_nullable__nit__TId.color;
idtype16 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2866);
show_backtrace(1);
}
{
nit__parser_prod___AAssertExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_id= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2869);
show_backtrace(1);
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
cltype25 = type_nit__AExpr.color;
idtype26 = type_nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2870);
show_backtrace(1);
}
{
nit__parser_prod___AAssertExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_expr= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var28,var_old_child) on <var28:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype36 = type_nullable__nit__AExpr.color;
idtype37 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2874);
show_backtrace(1);
}
{
nit__parser_prod___AAssertExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod#AAssertExpr#n_else= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_kwassert= for (self: AAssertExpr, TKwassert) */
void nit__parser_prod___AAssertExpr___n_kwassert_61d(val* self, val* p0) {
val* var_node /* var node: TKwassert */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val = var_node; /* _n_kwassert on <self:AAssertExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwassert> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwassert> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_id= for (self: AAssertExpr, nullable TId) */
void nit__parser_prod___AAssertExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val = var_node; /* _n_id on <self:AAssertExpr> */
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
/* method parser_prod#AAssertExpr#n_expr= for (self: AAssertExpr, AExpr) */
void nit__parser_prod___AAssertExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val = var_node; /* _n_expr on <self:AAssertExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#n_else= for (self: AAssertExpr, nullable AExpr) */
void nit__parser_prod___AAssertExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val = var_node; /* _n_else on <self:AAssertExpr> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssertExpr#visit_all for (self: AAssertExpr, Visitor) */
void nit__parser_prod___AAssertExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwassert */;
val* var1 /* : nullable TId */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2903);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2905);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#init_aonceexpr for (self: AOnceExpr, nullable TKwonce, nullable AExpr) */
void nit__parser_prod___AOnceExpr___init_aonceexpr(val* self, val* p0, val* p1) {
val* var_n_kwonce /* var n_kwonce: nullable TKwonce */;
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_kwonce = p0;
var_n_expr = p1;
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2915);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val = var_n_kwonce; /* _n_kwonce on <self:AOnceExpr> */
if (var_n_kwonce == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2916);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwonce,self) on <var_n_kwonce:nullable TKwonce> */
if (unlikely(var_n_kwonce == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwonce->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwonce:nullable TKwonce> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2917);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOnceExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2918);
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
/* method parser_prod#AOnceExpr#replace_child for (self: AOnceExpr, ANode, nullable ANode) */
void nit__parser_prod___AOnceExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2923);
show_backtrace(1);
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
cltype = type_nit__TKwonce.color;
idtype = type_nit__TKwonce.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2924);
show_backtrace(1);
}
{
nit__parser_prod___AOnceExpr___n_kwonce_61d(self, var_new_child); /* Direct call parser_prod#AOnceExpr#n_kwonce= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2927);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2928);
show_backtrace(1);
}
{
nit__parser_prod___AOnceExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOnceExpr#n_expr= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_kwonce= for (self: AOnceExpr, TKwonce) */
void nit__parser_prod___AOnceExpr___n_kwonce_61d(val* self, val* p0) {
val* var_node /* var node: TKwonce */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val = var_node; /* _n_kwonce on <self:AOnceExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwonce> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwonce> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#n_expr= for (self: AOnceExpr, AExpr) */
void nit__parser_prod___AOnceExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val = var_node; /* _n_expr on <self:AOnceExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOnceExpr#visit_all for (self: AOnceExpr, Visitor) */
void nit__parser_prod___AOnceExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwonce */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2947);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 2948);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#init_aorexpr for (self: AOrExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AOrExpr___init_aorexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3028);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3029);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3030);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3031);
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
/* method parser_prod#AOrExpr#replace_child for (self: AOrExpr, ANode, nullable ANode) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3036);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3037);
show_backtrace(1);
}
{
nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_expr= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3040);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3041);
show_backtrace(1);
}
{
nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrExpr#n_expr2= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr= for (self: AOrExpr, AExpr) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#n_expr2= for (self: AOrExpr, AExpr) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOrExpr#visit_all for (self: AOrExpr, Visitor) */
void nit__parser_prod___AOrExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3060);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3061);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#init_aandexpr for (self: AAndExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AAndExpr___init_aandexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3070);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAndExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3071);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3072);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAndExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3073);
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
/* method parser_prod#AAndExpr#replace_child for (self: AAndExpr, ANode, nullable ANode) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3078);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3079);
show_backtrace(1);
}
{
nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_expr= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3082);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3083);
show_backtrace(1);
}
{
nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AAndExpr#n_expr2= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr= for (self: AAndExpr, AExpr) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#n_expr2= for (self: AAndExpr, AExpr) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAndExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAndExpr#visit_all for (self: AAndExpr, Visitor) */
void nit__parser_prod___AAndExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3102);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3103);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#init_aorelseexpr for (self: AOrElseExpr, nullable AExpr, nullable AExpr) */
void nit__parser_prod___AOrElseExpr___init_aorelseexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
var_n_expr = p0;
var_n_expr2 = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3112);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrElseExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3113);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3114);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrElseExpr> */
if (var_n_expr2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3115);
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
/* method parser_prod#AOrElseExpr#replace_child for (self: AOrElseExpr, ANode, nullable ANode) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3120);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3121);
show_backtrace(1);
}
{
nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_expr= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3124);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 3125);
show_backtrace(1);
}
{
nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod#AOrElseExpr#n_expr2= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOrElseExpr#n_expr= for (self: AOrElseExpr, AExpr) */
void nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
