#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AFalseExpr#n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFalseExpr> */
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
/* method parser_prod#AFalseExpr#visit_all for (self: AFalseExpr, Visitor) */
void nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6309);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ANullExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwnull = p0;
var_n_annotations = p1;
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6319);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6320);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwnull->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ANullExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6327);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6328);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6332);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ANullExpr> */
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
/* method parser_prod#ANullExpr#visit_all for (self: ANullExpr, Visitor) */
void nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6351);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ADecIntExpr> */
RET_LABEL1:(void)0;
}
}
var_n_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6361);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val = var_n_number; /* _n_number on <self:ADecIntExpr> */
if (var_n_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6362);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_number,self) on <var_n_number:nullable TNumber> */
if (unlikely(var_n_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_number->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_number:nullable TNumber> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ADecIntExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6369);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6370);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6374);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ADecIntExpr> */
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
/* method parser_prod#ADecIntExpr#visit_all for (self: ADecIntExpr, Visitor) */
void nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADecIntExpr___n_number].val; /* _n_number on <self:ADecIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6393);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AHexIntExpr> */
RET_LABEL1:(void)0;
}
}
var_n_hex_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6403);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val = var_n_hex_number; /* _n_hex_number on <self:AHexIntExpr> */
if (var_n_hex_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6404);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_hex_number,self) on <var_n_hex_number:nullable THexNumber> */
if (unlikely(var_n_hex_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_hex_number->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_hex_number:nullable THexNumber> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AHexIntExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6411);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6412);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6416);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AHexIntExpr> */
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
/* method parser_prod#AHexIntExpr#visit_all for (self: AHexIntExpr, Visitor) */
void nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : THexNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6435);
fatal_exit(1);
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
/* method parser_prod#ABinIntExpr#init_abinintexpr for (self: ABinIntExpr, nullable TBinNumber, nullable AAnnotations) */
void nit__parser_prod___ABinIntExpr___init_abinintexpr(val* self, val* p0, val* p1) {
val* var_n_bin_number /* var n_bin_number: nullable TBinNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ABinIntExpr> */
RET_LABEL1:(void)0;
}
}
var_n_bin_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_bin_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6445);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinIntExpr___n_bin_number].val = var_n_bin_number; /* _n_bin_number on <self:ABinIntExpr> */
if (var_n_bin_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6446);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_bin_number,self) on <var_n_bin_number:nullable TBinNumber> */
if (unlikely(var_n_bin_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_bin_number->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_bin_number:nullable TBinNumber> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ABinIntExpr> */
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
/* method parser_prod#ABinIntExpr#replace_child for (self: ABinIntExpr, ANode, nullable ANode) */
void nit__parser_prod___ABinIntExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TBinNumber */;
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
var = self->attrs[COLOR_nit__parser_nodes__ABinIntExpr___n_bin_number].val; /* _n_bin_number on <self:ABinIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6453);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TBinNumber> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TBinNumber> */
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
/* <var_new_child:nullable ANode> isa TBinNumber */
cltype = type_nit__TBinNumber.color;
idtype = type_nit__TBinNumber.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TBinNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6454);
fatal_exit(1);
}
{
nit__parser_prod___ABinIntExpr___n_bin_number_61d(self, var_new_child); /* Direct call parser_prod#ABinIntExpr#n_bin_number= on <self:ABinIntExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ABinIntExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6458);
fatal_exit(1);
}
{
nit__parser_prod___ABinIntExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ABinIntExpr#n_annotations= on <self:ABinIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABinIntExpr#n_bin_number= for (self: ABinIntExpr, TBinNumber) */
void nit__parser_prod___ABinIntExpr___n_bin_number_61d(val* self, val* p0) {
val* var_node /* var node: TBinNumber */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinIntExpr___n_bin_number].val = var_node; /* _n_bin_number on <self:ABinIntExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TBinNumber> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TBinNumber> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABinIntExpr#n_annotations= for (self: ABinIntExpr, nullable AAnnotations) */
void nit__parser_prod___ABinIntExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ABinIntExpr> */
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
/* method parser_prod#ABinIntExpr#visit_all for (self: ABinIntExpr, Visitor) */
void nit__parser_prod___ABinIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TBinNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinIntExpr___n_bin_number].val; /* _n_bin_number on <self:ABinIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6477);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ABinIntExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOctIntExpr#init_aoctintexpr for (self: AOctIntExpr, nullable TOctNumber, nullable AAnnotations) */
void nit__parser_prod___AOctIntExpr___init_aoctintexpr(val* self, val* p0, val* p1) {
val* var_n_oct_number /* var n_oct_number: nullable TOctNumber */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AOctIntExpr> */
RET_LABEL1:(void)0;
}
}
var_n_oct_number = p0;
var_n_annotations = p1;
if (unlikely(var_n_oct_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6487);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOctIntExpr___n_oct_number].val = var_n_oct_number; /* _n_oct_number on <self:AOctIntExpr> */
if (var_n_oct_number == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6488);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_oct_number,self) on <var_n_oct_number:nullable TOctNumber> */
if (unlikely(var_n_oct_number == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_oct_number->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_oct_number:nullable TOctNumber> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOctIntExpr> */
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
/* method parser_prod#AOctIntExpr#replace_child for (self: AOctIntExpr, ANode, nullable ANode) */
void nit__parser_prod___AOctIntExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOctNumber */;
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
var = self->attrs[COLOR_nit__parser_nodes__AOctIntExpr___n_oct_number].val; /* _n_oct_number on <self:AOctIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6495);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TOctNumber> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TOctNumber> */
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
/* <var_new_child:nullable ANode> isa TOctNumber */
cltype = type_nit__TOctNumber.color;
idtype = type_nit__TOctNumber.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOctNumber", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6496);
fatal_exit(1);
}
{
nit__parser_prod___AOctIntExpr___n_oct_number_61d(self, var_new_child); /* Direct call parser_prod#AOctIntExpr#n_oct_number= on <self:AOctIntExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOctIntExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6500);
fatal_exit(1);
}
{
nit__parser_prod___AOctIntExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AOctIntExpr#n_annotations= on <self:AOctIntExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOctIntExpr#n_oct_number= for (self: AOctIntExpr, TOctNumber) */
void nit__parser_prod___AOctIntExpr___n_oct_number_61d(val* self, val* p0) {
val* var_node /* var node: TOctNumber */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOctIntExpr___n_oct_number].val = var_node; /* _n_oct_number on <self:AOctIntExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOctNumber> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOctNumber> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOctIntExpr#n_annotations= for (self: AOctIntExpr, nullable AAnnotations) */
void nit__parser_prod___AOctIntExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOctIntExpr> */
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
/* method parser_prod#AOctIntExpr#visit_all for (self: AOctIntExpr, Visitor) */
void nit__parser_prod___AOctIntExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOctNumber */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOctIntExpr___n_oct_number].val; /* _n_oct_number on <self:AOctIntExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6519);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOctIntExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADecByteExpr#init_adecbyteexpr for (self: ADecByteExpr, nullable TBytenum, nullable AAnnotations) */
void nit__parser_prod___ADecByteExpr___init_adecbyteexpr(val* self, val* p0, val* p1) {
val* var_n_bytenum /* var n_bytenum: nullable TBytenum */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ADecByteExpr> */
RET_LABEL1:(void)0;
}
}
var_n_bytenum = p0;
var_n_annotations = p1;
if (unlikely(var_n_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6529);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADecByteExpr___n_bytenum].val = var_n_bytenum; /* _n_bytenum on <self:ADecByteExpr> */
if (var_n_bytenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6530);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_bytenum,self) on <var_n_bytenum:nullable TBytenum> */
if (unlikely(var_n_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_bytenum->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_bytenum:nullable TBytenum> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ADecByteExpr> */
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
/* method parser_prod#ADecByteExpr#replace_child for (self: ADecByteExpr, ANode, nullable ANode) */
void nit__parser_prod___ADecByteExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TBytenum */;
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
var = self->attrs[COLOR_nit__parser_nodes__ADecByteExpr___n_bytenum].val; /* _n_bytenum on <self:ADecByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6537);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TBytenum> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TBytenum> */
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
/* <var_new_child:nullable ANode> isa TBytenum */
cltype = type_nit__TBytenum.color;
idtype = type_nit__TBytenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TBytenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6538);
fatal_exit(1);
}
{
nit__parser_prod___ADecByteExpr___n_bytenum_61d(self, var_new_child); /* Direct call parser_prod#ADecByteExpr#n_bytenum= on <self:ADecByteExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecByteExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6542);
fatal_exit(1);
}
{
nit__parser_prod___ADecByteExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ADecByteExpr#n_annotations= on <self:ADecByteExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADecByteExpr#n_bytenum= for (self: ADecByteExpr, TBytenum) */
void nit__parser_prod___ADecByteExpr___n_bytenum_61d(val* self, val* p0) {
val* var_node /* var node: TBytenum */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADecByteExpr___n_bytenum].val = var_node; /* _n_bytenum on <self:ADecByteExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TBytenum> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TBytenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADecByteExpr#n_annotations= for (self: ADecByteExpr, nullable AAnnotations) */
void nit__parser_prod___ADecByteExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ADecByteExpr> */
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
/* method parser_prod#ADecByteExpr#visit_all for (self: ADecByteExpr, Visitor) */
void nit__parser_prod___ADecByteExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TBytenum */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADecByteExpr___n_bytenum].val; /* _n_bytenum on <self:ADecByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6561);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADecByteExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AHexByteExpr#init_ahexbyteexpr for (self: AHexByteExpr, nullable THexBytenum, nullable AAnnotations) */
void nit__parser_prod___AHexByteExpr___init_ahexbyteexpr(val* self, val* p0, val* p1) {
val* var_n_hex_bytenum /* var n_hex_bytenum: nullable THexBytenum */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AHexByteExpr> */
RET_LABEL1:(void)0;
}
}
var_n_hex_bytenum = p0;
var_n_annotations = p1;
if (unlikely(var_n_hex_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6571);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AHexByteExpr___n_hex_bytenum].val = var_n_hex_bytenum; /* _n_hex_bytenum on <self:AHexByteExpr> */
if (var_n_hex_bytenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6572);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_hex_bytenum,self) on <var_n_hex_bytenum:nullable THexBytenum> */
if (unlikely(var_n_hex_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_hex_bytenum->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_hex_bytenum:nullable THexBytenum> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AHexByteExpr> */
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
/* method parser_prod#AHexByteExpr#replace_child for (self: AHexByteExpr, ANode, nullable ANode) */
void nit__parser_prod___AHexByteExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : THexBytenum */;
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
var = self->attrs[COLOR_nit__parser_nodes__AHexByteExpr___n_hex_bytenum].val; /* _n_hex_bytenum on <self:AHexByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6579);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:THexBytenum> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:THexBytenum> */
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
/* <var_new_child:nullable ANode> isa THexBytenum */
cltype = type_nit__THexBytenum.color;
idtype = type_nit__THexBytenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "THexBytenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6580);
fatal_exit(1);
}
{
nit__parser_prod___AHexByteExpr___n_hex_bytenum_61d(self, var_new_child); /* Direct call parser_prod#AHexByteExpr#n_hex_bytenum= on <self:AHexByteExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexByteExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6584);
fatal_exit(1);
}
{
nit__parser_prod___AHexByteExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AHexByteExpr#n_annotations= on <self:AHexByteExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AHexByteExpr#n_hex_bytenum= for (self: AHexByteExpr, THexBytenum) */
void nit__parser_prod___AHexByteExpr___n_hex_bytenum_61d(val* self, val* p0) {
val* var_node /* var node: THexBytenum */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AHexByteExpr___n_hex_bytenum].val = var_node; /* _n_hex_bytenum on <self:AHexByteExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:THexBytenum> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:THexBytenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AHexByteExpr#n_annotations= for (self: AHexByteExpr, nullable AAnnotations) */
void nit__parser_prod___AHexByteExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AHexByteExpr> */
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
/* method parser_prod#AHexByteExpr#visit_all for (self: AHexByteExpr, Visitor) */
void nit__parser_prod___AHexByteExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : THexBytenum */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AHexByteExpr___n_hex_bytenum].val; /* _n_hex_bytenum on <self:AHexByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6603);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AHexByteExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABinByteExpr#init_abinbyteexpr for (self: ABinByteExpr, nullable TBinBytenum, nullable AAnnotations) */
void nit__parser_prod___ABinByteExpr___init_abinbyteexpr(val* self, val* p0, val* p1) {
val* var_n_bin_bytenum /* var n_bin_bytenum: nullable TBinBytenum */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ABinByteExpr> */
RET_LABEL1:(void)0;
}
}
var_n_bin_bytenum = p0;
var_n_annotations = p1;
if (unlikely(var_n_bin_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6613);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABinByteExpr___n_bin_bytenum].val = var_n_bin_bytenum; /* _n_bin_bytenum on <self:ABinByteExpr> */
if (var_n_bin_bytenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6614);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_bin_bytenum,self) on <var_n_bin_bytenum:nullable TBinBytenum> */
if (unlikely(var_n_bin_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_bin_bytenum->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_bin_bytenum:nullable TBinBytenum> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ABinByteExpr> */
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
/* method parser_prod#ABinByteExpr#replace_child for (self: ABinByteExpr, ANode, nullable ANode) */
void nit__parser_prod___ABinByteExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TBinBytenum */;
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
var = self->attrs[COLOR_nit__parser_nodes__ABinByteExpr___n_bin_bytenum].val; /* _n_bin_bytenum on <self:ABinByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6621);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TBinBytenum> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TBinBytenum> */
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
/* <var_new_child:nullable ANode> isa TBinBytenum */
cltype = type_nit__TBinBytenum.color;
idtype = type_nit__TBinBytenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TBinBytenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6622);
fatal_exit(1);
}
{
nit__parser_prod___ABinByteExpr___n_bin_bytenum_61d(self, var_new_child); /* Direct call parser_prod#ABinByteExpr#n_bin_bytenum= on <self:ABinByteExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ABinByteExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6626);
fatal_exit(1);
}
{
nit__parser_prod___ABinByteExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ABinByteExpr#n_annotations= on <self:ABinByteExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABinByteExpr#n_bin_bytenum= for (self: ABinByteExpr, TBinBytenum) */
void nit__parser_prod___ABinByteExpr___n_bin_bytenum_61d(val* self, val* p0) {
val* var_node /* var node: TBinBytenum */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ABinByteExpr___n_bin_bytenum].val = var_node; /* _n_bin_bytenum on <self:ABinByteExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TBinBytenum> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TBinBytenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABinByteExpr#n_annotations= for (self: ABinByteExpr, nullable AAnnotations) */
void nit__parser_prod___ABinByteExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ABinByteExpr> */
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
/* method parser_prod#ABinByteExpr#visit_all for (self: ABinByteExpr, Visitor) */
void nit__parser_prod___ABinByteExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TBinBytenum */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ABinByteExpr___n_bin_bytenum].val; /* _n_bin_bytenum on <self:ABinByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6645);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ABinByteExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AOctByteExpr#init_aoctbyteexpr for (self: AOctByteExpr, nullable TOctBytenum, nullable AAnnotations) */
void nit__parser_prod___AOctByteExpr___init_aoctbyteexpr(val* self, val* p0, val* p1) {
val* var_n_oct_bytenum /* var n_oct_bytenum: nullable TOctBytenum */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AOctByteExpr> */
RET_LABEL1:(void)0;
}
}
var_n_oct_bytenum = p0;
var_n_annotations = p1;
if (unlikely(var_n_oct_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6655);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AOctByteExpr___n_oct_bytenum].val = var_n_oct_bytenum; /* _n_oct_bytenum on <self:AOctByteExpr> */
if (var_n_oct_bytenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6656);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_oct_bytenum,self) on <var_n_oct_bytenum:nullable TOctBytenum> */
if (unlikely(var_n_oct_bytenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_oct_bytenum->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_oct_bytenum:nullable TOctBytenum> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AOctByteExpr> */
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
/* method parser_prod#AOctByteExpr#replace_child for (self: AOctByteExpr, ANode, nullable ANode) */
void nit__parser_prod___AOctByteExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TOctBytenum */;
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
var = self->attrs[COLOR_nit__parser_nodes__AOctByteExpr___n_oct_bytenum].val; /* _n_oct_bytenum on <self:AOctByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6663);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TOctBytenum> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TOctBytenum> */
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
/* <var_new_child:nullable ANode> isa TOctBytenum */
cltype = type_nit__TOctBytenum.color;
idtype = type_nit__TOctBytenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TOctBytenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6664);
fatal_exit(1);
}
{
nit__parser_prod___AOctByteExpr___n_oct_bytenum_61d(self, var_new_child); /* Direct call parser_prod#AOctByteExpr#n_oct_bytenum= on <self:AOctByteExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOctByteExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6668);
fatal_exit(1);
}
{
nit__parser_prod___AOctByteExpr___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AOctByteExpr#n_annotations= on <self:AOctByteExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AOctByteExpr#n_oct_bytenum= for (self: AOctByteExpr, TOctBytenum) */
void nit__parser_prod___AOctByteExpr___n_oct_bytenum_61d(val* self, val* p0) {
val* var_node /* var node: TOctBytenum */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AOctByteExpr___n_oct_bytenum].val = var_node; /* _n_oct_bytenum on <self:AOctByteExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOctBytenum> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOctBytenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AOctByteExpr#n_annotations= for (self: AOctByteExpr, nullable AAnnotations) */
void nit__parser_prod___AOctByteExpr___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AOctByteExpr> */
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
/* method parser_prod#AOctByteExpr#visit_all for (self: AOctByteExpr, Visitor) */
void nit__parser_prod___AOctByteExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOctBytenum */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AOctByteExpr___n_oct_bytenum].val; /* _n_oct_bytenum on <self:AOctByteExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6687);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AOctByteExpr> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void nit__parser_prod___AFloatExpr___init_afloatexpr(val* self, val* p0, val* p1) {
val* var_n_float /* var n_float: nullable TFloat */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AFloatExpr> */
RET_LABEL1:(void)0;
}
}
var_n_float = p0;
var_n_annotations = p1;
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6697);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6698);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_float,self) on <var_n_float:nullable TFloat> */
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_float->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_float:nullable TFloat> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFloatExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6705);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6706);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6710);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFloatExpr> */
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
/* method parser_prod#AFloatExpr#visit_all for (self: AFloatExpr, Visitor) */
void nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6729);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ACharExpr> */
RET_LABEL1:(void)0;
}
}
var_n_char = p0;
var_n_annotations = p1;
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6739);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6740);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_char,self) on <var_n_char:nullable TChar> */
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_char->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_char:nullable TChar> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ACharExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6747);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6748);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6752);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ACharExpr> */
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
/* method parser_prod#ACharExpr#visit_all for (self: ACharExpr, Visitor) */
void nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6771);
fatal_exit(1);
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
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
var_n_annotations = p1;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6781);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6782);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TString> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStringExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6789);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6790);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6794);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStringExpr> */
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
/* method parser_prod#AStringExpr#visit_all for (self: AStringExpr, Visitor) */
void nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6813);
fatal_exit(1);
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
{
{ /* Inline kernel#Object#init (self) on <self:AStartStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6822);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6823);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TStartString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TStartString> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6828);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6829);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6843);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void nit__parser_prod___AMidStringExpr___init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
{
{ /* Inline kernel#Object#init (self) on <self:AMidStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6851);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6852);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TMidString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TMidString> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6857);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6858);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6872);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void nit__parser_prod___AEndStringExpr___init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
{
{ /* Inline kernel#Object#init (self) on <self:AEndStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6880);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6881);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TEndString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TEndString> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6886);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6887);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6901);
fatal_exit(1);
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
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:ASuperstringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
var_n_annotations = p1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2626);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2626);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6919);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperstringExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2626);
fatal_exit(1);
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
short int var /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AParExpr> */
RET_LABEL1:(void)0;
}
}
var_n_opar = p0;
var_n_expr = p1;
var_n_cpar = p2;
var_n_annotations = p3;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6945);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6946);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6947);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6948);
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
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6949);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6950);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParExpr> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6957);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6958);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6961);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6962);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6965);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6966);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6970);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 6999);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7000);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7001);
fatal_exit(1);
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
{ /* Inline kernel#Object#init (self) on <self:AAsCastExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_kwas = p1;
var_n_opar = p2;
var_n_type = p3;
var_n_cpar = p4;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7014);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7015);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7016);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7017);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwas->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsCastExpr> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7020);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7021);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsCastExpr> */
if (var_n_cpar == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL15:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7028);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7029);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7032);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7033);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7037);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7040);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7041);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7045);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsCastExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsCastExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TCpar(TCpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7079);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7080);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7082);
fatal_exit(1);
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
{ /* Inline kernel#Object#init (self) on <self:AAsNotnullExpr> */
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
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7096);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7097);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7098);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7099);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwas->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_n_opar; /* _n_opar on <self:AAsNotnullExpr> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7102);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7103);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwnot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL9:(void)0;
}
}
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7104);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7105);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwnull->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnull:nullable TKwnull> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_n_cpar == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7112);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7113);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7116);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7117);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7121);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7124);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7125);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7128);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7129);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7133);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var_node; /* _n_opar on <self:AAsNotnullExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var_node; /* _n_cpar on <self:AAsNotnullExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TCpar(TCpar)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7172);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7173);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7175);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7176);
fatal_exit(1);
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
{
{ /* Inline kernel#Object#init (self) on <self:AIssetAttrExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwisset = p0;
var_n_expr = p1;
var_n_id = p2;
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7187);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7188);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwisset,self) on <var_n_kwisset:nullable TKwisset> */
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwisset->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwisset:nullable TKwisset> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7189);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7190);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7191);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7192);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL4:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7197);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7198);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7201);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7202);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7205);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7206);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7230);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7231);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7232);
fatal_exit(1);
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
{
{ /* Inline kernel#Object#init (self) on <self:ADebugTypeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwdebug = p0;
var_n_kwtype = p1;
var_n_expr = p2;
var_n_type = p3;
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7243);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7244);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdebug,self) on <var_n_kwdebug:nullable TKwdebug> */
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwdebug->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdebug:nullable TKwdebug> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7245);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7246);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwtype->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7247);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7248);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7249);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7250);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7255);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7256);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7259);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7260);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7263);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7264);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7267);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7268);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7297);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7298);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7299);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7300);
fatal_exit(1);
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
{
{ /* Inline kernel#Object#init (self) on <self:AVarargExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_dotdotdot = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7309);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVarargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7310);
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
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7311);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AVarargExpr> */
if (var_n_dotdotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7312);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot> */
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_dotdotdot->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot> */
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7317);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7318);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7321);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7322);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7341);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7342);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#init_anamedargexpr for (self: ANamedargExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nit__parser_prod___ANamedargExpr___init_anamedargexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel#Object#init (self) on <self:ANamedargExpr> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign = p1;
var_n_expr = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7352);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val = var_n_id; /* _n_id on <self:ANamedargExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7353);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7354);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ANamedargExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7355);
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
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7356);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANamedargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7357);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#replace_child for (self: ANamedargExpr, ANode, nullable ANode) */
void nit__parser_prod___ANamedargExpr___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7362);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7363);
fatal_exit(1);
}
{
nit__parser_prod___ANamedargExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#ANamedargExpr#n_id= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7366);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7367);
fatal_exit(1);
}
{
nit__parser_prod___ANamedargExpr___n_assign_61d(self, var_new_child); /* Direct call parser_prod#ANamedargExpr#n_assign= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7370);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7371);
fatal_exit(1);
}
{
nit__parser_prod___ANamedargExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANamedargExpr#n_expr= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_id= for (self: ANamedargExpr, TId) */
void nit__parser_prod___ANamedargExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val = var_node; /* _n_id on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_assign= for (self: ANamedargExpr, TAssign) */
void nit__parser_prod___ANamedargExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val = var_node; /* _n_assign on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_expr= for (self: ANamedargExpr, AExpr) */
void nit__parser_prod___ANamedargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val = var_node; /* _n_expr on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#visit_all for (self: ANamedargExpr, Visitor) */
void nit__parser_prod___ANamedargExpr___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7395);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7396);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7397);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#init_atypeexpr for (self: ATypeExpr, nullable AType) */
void nit__parser_prod___ATypeExpr___init_atypeexpr(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel#Object#init (self) on <self:ATypeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7405);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypeExpr___n_type].val = var_n_type; /* _n_type on <self:ATypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7406);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7411);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7412);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7426);
fatal_exit(1);
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
{
{ /* Inline kernel#Object#init (self) on <self:AMethidExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_id = p1;
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7435);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMethidExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7436);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7437);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val = var_n_id; /* _n_id on <self:AMethidExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7438);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable AMethid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable AMethid> */
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7443);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7444);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7447);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7448);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7467);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7468);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#init_aatexpr for (self: AAtExpr, nullable AAnnotations) */
void nit__parser_prod___AAtExpr___init_aatexpr(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
{
{ /* Inline kernel#Object#init (self) on <self:AAtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_annotations = p0;
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7476);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtExpr> */
if (var_n_annotations == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7477);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations> */
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7483);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7491);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
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
val* var3 /* : ANodes[AExpr] */;
{
{ /* Inline kernel#Object#init (self) on <self:AManyExpr> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
{
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:AManyExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2717);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2717);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2717);
fatal_exit(1);
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
val* var3 /* : ANodes[AExpr] */;
{
{ /* Inline kernel#Object#init (self) on <self:AListExprs> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
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
val* var4 /* : ANodes[AExpr] */;
{
{ /* Inline kernel#Object#init (self) on <self:AParExprs> */
RET_LABEL1:(void)0;
}
}
var_n_opar = p0;
var_n_exprs = p1;
var_n_cpar = p2;
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7547);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7548);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_opar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var4 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7550);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7551);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_cpar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7557);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
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
var11 = self->attrs[COLOR_nit__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7561);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7562);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7581);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7583);
fatal_exit(1);
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
val* var4 /* : ANodes[AExpr] */;
{
{ /* Inline kernel#Object#init (self) on <self:ABraExprs> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_exprs = p1;
var_n_cbra = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7593);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7594);
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
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var4 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7596);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7597);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7602);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7603);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
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
var11 = self->attrs[COLOR_nit__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7607);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7608);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7627);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7629);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void nit__parser_prod___APlusAssignOp___init_aplusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPluseq */;
{
{ /* Inline kernel#Object#init (self) on <self:APlusAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7637);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APlusAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7638);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPluseq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPluseq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7643);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7644);
fatal_exit(1);
}
{
nit__parser_prod___APlusAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#APlusAssignOp#n_op= on <self:APlusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_op= for (self: APlusAssignOp, Token) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APlusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: APlusAssignOp, Visitor) */
void nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7658);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void nit__parser_prod___AMinusAssignOp___init_aminusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TMinuseq */;
{
{ /* Inline kernel#Object#init (self) on <self:AMinusAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7666);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AMinusAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7667);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TMinuseq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TMinuseq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7672);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7673);
fatal_exit(1);
}
{
nit__parser_prod___AMinusAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AMinusAssignOp#n_op= on <self:AMinusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_op= for (self: AMinusAssignOp, Token) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AMinusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: AMinusAssignOp, Visitor) */
void nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7687);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#init_astarassignop for (self: AStarAssignOp, nullable TStareq) */
void nit__parser_prod___AStarAssignOp___init_astarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStareq */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7695);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7696);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStareq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStareq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#replace_child for (self: AStarAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AStarAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7701);
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
/* <var_new_child:nullable ANode> isa TStareq */
cltype = type_nit__TStareq.color;
idtype = type_nit__TStareq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7702);
fatal_exit(1);
}
{
nit__parser_prod___AStarAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarAssignOp#n_op= on <self:AStarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#n_op= for (self: AStarAssignOp, Token) */
void nit__parser_prod___AStarAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#visit_all for (self: AStarAssignOp, Visitor) */
void nit__parser_prod___AStarAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7716);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#init_aslashassignop for (self: ASlashAssignOp, nullable TSlasheq) */
void nit__parser_prod___ASlashAssignOp___init_aslashassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TSlasheq */;
{
{ /* Inline kernel#Object#init (self) on <self:ASlashAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7724);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ASlashAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7725);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TSlasheq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TSlasheq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#replace_child for (self: ASlashAssignOp, ANode, nullable ANode) */
void nit__parser_prod___ASlashAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7730);
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
/* <var_new_child:nullable ANode> isa TSlasheq */
cltype = type_nit__TSlasheq.color;
idtype = type_nit__TSlasheq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7731);
fatal_exit(1);
}
{
nit__parser_prod___ASlashAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#ASlashAssignOp#n_op= on <self:ASlashAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#n_op= for (self: ASlashAssignOp, Token) */
void nit__parser_prod___ASlashAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ASlashAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#visit_all for (self: ASlashAssignOp, Visitor) */
void nit__parser_prod___ASlashAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7745);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#init_apercentassignop for (self: APercentAssignOp, nullable TPercenteq) */
void nit__parser_prod___APercentAssignOp___init_apercentassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPercenteq */;
{
{ /* Inline kernel#Object#init (self) on <self:APercentAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7753);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APercentAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7754);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPercenteq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPercenteq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#replace_child for (self: APercentAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APercentAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7759);
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
/* <var_new_child:nullable ANode> isa TPercenteq */
cltype = type_nit__TPercenteq.color;
idtype = type_nit__TPercenteq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7760);
fatal_exit(1);
}
{
nit__parser_prod___APercentAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#APercentAssignOp#n_op= on <self:APercentAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#n_op= for (self: APercentAssignOp, Token) */
void nit__parser_prod___APercentAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APercentAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#visit_all for (self: APercentAssignOp, Visitor) */
void nit__parser_prod___APercentAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7774);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#init_astarstarassignop for (self: AStarstarAssignOp, nullable TStarstareq) */
void nit__parser_prod___AStarstarAssignOp___init_astarstarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarstareq */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarstarAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7782);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarstarAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7783);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStarstareq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarstareq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#replace_child for (self: AStarstarAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7788);
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
/* <var_new_child:nullable ANode> isa TStarstareq */
cltype = type_nit__TStarstareq.color;
idtype = type_nit__TStarstareq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7789);
fatal_exit(1);
}
{
nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarstarAssignOp#n_op= on <self:AStarstarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#n_op= for (self: AStarstarAssignOp, Token) */
void nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarstarAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#visit_all for (self: AStarstarAssignOp, Visitor) */
void nit__parser_prod___AStarstarAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7803);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#init_apipeassignop for (self: APipeAssignOp, nullable TPipeeq) */
void nit__parser_prod___APipeAssignOp___init_apipeassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPipeeq */;
{
{ /* Inline kernel#Object#init (self) on <self:APipeAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7811);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APipeAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7812);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPipeeq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPipeeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#replace_child for (self: APipeAssignOp, ANode, nullable ANode) */
void nit__parser_prod___APipeAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7817);
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
/* <var_new_child:nullable ANode> isa TPipeeq */
cltype = type_nit__TPipeeq.color;
idtype = type_nit__TPipeeq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7818);
fatal_exit(1);
}
{
nit__parser_prod___APipeAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#APipeAssignOp#n_op= on <self:APipeAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#n_op= for (self: APipeAssignOp, Token) */
void nit__parser_prod___APipeAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APipeAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#visit_all for (self: APipeAssignOp, Visitor) */
void nit__parser_prod___APipeAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7832);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#init_acaretassignop for (self: ACaretAssignOp, nullable TCareteq) */
void nit__parser_prod___ACaretAssignOp___init_acaretassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TCareteq */;
{
{ /* Inline kernel#Object#init (self) on <self:ACaretAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7840);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ACaretAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7841);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TCareteq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TCareteq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#replace_child for (self: ACaretAssignOp, ANode, nullable ANode) */
void nit__parser_prod___ACaretAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7846);
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
/* <var_new_child:nullable ANode> isa TCareteq */
cltype = type_nit__TCareteq.color;
idtype = type_nit__TCareteq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7847);
fatal_exit(1);
}
{
nit__parser_prod___ACaretAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#ACaretAssignOp#n_op= on <self:ACaretAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#n_op= for (self: ACaretAssignOp, Token) */
void nit__parser_prod___ACaretAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ACaretAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#visit_all for (self: ACaretAssignOp, Visitor) */
void nit__parser_prod___ACaretAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7861);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#init_aampassignop for (self: AAmpAssignOp, nullable TAmpeq) */
void nit__parser_prod___AAmpAssignOp___init_aampassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TAmpeq */;
{
{ /* Inline kernel#Object#init (self) on <self:AAmpAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7869);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AAmpAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7870);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TAmpeq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TAmpeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#replace_child for (self: AAmpAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AAmpAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7875);
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
/* <var_new_child:nullable ANode> isa TAmpeq */
cltype = type_nit__TAmpeq.color;
idtype = type_nit__TAmpeq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7876);
fatal_exit(1);
}
{
nit__parser_prod___AAmpAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AAmpAssignOp#n_op= on <self:AAmpAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#n_op= for (self: AAmpAssignOp, Token) */
void nit__parser_prod___AAmpAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AAmpAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#visit_all for (self: AAmpAssignOp, Visitor) */
void nit__parser_prod___AAmpAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7890);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#init_allassignop for (self: ALlAssignOp, nullable TLleq) */
void nit__parser_prod___ALlAssignOp___init_allassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLleq */;
{
{ /* Inline kernel#Object#init (self) on <self:ALlAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7898);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ALlAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7899);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TLleq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLleq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#replace_child for (self: ALlAssignOp, ANode, nullable ANode) */
void nit__parser_prod___ALlAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7904);
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
/* <var_new_child:nullable ANode> isa TLleq */
cltype = type_nit__TLleq.color;
idtype = type_nit__TLleq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7905);
fatal_exit(1);
}
{
nit__parser_prod___ALlAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#ALlAssignOp#n_op= on <self:ALlAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#n_op= for (self: ALlAssignOp, Token) */
void nit__parser_prod___ALlAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ALlAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#visit_all for (self: ALlAssignOp, Visitor) */
void nit__parser_prod___ALlAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7919);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#init_aggassignop for (self: AGgAssignOp, nullable TGgeq) */
void nit__parser_prod___AGgAssignOp___init_aggassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGgeq */;
{
{ /* Inline kernel#Object#init (self) on <self:AGgAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7927);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AGgAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7928);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TGgeq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGgeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#replace_child for (self: AGgAssignOp, ANode, nullable ANode) */
void nit__parser_prod___AGgAssignOp___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7933);
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
/* <var_new_child:nullable ANode> isa TGgeq */
cltype = type_nit__TGgeq.color;
idtype = type_nit__TGgeq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7934);
fatal_exit(1);
}
{
nit__parser_prod___AGgAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AGgAssignOp#n_op= on <self:AGgAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#n_op= for (self: AGgAssignOp, Token) */
void nit__parser_prod___AGgAssignOp___nit__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AGgAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#visit_all for (self: AGgAssignOp, Visitor) */
void nit__parser_prod___AGgAssignOp___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7948);
fatal_exit(1);
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
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : ANodes[TId] */;
val* var9 /* : ANodes[TId] */;
{
{ /* Inline kernel#Object#init (self) on <self:AModuleName> */
RET_LABEL1:(void)0;
}
}
var_n_quad = p0;
var_n_path = p1;
var_n_id = p2;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var_n_quad; /* _n_quad on <self:AModuleName> */
if (var_n_quad == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_quad,((val*)NULL)) on <var_n_quad:nullable TQuad> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_quad->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_quad, var_other); /* == on <var_n_quad:nullable TQuad(TQuad)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2897);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7961);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7962);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7968);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2897);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7972);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7973);
fatal_exit(1);
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
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var_node; /* _n_quad on <self:AModuleName> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TQuad> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TQuad(TQuad)>*/
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TQuad(TQuad)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TQuad(TQuad)> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2897);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 7994);
fatal_exit(1);
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
val* var4 /* : ANodes[AExternCall] */;
{
{ /* Inline kernel#Object#init (self) on <self:AExternCalls> */
RET_LABEL1:(void)0;
}
}
var_n_kwimport = p0;
var_n_extern_calls = p1;
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8003);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8004);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwimport->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var4 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1415);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8010);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8011);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1415);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8026);
fatal_exit(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1415);
fatal_exit(1);
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
{
{ /* Inline kernel#Object#init (self) on <self:ASuperExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_kwsuper = p0;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8050);
fatal_exit(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8051);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwsuper->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL2:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8056);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 8057);
fatal_exit(1);
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
