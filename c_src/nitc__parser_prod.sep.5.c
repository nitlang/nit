#include "nitc__parser_prod.sep.0.h"
/* method parser_prod#ATrueExpr#replace_child for (self: ATrueExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6301);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6302);
fatal_exit(1);
}
{
nitc__parser_prod___ATrueExpr___n_kwtrue_61d(self, var_new_child); /* Direct call parser_prod#ATrueExpr#n_kwtrue= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6306);
fatal_exit(1);
}
{
nitc__parser_prod___ATrueExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ATrueExpr#n_annotations= on <self:ATrueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void nitc__parser_prod___ATrueExpr___n_kwtrue_61d(val* self, val* p0) {
val* var_node /* var node: TKwtrue */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATrueExpr___n_kwtrue].val = var_node; /* _n_kwtrue on <self:ATrueExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtrue> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtrue> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#n_annotations= for (self: ATrueExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATrueExpr#visit_all for (self: ATrueExpr, Visitor) */
void nitc__parser_prod___ATrueExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwtrue */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtrue");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6325);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATrueExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#init_afalseexpr for (self: AFalseExpr, nullable TKwfalse, nullable AAnnotations) */
void nitc__parser_prod___AFalseExpr___init_afalseexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6335);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val = var_n_kwfalse; /* _n_kwfalse on <self:AFalseExpr> */
if (var_n_kwfalse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6336);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwfalse,self) on <var_n_kwfalse:nullable TKwfalse> */
if (unlikely(var_n_kwfalse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#replace_child for (self: AFalseExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6343);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6344);
fatal_exit(1);
}
{
nitc__parser_prod___AFalseExpr___n_kwfalse_61d(self, var_new_child); /* Direct call parser_prod#AFalseExpr#n_kwfalse= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6348);
fatal_exit(1);
}
{
nitc__parser_prod___AFalseExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFalseExpr#n_annotations= on <self:AFalseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void nitc__parser_prod___AFalseExpr___n_kwfalse_61d(val* self, val* p0) {
val* var_node /* var node: TKwfalse */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val = var_node; /* _n_kwfalse on <self:AFalseExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwfalse> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfalse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#n_annotations= for (self: AFalseExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFalseExpr#visit_all for (self: AFalseExpr, Visitor) */
void nitc__parser_prod___AFalseExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwfalse */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfalse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6367);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFalseExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#init_anullexpr for (self: ANullExpr, nullable TKwnull, nullable AAnnotations) */
void nitc__parser_prod___ANullExpr___init_anullexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6377);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:ANullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6378);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#replace_child for (self: ANullExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6385);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6386);
fatal_exit(1);
}
{
nitc__parser_prod___ANullExpr___n_kwnull_61d(self, var_new_child); /* Direct call parser_prod#ANullExpr#n_kwnull= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6390);
fatal_exit(1);
}
{
nitc__parser_prod___ANullExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ANullExpr#n_annotations= on <self:ANullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void nitc__parser_prod___ANullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:ANullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#n_annotations= for (self: ANullExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANullExpr#visit_all for (self: ANullExpr, Visitor) */
void nitc__parser_prod___ANullExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnull */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6409);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ANullExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIntegerExpr#init_aintegerexpr for (self: AIntegerExpr, nullable TInteger, nullable AAnnotations) */
void nitc__parser_prod___AIntegerExpr___init_aintegerexpr(val* self, val* p0, val* p1) {
val* var_n_integer /* var n_integer: nullable TInteger */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:AIntegerExpr> */
RET_LABEL1:(void)0;
}
}
var_n_integer = p0;
var_n_annotations = p1;
if (unlikely(var_n_integer == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6419);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val = var_n_integer; /* _n_integer on <self:AIntegerExpr> */
if (var_n_integer == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6420);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_integer,self) on <var_n_integer:nullable TInteger> */
if (unlikely(var_n_integer == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntegerExpr#replace_child for (self: AIntegerExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6427);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TInteger> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TInteger> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6428);
fatal_exit(1);
}
{
nitc__parser_prod___AIntegerExpr___n_integer_61d(self, var_new_child); /* Direct call parser_prod#AIntegerExpr#n_integer= on <self:AIntegerExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntegerExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6432);
fatal_exit(1);
}
{
nitc__parser_prod___AIntegerExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AIntegerExpr#n_annotations= on <self:AIntegerExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntegerExpr#n_integer= for (self: AIntegerExpr, TInteger) */
void nitc__parser_prod___AIntegerExpr___n_integer_61d(val* self, val* p0) {
val* var_node /* var node: TInteger */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val = var_node; /* _n_integer on <self:AIntegerExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TInteger> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TInteger> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIntegerExpr#n_annotations= for (self: AIntegerExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntegerExpr#visit_all for (self: AIntegerExpr, Visitor) */
void nitc__parser_prod___AIntegerExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TInteger */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6451);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AIntegerExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#init_afloatexpr for (self: AFloatExpr, nullable TFloat, nullable AAnnotations) */
void nitc__parser_prod___AFloatExpr___init_afloatexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6461);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val = var_n_float; /* _n_float on <self:AFloatExpr> */
if (var_n_float == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6462);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_float,self) on <var_n_float:nullable TFloat> */
if (unlikely(var_n_float == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#replace_child for (self: AFloatExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6469);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6470);
fatal_exit(1);
}
{
nitc__parser_prod___AFloatExpr___n_float_61d(self, var_new_child); /* Direct call parser_prod#AFloatExpr#n_float= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6474);
fatal_exit(1);
}
{
nitc__parser_prod___AFloatExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFloatExpr#n_annotations= on <self:AFloatExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void nitc__parser_prod___AFloatExpr___n_float_61d(val* self, val* p0) {
val* var_node /* var node: TFloat */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val = var_node; /* _n_float on <self:AFloatExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TFloat> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TFloat> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#n_annotations= for (self: AFloatExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFloatExpr#visit_all for (self: AFloatExpr, Visitor) */
void nitc__parser_prod___AFloatExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TFloat */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6493);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFloatExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#init_acharexpr for (self: ACharExpr, nullable TChar, nullable AAnnotations) */
void nitc__parser_prod___ACharExpr___init_acharexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6503);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val = var_n_char; /* _n_char on <self:ACharExpr> */
if (var_n_char == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6504);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_char,self) on <var_n_char:nullable TChar> */
if (unlikely(var_n_char == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#replace_child for (self: ACharExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6511);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6512);
fatal_exit(1);
}
{
nitc__parser_prod___ACharExpr___n_char_61d(self, var_new_child); /* Direct call parser_prod#ACharExpr#n_char= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6516);
fatal_exit(1);
}
{
nitc__parser_prod___ACharExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ACharExpr#n_annotations= on <self:ACharExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void nitc__parser_prod___ACharExpr___n_char_61d(val* self, val* p0) {
val* var_node /* var node: TChar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val = var_node; /* _n_char on <self:ACharExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TChar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TChar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#n_annotations= for (self: ACharExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACharExpr#visit_all for (self: ACharExpr, Visitor) */
void nitc__parser_prod___ACharExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TChar */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6535);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ACharExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#init_astringexpr for (self: AStringExpr, nullable TString, nullable AAnnotations) */
void nitc__parser_prod___AStringExpr___init_astringexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6545);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6546);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#replace_child for (self: AStringExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6553);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6554);
fatal_exit(1);
}
{
nitc__parser_prod___AStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AStringExpr#n_string= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6558);
fatal_exit(1);
}
{
nitc__parser_prod___AStringExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStringExpr#n_annotations= on <self:AStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_string= for (self: AStringExpr, Token) */
void nitc__parser_prod___AStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#n_annotations= for (self: AStringExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStringExpr#visit_all for (self: AStringExpr, Visitor) */
void nitc__parser_prod___AStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
val* var1 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6577);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStringExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#init_astartstringexpr for (self: AStartStringExpr, nullable TStartString) */
void nitc__parser_prod___AStartStringExpr___init_astartstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TStartString */;
{
{ /* Inline kernel#Object#init (self) on <self:AStartStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6586);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AStartStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6587);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TStartString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TStartString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#replace_child for (self: AStartStringExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6592);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6593);
fatal_exit(1);
}
{
nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AStartStringExpr#n_string= on <self:AStartStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#n_string= for (self: AStartStringExpr, Token) */
void nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AStartStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStartStringExpr#visit_all for (self: AStartStringExpr, Visitor) */
void nitc__parser_prod___AStartStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6607);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#init_amidstringexpr for (self: AMidStringExpr, nullable TMidString) */
void nitc__parser_prod___AMidStringExpr___init_amidstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TMidString */;
{
{ /* Inline kernel#Object#init (self) on <self:AMidStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6615);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AMidStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6616);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TMidString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TMidString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#replace_child for (self: AMidStringExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6621);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6622);
fatal_exit(1);
}
{
nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AMidStringExpr#n_string= on <self:AMidStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#n_string= for (self: AMidStringExpr, Token) */
void nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AMidStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMidStringExpr#visit_all for (self: AMidStringExpr, Visitor) */
void nitc__parser_prod___AMidStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6636);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#init_aendstringexpr for (self: AEndStringExpr, nullable TEndString) */
void nitc__parser_prod___AEndStringExpr___init_aendstringexpr(val* self, val* p0) {
val* var_n_string /* var n_string: nullable TEndString */;
{
{ /* Inline kernel#Object#init (self) on <self:AEndStringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_string = p0;
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6644);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_n_string; /* _n_string on <self:AEndStringExpr> */
if (var_n_string == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6645);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_string,self) on <var_n_string:nullable TEndString> */
if (unlikely(var_n_string == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_string->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_string:nullable TEndString> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#replace_child for (self: AEndStringExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6650);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6651);
fatal_exit(1);
}
{
nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(self, var_new_child); /* Direct call parser_prod#AEndStringExpr#n_string= on <self:AEndStringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#n_string= for (self: AEndStringExpr, Token) */
void nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val = var_node; /* _n_string on <self:AEndStringExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEndStringExpr#visit_all for (self: AEndStringExpr, Visitor) */
void nitc__parser_prod___AEndStringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6665);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#init_asuperstringexpr for (self: ASuperstringExpr, Collection[Object], nullable AAnnotations) */
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
{ /* Inline kernel#Object#init (self) on <self:ASuperstringExpr> */
RET_LABEL1:(void)0;
}
}
var_n_exprs = p0;
var_n_annotations = p1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2564);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperstringExpr> */
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#replace_child for (self: ASuperstringExpr, ANode, nullable ANode) */
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
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2564);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6683);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperstringExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASuperstringExpr#n_annotations= on <self:ASuperstringExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#n_annotations= for (self: ASuperstringExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperstringExpr#visit_all for (self: ASuperstringExpr, Visitor) */
void nitc__parser_prod___ASuperstringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2564);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperstringExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#init_aparexpr for (self: AParExpr, nullable TOpar, nullable AExpr, nullable TCpar, nullable AAnnotations) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6709);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val = var_n_opar; /* _n_opar on <self:AParExpr> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6710);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6711);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AParExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6712);
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
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6713);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExpr> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6714);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#replace_child for (self: AParExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6721);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6722);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___n_opar_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_opar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6725);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6726);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_expr= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6729);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6730);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_cpar= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6734);
fatal_exit(1);
}
{
nitc__parser_prod___AParExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AParExpr#n_annotations= on <self:AParExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void nitc__parser_prod___AParExpr___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val = var_node; /* _n_opar on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_expr= for (self: AParExpr, AExpr) */
void nitc__parser_prod___AParExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val = var_node; /* _n_expr on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void nitc__parser_prod___AParExpr___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val = var_node; /* _n_cpar on <self:AParExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#n_annotations= for (self: AParExpr, nullable AAnnotations) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExpr#visit_all for (self: AParExpr, Visitor) */
void nitc__parser_prod___AParExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : AExpr */;
val* var2 /* : TCpar */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6763);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6764);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6765);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#init_aascastexpr for (self: AAsCastExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable AType, nullable TCpar) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6778);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsCastExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6779);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6780);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsCastExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6781);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6784);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val = var_n_type; /* _n_type on <self:AAsCastExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6785);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#replace_child for (self: AAsCastExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6792);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6793);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_expr= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6796);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6797);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_kwas= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6801);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_opar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6804);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6805);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_type= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6809);
fatal_exit(1);
}
{
nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAsCastExpr#n_cpar= on <self:AAsCastExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_expr= for (self: AAsCastExpr, AExpr) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_kwas= for (self: AAsCastExpr, TKwas) */
void nitc__parser_prod___AAsCastExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_opar= for (self: AAsCastExpr, nullable TOpar) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void nitc__parser_prod___AAsCastExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val = var_node; /* _n_type on <self:AAsCastExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#n_cpar= for (self: AAsCastExpr, nullable TCpar) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsCastExpr#visit_all for (self: AAsCastExpr, Visitor) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6843);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6844);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6846);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#init_aasnotnullexpr for (self: AAsNotnullExpr, nullable AExpr, nullable TKwas, nullable TOpar, nullable TKwnot, nullable TKwnull, nullable TCpar) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6860);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_n_expr; /* _n_expr on <self:AAsNotnullExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6861);
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
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6862);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_n_kwas; /* _n_kwas on <self:AAsNotnullExpr> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6863);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL8:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6866);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var_n_kwnot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6867);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnot,self) on <var_n_kwnot:nullable TKwnot> */
if (unlikely(var_n_kwnot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwnot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnot:nullable TKwnot> */
RET_LABEL9:(void)0;
}
}
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6868);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_n_kwnull; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var_n_kwnull == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6869);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnull,self) on <var_n_kwnull:nullable TKwnull> */
if (unlikely(var_n_kwnull == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#replace_child for (self: AAsNotnullExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6876);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6877);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_expr= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6880);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6881);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwas= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6885);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_opar_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_opar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6888);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6889);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwnot= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6892);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6893);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___n_kwnull_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_kwnull= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
var48 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6897);
fatal_exit(1);
}
{
nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AAsNotnullExpr#n_cpar= on <self:AAsNotnullExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_expr= for (self: AAsNotnullExpr, AExpr) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val = var_node; /* _n_expr on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwas= for (self: AAsNotnullExpr, TKwas) */
void nitc__parser_prod___AAsNotnullExpr___nitc__parser_nodes__AAsCastForm__n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val = var_node; /* _n_kwas on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_opar= for (self: AAsNotnullExpr, nullable TOpar) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void nitc__parser_prod___AAsNotnullExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void nitc__parser_prod___AAsNotnullExpr___n_kwnull_61d(val* self, val* p0) {
val* var_node /* var node: TKwnull */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val = var_node; /* _n_kwnull on <self:AAsNotnullExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwnull> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnull> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#n_cpar= for (self: AAsNotnullExpr, nullable TCpar) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAsNotnullExpr#visit_all for (self: AAsNotnullExpr, Visitor) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6936);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6937);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6939);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6940);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#init_aissetattrexpr for (self: AIssetAttrExpr, nullable TKwisset, nullable AExpr, nullable TAttrid) */
void nitc__parser_prod___AIssetAttrExpr___init_aissetattrexpr(val* self, val* p0, val* p1, val* p2) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6951);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_n_kwisset; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var_n_kwisset == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6952);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwisset,self) on <var_n_kwisset:nullable TKwisset> */
if (unlikely(var_n_kwisset == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwisset->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwisset:nullable TKwisset> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6953);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIssetAttrExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6954);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6955);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val = var_n_id; /* _n_id on <self:AIssetAttrExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6956);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TAttrid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TAttrid> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#replace_child for (self: AIssetAttrExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6961);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6962);
fatal_exit(1);
}
{
nitc__parser_prod___AIssetAttrExpr___n_kwisset_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_kwisset= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6965);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6966);
fatal_exit(1);
}
{
nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_expr= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6969);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6970);
fatal_exit(1);
}
{
nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AIssetAttrExpr#n_id= on <self:AIssetAttrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void nitc__parser_prod___AIssetAttrExpr___n_kwisset_61d(val* self, val* p0) {
val* var_node /* var node: TKwisset */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val = var_node; /* _n_kwisset on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwisset> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwisset> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_expr= for (self: AIssetAttrExpr, AExpr) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val = var_node; /* _n_expr on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#n_id= for (self: AIssetAttrExpr, TAttrid) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__AAttrFormExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TAttrid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val = var_node; /* _n_id on <self:AIssetAttrExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAttrid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAttrid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIssetAttrExpr#visit_all for (self: AIssetAttrExpr, Visitor) */
void nitc__parser_prod___AIssetAttrExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwisset */;
val* var1 /* : AExpr */;
val* var2 /* : TAttrid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwisset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6994);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6995);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 6996);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#init_adebugtypeexpr for (self: ADebugTypeExpr, nullable TKwdebug, nullable TKwtype, nullable AExpr, nullable AType) */
void nitc__parser_prod___ADebugTypeExpr___init_adebugtypeexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7007);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_n_kwdebug; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var_n_kwdebug == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7008);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdebug,self) on <var_n_kwdebug:nullable TKwdebug> */
if (unlikely(var_n_kwdebug == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwdebug->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdebug:nullable TKwdebug> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7009);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7010);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwtype->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7011);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ADebugTypeExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7012);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7013);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val = var_n_type; /* _n_type on <self:ADebugTypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7014);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#replace_child for (self: ADebugTypeExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7019);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7020);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_kwdebug_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_kwdebug= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7023);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7024);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_kwtype_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_kwtype= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7027);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7028);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_expr= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7031);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7032);
fatal_exit(1);
}
{
nitc__parser_prod___ADebugTypeExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#ADebugTypeExpr#n_type= on <self:ADebugTypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void nitc__parser_prod___ADebugTypeExpr___n_kwdebug_61d(val* self, val* p0) {
val* var_node /* var node: TKwdebug */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val = var_node; /* _n_kwdebug on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdebug> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdebug> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void nitc__parser_prod___ADebugTypeExpr___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val = var_node; /* _n_kwtype on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void nitc__parser_prod___ADebugTypeExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val = var_node; /* _n_expr on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void nitc__parser_prod___ADebugTypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val = var_node; /* _n_type on <self:ADebugTypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADebugTypeExpr#visit_all for (self: ADebugTypeExpr, Visitor) */
void nitc__parser_prod___ADebugTypeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdebug */;
val* var1 /* : TKwtype */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdebug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7061);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7062);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7063);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7064);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#init_avarargexpr for (self: AVarargExpr, nullable AExpr, nullable TDotdotdot) */
void nitc__parser_prod___AVarargExpr___init_avarargexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7073);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVarargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7074);
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
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7075);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AVarargExpr> */
if (var_n_dotdotdot == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7076);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot> */
if (unlikely(var_n_dotdotdot == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_dotdotdot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#replace_child for (self: AVarargExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7081);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7082);
fatal_exit(1);
}
{
nitc__parser_prod___AVarargExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AVarargExpr#n_expr= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7085);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7086);
fatal_exit(1);
}
{
nitc__parser_prod___AVarargExpr___n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod#AVarargExpr#n_dotdotdot= on <self:AVarargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_expr= for (self: AVarargExpr, AExpr) */
void nitc__parser_prod___AVarargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val = var_node; /* _n_expr on <self:AVarargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#n_dotdotdot= for (self: AVarargExpr, TDotdotdot) */
void nitc__parser_prod___AVarargExpr___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: TDotdotdot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AVarargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TDotdotdot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TDotdotdot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVarargExpr#visit_all for (self: AVarargExpr, Visitor) */
void nitc__parser_prod___AVarargExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : TDotdotdot */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7105);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_dotdotdot].val; /* _n_dotdotdot on <self:AVarargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_dotdotdot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7106);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#init_anamedargexpr for (self: ANamedargExpr, nullable TId, nullable TAssign, nullable AExpr) */
void nitc__parser_prod___ANamedargExpr___init_anamedargexpr(val* self, val* p0, val* p1, val* p2) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7116);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val = var_n_id; /* _n_id on <self:ANamedargExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7117);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7118);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val = var_n_assign; /* _n_assign on <self:ANamedargExpr> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7119);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7120);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANamedargExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7121);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#replace_child for (self: ANamedargExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7126);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7127);
fatal_exit(1);
}
{
nitc__parser_prod___ANamedargExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#ANamedargExpr#n_id= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7130);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7131);
fatal_exit(1);
}
{
nitc__parser_prod___ANamedargExpr___n_assign_61d(self, var_new_child); /* Direct call parser_prod#ANamedargExpr#n_assign= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7134);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7135);
fatal_exit(1);
}
{
nitc__parser_prod___ANamedargExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#ANamedargExpr#n_expr= on <self:ANamedargExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_id= for (self: ANamedargExpr, TId) */
void nitc__parser_prod___ANamedargExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val = var_node; /* _n_id on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_assign= for (self: ANamedargExpr, TAssign) */
void nitc__parser_prod___ANamedargExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val = var_node; /* _n_assign on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#n_expr= for (self: ANamedargExpr, AExpr) */
void nitc__parser_prod___ANamedargExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val = var_node; /* _n_expr on <self:ANamedargExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANamedargExpr#visit_all for (self: ANamedargExpr, Visitor) */
void nitc__parser_prod___ANamedargExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <self:ANamedargExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7159);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_assign].val; /* _n_assign on <self:ANamedargExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7160);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7161);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#init_atypeexpr for (self: ATypeExpr, nullable AType) */
void nitc__parser_prod___ATypeExpr___init_atypeexpr(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel#Object#init (self) on <self:ATypeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7169);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val = var_n_type; /* _n_type on <self:ATypeExpr> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7170);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#replace_child for (self: ATypeExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7175);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7176);
fatal_exit(1);
}
{
nitc__parser_prod___ATypeExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod#ATypeExpr#n_type= on <self:ATypeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#n_type= for (self: ATypeExpr, AType) */
void nitc__parser_prod___ATypeExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val = var_node; /* _n_type on <self:ATypeExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypeExpr#visit_all for (self: ATypeExpr, Visitor) */
void nitc__parser_prod___ATypeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ATypeExpr___n_type].val; /* _n_type on <self:ATypeExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7190);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#init_amethidexpr for (self: AMethidExpr, nullable AExpr, nullable AMethid) */
void nitc__parser_prod___AMethidExpr___init_amethidexpr(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7199);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AMethidExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7200);
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
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7201);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val = var_n_id; /* _n_id on <self:AMethidExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7202);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable AMethid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable AMethid> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#replace_child for (self: AMethidExpr, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7207);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7208);
fatal_exit(1);
}
{
nitc__parser_prod___AMethidExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AMethidExpr#n_expr= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7211);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7212);
fatal_exit(1);
}
{
nitc__parser_prod___AMethidExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod#AMethidExpr#n_id= on <self:AMethidExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#n_expr= for (self: AMethidExpr, AExpr) */
void nitc__parser_prod___AMethidExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val = var_node; /* _n_expr on <self:AMethidExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#n_id= for (self: AMethidExpr, AMethid) */
void nitc__parser_prod___AMethidExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val = var_node; /* _n_id on <self:AMethidExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethidExpr#visit_all for (self: AMethidExpr, Visitor) */
void nitc__parser_prod___AMethidExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_expr].val; /* _n_expr on <self:AMethidExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7231);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AMethidExpr___n_id].val; /* _n_id on <self:AMethidExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7232);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#init_aatexpr for (self: AAtExpr, nullable AAnnotations) */
void nitc__parser_prod___AAtExpr___init_aatexpr(val* self, val* p0) {
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
{
{ /* Inline kernel#Object#init (self) on <self:AAtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_annotations = p0;
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7240);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAtExpr> */
if (var_n_annotations == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7241);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations> */
if (unlikely(var_n_annotations == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#replace_child for (self: AAtExpr, ANode, nullable ANode) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7247);
fatal_exit(1);
}
{
nitc__parser_prod___AAtExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AAtExpr#n_annotations= on <self:AAtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#n_annotations= for (self: AAtExpr, nullable AAnnotations) */
void nitc__parser_prod___AAtExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAtExpr> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7255);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAtExpr#visit_all for (self: AAtExpr, Visitor) */
void nitc__parser_prod___AAtExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAtExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#init_amanyexpr for (self: AManyExpr, Collection[Object]) */
void nitc__parser_prod___AManyExpr___init_amanyexpr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nitc__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2655);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AManyExpr#replace_child for (self: AManyExpr, ANode, nullable ANode) */
void nitc__parser_prod___AManyExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2655);
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
/* method parser_prod#AManyExpr#visit_all for (self: AManyExpr, Visitor) */
void nitc__parser_prod___AManyExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes#AManyExpr#n_exprs (self) on <self:AManyExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AManyExpr___n_exprs].val; /* _n_exprs on <self:AManyExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2655);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#init_alistexprs for (self: AListExprs, Collection[Object]) */
void nitc__parser_prod___AListExprs___init_alistexprs(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AListExprs#replace_child for (self: AListExprs, ANode, nullable ANode) */
void nitc__parser_prod___AListExprs___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
/* method parser_prod#AListExprs#visit_all for (self: AListExprs, Visitor) */
void nitc__parser_prod___AListExprs___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
var_v = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AListExprs> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AListExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#init_aparexprs for (self: AParExprs, nullable TOpar, Collection[Object], nullable TCpar) */
void nitc__parser_prod___AParExprs___init_aparexprs(val* self, val* p0, val* p1, val* p2) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7311);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val = var_n_opar; /* _n_opar on <self:AParExprs> */
if (var_n_opar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7312);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar> */
if (unlikely(var_n_opar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7314);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AParExprs> */
if (var_n_cpar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7315);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar> */
if (unlikely(var_n_cpar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#replace_child for (self: AParExprs, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7320);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7321);
fatal_exit(1);
}
{
nitc__parser_prod___AParExprs___n_opar_61d(self, var_new_child); /* Direct call parser_prod#AParExprs#n_opar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7325);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7326);
fatal_exit(1);
}
{
nitc__parser_prod___AParExprs___n_cpar_61d(self, var_new_child); /* Direct call parser_prod#AParExprs#n_cpar= on <self:AParExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void nitc__parser_prod___AParExprs___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: TOpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val = var_node; /* _n_opar on <self:AParExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TOpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TOpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void nitc__parser_prod___AParExprs___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: TCpar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val = var_node; /* _n_cpar on <self:AParExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCpar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCpar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParExprs#visit_all for (self: AParExprs, Visitor) */
void nitc__parser_prod___AParExprs___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TOpar */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCpar */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_opar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7345);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cpar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7347);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#init_abraexprs for (self: ABraExprs, nullable TObra, Collection[Object], nullable TCbra) */
void nitc__parser_prod___ABraExprs___init_abraexprs(val* self, val* p0, val* p1, val* p2) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7357);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val = var_n_obra; /* _n_obra on <self:ABraExprs> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7358);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_exprs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7360);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraExprs> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7361);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#replace_child for (self: ABraExprs, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7366);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7367);
fatal_exit(1);
}
{
nitc__parser_prod___ABraExprs___n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraExprs#n_obra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7371);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7372);
fatal_exit(1);
}
{
nitc__parser_prod___ABraExprs___n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraExprs#n_cbra= on <self:ABraExprs>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void nitc__parser_prod___ABraExprs___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val = var_node; /* _n_obra on <self:ABraExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void nitc__parser_prod___ABraExprs___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val = var_node; /* _n_cbra on <self:ABraExprs> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraExprs#visit_all for (self: ABraExprs, Visitor) */
void nitc__parser_prod___ABraExprs___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7391);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:ABraExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:ABraExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2709);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExpr]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7393);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#init_aplusassignop for (self: APlusAssignOp, nullable TPluseq) */
void nitc__parser_prod___APlusAssignOp___init_aplusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPluseq */;
{
{ /* Inline kernel#Object#init (self) on <self:APlusAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7401);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APlusAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7402);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPluseq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPluseq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#replace_child for (self: APlusAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7407);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7408);
fatal_exit(1);
}
{
nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#APlusAssignOp#n_op= on <self:APlusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#n_op= for (self: APlusAssignOp, Token) */
void nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APlusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusAssignOp#visit_all for (self: APlusAssignOp, Visitor) */
void nitc__parser_prod___APlusAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APlusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7422);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#init_aminusassignop for (self: AMinusAssignOp, nullable TMinuseq) */
void nitc__parser_prod___AMinusAssignOp___init_aminusassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TMinuseq */;
{
{ /* Inline kernel#Object#init (self) on <self:AMinusAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7430);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AMinusAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7431);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TMinuseq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TMinuseq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#replace_child for (self: AMinusAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7436);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7437);
fatal_exit(1);
}
{
nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AMinusAssignOp#n_op= on <self:AMinusAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#n_op= for (self: AMinusAssignOp, Token) */
void nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AMinusAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusAssignOp#visit_all for (self: AMinusAssignOp, Visitor) */
void nitc__parser_prod___AMinusAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AMinusAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7451);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#init_astarassignop for (self: AStarAssignOp, nullable TStareq) */
void nitc__parser_prod___AStarAssignOp___init_astarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStareq */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7459);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7460);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStareq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStareq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#replace_child for (self: AStarAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7465);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7466);
fatal_exit(1);
}
{
nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarAssignOp#n_op= on <self:AStarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#n_op= for (self: AStarAssignOp, Token) */
void nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarAssignOp#visit_all for (self: AStarAssignOp, Visitor) */
void nitc__parser_prod___AStarAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7480);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#init_aslashassignop for (self: ASlashAssignOp, nullable TSlasheq) */
void nitc__parser_prod___ASlashAssignOp___init_aslashassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TSlasheq */;
{
{ /* Inline kernel#Object#init (self) on <self:ASlashAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7488);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ASlashAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7489);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TSlasheq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TSlasheq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#replace_child for (self: ASlashAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7494);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7495);
fatal_exit(1);
}
{
nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#ASlashAssignOp#n_op= on <self:ASlashAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#n_op= for (self: ASlashAssignOp, Token) */
void nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ASlashAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashAssignOp#visit_all for (self: ASlashAssignOp, Visitor) */
void nitc__parser_prod___ASlashAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ASlashAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7509);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#init_apercentassignop for (self: APercentAssignOp, nullable TPercenteq) */
void nitc__parser_prod___APercentAssignOp___init_apercentassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPercenteq */;
{
{ /* Inline kernel#Object#init (self) on <self:APercentAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7517);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APercentAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7518);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPercenteq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPercenteq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#replace_child for (self: APercentAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7523);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7524);
fatal_exit(1);
}
{
nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#APercentAssignOp#n_op= on <self:APercentAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#n_op= for (self: APercentAssignOp, Token) */
void nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APercentAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentAssignOp#visit_all for (self: APercentAssignOp, Visitor) */
void nitc__parser_prod___APercentAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APercentAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7538);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#init_astarstarassignop for (self: AStarstarAssignOp, nullable TStarstareq) */
void nitc__parser_prod___AStarstarAssignOp___init_astarstarassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarstareq */;
{
{ /* Inline kernel#Object#init (self) on <self:AStarstarAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7546);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AStarstarAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7547);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TStarstareq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarstareq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#replace_child for (self: AStarstarAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7552);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7553);
fatal_exit(1);
}
{
nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AStarstarAssignOp#n_op= on <self:AStarstarAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#n_op= for (self: AStarstarAssignOp, Token) */
void nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AStarstarAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarAssignOp#visit_all for (self: AStarstarAssignOp, Visitor) */
void nitc__parser_prod___AStarstarAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AStarstarAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7567);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#init_apipeassignop for (self: APipeAssignOp, nullable TPipeeq) */
void nitc__parser_prod___APipeAssignOp___init_apipeassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPipeeq */;
{
{ /* Inline kernel#Object#init (self) on <self:APipeAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7575);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:APipeAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7576);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TPipeeq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPipeeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#replace_child for (self: APipeAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7581);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7582);
fatal_exit(1);
}
{
nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#APipeAssignOp#n_op= on <self:APipeAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#n_op= for (self: APipeAssignOp, Token) */
void nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:APipeAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APipeAssignOp#visit_all for (self: APipeAssignOp, Visitor) */
void nitc__parser_prod___APipeAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:APipeAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7596);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#init_acaretassignop for (self: ACaretAssignOp, nullable TCareteq) */
void nitc__parser_prod___ACaretAssignOp___init_acaretassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TCareteq */;
{
{ /* Inline kernel#Object#init (self) on <self:ACaretAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7604);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ACaretAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7605);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TCareteq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TCareteq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#replace_child for (self: ACaretAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7610);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7611);
fatal_exit(1);
}
{
nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#ACaretAssignOp#n_op= on <self:ACaretAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#n_op= for (self: ACaretAssignOp, Token) */
void nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ACaretAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACaretAssignOp#visit_all for (self: ACaretAssignOp, Visitor) */
void nitc__parser_prod___ACaretAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ACaretAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7625);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#init_aampassignop for (self: AAmpAssignOp, nullable TAmpeq) */
void nitc__parser_prod___AAmpAssignOp___init_aampassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TAmpeq */;
{
{ /* Inline kernel#Object#init (self) on <self:AAmpAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7633);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AAmpAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7634);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TAmpeq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TAmpeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#replace_child for (self: AAmpAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7639);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7640);
fatal_exit(1);
}
{
nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AAmpAssignOp#n_op= on <self:AAmpAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#n_op= for (self: AAmpAssignOp, Token) */
void nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AAmpAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAmpAssignOp#visit_all for (self: AAmpAssignOp, Visitor) */
void nitc__parser_prod___AAmpAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AAmpAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7654);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#init_allassignop for (self: ALlAssignOp, nullable TLleq) */
void nitc__parser_prod___ALlAssignOp___init_allassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLleq */;
{
{ /* Inline kernel#Object#init (self) on <self:ALlAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7662);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:ALlAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7663);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TLleq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLleq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#replace_child for (self: ALlAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7668);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7669);
fatal_exit(1);
}
{
nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#ALlAssignOp#n_op= on <self:ALlAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#n_op= for (self: ALlAssignOp, Token) */
void nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:ALlAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlAssignOp#visit_all for (self: ALlAssignOp, Visitor) */
void nitc__parser_prod___ALlAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:ALlAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7683);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#init_aggassignop for (self: AGgAssignOp, nullable TGgeq) */
void nitc__parser_prod___AGgAssignOp___init_aggassignop(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGgeq */;
{
{ /* Inline kernel#Object#init (self) on <self:AGgAssignOp> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7691);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_n_op; /* _n_op on <self:AGgAssignOp> */
if (var_n_op == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7692);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_op,self) on <var_n_op:nullable TGgeq> */
if (unlikely(var_n_op == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGgeq> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#replace_child for (self: AGgAssignOp, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7697);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7698);
fatal_exit(1);
}
{
nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(self, var_new_child); /* Direct call parser_prod#AGgAssignOp#n_op= on <self:AGgAssignOp>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#n_op= for (self: AGgAssignOp, Token) */
void nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__AAssignOp__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val = var_node; /* _n_op on <self:AGgAssignOp> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgAssignOp#visit_all for (self: AGgAssignOp, Visitor) */
void nitc__parser_prod___AGgAssignOp___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignOp___n_op].val; /* _n_op on <self:AGgAssignOp> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7712);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AForGroup#init_aforgroup for (self: AForGroup, Collection[Object], nullable TKwin, nullable AExpr) */
void nitc__parser_prod___AForGroup___init_aforgroup(val* self, val* p0, val* p1, val* p2) {
val* var_n_ids /* var n_ids: Collection[Object] */;
val* var_n_kwin /* var n_kwin: nullable TKwin */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
{
{ /* Inline kernel#Object#init (self) on <self:AForGroup> */
RET_LABEL1:(void)0;
}
}
var_n_ids = p0;
var_n_kwin = p1;
var_n_expr = p2;
{
{ /* Inline parser_nodes#AForGroup#n_ids (self) on <self:AForGroup> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <self:AForGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1937);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_ids); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[TId]>*/
}
if (unlikely(var_n_kwin == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7723);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val = var_n_kwin; /* _n_kwin on <self:AForGroup> */
if (var_n_kwin == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7724);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwin,self) on <var_n_kwin:nullable TKwin> */
if (unlikely(var_n_kwin == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwin->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwin:nullable TKwin> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7725);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val = var_n_expr; /* _n_expr on <self:AForGroup> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7726);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForGroup#replace_child for (self: AForGroup, ANode, nullable ANode) */
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
{ /* Inline parser_nodes#AForGroup#n_ids (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <self:AForGroup> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1937);
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7732);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var4,var_old_child) on <var4:TKwin> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:TKwin> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7733);
fatal_exit(1);
}
{
nitc__parser_prod___AForGroup___n_kwin_61d(self, var_new_child); /* Direct call parser_prod#AForGroup#n_kwin= on <self:AForGroup>*/
}
goto RET_LABEL;
} else {
}
var11 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7736);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7737);
fatal_exit(1);
}
{
nitc__parser_prod___AForGroup___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AForGroup#n_expr= on <self:AForGroup>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AForGroup#n_kwin= for (self: AForGroup, TKwin) */
void nitc__parser_prod___AForGroup___n_kwin_61d(val* self, val* p0) {
val* var_node /* var node: TKwin */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val = var_node; /* _n_kwin on <self:AForGroup> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwin> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwin> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForGroup#n_expr= for (self: AForGroup, AExpr) */
void nitc__parser_prod___AForGroup___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val = var_node; /* _n_expr on <self:AForGroup> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AForGroup#visit_all for (self: AForGroup, Visitor) */
void nitc__parser_prod___AForGroup___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[TId] */;
val* var2 /* : ANodes[TId] */;
val* var3 /* : TKwin */;
val* var4 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AForGroup#n_ids (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <self:AForGroup> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1937);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[TId]>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_kwin].val; /* _n_kwin on <self:AForGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwin");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7757);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7758);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#init_amodulename for (self: AModuleName, nullable TQuad, Collection[Object], nullable TId) */
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
{ /* Inline kernel#Object#init (self) on <self:AModuleName> */
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
{ /* Inline kernel#Object#!= (var_n_quad,((val*)NULL)) on <var_n_quad:nullable TQuad> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_quad,self) on <var_n_quad:nullable TQuad(TQuad)> */
var_n_quad->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_quad:nullable TQuad(TQuad)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2835);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var7, var_n_path); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var7:ANodes[TId]>*/
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7771);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val = var_n_id; /* _n_id on <self:AModuleName> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7772);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#replace_child for (self: AModuleName, ANode, nullable ANode) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7778);
fatal_exit(1);
}
{
nitc__parser_prod___AModuleName___n_quad_61d(self, var_new_child); /* Direct call parser_prod#AModuleName#n_quad= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2835);
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7782);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7783);
fatal_exit(1);
}
{
nitc__parser_prod___AModuleName___n_id_61d(self, var_new_child); /* Direct call parser_prod#AModuleName#n_id= on <self:AModuleName>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TQuad> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TQuad(TQuad)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TQuad(TQuad)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#n_id= for (self: AModuleName, TId) */
void nitc__parser_prod___AModuleName___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val = var_node; /* _n_id on <self:AModuleName> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuleName#visit_all for (self: AModuleName, Visitor) */
void nitc__parser_prod___AModuleName___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TQuad */;
val* var1 /* : ANodes[TId] */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AModuleName#n_path (self) on <self:AModuleName> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2835);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[TId]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7804);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#init_aexterncalls for (self: AExternCalls, nullable TKwimport, Collection[Object]) */
void nitc__parser_prod___AExternCalls___init_aexterncalls(val* self, val* p0, val* p1) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7813);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AExternCalls> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7814);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwimport->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1381);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_extern_calls); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#replace_child for (self: AExternCalls, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7820);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7821);
fatal_exit(1);
}
{
nitc__parser_prod___AExternCalls___n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#AExternCalls#n_kwimport= on <self:AExternCalls>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1381);
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
/* method parser_prod#AExternCalls#n_kwimport= for (self: AExternCalls, TKwimport) */
void nitc__parser_prod___AExternCalls___n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val = var_node; /* _n_kwimport on <self:AExternCalls> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternCalls#visit_all for (self: AExternCalls, Visitor) */
void nitc__parser_prod___AExternCalls___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwimport */;
val* var1 /* : ANodes[AExternCall] */;
val* var3 /* : ANodes[AExternCall] */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_kwimport].val; /* _n_kwimport on <self:AExternCalls> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7836);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (self) on <self:AExternCalls> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <self:AExternCalls> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1381);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AExternCall]>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#init_asuperexterncall for (self: ASuperExternCall, nullable TKwsuper) */
void nitc__parser_prod___ASuperExternCall___init_asuperexterncall(val* self, val* p0) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
{
{ /* Inline kernel#Object#init (self) on <self:ASuperExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_kwsuper = p0;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7860);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperExternCall> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7861);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwsuper->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#replace_child for (self: ASuperExternCall, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7866);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7867);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperExternCall___n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperExternCall#n_kwsuper= on <self:ASuperExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#n_kwsuper= for (self: ASuperExternCall, TKwsuper) */
void nitc__parser_prod___ASuperExternCall___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperExternCall#visit_all for (self: ASuperExternCall, Visitor) */
void nitc__parser_prod___ASuperExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASuperExternCall___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7881);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#init_alocalpropexterncall for (self: ALocalPropExternCall, nullable AMethid) */
void nitc__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(val* self, val* p0) {
val* var_n_methid /* var n_methid: nullable AMethid */;
{
{ /* Inline kernel#Object#init (self) on <self:ALocalPropExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_methid = p0;
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7889);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:ALocalPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7890);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_methid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#replace_child for (self: ALocalPropExternCall, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7895);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AMethid> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7896);
fatal_exit(1);
}
{
nitc__parser_prod___ALocalPropExternCall___n_methid_61d(self, var_new_child); /* Direct call parser_prod#ALocalPropExternCall#n_methid= on <self:ALocalPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#n_methid= for (self: ALocalPropExternCall, AMethid) */
void nitc__parser_prod___ALocalPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val = var_node; /* _n_methid on <self:ALocalPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALocalPropExternCall#visit_all for (self: ALocalPropExternCall, Visitor) */
void nitc__parser_prod___ALocalPropExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7910);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#init_afullpropexterncall for (self: AFullPropExternCall, nullable AType, nullable TDot, nullable AMethid) */
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
{ /* Inline kernel#Object#init (self) on <self:AFullPropExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
var_n_dot = p1;
var_n_methid = p2;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7920);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AFullPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7921);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_dot,((val*)NULL)) on <var_n_dot:nullable TDot> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7924);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val = var_n_methid; /* _n_methid on <self:AFullPropExternCall> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7925);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_methid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#replace_child for (self: AFullPropExternCall, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7930);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7931);
fatal_exit(1);
}
{
nitc__parser_prod___AFullPropExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_type= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable TDot(TDot)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7935);
fatal_exit(1);
}
{
nitc__parser_prod___AFullPropExternCall___n_dot_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_dot= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7938);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:AMethid> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7939);
fatal_exit(1);
}
{
nitc__parser_prod___AFullPropExternCall___n_methid_61d(self, var_new_child); /* Direct call parser_prod#AFullPropExternCall#n_methid= on <self:AFullPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_type= for (self: AFullPropExternCall, AType) */
void nitc__parser_prod___AFullPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val = var_node; /* _n_type on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_dot= for (self: AFullPropExternCall, nullable TDot) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TDot> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDot(TDot)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDot(TDot)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#n_methid= for (self: AFullPropExternCall, AMethid) */
void nitc__parser_prod___AFullPropExternCall___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: AMethid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val = var_node; /* _n_methid on <self:AFullPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AMethid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFullPropExternCall#visit_all for (self: AFullPropExternCall, Visitor) */
void nitc__parser_prod___AFullPropExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : AMethid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7963);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_dot].val; /* _n_dot on <self:AFullPropExternCall> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7965);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#init_ainitpropexterncall for (self: AInitPropExternCall, nullable AType) */
void nitc__parser_prod___AInitPropExternCall___init_ainitpropexterncall(val* self, val* p0) {
val* var_n_type /* var n_type: nullable AType */;
{
{ /* Inline kernel#Object#init (self) on <self:AInitPropExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_type = p0;
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7973);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val = var_n_type; /* _n_type on <self:AInitPropExternCall> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7974);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#replace_child for (self: AInitPropExternCall, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7979);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7980);
fatal_exit(1);
}
{
nitc__parser_prod___AInitPropExternCall___n_type_61d(self, var_new_child); /* Direct call parser_prod#AInitPropExternCall#n_type= on <self:AInitPropExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#n_type= for (self: AInitPropExternCall, AType) */
void nitc__parser_prod___AInitPropExternCall___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val = var_node; /* _n_type on <self:AInitPropExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInitPropExternCall#visit_all for (self: AInitPropExternCall, Visitor) */
void nitc__parser_prod___AInitPropExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 7994);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#init_acastasexterncall for (self: ACastAsExternCall, nullable AType, nullable TDot, nullable TKwas, nullable AType) */
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
{ /* Inline kernel#Object#init (self) on <self:ACastAsExternCall> */
RET_LABEL1:(void)0;
}
}
var_n_from_type = p0;
var_n_dot = p1;
var_n_kwas = p2;
var_n_to_type = p3;
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8005);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val = var_n_from_type; /* _n_from_type on <self:ACastAsExternCall> */
if (var_n_from_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8006);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_from_type,self) on <var_n_from_type:nullable AType> */
if (unlikely(var_n_from_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
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
{ /* Inline kernel#Object#!= (var_n_dot,((val*)NULL)) on <var_n_dot:nullable TDot> */
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
{ /* Inline parser_nodes#ANode#parent= (var_n_dot,self) on <var_n_dot:nullable TDot(TDot)> */
var_n_dot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dot:nullable TDot(TDot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8009);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val = var_n_kwas; /* _n_kwas on <self:ACastAsExternCall> */
if (var_n_kwas == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8010);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwas,self) on <var_n_kwas:nullable TKwas> */
if (unlikely(var_n_kwas == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_kwas->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwas:nullable TKwas> */
RET_LABEL8:(void)0;
}
}
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8011);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val = var_n_to_type; /* _n_to_type on <self:ACastAsExternCall> */
if (var_n_to_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8012);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_to_type,self) on <var_n_to_type:nullable AType> */
if (unlikely(var_n_to_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var_n_to_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_to_type:nullable AType> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#replace_child for (self: ACastAsExternCall, ANode, nullable ANode) */
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
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8017);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8018);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_from_type_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_from_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable TDot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable TDot(TDot)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8022);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_dot_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_dot= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8025);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:TKwas> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:TKwas> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8026);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_kwas_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_kwas= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8029);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8030);
fatal_exit(1);
}
{
nitc__parser_prod___ACastAsExternCall___n_to_type_61d(self, var_new_child); /* Direct call parser_prod#ACastAsExternCall#n_to_type= on <self:ACastAsExternCall>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_from_type= for (self: ACastAsExternCall, AType) */
void nitc__parser_prod___ACastAsExternCall___n_from_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val = var_node; /* _n_from_type on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_dot= for (self: ACastAsExternCall, nullable TDot) */
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
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable TDot> */
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDot(TDot)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDot(TDot)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_kwas= for (self: ACastAsExternCall, TKwas) */
void nitc__parser_prod___ACastAsExternCall___n_kwas_61d(val* self, val* p0) {
val* var_node /* var node: TKwas */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val = var_node; /* _n_kwas on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwas> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwas> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#n_to_type= for (self: ACastAsExternCall, AType) */
void nitc__parser_prod___ACastAsExternCall___n_to_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val = var_node; /* _n_to_type on <self:ACastAsExternCall> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ACastAsExternCall#visit_all for (self: ACastAsExternCall, Visitor) */
void nitc__parser_prod___ACastAsExternCall___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AType */;
val* var1 /* : nullable TDot */;
val* var2 /* : TKwas */;
val* var3 /* : AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8059);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_dot].val; /* _n_dot on <self:ACastAsExternCall> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_kwas].val; /* _n_kwas on <self:ACastAsExternCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwas");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8061);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 8062);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
