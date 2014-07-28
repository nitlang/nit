#include "parser_prod.sep.0.h"
/* method parser_prod#ACastAsExternCall#n_dot= for (self: ACastAsExternCall, nullable TDot) */
void parser_prod__ACastAsExternCall__n_dot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDot */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val = var_node; /* _n_dot on <self:ACastAsExternCall> */
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
/* method parser_prod#ACastAsExternCall#n_dot= for (self: Object, nullable TDot) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_dot_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_dot_61d(self, p0); /* Direct call parser_prod#ACastAsExternCall#n_dot= on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_kwas= for (self: ACastAsExternCall, TKwas) */
void parser_prod__ACastAsExternCall__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val = var_node; /* _n_kwas on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_kwas_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_kwas_61d(self, p0); /* Direct call parser_prod#ACastAsExternCall#n_kwas= on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_to_type= for (self: ACastAsExternCall, AType) */
void parser_prod__ACastAsExternCall__n_to_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val = var_node; /* _n_to_type on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_to_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ACastAsExternCall__n_to_type_61d(val* self, val* p0) {
parser_prod__ACastAsExternCall__n_to_type_61d(self, p0); /* Direct call parser_prod#ACastAsExternCall#n_to_type= on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#visit_all for (self: ACastAsExternCall, Visitor) */
void parser_prod__ACastAsExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : TKwas */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7272);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7274);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7275);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ACastAsExternCall__visit_all(val* self, val* p0) {
parser_prod__ACastAsExternCall__visit_all(self, p0); /* Direct call parser_prod#ACastAsExternCall#visit_all on <self:Object(ACastAsExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#init_aasnullableexterncall for (self: AAsNullableExternCall, nullable AType, nullable TKwas, nullable TKwnullable) */
void parser_prod__AAsNullableExternCall__init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnullable = p2;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7285);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNullableExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7286);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7287);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNullableExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7288);
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
if (unlikely(var_n_kwnullable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7289);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (var_n_kwnullable == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7290);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable> */
if (unlikely(var_n_kwnullable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnullable->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#init_aasnullableexterncall for (self: Object, nullable AType, nullable TKwas, nullable TKwnullable) */
void VIRTUAL_parser_prod__AAsNullableExternCall__init_aasnullableexterncall(val* self, val* p0, val* p1, val* p2) {
parser_prod__AAsNullableExternCall__init_aasnullableexterncall(self, p0, p1, p2); /* Direct call parser_prod#AAsNullableExternCall#init_aasnullableexterncall on <self:Object(AAsNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#replace_child for (self: AAsNullableExternCall, ANode, nullable ANode) */
void parser_prod__AAsNullableExternCall__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TKwas */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwnullable */;
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
var = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7295);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7296);
show_backtrace(1);
}
{
parser_prod__AAsNullableExternCall__n_type_61d(self, var_new_child); /* Direct call parser_prod#AAsNullableExternCall#n_type= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7299);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7300);
show_backtrace(1);
}
{
parser_prod__AAsNullableExternCall__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsNullableExternCall#n_kwas= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7303);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwnullable> */
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
/* <var_new_child:nullable ANode> isa TKwnullable */
cltype27 = type_parser_nodes__TKwnullable.color;
idtype28 = type_parser_nodes__TKwnullable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnullable", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7304);
show_backtrace(1);
}
{
parser_prod__AAsNullableExternCall__n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod#AAsNullableExternCall#n_kwnullable= on <self:AAsNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsNullableExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsNullableExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#AAsNullableExternCall#replace_child on <self:Object(AAsNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_type= for (self: AAsNullableExternCall, AType) */
void parser_prod__AAsNullableExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AAsNullableExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AAsNullableExternCall__n_type_61d(self, p0); /* Direct call parser_prod#AAsNullableExternCall#n_type= on <self:Object(AAsNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwas= for (self: AAsNullableExternCall, TKwas) */
void parser_prod__AAsNullableExternCall__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsNullableExternCall__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsNullableExternCall__n_kwas_61d(self, p0); /* Direct call parser_prod#AAsNullableExternCall#n_kwas= on <self:Object(AAsNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwnullable= for (self: AAsNullableExternCall, TKwnullable) */
void parser_prod__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnullable> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnullable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#n_kwnullable= for (self: Object, TKwnullable) */
void VIRTUAL_parser_prod__AAsNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AAsNullableExternCall__n_kwnullable_61d(self, p0); /* Direct call parser_prod#AAsNullableExternCall#n_kwnullable= on <self:Object(AAsNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#visit_all for (self: AAsNullableExternCall, Visitor) */
void parser_prod__AAsNullableExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7328);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7329);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAsNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNullableExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7330);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNullableExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsNullableExternCall__visit_all(val* self, val* p0) {
parser_prod__AAsNullableExternCall__visit_all(self, p0); /* Direct call parser_prod#AAsNullableExternCall#visit_all on <self:Object(AAsNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall for (self: AAsNotNullableExternCall, nullable AType, nullable TKwas, nullable TKwnot, nullable TKwnullable) */
void parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_type /* var n_type: nullable AType */;
val* var_n_kwas /* var n_kwas: nullable TKwas */;
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
var_n_type = p0;
var_n_kwas = p1;
var_n_kwnot = p2;
var_n_kwnullable = p3;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7341);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val = var_n_type; /* _n_type on <self:AAsNotNullableExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7342);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7343);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7344);
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
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7345);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7346);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwnullable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7347);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var_n_kwnullable == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7348);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable> */
if (unlikely(var_n_kwnullable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnullable->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall for (self: Object, nullable AType, nullable TKwas, nullable TKwnot, nullable TKwnullable) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(self, p0, p1, p2, p3); /* Direct call parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#replace_child for (self: AAsNotNullableExternCall, ANode, nullable ANode) */
void parser_prod__AAsNotNullableExternCall__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TKwas */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwnot */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : TKwnullable */;
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
var = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7353);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7354);
show_backtrace(1);
}
{
parser_prod__AAsNotNullableExternCall__n_type_61d(self, var_new_child); /* Direct call parser_prod#AAsNotNullableExternCall#n_type= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7357);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7358);
show_backtrace(1);
}
{
parser_prod__AAsNotNullableExternCall__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsNotNullableExternCall#n_kwas= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7361);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwnot> */
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
/* <var_new_child:nullable ANode> isa TKwnot */
cltype27 = type_parser_nodes__TKwnot.color;
idtype28 = type_parser_nodes__TKwnot.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnot", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7362);
show_backtrace(1);
}
{
parser_prod__AAsNotNullableExternCall__n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#AAsNotNullableExternCall#n_kwnot= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7365);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwnullable> */
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
/* <var_new_child:nullable ANode> isa TKwnullable */
cltype38 = type_parser_nodes__TKwnullable.color;
idtype39 = type_parser_nodes__TKwnullable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnullable", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7366);
show_backtrace(1);
}
{
parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod#AAsNotNullableExternCall#n_kwnullable= on <self:AAsNotNullableExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAsNotNullableExternCall__replace_child(self, p0, p1); /* Direct call parser_prod#AAsNotNullableExternCall#replace_child on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_type= for (self: AAsNotNullableExternCall, AType) */
void parser_prod__AAsNotNullableExternCall__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val = var_node; /* _n_type on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_type_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_type_61d(self, p0); /* Direct call parser_prod#AAsNotNullableExternCall#n_type= on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwas= for (self: AAsNotNullableExternCall, TKwas) */
void parser_prod__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_kwas_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_kwas_61d(self, p0); /* Direct call parser_prod#AAsNotNullableExternCall#n_kwas= on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnot= for (self: AAsNotNullableExternCall, TKwnot) */
void parser_prod__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_kwnot_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_kwnot_61d(self, p0); /* Direct call parser_prod#AAsNotNullableExternCall#n_kwnot= on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnullable= for (self: AAsNotNullableExternCall, TKwnullable) */
void parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: TKwnullable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnullable> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnullable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#n_kwnullable= for (self: Object, TKwnullable) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__n_kwnullable_61d(self, p0); /* Direct call parser_prod#AAsNotNullableExternCall#n_kwnullable= on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#visit_all for (self: AAsNotNullableExternCall, Visitor) */
void parser_prod__AAsNotNullableExternCall__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : TKwas */;
val* var2 /* : TKwnot */;
val* var3 /* : TKwnullable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7395);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7396);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7397);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnullable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7398);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotNullableExternCall#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAsNotNullableExternCall__visit_all(val* self, val* p0) {
parser_prod__AAsNotNullableExternCall__visit_all(self, p0); /* Direct call parser_prod#AAsNotNullableExternCall#visit_all on <self:Object(AAsNotNullableExternCall)>*/
RET_LABEL:;
}
/* method parser_prod#AInLanguage#init_ainlanguage for (self: AInLanguage, nullable TKwin, nullable TString) */
void parser_prod__AInLanguage__init_ainlanguage(val* self, val* p0, val* p1) {
val* var_n_kwin /* var n_kwin: nullable TKwin */;
val* var_n_string /* var n_string: nullable TString */;
var_n_kwin = p0;
var_n_string = p1;
if (unlikely(var_n_kwin == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7407);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val = var_n_kwin; /* _n_kwin on <self:AInLanguage> */
if (var_n_kwin == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7408);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwin,self) on <var_n_kwin:nullable TKwin> */
if (unlikely(var_n_kwin == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwin->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwin:nullable TKwin> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7409);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val = var_n_string; /* _n_string on <self:AInLanguage> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7410);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_string->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#init_ainlanguage for (self: Object, nullable TKwin, nullable TString) */
void VIRTUAL_parser_prod__AInLanguage__init_ainlanguage(val* self, val* p0, val* p1) {
parser_prod__AInLanguage__init_ainlanguage(self, p0, p1); /* Direct call parser_prod#AInLanguage#init_ainlanguage on <self:Object(AInLanguage)>*/
RET_LABEL:;
}
/* method parser_prod#AInLanguage#replace_child for (self: AInLanguage, ANode, nullable ANode) */
void parser_prod__AInLanguage__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwin */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TString */;
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
var = self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7415);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwin> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwin> */
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
/* <var_new_child:nullable ANode> isa TKwin */
cltype = type_parser_nodes__TKwin.color;
idtype = type_parser_nodes__TKwin.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwin", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7416);
show_backtrace(1);
}
{
parser_prod__AInLanguage__n_kwin_61d(self, var_new_child); /* Direct call parser_prod#AInLanguage#n_kwin= on <self:AInLanguage>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7419);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TString> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TString> */
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
/* <var_new_child:nullable ANode> isa TString */
cltype16 = type_parser_nodes__TString.color;
idtype17 = type_parser_nodes__TString.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TString", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7420);
show_backtrace(1);
}
{
parser_prod__AInLanguage__n_string_61d(self, var_new_child); /* Direct call parser_prod#AInLanguage#n_string= on <self:AInLanguage>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInLanguage__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInLanguage__replace_child(self, p0, p1); /* Direct call parser_prod#AInLanguage#replace_child on <self:Object(AInLanguage)>*/
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_kwin= for (self: AInLanguage, TKwin) */
void parser_prod__AInLanguage__n_kwin_61d(val* self, val* p0) {
val* var_node /* var node: TKwin */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val = var_node; /* _n_kwin on <self:AInLanguage> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwin> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwin> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_kwin= for (self: Object, TKwin) */
void VIRTUAL_parser_prod__AInLanguage__n_kwin_61d(val* self, val* p0) {
parser_prod__AInLanguage__n_kwin_61d(self, p0); /* Direct call parser_prod#AInLanguage#n_kwin= on <self:Object(AInLanguage)>*/
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_string= for (self: AInLanguage, TString) */
void parser_prod__AInLanguage__n_string_61d(val* self, val* p0) {
val* var_node /* var node: TString */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val = var_node; /* _n_string on <self:AInLanguage> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TString> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TString> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#n_string= for (self: Object, TString) */
void VIRTUAL_parser_prod__AInLanguage__n_string_61d(val* self, val* p0) {
parser_prod__AInLanguage__n_string_61d(self, p0); /* Direct call parser_prod#AInLanguage#n_string= on <self:Object(AInLanguage)>*/
RET_LABEL:;
}
/* method parser_prod#AInLanguage#visit_all for (self: AInLanguage, Visitor) */
void parser_prod__AInLanguage__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwin */;
val* var1 /* : TString */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7439);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7440);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInLanguage#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInLanguage__visit_all(val* self, val* p0) {
parser_prod__AInLanguage__visit_all(self, p0); /* Direct call parser_prod#AInLanguage#visit_all on <self:Object(AInLanguage)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#init_aexterncodeblock for (self: AExternCodeBlock, nullable AInLanguage, nullable TExternCodeSegment) */
void parser_prod__AExternCodeBlock__init_aexterncodeblock(val* self, val* p0, val* p1) {
val* var_n_in_language /* var n_in_language: nullable AInLanguage */;
val* var_n_extern_code_segment /* var n_extern_code_segment: nullable TExternCodeSegment */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_in_language = p0;
var_n_extern_code_segment = p1;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var_n_in_language; /* _n_in_language on <self:AExternCodeBlock> */
var = NULL;
if (var_n_in_language == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_in_language,var) on <var_n_in_language:nullable AInLanguage> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_in_language->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_in_language, var_other) /* == on <var_n_in_language:nullable AInLanguage(AInLanguage)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_in_language,self) on <var_n_in_language:nullable AInLanguage(AInLanguage)> */
var_n_in_language->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_in_language:nullable AInLanguage(AInLanguage)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_extern_code_segment == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7451);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_n_extern_code_segment; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var_n_extern_code_segment == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7452);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_segment,self) on <var_n_extern_code_segment:nullable TExternCodeSegment> */
if (unlikely(var_n_extern_code_segment == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_extern_code_segment->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_segment:nullable TExternCodeSegment> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#init_aexterncodeblock for (self: Object, nullable AInLanguage, nullable TExternCodeSegment) */
void VIRTUAL_parser_prod__AExternCodeBlock__init_aexterncodeblock(val* self, val* p0, val* p1) {
parser_prod__AExternCodeBlock__init_aexterncodeblock(self, p0, p1); /* Direct call parser_prod#AExternCodeBlock#init_aexterncodeblock on <self:Object(AExternCodeBlock)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#replace_child for (self: AExternCodeBlock, ANode, nullable ANode) */
void parser_prod__AExternCodeBlock__replace_child(val* self, val* p0, val* p1) {
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
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable AInLanguage> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AInLanguage(AInLanguage)> */
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
cltype = type_nullable_parser_nodes__AInLanguage.color;
idtype = type_nullable_parser_nodes__AInLanguage.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7458);
show_backtrace(1);
}
{
parser_prod__AExternCodeBlock__n_in_language_61d(self, var_new_child); /* Direct call parser_prod#AExternCodeBlock#n_in_language= on <self:AExternCodeBlock>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7461);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TExternCodeSegment> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TExternCodeSegment> */
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
/* <var_new_child:nullable ANode> isa TExternCodeSegment */
cltype16 = type_parser_nodes__TExternCodeSegment.color;
idtype17 = type_parser_nodes__TExternCodeSegment.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TExternCodeSegment", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7462);
show_backtrace(1);
}
{
parser_prod__AExternCodeBlock__n_extern_code_segment_61d(self, var_new_child); /* Direct call parser_prod#AExternCodeBlock#n_extern_code_segment= on <self:AExternCodeBlock>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternCodeBlock__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternCodeBlock__replace_child(self, p0, p1); /* Direct call parser_prod#AExternCodeBlock#replace_child on <self:Object(AExternCodeBlock)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_in_language= for (self: AExternCodeBlock, nullable AInLanguage) */
void parser_prod__AExternCodeBlock__n_in_language_61d(val* self, val* p0) {
val* var_node /* var node: nullable AInLanguage */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var_node; /* _n_in_language on <self:AExternCodeBlock> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AInLanguage> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AInLanguage(AInLanguage)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AInLanguage(AInLanguage)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AInLanguage(AInLanguage)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_in_language= for (self: Object, nullable AInLanguage) */
void VIRTUAL_parser_prod__AExternCodeBlock__n_in_language_61d(val* self, val* p0) {
parser_prod__AExternCodeBlock__n_in_language_61d(self, p0); /* Direct call parser_prod#AExternCodeBlock#n_in_language= on <self:Object(AExternCodeBlock)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_extern_code_segment= for (self: AExternCodeBlock, TExternCodeSegment) */
void parser_prod__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0) {
val* var_node /* var node: TExternCodeSegment */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val = var_node; /* _n_extern_code_segment on <self:AExternCodeBlock> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TExternCodeSegment> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TExternCodeSegment> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#n_extern_code_segment= for (self: Object, TExternCodeSegment) */
void VIRTUAL_parser_prod__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0) {
parser_prod__AExternCodeBlock__n_extern_code_segment_61d(self, p0); /* Direct call parser_prod#AExternCodeBlock#n_extern_code_segment= on <self:Object(AExternCodeBlock)>*/
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#visit_all for (self: AExternCodeBlock, Visitor) */
void parser_prod__AExternCodeBlock__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AInLanguage */;
val* var1 /* : TExternCodeSegment */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7482);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCodeBlock#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternCodeBlock__visit_all(val* self, val* p0) {
parser_prod__AExternCodeBlock__visit_all(self, p0); /* Direct call parser_prod#AExternCodeBlock#visit_all on <self:Object(AExternCodeBlock)>*/
RET_LABEL:;
}
/* method parser_prod#AQualified#init_aqualified for (self: AQualified, Collection[Object], nullable TClassid) */
void parser_prod__AQualified__init_aqualified(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: Collection[Object] */;
val* var_n_classid /* var n_classid: nullable TClassid */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_n_id = p0;
var_n_classid = p1;
{
{ /* Inline parser_nodes#AQualified#n_id (self) on <self:AQualified> */
var2 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2380);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_id); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[TId]>*/
}
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var_n_classid; /* _n_classid on <self:AQualified> */
var3 = NULL;
if (var_n_classid == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_classid,var3) on <var_n_classid:nullable TClassid> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_n_classid->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_classid, var_other) /* == on <var_n_classid:nullable TClassid(TClassid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_classid,self) on <var_n_classid:nullable TClassid(TClassid)> */
var_n_classid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_classid:nullable TClassid(TClassid)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#init_aqualified for (self: Object, Collection[Object], nullable TClassid) */
void VIRTUAL_parser_prod__AQualified__init_aqualified(val* self, val* p0, val* p1) {
parser_prod__AQualified__init_aqualified(self, p0, p1); /* Direct call parser_prod#AQualified#init_aqualified on <self:Object(AQualified)>*/
RET_LABEL:;
}
/* method parser_prod#AQualified#replace_child for (self: AQualified, ANode, nullable ANode) */
void parser_prod__AQualified__replace_child(val* self, val* p0, val* p1) {
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
{ /* Inline parser_nodes#AQualified#n_id (self) on <self:AQualified> */
var2 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2380);
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
var4 = self->attrs[COLOR_parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var4,var_old_child) on <var4:nullable TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:nullable TClassid(TClassid)> */
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
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7500);
show_backtrace(1);
}
{
parser_prod__AQualified__n_classid_61d(self, var_new_child); /* Direct call parser_prod#AQualified#n_classid= on <self:AQualified>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AQualified__replace_child(val* self, val* p0, val* p1) {
parser_prod__AQualified__replace_child(self, p0, p1); /* Direct call parser_prod#AQualified#replace_child on <self:Object(AQualified)>*/
RET_LABEL:;
}
/* method parser_prod#AQualified#n_classid= for (self: AQualified, nullable TClassid) */
void parser_prod__AQualified__n_classid_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var_node; /* _n_classid on <self:AQualified> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TClassid> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TClassid(TClassid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TClassid(TClassid)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TClassid(TClassid)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AQualified#n_classid= for (self: Object, nullable TClassid) */
void VIRTUAL_parser_prod__AQualified__n_classid_61d(val* self, val* p0) {
parser_prod__AQualified__n_classid_61d(self, p0); /* Direct call parser_prod#AQualified#n_classid= on <self:Object(AQualified)>*/
RET_LABEL:;
}
/* method parser_prod#AQualified#visit_all for (self: AQualified, Visitor) */
void parser_prod__AQualified__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
val* var3 /* : nullable TClassid */;
var_v = p0;
{
{ /* Inline parser_nodes#AQualified#n_id (self) on <self:AQualified> */
var2 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2380);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[TId]>*/
}
var3 = self->attrs[COLOR_parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AQualified#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AQualified__visit_all(val* self, val* p0) {
parser_prod__AQualified__visit_all(self, p0); /* Direct call parser_prod#AQualified#visit_all on <self:Object(AQualified)>*/
RET_LABEL:;
}
/* method parser_prod#ADoc#init_adoc for (self: ADoc, Collection[Object]) */
void parser_prod__ADoc__init_adoc(val* self, val* p0) {
val* var_n_comment /* var n_comment: Collection[Object] */;
val* var /* : ANodes[TComment] */;
val* var2 /* : ANodes[TComment] */;
var_n_comment = p0;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var2 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2391);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_comment); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[TComment]>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoc#init_adoc for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__ADoc__init_adoc(val* self, val* p0) {
parser_prod__ADoc__init_adoc(self, p0); /* Direct call parser_prod#ADoc#init_adoc on <self:Object(ADoc)>*/
RET_LABEL:;
}
/* method parser_prod#ADoc#replace_child for (self: ADoc, ANode, nullable ANode) */
void parser_prod__ADoc__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[TComment] */;
val* var2 /* : ANodes[TComment] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var2 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2391);
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
/* method parser_prod#ADoc#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADoc__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADoc__replace_child(self, p0, p1); /* Direct call parser_prod#ADoc#replace_child on <self:Object(ADoc)>*/
RET_LABEL:;
}
/* method parser_prod#ADoc#visit_all for (self: ADoc, Visitor) */
void parser_prod__ADoc__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TComment] */;
val* var2 /* : ANodes[TComment] */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var2 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2391);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[TComment]>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoc#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADoc__visit_all(val* self, val* p0) {
parser_prod__ADoc__visit_all(self, p0); /* Direct call parser_prod#ADoc#visit_all on <self:Object(ADoc)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotations#init_aannotations for (self: AAnnotations, nullable TAt, nullable TOpar, Collection[Object], nullable TCpar) */
void parser_prod__AAnnotations__init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_at /* var n_at: nullable TAt */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_items /* var n_items: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
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
val* var16 /* : ANodes[AAnnotation] */;
val* var18 /* : ANodes[AAnnotation] */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_n_at = p0;
var_n_opar = p1;
var_n_items = p2;
var_n_cpar = p3;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var_n_at; /* _n_at on <self:AAnnotations> */
var = NULL;
if (var_n_at == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_at,var) on <var_n_at:nullable TAt> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_at->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_at, var_other) /* == on <var_n_at:nullable TAt(TAt)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_at,self) on <var_n_at:nullable TAt(TAt)> */
var_n_at->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_at:nullable TAt(TAt)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotations> */
var8 = NULL;
if (var_n_opar == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,var8) on <var_n_opar:nullable TOpar> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_opar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL15:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotations#n_items (self) on <self:AAnnotations> */
var18 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2403);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var16, var_n_items); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var16:ANodes[AAnnotation]>*/
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotations> */
var19 = NULL;
if (var_n_cpar == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var19) on <var_n_cpar:nullable TCpar> */
var_other = var19;
{
var24 = ((short int (*)(val*, val*))(var_n_cpar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
var23 = var24;
}
var25 = !var23;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL26:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#init_aannotations for (self: Object, nullable TAt, nullable TOpar, Collection[Object], nullable TCpar) */
void VIRTUAL_parser_prod__AAnnotations__init_aannotations(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AAnnotations__init_aannotations(self, p0, p1, p2, p3); /* Direct call parser_prod#AAnnotations#init_aannotations on <self:Object(AAnnotations)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotations#replace_child for (self: AAnnotations, ANode, nullable ANode) */
void parser_prod__AAnnotations__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TAt */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TOpar */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : ANodes[AAnnotation] */;
val* var21 /* : ANodes[AAnnotation] */;
short int var22 /* : Bool */;
val* var23 /* : nullable TCpar */;
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
var = self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TAt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TAt(TAt)> */
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
/* <var_new_child:nullable ANode> isa nullable TAt */
cltype = type_nullable_parser_nodes__TAt.color;
idtype = type_nullable_parser_nodes__TAt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7558);
show_backtrace(1);
}
{
parser_prod__AAnnotations__n_at_61d(self, var_new_child); /* Direct call parser_prod#AAnnotations#n_at= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TOpar(TOpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype16 = type_nullable_parser_nodes__TOpar.color;
idtype17 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7562);
show_backtrace(1);
}
{
parser_prod__AAnnotations__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAnnotations#n_opar= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotations#n_items (self) on <self:AAnnotations> */
var21 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2403);
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
var23 = self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
if (var23 == NULL) {
var24 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var23,var_old_child) on <var23:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:nullable TCpar(TCpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype31 = type_nullable_parser_nodes__TCpar.color;
idtype32 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7567);
show_backtrace(1);
}
{
parser_prod__AAnnotations__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAnnotations#n_cpar= on <self:AAnnotations>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAnnotations__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAnnotations__replace_child(self, p0, p1); /* Direct call parser_prod#AAnnotations#replace_child on <self:Object(AAnnotations)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_at= for (self: AAnnotations, nullable TAt) */
void parser_prod__AAnnotations__n_at_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAt */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var_node; /* _n_at on <self:AAnnotations> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TAt> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TAt(TAt)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TAt(TAt)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TAt(TAt)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_at= for (self: Object, nullable TAt) */
void VIRTUAL_parser_prod__AAnnotations__n_at_61d(val* self, val* p0) {
parser_prod__AAnnotations__n_at_61d(self, p0); /* Direct call parser_prod#AAnnotations#n_at= on <self:Object(AAnnotations)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_opar= for (self: AAnnotations, nullable TOpar) */
void parser_prod__AAnnotations__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var_node; /* _n_opar on <self:AAnnotations> */
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
/* method parser_prod#AAnnotations#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__AAnnotations__n_opar_61d(val* self, val* p0) {
parser_prod__AAnnotations__n_opar_61d(self, p0); /* Direct call parser_prod#AAnnotations#n_opar= on <self:Object(AAnnotations)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotations#n_cpar= for (self: AAnnotations, nullable TCpar) */
void parser_prod__AAnnotations__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotations> */
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
/* method parser_prod#AAnnotations#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__AAnnotations__n_cpar_61d(val* self, val* p0) {
parser_prod__AAnnotations__n_cpar_61d(self, p0); /* Direct call parser_prod#AAnnotations#n_cpar= on <self:Object(AAnnotations)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotations#visit_all for (self: AAnnotations, Visitor) */
void parser_prod__AAnnotations__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TAt */;
val* var1 /* : nullable TOpar */;
val* var2 /* : ANodes[AAnnotation] */;
val* var4 /* : ANodes[AAnnotation] */;
val* var5 /* : nullable TCpar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AAnnotations#n_items (self) on <self:AAnnotations> */
var4 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2403);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var2, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var2:ANodes[AAnnotation]>*/
}
var5 = self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotations#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAnnotations__visit_all(val* self, val* p0) {
parser_prod__AAnnotations__visit_all(self, p0); /* Direct call parser_prod#AAnnotations#visit_all on <self:Object(AAnnotations)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#init_aannotation for (self: AAnnotation, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void parser_prod__AAnnotation__init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_atid /* var n_atid: nullable AAtid */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_args /* var n_args: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
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
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var33 /* : ANodes[AAtArg] */;
val* var35 /* : ANodes[AAtArg] */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_atid = p3;
var_n_opar = p4;
var_n_args = p5;
var_n_cpar = p6;
var_n_annotations = p7;
self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val = var_n_doc; /* _n_doc on <self:AAnnotation> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_doc,var) on <var_n_doc:nullable ADoc> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_doc->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_doc, var_other) /* == on <var_n_doc:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAnnotation> */
var8 = NULL;
if (var_n_kwredef == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var8) on <var_n_kwredef:nullable TKwredef> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL15:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAnnotation> */
var16 = NULL;
if (var_n_visibility == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_visibility,var16) on <var_n_visibility:nullable AVisibility> */
var_other = var16;
{
var21 = ((short int (*)(val*, val*))(var_n_visibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_visibility, var_other) /* == on <var_n_visibility:nullable AVisibility(AVisibility)>*/;
var20 = var21;
}
var22 = !var20;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility(AVisibility)> */
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility(AVisibility)> */
RET_LABEL23:(void)0;
}
}
} else {
}
if (unlikely(var_n_atid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7615);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val = var_n_atid; /* _n_atid on <self:AAnnotation> */
if (var_n_atid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7616);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_atid,self) on <var_n_atid:nullable AAtid> */
if (unlikely(var_n_atid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_atid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_atid:nullable AAtid> */
RET_LABEL24:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotation> */
var25 = NULL;
if (var_n_opar == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,var25) on <var_n_opar:nullable TOpar> */
var_other = var25;
{
var30 = ((short int (*)(val*, val*))(var_n_opar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
var29 = var30;
}
var31 = !var29;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL32:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var35 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var33, var_n_args); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var33:ANodes[AAtArg]>*/
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotation> */
var36 = NULL;
if (var_n_cpar == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var36) on <var_n_cpar:nullable TCpar> */
var_other = var36;
{
var41 = ((short int (*)(val*, val*))(var_n_cpar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
var40 = var41;
}
var42 = !var40;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL43:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAnnotation> */
var44 = NULL;
if (var_n_annotations == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var44) on <var_n_annotations:nullable AAnnotations> */
var_other = var44;
{
var49 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var48 = var49;
}
var50 = !var48;
var46 = var50;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL51:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#init_aannotation for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAnnotation__init_aannotation(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
parser_prod__AAnnotation__init_aannotation(self, p0, p1, p2, p3, p4, p5, p6, p7); /* Direct call parser_prod#AAnnotation#init_aannotation on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#replace_child for (self: AAnnotation, ANode, nullable ANode) */
void parser_prod__AAnnotation__replace_child(val* self, val* p0, val* p1) {
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
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable TOpar */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : ANodes[AAtArg] */;
val* var54 /* : ANodes[AAtArg] */;
short int var55 /* : Bool */;
val* var56 /* : nullable TCpar */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
val* var67 /* : nullable AAnnotations */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val; /* _n_doc on <self:AAnnotation> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7629);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_doc= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7633);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_kwredef= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
cltype27 = type_nullable_parser_nodes__AVisibility.color;
idtype28 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7637);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_visibility= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7640);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AAtid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AAtid> */
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
/* <var_new_child:nullable ANode> isa AAtid */
cltype38 = type_parser_nodes__AAtid.color;
idtype39 = type_parser_nodes__AAtid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAtid", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7641);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_atid_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_atid= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable TOpar(TOpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype49 = type_nullable_parser_nodes__TOpar.color;
idtype50 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7645);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_opar= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var54 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = parser_nodes__ANodes__replace_child(var52, var_old_child, var_new_child);
}
if (var55){
goto RET_LABEL;
} else {
}
var56 = self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
if (var56 == NULL) {
var57 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var56,var_old_child) on <var56:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var56,var_other) on <var56:nullable TCpar(TCpar)> */
var62 = var56 == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype64 = type_nullable_parser_nodes__TCpar.color;
idtype65 = type_nullable_parser_nodes__TCpar.id;
if(var_new_child == NULL) {
var63 = 1;
} else {
if(cltype64 >= var_new_child->type->table_size) {
var63 = 0;
} else {
var63 = var_new_child->type->type_table[cltype64] == idtype65;
}
}
if (unlikely(!var63)) {
var_class_name66 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7650);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_cpar= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
var67 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
if (var67 == NULL) {
var68 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var67,var_old_child) on <var67:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var67,var_other) on <var67:nullable AAnnotations(AAnnotations)> */
var73 = var67 == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype75 = type_nullable_parser_nodes__AAnnotations.color;
idtype76 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var74 = 1;
} else {
if(cltype75 >= var_new_child->type->table_size) {
var74 = 0;
} else {
var74 = var_new_child->type->type_table[cltype75] == idtype76;
}
}
if (unlikely(!var74)) {
var_class_name77 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7654);
show_backtrace(1);
}
{
parser_prod__AAnnotation__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AAnnotation#n_annotations= on <self:AAnnotation>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAnnotation__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAnnotation__replace_child(self, p0, p1); /* Direct call parser_prod#AAnnotation#replace_child on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_doc= for (self: AAnnotation, nullable ADoc) */
void parser_prod__AAnnotation__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val = var_node; /* _n_doc on <self:AAnnotation> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ADoc> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AAnnotation__n_doc_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_doc_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_doc= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_kwredef= for (self: AAnnotation, nullable TKwredef) */
void parser_prod__AAnnotation__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val = var_node; /* _n_kwredef on <self:AAnnotation> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwredef> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AAnnotation__n_kwredef_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_kwredef_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_kwredef= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_visibility= for (self: AAnnotation, nullable AVisibility) */
void parser_prod__AAnnotation__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val = var_node; /* _n_visibility on <self:AAnnotation> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AVisibility> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AVisibility(AVisibility)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility(AVisibility)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility(AVisibility)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AAnnotation__n_visibility_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_visibility_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_visibility= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_atid= for (self: AAnnotation, AAtid) */
void parser_prod__AAnnotation__n_atid_61d(val* self, val* p0) {
val* var_node /* var node: AAtid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val = var_node; /* _n_atid on <self:AAnnotation> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AAtid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAtid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_atid= for (self: Object, AAtid) */
void VIRTUAL_parser_prod__AAnnotation__n_atid_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_atid_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_atid= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_opar= for (self: AAnnotation, nullable TOpar) */
void parser_prod__AAnnotation__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var_node; /* _n_opar on <self:AAnnotation> */
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
/* method parser_prod#AAnnotation#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__AAnnotation__n_opar_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_opar_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_opar= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_cpar= for (self: AAnnotation, nullable TCpar) */
void parser_prod__AAnnotation__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotation> */
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
/* method parser_prod#AAnnotation#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__AAnnotation__n_cpar_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_cpar_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_cpar= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#n_annotations= for (self: AAnnotation, nullable AAnnotations) */
void parser_prod__AAnnotation__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAnnotation> */
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
/* method parser_prod#AAnnotation#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAnnotation__n_annotations_61d(val* self, val* p0) {
parser_prod__AAnnotation__n_annotations_61d(self, p0); /* Direct call parser_prod#AAnnotation#n_annotations= on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#AAnnotation#visit_all for (self: AAnnotation, Visitor) */
void parser_prod__AAnnotation__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AAtid */;
val* var4 /* : nullable TOpar */;
val* var5 /* : ANodes[AAtArg] */;
val* var7 /* : ANodes[AAtArg] */;
val* var8 /* : nullable TCpar */;
val* var9 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val; /* _n_doc on <self:AAnnotation> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val; /* _n_kwredef on <self:AAnnotation> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AAnnotation___n_visibility].val; /* _n_visibility on <self:AAnnotation> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7701);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var7 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var5, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var5:ANodes[AAtArg]>*/
}
var8 = self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotation> */
{
parser_nodes__Visitor__enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAnnotation#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAnnotation__visit_all(val* self, val* p0) {
parser_prod__AAnnotation__visit_all(self, p0); /* Direct call parser_prod#AAnnotation#visit_all on <self:Object(AAnnotation)>*/
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#init_atypeatarg for (self: ATypeAtArg, nullable AType) */
void parser_prod__ATypeAtArg__init_atypeatarg(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7713);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val = var_n_type; /* _n_type on <self:ATypeAtArg> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7714);
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
/* method parser_prod#ATypeAtArg#init_atypeatarg for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__ATypeAtArg__init_atypeatarg(val* self, val* p0) {
parser_prod__ATypeAtArg__init_atypeatarg(self, p0); /* Direct call parser_prod#ATypeAtArg#init_atypeatarg on <self:Object(ATypeAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#replace_child for (self: ATypeAtArg, ANode, nullable ANode) */
void parser_prod__ATypeAtArg__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val; /* _n_type on <self:ATypeAtArg> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7719);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7720);
show_backtrace(1);
}
{
parser_prod__ATypeAtArg__n_type_61d(self, var_new_child); /* Direct call parser_prod#ATypeAtArg#n_type= on <self:ATypeAtArg>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATypeAtArg__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATypeAtArg__replace_child(self, p0, p1); /* Direct call parser_prod#ATypeAtArg#replace_child on <self:Object(ATypeAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#n_type= for (self: ATypeAtArg, AType) */
void parser_prod__ATypeAtArg__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val = var_node; /* _n_type on <self:ATypeAtArg> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ATypeAtArg__n_type_61d(val* self, val* p0) {
parser_prod__ATypeAtArg__n_type_61d(self, p0); /* Direct call parser_prod#ATypeAtArg#n_type= on <self:Object(ATypeAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#visit_all for (self: ATypeAtArg, Visitor) */
void parser_prod__ATypeAtArg__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val; /* _n_type on <self:ATypeAtArg> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7734);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeAtArg#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATypeAtArg__visit_all(val* self, val* p0) {
parser_prod__ATypeAtArg__visit_all(self, p0); /* Direct call parser_prod#ATypeAtArg#visit_all on <self:Object(ATypeAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#init_aexpratarg for (self: AExprAtArg, nullable AExpr) */
void parser_prod__AExprAtArg__init_aexpratarg(val* self, val* p0) {
val* var_n_expr /* var n_expr: nullable AExpr */;
var_n_expr = p0;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7742);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val = var_n_expr; /* _n_expr on <self:AExprAtArg> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7743);
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
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#init_aexpratarg for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AExprAtArg__init_aexpratarg(val* self, val* p0) {
parser_prod__AExprAtArg__init_aexpratarg(self, p0); /* Direct call parser_prod#AExprAtArg#init_aexpratarg on <self:Object(AExprAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#replace_child for (self: AExprAtArg, ANode, nullable ANode) */
void parser_prod__AExprAtArg__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7748);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7749);
show_backtrace(1);
}
{
parser_prod__AExprAtArg__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AExprAtArg#n_expr= on <self:AExprAtArg>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExprAtArg__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExprAtArg__replace_child(self, p0, p1); /* Direct call parser_prod#AExprAtArg#replace_child on <self:Object(AExprAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#n_expr= for (self: AExprAtArg, AExpr) */
void parser_prod__AExprAtArg__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val = var_node; /* _n_expr on <self:AExprAtArg> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AExprAtArg__n_expr_61d(val* self, val* p0) {
parser_prod__AExprAtArg__n_expr_61d(self, p0); /* Direct call parser_prod#AExprAtArg#n_expr= on <self:Object(AExprAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#visit_all for (self: AExprAtArg, Visitor) */
void parser_prod__AExprAtArg__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7763);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExprAtArg#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExprAtArg__visit_all(val* self, val* p0) {
parser_prod__AExprAtArg__visit_all(self, p0); /* Direct call parser_prod#AExprAtArg#visit_all on <self:Object(AExprAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#init_aatatarg for (self: AAtAtArg, nullable AAnnotations) */
void parser_prod__AAtAtArg__init_aatatarg(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
var_n_annotations = p0;
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7771);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtAtArg> */
if (var_n_annotations == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7772);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations> */
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#init_aatatarg for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAtAtArg__init_aatatarg(val* self, val* p0) {
parser_prod__AAtAtArg__init_aatatarg(self, p0); /* Direct call parser_prod#AAtAtArg#init_aatatarg on <self:Object(AAtAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#replace_child for (self: AAtAtArg, ANode, nullable ANode) */
void parser_prod__AAtAtArg__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtAtArg> */
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
cltype = type_parser_nodes__AAnnotations.color;
idtype = type_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7778);
show_backtrace(1);
}
{
parser_prod__AAtAtArg__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AAtAtArg#n_annotations= on <self:AAtAtArg>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAtAtArg__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAtAtArg__replace_child(self, p0, p1); /* Direct call parser_prod#AAtAtArg#replace_child on <self:Object(AAtAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#n_annotations= for (self: AAtAtArg, nullable AAnnotations) */
void parser_prod__AAtAtArg__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAtAtArg> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7786);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAtAtArg__n_annotations_61d(val* self, val* p0) {
parser_prod__AAtAtArg__n_annotations_61d(self, p0); /* Direct call parser_prod#AAtAtArg#n_annotations= on <self:Object(AAtAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#visit_all for (self: AAtAtArg, Visitor) */
void parser_prod__AAtAtArg__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtAtArg> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtAtArg#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAtAtArg__visit_all(val* self, val* p0) {
parser_prod__AAtAtArg__visit_all(self, p0); /* Direct call parser_prod#AAtAtArg#visit_all on <self:Object(AAtAtArg)>*/
RET_LABEL:;
}
/* method parser_prod#AIdAtid#init_aidatid for (self: AIdAtid, nullable TId) */
void parser_prod__AIdAtid__init_aidatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7800);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AIdAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7801);
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
/* method parser_prod#AIdAtid#init_aidatid for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AIdAtid__init_aidatid(val* self, val* p0) {
parser_prod__AIdAtid__init_aidatid(self, p0); /* Direct call parser_prod#AIdAtid#init_aidatid on <self:Object(AIdAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdAtid#replace_child for (self: AIdAtid, ANode, nullable ANode) */
void parser_prod__AIdAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7806);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7807);
show_backtrace(1);
}
{
parser_prod__AIdAtid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AIdAtid#n_id= on <self:AIdAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIdAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIdAtid__replace_child(self, p0, p1); /* Direct call parser_prod#AIdAtid#replace_child on <self:Object(AIdAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdAtid#n_id= for (self: AIdAtid, Token) */
void parser_prod__AIdAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AIdAtid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AIdAtid__n_id_61d(val* self, val* p0) {
parser_prod__AIdAtid__n_id_61d(self, p0); /* Direct call parser_prod#AIdAtid#n_id= on <self:Object(AIdAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdAtid#visit_all for (self: AIdAtid, Visitor) */
void parser_prod__AIdAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AIdAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7821);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIdAtid__visit_all(val* self, val* p0) {
parser_prod__AIdAtid__visit_all(self, p0); /* Direct call parser_prod#AIdAtid#visit_all on <self:Object(AIdAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#init_akwreadableatid for (self: AKwreadableAtid, nullable TKwreadable) */
void parser_prod__AKwreadableAtid__init_akwreadableatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwreadable */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7887);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwreadableAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7888);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TKwreadable> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TKwreadable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#init_akwreadableatid for (self: Object, nullable TKwreadable) */
void VIRTUAL_parser_prod__AKwreadableAtid__init_akwreadableatid(val* self, val* p0) {
parser_prod__AKwreadableAtid__init_akwreadableatid(self, p0); /* Direct call parser_prod#AKwreadableAtid#init_akwreadableatid on <self:Object(AKwreadableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#replace_child for (self: AKwreadableAtid, ANode, nullable ANode) */
void parser_prod__AKwreadableAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwreadableAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7893);
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
/* <var_new_child:nullable ANode> isa TKwreadable */
cltype = type_parser_nodes__TKwreadable.color;
idtype = type_parser_nodes__TKwreadable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwreadable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7894);
show_backtrace(1);
}
{
parser_prod__AKwreadableAtid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AKwreadableAtid#n_id= on <self:AKwreadableAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwreadableAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwreadableAtid__replace_child(self, p0, p1); /* Direct call parser_prod#AKwreadableAtid#replace_child on <self:Object(AKwreadableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#n_id= for (self: AKwreadableAtid, Token) */
void parser_prod__AKwreadableAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwreadableAtid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwreadableAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwreadableAtid__n_id_61d(self, p0); /* Direct call parser_prod#AKwreadableAtid#n_id= on <self:Object(AKwreadableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#visit_all for (self: AKwreadableAtid, Visitor) */
void parser_prod__AKwreadableAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwreadableAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7908);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwreadableAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwreadableAtid__visit_all(val* self, val* p0) {
parser_prod__AKwreadableAtid__visit_all(self, p0); /* Direct call parser_prod#AKwreadableAtid#visit_all on <self:Object(AKwreadableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#init_akwwritableatid for (self: AKwwritableAtid, nullable TKwwritable) */
void parser_prod__AKwwritableAtid__init_akwwritableatid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TKwwritable */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7916);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_n_id; /* _n_id on <self:AKwwritableAtid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7917);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TKwwritable> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TKwwritable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#init_akwwritableatid for (self: Object, nullable TKwwritable) */
void VIRTUAL_parser_prod__AKwwritableAtid__init_akwwritableatid(val* self, val* p0) {
parser_prod__AKwwritableAtid__init_akwwritableatid(self, p0); /* Direct call parser_prod#AKwwritableAtid#init_akwwritableatid on <self:Object(AKwwritableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#replace_child for (self: AKwwritableAtid, ANode, nullable ANode) */
void parser_prod__AKwwritableAtid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwwritableAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7922);
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
/* <var_new_child:nullable ANode> isa TKwwritable */
cltype = type_parser_nodes__TKwwritable.color;
idtype = type_parser_nodes__TKwwritable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwritable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7923);
show_backtrace(1);
}
{
parser_prod__AKwwritableAtid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AKwwritableAtid#n_id= on <self:AKwwritableAtid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AKwwritableAtid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AKwwritableAtid__replace_child(self, p0, p1); /* Direct call parser_prod#AKwwritableAtid#replace_child on <self:Object(AKwwritableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#n_id= for (self: AKwwritableAtid, Token) */
void parser_prod__AKwwritableAtid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = var_node; /* _n_id on <self:AKwwritableAtid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_prod__AKwwritableAtid__n_id_61d(val* self, val* p0) {
parser_prod__AKwwritableAtid__n_id_61d(self, p0); /* Direct call parser_prod#AKwwritableAtid#n_id= on <self:Object(AKwwritableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#visit_all for (self: AKwwritableAtid, Visitor) */
void parser_prod__AKwwritableAtid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AKwwritableAtid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7937);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AKwwritableAtid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AKwwritableAtid__visit_all(val* self, val* p0) {
parser_prod__AKwwritableAtid__visit_all(self, p0); /* Direct call parser_prod#AKwwritableAtid#visit_all on <self:Object(AKwwritableAtid)>*/
RET_LABEL:;
}
/* method parser_prod#Start#replace_child for (self: Start, ANode, nullable ANode) */
void parser_prod__Start__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable AModule> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AModule(AModule)> */
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
var7 = NULL;
if (var_new_child == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_new_child,var7) on <var_new_child:nullable ANode> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var_new_child,var_other) on <var_new_child:nullable ANode(ANode)> */
var13 = var_new_child == var_other;
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
} else {
{
{ /* Inline parser_nodes#ANode#parent= (var_new_child,self) on <var_new_child:nullable ANode(ANode)> */
var_new_child->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_new_child:nullable ANode(ANode)> */
RET_LABEL14:(void)0;
}
}
/* <var_new_child:nullable ANode(ANode)> isa AModule */
cltype = type_parser_nodes__AModule.color;
idtype = type_parser_nodes__AModule.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7977);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Start___n_base].val = var_new_child; /* _n_base on <self:Start> */
}
var16 = NULL;
{
{ /* Inline parser_nodes#ANode#parent= (var_old_child,var16) on <var_old_child:ANode> */
var_old_child->attrs[COLOR_parser_nodes__ANode___parent].val = var16; /* _parent on <var_old_child:ANode> */
RET_LABEL17:(void)0;
}
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#Start#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__Start__replace_child(val* self, val* p0, val* p1) {
parser_prod__Start__replace_child(self, p0, p1); /* Direct call parser_prod#Start#replace_child on <self:Object(Start)>*/
RET_LABEL:;
}
/* method parser_prod#Start#visit_all for (self: Start, Visitor) */
void parser_prod__Start__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModule */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable AModule */;
val* var9 /* : EOF */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,var1) on <var:nullable AModule> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_other) /* == on <var:nullable AModule(AModule)>*/;
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
var8 = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7988);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
} else {
}
var9 = self->attrs[COLOR_parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 7990);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#Start#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__Start__visit_all(val* self, val* p0) {
parser_prod__Start__visit_all(self, p0); /* Direct call parser_prod#Start#visit_all on <self:Object(Start)>*/
RET_LABEL:;
}
